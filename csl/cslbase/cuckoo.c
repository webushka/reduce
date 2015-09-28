// cuckoo.c                                      A C Norman, September 2015

/**************************************************************************
 * Copyright (C) 2015, Codemist Ltd.                     A C Norman       *
 *                                                                        *
 * Redistribution and use in source and binary forms, with or without     *
 * modification, are permitted provided that the following conditions are *
 * met:                                                                   *
 *                                                                        *
 *     * Redistributions of source code must retain the relevant          *
 *       copyright notice, this list of conditions and the following      *
 *       disclaimer.                                                      *
 *     * Redistributions in binary form must reproduce the above          *
 *       copyright notice, this list of conditions and the following      *
 *       disclaimer in the documentation and/or other materials provided  *
 *       with the distribution.                                           *
 *                                                                        *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    *
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      *
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS      *
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE         *
 * COPYRIGHT OWNERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,   *
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,   *
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS  *
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND *
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR  *
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF     *
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE * POSSIBILITY OF SUCH *
 * DAMAGE.                                                                *
 *************************************************************************/

// $Id$

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <errno.h>
#include <math.h>

#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
// or on newer systems maybe "#include <sys/select.h>

#include "cuckoo.h"

// Because the table was passed as a "void *" and we do not have
// a single type that maps the entries it is not feasible to use direct
// array access (as in "table[n]") to retrieve and update items in it.
// So here I have two macros that use the explicitly passed item size
// and accress arithmetic to create a pointer to the nth item in the
// table, and then the user-supplied functions to deal with just the
// part of the thing there that represents the key. These are macros
// not functions because they use a number of values not explicitly passed
// to them as arguments.

// The following definitions are in the header file, but are repeated here
// as comment for (what I hope is) clarity.

//- #define cuckoo_item(n) \
//-     ((char *)table + hash_item_size*(n))
//-
//- #define cuckoo_key(n) \
//-     ((*get_key)(cuckoo_item(n)))
//-
//- #define cuckoo_set_key(n, v) \
//-     ((*set_key)(cuckoo_item(n), v))
//-
//- uint32_t cuckoo_lookup(
//-     uint32_t key,             // integer key to look up
//-     void *table,              // base of the hash table
//-     size_t hash_item_size,    // size of each item in the table,
//-                               // must be <= MAX_CUCKOO_ITEM_SIZE
//-     uint32_t table_size,      // number of entries in the hash table
//-     cuckoo_get_key *get_key,  // function to retrieve keys from table
//-     uint32_t modulus2,        // used to give a secondary hash function
//-     uint32_t offset2)         // used to give a secondary hash function
//- {
//- // My initial hash value is merely the key reduced modulo the size of
//- // the table.
//-     uint32_t hash1 = key % table_size;
//-     uint32_t hash2;
//-     if (cuckoo_key(hash1) == key) return hash1;
//- // I have a secondary hash function that will not map onto the whole
//- // of the table - it uses a second smaller modulus and an offset. The
//- // sum of these must not exceed the table size (so as to avoid running
//- // over the end) but should probably be an appreciable fraction of it.
//-     hash2 = (key % modulus2) + offset2;
//-     if (cuckoo_key(hash2) == key) return hash2;
//- // The third and final place I look is found by adding the two previous
//- // hash values (and reducing modulo the table size). If the modulus operation
//- // was expensive but conditional branches were cheap then
//- //       if ((hash1 += hash2) >= table_size) hash1 -= table_size;
//- // could be used here.
//-     hash1 = (hash1 + hash2) % table_size;
//-     if (cuckoo_key(hash1) == key) return hash1;
//- // If the key is not found in any of those three locations I just return -1.
//-     return -1;
//- }

// I am expecting that insertion in these tables will not be done at
// all often, so having a somewhat clumsy-looking interface here does
// not worry me too much, and I will even accept code that is not
// terribly neat! cuckoo_insert will return either the offset in the
// table of the inserted item, or -1 if insetion failed. It will normally
// then be necessary to use this offset to put associated payload into
// the table.

// If an attempt to insert fails then in general the key that was being
// inserted will have been, but some other one will have been ejected. The
// ejected item ends up in cuckoo_pending_item.

// When shuffling the table I need a temporary location large enough to
// hold a single hash table entry. Here I bound the size.

#define MAX_CUCKOO_ITEM_SIZE 100
char cuckoo_pending_item[MAX_CUCKOO_ITEM_SIZE] = "";
static char cuckoo_ejected_item[MAX_CUCKOO_ITEM_SIZE] = "";

uint32_t cuckoo_insert(
    uint32_t key,             // integer key to look up
    cuckoo_importance *importance, // "importance" measure or NULL
    void *table,              // base of the hash table
    size_t hash_item_size,    // size of each item in the table,
                              // must be <= MAX_CUCKOO_ITEM_SIZE
    uint32_t table_size,      // number of entries in the hash table
    cuckoo_get_key *get_key,  // function to retrieve keys from table
    cuckoo_set_key *set_key,  // function to set a key in the table
    uint32_t modulus2,        // used to give a secondary hash function
    uint32_t offset2)         // used to give a secondary hash function
{
// The first thing I will do is to check if the item is already in the
// hash table. I will suppose that it can never be the case that a
// preferred position is empty but the key is still present.
    uint32_t original_key;
    uint32_t hash1 = key % table_size;
    uint32_t hash2, hash3;
    uint32_t w, where;
    int tries, imp;
    if (hash_item_size > MAX_CUCKOO_ITEM_SIZE)
    {   printf("Item size too large in cuckoo hashing code\n");
        exit(1);
    }
// Start by looking in the primary location, ie hash1.
    if ((w = cuckoo_key(hash1)) == key) return hash1;
// If that was a vacant location then the key could not be present anywhere
// and it can be inserted here.
    else if (w == 0)
    {   cuckoo_set_key(hash1, key);
        return hash1;
    }
    imp = (importance == NULL) ? CUCKOO_STANDARD : (*importance)(key);
// Now similarly for the second possible location... if that is permitted.
    if (imp != CUCKOO_VITAL)
    {   hash2 = (key % modulus2) + offset2;
        if ((w = cuckoo_key(hash2)) == key) return hash2;
        else if (w == 0)
        {   cuckoo_set_key(hash2, key);
            return hash2;
        }
        if (imp != CUCKOO_IMPORTANT)
// ... and the third. Note that the calculation of hash values here must
// be an exact match for that used in the code for cuckoo_lookup.
        {   hash3 = (hash1 + hash2) % table_size;
            if ((w = cuckoo_key(hash3)) == key) return hash3;
            else if (w == 0)
            {   cuckoo_set_key(hash3, key);
                return hash3;
            }
        }
    }
// We now have the situation where the item of interest is not already
// in the table but the valid places it would like to live are all
// already full. In this case I will force it to be inserted in its
// first choice location, ejecting whatever had been there previously.
// I put the item that is being inserted into cuckoo_pending_item and
// set a variable "where" to the place it needs to be put. 
    (*set_key)(&cuckoo_pending_item, key);
    where = hash1;
    original_key = key;
// When attemping an insert I may have a cascade of relocations. I will
// give up when the length of such a chain exceeds the size of the table.
// I do not view this as a totally rational perfect cut-off, but I believe
// it will at least come close: it allows any one insert to cause everything
// in the table to move!
    for (tries=0; tries<table_size; tries++)
    {
// At this point I am want to insert the item in pending_item at the
// location called where. I will arrange that when I get here that
// location is always in use, and so the item there will need to be ejected.
// The ejected item will then become the one that needs inserting, and I
// will investigate the three places that it might possibly live. If
// any one of them is empty I will put it there. Otherwise I because it
// was in the table already it must be in one of those locations. If it was
// in the first such I next try it in the second. If it was in the second
// I try the third, while if it was in the third I try in the first again.
        memcpy(&cuckoo_ejected_item, cuckoo_item(where),   hash_item_size);
        memcpy(cuckoo_item(where),   &cuckoo_pending_item, hash_item_size);
        memcpy(&cuckoo_pending_item, &cuckoo_ejected_item, hash_item_size);
// Identify the three places that the ejected item could poptentially
// live. One of these must be where it is at present being kicked out of!
        key = (*get_key)(&cuckoo_pending_item);
        imp = (importance == NULL) ? CUCKOO_STANDARD : (*importance)(key);
        hash1 = key % table_size;
        hash2 = (key % modulus2) + offset2;
        hash3 = (hash1 + hash2) % table_size;
// If one of those locations is at present empty then I can merely put
// the item there and I am done. Well actually if I am ejecting something
// then its first choice position can never be empty, since once a
// slot in the hash table is filled it always remains filled (albeit
// sometimes with something other than the item initially placed there).
// I will leave this code in as a comment to back up this observation!
        if (cuckoo_key(hash1) == 0)
        {   memcpy(cuckoo_item(hash1), &cuckoo_pending_item, hash_item_size);
// When I return I want to return the location of the newly inserted
// item. This may have been shuffled around somewhat since it was initially
// put somewhere (but in fact only between three candidate locations). The
// simplest code I can use here merely does a cuckoo_lookup to find
// it. It is for this purpose that I saved the original_key value.
            return cuckoo_lookup(original_key, table,
                                 hash_item_size, table_size,
                                 get_key, modulus2, offset2);
        }
        if (imp != CUCKOO_VITAL && cuckoo_key(hash2) == 0)
        {   memcpy(cuckoo_item(hash2), &cuckoo_pending_item, hash_item_size);
            return cuckoo_lookup(original_key, table,
                                 hash_item_size, table_size,
                                 get_key, modulus2, offset2);
        }
        if (imp == CUCKOO_STANDARD && cuckoo_key(hash3) == 0)
        {   memcpy(cuckoo_item(hash3), &cuckoo_pending_item, hash_item_size);
            return cuckoo_lookup(original_key, table,
                                 hash_item_size, table_size,
                                 get_key, modulus2, offset2);
        }
// Now I am going to have to do a cascading ejection, and this is where I
// arrange to cycle around the potential positions for each item.
        switch (imp)
        {
    default:
    case CUCKOO_STANDARD:
            where = where == hash1 ? hash2 :
                    where == hash2 ? hash3 :
                    hash1;
            break;
    case CUCKOO_IMPORTANT:
            where = where == hash1 ? hash2 :
                    hash1;
            break;
    case CUCKOO_VITAL:
            where = hash1;
            break;
        }
    }
    return -1;
}

// If I am compiling with one of the mingw32 compilers the fork() and wait()
// functions I use to implement parallel searches here are not available,
// so I will default to no parallelism. Otherwise I will use 8 processes,
// which will keep most desktop systems saturated! I will also allow for
// compilation with SEQUENTIAL defined to force non-parallel searches, if only
// in order to make it easier to check that branch of the code.

#if defined __MSVCRT__ || defined SEQUENTIAL
#define PROCESSCOUNT 1
#else
#define PROCESSCOUNT 8
#endif


static cuckoo_parameters cuckoo_try_options(
    int myid,
    uint32_t *items,
    int item_count,
    cuckoo_importance *importance,
    void *table,
    int hash_item_size,
    int initial_table_size,
    int max_table_size,
    cuckoo_get_key *get_key,
    cuckoo_set_key *set_key)
{
    cuckoo_parameters r;
    int i, probe_count;
    uint32_t table_size, modulus2, offset2;
    for (table_size = initial_table_size; table_size<max_table_size; table_size++)
    {   printf("Trial with table_size = %d\n", table_size);
        fflush(stdout);
        for (modulus2=(3*table_size)/4; modulus2<table_size; modulus2++)
        {
// I print a message every so often - the "% 500" here tries to get a
// decent balance between generating a swamping amount of rubbish and keeping
// observers happy that there is progress being made.
            if (modulus2 % 500 == 0) printf("modulus2 = %d\n", modulus2);
            for (offset2=1+myid;
                 offset2<=table_size-modulus2;
                 offset2+=PROCESSCOUNT)
            {   memset(table, 0, hash_item_size*table_size);
                for (i=0; i<item_count; i++)
                {   uint32_t r;
                    if (items[i] != 0) r = cuckoo_insert(
                        items[i],
                        importance,
                        table,
                        hash_item_size,
                        table_size,
                        get_key,
                        set_key,
                        modulus2,
                        offset2);
                    if (r == -1) break;
                }
// If the loop ran to completion then I had managed to insert every
// single item, and so I do not need to look at the next possible larger
// table size, value of modulus2 or alternative offset2.
                if (!(i < item_count)) break;
            }
            if (offset2 < table_size-modulus2) break;
        }
        if (modulus2 < table_size) break;
    }
    if (!(table_size < max_table_size))
    {   r.table_size = -1;
        r.modulus2 = r.offset2 = 0;
        return r;
    }
    printf("Success for %d items and table_size %d (%.2f%%)\n",
           item_count, table_size, (100.0*item_count)/table_size);
    printf("modulus2 = %d, offset2 = %d\n", modulus2, offset2);
// I will now try looking up each item to verify that the table can
// retrieve all I nee it to. This is only to confirm correctness and
// if I was 100% confident in my code I could remove it!
    for (i=0; i<item_count; i++)
    {   if (cuckoo_lookup(items[i],
                          table,
                          hash_item_size,
                          table_size,
                          get_key,
                          modulus2,
                          offset2) == -1)
        {   printf("Failed to find an item (%x) in the table\n", items[i]);
            printf("table_size = %d modulus2 = %d offset2 = %d\n", table_size, modulus2, offset2);
#ifdef VERBOSE
            for (i=0; i<item_count; i++)
            {   uint64_t x = items[i];
                printf("Item %x   %d %d %d\n",
                    (int)x, (int)(x % table_size), (int)((x % modulus2) + offset2),
                       (int)((x + (x % modulus2) + offset2) % table_size));
            }
            for (i=0; i<table_size; i++)
                printf("%5d: %x\n", i, (int)cuckoo_key(i));
#endif
            r.table_size = -1;
            r.modulus2 = r.offset2 = 0;
            return r;
        }
    }
// I will record the average number of probes needed to retrieve
// items. If each of the three possible locations for an iten ended up
// equally used then this would be 2.0 probes, but I hope that more
// keys end up in their first choice location than need to go in their
// third, and that hence the actual average will be lower than that. I
// further hope that the items I insert into the table first will tend to
// be especially favoured.
    probe_count = 0;
    for (i=0; i<item_count; i++)
    {   uint32_t key = items[i];
        uint32_t h1 = key % table_size;
        uint32_t h2 = key % modulus2 + offset2;
        if (key == cuckoo_key(h1)) probe_count += 1;
        else if (key == cuckoo_key(h2)) probe_count += 2;
        else probe_count += 3;
        if (i == (int)sqrt((double)item_count) ||
            i == item_count/4 ||
            i == item_count/2 ||
            i == (3*item_count)/4)
            printf("Average probes after %d items = %.2f\n",
                   i,  probe_count/(double)i);
    }
    printf("Average probes after %d items = %.2f\n",
           item_count,  probe_count/(double)item_count);
    r.table_size = table_size;
    r.modulus2 = modulus2;
    r.offset2 = offset2;
    return r;
}

// With multiple threads there is not going to be a guarantee that I
// find the smallest table, because it could be that one thread hogs
// all the available CPU time while happening to be "unlucky" and so
// when it finds a solution it is not a terribly good one. Meanwhile
// the other threads that would have found better solutions are just
// not very active and so never deliver. But my expectation is that
// on any reasonable computer the various searches will tend to run
// sufficiently closely in step that any effect at all of this sort
// will have only minimal effect. Imbalance can arise not just because of
// unfair thread scheduling, but because the searching done in each thread
// will not always take the same amount of time. This could all be
// addressed by implementing a search farm so that different search
// parameters were distributed in a careful way - I am viewing that as
// unnecessary for now.

#if PROCESSCOUNT != 1

#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>

#endif // PROCESSCOUNT != 1

static int to_parent_fd;

// This seeks a (near) optimal hash table. By default it will do the search
// using 8 parallel processes (created using "fork"). These are not kept
// in step in any special way, and so it could be that speed variations
// between them lead to one having run ahead, and then managing to find a
// solution that is larger than the optimum. Defining SEQUENTIAL at compile
// time avoids use of parallelism, but can be around 8 times slower.

// The code here accepts a simple C array of uint32_t key values which it
// builds the table from.  You can specify an initial table size. The
// conservative choice is the same as the number of items to be stored,
// i.e. hoping for 100% occupancy. Once you have run a search once (probably
// using parallel search) it may make sense to give an initial size just
// below or at the expected optimum so as to avoid re-trying too many
// hopeless cases.

cuckoo_parameters cuckoo_optimise(
    uint32_t *items,
    int item_count,
    cuckoo_importance *importance,
    void *table,
    int hash_item_size,
    int initial_table_size,
    int max_table_size,
    cuckoo_get_key *get_key,
    cuckoo_set_key *set_key)
{
    cuckoo_parameters r;
    r.table_size = -1;
    r.modulus2 = r.offset2 = 2;
#if PROCESSCOUNT != 1
// Here I create a bunch of child threads... and I will also need pipes
// for each to use to send data back to me.
    pid_t pids[PROCESSCOUNT];
    int pipefd[2*PROCESSCOUNT];
    int i, parent = 1, myid;
    for (i=0; i<8; i++)
        pipe(&pipefd[2*i]);
    for (i = 0; i<PROCESSCOUNT; i++)
    {   if (parent)
        {   pid_t p = fork();
            if (p != 0)
            {   pids[i] = p;
                close(pipefd[2*i+1]);
            }
            else
            {   myid = i;   // in a child
                close(pipefd[2*i]);
                to_parent_fd = pipefd[2*i+1];
                parent = 0;
            }
        }
    }
// The parent will use select() to detect when at least one of the sub-tasks
// has returned some information. Note that that could be that the task
// terminated without finding a solution.
//
    if (parent)
    {   int status, live_count;
        uint32_t table_size, modulus2, offset2;
// The loop here is because I may have multiple responses that are merely
// records of failure...
        for (live_count = PROCESSCOUNT; live_count>0;)
        {   char buffer[4];
            fd_set rdfs;
            int r, maxfd = 0, fd;
            FD_ZERO(&rdfs);
            table_size = -1;
            for (i=0; i<PROCESSCOUNT; i++)
            {   if (pipefd[2*i] != -1)
                {   FD_SET(pipefd[2*i], &rdfs);
                    if (pipefd[2*i] > maxfd) maxfd = pipefd[2*i];
                }
            }
            r = select(maxfd+1, &rdfs, NULL, NULL, NULL);
            if (r == -1)
            {   printf("Calamity : select failed with code %d\n", errno);
                exit(1);
            }
            for (i=0; i<PROCESSCOUNT; i++)
                if (pipefd[2*i] != -1 &&
                    FD_ISSET(pipefd[2*i], &rdfs)) break;
            if (i >= PROCESSCOUNT)
            {   printf("Calamity : select reported data but none found\n");
                exit(1);
            }
            fd = pipefd[2*i]; // the fd to read from now!
            pipefd[2*i] = -1;
            r = read(fd, &table_size, sizeof(table_size));
            if (r == -1)
            {   printf("Calamity : read failed on %d with code %d\n", fd, errno);
                exit(1);
            }
            live_count--;
// Sometimes the report is merely a task indicating that they finished
// without getting anywhere much.
            if (table_size == -1)
            {   close(fd);
                continue;
            }
            printf("table_size %d reported from task %d\n", table_size, i);
            r = read(fd, &modulus2, sizeof(modulus2));
            if (r == -1)
            {   printf("Calamity : read failed on %d with code %d\n", fd, errno);
                exit(1);
            }
            r = read(fd, &offset2, sizeof(offset2));
            if (r == -1)
            {   printf("Calamity : read failed on %d with code %d\n", fd, errno);
                exit(1);
            }
            r = read(fd, table, table_size*hash_item_size);
            if (r == -1)
            {   printf("Calamity : read failed on %d with code %d\n", fd, errno);
                exit(1);
            }
            printf("modulus2 = %d offset2 = %d\n", (int)modulus2, (int)offset2);
            break;
        }
// I may exit the above loop because all the processes have terminated, but
// none delivered a useful result. In thet case tyable_size will have been
// left at -1.
        if (table_size == -1) modulus2 = offset2 = 0;
// Kill all the child processes, and do a wait operation on each so that
// it can be really fully tidied up. If the process has already terminated
// the kill operation is not needed, but not should not hurt.
        for (i=0; i<PROCESSCOUNT; i++)
        {   kill(pids[i], SIGKILL);
            waitpid(pids[i], &status, 0);
            close(pipefd[2*i]);
        }
        r.table_size = table_size;
        r.modulus2 = modulus2;
        r.offset2 = offset2;
        return r;
    }
    else
#else  // PROCESSCOUNT
    int myid = 0;
#endif
// A child (or only) thread runs the search procedure to seek a nice
// arrangement of the hash table.
    {   cuckoo_parameters r = cuckoo_try_options(
            myid,
            items,
            item_count,
            importance,
            table,
            hash_item_size,
            initial_table_size,
            max_table_size,
            get_key,
            set_key);
#if PROCESSCOUNT != 1
        printf("Task %d sending %d %d %d to parent (%d)\n",
               myid, (int)r.table_size, (int)r.modulus2, (int)r.offset2,
               (int)to_parent_fd);
        write(to_parent_fd, &r.table_size, sizeof(r.table_size));
        write(to_parent_fd, &r.modulus2, sizeof(r.modulus2));
        write(to_parent_fd, &r.offset2, sizeof(r.offset2));
        write(to_parent_fd, table, r.table_size*hash_item_size);
        close(to_parent_fd);
        fflush(stdout);
// A child processes just terminate when complete. It does not need to
// return a value in any ordinary way.
        exit(0);
#else
        return r;
#endif
    }
}

// Now the sensible function for users! This will use binary-chop to
// identify an optimal solution. I suggest that it be passed the number of
// (distinct) keys as its minimum table size (minus one just to be completely
// certain it is not feasible) , and say twice that as the maximum.
//
// Note that the search will be from [min..max), ie the minimum size quoted
// will be tested by the largest acceptable size will be one lower than the
// one given. This is so that teh max can be passed as the size of the
// hash table (and is because of zero-based array addresses).
//
// I am generally going to expect that the search will fail fairly promptly
// for a table-size that is significantly too low, and succeed very repidly
// for table-sises even modestly greater than the threshold.
//
// This will create and destroy a load of processes for each search it
// performs, and for small tables that will represent bad overhead. But
// for large tables it will not matter at all. Also this code should
// always find a strictly smallest table regardless of how cpu time is
// allocated to each of the sub-processes.
//
// It will report failure if either the minimum specified table size has
// a succesfull allocation or the maximum one does not.


cuckoo_parameters cuckoo_binary_optimise(
    uint32_t *items,
    int item_count,
    cuckoo_importance *importance,
    void *table,
    int hash_item_size,
    int min_table_size,
    int max_table_size,
    cuckoo_get_key *get_key,
    cuckoo_set_key *set_key)
{
    cuckoo_parameters r, r1;
// First verify that the low limit does not lead to success.
    r = cuckoo_optimise(    
        items,
        item_count,
        importance,
        table,
        hash_item_size,
        min_table_size,
        min_table_size+1,
        get_key,
        set_key);
    if (r.table_size != -1)
    {   r.table_size = -1;
// the "1" is the following two fields perhaps marks what went wrong!
        r.modulus2 = r.offset2 = 1;
        return r;
    }
// Next confirm that the high limit does lead to success.
    r = cuckoo_optimise(    
        items,
        item_count,
        importance,
        table,
        hash_item_size,
        max_table_size-1,
        max_table_size,
        get_key,
        set_key);
// Oops - it did not!
    if (r.table_size == -1) return r;
    while (max_table_size > min_table_size+1)
    {   int mid = (min_table_size + max_table_size)/2;
        r1 = cuckoo_optimise(    
            items,
            item_count,
            importance,
            table,
            hash_item_size,
            mid,
            mid+1,
            get_key,
            set_key);
        if (r1.table_size == -1) min_table_size = mid;
        else
        {   max_table_size = mid;
            r = r1;
        }
    }
    return r;
}

// end of cuckoo.c


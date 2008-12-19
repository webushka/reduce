
/* $srcdir/../csl-c\u10.c Machine generated C code */

/* Signature: 00000000 24-Nov-2006 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <time.h>
#ifndef _cplusplus
#include <setjmp.h>
#endif

#include "config.h"

#ifndef header_machine_h
#define header_machine_h 1
#if !defined UNDER_CE && ((defined HAVE_SOCKET && defined HAVE_SYS_SOCKET_H) || defined WIN32)
#define SOCKETS                  1
#endif
#ifndef MS_CDECL
#ifdef _MSC_VER
#  define MS_CDECL __cdecl
#else
#  define MS_CDECL
#endif
#endif
#ifdef WIN32
#  ifdef WIN64
#     define OPSYS           "win64"
#     define IMPNAME         "win64"
#  else
#     define OPSYS           "win32"
#     define IMPNAME         "win32"
#  endif
#else
#  ifdef HOST_OS
#     define OPSYS           HOST_OS
#     ifdef HOST_CPU
#        define IMPNAME      HOST_OS ":" HOST_CPU
#     else
#        define IMPNAME      HOST_OS
#     endif
#  else
#     define OPSYS           "Unknown"
#     define IMPNAME         "Generic"
#  endif
#endif
#endif 
#ifndef header_tags_h
#define header_tags_h 1
#if SIZEOF_INT==8 || SIZEOF_LONG==8 || (defined SIZEOF_LONG_LONG && SIZEOF_LONG_LONG==8)
#  define SIXTY_FOUR_BIT 1
#endif
#if SIZEOF_VOID_P==8
#  define ADDRESS_64 1
#endif
#if defined SIXTY_FOUR_BIT && SIZEOF_LONG<8
#define LONG_LONG_64 1
#endif
#if SIZEOF_INT<8 && SIZEOF_LONG<8 && defined SIZEOF_LONG_LONG && SIZEOF_LONG_LONG==8
typedef long long             int64;
typedef unsigned long long    unsigned64;
#else
#if SIZEOF_LONG==8
typedef long int                 int64;
typedef unsigned long int        unsigned64;
#else
#if SIZEOF_INT==8
typedef int                      int64;
typedef unsigned int             unsigned64;
#else
#endif
#endif
#endif
#if SIZEOF_INT==4
typedef int                      int32;
typedef unsigned int             unsigned32;
#else
#if SIZEOF_SHORT_INT==4
typedef short int                int32;
typedef unsigned short int       unsigned32;
#else
#if SIZEOF_LONG==4
typedef long int                 int32;
typedef unsigned long int        unsigned32;
#else
typedef int                      int32;
typedef unsigned int             unsigned32;
#define OVERWIDE32 1
#endif
#endif
#endif
#if SIZEOF_SHORT_INT==2
typedef short int           int16;
typedef unsigned short int  unsigned16;
#else
#define ILP64 1
#endif
typedef signed char         int8;
typedef unsigned char       unsigned8;
#if defined SIXTY_FOUR_BIT && !defined OVERWIDE32
#define MULDIV64 1
#endif
typedef int                 CSLbool;
#define YES                 1
#define NO                  0
#ifndef PAGE_BITS
#  define PAGE_BITS             22
#endif 
#define PAGE_POWER_OF_TWO       (((unsigned32)1) << PAGE_BITS)
#define CSL_PAGE_SIZE           (PAGE_POWER_OF_TWO - 256U)
#ifndef MAX_HEAPSIZE
#  ifdef ADDRESS_64
#     define MAX_HEAPSIZE       20480
#  else
#     define MAX_HEAPSIZE       2048
#  endif
#endif 
#ifndef MAX_BPSSIZE
#  define MAX_BPSSIZE           64
#endif 
#define MEGABYTE                ((unsigned32)0x100000U)
#if PAGE_BITS >= 20
#define MAX_PAGES               (MAX_HEAPSIZE >> (PAGE_BITS-20))
#define MAX_BPS_PAGES           (MAX_BPSSIZE >> (PAGE_BITS-20))
#else
#define MAX_PAGES               (MAX_HEAPSIZE << (20-PAGE_BITS))
#define MAX_BPS_PAGES           (MAX_BPSSIZE << (20-PAGE_BITS))
#endif
#define MAX_NATIVE_PAGES        MAX_BPS_PAGES
#define PAGE_MASK               ((((unsigned32)1) << (32-PAGE_BITS)) - 1)
#define OFFSET_MASK             ((((unsigned32)1) << PAGE_BITS) - 1)
#define CSL_IGNORE(x)           (x = x)
#define LONGEST_LEGAL_FILENAME 200
#define FP_WORD_ORDER 0x01
#define FP_BYTE_ORDER 0x02
#define FP_VAXREP     0x04   
#define FP_IBMREP     0x08   
#define FP_MASK       0xff
#define FP_ARM  FP_WORD_ORDER
#define FP_370  (FP_WORD_ORDER|FP_BYTE_ORDER|FP_IBMREP)
#define FP_MIPS 0                              
#define FP_VAX  FP_VAXREP                      
#define FP_88K  (FP_WORD_ORDER|FP_BYTE_ORDER)  
#ifdef ADDRESS_64
typedef int64 Lisp_Object;
typedef int64 intxx;
typedef unsigned64 unsignedxx;
#else 
typedef int32 Lisp_Object;
typedef int32 intxx;
typedef unsigned32 unsignedxx;
#endif 
#define CELL sizeof(Lisp_Object)
#define TAG_BITS        7
#define TAG_CONS        0   
                            
#define TAG_FIXNUM      1   
#define TAG_ODDS        2   
#ifdef COMMON
#define TAG_SFLOAT      3   
#endif 
#define TAG_SYMBOL      4   
#define TAG_NUMBERS     5   
#define TAG_VECTOR      6   
#define TAG_BOXFLOAT    7   
#define fixnum_of_int(x)    ((Lisp_Object)(TAG_FIXNUM + (((int32)(x)) << 4)))
#ifdef SIGNED_SHIFTS_ARE_LOGICAL
#define int_of_fixnum(x)    ((int32)(((int32)(x)) < 0 ?           \
                             (((int32)(x))>>4) | (-0x10000000) :  \
                             (((int32)(x))>>4)))
#else 
#define int_of_fixnum(x)    ((int32)(((int32)(x)) >> 4))
#endif 
#define GC_BIT_I        8               
#define GC_BIT_H        8               
#ifdef ADDRESS_64
#define GC_BIT_P        ((intxx)(~0x7fffffffffffffffL))
#else 
#define GC_BIT_P        (~0x7fffffff)   
#endif 
#define is_marked_i(w)      (((int)(w) & GC_BIT_I) != 0)
extern Lisp_Object address_sign;  
#define is_marked_p(w)      (((Lisp_Object)(w) - address_sign) < 0)
#define clear_mark_bit_p(w) (((Lisp_Object)(w) & ~GC_BIT_P) + \
                              address_sign)
#define flip_mark_bit_i(w)  ((Lisp_Object)(w) ^ GC_BIT_I)
#define flip_mark_bit_h(w)  ((Header)(w) ^ GC_BIT_H)
#define flip_mark_bit_p(w)  ((Lisp_Object)(w) ^ GC_BIT_P)
#define is_marked_h(w)      (((int)(w) & GC_BIT_H) != 0)
#define exception_pending() (((int)nil & 1) != 0)
#define flip_exception()    (nil = C_nil = (nil ^ 1))
#define ignore_exception() \
   do { nil = C_nil; if (exception_pending()) flip_exception(); } while (0)
#define set_mark_bit_h(h)   ((Header)(h) | GC_BIT_H)
#define clear_mark_bit_h(h) ((Header)(h) & ~GC_BIT_H)
#define set_mark_bit_i(h)   ((Lisp_Object)(h) | GC_BIT_I)
#define clear_mark_bit_i(h) ((Lisp_Object)(h) & ~GC_BIT_I)
#define is_cons(p)   ((((int)(p)) & TAG_BITS) == TAG_CONS)
#define is_fixnum(p) ((((int)(p)) & TAG_BITS) == TAG_FIXNUM)
#define is_odds(p)   ((((int)(p)) & TAG_BITS) == TAG_ODDS) 
#ifdef COMMON
#define is_sfloat(p) ((((int)(p)) & TAG_BITS) == TAG_SFLOAT)
#endif 
#define is_symbol(p) ((((int)(p)) & TAG_BITS) == TAG_SYMBOL)
#define is_numbers(p)((((int)(p)) & TAG_BITS) == TAG_NUMBERS)
#define is_vector(p) ((((int)(p)) & TAG_BITS) == TAG_VECTOR)
#define is_bfloat(p) ((((int)(p)) & TAG_BITS) == TAG_BOXFLOAT)
#ifdef COMMON
#define consp(p)     (is_cons(p) && (p) != nil)
#define symbolp(p)   (is_symbol(p) || (p) == nil)
#else 
#define consp(p)     is_cons(p)
#define symbolp(p)   is_symbol(p)
#endif 
#define car_legal(p) is_cons(p)
#define is_number(p) ((((int)(p)) & 1) != 0) 
#define is_float(p)  ((((int)(p)) & 3) == 3) 
#define is_immed_or_cons(p) ((((int)(p)) & 4) == 0)
typedef struct Cons_Cell
{
    Lisp_Object car;
    Lisp_Object cdr;
} Cons_Cell;
#ifdef MEMORY_TRACE
extern Cons_Cell *memory_reference(intxx p);
extern char *cmemory_reference(intxx p);
extern void identify_page_types();
extern long int car_counter;
extern unsigned long int car_low, car_high;
#define qcar(p) (memory_reference((intxx)p)->car)
#define qcdr(p) (memory_reference((intxx)p)->cdr)
#else 
#define qcar(p) (((Cons_Cell *) (p))->car)
#define qcdr(p) (((Cons_Cell *) (p))->cdr)
#endif 
#define car32(p) (*(int32 *)(p))
typedef Lisp_Object Special_Form(Lisp_Object, Lisp_Object);
typedef Lisp_Object one_args(Lisp_Object, Lisp_Object);
typedef Lisp_Object two_args(Lisp_Object, Lisp_Object, Lisp_Object);
typedef Lisp_Object MS_CDECL n_args(Lisp_Object, int, ...);
#ifdef ADDRESS_64
typedef unsigned64 Header;
#else
typedef unsigned32 Header;
#endif
#define header_mask          0x3f0
#define type_of_header(h)    (((unsigned int)(h)) & header_mask)
#define length_of_header(h)  (((unsigned32)(h)) >> 10)
#define TYPE_SYMBOL         0x00000010
#define  SYM_SPECIAL_VAR    0x00000040  
#define  SYM_GLOBAL_VAR     0x00000080  
#define  SYM_SPECIAL_FORM   0x00000100  
#define  SYM_MACRO          0x00000200  
#define  SYM_C_DEF          0x00000400  
#define  SYM_CODEPTR        0x00000800  
#define  SYM_ANY_GENSYM     0x00001000  
#define  SYM_TRACED         0x00002000
#define  SYM_FASTGET_MASK   0x000fc000  
#define  SYM_FASTGET_SHIFT  14
#ifdef COMMON
#define  SYM_EXTERN_IN_HOME 0x00100000  
#define  SYM_IN_PACKAGE     0xffe00000  
#define  SYM_IN_PKG_SHIFT   23
#define  SYM_IN_PKG_COUNT   11
#else 
#define  SYM_UNPRINTED_GENSYM 0x00100000
#endif 
#define symhdr_length       ((sizeof(Symbol_Head) + 7) & ~7)
#define is_symbol_header(h) (((int)h & 0x30) == TYPE_SYMBOL)
#define header_fastget(h)   (((h) >> SYM_FASTGET_SHIFT) & 0x3f)
#define TYPE_BIGNUM         0x020   
#ifdef COMMON
#define TYPE_RATNUM         0x060
#define TYPE_COMPLEX_NUM    0x0a0
#define TYPE_SINGLE_FLOAT   0x120
#endif 
#define TYPE_DOUBLE_FLOAT   0x160
#ifdef COMMON
#define TYPE_LONG_FLOAT     0x1a0
#endif 
#ifdef MEMORY_TRACE
#define numhdr(v) (*(Header *)memory_reference((intxx)((char *)(v) - \
                                               TAG_NUMBERS)))
#define flthdr(v) (*(Header *)memory_reference((intxx)((char *)(v) - \
                                               TAG_BOXFLOAT)))
#else
#define numhdr(v) (*(Header *)((char *)(v) - TAG_NUMBERS))
#define flthdr(v) (*(Header *)((char *)(v) - TAG_BOXFLOAT))
#endif
#define is_numbers_header(h) (((int)(h) & 0x330) == 0x020)
#define is_boxfloat_header(h)(((int)(h) & 0x330) == 0x120)
#ifdef COMMON
#define is_ratio(n) \
    (type_of_header(numhdr(n)) == TYPE_RATNUM)
#define is_complex(n) \
    (type_of_header(numhdr(n)) == TYPE_COMPLEX_NUM)
#endif 
#define is_bignum_header(h) (type_of_header(h) == TYPE_BIGNUM)
#define is_bignum(n) is_bignum_header(numhdr(n))
#ifdef ADDRESS_64
#define ADDRESS_SHIFT 3
#else
#define ADDRESS_SHIFT 2
#endif
#ifdef MEMORY_TRACE
#define vechdr(v)  (*(Header *)memory_reference((intxx)((char *)(v) - \
                               TAG_VECTOR)))
#define elt(v, n)  (*(Lisp_Object *)memory_reference((intxx)((char *)(v) + \
                               (CELL-TAG_VECTOR) + \
                               (((intxx)(n))<<ADDRESS_SHIFT))))
#define celt(v, n) (*cmemory_reference((intxx)((char *)(v) + \
                               (CELL-TAG_VECTOR)+((intxx)(n)))))
#define ucelt(v, n) (*(unsigned char *)cmemory_reference( \
                               (intxx)((char *)(v) + \
                               (CELL-TAG_VECTOR)+((intxx)(n)))))
#define scelt(v, n) (*(signed char *)cmemory_reference( \
                               (intxx)((char *)(v) + \
                               (CELL-TAG_VECTOR)+((intxx)(n)))))
#else 
#define vechdr(v)  (*(Header *)((char *)(v) - TAG_VECTOR))
#define elt(v, n)  (*(Lisp_Object *)((char *)(v) + \
                               (CELL-TAG_VECTOR) + \
                               (((intxx)(n))<<ADDRESS_SHIFT)))
#define celt(v, n) (*((char *)(v) + (CELL-TAG_VECTOR)+((intxx)(n))))
#define ucelt(v, n) (*((unsigned char *)(v) + (CELL-TAG_VECTOR)+((intxx)(n))))
#define scelt(v, n) (*((signed char *)(v) + (CELL-TAG_VECTOR)+((intxx)(n))))
#endif 
#ifdef ADDRESS_64
#define helt(v, n) \
   ((*(unsigned char *)((v) + (CELL-TAG_VECTOR) + (2*(intxx)(n))) | \
    (*(signed char *)((v) + (CELL-TAG_VECTOR+1) + (2*(intxx)(n)))) << 8))
#define sethelt(v, n, x) \
   do { \
      *(char *)((v) + (CELL-TAG_VECTOR+0) + (2*(intxx)(n))) = (x); \
      *(char *)((v) + (CELL-TAG_VECTOR+1) + (2*(intxx)(n))) = (x)>>8; \
      } while (0)
#else
#define helt(v, n)  (*(short int *)((char *)(v) + \
                           (CELL-TAG_VECTOR)+(2*(intxx)(n))))
#define sethelt(v, n, x) (helt(v, n) = (x))
#endif 
#define ielt(v, n)  (*(intxx *)((char *)(v) + \
                           (CELL-TAG_VECTOR)+(((intxx)(n))<<ADDRESS_SHIFT)))
#define ielt32(v, n)  (*(int32 *)((char *)(v) + \
                           (CELL-TAG_VECTOR)+(((intxx)(n))<<2)))
#define felt(v, n)  (*(float *)((char *)(v) + \
                           (CELL-TAG_VECTOR)+(((intxx)(n))<<2)))
#define delt(v, n)  (*(double *)((char *)(v) + \
                           (2*CELL-TAG_VECTOR)+(((intxx)(n))<<3)))
#ifdef COMMON
#define TYPE_BITVEC1        0x030   
#define TYPE_BITVEC2        0x0b0   
#define TYPE_BITVEC3        0x130
#define TYPE_BITVEC4        0x1b0   
#define TYPE_BITVEC5        0x230   
#define TYPE_BITVEC6        0x2b0   
#define TYPE_BITVEC7        0x330   
#define TYPE_BITVEC8        0x3b0   
#define header_of_bitvector(h) (((h) & 0x70) == TYPE_BITVEC1)
#endif 
#define TYPE_STRING         0x070   
#define TYPE_BPS            0x170   
#define TYPE_SPARE          0x270   
#define TYPE_MAPLEREF       TYPE_SPARE 
#define TYPE_SP             0x370   
#ifdef COMMON
#define vector_holds_binary(h) (((h) & 0x80) == 0 || header_of_bitvector(h))
#else
#define vector_holds_binary(h) (((h) & 0x80) == 0)
#endif
#define TYPE_SIMPLE_VEC     0x0f0   
#define TYPE_HASH           0x1f0   
#define TYPE_ARRAY          0x2f0   
#define TYPE_STRUCTURE      0x3f0   
#define is_mixed_header(h) (((h) & 0x2b0) == TYPE_MIXED1)
#define TYPE_VEC8           TYPE_BPS
#define TYPE_VEC16          0x220   
#define TYPE_VEC32          0x260   
#define TYPE_MIXED1         0x2a0   
#define TYPE_MIXED2         0x2e0   
#define TYPE_FLOAT32        0x320   
#define TYPE_FLOAT64        0x360   
#define TYPE_MIXED3         0x3a0   
#define TYPE_STREAM         0x3e0   
#define ODDS_MASK           0xff
#define TAG_CHAR            0x02    
#define TAG_BPS             0x42
#define TAG_SPID            0xc2    
#define SPID_NIL            (TAG_SPID+0x0000)  
#define SPID_FBIND          (TAG_SPID+0x0100)  
#define SPID_CATCH          (TAG_SPID+0x0200)  
#define SPID_PROTECT        (TAG_SPID+0x0300)  
#define SPID_HASH0          (TAG_SPID+0x0400)  
#define SPID_HASH1          (TAG_SPID+0x0500)  
#define SPID_GCMARK         (TAG_SPID+0x0600)  
#define SPID_NOINPUT        (TAG_SPID+0x0700)  
#define SPID_ERROR          (TAG_SPID+0x0800)  
#define SPID_PVBIND         (TAG_SPID+0x0900)  
#define SPID_NOARG          (TAG_SPID+0x0a00)  
#define SPID_NOPROP         (TAG_SPID+0x0b00)  
#define SPID_LIBRARY        (TAG_SPID+0x0c00)  
#define is_header(x) (((int)(x) & 0x30) != 0)     
#define is_char(x)   (((int)(x) & ODDS_MASK) == TAG_CHAR)
#define is_bps(x)    (((int)(x) & ODDS_MASK) == TAG_BPS)
#define is_hashtab(x)(((int)(x) & ODDS_MASK) == TAG_HASHTAB)
#define is_spid(x)   (((int)(x) & ODDS_MASK) == TAG_SPID)
#define is_library(x)(((int)(x) & 0xffff)    == SPID_LIBRARY)
#define library_number(x) (((x) >> 20) & 0xfff)
#define font_of_char(n)  (((int32)(n) >> 24) & 0xff)
#define bits_of_char(n)  (((int32)(n) >> 16) & 0xff)
#ifdef Kanji
#define code_of_char(n)  (((int32)(n) >>  8) & 0xffff)
#else
#define code_of_char(n)  ((char)(((int32)(n) >>  8) & 0xff))
#endif
#define pack_char(bits, font, code)                                \
    ((Lisp_Object)((((unsigned32)(font)) << 24) |                  \
    (((unsigned32)(bits)) << 16) | (((unsigned32)(code)) << 8) | TAG_CHAR))
    
#define CHAR_EOF pack_char(0, 0xff, 4)
 
#define data_of_bps(v) \
  ((char *)(doubleword_align_up((intxx) \
             bps_pages[((unsigned32)(v))>>(PAGE_BITS+6)]) + \
            (((v) >> 6) & (PAGE_POWER_OF_TWO-4))))
typedef int32 junk;      
typedef intxx junkxx;    
typedef struct Symbol_Head
{
    Header header;      
    Lisp_Object value;  
    Lisp_Object env;    
    intxx function1;     
    intxx function2;     
    intxx functionn;     
    Lisp_Object pname;   
    Lisp_Object plist;   
    Lisp_Object fastgets;
    unsignedxx count;    
#ifdef COMMON
    Lisp_Object package;
#endif
} Symbol_Head;
#define MAX_FASTGET_SIZE  63
#ifdef ADDRESS_64
#ifdef COMMON
#define symalign(n) ((char *)((intxx)(n) & ~(intxx)TAG_SYMBOL))
#else
#define symalign(n) (n)
#endif
#else
#define symalign(n) (n)
#endif
#ifndef MEMORY_TRACE
#define qheader(p)     (*(Header *)     symalign((char *)(p) - TAG_SYMBOL))
#define qvalue(p)      (*(Lisp_Object *)symalign((char *)(p) + (CELL - TAG_SYMBOL)))
#define qenv(p)        (*(Lisp_Object *)symalign((char *)(p) + (2*CELL - TAG_SYMBOL)))
#define qfn1(p)        ((one_args *) *((intxx *)symalign((char *)(p) + \
                                         (3*CELL - TAG_SYMBOL))))
#define qfn2(p)        ((two_args *) *((intxx *)symalign((char *)(p) + \
                                         (4*CELL - TAG_SYMBOL))))
#define qfnn(p)        ((n_args *)   *((intxx *)symalign((char *)(p) + \
                                         (5*CELL - TAG_SYMBOL))))
#define ifn1(p)        (*(intxx *)      symalign((char *)(p) + (3*CELL-TAG_SYMBOL)))
#define ifn2(p)        (*(intxx *)      symalign((char *)(p) + (4*CELL-TAG_SYMBOL)))
#define ifnn(p)        (*(intxx *)      symalign((char *)(p) + (5*CELL-TAG_SYMBOL)))
#define qpname(p)      (*(Lisp_Object *)symalign((char *)(p) + (6*CELL-TAG_SYMBOL)))
#define qplist(p)      (*(Lisp_Object *)symalign((char *)(p) + (7*CELL-TAG_SYMBOL)))
#define qfastgets(p)   (*(Lisp_Object *)symalign((char *)(p) + (8*CELL-TAG_SYMBOL)))
#define qcount(p)      (*(unsignedxx *) symalign((char *)(p) + (9*CELL-TAG_SYMBOL)))
#ifdef COMMON
#define qpackage(p)    (*(Lisp_Object *)symalign((char *)(p) + (10*CELL-TAG_SYMBOL)))
#endif
#else 
#define qheader(p)     (*(Header *)     memory_reference((intxx) \
                                         symalign((char *)(p) - TAG_SYMBOL)))
#define qvalue(p)      (*(Lisp_Object *)memory_reference((intxx) \
                                         symalign((char *)(p) + (CELL-TAG_SYMBOL))))
#define qenv(p)        (*(Lisp_Object *)memory_reference((intxx) \
                                         symalign((char *)(p) + (2*CELL-TAG_SYMBOL))))
#define qfn1(p)        ((one_args *) *(intxx *)memory_reference((intxx) \
                                         symalign((char *)(p) + (3*CELL-TAG_SYMBOL))))
#define qfn2(p)        ((two_args *) *(intxx *)memory_reference((intxx) \
                                         symalign((char *)(p) + (4*CELL-TAG_SYMBOL))))
#define qfnn(p)        ((n_args *)   *(intxx *)memory_reference((intxx) \
                                         symalign((char *)(p) + (5*CELL-TAG_SYMBOL))))
#define ifn1(p)        (*(intxx *)      memory_reference((intxx) \
                                         symalign((char *)(p) + (3*CELL-TAG_SYMBOL))))
#define ifn2(p)        (*(intxx *)      memory_reference((intxx) \
                                         symalign((char *)(p) + (4*CELL-TAG_SYMBOL))))
#define ifnn(p)        (*(intxx *)      memory_reference((intxx) \
                                         symalign((char *)(p) + (5*CELL-TAG_SYMBOL))))
#define qpname(p)      (*(Lisp_Object *)memory_reference((intxx) \
                                         symalign((char *)(p) + (6*CELL-TAG_SYMBOL))))
#define qplist(p)      (*(Lisp_Object *)memory_reference((intxx) \
                                         symalign((char *)(p) + (7*CELL-TAG_SYMBOL))))
#define qfastgets(p)   (*(Lisp_Object *)memory_reference((intxx) \
                                         symalign((char *)(p) + (8*CELL-TAG_SYMBOL))))
#define qcount(p)      (*(unsigned32 *) memory_reference((intxx) \
                                         symalign((char *)(p) + (9*CELL-TAG_SYMBOL))))
#ifdef COMMON
#define qpackage(p)    (*(Lisp_Object *)memory_reference((intxx) \
                                         symalign((char *)(p) + (10*CELL-TAG_SYMBOL))))
#endif
#endif 
#ifdef COMMON
typedef union Float_union
{
    float f;
    int32 i;
} Float_union;
#endif
typedef struct Big_Number
{
    Header h;
    unsigned32 d[1];  
} Big_Number;
#define bignum_length(b)  length_of_header(numhdr(b))
#ifdef MEMORY_TRACE
#define bignum_digits(b)  ((unsigned32 *)memory_reference((intxx)((char *)b + \
                                         (CELL-TAG_NUMBERS))))
#else
#define bignum_digits(b)  ((unsigned32 *)((char *)b  + (CELL-TAG_NUMBERS)))
#endif
#define make_bighdr(n)    (TAG_ODDS+TYPE_BIGNUM+(((intxx)(n))<<12))
#define pack_hdrlength(n) (((intxx)(n))<<12)
#ifdef COMMON
typedef struct Rational_Number
{
    Header header;
    Lisp_Object num;
    Lisp_Object den;
} Rational_Number;
#define numerator(r)    (((Rational_Number *)((char *)(r)-TAG_NUMBERS))->num)
#define denominator(r)  (((Rational_Number *)((char *)(r)-TAG_NUMBERS))->den)
typedef struct Complex_Number
{
    Header header;
    Lisp_Object real;
    Lisp_Object imag;
} Complex_Number;
#define real_part(r)    (((Complex_Number *)((char *)(r)-TAG_NUMBERS))->real)
#define imag_part(r)    (((Complex_Number *)((char *)(r)-TAG_NUMBERS))->imag)
typedef struct Single_Float
{
    Header header;
    union float_or_int {
       float f;
       int32 i;
    } f;
} Single_Float;
#define single_float_val(v) \
    (((Single_Float *)((char *)(v)-TAG_BOXFLOAT))->f.f)
#endif 
typedef struct Double_Float
{
    Header header;
#ifndef ADDRESS_64
    junk padding;     
#endif
    union double_or_ints {
        double f;         
        int32 i[2];
    } f;
} Double_Float;
#define double_float_val(v)     (*(double *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
#ifdef COMMON
typedef struct Long_Float
{
    Header header;
#ifndef ADDRESS_64
    junk padding;
#endif
    union long_or_ints {
        double f;
        int32 i[2];
    } f;
} Long_Float;
#define long_float_val(v)       (*(double *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
#endif
#define doubleword_align_up(n) ((Lisp_Object)(((intxx)(n) + 7) & (-8)))
#define doubleword_align_down(n) ((Lisp_Object)((intxx)(n) & (-8)))
#define quadword_align_up(n) ((Lisp_Object)(((intxx)(n) + 15) & (-16)))
#define quadword_align_down(n) ((Lisp_Object)((intxx)(n) & (-16)))
#define UNWIND_NULL       0x0         
#define UNWIND_GO         0x1
#define UNWIND_RETURN     0x2
#define UNWIND_THROW      0x3
#define UNWIND_RESTART    0x4
#define UNWIND_ERROR      0x100       
#define UNWIND_UNWIND     0x200       
#endif 
#ifndef header_cslerror_h
#define header_cslerror_h 1
extern Lisp_Object interrupted(Lisp_Object p);
extern Lisp_Object MS_CDECL error(int nargs, int code, ...);
extern Lisp_Object MS_CDECL cerror(int nargs, int code1, int code2, ...);
extern Lisp_Object too_few_2(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object too_many_1(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object wrong_no_0a(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object wrong_no_0b(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object wrong_no_3a(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object wrong_no_3b(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object wrong_no_na(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object wrong_no_nb(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object MS_CDECL wrong_no_1(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL wrong_no_2(Lisp_Object env, int nargs, ...);
extern Lisp_Object bad_special2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object MS_CDECL bad_specialn(Lisp_Object env, int nargs, ...);
extern Lisp_Object aerror(char *s);         
extern Lisp_Object aerror0(char *s);
extern Lisp_Object aerror1(char *s, Lisp_Object a);
extern Lisp_Object aerror2(char *s, Lisp_Object a, Lisp_Object b);
extern void MS_CDECL fatal_error(int code, ...);
#define GC_MESSAGES   0x01
#define FASL_MESSAGES 0x02
#define VERBOSE_MSGS  0x04
#define GC_MSG_BITS   0x07
#define HEADLINE_FLAG 0x08
#define MESSAGES_FLAG 0x10
#define ALWAYS_NOISY  0x20
#define verbos_flag (miscflags & GC_MSG_BITS)
 
#define err_bad_car               0      
#define err_bad_cdr               1      
#define err_no_store              2      
#define err_undefined_function_1  3      
#define err_undefined_function_2  4      
#define err_undefined_function_n  5      
#define err_wrong_no_args         6      
#define err_unbound_lexical       7      
#define err_bad_rplac             8      
#define err_bad_arith             9      
#define err_redef_special        10      
#define err_bad_arg              11      
#define err_bad_declare          12      
#define err_bad_fn               13      
#define err_unset_var            14      
#define err_too_many_args1       15      
#define err_too_many_args2       16      
#define err_bad_apply            17      
#define err_macroex_hook         18      
#define err_block_tag            19      
#define err_go_tag               20      
#define err_excess_args          21
#define err_insufficient_args    22
#define err_bad_bvl              23      
#define err_bad_keyargs          24
#define err_write_err            25
#define err_bad_endp             26      
#define err_no_fasldir           27
#define err_no_fasl              28      
#define err_open_failed          29      
#define err_pipe_failed          30      
#define err_stack_overflow       31
#define err_top_bit              32
#define err_mem_spans_zero       33
#define err_registration         34
#define err_no_tempdir           35
    
#ifdef INCLUDE_ERROR_STRING_TABLE
static char *error_message_table[] =
{
    "attempt to take car of an atom",
    "attempt to take cdr of an atom",
    "insufficient freestore to run this package",
    "undefined function (1 arg)",
    "undefined function (2 args)",
    "undefined function",
    "wrong number of arguments",
    "unbound lexical variable",
    "bad rplaca/rplacd",
    "bad argument for an arithmetic function",
    "attempt to redefine a special form",
    "not a variable",
    "bad use of declare",
    "attempt to apply non-function",
    "unset variable",
    "too many arguments",
    "too many arguments",
    "object not valid as a function (apply,",
    "macroexpand-hook failure",
    "block tag not found",
    "go tag not found",
    "too many arguments provided",
    "not enough arguments provided",
    "bad item in bound variable list",
    "bad keyword arguments",
    "write-error on file",
    "endp used on badly terminated list",
    "environment parameter 'fasldir' not set",
    "loadable module not found for loading",
    "file could not be opened",
    "unable to establish pipe",
    "stack overflow",
    "top bit of address has unexpected value",
    "memory block spans the zero address",
    "registration code corrupt or invalid",
    "unable to find a directory for temporary files",
    "dummy final error message"
};
#endif
#endif 
#ifndef header_externs_h
#define header_externs_h 1
#ifdef __cplusplus
extern "C" {
#endif
#ifdef USE_MPI
#include "mpi.h"
extern int32 mpi_rank,mpi_size;
#endif
extern void **pages,
            **heap_pages, **vheap_pages,
            **bps_pages, **native_pages;
#ifndef NO_COPYING_GC
extern void **new_heap_pages, **new_vheap_pages,
            **new_bps_pages, **new_native_pages;
#endif
extern int32 pages_count,
             heap_pages_count, vheap_pages_count,
             bps_pages_count, native_pages_count;
#ifndef NO_COPYING_GC
extern int32 new_heap_pages_count, new_vheap_pages_count,
             new_bps_pages_count, new_native_pages_count;
#endif
extern int native_pages_changed;
extern int32 native_fringe;
extern Lisp_Object *nilsegment, *stacksegment;
extern Lisp_Object *stackbase;
extern int32 stack_segsize;  
extern Lisp_Object *C_stack;
#define stack C_stack
#ifdef MEMORY_TRACE
#define push(a)         do { \
                          *++stack = (a); \
                          memory_reference((intxx)stack); } while (0)
#define push2(a,b)      do { \
                          *++stack = (a); \
                          memory_reference((intxx)stack); \
                          *++stack = (b); \
                          memory_reference((intxx)stack); } while (0)
#define push3(a,b,c)    do { \
                          *++stack = (a); \
                          memory_reference((intxx)stack); \
                          *++stack = (b); \
                          memory_reference((intxx)stack); \
                          *++stack = (c); \
                          memory_reference((intxx)stack); } while (0)
#define push4(a,b,c,d)  do { \
                          *++stack = (a); \
                          memory_reference((intxx)stack); \
                          *++stack = (b); \
                          memory_reference((intxx)stack); \
                          *++stack = (c); \
                          memory_reference((intxx)stack); \
                          *++stack = (d); \
                          memory_reference((intxx)stack); } while (0)
#define push5(a,b,c,d,e)do { \
                          *++stack = (a); \
                          memory_reference((intxx)stack); \
                          *++stack = (b); \
                          memory_reference((intxx)stack); \
                          *++stack = (c); \
                          memory_reference((intxx)stack); \
                          *++stack = (d); \
                          memory_reference((intxx)stack); \
                          *++stack = (e); \
                          memory_reference((intxx)stack); } while (0)
#define push6(a,b,c,d,e,f) do {push3(a,b,c); push3(d,e,f); } while (0)
#define my_pop()        (memory_reference((int32)stack), (*stack--))
#define pop(a)          { memory_reference((intxx)stack); (a) = *stack--; }
#define pop2(a,b)       { memory_reference((intxx)stack); (a) = *stack--; memory_reference((intxx)stack); (b) = *stack--; }
#define pop3(a,b,c)     { memory_reference((intxx)stack); (a) = *stack--; memory_reference((intxx)stack); (b) = *stack--; memory_reference((intxx)stack); (c) = *stack--; }
#define pop4(a,b,c,d)   { memory_reference((intxx)stack); (a) = *stack--; memory_reference((intxx)stack); (b) = *stack--; memory_reference((intxx)stack); (c) = *stack--; \
                          memory_reference((intxx)stack); (d) = *stack--; }
#define pop5(a,b,c,d,e) { memory_reference((intxx)stack); (a) = *stack--; memory_reference((intxx)stack); (b) = *stack--; memory_reference((intxx)stack); (c) = *stack--; \
                          memory_reference((intxx)stack); (d) = *stack--; memory_reference((intxx)stack); (e) = *stack--; }
#define pop6(a,b,c,d,e,f) {pop3(a,b,c); pop3(d,e,f)}
#define popv(n)           stack -= (n)
#else 
#define push(a)         { *++stack = (a); }
#define push2(a,b)      { stack[1] = (a); stack[2] = (b); stack += 2; }
#define push3(a,b,c)    { stack[1] = (a); stack[2] = (b); stack[3] = (c); \
                          stack += 3; }
#define push4(a,b,c,d)  { stack[1] = (a); stack[2] = (b); stack[3] = (c); \
                          stack[4] = (d); stack += 4; }
#define push5(a,b,c,d,e){ stack[1] = (a); stack[2] = (b); stack[3] = (c); \
                          stack[4] = (d); stack[5] = (e); stack += 5; }
#define push6(a,b,c,d,e,f) {                                              \
                          stack[1] = (a); stack[2] = (b); stack[3] = (c); \
                          stack[4] = (d); stack[5] = (e); stack[6] = (f); \
                          stack += 6; }
#define pop(a)          { (a) = *stack--; }
#define pop2(a,b)       { stack -= 2;     (a) = stack[2]; (b) = stack[1]; }
#define pop3(a,b,c)     { stack -= 3;     (a) = stack[3]; (b) = stack[2]; \
                          (c) = stack[1]; }
#define pop4(a,b,c,d)   { stack -= 4;     (a) = stack[4]; (b) = stack[3]; \
                          (c) = stack[2]; (d) = stack[1]; }
#define pop5(a,b,c,d,e) { stack -= 5;     (a) = stack[5]; (b) = stack[4]; \
                          (c) = stack[3]; (d) = stack[2]; (e) = stack[1]; }
#define pop6(a,b,c,d,e, f) { stack -= 6;                                  \
                          (a) = stack[6]; (b) = stack[5]; (c) = stack[4]; \
                          (d) = stack[3]; (e) = stack[2]; (f) = stack[1]; }
#define popv(n)           stack -= (n)
#endif 
#define errexit()    { nil = C_nil; if (exception_pending()) return nil; }
#define errexitn(n)  { nil = C_nil;                                      \
                       if (exception_pending()) { popv(n); return nil; } }
#define errexitv()   { nil = C_nil; if (exception_pending()) return; }
#define errexitvn(n) { nil = C_nil;                                      \
                       if (exception_pending()) { popv(n); return; } }
#define GC_USER_SOFT 0
#define GC_USER_HARD 1
#define GC_STACK     2
#define GC_CONS      3
#define GC_VEC       4
#define GC_BPS       5
#define GC_PRESERVE  6
#define GC_NATIVE    7
#ifdef CHECK_STACK
extern int check_stack(char *file, int line);
#define if_check_stack \
   if (check_stack(__FILE__,__LINE__)) return aerror("stack overflow");
#else
#define if_check_stack
#endif
extern int32 software_ticks, countdown;
#define stackcheck0(k)                                      \
    if_check_stack                                          \
    if ((--countdown < 0 && deal_with_tick()) ||            \
        stack >= stacklimit)                                \
    {   reclaim(nil, "stack", GC_STACK, 0);                 \
        nil = C_nil;                                        \
        if (exception_pending()) { popv(k); return nil; }   \
    }
#define stackcheck1(k, a1)                                  \
    if_check_stack                                          \
    if ((--countdown < 0 && deal_with_tick()) ||            \
        stack >= stacklimit)                                \
    {   a1 = reclaim(a1, "stack", GC_STACK, 0);             \
        nil = C_nil;                                        \
        if (exception_pending()) { popv(k); return nil; }   \
    }
#define stackcheck2(k, a1, a2)                              \
    if_check_stack                                          \
    if ((--countdown < 0 && deal_with_tick()) ||            \
        stack >= stacklimit)                                \
    {   push(a2);                                           \
        a1 = reclaim(a1, "stack", GC_STACK, 0); pop(a2);    \
        nil = C_nil;                                        \
        if (exception_pending()) { popv(k); return nil; }   \
    }
#define stackcheck3(k, a1, a2, a3)                          \
    if_check_stack                                          \
    if ((--countdown < 0 && deal_with_tick()) ||            \
        stack >= stacklimit)                                \
    {   push2(a2, a3);                                      \
        a1 = reclaim(a1, "stack", GC_STACK, 0);             \
        pop2(a3, a2);                                       \
        nil = C_nil;                                        \
        if (exception_pending()) { popv(k); return nil; }   \
    }
#define stackcheck4(k, a1, a2, a3, a4)                      \
    if_check_stack                                          \
    if ((--countdown < 0 && deal_with_tick()) ||            \
        stack >= stacklimit)                                \
    {   push3(a2, a3, a4);                                  \
        a1 = reclaim(a1, "stack", GC_STACK, 0);             \
        pop3(a4, a3, a2);                                   \
        nil = C_nil;                                        \
        if (exception_pending()) { popv(k); return nil; }   \
    }
extern Lisp_Object C_nil;
#define first_nil_offset         50     
#define work_0_offset           200
#define last_nil_offset         251
#define NIL_SEGMENT_SIZE    (last_nil_offset*sizeof(Lisp_Object) + 32)
#define SPARE                   512
#ifdef ADDRESS_64
#ifdef COMMON
#define BASE ((Lisp_Object *)nil)
#else
#define BASE ((Lisp_Object *)(nil+4))
#endif
#else
#define BASE ((Lisp_Object *)nil)
#endif
#ifdef NILSEG_EXTERNS
#define nil_as_base
extern unsigned32 byteflip;
extern Lisp_Object codefringe;
extern Lisp_Object volatile codelimit;
extern Lisp_Object * volatile stacklimit;
extern Lisp_Object fringe;
extern Lisp_Object volatile heaplimit;
extern Lisp_Object volatile vheaplimit;
extern Lisp_Object vfringe;
extern int32 nwork;
extern int32 exit_reason;
extern int32 exit_count;
extern unsigned32 gensym_ser, print_precision, miscflags;
extern int32 current_modulus, fastget_size, package_bits;
extern Lisp_Object lisp_true, lambda, funarg, unset_var, opt_key, rest_key;
extern Lisp_Object quote_symbol, function_symbol, comma_symbol;
extern Lisp_Object comma_at_symbol, cons_symbol, eval_symbol;
extern Lisp_Object work_symbol, evalhook, applyhook, macroexpand_hook;
extern Lisp_Object append_symbol, exit_tag, exit_value, catch_tags;
extern Lisp_Object current_package, startfn;
extern Lisp_Object gensym_base, string_char_sym, boffo;
extern Lisp_Object err_table;
extern Lisp_Object progn_symbol;
extern Lisp_Object lisp_work_stream, charvec, raise_symbol, lower_symbol;
extern Lisp_Object echo_symbol, codevec, litvec, supervisor, B_reg;
extern Lisp_Object savedef, comp_symbol, compiler_symbol, faslvec;
extern Lisp_Object tracedfn, lisp_terminal_io;
extern Lisp_Object lisp_standard_output, lisp_standard_input, lisp_error_output;
extern Lisp_Object lisp_trace_output, lisp_debug_io, lisp_query_io;
extern Lisp_Object prompt_thing, faslgensyms;
extern Lisp_Object prinl_symbol, emsg_star, redef_msg;
extern Lisp_Object expr_symbol, fexpr_symbol, macro_symbol;
extern Lisp_Object cl_symbols, active_stream, current_module;
extern Lisp_Object native_defs, features_symbol, lisp_package;
extern Lisp_Object sys_hash_table, help_index, cfunarg, lex_words;
extern Lisp_Object get_counts, fastget_names, input_libraries;
extern Lisp_Object output_library, current_file, break_function;
extern Lisp_Object standard_output, standard_input, debug_io;
extern Lisp_Object error_output, query_io, terminal_io;
extern Lisp_Object trace_output, fasl_stream;
extern Lisp_Object native_code, native_symbol, traceprint_symbol;
extern Lisp_Object loadsource_symbol;
extern Lisp_Object hankaku_symbol, bytecoded_symbol, nativecoded_symbol;
#ifdef COMMON
extern Lisp_Object keyword_package;
extern Lisp_Object all_packages, package_symbol, internal_symbol;
extern Lisp_Object external_symbol, inherited_symbol;
extern Lisp_Object key_key, allow_other_keys, aux_key;
extern Lisp_Object format_symbol;
extern Lisp_Object expand_def_symbol, allow_key_key, declare_symbol;
extern Lisp_Object special_symbol;
#endif
#ifdef OPENMATH
extern Lisp_Object MS_CDECL om_openFileDev(Lisp_Object env, int nargs, ...);
extern Lisp_Object om_openStringDev(Lisp_Object nil, Lisp_Object lstr, Lisp_Object lenc);
extern Lisp_Object om_closeDev(Lisp_Object env, Lisp_Object dev);
extern Lisp_Object om_setDevEncoding(Lisp_Object nil, Lisp_Object ldev, Lisp_Object lenc);
extern Lisp_Object om_makeConn(Lisp_Object nil, Lisp_Object ltimeout);
extern Lisp_Object om_closeConn(Lisp_Object nil, Lisp_Object lconn);
extern Lisp_Object om_getConnInDevice(Lisp_Object nil, Lisp_Object lconn);
extern Lisp_Object om_getConnOutDevice(Lisp_Object nil, Lisp_Object lconn);
extern Lisp_Object MS_CDECL om_connectTCP(Lisp_Object nil, int nargs, ...);
extern Lisp_Object om_bindTCP(Lisp_Object nil, Lisp_Object lconn, Lisp_Object lport);
extern Lisp_Object om_putApp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndApp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putAtp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndAtp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putAttr(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndAttr(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putBind(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndBind(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putBVar(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndBVar(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putError(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndError(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putObject(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndObject(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putInt(Lisp_Object nil, Lisp_Object ldev, Lisp_Object val);
extern Lisp_Object om_putFloat(Lisp_Object nil, Lisp_Object ldev, Lisp_Object val);
extern Lisp_Object om_putByteArray(Lisp_Object nil, Lisp_Object ldev, Lisp_Object val);
extern Lisp_Object om_putVar(Lisp_Object nil, Lisp_Object ldev, Lisp_Object val);
extern Lisp_Object om_putString(Lisp_Object nil, Lisp_Object ldev, Lisp_Object val);
extern Lisp_Object om_putSymbol(Lisp_Object nil, Lisp_Object ldev, Lisp_Object val);
extern Lisp_Object MS_CDECL om_putSymbol2(Lisp_Object nil, int nargs, ...);
extern Lisp_Object om_getApp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndApp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getAtp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndAtp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getAttr(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndAttr(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getBind(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndBind(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getBVar(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndBVar(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getError(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndError(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getObject(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndObject(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getInt(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getFloat(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getByteArray(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getVar(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getString(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getSymbol(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getType(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_stringToStringPtr(Lisp_Object nil, Lisp_Object lstr);
extern Lisp_Object om_stringPtrToString(Lisp_Object nil, Lisp_Object lpstr);
extern Lisp_Object om_read(Lisp_Object nil, Lisp_Object dev);
extern Lisp_Object om_supportsCD(Lisp_Object nil, Lisp_Object lcd);
extern Lisp_Object om_supportsSymbol(Lisp_Object nil, Lisp_Object lcd, Lisp_Object lsym);
extern Lisp_Object MS_CDECL om_listCDs(Lisp_Object nil, int nargs, ...);
extern Lisp_Object om_listSymbols(Lisp_Object nil, Lisp_Object lcd);
extern Lisp_Object om_whichCDs(Lisp_Object nil, Lisp_Object lsym);
#endif
extern Lisp_Object workbase[51];
extern Lisp_Object user_base_0, user_base_1, user_base_2;
extern Lisp_Object user_base_3, user_base_4, user_base_5;
extern Lisp_Object user_base_6, user_base_7, user_base_8;
extern Lisp_Object user_base_9;
#define work_0              workbase[0]
#define work_1              workbase[1]
#define mv_1                workbase[1]
#define mv_2                workbase[2]
#define mv_3                workbase[3]
#define work_50             workbase[50]
#else 
#define nil_as_base  Lisp_Object nil = C_nil;
#define byteflip              (*(unsigned32 *)&BASE[12])
#define codefringe            BASE[13]
#define codelimit             (*(Lisp_Object volatile *)&BASE[14])
extern Lisp_Object * volatile stacklimit;
#define fringe                BASE[18]
#define heaplimit             (*(Lisp_Object volatile *)&BASE[19])
#define vheaplimit            (*(Lisp_Object volatile *)&BASE[20])
#define vfringe               BASE[21]
#define miscflags             (*(unsigned32 *)&BASE[22])
#define nwork                 (*(int32 *)&BASE[24])
#define exit_reason           (*(int32 *)&BASE[25])
#define exit_count            (*(int32 *)&BASE[26])
#define gensym_ser            (*(unsigned32 *)&BASE[27])
#define print_precision       (*(unsigned32 *)&BASE[28])
#define current_modulus       (*(int32 *)&BASE[29])
#define fastget_size          (*(int32 *)&BASE[30])
#define package_bits          (*(int32 *)&BASE[31])
#define current_package       BASE[52]
#define B_reg                 BASE[53]
#define codevec               BASE[54]
#define litvec                BASE[55]
#define exit_tag              BASE[56]
#define exit_value            BASE[57]
#define catch_tags            BASE[58]
#define lisp_package          BASE[59]
#define boffo                 BASE[60]
#define charvec               BASE[61]
#define sys_hash_table        BASE[62]
#define help_index            BASE[63]
#define gensym_base           BASE[64]
#define err_table             BASE[65]
#define supervisor            BASE[66]
#define startfn               BASE[67]
#define faslvec               BASE[68]
#define tracedfn              BASE[69]
#define prompt_thing          BASE[70]
#define faslgensyms           BASE[71]
#define cl_symbols            BASE[72]
#define active_stream         BASE[73]
#define current_module        BASE[74]
#define native_defs           BASE[75]
#define append_symbol         BASE[90]
#define applyhook             BASE[91]
#define cfunarg               BASE[92]
#define comma_at_symbol       BASE[93]
#define comma_symbol          BASE[94]
#define compiler_symbol       BASE[95]
#define comp_symbol           BASE[96]
#define cons_symbol           BASE[97]
#define echo_symbol           BASE[98]
#define emsg_star             BASE[99]
#define evalhook              BASE[100]
#define eval_symbol           BASE[101]
#define expr_symbol           BASE[102]
#define features_symbol       BASE[103]
#define fexpr_symbol          BASE[104]
#define funarg                BASE[105]
#define function_symbol       BASE[106]
#define lambda                BASE[107]
#define lisp_true             BASE[108]
#define lower_symbol          BASE[109]
#define macroexpand_hook      BASE[110]
#define macro_symbol          BASE[111]
#define opt_key               BASE[112]
#define prinl_symbol          BASE[113]
#define progn_symbol          BASE[114]
#define quote_symbol          BASE[115]
#define raise_symbol          BASE[116]
#define redef_msg             BASE[117]
#define rest_key              BASE[118]
#define savedef               BASE[119]
#define string_char_sym       BASE[120]
#define unset_var             BASE[121]
#define work_symbol           BASE[122]
#define lex_words             BASE[123]
#define get_counts            BASE[124]
#define fastget_names         BASE[125]
#define input_libraries       BASE[126]
#define output_library        BASE[127]
#define current_file          BASE[128]
#define break_function        BASE[129]
#define lisp_work_stream      BASE[130]
#define lisp_standard_output  BASE[131]
#define lisp_standard_input   BASE[132]
#define lisp_debug_io         BASE[133]
#define lisp_error_output     BASE[134]
#define lisp_query_io         BASE[135]
#define lisp_terminal_io      BASE[136]
#define lisp_trace_output     BASE[137]
#define standard_output       BASE[138]
#define standard_input        BASE[139]
#define debug_io              BASE[140]
#define error_output          BASE[141]
#define query_io              BASE[142]
#define terminal_io           BASE[143]
#define trace_output          BASE[144]
#define fasl_stream           BASE[145]
#define native_code           BASE[146]
#define native_symbol         BASE[147]
#define traceprint_symbol     BASE[148]
#define loadsource_symbol     BASE[149]
#define hankaku_symbol        BASE[150]
#define bytecoded_symbol      BASE[151]
#define nativecoded_symbol    BASE[152]
#ifdef COMMON
#define keyword_package       BASE[170]
#define all_packages          BASE[171]
#define package_symbol        BASE[172]
#define internal_symbol       BASE[173]
#define external_symbol       BASE[174]
#define inherited_symbol      BASE[175]
#define key_key               BASE[176]
#define allow_other_keys      BASE[177]
#define aux_key               BASE[178]
#define format_symbol         BASE[179]
#define expand_def_symbol     BASE[180]
#define allow_key_key         BASE[181]
#define declare_symbol        BASE[182]
#define special_symbol        BASE[183]
#endif
extern Lisp_Object user_base_0, user_base_1, user_base_2;
extern Lisp_Object user_base_3, user_base_4, user_base_5;
extern Lisp_Object user_base_6, user_base_7, user_base_8;
extern Lisp_Object user_base_9;
#define work_0                BASE[200]
#define work_1                BASE[201]
#define mv_1                  work_1
#define mv_2                  BASE[202]
#define mv_3                  BASE[203]
#define work_50               BASE[250]
#endif 
extern void copy_into_nilseg(int fg);
extern void copy_out_of_nilseg(int fg);
#define eq_hash_table_list     BASE[50] 
#define equal_hash_table_list  BASE[51] 
#define current_package_offset 52
extern void rehash_this_table(Lisp_Object v);
extern Lisp_Object eq_hash_tables, equal_hash_tables;
extern Lisp_Object volatile savecodelimit;
extern Lisp_Object * volatile savestacklimit;
extern Lisp_Object volatile saveheaplimit;
extern Lisp_Object volatile savevheaplimit;
extern char *exit_charvec;
#ifdef DEBUG
extern int trace_all;
#endif
#define MAX_INPUT_FILES         40  
#define MAX_SYMBOLS_TO_DEFINE   40
#define MAX_FASL_PATHS          20
extern char *files_to_read[MAX_INPUT_FILES],
     *symbols_to_define[MAX_SYMBOLS_TO_DEFINE],
     *fasl_paths[MAX_FASL_PATHS];
extern int fasl_output_file, output_directory;
extern FILE *binary_read_file;
#ifndef COMMON
#ifdef HAVE_FWIN
extern char **loadable_packages;
extern char **switches;
extern void review_switch_settings();
#endif
#endif
#ifdef SOCKETS
extern int sockets_ready;
extern void flush_socket(void);
#endif
extern CSLbool undefine_this_one[MAX_SYMBOLS_TO_DEFINE];
extern CSLbool always_noisy;
extern int number_of_input_files,
    number_of_symbols_to_define,
    number_of_fasl_paths,
    init_flags;
extern int native_code_tag;
extern char *standard_directory;
extern CSLbool gc_method_is_copying;
extern int32 gc_number;
#define INIT_QUIET      1
#define INIT_VERBOSE    2
#define INIT_EXPANDABLE 4
#define Lispify_predicate(p)  ((p) ? lisp_true : nil)
extern int tty_count;
extern FILE *spool_file;
extern char spool_file_name[32];
typedef struct Ihandle
{
    FILE *f;        
    long int o;     
    long int n;     
    unsigned32 chk; 
    int status;     
} Ihandle;
extern int32 compression_worth_while;
#define CODESIZE                0x1000
typedef struct entry_point1
{
    one_args *p;
    char *s;
} entry_point1;
typedef struct entry_point2
{
    two_args *p;
    char *s;
} entry_point2;
typedef struct entry_pointn
{
    n_args *p;
    char *s;
} entry_pointn;
extern entry_point1 entries_table1[];
extern entry_point2 entries_table2[];
extern entry_pointn entries_tablen[];
extern entry_pointn entries_table_io[];
extern void set_up_entry_lookup(void);
extern int32 code_up_fn1(one_args *e);
extern int32 code_up_fn2(two_args *e);
extern int32 code_up_fnn(n_args *e);
extern int32 code_up_io(void *e);
extern int doubled_execution;
extern char *linker_type;
extern char *compiler_command[], *import_data[],
            *config_header[], *csl_headers[];
extern Lisp_Object encapsulate_pointer(void *);
typedef void initfn(Lisp_Object *, Lisp_Object **, Lisp_Object * volatile *);
extern int load_dynamic(char *objname, char *modname,
                        Lisp_Object name, Lisp_Object fns);
extern Lisp_Object Linstate_c_code(Lisp_Object nil,
                                   Lisp_Object name, Lisp_Object fns);
#ifdef MEMORY_TRACE
extern intxx memory_base, memory_size;
extern unsigned char *memory_map;
extern FILE *memory_file;
extern void memory_comment(int n);
#endif
#define ARG_CUT_OFF 25
extern void push_args(va_list a, int nargs);
extern void push_args_1(va_list a, int nargs);
extern void Iinit(void);
extern void IreInit(void);
extern void Icontext(Ihandle *);
extern void Irestore_context(Ihandle);
extern void Ilist(void);
extern CSLbool open_output(char *s, int len);
extern CSLbool Iopen(char *name, int len, CSLbool dirn, char *expanded_name);
extern CSLbool Iopen_from_stdin(void), Iopen_to_stdout(void);
extern CSLbool IopenRoot(char *expanded_name, int hard);
extern CSLbool Iwriterootp(char *expanded);
extern CSLbool Iopen_help(int32 offset);
extern CSLbool Iopen_banner(int code);
extern CSLbool Imodulep(char *name, int len, char *datestamp, int32 *size,
                                 char *expanded_name);
extern CSLbool Icopy(char *name, int len);
extern CSLbool Idelete(char *name, int len);
extern CSLbool IcloseInput(int check_checksum);
extern CSLbool IcloseOutput(int write_checksum);
extern CSLbool Ifinished(void);
extern int  Igetc(void);
extern int32 Iread(void *buff, int32 size);
extern CSLbool Iputc(int ch);
extern CSLbool Iwrite(void *buff, int32 size);
extern long int Ioutsize(void);
extern char *CSLtmpnam(char *suffix, int32 suffixlen);
extern int Cmkdir(char *s);
#define REGISTRATION_SIZE     192
#define REGISTRATION_VERSION  "r1.0"
extern unsigned char registration_data[REGISTRATION_SIZE];
extern void CSL_MD5_Init(void);
extern void CSL_MD5_Update(unsigned char *data, int len);
extern void CSL_MD5_Final(unsigned char *md);
extern CSLbool CSL_MD5_busy;
extern unsigned char *CSL_MD5(unsigned char *data, int n, unsigned char *md);
extern void checksum(Lisp_Object a);
extern unsigned char unpredictable[256];
extern void inject_randomness(int n);
extern void crypt_init(char *key);
#define CRYPT_BLOCK 128
extern void crypt_get_block(unsigned char result[CRYPT_BLOCK]);
#define CRYPT_KEYS 10
extern char *crypt_keys[CRYPT_KEYS];
extern int crypt_active;
extern unsigned char *crypt_buffer;
extern int crypt_count;
extern void ensure_screen(void);
extern int window_heading;
extern void my_exit(int n);
extern void *my_malloc(size_t n);
extern clock_t base_time;
extern double *clock_stack;
extern void push_clock(void);
extern double pop_clock(void);
extern double consolidated_time[10], gc_time;
extern CSLbool volatile already_in_gc, tick_on_gc_exit;
extern CSLbool volatile interrupt_pending, tick_pending;
extern int deal_with_tick(void);
extern int current_fp_rep;
#ifndef __cplusplus
extern jmp_buf *errorset_buffer;
#endif
extern char *errorset_msg;
extern int errorset_code;
extern void unwind_stack(Lisp_Object *, CSLbool findcatch);
extern CSLbool segvtrap;
extern CSLbool batch_flag;
extern int escaped_printing;
extern void MS_CDECL low_level_signal_handler(int code);
extern int async_interrupt(int a);
extern void MS_CDECL sigint_handler(int code);
extern void record_get(Lisp_Object tag, CSLbool found);
extern int         primep(int32);
extern void        adjust_all(void);
extern void        set_up_functions(CSLbool restartp);
extern void        get_user_files_checksum(unsigned char *);
extern Lisp_Object acons(Lisp_Object a, Lisp_Object b, Lisp_Object c);
extern Lisp_Object ash(Lisp_Object a, Lisp_Object b);
extern Lisp_Object bytestream_interpret(Lisp_Object code, Lisp_Object lit,
                                        Lisp_Object *entry_stack);
extern CSLbool        complex_stringp(Lisp_Object a);
extern void        freshline_trace(void);
extern void        freshline_debug(void);
extern Lisp_Object cons(Lisp_Object a, Lisp_Object b);
extern Lisp_Object cons_no_gc(Lisp_Object a, Lisp_Object b);
extern Lisp_Object cons_gc_test(Lisp_Object a);
extern void        convert_fp_rep(void *p, int old_rep, int new_rep, int type);
extern Lisp_Object Ceval(Lisp_Object u, Lisp_Object env);
extern unsigned32  Crand(void);
extern Lisp_Object Cremainder(Lisp_Object a, Lisp_Object b);
extern void        Csrand(unsigned32 a, unsigned32 b);
extern void        discard(Lisp_Object a);
extern CSLbool eql_fn(Lisp_Object a, Lisp_Object b);
extern CSLbool cl_equal_fn(Lisp_Object a, Lisp_Object b);
extern CSLbool equal_fn(Lisp_Object a, Lisp_Object b);
#ifdef TRACED_EQUAL
extern CSLbool traced_equal_fn(Lisp_Object a, Lisp_Object b,
                                      char *, int, int);
#define equal_fn(a, b) traced_equal_fn(a, b, __FILE__, __LINE__, 0)
extern void dump_equals();
#endif
extern CSLbool equalp(Lisp_Object a, Lisp_Object b);
extern Lisp_Object apply(Lisp_Object fn, int nargs,
                         Lisp_Object env, Lisp_Object fname);
extern Lisp_Object apply_lambda(Lisp_Object def, int nargs,
                         Lisp_Object env, Lisp_Object name);
extern void        deallocate_pages(void);
extern void        drop_heap_segments(void);
extern Lisp_Object gcd(Lisp_Object a, Lisp_Object b);
extern Lisp_Object get_pname(Lisp_Object a);
#ifdef COMMON
extern Lisp_Object get(Lisp_Object a, Lisp_Object b, Lisp_Object c);
#else
extern Lisp_Object get(Lisp_Object a, Lisp_Object b);
#endif
extern Lisp_Object getvector(int tag, int32 type, intxx length);
extern Lisp_Object getvector_init(intxx n, Lisp_Object v);
extern Lisp_Object getcodevector(int32 type, intxx size);
extern unsigned32  hash_lisp_string(Lisp_Object s);
extern void lose_C_def(Lisp_Object a);
extern CSLbool        geq2(Lisp_Object a, Lisp_Object b);
extern CSLbool        greaterp2(Lisp_Object a, Lisp_Object b);
extern CSLbool        lesseq2(Lisp_Object a, Lisp_Object b);
extern CSLbool        lessp2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object list2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object list2star(Lisp_Object a, Lisp_Object b, Lisp_Object c);
extern Lisp_Object list3(Lisp_Object a, Lisp_Object b, Lisp_Object c);
extern Lisp_Object list3star(Lisp_Object a, Lisp_Object b,
                             Lisp_Object c, Lisp_Object d);
extern Lisp_Object list4(Lisp_Object a, Lisp_Object b,
                         Lisp_Object c, Lisp_Object d);
extern Lisp_Object lognot(Lisp_Object a);
extern Lisp_Object macroexpand(Lisp_Object form, Lisp_Object env);
extern Lisp_Object make_one_word_bignum(int32 n);
extern Lisp_Object make_package(Lisp_Object name);
extern Lisp_Object make_string(const char *b);
extern Lisp_Object make_nstring(char *b, int32 n);
extern Lisp_Object make_undefined_symbol(char const *s);
extern Lisp_Object make_symbol(char const *s, int restartp,
                               one_args *f1, two_args *f2, n_args *fn);
extern void MS_CDECL  stdout_printf(char *fmt, ...);
extern void MS_CDECL  term_printf(char *fmt, ...);
extern void MS_CDECL  err_printf(char *fmt, ...);
extern void MS_CDECL  debug_printf(char *fmt, ...);
extern void MS_CDECL  trace_printf(char *fmt, ...);
extern char        *my_getenv(char *name);
extern Lisp_Object ncons(Lisp_Object a);
extern Lisp_Object ndelete(Lisp_Object a, Lisp_Object b);
extern Lisp_Object negate(Lisp_Object a);
extern Lisp_Object nreverse(Lisp_Object a);
extern FILE        *open_file(char *filename, char *original_name,
                              size_t n, char *dirn, FILE *old_file);
extern Lisp_Object plus2(Lisp_Object a, Lisp_Object b);
extern void        preserve(char *msg);
extern void        preserve_native_code(void);
extern void        relocate_native_function(unsigned char *bps);
extern Lisp_Object prin(Lisp_Object u);
extern char *get_string_data(Lisp_Object a, char *why, int32 *len);
extern void prin_to_stdout(Lisp_Object u);
extern void prin_to_terminal(Lisp_Object u);
extern void prin_to_debug(Lisp_Object u);
extern void prin_to_query(Lisp_Object u);
extern void prin_to_trace(Lisp_Object u);
extern void prin_to_error(Lisp_Object u);
extern void loop_print_stdout(Lisp_Object o);
extern void loop_print_terminal(Lisp_Object o);
extern void loop_print_debug(Lisp_Object o);
extern void loop_print_query(Lisp_Object o);
extern void loop_print_trace(Lisp_Object o);
extern void loop_print_error(Lisp_Object o);
extern void internal_prin(Lisp_Object u, int prefix);
extern Lisp_Object princ(Lisp_Object u);
extern Lisp_Object print(Lisp_Object u);
extern Lisp_Object printc(Lisp_Object u);
extern void        print_bignum(Lisp_Object u, CSLbool blankp, int nobreak);
extern void        print_bighexoctbin(Lisp_Object u,
                       int radix, int width, CSLbool blankp, int nobreak);
extern Lisp_Object putprop(Lisp_Object a, Lisp_Object b,
                       Lisp_Object c);
extern Lisp_Object quot2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object rational(Lisp_Object a);
extern void        read_eval_print(int noisy);
extern Lisp_Object reclaim(Lisp_Object value_to_return, char *why,
                           int stg_class, intxx size);
extern CSLbool do_not_kill_native_code;
extern void        set_fns(Lisp_Object sym, one_args *f1,
                                            two_args *f2, n_args *fn);
extern void        setup(int restartp, double storesize);
extern Lisp_Object simplify_string(Lisp_Object s);
extern CSLbool        stringp(Lisp_Object a);
extern Lisp_Object times2(Lisp_Object a, Lisp_Object b);
extern int32       thirty_two_bits(Lisp_Object a);
#ifdef ADDRESS_64
extern int64       sixty_four_bits(Lisp_Object a);
#endif
#if defined DEMO_MODE || defined DEMO_BUILD
extern void give_up();
#endif
#ifdef DEMO_BUILD
extern int32 demo_key1, demo_key2;
#endif
#ifdef COMMON
#define onevalue(r)   (exit_count=1, (r))
#define nvalues(r, n) (exit_count=(n), (r))
#else
#define onevalue(r)   (r)
#define nvalues(r, n) (r)
#endif
#ifdef COMMON
#define eval(a, b) Ceval(a, b)
#define voideval(a, b) Ceval(a, b)
#else
#define eval(a, b) \
    (is_cons(a) ? Ceval(a, b) : \
     is_symbol(a) ? (qvalue(a) == unset_var ? error(1, err_unset_var, a) : \
                     onevalue(qvalue(a))) : \
     onevalue(a))
#define voideval(a, b) \
    if (is_cons(a)) Ceval(a, b) 
#endif
#define equal(a, b)                                \
    ((a) == (b) ||                                 \
     (((((a) ^ (b)) & TAG_BITS) == 0) &&           \
      ((unsigned)(((a) & TAG_BITS) - 1) > 3) &&    \
      equal_fn(a, b)))
#define cl_equal(a, b)                             \
    ((a) == (b) ||                                 \
     (((((a) ^ (b)) & TAG_BITS) == 0) &&           \
      ((unsigned)(((a) & TAG_BITS) - 1) > 3) &&    \
      cl_equal_fn(a, b)))
#define eql(a, b)                                  \
    ((a) == (b) ||                                 \
     (((((a) ^ (b)) & TAG_BITS) == 0) &&           \
      ((unsigned)(((a) & TAG_BITS) - 1) > 3) &&    \
      eql_fn(a, b)))
#ifndef IMULTIPLY
extern unsigned32 Imultiply(unsigned32 *rlow, unsigned32 a,
                            unsigned32 b, unsigned32 c);
#endif
#ifndef IDIVIDE
extern unsigned32 Idivide(unsigned32 *qp, unsigned32 a,
                          unsigned32 b, unsigned32 c);
extern unsigned32 Idiv10_9(unsigned32 *qp, unsigned32 a, unsigned32 b);
#endif
#define argcheck(var, n, msg) if ((var)!=(n)) return aerror(msg);
extern n_args   *zero_arg_functions[];
extern one_args *one_arg_functions[];
extern two_args *two_arg_functions[];
extern n_args   *three_arg_functions[];
extern void     *useful_functions[];
extern char     *address_of_var(int n);
typedef struct setup_type
{
    char *name;
    one_args *one;
    two_args *two;
    n_args *n;
} setup_type;
typedef struct setup_type_1
{
    char *name;
    one_args *one;
    two_args *two;
    n_args *n;
    unsigned32 c1;
    unsigned32 c2;
} setup_type_1;
extern setup_type const
       arith06_setup[], arith08_setup[], arith10_setup[], arith12_setup[],
       char_setup[], eval1_setup[], eval2_setup[], eval3_setup[],
       funcs1_setup[], funcs2_setup[], funcs3_setup[], print_setup[],
       read_setup[], mpi_setup[];
extern setup_type const
       u01_setup[], u02_setup[], u03_setup[], u04_setup[],
       u05_setup[], u06_setup[], u07_setup[], u08_setup[],
       u09_setup[], u10_setup[], u11_setup[], u12_setup[];
#ifdef NAG
extern setup_type const nag_setup[], asp_setup[];
extern setup_type const socket_setup[], xdr_setup[], grep_setup[];
extern setup_type const gr_setup[], axfns_setup[];
#endif
#ifdef OPENMATH
extern setup_type const om_setup[];
extern setup_type const om_parse_setup[];
#endif
extern char *find_image_directory(int argc, char *argv[]);
extern char program_name[64];
extern Lisp_Object declare_fn(Lisp_Object args, Lisp_Object env);
extern Lisp_Object function_fn(Lisp_Object args, Lisp_Object env);
extern Lisp_Object let_fn_1(Lisp_Object bvl, Lisp_Object body,
                            Lisp_Object env, int compilerp);
extern Lisp_Object mv_call_fn(Lisp_Object args, Lisp_Object env);
extern Lisp_Object progn_fn(Lisp_Object args, Lisp_Object env);
extern Lisp_Object quote_fn(Lisp_Object args, Lisp_Object env);
extern Lisp_Object tagbody_fn(Lisp_Object args, Lisp_Object env);
extern CSLbool symbol_protect_flag, warn_about_protected_symbols;
#ifdef JIT
extern char *Jcompile(Lisp_Object def, Lisp_Object env);
extern unsigned long jit_size;
#define JIT_INIT_SIZE 8192
#endif
#ifdef __cplusplus
}
#endif
#endif 
#ifndef header_arith_h
#define header_arith_h 1
#define TWO_32    4294967296.0      
#define TWO_31    2147483648.0      
#define TWO_24    16777216.0        
#define TWO_22    4194304.0         
#define TWO_21    2097152.0         
#define TWO_20    1048576.0         
#define M2_31_1   -2147483649.0     
#define _pi       3.14159265358979323846
#define _half_pi  1.57079632679489661923
#define boole_clr   0
#define boole_and   1
#define boole_andc2 2
#define boole_1     3
#define boole_andc1 4
#define boole_2     5
#define boole_xor   6
#define boole_ior   7
#define boole_nor   8
#define boole_eqv   9
#define boole_c2    10
#define boole_orc2  11
#define boole_c1    12
#define boole_orc1  13
#define boole_nand  14
#define boole_set   15
#define top_bit_set(n)     (((int32)(n)) < 0)
#define top_bit(n)         (((unsigned32)(n)) >> 31)
#define set_top_bit(n)     ((n) | (unsigned32)0x80000000)
#define clear_top_bit(n)   ((n) & 0x7fffffff)
#define signed_overflow(n) top_bit_set((n) ^ (((int32)(n))<<1))
#ifdef MULDIV64
#define IMULTIPLY 1      
#define Dmultiply(hi, lo, a, b, c)                          \
 do { unsigned64 r64 = (unsigned64)(a) * (unsigned64)(b) +  \
                     (unsigned32)(c);                       \
      (lo) = 0x7fffffffu & (unsigned32)r64;                 \
      (hi) = (unsigned32)(r64 >> 31); } while (0)
#define IDIVIDE   1
#define Ddivide(r, q, a, b, c)                                      \
 do { unsigned64 r64 = (((unsigned64)(a)) << 31) | (unsigned64)(b); \
      unsigned64 c64 = (unsigned64)(unsigned32)(c);                 \
      q = (unsigned32)(r64 / c64);                                  \
      r = (unsigned32)(r64 % c64); } while (0)
#define Ddiv10_9(r, q, a, b) Ddivide(r, q, a, b, 1000000000u)
#else
#define Dmultiply(hi, lo, a, b, c) ((hi) = Imultiply(&(lo), (a), (b), (c)))
#define Ddivide(r, q, a, b, c) ((r) = Idivide(&(q), (a), (b), (c)))
#define Ddiv10_9(r, q, a, b)   ((r) = Idiv10_9(&(q), (a), (b)))
#endif
#define fix_mask (-0x08000000)
#define fixnum_minusp(a) ((int32)(a) < 0)
#define bignum_minusp(a) \
    ((int32)bignum_digits(a)[((bignum_length(a)-CELL)/4)-1]<0)
extern Lisp_Object negateb(Lisp_Object);
extern Lisp_Object copyb(Lisp_Object);
extern Lisp_Object negate(Lisp_Object);
extern Lisp_Object plus2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object difference2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object times2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object quot2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object CLquot2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object quotbn(Lisp_Object a, int32 n);
extern Lisp_Object quotbn1(Lisp_Object a, int32 n);
extern Lisp_Object quotbb(Lisp_Object a, Lisp_Object b);
extern Lisp_Object Cremainder(Lisp_Object a, Lisp_Object b);
extern Lisp_Object rembi(Lisp_Object a, Lisp_Object b);
extern Lisp_Object rembb(Lisp_Object a, Lisp_Object b);
extern Lisp_Object shrink_bignum(Lisp_Object a, int32 lena);
extern Lisp_Object modulus(Lisp_Object a, Lisp_Object b);
extern Lisp_Object rational(Lisp_Object a);
extern Lisp_Object rationalize(Lisp_Object a);
extern Lisp_Object lcm(Lisp_Object a, Lisp_Object b);
extern Lisp_Object lengthen_by_one_bit(Lisp_Object a, int32 msd);
extern CSLbool numeq2(Lisp_Object a, Lisp_Object b);
extern CSLbool zerop(Lisp_Object a);
extern CSLbool onep(Lisp_Object a);
extern CSLbool minusp(Lisp_Object a);
extern CSLbool plusp(Lisp_Object a);
extern CSLbool lesspbd(Lisp_Object a, double b);
extern CSLbool lessprd(Lisp_Object a, double b);
extern CSLbool lesspdb(double a, Lisp_Object b);
extern CSLbool lesspdr(double a, Lisp_Object b);
extern Lisp_Object make_one_word_bignum(int32 n);
extern Lisp_Object make_two_word_bignum(int32 a, unsigned32 b);
extern Lisp_Object make_n_word_bignum(int32 a1, unsigned32 a2,
                                      unsigned32 a3, int32 n);
extern Lisp_Object make_sfloat(double d);
extern double float_of_integer(Lisp_Object a);
extern Lisp_Object add1(Lisp_Object p);
extern Lisp_Object sub1(Lisp_Object p);
extern Lisp_Object integerp(Lisp_Object p);
extern double float_of_number(Lisp_Object a);
extern Lisp_Object make_boxfloat(double a, int32 type);
extern Lisp_Object make_complex(Lisp_Object r, Lisp_Object i);
extern Lisp_Object make_ratio(Lisp_Object p, Lisp_Object q);
extern Lisp_Object ash(Lisp_Object a, Lisp_Object b);
extern Lisp_Object lognot(Lisp_Object a);
extern Lisp_Object logior2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object logxor2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object logand2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object logeqv2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object rationalf(double d);
extern int _reduced_exp(double, double *);
extern CSLbool lesspbi(Lisp_Object a, Lisp_Object b);
extern CSLbool lesspib(Lisp_Object a, Lisp_Object b);
#ifdef COMMON
typedef struct Complex
{
    double real;
    double imag;
} Complex;
extern Complex MS_CDECL Cln(Complex a);
extern Complex MS_CDECL Ccos(Complex a);
extern Complex MS_CDECL Cexp(Complex a);
extern Complex MS_CDECL Cpow(Complex a, Complex b);
extern double MS_CDECL Cabs(Complex a);
#endif
#endif 
#ifndef header_entries_h
#define header_entries_h 1
#ifdef __cplusplus
extern "C" {
#endif
extern Lisp_Object MS_CDECL Lbatchp(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL bytecounts(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Ldate(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Ldatestamp(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Leject(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lerror(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lerror0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lflush(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Lgc0(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Lgctime(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lgensym(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Llist_modules(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Llibrary_members0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Llposn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lmapstore0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lnext_random(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lposn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lread(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lreadch(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lrtell(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Lterpri(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Ltime(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Ltmpnam(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Ltyi(Lisp_Object env, int nargs, ...);
extern Lisp_Object autoload1(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object bytecoded1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object byteopt1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object byteoptrest1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object double_bytecoded1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object double_byteopt1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object double_byteoptrest1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object double_funarged1(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object double_hardopt1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object double_hardoptrest1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object double_interpreted1(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object funarged1(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object tracefunarged1(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object hardopt1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object hardoptrest1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object interpreted1(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object tracebytecoded1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object jitcompileme1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object tracebyteopt1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object tracebyteoptrest1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object tracebytecoded1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object traceinterpreted1(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object tracehardopt1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object tracehardoptrest1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object undefined1(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object f1_as_0(Lisp_Object env, Lisp_Object a);
extern Lisp_Object f1_as_1(Lisp_Object env, Lisp_Object a);
#ifdef CJAVA
extern Lisp_Object java1(Lisp_Object env, Lisp_Object a);
#endif
extern Lisp_Object Labsval(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Ladd1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lalpha_char_p(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lapply0(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lapply_1(Lisp_Object env, Lisp_Object fn);
extern Lisp_Object Latan(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Latom(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lbanner(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lboundp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lbpsp(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Lbpsupbv(Lisp_Object nil, Lisp_Object v);
extern Lisp_Object Lcaaaar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcaaadr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcaaar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcaadar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcaaddr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcaadr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcaar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcaar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcadaar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcadadr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcadar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcaddar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcadddr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcaddr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcadr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcadr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcdaaar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcdaadr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcdaar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcdadar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcdaddr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcdadr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcdar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcdar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcddaar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcddadr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcddar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcdddar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcddddr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcdddr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcddr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcddr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcdr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcdr(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lchar_code(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lclose(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcodep(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcompress(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lconsp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lconstantp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lcopy_module(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Ldefine_in_module(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Ldelete_module(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Ldigitp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lendp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lerror1(Lisp_Object nil, Lisp_Object a1);
extern Lisp_Object Lerrorset1(Lisp_Object nil, Lisp_Object form);
extern Lisp_Object Leval(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Levenp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Levlis(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lexplode(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lexplode2lc(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lexplode2lcn(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Lexplode2n(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lexplodec(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lexplodecn(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lexplodehex(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Lexploden(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lexplodeoctal(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Lfixp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lfloat(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lfloatp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lfrexp(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Lfuncall1(Lisp_Object env, Lisp_Object fn);
extern Lisp_Object Lgc(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Lgensym1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lgensym2(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lgetd(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lgetenv(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lget_bps(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lhelp(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Liadd1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lidentity(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Liminus(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Liminusp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lindirect(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lintegerp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lintern(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lionep(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Lisub1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lizerop(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Llength(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Llengthc(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Llibrary_members(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Llinelength(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Llist_to_string(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Llist_to_vector(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lload_module(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lload_source(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Llognot(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Llog_1(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Llsd(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmacroexpand(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmacroexpand_1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmacro_function(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmake_global(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmake_special(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmapstore(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmd5(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object Lmd60(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object Lminus(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lminusp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmkevect(Lisp_Object nil, Lisp_Object n);
extern Lisp_Object Lmkquote(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmkvect(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmodular_minus(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmodular_number(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmodular_reciprocal(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmodule_exists(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmsd(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lmv_list(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Lncons(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lnreverse(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lnull(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lnumberp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Loddp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lonep(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lpagelength(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lplist(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lplusp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lprin(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lprin(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lprin2a(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Lprinc(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lprinc(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lprint(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lprintc(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lrandom(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lrational(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lrdf1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lrds(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lremd(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lreverse(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsetpchar(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lset_small_modulus(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsmkvect(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lspecial_char(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lspecial_form_p(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lspool(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lstart_module(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lstop(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lstringp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsub1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsymbolp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsymbol_argcount(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsymbol_argcode(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsymbol_env(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsymbol_function(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsymbol_globalp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsymbol_name(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsymbol_restore_fns(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsymbol_specialp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsymbol_value(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsystem(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lthreevectorp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Ltrace(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Ltruncate(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lttab(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Ltyo(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lunintern(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lunmake_global(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lunmake_special(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Luntrace(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lupbv(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lsimple_vectorp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lvectorp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lverbos(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lwhitespace_char_p(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lwritable_libraryp(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lwrite_module(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lwrs(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lxtab(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lxtab(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Lzerop(Lisp_Object env, Lisp_Object a);
#ifdef COMMON
extern Lisp_Object Lfind_symbol_1(Lisp_Object nil, Lisp_Object str);
extern Lisp_Object Llistp(Lisp_Object env, Lisp_Object a);
#endif
extern Lisp_Object autoload2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object bytecoded2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object byteopt2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object byteoptrest2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object double_bytecoded2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object double_byteopt2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object double_byteoptrest2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object double_funarged2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object double_hardopt2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object double_hardoptrest2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object double_interpreted2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object funarged2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object tracefunarged2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object hardopt2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object hardoptrest2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object interpreted2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object tracebyteopt2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object tracebyteoptrest2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object tracebytecoded2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object jitcompileme2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object traceinterpreted2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object tracehardopt2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object tracehardoptrest2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object undefined2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object f2_as_0(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object f2_as_1(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object f2_as_2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
#ifdef CJAVA
extern Lisp_Object java2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
#endif
extern Lisp_Object Lappend(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lapply_2(Lisp_Object env, Lisp_Object fn, Lisp_Object a1);
extern Lisp_Object Lapply1(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lash(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lash1(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lassoc(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Latan2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Latan2d(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Latsoc(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lbpsgetv(Lisp_Object nil, Lisp_Object v, Lisp_Object n);
extern Lisp_Object Lcons(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lcopy_native(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Ldeleq(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Ldelete(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Ldifference2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Ldivide(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lelt(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Leq(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Leqcar(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lequalcar(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Leql(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Leqn(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lcl_equal(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lequal(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lerror2(Lisp_Object nil, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object Lerrorset2(Lisp_Object nil, Lisp_Object form, Lisp_Object ffg1);
extern Lisp_Object Lexpt(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lflag(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lflagp(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lflagpcar(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lfuncall2(Lisp_Object env, Lisp_Object fn, Lisp_Object a1);
extern Lisp_Object Lgcd(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lgeq(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lget(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lget_hash_2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lgetv(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lgreaterp(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lhelp_2(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lidifference(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Ligeq(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Ligreaterp(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lileq(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lilessp(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Limax(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Limin(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Linorm(Lisp_Object nil, Lisp_Object a, Lisp_Object k);
extern Lisp_Object Linstate_c_code(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lintersect(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Liplus2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Liquotient(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Liremainder(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lirightshift(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Litimes2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Llcm(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lleq(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Llessp(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Llist2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Llog(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Llog_2(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmake_random_state(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmake_random_state(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmax2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmember(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmemq(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmin2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmod(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmodular_difference(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmodular_expt(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmodular_plus(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmodular_quotient(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmodular_times(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lnconc(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lneq(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lnreverse2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lorderp(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lpair(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lplus2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lquotient(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lrem(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lremflag(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lremprop(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lrplaca(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lrplacd(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lrseek(Lisp_Object nil, Lisp_Object a);
extern Lisp_Object Lset(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lset_help_file(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lsgetv(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lsmemq(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lsubla(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lsublis(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lsymbol_protect(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lsymbol_set_definition(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lsymbol_set_env(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Ltimes2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lunion(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lwrite_help_module(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lxcons(Lisp_Object env, Lisp_Object a, Lisp_Object b);
#ifdef COMMON
extern Lisp_Object Laref2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Latan_2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lelt(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lfloat_2(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lintern_2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmacroexpand_1_2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lmacroexpand_2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lrandom_2(Lisp_Object nil, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Ltruncate_2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object Lunintern_2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
#endif
extern Lisp_Object MS_CDECL autoloadn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL bytecoded0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL bytecoded3(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL bytecodedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL byteoptn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL byteoptrestn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL double_bytecoded0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL double_bytecoded3(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL double_bytecodedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL double_byteoptn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL double_byteoptrestn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL double_funargedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL double_hardoptn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL double_hardoptrestn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL double_interpretedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL funargedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracefunargedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL hardoptn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL hardoptrestn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL interpretedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracebyteoptn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL tracebyteoptrestn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL tracebytecoded0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracebytecoded3(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracebytecodedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL jitcompileme0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL jitcompileme3(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL jitcompilemen(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL traceinterpretedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracehardoptn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL tracehardoptrestn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL undefinedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL f0_as_0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL f3_as_0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL f3_as_1(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL f3_as_2(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL f3_as_3(Lisp_Object env, int nargs, ...);
#ifdef CJAVA
extern Lisp_Object MS_CDECL java0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL java3(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL javan(Lisp_Object env, int nargs, ...);
#endif
extern Lisp_Object MS_CDECL Lacons(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lapply_n(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lapply2(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lapply3(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lbpsputv(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lerrorset3(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Lerrorsetn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lfuncalln(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lhelp_n(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Llist(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Llist2star(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Llist3(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Llogand(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Llogeqv(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Llogor(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Llogxor(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lmax(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lmin(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lmkhash(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Lput_hash(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lputprop(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lputv(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lsputv(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lsubst(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lvalues(Lisp_Object env, int nargs, ...);
#ifdef COMMON
extern Lisp_Object MS_CDECL Lappend_n(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Laref(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Laset(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Leqn_n(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Lgcd_n(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lgeq_n(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Lget_3(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lgreaterp_n(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Llcm_n(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL Lleq_n(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Llessp_n(Lisp_Object nil, int nargs, ...);
extern Lisp_Object MS_CDECL Lquotient_n(Lisp_Object nil, int nargs, ...);
#endif
#ifdef OPENMATH
extern Lisp_Object MS_CDECL om_openFileDev(Lisp_Object env, int nargs, ...);
extern Lisp_Object om_openStringDev(Lisp_Object nil, Lisp_Object lstr, Lisp_Object lenc);
extern Lisp_Object om_closeDev(Lisp_Object env, Lisp_Object dev);
extern Lisp_Object om_setDevEncoding(Lisp_Object nil, Lisp_Object ldev, Lisp_Object lenc);
extern Lisp_Object om_makeConn(Lisp_Object nil, Lisp_Object ltimeout);
extern Lisp_Object om_closeConn(Lisp_Object nil, Lisp_Object lconn);
extern Lisp_Object om_getConnInDevice(Lisp_Object nil, Lisp_Object lconn);
extern Lisp_Object om_getConnOutDevice(Lisp_Object nil, Lisp_Object lconn);
extern Lisp_Object MS_CDECL om_connectTCP(Lisp_Object nil, int nargs, ...);
extern Lisp_Object om_bindTCP(Lisp_Object nil, Lisp_Object lconn, Lisp_Object lport);
extern Lisp_Object om_putApp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndApp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putAtp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndAtp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putAttr(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndAttr(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putBind(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndBind(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putBVar(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndBVar(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putError(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndError(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putObject(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putEndObject(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_putInt(Lisp_Object nil, Lisp_Object ldev, Lisp_Object val);
extern Lisp_Object om_putFloat(Lisp_Object nil, Lisp_Object ldev, Lisp_Object val);
extern Lisp_Object om_putByteArray(Lisp_Object nil, Lisp_Object ldev, Lisp_Object val);
extern Lisp_Object om_putVar(Lisp_Object nil, Lisp_Object ldev, Lisp_Object val);
extern Lisp_Object om_putString(Lisp_Object nil, Lisp_Object ldev, Lisp_Object val);
extern Lisp_Object om_putSymbol(Lisp_Object nil, Lisp_Object ldev, Lisp_Object val);
extern Lisp_Object MS_CDECL om_putSymbol2(Lisp_Object nil, int nargs, ...);
extern Lisp_Object om_getApp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndApp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getAtp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndAtp(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getAttr(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndAttr(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getBind(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndBind(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getBVar(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndBVar(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getError(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndError(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getObject(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getEndObject(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getInt(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getFloat(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getByteArray(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getVar(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getString(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getSymbol(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_getType(Lisp_Object nil, Lisp_Object ldev);
extern Lisp_Object om_stringToStringPtr(Lisp_Object nil, Lisp_Object lstr);
extern Lisp_Object om_stringPtrToString(Lisp_Object nil, Lisp_Object lpstr);
extern Lisp_Object om_read(Lisp_Object nil, Lisp_Object dev);
extern Lisp_Object om_supportsCD(Lisp_Object nil, Lisp_Object lcd);
extern Lisp_Object om_supportsSymbol(Lisp_Object nil, Lisp_Object lcd, Lisp_Object lsym);
extern Lisp_Object MS_CDECL om_listCDs(Lisp_Object nil, int nargs, ...);
extern Lisp_Object om_listSymbols(Lisp_Object nil, Lisp_Object lcd);
extern Lisp_Object om_whichCDs(Lisp_Object nil, Lisp_Object lsym);
#endif
#ifdef __cplusplus
}
#endif
#endif 


/* Code for opmtch!* */

static Lisp_Object CC_opmtchH(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v1, v2;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v2 = v0;
/* end of prologue */
    v1 = qvalue(elt(env, 1)); /* subfg!* */
    stack[0] = v1;
    v1 = lisp_true;
    qvalue(elt(env, 1)) = v1; /* subfg!* */
    v1 = v2;
    fn = elt(env, 2); /* opmtch */
    v1 = (*qfn1(fn))(qenv(fn), v1);
    nil = C_nil;
    if (exception_pending()) goto v13;
    env = stack[-1];
    v2 = v1;
    v1 = stack[0];
    qvalue(elt(env, 1)) = v1; /* subfg!* */
    { popv(2); return onevalue(v2); }
/* error exit handlers */
v13:
    popv(2);
    return nil;
}



/* Code for fs!:timestermterm */

static Lisp_Object CC_fsTtimestermterm(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v238, v239, v258;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-6] = v16;
    stack[-7] = v0;
/* end of prologue */
    v238 = (Lisp_Object)113; /* 7 */
    v238 = Lmkvect(nil, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    stack[-8] = v238;
    v239 = stack[-7];
    v238 = (Lisp_Object)33; /* 2 */
    v238 = *(Lisp_Object *)((char *)v239 + (CELL-TAG_VECTOR) + ((int32)v238/(16/CELL)));
    stack[-4] = v238;
    v239 = stack[-6];
    v238 = (Lisp_Object)33; /* 2 */
    v238 = *(Lisp_Object *)((char *)v239 + (CELL-TAG_VECTOR) + ((int32)v238/(16/CELL)));
    stack[-3] = v238;
    v238 = (Lisp_Object)1; /* 0 */
    stack[-2] = v238;
    goto v32;

v32:
    v239 = (Lisp_Object)113; /* 7 */
    v238 = stack[-2];
    v238 = difference2(v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    v238 = Lminusp(nil, v238);
    env = stack[-9];
    if (v238 == nil) goto v50;
    v238 = (Lisp_Object)113; /* 7 */
    v238 = Lmkvect(nil, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    stack[-5] = v238;
    v238 = (Lisp_Object)1; /* 0 */
    stack[-2] = v238;
    goto v112;

v112:
    v239 = (Lisp_Object)113; /* 7 */
    v238 = stack[-2];
    v238 = difference2(v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    v238 = Lminusp(nil, v238);
    env = stack[-9];
    if (v238 == nil) goto v456;
    v239 = stack[-7];
    v238 = (Lisp_Object)1; /* 0 */
    v258 = *(Lisp_Object *)((char *)v239 + (CELL-TAG_VECTOR) + ((int32)v238/(16/CELL)));
    v239 = stack[-6];
    v238 = (Lisp_Object)1; /* 0 */
    v238 = *(Lisp_Object *)((char *)v239 + (CELL-TAG_VECTOR) + ((int32)v238/(16/CELL)));
    fn = elt(env, 4); /* multsq */
    v238 = (*qfn2(fn))(qenv(fn), v258, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    stack[0] = v238;
    v239 = stack[0];
    v238 = elt(env, 1); /* (1 . 2) */
    fn = elt(env, 4); /* multsq */
    v238 = (*qfn2(fn))(qenv(fn), v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    stack[0] = v238;
    v238 = stack[0];
    v238 = qcar(v238);
    if (v238 == nil) goto v232;
    v239 = stack[-7];
    v238 = (Lisp_Object)17; /* 1 */
    v239 = *(Lisp_Object *)((char *)v239 + (CELL-TAG_VECTOR) + ((int32)v238/(16/CELL)));
    v238 = elt(env, 2); /* sin */
    if (v239 == v238) goto v181;
    v239 = stack[-6];
    v238 = (Lisp_Object)17; /* 1 */
    v239 = *(Lisp_Object *)((char *)v239 + (CELL-TAG_VECTOR) + ((int32)v238/(16/CELL)));
    v238 = elt(env, 2); /* sin */
    if (v239 == v238) goto v341;
    v258 = elt(env, 3); /* cos */
    v239 = stack[-8];
    v238 = stack[0];
    fn = elt(env, 5); /* make!-term */
    stack[-1] = (*qfnn(fn))(qenv(fn), 3, v258, v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    v258 = elt(env, 3); /* cos */
    v239 = stack[-5];
    v238 = stack[0];
    fn = elt(env, 5); /* make!-term */
    v238 = (*qfnn(fn))(qenv(fn), 3, v258, v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    {
        Lisp_Object v491 = stack[-1];
        popv(10);
        fn = elt(env, 6); /* fs!:plus */
        return (*qfn2(fn))(qenv(fn), v491, v238);
    }

v341:
    v258 = elt(env, 2); /* sin */
    v239 = stack[-8];
    v238 = stack[0];
    fn = elt(env, 5); /* make!-term */
    stack[-2] = (*qfnn(fn))(qenv(fn), 3, v258, v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    stack[-1] = elt(env, 2); /* sin */
    stack[-3] = stack[-5];
    v238 = stack[0];
    fn = elt(env, 7); /* negsq */
    v238 = (*qfn1(fn))(qenv(fn), v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    fn = elt(env, 5); /* make!-term */
    v238 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[-3], v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    {
        Lisp_Object v320 = stack[-2];
        popv(10);
        fn = elt(env, 6); /* fs!:plus */
        return (*qfn2(fn))(qenv(fn), v320, v238);
    }

v181:
    v239 = stack[-6];
    v238 = (Lisp_Object)17; /* 1 */
    v239 = *(Lisp_Object *)((char *)v239 + (CELL-TAG_VECTOR) + ((int32)v238/(16/CELL)));
    v238 = elt(env, 2); /* sin */
    if (v239 == v238) goto v224;
    v258 = elt(env, 2); /* sin */
    v239 = stack[-8];
    v238 = stack[0];
    fn = elt(env, 5); /* make!-term */
    stack[-1] = (*qfnn(fn))(qenv(fn), 3, v258, v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    v258 = elt(env, 2); /* sin */
    v239 = stack[-5];
    v238 = stack[0];
    fn = elt(env, 5); /* make!-term */
    v238 = (*qfnn(fn))(qenv(fn), 3, v258, v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    {
        Lisp_Object v495 = stack[-1];
        popv(10);
        fn = elt(env, 6); /* fs!:plus */
        return (*qfn2(fn))(qenv(fn), v495, v238);
    }

v224:
    stack[-1] = elt(env, 3); /* cos */
    stack[-2] = stack[-8];
    v238 = stack[0];
    fn = elt(env, 7); /* negsq */
    v238 = (*qfn1(fn))(qenv(fn), v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    fn = elt(env, 5); /* make!-term */
    stack[-1] = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[-2], v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    v258 = elt(env, 3); /* cos */
    v239 = stack[-5];
    v238 = stack[0];
    fn = elt(env, 5); /* make!-term */
    v238 = (*qfnn(fn))(qenv(fn), 3, v258, v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    {
        Lisp_Object v496 = stack[-1];
        popv(10);
        fn = elt(env, 6); /* fs!:plus */
        return (*qfn2(fn))(qenv(fn), v496, v238);
    }

v232:
    v238 = nil;
    { popv(10); return onevalue(v238); }

v456:
    stack[-1] = stack[-5];
    stack[0] = stack[-2];
    v239 = stack[-4];
    v238 = stack[-2];
    v258 = *(Lisp_Object *)((char *)v239 + (CELL-TAG_VECTOR) + ((int32)v238/(16/CELL)));
    v239 = stack[-3];
    v238 = stack[-2];
    v238 = *(Lisp_Object *)((char *)v239 + (CELL-TAG_VECTOR) + ((int32)v238/(16/CELL)));
    v238 = difference2(v258, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32)stack[0]/(16/CELL))) = v238;
    v238 = stack[-2];
    v238 = add1(v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    stack[-2] = v238;
    goto v112;

v50:
    stack[-1] = stack[-8];
    stack[0] = stack[-2];
    v239 = stack[-4];
    v238 = stack[-2];
    v258 = *(Lisp_Object *)((char *)v239 + (CELL-TAG_VECTOR) + ((int32)v238/(16/CELL)));
    v239 = stack[-3];
    v238 = stack[-2];
    v238 = *(Lisp_Object *)((char *)v239 + (CELL-TAG_VECTOR) + ((int32)v238/(16/CELL)));
    v238 = plus2(v258, v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32)stack[0]/(16/CELL))) = v238;
    v238 = stack[-2];
    v238 = add1(v238);
    nil = C_nil;
    if (exception_pending()) goto v441;
    env = stack[-9];
    stack[-2] = v238;
    goto v32;
/* error exit handlers */
v441:
    popv(10);
    return nil;
}



/* Code for mo!=sum */

static Lisp_Object CC_moMsum(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v41, v64, v100;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */
    v100 = nil;
    goto v5;

v5:
    v41 = stack[-1];
    if (v41 == nil) goto v32;
    v41 = stack[0];
    if (v41 == nil) goto v32;
    v41 = stack[-1];
    v64 = qcar(v41);
    v41 = stack[0];
    v41 = qcar(v41);
    v41 = (Lisp_Object)(int32)((int32)v64 + (int32)v41 - TAG_FIXNUM);
    v64 = v100;
    v41 = cons(v41, v64);
    nil = C_nil;
    if (exception_pending()) goto v105;
    env = stack[-2];
    v100 = v41;
    v41 = stack[-1];
    v41 = qcdr(v41);
    stack[-1] = v41;
    v41 = stack[0];
    v41 = qcdr(v41);
    stack[0] = v41;
    goto v5;

v32:
    v41 = v100;
    v64 = Lnreverse(nil, v41);
    v41 = stack[-1];
    if (v41 == nil) goto v39;
    v41 = stack[-1];
    goto v48;

v48:
        popv(3);
        return Lappend(nil, v64, v41);

v39:
    v41 = stack[0];
    goto v48;
/* error exit handlers */
v105:
    popv(3);
    return nil;
}



/* Code for pcmult */

static Lisp_Object CC_pcmult(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v58, v55;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-4] = v16;
    v58 = v0;
/* end of prologue */
    stack[-5] = v58;
    v58 = stack[-5];
    if (v58 == nil) goto v1;
    v58 = stack[-5];
    v58 = qcar(v58);
    v55 = v58;
    stack[0] = qcar(v55);
    v55 = stack[-4];
    v58 = qcdr(v58);
    fn = elt(env, 1); /* cprod */
    v58 = (*qfn2(fn))(qenv(fn), v55, v58);
    nil = C_nil;
    if (exception_pending()) goto v220;
    env = stack[-6];
    v58 = cons(stack[0], v58);
    nil = C_nil;
    if (exception_pending()) goto v220;
    env = stack[-6];
    v58 = ncons(v58);
    nil = C_nil;
    if (exception_pending()) goto v220;
    env = stack[-6];
    stack[-2] = v58;
    stack[-3] = v58;
    goto v5;

v5:
    v58 = stack[-5];
    v58 = qcdr(v58);
    stack[-5] = v58;
    v58 = stack[-5];
    if (v58 == nil) { Lisp_Object res = stack[-3]; popv(7); return onevalue(res); }
    stack[-1] = stack[-2];
    v58 = stack[-5];
    v58 = qcar(v58);
    v55 = v58;
    stack[0] = qcar(v55);
    v55 = stack[-4];
    v58 = qcdr(v58);
    fn = elt(env, 1); /* cprod */
    v58 = (*qfn2(fn))(qenv(fn), v55, v58);
    nil = C_nil;
    if (exception_pending()) goto v220;
    env = stack[-6];
    v58 = cons(stack[0], v58);
    nil = C_nil;
    if (exception_pending()) goto v220;
    env = stack[-6];
    v58 = ncons(v58);
    nil = C_nil;
    if (exception_pending()) goto v220;
    env = stack[-6];
    v58 = Lrplacd(nil, stack[-1], v58);
    nil = C_nil;
    if (exception_pending()) goto v220;
    env = stack[-6];
    v58 = stack[-2];
    v58 = qcdr(v58);
    stack[-2] = v58;
    goto v5;

v1:
    v58 = nil;
    { popv(7); return onevalue(v58); }
/* error exit handlers */
v220:
    popv(7);
    return nil;
}



/* Code for pkp */

static Lisp_Object CC_pkp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v213, v77, v78;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    stack[-3] = nil;
    v213 = stack[0];
    if (!consp(v213)) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    v213 = qvalue(elt(env, 1)); /* !*ppacked */
    if (v213 == nil) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    v213 = stack[0];
    v77 = Llength(nil, v213);
    nil = C_nil;
    if (exception_pending()) goto v216;
    env = stack[-4];
    v213 = (Lisp_Object)161; /* 10 */
    v213 = (Lisp_Object)geq2(v77, v213);
    nil = C_nil;
    if (exception_pending()) goto v216;
    v213 = v213 ? lisp_true : nil;
    env = stack[-4];
    stack[-2] = v213;
    v213 = stack[0];
    stack[-1] = v213;
    goto v19;

v19:
    v213 = stack[-1];
    if (v213 == nil) goto v18;
    v213 = stack[-1];
    v213 = qcar(v213);
    stack[0] = v213;
    v213 = stack[-2];
    if (v213 == nil) goto v235;
    v77 = stack[0];
    v213 = (Lisp_Object)161; /* 10 */
    v213 = (Lisp_Object)lessp2(v77, v213);
    nil = C_nil;
    if (exception_pending()) goto v216;
    v213 = v213 ? lisp_true : nil;
    env = stack[-4];
    if (v213 == nil) goto v103;
    v77 = stack[0];
    v213 = qvalue(elt(env, 2)); /* diglist!* */
    fn = elt(env, 4); /* dssoc */
    v213 = (*qfn2(fn))(qenv(fn), v77, v213);
    nil = C_nil;
    if (exception_pending()) goto v216;
    env = stack[-4];
    v78 = qcar(v213);
    v77 = elt(env, 3); /* !0 */
    v213 = stack[-3];
    v213 = list2star(v78, v77, v213);
    nil = C_nil;
    if (exception_pending()) goto v216;
    env = stack[-4];
    stack[-3] = v213;
    goto v32;

v32:
    v213 = stack[-1];
    v213 = qcdr(v213);
    stack[-1] = v213;
    goto v19;

v103:
    v77 = stack[0];
    v213 = (Lisp_Object)161; /* 10 */
    v213 = Ldivide(nil, v77, v213);
    nil = C_nil;
    if (exception_pending()) goto v216;
    env = stack[-4];
    stack[0] = v213;
    v213 = stack[0];
    v77 = qcar(v213);
    v213 = qvalue(elt(env, 2)); /* diglist!* */
    fn = elt(env, 4); /* dssoc */
    v213 = (*qfn2(fn))(qenv(fn), v77, v213);
    nil = C_nil;
    if (exception_pending()) goto v216;
    env = stack[-4];
    v77 = qcar(v213);
    v213 = stack[-3];
    v213 = cons(v77, v213);
    nil = C_nil;
    if (exception_pending()) goto v216;
    env = stack[-4];
    stack[-3] = v213;
    v213 = stack[0];
    v77 = qcdr(v213);
    v213 = qvalue(elt(env, 2)); /* diglist!* */
    fn = elt(env, 4); /* dssoc */
    v213 = (*qfn2(fn))(qenv(fn), v77, v213);
    nil = C_nil;
    if (exception_pending()) goto v216;
    env = stack[-4];
    v77 = qcar(v213);
    v213 = stack[-3];
    v213 = cons(v77, v213);
    nil = C_nil;
    if (exception_pending()) goto v216;
    env = stack[-4];
    stack[-3] = v213;
    goto v32;

v235:
    v77 = stack[0];
    v213 = qvalue(elt(env, 2)); /* diglist!* */
    fn = elt(env, 4); /* dssoc */
    v213 = (*qfn2(fn))(qenv(fn), v77, v213);
    nil = C_nil;
    if (exception_pending()) goto v216;
    env = stack[-4];
    v77 = qcar(v213);
    v213 = stack[-3];
    v213 = cons(v77, v213);
    nil = C_nil;
    if (exception_pending()) goto v216;
    env = stack[-4];
    stack[-3] = v213;
    goto v32;

v18:
    v213 = stack[-3];
    v213 = Lnreverse(nil, v213);
        popv(5);
        return Lcompress(nil, v213);
/* error exit handlers */
v216:
    popv(5);
    return nil;
}



/* Code for !*d2n */

static Lisp_Object CC_Hd2n(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v8, v1;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v8 = v0;
/* end of prologue */
    v1 = v8;
    if (!(v1 == nil)) return onevalue(v8);
    v8 = (Lisp_Object)1; /* 0 */
    return onevalue(v8);
}



/* Code for listsum */

static Lisp_Object CC_listsum(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v48, v33;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    stack[-1] = nil;
    goto v12;

v12:
    v48 = stack[0];
    if (v48 == nil) goto v45;
    v48 = stack[0];
    v33 = qcar(v48);
    v48 = stack[-1];
    v48 = cons(v33, v48);
    nil = C_nil;
    if (exception_pending()) goto v49;
    env = stack[-2];
    stack[-1] = v48;
    v48 = stack[0];
    v48 = qcdr(v48);
    stack[0] = v48;
    goto v12;

v45:
    v48 = (Lisp_Object)1; /* 0 */
    v33 = v48;
    goto v5;

v5:
    v48 = stack[-1];
    if (v48 == nil) { popv(3); return onevalue(v33); }
    v48 = stack[-1];
    v48 = qcar(v48);
    v48 = plus2(v48, v33);
    nil = C_nil;
    if (exception_pending()) goto v49;
    env = stack[-2];
    v33 = v48;
    v48 = stack[-1];
    v48 = qcdr(v48);
    stack[-1] = v48;
    goto v5;
/* error exit handlers */
v49:
    popv(3);
    return nil;
}



/* Code for bczero!? */

static Lisp_Object CC_bczeroW(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v38, v44;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v38 = v0;
/* end of prologue */
    v44 = qvalue(elt(env, 1)); /* !*grmod!* */
    if (v44 == nil) goto v13;
    v44 = v38;
    v38 = (Lisp_Object)1; /* 0 */
        return Leqn(nil, v44, v38);

v13:
    v38 = qcar(v38);
    v38 = (v38 == nil ? lisp_true : nil);
    return onevalue(v38);
}



/* Code for peel */

static Lisp_Object CC_peel(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v134, v105;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    v134 = stack[0];
    v105 = qcar(v134);
    v134 = elt(env, 1); /* (liedf innerprod) */
    v134 = Lmemq(nil, v105, v134);
    if (v134 == nil) goto v44;
    v134 = stack[0];
    v134 = qcdr(v134);
    v134 = qcdr(v134);
    v134 = qcar(v134);
    { popv(1); return onevalue(v134); }

v44:
    v134 = stack[0];
    v105 = qcar(v134);
    v134 = elt(env, 2); /* quotient */
    if (v105 == v134) goto v99;
    v134 = stack[0];
    v134 = qcdr(v134);
    v134 = qcar(v134);
    { popv(1); return onevalue(v134); }

v99:
    v134 = stack[0];
    v134 = qcdr(v134);
    v105 = qcar(v134);
    v134 = stack[0];
    v134 = qcdr(v134);
    v134 = qcdr(v134);
    v134 = qcar(v134);
    fn = elt(env, 3); /* worderp */
    v134 = (*qfn2(fn))(qenv(fn), v105, v134);
    nil = C_nil;
    if (exception_pending()) goto v67;
    if (v134 == nil) goto v52;
    v134 = stack[0];
    v134 = qcdr(v134);
    v134 = qcar(v134);
    { popv(1); return onevalue(v134); }

v52:
    v134 = stack[0];
    v134 = qcdr(v134);
    v134 = qcdr(v134);
    v134 = qcar(v134);
    { popv(1); return onevalue(v134); }
/* error exit handlers */
v67:
    popv(1);
    return nil;
}



/* Code for i2rd!* */

static Lisp_Object CC_i2rdH(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v4;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v4 = v0;
/* end of prologue */
    fn = elt(env, 1); /* chkint!* */
    v4 = (*qfn1(fn))(qenv(fn), v4);
    nil = C_nil;
    if (exception_pending()) goto v12;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 2); /* mkround */
        return (*qfn1(fn))(qenv(fn), v4);
    }
/* error exit handlers */
v12:
    popv(1);
    return nil;
}



/* Code for fprin2 */

static Lisp_Object CC_fprin2(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v13, v24;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v24 = v0;
/* end of prologue */
    v13 = nil;
    stack[0] = qvalue(elt(env, 1)); /* !*lower */
    qvalue(elt(env, 1)) = v13; /* !*lower */
    v13 = qvalue(elt(env, 2)); /* !*fortupper */
    if (v13 == nil) goto v8;
    v13 = v24;
    fn = elt(env, 3); /* prin2!-upcase */
    v13 = (*qfn1(fn))(qenv(fn), v13);
    nil = C_nil;
    if (exception_pending()) goto v27;
    env = stack[-1];
    goto v4;

v4:
    qvalue(elt(env, 1)) = stack[0]; /* !*lower */
    { popv(2); return onevalue(v13); }

v8:
    v13 = v24;
    fn = elt(env, 4); /* prin2!-downcase */
    v13 = (*qfn1(fn))(qenv(fn), v13);
    nil = C_nil;
    if (exception_pending()) goto v27;
    env = stack[-1];
    goto v4;
/* error exit handlers */
v27:
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*lower */
    popv(2);
    return nil;
}



/* Code for fs!:angle!-order */

static Lisp_Object CC_fsTangleKorder(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v219, v91, v235;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v16;
    stack[-3] = v0;
/* end of prologue */
    v219 = (Lisp_Object)1; /* 0 */
    stack[-4] = v219;
    v91 = stack[-3];
    v219 = (Lisp_Object)33; /* 2 */
    v219 = *(Lisp_Object *)((char *)v91 + (CELL-TAG_VECTOR) + ((int32)v219/(16/CELL)));
    stack[-1] = v219;
    v91 = stack[-2];
    v219 = (Lisp_Object)33; /* 2 */
    v219 = *(Lisp_Object *)((char *)v91 + (CELL-TAG_VECTOR) + ((int32)v219/(16/CELL)));
    stack[0] = v219;
    goto v30;

v30:
    v91 = stack[-1];
    v219 = stack[-4];
    v235 = *(Lisp_Object *)((char *)v91 + (CELL-TAG_VECTOR) + ((int32)v219/(16/CELL)));
    v91 = stack[0];
    v219 = stack[-4];
    v219 = *(Lisp_Object *)((char *)v91 + (CELL-TAG_VECTOR) + ((int32)v219/(16/CELL)));
    v219 = difference2(v235, v219);
    nil = C_nil;
    if (exception_pending()) goto v80;
    env = stack[-5];
    v235 = v219;
    v91 = v235;
    v219 = (Lisp_Object)1; /* 0 */
    if (v91 == v219) goto v193;
    v91 = v235;
    v219 = (Lisp_Object)1; /* 0 */
        popv(6);
        return Lgreaterp(nil, v91, v219);

v193:
    v219 = stack[-4];
    v219 = add1(v219);
    nil = C_nil;
    if (exception_pending()) goto v80;
    env = stack[-5];
    stack[-4] = v219;
    v91 = stack[-4];
    v219 = (Lisp_Object)129; /* 8 */
    v219 = (Lisp_Object)lessp2(v91, v219);
    nil = C_nil;
    if (exception_pending()) goto v80;
    v219 = v219 ? lisp_true : nil;
    env = stack[-5];
    if (!(v219 == nil)) goto v30;
    v91 = stack[-3];
    v219 = (Lisp_Object)17; /* 1 */
    v235 = *(Lisp_Object *)((char *)v91 + (CELL-TAG_VECTOR) + ((int32)v219/(16/CELL)));
    v91 = stack[-2];
    v219 = (Lisp_Object)17; /* 1 */
    v219 = *(Lisp_Object *)((char *)v91 + (CELL-TAG_VECTOR) + ((int32)v219/(16/CELL)));
    if (equal(v235, v219)) goto v106;
    v91 = stack[-3];
    v219 = (Lisp_Object)17; /* 1 */
    v219 = *(Lisp_Object *)((char *)v91 + (CELL-TAG_VECTOR) + ((int32)v219/(16/CELL)));
    v91 = elt(env, 1); /* sin */
    if (v219 == v91) goto v144;
    v219 = lisp_true;
    { popv(6); return onevalue(v219); }

v144:
    v219 = nil;
    { popv(6); return onevalue(v219); }

v106:
    v219 = nil;
    { popv(6); return onevalue(v219); }
/* error exit handlers */
v80:
    popv(6);
    return nil;
}



/* Code for mo!=degcomp */

static Lisp_Object CC_moMdegcomp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v36, v48, v33, v51;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v48 = v16;
    v33 = v0;
/* end of prologue */

v4:
    v36 = v33;
    if (v36 == nil) goto v5;
    v36 = v33;
    v51 = qcar(v36);
    v36 = v48;
    v36 = qcar(v36);
    if (equal(v51, v36)) goto v1;
    v36 = v33;
    v36 = qcar(v36);
    v48 = qcar(v48);
    if (((int32)(v36)) < ((int32)(v48))) goto v18;
    v36 = (Lisp_Object)17; /* 1 */
    return onevalue(v36);

v18:
    v36 = (Lisp_Object)-15; /* -1 */
    return onevalue(v36);

v1:
    v36 = v33;
    v36 = qcdr(v36);
    v33 = v36;
    v36 = v48;
    v36 = qcdr(v36);
    v48 = v36;
    goto v4;

v5:
    v36 = (Lisp_Object)1; /* 0 */
    return onevalue(v36);
}



/* Code for rev */

static Lisp_Object CC_rev(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v18, v19, v20;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v18 = v16;
    v19 = v0;
/* end of prologue */

v12:
    v20 = v19;
    if (v20 == nil) { popv(2); return onevalue(v18); }
    v20 = v19;
    v20 = qcdr(v20);
    stack[0] = v20;
    v19 = qcar(v19);
    v18 = cons(v19, v18);
    nil = C_nil;
    if (exception_pending()) goto v22;
    env = stack[-1];
    v19 = stack[0];
    goto v12;
/* error exit handlers */
v22:
    popv(2);
    return nil;
}



/* Code for setcar */

static Lisp_Object CC_setcar(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v1, v2;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    v1 = v0;
/* end of prologue */
    v2 = v1;
    v1 = stack[0];
    v1 = Lrplaca(nil, v2, v1);
    nil = C_nil;
    if (exception_pending()) goto v13;
    { Lisp_Object res = stack[0]; popv(1); return onevalue(res); }
/* error exit handlers */
v13:
    popv(1);
    return nil;
}



/* Code for plus!-mod!-p */

static Lisp_Object CC_plusKmodKp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v470, v432;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v16;
    stack[-3] = v0;
/* end of prologue */
    stack[0] = nil;
    goto v12;

v12:
    v470 = stack[-3];
    if (v470 == nil) goto v2;
    v470 = stack[-2];
    if (v470 == nil) goto v43;
    v470 = stack[-3];
    if (!consp(v470)) goto v22;
    v470 = stack[-3];
    v470 = qcar(v470);
    if (!consp(v470)) goto v22;
    v470 = stack[-2];
    if (!consp(v470)) goto v106;
    v470 = stack[-2];
    v470 = qcar(v470);
    if (!consp(v470)) goto v106;
    v470 = stack[-3];
    v470 = qcar(v470);
    v432 = qcar(v470);
    v470 = stack[-2];
    v470 = qcar(v470);
    v470 = qcar(v470);
    if (equal(v432, v470)) goto v144;
    v470 = stack[-3];
    v470 = qcar(v470);
    v470 = qcar(v470);
    v432 = qcar(v470);
    v470 = stack[-2];
    v470 = qcar(v470);
    v470 = qcar(v470);
    v470 = qcar(v470);
    if (!(equal(v432, v470))) goto v125;
    v470 = stack[-3];
    v470 = qcar(v470);
    v470 = qcar(v470);
    v432 = qcdr(v470);
    v470 = stack[-2];
    v470 = qcar(v470);
    v470 = qcar(v470);
    v470 = qcdr(v470);
    if (!(((int32)(v432)) > ((int32)(v470)))) goto v125;

v183:
    v470 = stack[-3];
    v432 = qcar(v470);
    v470 = stack[0];
    v470 = cons(v432, v470);
    nil = C_nil;
    if (exception_pending()) goto v177;
    env = stack[-5];
    stack[0] = v470;
    v470 = stack[-3];
    v470 = qcdr(v470);
    stack[-3] = v470;
    goto v12;

v125:
    v470 = stack[-3];
    v470 = qcar(v470);
    v470 = qcar(v470);
    v432 = qcar(v470);
    v470 = stack[-2];
    v470 = qcar(v470);
    v470 = qcar(v470);
    v470 = qcar(v470);
    if (equal(v432, v470)) goto v519;
    v470 = stack[-3];
    v470 = qcar(v470);
    v470 = qcar(v470);
    v432 = qcar(v470);
    v470 = stack[-2];
    v470 = qcar(v470);
    v470 = qcar(v470);
    v470 = qcar(v470);
    fn = elt(env, 1); /* ordop */
    v470 = (*qfn2(fn))(qenv(fn), v432, v470);
    nil = C_nil;
    if (exception_pending()) goto v177;
    env = stack[-5];
    if (!(v470 == nil)) goto v183;

v519:
    v470 = stack[-2];
    v432 = qcar(v470);
    v470 = stack[0];
    v470 = cons(v432, v470);
    nil = C_nil;
    if (exception_pending()) goto v177;
    env = stack[-5];
    stack[0] = v470;
    v470 = stack[-2];
    v470 = qcdr(v470);
    stack[-2] = v470;
    goto v12;

v144:
    stack[-4] = stack[0];
    v470 = stack[-3];
    v470 = qcar(v470);
    stack[-1] = qcar(v470);
    v470 = stack[-3];
    v470 = qcar(v470);
    v432 = qcdr(v470);
    v470 = stack[-2];
    v470 = qcar(v470);
    v470 = qcdr(v470);
    stack[0] = CC_plusKmodKp(env, v432, v470);
    nil = C_nil;
    if (exception_pending()) goto v177;
    env = stack[-5];
    v470 = stack[-3];
    v432 = qcdr(v470);
    v470 = stack[-2];
    v470 = qcdr(v470);
    v470 = CC_plusKmodKp(env, v432, v470);
    nil = C_nil;
    if (exception_pending()) goto v177;
    env = stack[-5];
    fn = elt(env, 2); /* adjoin!-term */
    v470 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[0], v470);
    nil = C_nil;
    if (exception_pending()) goto v177;
    env = stack[-5];
    {
        Lisp_Object v254 = stack[-4];
        popv(6);
        fn = elt(env, 3); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v254, v470);
    }

v106:
    v470 = stack[-3];
    v432 = qcar(v470);
    v470 = stack[0];
    v470 = cons(v432, v470);
    nil = C_nil;
    if (exception_pending()) goto v177;
    env = stack[-5];
    stack[0] = v470;
    v470 = stack[-3];
    v470 = qcdr(v470);
    stack[-3] = v470;
    goto v12;

v22:
    v470 = stack[-2];
    if (!consp(v470)) goto v206;
    v470 = stack[-2];
    v470 = qcar(v470);
    if (!consp(v470)) goto v206;
    v470 = stack[-2];
    v432 = qcar(v470);
    v470 = stack[0];
    v470 = cons(v432, v470);
    nil = C_nil;
    if (exception_pending()) goto v177;
    env = stack[-5];
    stack[0] = v470;
    v470 = stack[-2];
    v470 = qcdr(v470);
    stack[-2] = v470;
    goto v12;

v206:
    v432 = stack[-3];
    v470 = stack[-2];
    {   int32 w = int_of_fixnum(v432) + int_of_fixnum(v470);
        if (w >= current_modulus) w -= current_modulus;
        v470 = fixnum_of_int(w);
    }
    fn = elt(env, 4); /* !*n2f */
    v470 = (*qfn1(fn))(qenv(fn), v470);
    nil = C_nil;
    if (exception_pending()) goto v177;
    env = stack[-5];
    {
        Lisp_Object v201 = stack[0];
        popv(6);
        fn = elt(env, 3); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v201, v470);
    }

v43:
    v432 = stack[0];
    v470 = stack[-3];
    {
        popv(6);
        fn = elt(env, 3); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v432, v470);
    }

v2:
    v432 = stack[0];
    v470 = stack[-2];
    {
        popv(6);
        fn = elt(env, 3); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v432, v470);
    }
/* error exit handlers */
v177:
    popv(6);
    return nil;
}



/* Code for bcint2op */

static Lisp_Object MS_CDECL CC_bcint2op(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v16,
                         Lisp_Object v63, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v121, v143, v144, v191, v192;
    argcheck(nargs, 3, "bcint2op");
    if (stack >= stacklimit)
    {
        push3(v63,v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v16,v63);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v192 = v63;
    v144 = v16;
    v191 = v0;
/* end of prologue */
    v121 = qvalue(elt(env, 1)); /* dmode!* */
    if (!(v121 == nil)) goto v45;
    v143 = (Lisp_Object)17; /* 1 */
    v121 = v191;
    v121 = qcdr(v121);
    if (!(v143 == v121)) goto v45;
    v121 = v191;
    v121 = qcar(v121);
    v191 = v121;
    if (!(is_number(v121))) goto v45;
    v143 = (Lisp_Object)17; /* 1 */
    v121 = v144;
    v121 = qcdr(v121);
    if (!(v143 == v121)) goto v45;
    v121 = v144;
    v121 = qcar(v121);
    v144 = v121;
    if (!(is_number(v121))) goto v45;
    v143 = v192;
    v121 = elt(env, 2); /* times */
    if (v143 == v121) goto v49;
    v143 = v192;
    v121 = elt(env, 3); /* plus */
    if (v143 == v121) goto v68;
    v121 = v192;
    v143 = v191;
    v121 = Lapply2(nil, 3, v121, v143, v144);
    errexit();
    goto v53;

v53:
    v191 = v121;
    if (v121 == nil) goto v45;
    v143 = v191;
    v121 = (Lisp_Object)1; /* 0 */
    if (v143 == v121) goto v128;
    v121 = v191;
    v143 = v121;
    goto v85;

v85:
    v121 = (Lisp_Object)17; /* 1 */
    return cons(v143, v121);

v128:
    v121 = nil;
    v143 = v121;
    goto v85;

v45:
    v121 = nil;
    return onevalue(v121);

v68:
    v121 = v191;
    v143 = v144;
    v121 = plus2(v121, v143);
    errexit();
    goto v53;

v49:
    v121 = v191;
    v143 = v144;
    v121 = times2(v121, v143);
    errexit();
    goto v53;
}



/* Code for hasonephysop */

static Lisp_Object CC_hasonephysop(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v28;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */

v11:
    v28 = stack[0];
    if (v28 == nil) goto v3;
    v28 = stack[0];
    v28 = qcar(v28);
    fn = elt(env, 1); /* physopp!* */
    v28 = (*qfn1(fn))(qenv(fn), v28);
    nil = C_nil;
    if (exception_pending()) goto v44;
    env = stack[-1];
    if (!(v28 == nil)) { popv(2); return onevalue(v28); }
    v28 = stack[0];
    v28 = qcdr(v28);
    stack[0] = v28;
    goto v11;

v3:
    v28 = nil;
    { popv(2); return onevalue(v28); }
/* error exit handlers */
v44:
    popv(2);
    return nil;
}



/* Code for qassoc */

static Lisp_Object CC_qassoc(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v20, v21, v22, v23;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v21 = v16;
    v22 = v0;
/* end of prologue */

v4:
    v20 = v21;
    if (v20 == nil) goto v5;
    v23 = v22;
    v20 = v21;
    v20 = qcar(v20);
    v20 = qcar(v20);
    if (v23 == v20) goto v1;
    v20 = v21;
    v20 = qcdr(v20);
    v21 = v20;
    goto v4;

v1:
    v20 = v21;
    v20 = qcar(v20);
    return onevalue(v20);

v5:
    v20 = nil;
    return onevalue(v20);
}



/* Code for fs!:timesterm */

static Lisp_Object CC_fsTtimesterm(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v50, v52, v193;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */
    v50 = stack[0];
    if (v50 == nil) goto v4;
    v50 = stack[-1];
    if (v50 == nil) goto v6;
    v52 = stack[-1];
    v50 = stack[0];
    fn = elt(env, 1); /* fs!:timestermterm */
    v50 = (*qfn2(fn))(qenv(fn), v52, v50);
    nil = C_nil;
    if (exception_pending()) goto v40;
    env = stack[-3];
    stack[-2] = v50;
    v193 = stack[-1];
    v52 = stack[0];
    v50 = (Lisp_Object)49; /* 3 */
    v50 = *(Lisp_Object *)((char *)v52 + (CELL-TAG_VECTOR) + ((int32)v50/(16/CELL)));
    v50 = CC_fsTtimesterm(env, v193, v50);
    nil = C_nil;
    if (exception_pending()) goto v40;
    env = stack[-3];
    {
        Lisp_Object v206 = stack[-2];
        popv(4);
        fn = elt(env, 2); /* fs!:plus */
        return (*qfn2(fn))(qenv(fn), v206, v50);
    }

v6:
    v50 = nil;
    { popv(4); return onevalue(v50); }

v4:
    v50 = nil;
    { popv(4); return onevalue(v50); }
/* error exit handlers */
v40:
    popv(4);
    return nil;
}



/* Code for cali_trace */

static Lisp_Object MS_CDECL CC_cali_trace(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v6, v7;
    argcheck(nargs, 0, "cali_trace");
    CSL_IGNORE(env);
/* end of prologue */
    v6 = elt(env, 1); /* cali */
    v7 = elt(env, 2); /* trace */
    return get(v6, v7);
}



/* Code for hasonevector */

static Lisp_Object CC_hasonevector(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v28;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */

v11:
    v28 = stack[0];
    if (v28 == nil) goto v3;
    v28 = stack[0];
    v28 = qcar(v28);
    fn = elt(env, 1); /* vecp */
    v28 = (*qfn1(fn))(qenv(fn), v28);
    nil = C_nil;
    if (exception_pending()) goto v44;
    env = stack[-1];
    if (!(v28 == nil)) { popv(2); return onevalue(v28); }
    v28 = stack[0];
    v28 = qcdr(v28);
    stack[0] = v28;
    goto v11;

v3:
    v28 = nil;
    { popv(2); return onevalue(v28); }
/* error exit handlers */
v44:
    popv(2);
    return nil;
}



/* Code for pv_sort2 */

static Lisp_Object CC_pv_sort2(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v1, v2;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    v1 = v0;
/* end of prologue */
    v2 = v1;
    v1 = stack[0];
    fn = elt(env, 1); /* pv_sort2a */
    v1 = (*qfn2(fn))(qenv(fn), v2, v1);
    nil = C_nil;
    if (exception_pending()) goto v13;
    { Lisp_Object res = stack[0]; popv(1); return onevalue(res); }
/* error exit handlers */
v13:
    popv(1);
    return nil;
}



/* Code for bfzerop!: */

static Lisp_Object CC_bfzeropT(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v1, v2;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v1 = v0;
/* end of prologue */
    v1 = qcdr(v1);
    v2 = qcar(v1);
    v1 = (Lisp_Object)1; /* 0 */
    v1 = (v2 == v1 ? lisp_true : nil);
    return onevalue(v1);
}



/* Code for !*collectphysops */

static Lisp_Object CC_Hcollectphysops(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v32, v37;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    stack[-1] = nil;
    v32 = stack[0];
    fn = elt(env, 1); /* physopp */
    v32 = (*qfn1(fn))(qenv(fn), v32);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-2];
    if (v32 == nil) goto v5;
    v32 = stack[0];
    popv(3);
    return ncons(v32);

v5:
    v32 = stack[0];
    if (!(!consp(v32))) goto v12;
    v32 = nil;
    { popv(3); return onevalue(v32); }

v12:
    v32 = stack[0];
    v32 = qcar(v32);
    v37 = v32;
    v32 = stack[0];
    v32 = qcdr(v32);
    stack[0] = v32;
    v32 = v37;
    v32 = CC_Hcollectphysops(env, v32);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-2];
    v32 = Lnconc(nil, stack[-1], v32);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-2];
    stack[-1] = v32;
    v32 = stack[0];
    if (v32 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    else goto v12;
/* error exit handlers */
v33:
    popv(3);
    return nil;
}



/* Code for getroad */

static Lisp_Object CC_getroad(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v32, v37, v36, v48;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v36 = v16;
    v48 = v0;
/* end of prologue */

v4:
    v32 = v36;
    if (v32 == nil) goto v5;
    v32 = v48;
    v37 = qcdr(v32);
    v32 = v36;
    v32 = qcar(v32);
    v32 = qcdr(v32);
    if (equal(v37, v32)) goto v29;
    v32 = v36;
    v32 = qcdr(v32);
    v36 = v32;
    goto v4;

v29:
    v32 = v48;
    v32 = qcar(v32);
    v37 = v36;
    v37 = qcar(v37);
    v37 = qcar(v37);
    fn = elt(env, 1); /* qassoc */
    v32 = (*qfn2(fn))(qenv(fn), v32, v37);
    errexit();
    v32 = qcdr(v32);
    return onevalue(v32);

v5:
    v32 = (Lisp_Object)17; /* 1 */
    return onevalue(v32);
}



/* Code for pv_renorm */

static Lisp_Object CC_pv_renorm(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v74, v73;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    v74 = stack[0];
    if (!(v74 == nil)) goto v24;
    v74 = nil;
    { popv(5); return onevalue(v74); }

v24:
    v74 = stack[0];
    if (v74 == nil) goto v13;
    v74 = stack[0];
    v74 = qcar(v74);
    v73 = qcar(v74);
    v74 = (Lisp_Object)1; /* 0 */
    if (!(v73 == v74)) goto v13;
    v74 = stack[0];
    v74 = qcdr(v74);
    stack[0] = v74;
    goto v24;

v13:
    v74 = stack[0];
    if (v74 == nil) goto v46;
    v74 = stack[0];
    v74 = qcar(v74);
    v73 = qcar(v74);
    v74 = (Lisp_Object)1; /* 0 */
    v74 = (Lisp_Object)lessp2(v73, v74);
    nil = C_nil;
    if (exception_pending()) goto v187;
    v74 = v74 ? lisp_true : nil;
    env = stack[-4];
    if (v74 == nil) goto v48;
    v74 = stack[0];
    fn = elt(env, 1); /* pv_neg */
    v74 = (*qfn1(fn))(qenv(fn), v74);
    nil = C_nil;
    if (exception_pending()) goto v187;
    env = stack[-4];
    stack[0] = v74;
    goto v48;

v48:
    v74 = stack[0];
    v74 = qcar(v74);
    v74 = qcar(v74);
    stack[-2] = v74;
    v74 = stack[0];
    v74 = qcdr(v74);
    stack[-3] = v74;
    goto v56;

v56:
    v74 = stack[-3];
    if (v74 == nil) goto v68;
    v73 = stack[-2];
    v74 = (Lisp_Object)17; /* 1 */
    v74 = Lneq(nil, v73, v74);
    nil = C_nil;
    if (exception_pending()) goto v187;
    env = stack[-4];
    if (v74 == nil) goto v68;
    v73 = stack[-2];
    v74 = stack[-3];
    v74 = qcar(v74);
    v74 = qcar(v74);
    fn = elt(env, 2); /* gcdf!* */
    v74 = (*qfn2(fn))(qenv(fn), v73, v74);
    nil = C_nil;
    if (exception_pending()) goto v187;
    env = stack[-4];
    stack[-2] = v74;
    v74 = stack[-3];
    v74 = qcdr(v74);
    stack[-3] = v74;
    goto v56;

v68:
    v74 = nil;
    stack[-3] = v74;
    v74 = stack[0];
    stack[-1] = v74;
    goto v146;

v146:
    v74 = stack[-1];
    if (v74 == nil) goto v145;
    v74 = stack[-1];
    v74 = qcar(v74);
    stack[0] = v74;
    v74 = stack[0];
    v73 = qcar(v74);
    v74 = (Lisp_Object)1; /* 0 */
    if (v73 == v74) goto v82;
    v73 = stack[-2];
    v74 = (Lisp_Object)17; /* 1 */
    if (v73 == v74) goto v235;
    v74 = stack[0];
    v73 = qcar(v74);
    v74 = stack[-2];
    v73 = quot2(v73, v74);
    nil = C_nil;
    if (exception_pending()) goto v187;
    env = stack[-4];
    v74 = stack[0];
    v74 = qcdr(v74);
    v74 = cons(v73, v74);
    nil = C_nil;
    if (exception_pending()) goto v187;
    env = stack[-4];
    v73 = v74;
    goto v233;

v233:
    v74 = stack[-3];
    v74 = cons(v73, v74);
    nil = C_nil;
    if (exception_pending()) goto v187;
    env = stack[-4];
    stack[-3] = v74;
    goto v82;

v82:
    v74 = stack[-1];
    v74 = qcdr(v74);
    stack[-1] = v74;
    goto v146;

v235:
    v74 = stack[0];
    v73 = v74;
    goto v233;

v145:
    v74 = stack[-3];
        popv(5);
        return Lnreverse(nil, v74);

v46:
    v74 = nil;
    { popv(5); return onevalue(v74); }
/* error exit handlers */
v187:
    popv(5);
    return nil;
}



/* Code for times!-term!-mod!-p */

static Lisp_Object CC_timesKtermKmodKp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v232, v127, v186;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v16;
    stack[-2] = v0;
/* end of prologue */
    v232 = stack[-1];
    if (v232 == nil) goto v4;
    v232 = stack[-1];
    if (!consp(v232)) goto v26;
    v232 = stack[-1];
    v232 = qcar(v232);
    if (!consp(v232)) goto v26;
    v232 = stack[-2];
    v232 = qcar(v232);
    v127 = qcar(v232);
    v232 = stack[-1];
    v232 = qcar(v232);
    v232 = qcar(v232);
    v232 = qcar(v232);
    if (equal(v127, v232)) goto v150;
    v232 = stack[-2];
    v232 = qcar(v232);
    v127 = qcar(v232);
    v232 = stack[-1];
    v232 = qcar(v232);
    v232 = qcar(v232);
    v232 = qcar(v232);
    fn = elt(env, 1); /* ordop */
    v232 = (*qfn2(fn))(qenv(fn), v127, v232);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    if (v232 == nil) goto v114;
    v232 = stack[-2];
    stack[0] = qcar(v232);
    v232 = stack[-2];
    v127 = qcdr(v232);
    v232 = stack[-1];
    fn = elt(env, 2); /* times!-mod!-p */
    v127 = (*qfn2(fn))(qenv(fn), v127, v232);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    v232 = nil;
    {
        Lisp_Object v94 = stack[0];
        popv(5);
        fn = elt(env, 3); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v94, v127, v232);
    }

v114:
    v232 = stack[-1];
    v232 = qcar(v232);
    stack[-3] = qcar(v232);
    v127 = stack[-2];
    v232 = stack[-1];
    v232 = qcar(v232);
    v232 = qcdr(v232);
    stack[0] = CC_timesKtermKmodKp(env, v127, v232);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    v127 = stack[-2];
    v232 = stack[-1];
    v232 = qcdr(v232);
    v232 = CC_timesKtermKmodKp(env, v127, v232);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    {
        Lisp_Object v212 = stack[-3];
        Lisp_Object v462 = stack[0];
        popv(5);
        fn = elt(env, 3); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v212, v462, v232);
    }

v150:
    v232 = stack[-2];
    v232 = qcar(v232);
    v186 = qcar(v232);
    v232 = stack[-2];
    v232 = qcar(v232);
    v127 = qcdr(v232);
    v232 = stack[-1];
    v232 = qcar(v232);
    v232 = qcar(v232);
    v232 = qcdr(v232);
    v232 = (Lisp_Object)(int32)((int32)v127 + (int32)v232 - TAG_FIXNUM);
    fn = elt(env, 4); /* mksp */
    stack[-3] = (*qfn2(fn))(qenv(fn), v186, v232);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    v232 = stack[-2];
    v127 = qcdr(v232);
    v232 = stack[-1];
    v232 = qcar(v232);
    v232 = qcdr(v232);
    fn = elt(env, 2); /* times!-mod!-p */
    stack[0] = (*qfn2(fn))(qenv(fn), v127, v232);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    v127 = stack[-2];
    v232 = stack[-1];
    v232 = qcdr(v232);
    v232 = CC_timesKtermKmodKp(env, v127, v232);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    {
        Lisp_Object v123 = stack[-3];
        Lisp_Object v124 = stack[0];
        popv(5);
        fn = elt(env, 3); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v123, v124, v232);
    }

v26:
    v232 = stack[-2];
    stack[0] = qcar(v232);
    v232 = stack[-2];
    v127 = qcdr(v232);
    v232 = stack[-1];
    fn = elt(env, 5); /* multiply!-by!-constant!-mod!-p */
    v127 = (*qfn2(fn))(qenv(fn), v127, v232);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    v232 = nil;
    {
        Lisp_Object v125 = stack[0];
        popv(5);
        fn = elt(env, 3); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v125, v127, v232);
    }

v4:
    v232 = nil;
    { popv(5); return onevalue(v232); }
/* error exit handlers */
v108:
    popv(5);
    return nil;
}



/* Code for striptag */

static Lisp_Object CC_striptag(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v1, v2;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v1 = v0;
/* end of prologue */
    v2 = v1;
    if (!consp(v2)) return onevalue(v1);
    v1 = qcdr(v1);
    return onevalue(v1);
}



/* Code for evsum */

static Lisp_Object CC_evsum(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v66, v70, v71;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */
    v71 = nil;
    goto v5;

v5:
    v66 = stack[-1];
    if (v66 == nil) goto v45;
    v66 = stack[0];
    if (v66 == nil) goto v45;
    v66 = stack[-1];
    v70 = qcar(v66);
    v66 = stack[0];
    v66 = qcar(v66);
    v66 = (Lisp_Object)(int32)((int32)v70 + (int32)v66 - TAG_FIXNUM);
    v70 = v71;
    v66 = cons(v66, v70);
    nil = C_nil;
    if (exception_pending()) goto v72;
    env = stack[-2];
    v71 = v66;
    v66 = stack[-1];
    v66 = qcdr(v66);
    stack[-1] = v66;
    v66 = stack[0];
    v66 = qcdr(v66);
    stack[0] = v66;
    goto v5;

v45:
    v66 = v71;
    v66 = Lnreverse(nil, v66);
    v71 = v66;
    v66 = stack[-1];
    if (v66 == nil) goto v33;
    v70 = v71;
    v66 = stack[-1];
        popv(3);
        return Lnconc(nil, v70, v66);

v33:
    v66 = stack[0];
    if (v66 == nil) { popv(3); return onevalue(v71); }
    v70 = v71;
    v66 = stack[0];
        popv(3);
        return Lnconc(nil, v70, v66);
/* error exit handlers */
v72:
    popv(3);
    return nil;
}



/* Code for round!:last */

static Lisp_Object CC_roundTlast(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v101, v57, v72;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    v57 = v0;
/* end of prologue */
    v101 = v57;
    v101 = qcdr(v101);
    stack[0] = qcar(v101);
    v101 = v57;
    v101 = qcdr(v101);
    v101 = qcdr(v101);
    v57 = add1(v101);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-3];
    v101 = nil;
    stack[-2] = stack[0];
    stack[-1] = v57;
    stack[0] = v101;
    v57 = stack[-2];
    v101 = (Lisp_Object)1; /* 0 */
    v101 = (Lisp_Object)lessp2(v57, v101);
    nil = C_nil;
    if (exception_pending()) goto v65;
    v101 = v101 ? lisp_true : nil;
    env = stack[-3];
    if (v101 == nil) goto v25;
    v101 = stack[-2];
    v101 = negate(v101);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-3];
    stack[-2] = v101;
    v101 = lisp_true;
    stack[0] = v101;
    goto v25;

v25:
    v101 = stack[-2];
    v101 = Levenp(nil, v101);
    env = stack[-3];
    if (v101 == nil) goto v53;
    v57 = stack[-2];
    v101 = (Lisp_Object)-15; /* -1 */
    v101 = ash(v57, v101);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-3];
    goto v20;

v20:
    stack[-2] = v101;
    v101 = stack[0];
    if (v101 == nil) goto v105;
    v101 = stack[-2];
    v101 = negate(v101);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-3];
    stack[-2] = v101;
    goto v105;

v105:
    v72 = elt(env, 1); /* !:rd!: */
    v57 = stack[-2];
    v101 = stack[-1];
    popv(4);
    return list2star(v72, v57, v101);

v53:
    v57 = stack[-2];
    v101 = (Lisp_Object)-15; /* -1 */
    v101 = ash(v57, v101);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-3];
    v101 = add1(v101);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-3];
    goto v20;
/* error exit handlers */
v65:
    popv(4);
    return nil;
}



/* Code for rd!:minusp */

static Lisp_Object CC_rdTminusp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v13, v24;
    Lisp_Object fn;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v24 = v0;
/* end of prologue */
    v13 = v24;
    v13 = qcdr(v13);
    if (!consp(v13)) goto v3;
    v13 = v24;
    {
        fn = elt(env, 1); /* minusp!: */
        return (*qfn1(fn))(qenv(fn), v13);
    }

v3:
    v13 = v24;
    v13 = qcdr(v13);
        return Lminusp(nil, v13);
}



/* Code for prin2!-downcase */

static Lisp_Object CC_prin2Kdowncase(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v23, v30;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v23 = v0;
/* end of prologue */
    v23 = Lexplodec(nil, v23);
    nil = C_nil;
    if (exception_pending()) goto v10;
    env = stack[-1];
    stack[0] = v23;
    goto v4;

v4:
    v23 = stack[0];
    if (v23 == nil) goto v7;
    v23 = stack[0];
    v23 = qcar(v23);
    v30 = v23;
    v23 = v30;
    v23 = Lalpha_char_p(nil, v23);
    env = stack[-1];
    if (v23 == nil) goto v17;
    v23 = v30;
    fn = elt(env, 1); /* red!-char!-downcase */
    v23 = (*qfn1(fn))(qenv(fn), v23);
    nil = C_nil;
    if (exception_pending()) goto v10;
    env = stack[-1];
    v23 = Lprinc(nil, v23);
    nil = C_nil;
    if (exception_pending()) goto v10;
    env = stack[-1];
    goto v27;

v27:
    v23 = stack[0];
    v23 = qcdr(v23);
    stack[0] = v23;
    goto v4;

v17:
    v23 = v30;
    v23 = Lprinc(nil, v23);
    nil = C_nil;
    if (exception_pending()) goto v10;
    env = stack[-1];
    goto v27;

v7:
    v23 = nil;
    { popv(2); return onevalue(v23); }
/* error exit handlers */
v10:
    popv(2);
    return nil;
}



/* Code for constimes */

static Lisp_Object CC_constimes(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v7, v8;
    Lisp_Object fn;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v7 = v0;
/* end of prologue */
    v8 = v7;
    v7 = nil;
    {
        fn = elt(env, 1); /* cstimes */
        return (*qfn2(fn))(qenv(fn), v8, v7);
    }
}



/* Code for fs!:plus */

static Lisp_Object CC_fsTplus(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v478, v263, v316;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v16;
    stack[-2] = v0;
/* end of prologue */

v11:
    v478 = stack[-1];
    if (v478 == nil) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v478 = stack[-2];
    if (v478 == nil) { Lisp_Object res = stack[-1]; popv(5); return onevalue(res); }
    v263 = stack[-2];
    v478 = (Lisp_Object)17; /* 1 */
    v316 = *(Lisp_Object *)((char *)v263 + (CELL-TAG_VECTOR) + ((int32)v478/(16/CELL)));
    v263 = stack[-1];
    v478 = (Lisp_Object)17; /* 1 */
    v478 = *(Lisp_Object *)((char *)v263 + (CELL-TAG_VECTOR) + ((int32)v478/(16/CELL)));
    if (!(equal(v316, v478))) goto v92;
    v263 = stack[-2];
    v478 = (Lisp_Object)33; /* 2 */
    v316 = *(Lisp_Object *)((char *)v263 + (CELL-TAG_VECTOR) + ((int32)v478/(16/CELL)));
    v263 = stack[-1];
    v478 = (Lisp_Object)33; /* 2 */
    v478 = *(Lisp_Object *)((char *)v263 + (CELL-TAG_VECTOR) + ((int32)v478/(16/CELL)));
    fn = elt(env, 1); /* angles!-equal */
    v478 = (*qfn2(fn))(qenv(fn), v316, v478);
    nil = C_nil;
    if (exception_pending()) goto v307;
    env = stack[-4];
    if (v478 == nil) goto v92;
    v263 = stack[-2];
    v478 = (Lisp_Object)1; /* 0 */
    v316 = *(Lisp_Object *)((char *)v263 + (CELL-TAG_VECTOR) + ((int32)v478/(16/CELL)));
    v263 = stack[-1];
    v478 = (Lisp_Object)1; /* 0 */
    v478 = *(Lisp_Object *)((char *)v263 + (CELL-TAG_VECTOR) + ((int32)v478/(16/CELL)));
    fn = elt(env, 2); /* addsq */
    v478 = (*qfn2(fn))(qenv(fn), v316, v478);
    nil = C_nil;
    if (exception_pending()) goto v307;
    env = stack[-4];
    v263 = v478;
    v263 = qcar(v263);
    if (v263 == nil) goto v96;
    v316 = stack[-2];
    v263 = (Lisp_Object)1; /* 0 */
    *(Lisp_Object *)((char *)v316 + (CELL-TAG_VECTOR) + ((int32)v263/(16/CELL))) = v478;
    stack[-3] = stack[-2];
    stack[0] = (Lisp_Object)49; /* 3 */
    v263 = stack[-2];
    v478 = (Lisp_Object)49; /* 3 */
    v316 = *(Lisp_Object *)((char *)v263 + (CELL-TAG_VECTOR) + ((int32)v478/(16/CELL)));
    v263 = stack[-1];
    v478 = (Lisp_Object)49; /* 3 */
    v478 = *(Lisp_Object *)((char *)v263 + (CELL-TAG_VECTOR) + ((int32)v478/(16/CELL)));
    v478 = CC_fsTplus(env, v316, v478);
    nil = C_nil;
    if (exception_pending()) goto v307;
    *(Lisp_Object *)((char *)stack[-3] + (CELL-TAG_VECTOR) + ((int32)stack[0]/(16/CELL))) = v478;
    { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }

v96:
    v263 = stack[-2];
    v478 = (Lisp_Object)49; /* 3 */
    v316 = *(Lisp_Object *)((char *)v263 + (CELL-TAG_VECTOR) + ((int32)v478/(16/CELL)));
    v263 = stack[-1];
    v478 = (Lisp_Object)49; /* 3 */
    v478 = *(Lisp_Object *)((char *)v263 + (CELL-TAG_VECTOR) + ((int32)v478/(16/CELL)));
    stack[-2] = v316;
    stack[-1] = v478;
    goto v11;

v92:
    v263 = stack[-2];
    v478 = stack[-1];
    fn = elt(env, 3); /* fs!:angle!-order */
    v478 = (*qfn2(fn))(qenv(fn), v263, v478);
    nil = C_nil;
    if (exception_pending()) goto v307;
    env = stack[-4];
    if (v478 == nil) goto v227;
    stack[-3] = stack[-2];
    stack[0] = (Lisp_Object)49; /* 3 */
    v263 = stack[-2];
    v478 = (Lisp_Object)49; /* 3 */
    v263 = *(Lisp_Object *)((char *)v263 + (CELL-TAG_VECTOR) + ((int32)v478/(16/CELL)));
    v478 = stack[-1];
    v478 = CC_fsTplus(env, v263, v478);
    nil = C_nil;
    if (exception_pending()) goto v307;
    *(Lisp_Object *)((char *)stack[-3] + (CELL-TAG_VECTOR) + ((int32)stack[0]/(16/CELL))) = v478;
    { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }

v227:
    stack[-3] = stack[-1];
    stack[0] = (Lisp_Object)49; /* 3 */
    v263 = stack[-1];
    v478 = (Lisp_Object)49; /* 3 */
    v263 = *(Lisp_Object *)((char *)v263 + (CELL-TAG_VECTOR) + ((int32)v478/(16/CELL)));
    v478 = stack[-2];
    v478 = CC_fsTplus(env, v263, v478);
    nil = C_nil;
    if (exception_pending()) goto v307;
    *(Lisp_Object *)((char *)stack[-3] + (CELL-TAG_VECTOR) + ((int32)stack[0]/(16/CELL))) = v478;
    { Lisp_Object res = stack[-1]; popv(5); return onevalue(res); }
/* error exit handlers */
v307:
    popv(5);
    return nil;
}



/* Code for mo!=shorten */

static Lisp_Object CC_moMshorten(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v22, v23;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v22 = v0;
/* end of prologue */
    v22 = Lreverse(nil, v22);
    nil = C_nil;
    if (exception_pending()) goto v99;
    env = stack[-1];
    stack[0] = v22;
    goto v6;

v6:
    v22 = stack[0];
    if (v22 == nil) goto v5;
    v22 = stack[0];
    v23 = qcar(v22);
    v22 = (Lisp_Object)1; /* 0 */
    v22 = Leqn(nil, v23, v22);
    nil = C_nil;
    if (exception_pending()) goto v99;
    env = stack[-1];
    if (v22 == nil) goto v5;
    v22 = stack[0];
    v22 = qcdr(v22);
    stack[0] = v22;
    goto v6;

v5:
    v22 = stack[0];
        popv(2);
        return Lnreverse(nil, v22);
/* error exit handlers */
v99:
    popv(2);
    return nil;
}



/* Code for dquot */

static Lisp_Object CC_dquot(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v193, v35, v34;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */
    stack[-2] = nil;
    goto v7;

v7:
    v193 = stack[-1];
    v35 = qcar(v193);
    v193 = stack[0];
    v193 = qcar(v193);
    v193 = difference2(v35, v193);
    nil = C_nil;
    if (exception_pending()) goto v41;
    env = stack[-3];
    v34 = v193;
    v35 = v34;
    v193 = (Lisp_Object)1; /* 0 */
    if (((int32)(v35)) < ((int32)(v193))) goto v44;
    v35 = v34;
    v193 = stack[-2];
    v193 = cons(v35, v193);
    nil = C_nil;
    if (exception_pending()) goto v41;
    env = stack[-3];
    stack[-2] = v193;
    v193 = stack[0];
    v193 = qcdr(v193);
    stack[0] = v193;
    v193 = stack[-1];
    v193 = qcdr(v193);
    stack[-1] = v193;
    v193 = stack[0];
    if (!(v193 == nil)) goto v7;
    v193 = stack[-2];
        popv(4);
        return Lnreverse(nil, v193);

v44:
    v193 = nil;
    { popv(4); return onevalue(v193); }
/* error exit handlers */
v41:
    popv(4);
    return nil;
}



/* Code for lcm */

static Lisp_Object CC_lcm(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v41, v64, v100, v150;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v100 = v16;
    v150 = v0;
/* end of prologue */
    v41 = v150;
    if (v41 == nil) goto v4;
    v41 = v100;
    if (v41 == nil) goto v4;
    v64 = v150;
    v41 = (Lisp_Object)17; /* 1 */
    if (v64 == v41) { popv(3); return onevalue(v100); }
    v64 = v100;
    v41 = (Lisp_Object)17; /* 1 */
    if (v64 == v41) { popv(3); return onevalue(v150); }
    stack[-1] = v150;
    stack[0] = v100;
    v41 = v150;
    v64 = v100;
    fn = elt(env, 1); /* gcdf */
    v41 = (*qfn2(fn))(qenv(fn), v41, v64);
    nil = C_nil;
    if (exception_pending()) goto v69;
    env = stack[-2];
    fn = elt(env, 2); /* quotf */
    v41 = (*qfn2(fn))(qenv(fn), stack[0], v41);
    nil = C_nil;
    if (exception_pending()) goto v69;
    env = stack[-2];
    {
        Lisp_Object v67 = stack[-1];
        popv(3);
        fn = elt(env, 3); /* multf */
        return (*qfn2(fn))(qenv(fn), v67, v41);
    }

v4:
    v41 = nil;
    { popv(3); return onevalue(v41); }
/* error exit handlers */
v69:
    popv(3);
    return nil;
}



/* Code for !*i2rn */

static Lisp_Object CC_Hi2rn(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v2, v25, v13;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v2 = v0;
/* end of prologue */
    v13 = elt(env, 1); /* !:rn!: */
    v25 = v2;
    v2 = (Lisp_Object)17; /* 1 */
    return list2star(v13, v25, v2);
}



/* Code for kernels */

static Lisp_Object CC_kernels(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v7, v8;
    Lisp_Object fn;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v7 = v0;
/* end of prologue */
    v8 = v7;
    v7 = nil;
    {
        fn = elt(env, 1); /* kernels1 */
        return (*qfn2(fn))(qenv(fn), v8, v7);
    }
}



/* Code for evmatrixcomp */

static Lisp_Object CC_evmatrixcomp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v25, v13, v24;
    Lisp_Object fn;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v25 = v16;
    v13 = v0;
/* end of prologue */
    v24 = v13;
    v13 = v25;
    v25 = qvalue(elt(env, 1)); /* vdpmatrix!* */
    {
        fn = elt(env, 2); /* evmatrixcomp1 */
        return (*qfnn(fn))(qenv(fn), 3, v24, v13, v25);
    }
}



/* Code for monordp */

static Lisp_Object CC_monordp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v44, v47, v15, v43;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v15 = v16;
    v43 = v0;
/* end of prologue */
    v47 = elt(env, 1); /* wedge */
    v44 = elt(env, 2); /* xorder */
    v44 = get(v47, v44);
    v47 = v43;
        return Lapply2(nil, 3, v44, v47, v15);
}



/* Code for bftrim!: */

static Lisp_Object CC_bftrimT(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v27, v28;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v27 = v0;
/* end of prologue */
    stack[0] = v27;
    v28 = qvalue(elt(env, 1)); /* !:bprec!: */
    v27 = (Lisp_Object)49; /* 3 */
    v27 = difference2(v28, v27);
    nil = C_nil;
    if (exception_pending()) goto v44;
    env = stack[-1];
    fn = elt(env, 2); /* round!:mt */
    v27 = (*qfn2(fn))(qenv(fn), stack[0], v27);
    nil = C_nil;
    if (exception_pending()) goto v44;
    env = stack[-1];
    {
        popv(2);
        fn = elt(env, 3); /* csl_normbf */
        return (*qfn1(fn))(qenv(fn), v27);
    }
/* error exit handlers */
v44:
    popv(2);
    return nil;
}



/* Code for quotfm */

static Lisp_Object CC_quotfm(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v13, v24, v26;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v24 = v16;
    v26 = v0;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* !*mcd */
    qvalue(elt(env, 1)) = nil; /* !*mcd */
    v13 = lisp_true;
    qvalue(elt(env, 1)) = v13; /* !*mcd */
    v13 = v26;
    fn = elt(env, 2); /* quotf */
    v13 = (*qfn2(fn))(qenv(fn), v13, v24);
    nil = C_nil;
    if (exception_pending()) goto v28;
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*mcd */
    { popv(2); return onevalue(v13); }
/* error exit handlers */
v28:
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*mcd */
    popv(2);
    return nil;
}



/* Code for tensopp */

static Lisp_Object CC_tensopp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v150, v134, v105;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v134 = v0;
/* end of prologue */
    v150 = v134;
    if (symbolp(v150)) goto v28;
    v150 = nil;
    goto v12;

v12:
    if (!(v150 == nil)) { popv(1); return onevalue(v150); }
    v150 = v134;
    if (!consp(v150)) goto v21;
    v150 = v134;
    v105 = qcar(v150);
    v150 = elt(env, 1); /* phystype */
    v105 = get(v105, v150);
    env = stack[0];
    v150 = elt(env, 2); /* tensor */
    if (v105 == v150) goto v34;
    v150 = nil;
    { popv(1); return onevalue(v150); }

v34:
    v150 = v134;
    v150 = qcdr(v150);
    v150 = qcar(v150);
    fn = elt(env, 3); /* isanindex */
    v150 = (*qfn1(fn))(qenv(fn), v150);
    nil = C_nil;
    if (exception_pending()) goto v69;
    v150 = (v150 == nil ? lisp_true : nil);
    { popv(1); return onevalue(v150); }

v21:
    v150 = nil;
    { popv(1); return onevalue(v150); }

v28:
    v105 = v134;
    v150 = elt(env, 1); /* phystype */
    v105 = get(v105, v150);
    env = stack[0];
    v150 = elt(env, 2); /* tensor */
    v150 = (v105 == v150 ? lisp_true : nil);
    goto v12;
/* error exit handlers */
v69:
    popv(1);
    return nil;
}



/* Code for kernels1 */

static Lisp_Object CC_kernels1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v105, v69, v67, v68;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    v67 = v16;
    v105 = v0;
/* end of prologue */

v11:
    v69 = v105;
    if (!consp(v69)) { popv(4); return onevalue(v67); }
    v69 = v105;
    v69 = qcar(v69);
    if (!consp(v69)) { popv(4); return onevalue(v67); }
    v69 = v105;
    v69 = qcar(v69);
    v69 = qcar(v69);
    v69 = qcar(v69);
    v68 = v69;
    v69 = v105;
    v69 = qcar(v69);
    stack[-2] = qcdr(v69);
    stack[-1] = qcdr(v105);
    v69 = v68;
    v105 = v67;
    v105 = Lmemq(nil, v69, v105);
    if (v105 == nil) goto v39;
    v105 = v67;
    goto v30;

v30:
    v69 = CC_kernels1(env, stack[-1], v105);
    nil = C_nil;
    if (exception_pending()) goto v66;
    env = stack[-3];
    v105 = stack[-2];
    v67 = v69;
    goto v11;

v39:
    stack[0] = v67;
    v105 = v68;
    v105 = ncons(v105);
    nil = C_nil;
    if (exception_pending()) goto v66;
    env = stack[-3];
    v105 = Lappend(nil, stack[0], v105);
    nil = C_nil;
    if (exception_pending()) goto v66;
    env = stack[-3];
    goto v30;
/* error exit handlers */
v66:
    popv(4);
    return nil;
}



/* Code for bas_rep */

static Lisp_Object CC_bas_rep(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v7, v8;
    Lisp_Object fn;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v7 = v0;
/* end of prologue */
    v8 = v7;
    v7 = (Lisp_Object)81; /* 5 */
    {
        fn = elt(env, 1); /* nth */
        return (*qfn2(fn))(qenv(fn), v8, v7);
    }
}



/* Code for pv_sort */

static Lisp_Object CC_pv_sort(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v44, v47;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v47 = v0;
/* end of prologue */
    v44 = v47;
    if (v44 == nil) goto v3;
    v44 = v47;
    stack[0] = qcdr(v44);
    v44 = v47;
    v44 = qcar(v44);
    v44 = ncons(v44);
    nil = C_nil;
    if (exception_pending()) goto v43;
    env = stack[-1];
    {
        Lisp_Object v29 = stack[0];
        popv(2);
        fn = elt(env, 1); /* pv_sort1 */
        return (*qfn2(fn))(qenv(fn), v29, v44);
    }

v3:
    v44 = nil;
    { popv(2); return onevalue(v44); }
/* error exit handlers */
v43:
    popv(2);
    return nil;
}



/* Code for evaluate!-in!-order */

static Lisp_Object CC_evaluateKinKorder(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v67, v68, v56, v54;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */

v4:
    v67 = stack[-1];
    if (!consp(v67)) goto v5;
    v67 = stack[-1];
    v67 = qcar(v67);
    if (!consp(v67)) goto v5;
    v67 = stack[-1];
    v67 = qcar(v67);
    v67 = qcar(v67);
    v68 = qcar(v67);
    v67 = stack[0];
    v67 = qcar(v67);
    v67 = qcar(v67);
    if (equal(v68, v67)) goto v36;
    v67 = stack[0];
    v67 = qcdr(v67);
    stack[0] = v67;
    goto v4;

v36:
    v67 = stack[-1];
    v67 = qcar(v67);
    v68 = qcdr(v67);
    v67 = stack[0];
    v67 = qcdr(v67);
    v54 = CC_evaluateKinKorder(env, v68, v67);
    nil = C_nil;
    if (exception_pending()) goto v70;
    env = stack[-2];
    v67 = stack[-1];
    v67 = qcar(v67);
    v67 = qcar(v67);
    v56 = qcdr(v67);
    v67 = stack[-1];
    v68 = qcdr(v67);
    v67 = stack[0];
    {
        popv(3);
        fn = elt(env, 1); /* horner!-rule */
        return (*qfnn(fn))(qenv(fn), 4, v54, v56, v68, v67);
    }

v5:
    v67 = stack[-1];
    {
        popv(3);
        fn = elt(env, 2); /* !*d2n */
        return (*qfn1(fn))(qenv(fn), v67);
    }
/* error exit handlers */
v70:
    popv(3);
    return nil;
}



/* Code for vevtdeg */

static Lisp_Object CC_vevtdeg(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v48, v33, v51;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    v33 = nil;
    goto v12;

v12:
    v48 = stack[0];
    if (v48 == nil) goto v45;
    v48 = stack[0];
    v48 = qcar(v48);
    v48 = cons(v48, v33);
    nil = C_nil;
    if (exception_pending()) goto v49;
    env = stack[-1];
    v33 = v48;
    v48 = stack[0];
    v48 = qcdr(v48);
    stack[0] = v48;
    goto v12;

v45:
    v48 = (Lisp_Object)1; /* 0 */
    goto v5;

v5:
    v51 = v33;
    if (v51 == nil) { popv(2); return onevalue(v48); }
    v51 = v33;
    v51 = qcar(v51);
    v48 = (Lisp_Object)(int32)((int32)v51 + (int32)v48 - TAG_FIXNUM);
    v33 = qcdr(v33);
    goto v5;
/* error exit handlers */
v49:
    popv(2);
    return nil;
}



/* Code for xdiv */

static Lisp_Object CC_xdiv(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v48, v33;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */
    stack[-2] = stack[-1];
    v48 = (Lisp_Object)17; /* 1 */
    v48 = ncons(v48);
    nil = C_nil;
    if (exception_pending()) goto v50;
    env = stack[-3];
    if (equal(stack[-2], v48)) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v33 = stack[-1];
    v48 = stack[0];
    fn = elt(env, 1); /* sublistp */
    v48 = (*qfn2(fn))(qenv(fn), v33, v48);
    nil = C_nil;
    if (exception_pending()) goto v50;
    env = stack[-3];
    if (v48 == nil) goto v26;
    v33 = stack[0];
    v48 = stack[-1];
    fn = elt(env, 2); /* listdiff */
    v48 = (*qfn2(fn))(qenv(fn), v33, v48);
    nil = C_nil;
    if (exception_pending()) goto v50;
    stack[0] = v48;
    if (!(v48 == nil)) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v48 = (Lisp_Object)17; /* 1 */
    popv(4);
    return ncons(v48);

v26:
    v48 = nil;
    { popv(4); return onevalue(v48); }
/* error exit handlers */
v50:
    popv(4);
    return nil;
}



/* Code for round!:mt */

static Lisp_Object CC_roundTmt(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v237, v121;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v16;
    stack[-2] = v0;
/* end of prologue */
    v121 = stack[-2];
    v237 = elt(env, 1); /* !:rd!: */
    if (!consp(v121)) goto v236;
    v121 = qcar(v121);
    if (!(v121 == v237)) goto v236;
    v237 = stack[-2];
    v237 = qcdr(v237);
    if (!consp(v237)) goto v236;
    v237 = stack[-1];
    v237 = integerp(v237);
    if (v237 == nil) goto v236;
    v121 = stack[-1];
    v237 = (Lisp_Object)1; /* 0 */
    v237 = (Lisp_Object)greaterp2(v121, v237);
    nil = C_nil;
    if (exception_pending()) goto v82;
    v237 = v237 ? lisp_true : nil;
    env = stack[-4];
    if (v237 == nil) goto v236;
    v237 = stack[-2];
    v237 = qcdr(v237);
    v237 = qcar(v237);
    v237 = Labsval(nil, v237);
    nil = C_nil;
    if (exception_pending()) goto v82;
    env = stack[-4];
    fn = elt(env, 2); /* msd */
    v121 = (*qfn1(fn))(qenv(fn), v237);
    nil = C_nil;
    if (exception_pending()) goto v82;
    env = stack[-4];
    v237 = stack[-1];
    v237 = difference2(v121, v237);
    nil = C_nil;
    if (exception_pending()) goto v82;
    env = stack[-4];
    v121 = sub1(v237);
    nil = C_nil;
    if (exception_pending()) goto v82;
    env = stack[-4];
    stack[-1] = v121;
    v237 = (Lisp_Object)1; /* 0 */
    v237 = (Lisp_Object)lessp2(v121, v237);
    nil = C_nil;
    if (exception_pending()) goto v82;
    v237 = v237 ? lisp_true : nil;
    env = stack[-4];
    if (!(v237 == nil)) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v121 = stack[-1];
    v237 = (Lisp_Object)1; /* 0 */
    if (v121 == v237) goto v64;
    stack[-3] = elt(env, 1); /* !:rd!: */
    v237 = stack[-2];
    v237 = qcdr(v237);
    stack[0] = qcar(v237);
    v237 = stack[-1];
    v237 = negate(v237);
    nil = C_nil;
    if (exception_pending()) goto v82;
    env = stack[-4];
    stack[0] = Lash1(nil, stack[0], v237);
    nil = C_nil;
    if (exception_pending()) goto v82;
    env = stack[-4];
    v237 = stack[-2];
    v237 = qcdr(v237);
    v121 = qcdr(v237);
    v237 = stack[-1];
    v237 = plus2(v121, v237);
    nil = C_nil;
    if (exception_pending()) goto v82;
    env = stack[-4];
    v237 = list2star(stack[-3], stack[0], v237);
    nil = C_nil;
    if (exception_pending()) goto v82;
    env = stack[-4];
    {
        popv(5);
        fn = elt(env, 3); /* round!:last */
        return (*qfn1(fn))(qenv(fn), v237);
    }

v64:
    v237 = stack[-2];
    {
        popv(5);
        fn = elt(env, 3); /* round!:last */
        return (*qfn1(fn))(qenv(fn), v237);
    }

v236:
    v237 = elt(env, 0); /* round!:mt */
    {
        popv(5);
        fn = elt(env, 4); /* bflerrmsg */
        return (*qfn1(fn))(qenv(fn), v237);
    }
/* error exit handlers */
v82:
    popv(5);
    return nil;
}



/* Code for !:times */

static Lisp_Object CC_Ttimes(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v31, v32, v37;
    Lisp_Object fn;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v32 = v16;
    v37 = v0;
/* end of prologue */
    v31 = v37;
    if (v31 == nil) goto v4;
    v31 = v32;
    if (v31 == nil) goto v4;
    v31 = v37;
    if (!(!consp(v31))) goto v30;
    v31 = v32;
    if (!(!consp(v31))) goto v30;
    v31 = v37;
    return times2(v31, v32);

v30:
    v31 = elt(env, 1); /* times */
    {
        fn = elt(env, 2); /* dcombine */
        return (*qfnn(fn))(qenv(fn), 3, v37, v32, v31);
    }

v4:
    v31 = nil;
    return onevalue(v31);
}



/* Code for physopsim!* */

static Lisp_Object CC_physopsimH(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v2;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    v2 = stack[0];
    fn = elt(env, 1); /* !*physopp!* */
    v2 = (*qfn1(fn))(qenv(fn), v2);
    nil = C_nil;
    if (exception_pending()) goto v13;
    env = stack[-1];
    if (v2 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v2 = stack[0];
    {
        popv(2);
        fn = elt(env, 2); /* physopsm!* */
        return (*qfn1(fn))(qenv(fn), v2);
    }
/* error exit handlers */
v13:
    popv(2);
    return nil;
}



/* Code for mo_sum */

static Lisp_Object CC_mo_sum(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v43, v29;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v43 = v16;
    v29 = v0;
/* end of prologue */
    v29 = qcar(v29);
    v43 = qcar(v43);
    fn = elt(env, 1); /* mo!=sum */
    v43 = (*qfn2(fn))(qenv(fn), v29, v43);
    nil = C_nil;
    if (exception_pending()) goto v19;
    env = stack[-2];
    stack[-1] = v43;
    v43 = stack[-1];
    fn = elt(env, 2); /* mo!=shorten */
    stack[0] = (*qfn1(fn))(qenv(fn), v43);
    nil = C_nil;
    if (exception_pending()) goto v19;
    env = stack[-2];
    v43 = stack[-1];
    fn = elt(env, 3); /* mo!=deglist */
    v43 = (*qfn1(fn))(qenv(fn), v43);
    nil = C_nil;
    if (exception_pending()) goto v19;
    {
        Lisp_Object v20 = stack[0];
        popv(3);
        return cons(v20, v43);
    }
/* error exit handlers */
v19:
    popv(3);
    return nil;
}



/* Code for pv_add */

static Lisp_Object CC_pv_add(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v148, v213, v77;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */
    v148 = stack[-1];
    if (v148 == nil) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v148 = stack[0];
    if (v148 == nil) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    stack[-2] = nil;
    goto v44;

v44:
    v148 = stack[-1];
    if (!(v148 == nil)) goto v15;
    v148 = stack[0];
    if (!(v148 == nil)) goto v15;
    v148 = stack[-2];
        popv(4);
        return Lnreverse(nil, v148);

v15:
    v148 = stack[-1];
    if (v148 == nil) goto v99;
    v148 = stack[0];
    if (v148 == nil) goto v99;
    v148 = stack[-1];
    v148 = qcar(v148);
    v213 = qcdr(v148);
    v148 = stack[0];
    v148 = qcar(v148);
    v148 = qcdr(v148);
    if (!(equal(v213, v148))) goto v99;
    v148 = stack[-1];
    v148 = qcar(v148);
    v213 = qcar(v148);
    v148 = stack[0];
    v148 = qcar(v148);
    v148 = qcar(v148);
    v148 = plus2(v213, v148);
    nil = C_nil;
    if (exception_pending()) goto v149;
    env = stack[-3];
    v77 = v148;
    v213 = v77;
    v148 = (Lisp_Object)1; /* 0 */
    if (v213 == v148) goto v68;
    v148 = stack[-1];
    v148 = qcar(v148);
    v213 = qcdr(v148);
    v148 = stack[-2];
    v148 = acons(v77, v213, v148);
    nil = C_nil;
    if (exception_pending()) goto v149;
    env = stack[-3];
    stack[-2] = v148;
    goto v68;

v68:
    v148 = stack[-1];
    v148 = qcdr(v148);
    stack[-1] = v148;
    v148 = stack[0];
    v148 = qcdr(v148);
    stack[0] = v148;
    goto v44;

v99:
    v148 = stack[-1];
    if (v148 == nil) goto v112;
    v148 = stack[0];
    if (!(v148 == nil)) goto v112;

v117:
    v148 = stack[-1];
    v213 = qcar(v148);
    v148 = stack[-2];
    v148 = cons(v213, v148);
    nil = C_nil;
    if (exception_pending()) goto v149;
    env = stack[-3];
    stack[-2] = v148;
    v148 = stack[-1];
    v148 = qcdr(v148);
    stack[-1] = v148;
    goto v44;

v112:
    v148 = stack[-1];
    if (v148 == nil) goto v137;
    v148 = stack[0];
    if (v148 == nil) goto v137;
    v148 = stack[-1];
    v148 = qcar(v148);
    v213 = qcdr(v148);
    v148 = stack[0];
    v148 = qcar(v148);
    v148 = qcdr(v148);
    v148 = (Lisp_Object)greaterp2(v213, v148);
    nil = C_nil;
    if (exception_pending()) goto v149;
    v148 = v148 ? lisp_true : nil;
    env = stack[-3];
    if (!(v148 == nil)) goto v117;

v137:
    v148 = stack[0];
    v213 = qcar(v148);
    v148 = stack[-2];
    v148 = cons(v213, v148);
    nil = C_nil;
    if (exception_pending()) goto v149;
    env = stack[-3];
    stack[-2] = v148;
    v148 = stack[0];
    v148 = qcdr(v148);
    stack[0] = v148;
    goto v44;
/* error exit handlers */
v149:
    popv(4);
    return nil;
}



/* Code for copy */

static Lisp_Object CC_copy(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v30, v99;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    stack[-1] = nil;
    goto v4;

v4:
    v30 = stack[0];
    if (!consp(v30)) goto v1;
    v30 = stack[0];
    v30 = qcar(v30);
    v99 = CC_copy(env, v30);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-2];
    v30 = stack[-1];
    v30 = cons(v99, v30);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-2];
    stack[-1] = v30;
    v30 = stack[0];
    v30 = qcdr(v30);
    stack[0] = v30;
    goto v4;

v1:
    v99 = stack[-1];
    v30 = stack[0];
    {
        popv(3);
        fn = elt(env, 1); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v99, v30);
    }
/* error exit handlers */
v14:
    popv(3);
    return nil;
}



/* Code for evlexcomp */

static Lisp_Object CC_evlexcomp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v49, v50;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */

v4:
    v49 = stack[-1];
    if (v49 == nil) goto v5;
    v49 = stack[0];
    if (v49 == nil) goto v1;
    v49 = stack[-1];
    v50 = qcar(v49);
    v49 = stack[0];
    v49 = qcar(v49);
    v49 = Leqn(nil, v50, v49);
    nil = C_nil;
    if (exception_pending()) goto v35;
    env = stack[-2];
    if (v49 == nil) goto v99;
    v49 = stack[-1];
    v49 = qcdr(v49);
    stack[-1] = v49;
    v49 = stack[0];
    v49 = qcdr(v49);
    stack[0] = v49;
    goto v4;

v99:
    v49 = stack[-1];
    v50 = qcar(v49);
    v49 = stack[0];
    v49 = qcar(v49);
    if (((int32)(v50)) > ((int32)(v49))) goto v23;
    v49 = (Lisp_Object)-15; /* -1 */
    { popv(3); return onevalue(v49); }

v23:
    v49 = (Lisp_Object)17; /* 1 */
    { popv(3); return onevalue(v49); }

v1:
    v49 = elt(env, 1); /* (0) */
    stack[0] = v49;
    goto v4;

v5:
    v49 = (Lisp_Object)1; /* 0 */
    { popv(3); return onevalue(v49); }
/* error exit handlers */
v35:
    popv(3);
    return nil;
}



/* Code for chundexp */

static Lisp_Object CC_chundexp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v122, v58;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0;
/* end of prologue */
    v122 = stack[-1];
    v122 = Lexplodec(nil, v122);
    nil = C_nil;
    if (exception_pending()) goto v59;
    env = stack[-3];
    stack[-1] = v122;
    v122 = stack[-1];
    stack[-2] = v122;
    v58 = stack[-1];
    v122 = elt(env, 1); /* !_ */
    if (!consp(v58)) goto v4;
    v58 = qcar(v58);
    if (!(v58 == v122)) goto v4;
    v122 = stack[-1];
    v122 = qcdr(v122);
    if (v122 == nil) goto v4;
    v58 = elt(env, 2); /* !\ */
    v122 = stack[-1];
    v122 = cons(v58, v122);
    nil = C_nil;
    if (exception_pending()) goto v59;
    env = stack[-3];
    stack[-1] = v122;
    goto v4;

v4:
    v122 = stack[-2];
    v122 = qcdr(v122);
    if (v122 == nil) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v122 = stack[-2];
    v122 = qcdr(v122);
    v58 = qcar(v122);
    v122 = elt(env, 1); /* !_ */
    if (!(v58 == v122)) goto v37;
    stack[0] = stack[-2];
    v58 = elt(env, 2); /* !\ */
    v122 = stack[-2];
    v122 = qcdr(v122);
    v122 = cons(v58, v122);
    nil = C_nil;
    if (exception_pending()) goto v59;
    env = stack[-3];
    v122 = Lrplacd(nil, stack[0], v122);
    nil = C_nil;
    if (exception_pending()) goto v59;
    env = stack[-3];
    v122 = stack[-2];
    v122 = qcdr(v122);
    stack[-2] = v122;
    goto v37;

v37:
    v122 = stack[-2];
    v122 = qcdr(v122);
    stack[-2] = v122;
    goto v4;
/* error exit handlers */
v59:
    popv(4);
    return nil;
}



/* Code for !:plus */

static Lisp_Object CC_Tplus(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v41, v64, v100;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v64 = v16;
    v100 = v0;
/* end of prologue */
    v41 = v100;
    if (v41 == nil) return onevalue(v64);
    v41 = v64;
    if (v41 == nil) return onevalue(v100);
    v41 = v100;
    if (!(!consp(v41))) goto v193;
    v41 = v64;
    if (!(!consp(v41))) goto v193;
    v41 = v100;
    v41 = plus2(v41, v64);
    errexit();
    v100 = v41;
    v64 = v100;
    v41 = (Lisp_Object)1; /* 0 */
    if (!(v64 == v41)) return onevalue(v100);
    v41 = nil;
    return onevalue(v41);

v193:
    v41 = elt(env, 1); /* plus */
    {
        fn = elt(env, 2); /* dcombine */
        return (*qfnn(fn))(qenv(fn), 3, v100, v64, v41);
    }
}



/* Code for delallasc */

static Lisp_Object CC_delallasc(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v32, v37, v36;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */
    v36 = nil;
    goto v12;

v12:
    v32 = stack[0];
    if (v32 == nil) goto v6;
    v37 = stack[-1];
    v32 = stack[0];
    v32 = qcar(v32);
    v32 = qcar(v32);
    if (v37 == v32) goto v25;
    v32 = stack[0];
    v32 = qcar(v32);
    v37 = v36;
    v32 = cons(v32, v37);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-2];
    v36 = v32;
    v32 = stack[0];
    v32 = qcdr(v32);
    stack[0] = v32;
    goto v12;

v25:
    v32 = stack[0];
    v32 = qcdr(v32);
    stack[0] = v32;
    goto v12;

v6:
    v32 = v36;
    {
        popv(3);
        fn = elt(env, 1); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v32);
    }
/* error exit handlers */
v51:
    popv(3);
    return nil;
}



/* Code for !*physopp!* */

static Lisp_Object CC_HphysoppH(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v6;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    v6 = stack[0];
    fn = elt(env, 1); /* physopp!* */
    v6 = (*qfn1(fn))(qenv(fn), v6);
    nil = C_nil;
    if (exception_pending()) goto v8;
    env = stack[-1];
    if (!(v6 == nil)) { popv(2); return onevalue(v6); }
    v6 = stack[0];
    {
        popv(2);
        fn = elt(env, 2); /* getphystype */
        return (*qfn1(fn))(qenv(fn), v6);
    }
/* error exit handlers */
v8:
    popv(2);
    return nil;
}



/* Code for nonzero!-length */

static Lisp_Object CC_nonzeroKlength(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v20, v21, v22;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v21 = v0;
/* end of prologue */

v3:
    v20 = v21;
    if (v20 == nil) goto v45;
    v20 = v21;
    v22 = qcar(v20);
    v20 = (Lisp_Object)1; /* 0 */
    if (v22 == v20) goto v8;
    v20 = v21;
    v20 = qcdr(v20);
    v20 = CC_nonzeroKlength(env, v20);
    errexit();
    return add1(v20);

v8:
    v20 = v21;
    v20 = qcdr(v20);
    v21 = v20;
    goto v3;

v45:
    v20 = (Lisp_Object)1; /* 0 */
    return onevalue(v20);
}



/* Code for mo_compare */

static Lisp_Object CC_mo_compare(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v69, v67, v68;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */
    v69 = stack[-1];
    v67 = qcdr(v69);
    v69 = stack[0];
    v69 = qcdr(v69);
    fn = elt(env, 3); /* mo!=degcomp */
    v69 = (*qfn2(fn))(qenv(fn), v67, v69);
    nil = C_nil;
    if (exception_pending()) goto v87;
    env = stack[-2];
    v68 = v69;
    v67 = v68;
    v69 = (Lisp_Object)1; /* 0 */
    if (!(v67 == v69)) { popv(3); return onevalue(v68); }
    v69 = qvalue(elt(env, 1)); /* cali!=basering */
    fn = elt(env, 4); /* ring_tag */
    v67 = (*qfn1(fn))(qenv(fn), v69);
    nil = C_nil;
    if (exception_pending()) goto v87;
    env = stack[-2];
    v69 = elt(env, 2); /* revlex */
    if (v67 == v69) goto v32;
    v69 = stack[-1];
    v67 = qcar(v69);
    v69 = stack[0];
    v69 = qcar(v69);
    fn = elt(env, 5); /* mo!=lexcomp */
    v69 = (*qfn2(fn))(qenv(fn), v67, v69);
    nil = C_nil;
    if (exception_pending()) goto v87;
    goto v19;

v19:
    v68 = v69;
    { popv(3); return onevalue(v68); }

v32:
    v69 = stack[-1];
    v67 = qcar(v69);
    v69 = stack[0];
    v69 = qcar(v69);
    fn = elt(env, 6); /* mo!=revlexcomp */
    v69 = (*qfn2(fn))(qenv(fn), v67, v69);
    nil = C_nil;
    if (exception_pending()) goto v87;
    goto v19;
/* error exit handlers */
v87:
    popv(3);
    return nil;
}



/* Code for cdiv */

static Lisp_Object CC_cdiv(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v2, v25;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v2 = v16;
    v25 = v0;
/* end of prologue */
    v2 = cons(v25, v2);
    nil = C_nil;
    if (exception_pending()) goto v13;
    env = stack[0];
    fn = elt(env, 1); /* resimp */
    v2 = (*qfn1(fn))(qenv(fn), v2);
    nil = C_nil;
    if (exception_pending()) goto v13;
    v2 = qcar(v2);
    { popv(1); return onevalue(v2); }
/* error exit handlers */
v13:
    popv(1);
    return nil;
}



/* Code for insert_pv */

static Lisp_Object CC_insert_pv(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v23, v30, v99;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    v23 = v0;
/* end of prologue */
    v30 = v23;
    v23 = stack[0];
    fn = elt(env, 1); /* sieve_pv */
    v23 = (*qfn2(fn))(qenv(fn), v30, v23);
    nil = C_nil;
    if (exception_pending()) goto v53;
    env = stack[-1];
    v30 = v23;
    v23 = v30;
    if (v23 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v23 = v30;
    fn = elt(env, 2); /* pv_renorm */
    v99 = (*qfn1(fn))(qenv(fn), v23);
    nil = C_nil;
    if (exception_pending()) goto v53;
    env = stack[-1];
    v30 = stack[0];
    v23 = nil;
    {
        popv(2);
        fn = elt(env, 3); /* insert_pv1 */
        return (*qfnn(fn))(qenv(fn), 3, v99, v30, v23);
    }
/* error exit handlers */
v53:
    popv(2);
    return nil;
}



/* Code for general!-modular!-number */

static Lisp_Object CC_generalKmodularKnumber(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v30, v99;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    v99 = stack[0];
    v30 = qvalue(elt(env, 1)); /* current!-modulus */
    v30 = Cremainder(v99, v30);
    nil = C_nil;
    if (exception_pending()) goto v53;
    env = stack[-1];
    stack[0] = v30;
    v99 = stack[0];
    v30 = (Lisp_Object)1; /* 0 */
    v30 = (Lisp_Object)lessp2(v99, v30);
    nil = C_nil;
    if (exception_pending()) goto v53;
    v30 = v30 ? lisp_true : nil;
    env = stack[-1];
    if (v30 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v99 = stack[0];
    v30 = qvalue(elt(env, 1)); /* current!-modulus */
    v30 = plus2(v99, v30);
    nil = C_nil;
    if (exception_pending()) goto v53;
    stack[0] = v30;
    { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
/* error exit handlers */
v53:
    popv(2);
    return nil;
}



/* Code for freeofdepl */

static Lisp_Object MS_CDECL CC_freeofdepl(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v16,
                         Lisp_Object v63, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v36, v48;
    Lisp_Object fn;
    argcheck(nargs, 3, "freeofdepl");
    if (stack >= stacklimit)
    {
        push3(v63,v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v16,v63);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v63;
    stack[-1] = v16;
    stack[-2] = v0;
/* end of prologue */

v12:
    v36 = stack[-2];
    if (v36 == nil) goto v6;
    v48 = stack[0];
    v36 = stack[-2];
    v36 = qcar(v36);
    v36 = qcdr(v36);
    fn = elt(env, 1); /* smember */
    v36 = (*qfn2(fn))(qenv(fn), v48, v36);
    nil = C_nil;
    if (exception_pending()) goto v49;
    env = stack[-3];
    if (v36 == nil) goto v46;
    v36 = stack[-2];
    v36 = qcar(v36);
    v48 = qcar(v36);
    v36 = stack[-1];
    fn = elt(env, 1); /* smember */
    v36 = (*qfn2(fn))(qenv(fn), v48, v36);
    nil = C_nil;
    if (exception_pending()) goto v49;
    env = stack[-3];
    if (v36 == nil) goto v46;
    v36 = nil;
    { popv(4); return onevalue(v36); }

v46:
    v36 = stack[-2];
    v36 = qcdr(v36);
    stack[-2] = v36;
    goto v12;

v6:
    v36 = lisp_true;
    { popv(4); return onevalue(v36); }
/* error exit handlers */
v49:
    popv(4);
    return nil;
}



/* Code for evtdeg */

static Lisp_Object CC_evtdeg(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v29, v17, v18;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v17 = v0;
/* end of prologue */
    v29 = (Lisp_Object)1; /* 0 */
    goto v12;

v12:
    v18 = v17;
    if (v18 == nil) return onevalue(v29);
    v18 = v17;
    v18 = qcar(v18);
    v29 = (Lisp_Object)(int32)((int32)v18 + (int32)v29 - TAG_FIXNUM);
    v17 = qcdr(v17);
    goto v12;
}



/* Code for groebsearchinlist */

static Lisp_Object CC_groebsearchinlist(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v22, v23;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */

v4:
    v22 = stack[0];
    if (v22 == nil) goto v5;
    v22 = stack[0];
    v22 = qcar(v22);
    v22 = qcdr(v22);
    v23 = qcar(v22);
    v22 = stack[-1];
    fn = elt(env, 1); /* buchvevdivides!? */
    v22 = (*qfn2(fn))(qenv(fn), v23, v22);
    nil = C_nil;
    if (exception_pending()) goto v10;
    env = stack[-2];
    if (v22 == nil) goto v18;
    v22 = stack[0];
    v22 = qcar(v22);
    { popv(3); return onevalue(v22); }

v18:
    v22 = stack[0];
    v22 = qcdr(v22);
    stack[0] = v22;
    goto v4;

v5:
    v22 = nil;
    { popv(3); return onevalue(v22); }
/* error exit handlers */
v10:
    popv(3);
    return nil;
}



/* Code for find_item */

static Lisp_Object CC_find_item(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v52, v193;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */

v11:
    v52 = stack[0];
    v52 = qcdr(v52);
    if (v52 == nil) goto v4;
    v193 = stack[-1];
    v52 = stack[0];
    v52 = qcdr(v52);
    v52 = qcar(v52);
    v52 = CC_find_item(env, v193, v52);
    nil = C_nil;
    if (exception_pending()) goto v39;
    env = stack[-2];
    if (!(v52 == nil)) { popv(3); return onevalue(v52); }
    v52 = stack[0];
    v193 = qcar(v52);
    v52 = stack[-1];
    if (equal(v193, v52)) goto v19;
    v52 = nil;
    goto v18;

v18:
    if (!(v52 == nil)) { popv(3); return onevalue(v52); }
    v193 = stack[-1];
    v52 = stack[0];
    v52 = qcdr(v52);
    v52 = qcdr(v52);
    stack[-1] = v193;
    stack[0] = v52;
    goto v11;

v19:
    v52 = stack[0];
    goto v18;

v4:
    v52 = nil;
    { popv(3); return onevalue(v52); }
/* error exit handlers */
v39:
    popv(3);
    return nil;
}



/* Code for csl_timbf */

static Lisp_Object CC_csl_timbf(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v70, v71, v101;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v16;
    stack[-3] = v0;
/* end of prologue */
    v70 = stack[-3];
    v70 = qcdr(v70);
    v71 = qcar(v70);
    v70 = stack[-2];
    v70 = qcdr(v70);
    v70 = qcar(v70);
    v70 = times2(v71, v70);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-5];
    v101 = v70;
    v71 = v101;
    v70 = (Lisp_Object)1; /* 0 */
    if (v71 == v70) goto v38;
    v71 = v101;
    v70 = qvalue(elt(env, 2)); /* !:bprec!: */
    fn = elt(env, 4); /* inorm */
    v70 = (*qfn2(fn))(qenv(fn), v71, v70);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-5];
    v101 = v70;
    stack[-4] = elt(env, 3); /* !:rd!: */
    v70 = v101;
    stack[-1] = qcar(v70);
    v70 = v101;
    stack[0] = qcdr(v70);
    v70 = stack[-3];
    v70 = qcdr(v70);
    v71 = qcdr(v70);
    v70 = stack[-2];
    v70 = qcdr(v70);
    v70 = qcdr(v70);
    v70 = plus2(v71, v70);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-5];
    v70 = plus2(stack[0], v70);
    nil = C_nil;
    if (exception_pending()) goto v65;
    {
        Lisp_Object v103 = stack[-4];
        Lisp_Object v59 = stack[-1];
        popv(6);
        return list2star(v103, v59, v70);
    }

v38:
    v70 = elt(env, 1); /* (!:rd!: 0 . 0) */
    { popv(6); return onevalue(v70); }
/* error exit handlers */
v65:
    popv(6);
    return nil;
}



/* Code for idlistp */

static Lisp_Object CC_idlistp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v15, v43;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v15 = v0;
/* end of prologue */

v11:
    v43 = v15;
    v43 = (v43 == nil ? lisp_true : nil);
    if (!(v43 == nil)) return onevalue(v43);
    v43 = v15;
    if (!consp(v43)) goto v6;
    v43 = v15;
    v43 = qcar(v43);
    if (symbolp(v43)) goto v27;
    v15 = nil;
    return onevalue(v15);

v27:
    v15 = qcdr(v15);
    goto v11;

v6:
    v15 = nil;
    return onevalue(v15);
}



/* Code for sroad */

static Lisp_Object MS_CDECL CC_sroad(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v16,
                         Lisp_Object v63, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v40, v206, v41;
    Lisp_Object fn;
    argcheck(nargs, 3, "sroad");
    if (stack >= stacklimit)
    {
        push3(v63,v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v16,v63);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v63;
    stack[-1] = v16;
    stack[-2] = v0;
/* end of prologue */
    v41 = nil;
    goto v45;

v45:
    v40 = stack[0];
    if (v40 == nil) goto v7;
    v206 = stack[-2];
    v40 = stack[0];
    v40 = qcar(v40);
    if (equal(v206, v40)) goto v17;
    v40 = stack[0];
    v40 = qcar(v40);
    v206 = v41;
    v40 = cons(v40, v206);
    nil = C_nil;
    if (exception_pending()) goto v134;
    env = stack[-3];
    v41 = v40;
    v40 = stack[0];
    v40 = qcdr(v40);
    stack[0] = v40;
    goto v45;

v17:
    stack[-2] = v41;
    v206 = stack[-1];
    v40 = stack[0];
    v40 = qcdr(v40);
    v40 = Lappend(nil, v206, v40);
    nil = C_nil;
    if (exception_pending()) goto v134;
    env = stack[-3];
    {
        Lisp_Object v105 = stack[-2];
        popv(4);
        fn = elt(env, 1); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v105, v40);
    }

v7:
    v40 = v41;
    {
        popv(4);
        fn = elt(env, 1); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v40);
    }
/* error exit handlers */
v134:
    popv(4);
    return nil;
}



/* Code for dp!=ecart */

static Lisp_Object CC_dpMecart(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v33, v51;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    stack[-1] = nil;
    goto v12;

v12:
    v33 = stack[0];
    if (v33 == nil) goto v45;
    v33 = stack[0];
    fn = elt(env, 1); /* dp_lmon */
    v33 = (*qfn1(fn))(qenv(fn), v33);
    nil = C_nil;
    if (exception_pending()) goto v50;
    env = stack[-2];
    fn = elt(env, 2); /* mo_ecart */
    v51 = (*qfn1(fn))(qenv(fn), v33);
    nil = C_nil;
    if (exception_pending()) goto v50;
    env = stack[-2];
    v33 = stack[-1];
    v33 = cons(v51, v33);
    nil = C_nil;
    if (exception_pending()) goto v50;
    env = stack[-2];
    stack[-1] = v33;
    v33 = stack[0];
    v33 = qcdr(v33);
    stack[0] = v33;
    goto v12;

v45:
    v33 = (Lisp_Object)1; /* 0 */
    v51 = v33;
    goto v5;

v5:
    v33 = stack[-1];
    if (v33 == nil) { popv(3); return onevalue(v51); }
    v33 = stack[-1];
    v33 = qcar(v33);
    v33 = Lmax2(nil, v33, v51);
    nil = C_nil;
    if (exception_pending()) goto v50;
    env = stack[-2];
    v51 = v33;
    v33 = stack[-1];
    v33 = qcdr(v33);
    stack[-1] = v33;
    goto v5;
/* error exit handlers */
v50:
    popv(3);
    return nil;
}



/* Code for pv_sort1 */

static Lisp_Object CC_pv_sort1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v40, v206;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */

v12:
    v40 = stack[-1];
    if (v40 == nil) goto v6;
    v40 = stack[-1];
    v40 = qcar(v40);
    v206 = qcdr(v40);
    v40 = stack[0];
    v40 = qcar(v40);
    v40 = qcdr(v40);
    v40 = (Lisp_Object)lessp2(v206, v40);
    nil = C_nil;
    if (exception_pending()) goto v150;
    v40 = v40 ? lisp_true : nil;
    env = stack[-3];
    if (v40 == nil) goto v32;
    v40 = stack[-1];
    v40 = qcdr(v40);
    stack[-2] = v40;
    v40 = stack[-1];
    v206 = qcar(v40);
    v40 = stack[0];
    v40 = cons(v206, v40);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-3];
    stack[0] = v40;
    v40 = stack[-2];
    stack[-1] = v40;
    goto v12;

v32:
    v40 = stack[-1];
    v40 = qcdr(v40);
    stack[-2] = v40;
    v40 = stack[-1];
    v206 = qcar(v40);
    v40 = stack[0];
    fn = elt(env, 1); /* pv_sort2 */
    v40 = (*qfn2(fn))(qenv(fn), v206, v40);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-3];
    stack[0] = v40;
    v40 = stack[-2];
    stack[-1] = v40;
    goto v12;

v6:
    v40 = stack[0];
        popv(4);
        return Lnreverse(nil, v40);
/* error exit handlers */
v150:
    popv(4);
    return nil;
}



/* Code for gen!-mult!-by!-const!-mod!-p */

static Lisp_Object CC_genKmultKbyKconstKmodKp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v87, v66;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v16;
    stack[-2] = v0;
/* end of prologue */
    v87 = stack[-2];
    if (v87 == nil) goto v4;
    v66 = stack[-1];
    v87 = (Lisp_Object)17; /* 1 */
    if (v66 == v87) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v87 = stack[-2];
    if (!consp(v87)) goto v19;
    v87 = stack[-2];
    v87 = qcar(v87);
    if (!consp(v87)) goto v19;
    v87 = stack[-2];
    v87 = qcar(v87);
    stack[-3] = qcar(v87);
    v87 = stack[-2];
    v87 = qcar(v87);
    v66 = qcdr(v87);
    v87 = stack[-1];
    stack[0] = CC_genKmultKbyKconstKmodKp(env, v66, v87);
    nil = C_nil;
    if (exception_pending()) goto v72;
    env = stack[-4];
    v87 = stack[-2];
    v66 = qcdr(v87);
    v87 = stack[-1];
    v87 = CC_genKmultKbyKconstKmodKp(env, v66, v87);
    nil = C_nil;
    if (exception_pending()) goto v72;
    env = stack[-4];
    {
        Lisp_Object v122 = stack[-3];
        Lisp_Object v58 = stack[0];
        popv(5);
        fn = elt(env, 1); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v122, v58, v87);
    }

v19:
    v66 = stack[-2];
    v87 = stack[-1];
    fn = elt(env, 2); /* general!-modular!-times */
    v87 = (*qfn2(fn))(qenv(fn), v66, v87);
    nil = C_nil;
    if (exception_pending()) goto v72;
    env = stack[-4];
    {
        popv(5);
        fn = elt(env, 3); /* !*n2f */
        return (*qfn1(fn))(qenv(fn), v87);
    }

v4:
    v87 = nil;
    { popv(5); return onevalue(v87); }
/* error exit handlers */
v72:
    popv(5);
    return nil;
}



/* Code for c!:ordexp */

static Lisp_Object CC_cTordexp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v31, v32, v37, v36;
    Lisp_Object fn;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v32 = v16;
    v37 = v0;
/* end of prologue */

v4:
    v31 = v37;
    if (v31 == nil) goto v5;
    v31 = v37;
    v36 = qcar(v31);
    v31 = v32;
    v31 = qcar(v31);
    if (equal(v36, v31)) goto v1;
    v31 = v37;
    v31 = qcar(v31);
    v32 = qcar(v32);
    {
        fn = elt(env, 1); /* c!:ordxp */
        return (*qfn2(fn))(qenv(fn), v31, v32);
    }

v1:
    v31 = v37;
    v31 = qcdr(v31);
    v37 = v31;
    v31 = v32;
    v31 = qcdr(v31);
    v32 = v31;
    goto v4;

v5:
    v31 = lisp_true;
    return onevalue(v31);
}



/* Code for times!-mod!-p */

static Lisp_Object CC_timesKmodKp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v212, v462;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v16;
    stack[-2] = v0;
/* end of prologue */
    v212 = stack[-2];
    if (v212 == nil) goto v4;
    v212 = stack[-1];
    if (v212 == nil) goto v4;
    v212 = stack[-2];
    if (!consp(v212)) goto v38;
    v212 = stack[-2];
    v212 = qcar(v212);
    if (!consp(v212)) goto v38;
    v212 = stack[-1];
    if (!consp(v212)) goto v10;
    v212 = stack[-1];
    v212 = qcar(v212);
    if (!consp(v212)) goto v10;
    v212 = stack[-2];
    v212 = qcar(v212);
    v212 = qcar(v212);
    v462 = qcar(v212);
    v212 = stack[-1];
    v212 = qcar(v212);
    v212 = qcar(v212);
    v212 = qcar(v212);
    if (equal(v462, v212)) goto v71;
    v212 = stack[-2];
    v212 = qcar(v212);
    v212 = qcar(v212);
    v462 = qcar(v212);
    v212 = stack[-1];
    v212 = qcar(v212);
    v212 = qcar(v212);
    v212 = qcar(v212);
    fn = elt(env, 1); /* ordop */
    v212 = (*qfn2(fn))(qenv(fn), v462, v212);
    nil = C_nil;
    if (exception_pending()) goto v474;
    env = stack[-4];
    if (v212 == nil) goto v230;
    v212 = stack[-2];
    v212 = qcar(v212);
    stack[-3] = qcar(v212);
    v212 = stack[-2];
    v212 = qcar(v212);
    v462 = qcdr(v212);
    v212 = stack[-1];
    stack[0] = CC_timesKmodKp(env, v462, v212);
    nil = C_nil;
    if (exception_pending()) goto v474;
    env = stack[-4];
    v212 = stack[-2];
    v462 = qcdr(v212);
    v212 = stack[-1];
    v212 = CC_timesKmodKp(env, v462, v212);
    nil = C_nil;
    if (exception_pending()) goto v474;
    env = stack[-4];
    {
        Lisp_Object v188 = stack[-3];
        Lisp_Object v211 = stack[0];
        popv(5);
        fn = elt(env, 2); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v188, v211, v212);
    }

v230:
    v212 = stack[-1];
    v212 = qcar(v212);
    stack[-3] = qcar(v212);
    v462 = stack[-2];
    v212 = stack[-1];
    v212 = qcar(v212);
    v212 = qcdr(v212);
    stack[0] = CC_timesKmodKp(env, v462, v212);
    nil = C_nil;
    if (exception_pending()) goto v474;
    env = stack[-4];
    v462 = stack[-2];
    v212 = stack[-1];
    v212 = qcdr(v212);
    v212 = CC_timesKmodKp(env, v462, v212);
    nil = C_nil;
    if (exception_pending()) goto v474;
    env = stack[-4];
    {
        Lisp_Object v126 = stack[-3];
        Lisp_Object v129 = stack[0];
        popv(5);
        fn = elt(env, 2); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v126, v129, v212);
    }

v71:
    v212 = stack[-2];
    v462 = qcar(v212);
    v212 = stack[-1];
    fn = elt(env, 3); /* times!-term!-mod!-p */
    stack[0] = (*qfn2(fn))(qenv(fn), v462, v212);
    nil = C_nil;
    if (exception_pending()) goto v474;
    env = stack[-4];
    v212 = stack[-1];
    v462 = qcar(v212);
    v212 = stack[-2];
    v212 = qcdr(v212);
    fn = elt(env, 3); /* times!-term!-mod!-p */
    v212 = (*qfn2(fn))(qenv(fn), v462, v212);
    nil = C_nil;
    if (exception_pending()) goto v474;
    env = stack[-4];
    fn = elt(env, 4); /* plus!-mod!-p */
    stack[0] = (*qfn2(fn))(qenv(fn), stack[0], v212);
    nil = C_nil;
    if (exception_pending()) goto v474;
    env = stack[-4];
    v212 = stack[-2];
    v462 = qcdr(v212);
    v212 = stack[-1];
    v212 = qcdr(v212);
    v212 = CC_timesKmodKp(env, v462, v212);
    nil = C_nil;
    if (exception_pending()) goto v474;
    env = stack[-4];
    {
        Lisp_Object v130 = stack[0];
        popv(5);
        fn = elt(env, 4); /* plus!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v130, v212);
    }

v10:
    v462 = stack[-2];
    v212 = stack[-1];
    {
        popv(5);
        fn = elt(env, 5); /* multiply!-by!-constant!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v462, v212);
    }

v38:
    v462 = stack[-1];
    v212 = stack[-2];
    {
        popv(5);
        fn = elt(env, 5); /* multiply!-by!-constant!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v462, v212);
    }

v4:
    v212 = nil;
    { popv(5); return onevalue(v212); }
/* error exit handlers */
v474:
    popv(5);
    return nil;
}



/* Code for atomf */

static Lisp_Object CC_atomf(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v24, v26;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v26 = v0;
/* end of prologue */
    v24 = v26;
    v24 = (consp(v24) ? nil : lisp_true);
    if (!(v24 == nil)) return onevalue(v24);
    v24 = v26;
    v24 = qcar(v24);
    v26 = elt(env, 1); /* indexvar */
        return Lflagp(nil, v24, v26);
}



/* Code for !:minusp */

static Lisp_Object CC_Tminusp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v18, v19, v20;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v20 = v0;
/* end of prologue */
    v18 = v20;
    if (!consp(v18)) goto v3;
    v18 = v20;
    v19 = qcar(v18);
    v18 = elt(env, 1); /* minusp */
    v18 = get(v19, v18);
    v19 = v20;
        return Lapply1(nil, v18, v19);

v3:
    v18 = v20;
        return Lminusp(nil, v18);
}



/* Code for maxdeg */

static Lisp_Object CC_maxdeg(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v10, v53;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */

v12:
    v10 = stack[-1];
    if (v10 == nil) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v10 = stack[-1];
    v10 = qcar(v10);
    v53 = qcdr(v10);
    v10 = stack[0];
    v10 = qcdr(v10);
    v10 = (Lisp_Object)greaterp2(v53, v10);
    nil = C_nil;
    if (exception_pending()) goto v31;
    v10 = v10 ? lisp_true : nil;
    env = stack[-2];
    if (v10 == nil) goto v22;
    v10 = stack[-1];
    v10 = qcdr(v10);
    v53 = v10;
    v10 = stack[-1];
    v10 = qcar(v10);
    stack[0] = v10;
    v10 = v53;
    stack[-1] = v10;
    goto v12;

v22:
    v10 = stack[-1];
    v10 = qcdr(v10);
    stack[-1] = v10;
    goto v12;
/* error exit handlers */
v31:
    popv(3);
    return nil;
}



/* Code for noncommuting */

static Lisp_Object CC_noncommuting(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v16)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v100, v150;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push2(v16,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v16);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v16;
    stack[-1] = v0;
/* end of prologue */
    stack[-2] = nil;
    v100 = stack[-1];
    if (!consp(v100)) goto v6;
    v100 = stack[-1];
    v100 = qcar(v100);
    goto v5;

v5:
    stack[-1] = v100;
    v100 = stack[0];
    if (!consp(v100)) goto v28;
    v100 = stack[0];
    v100 = qcar(v100);
    goto v27;

v27:
    stack[0] = v100;
    v100 = stack[-1];
    fn = elt(env, 2); /* noncomp2 */
    v100 = (*qfn1(fn))(qenv(fn), v100);
    nil = C_nil;
    if (exception_pending()) goto v67;
    env = stack[-3];
    if (v100 == nil) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v100 = stack[0];
    fn = elt(env, 2); /* noncomp2 */
    v100 = (*qfn1(fn))(qenv(fn), v100);
    nil = C_nil;
    if (exception_pending()) goto v67;
    env = stack[-3];
    if (v100 == nil) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v150 = stack[-1];
    v100 = elt(env, 1); /* noncommutes */
    v100 = get(v150, v100);
    v150 = stack[0];
    v100 = Lmember(nil, v150, v100);
    stack[-2] = v100;
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }

v28:
    v100 = stack[0];
    goto v27;

v6:
    v100 = stack[-1];
    goto v5;
/* error exit handlers */
v67:
    popv(4);
    return nil;
}



/* Code for repeatsp */

static Lisp_Object CC_repeatsp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v17, v18, v19;
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v18 = v0;
/* end of prologue */

v11:
    v17 = v18;
    if (v17 == nil) goto v3;
    v17 = v18;
    v19 = qcar(v17);
    v17 = v18;
    v17 = qcdr(v17);
    v17 = Lmember(nil, v19, v17);
    if (!(v17 == nil)) return onevalue(v17);
    v17 = v18;
    v17 = qcdr(v17);
    v18 = v17;
    goto v11;

v3:
    v17 = nil;
    return onevalue(v17);
}



/* Code for bc!=simp */

static Lisp_Object CC_bcMsimp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v143, v144;
    Lisp_Object fn;
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-3] = v0;
/* end of prologue */
    v144 = elt(env, 1); /* cali */
    v143 = elt(env, 2); /* rules */
    v143 = get(v144, v143);
    env = stack[-5];
    stack[-4] = v143;
    v143 = stack[-4];
    if (v143 == nil) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    v143 = (Lisp_Object)1; /* 0 */
    stack[0] = v143;
    v143 = stack[-4];
    stack[-2] = v143;
    goto v17;

v17:
    v143 = stack[-2];
    if (v143 == nil) goto v128;
    v144 = stack[0];
    v143 = (Lisp_Object)16001; /* 1000 */
    v143 = (Lisp_Object)lessp2(v144, v143);
    nil = C_nil;
    if (exception_pending()) goto v118;
    v143 = v143 ? lisp_true : nil;
    env = stack[-5];
    if (v143 == nil) goto v128;
    v144 = stack[-3];
    v143 = stack[-2];
    v143 = qcar(v143);
    v143 = qcar(v143);
    fn = elt(env, 4); /* qremf */
    v143 = (*qfn2(fn))(qenv(fn), v144, v143);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-5];
    stack[-1] = v143;
    v143 = stack[-1];
    v143 = qcar(v143);
    if (v143 == nil) goto v206;
    v143 = stack[-1];
    v144 = qcar(v143);
    v143 = stack[-2];
    v143 = qcar(v143);
    v143 = qcdr(v143);
    fn = elt(env, 5); /* multf */
    v144 = (*qfn2(fn))(qenv(fn), v144, v143);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-5];
    v143 = stack[-1];
    v143 = qcdr(v143);
    fn = elt(env, 6); /* addf */
    v143 = (*qfn2(fn))(qenv(fn), v144, v143);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-5];
    stack[-3] = v143;
    v143 = stack[0];
    v143 = add1(v143);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-5];
    stack[0] = v143;
    v143 = stack[-4];
    stack[-2] = v143;
    goto v17;

v206:
    v143 = stack[-2];
    v143 = qcdr(v143);
    stack[-2] = v143;
    goto v17;

v128:
    v144 = stack[0];
    v143 = (Lisp_Object)16001; /* 1000 */
    v143 = (Lisp_Object)lessp2(v144, v143);
    nil = C_nil;
    if (exception_pending()) goto v118;
    v143 = v143 ? lisp_true : nil;
    env = stack[-5];
    if (!(v143 == nil)) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    v143 = elt(env, 3); /* "recursion depth of bc!=simp too high" */
    fn = elt(env, 7); /* rederr */
    v143 = (*qfn1(fn))(qenv(fn), v143);
    nil = C_nil;
    if (exception_pending()) goto v118;
    v143 = nil;
    { popv(6); return onevalue(v143); }
/* error exit handlers */
v118:
    popv(6);
    return nil;
}



setup_type const u10_setup[] =
{
    {"opmtch*",                 CC_opmtchH,     too_many_1,    wrong_no_1},
    {"fs:timestermterm",        too_few_2,      CC_fsTtimestermterm,wrong_no_2},
    {"mo=sum",                  too_few_2,      CC_moMsum,     wrong_no_2},
    {"pcmult",                  too_few_2,      CC_pcmult,     wrong_no_2},
    {"pkp",                     CC_pkp,         too_many_1,    wrong_no_1},
    {"*d2n",                    CC_Hd2n,        too_many_1,    wrong_no_1},
    {"listsum",                 CC_listsum,     too_many_1,    wrong_no_1},
    {"bczero?",                 CC_bczeroW,     too_many_1,    wrong_no_1},
    {"peel",                    CC_peel,        too_many_1,    wrong_no_1},
    {"i2rd*",                   CC_i2rdH,       too_many_1,    wrong_no_1},
    {"fprin2",                  CC_fprin2,      too_many_1,    wrong_no_1},
    {"fs:angle-order",          too_few_2,      CC_fsTangleKorder,wrong_no_2},
    {"mo=degcomp",              too_few_2,      CC_moMdegcomp, wrong_no_2},
    {"rev",                     too_few_2,      CC_rev,        wrong_no_2},
    {"setcar",                  too_few_2,      CC_setcar,     wrong_no_2},
    {"plus-mod-p",              too_few_2,      CC_plusKmodKp, wrong_no_2},
    {"bcint2op",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_bcint2op},
    {"hasonephysop",            CC_hasonephysop,too_many_1,    wrong_no_1},
    {"qassoc",                  too_few_2,      CC_qassoc,     wrong_no_2},
    {"fs:timesterm",            too_few_2,      CC_fsTtimesterm,wrong_no_2},
    {"cali_trace",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_cali_trace},
    {"hasonevector",            CC_hasonevector,too_many_1,    wrong_no_1},
    {"pv_sort2",                too_few_2,      CC_pv_sort2,   wrong_no_2},
    {"bfzerop:",                CC_bfzeropT,    too_many_1,    wrong_no_1},
    {"*collectphysops",         CC_Hcollectphysops,too_many_1, wrong_no_1},
    {"getroad",                 too_few_2,      CC_getroad,    wrong_no_2},
    {"pv_renorm",               CC_pv_renorm,   too_many_1,    wrong_no_1},
    {"times-term-mod-p",        too_few_2,      CC_timesKtermKmodKp,wrong_no_2},
    {"striptag",                CC_striptag,    too_many_1,    wrong_no_1},
    {"evsum",                   too_few_2,      CC_evsum,      wrong_no_2},
    {"round:last",              CC_roundTlast,  too_many_1,    wrong_no_1},
    {"rd:minusp",               CC_rdTminusp,   too_many_1,    wrong_no_1},
    {"prin2-downcase",          CC_prin2Kdowncase,too_many_1,  wrong_no_1},
    {"constimes",               CC_constimes,   too_many_1,    wrong_no_1},
    {"fs:plus",                 too_few_2,      CC_fsTplus,    wrong_no_2},
    {"mo=shorten",              CC_moMshorten,  too_many_1,    wrong_no_1},
    {"dquot",                   too_few_2,      CC_dquot,      wrong_no_2},
    {"lcm",                     too_few_2,      CC_lcm,        wrong_no_2},
    {"*i2rn",                   CC_Hi2rn,       too_many_1,    wrong_no_1},
    {"kernels",                 CC_kernels,     too_many_1,    wrong_no_1},
    {"evmatrixcomp",            too_few_2,      CC_evmatrixcomp,wrong_no_2},
    {"monordp",                 too_few_2,      CC_monordp,    wrong_no_2},
    {"bftrim:",                 CC_bftrimT,     too_many_1,    wrong_no_1},
    {"quotfm",                  too_few_2,      CC_quotfm,     wrong_no_2},
    {"tensopp",                 CC_tensopp,     too_many_1,    wrong_no_1},
    {"kernels1",                too_few_2,      CC_kernels1,   wrong_no_2},
    {"bas_rep",                 CC_bas_rep,     too_many_1,    wrong_no_1},
    {"pv_sort",                 CC_pv_sort,     too_many_1,    wrong_no_1},
    {"evaluate-in-order",       too_few_2,      CC_evaluateKinKorder,wrong_no_2},
    {"vevtdeg",                 CC_vevtdeg,     too_many_1,    wrong_no_1},
    {"xdiv",                    too_few_2,      CC_xdiv,       wrong_no_2},
    {"round:mt",                too_few_2,      CC_roundTmt,   wrong_no_2},
    {":times",                  too_few_2,      CC_Ttimes,     wrong_no_2},
    {"physopsim*",              CC_physopsimH,  too_many_1,    wrong_no_1},
    {"mo_sum",                  too_few_2,      CC_mo_sum,     wrong_no_2},
    {"pv_add",                  too_few_2,      CC_pv_add,     wrong_no_2},
    {"copy",                    CC_copy,        too_many_1,    wrong_no_1},
    {"evlexcomp",               too_few_2,      CC_evlexcomp,  wrong_no_2},
    {"chundexp",                CC_chundexp,    too_many_1,    wrong_no_1},
    {":plus",                   too_few_2,      CC_Tplus,      wrong_no_2},
    {"delallasc",               too_few_2,      CC_delallasc,  wrong_no_2},
    {"*physopp*",               CC_HphysoppH,   too_many_1,    wrong_no_1},
    {"nonzero-length",          CC_nonzeroKlength,too_many_1,  wrong_no_1},
    {"mo_compare",              too_few_2,      CC_mo_compare, wrong_no_2},
    {"cdiv",                    too_few_2,      CC_cdiv,       wrong_no_2},
    {"insert_pv",               too_few_2,      CC_insert_pv,  wrong_no_2},
    {"general-modular-number",  CC_generalKmodularKnumber,too_many_1,wrong_no_1},
    {"freeofdepl",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_freeofdepl},
    {"evtdeg",                  CC_evtdeg,      too_many_1,    wrong_no_1},
    {"groebsearchinlist",       too_few_2,      CC_groebsearchinlist,wrong_no_2},
    {"find_item",               too_few_2,      CC_find_item,  wrong_no_2},
    {"csl_timbf",               too_few_2,      CC_csl_timbf,  wrong_no_2},
    {"idlistp",                 CC_idlistp,     too_many_1,    wrong_no_1},
    {"sroad",                   wrong_no_na,    wrong_no_nb,   (n_args *)CC_sroad},
    {"dp=ecart",                CC_dpMecart,    too_many_1,    wrong_no_1},
    {"pv_sort1",                too_few_2,      CC_pv_sort1,   wrong_no_2},
    {"gen-mult-by-const-mod-p", too_few_2,      CC_genKmultKbyKconstKmodKp,wrong_no_2},
    {"c:ordexp",                too_few_2,      CC_cTordexp,   wrong_no_2},
    {"times-mod-p",             too_few_2,      CC_timesKmodKp,wrong_no_2},
    {"atomf",                   CC_atomf,       too_many_1,    wrong_no_1},
    {":minusp",                 CC_Tminusp,     too_many_1,    wrong_no_1},
    {"maxdeg",                  too_few_2,      CC_maxdeg,     wrong_no_2},
    {"noncommuting",            too_few_2,      CC_noncommuting,wrong_no_2},
    {"repeatsp",                CC_repeatsp,    too_many_1,    wrong_no_1},
    {"bc=simp",                 CC_bcMsimp,     too_many_1,    wrong_no_1},
    {NULL, (one_args *)"u10", (two_args *)"21400 1528138 4688534", 0}
};

/* end of generated code */

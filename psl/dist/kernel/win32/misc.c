/* various UNIX functions which are needed as (long) external references */
/* 17-Nov-89  Herbert Melenk (ZIB Berlin)                                */
 
#define lldiv standardlldiv
#include <stdio.h>
#include <windows.h>
#undef lldiv
/*

long p_fopen(c,m)
	long m; char * c;
	{return ( (long) fopen(c,m)); }
 
long p_fgets(b,c,fp)
	long c,fp; char*b;
	{return ( (long) fgets(b,c,fp)); }
 
*/

long p_clearerr(fp)
	FILE* fp;
{clearerr(fp); return 0;}
 
long lmul(l1,l2)
	long l1,l2;
	{return (l1 * l2);}
 
long lldiv(l1,l2)
	long l1,l2;
        {l1 = (l1/l2); return (l1);}
 
long lrem(l1,l2)
	long l1,l2;
	{return (l1 % l2);}
 
 
 setlinebuf(stream)
 FILE* stream;
 { setvbuf(stream, (char *) NULL, _IOLBF, 80);}
// { setvbuf(stream, (char *) NULL, _IONBF, 0);}

 
profil(long freq,long time)
    { return(Beep(freq,time)); }


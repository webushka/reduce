
/* $destdir\u48.c        Machine generated C code */

/* Signature: 00000000 27-Aug-2011 */

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
#if !defined UNDER_CE && !defined EMBEDDED
#if ((defined HAVE_SOCKET && defined HAVE_SYS_SOCKET_H) || defined WIN32)
#define SOCKETS                  1
#endif
#endif
#ifndef MS_CDECL
#ifdef _MSC_VER
#  define MS_CDECL __cdecl
#else
#  define MS_CDECL
#endif
#endif
#ifdef WIN32
#  if defined WIN64 || defined __WIN64__
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
#ifdef HAVE_STDINT_H
#include <stdint.h>
#else 
#ifndef HAVE_UINT32_T
#ifdef  HAVE_U_INT32_T
typedef u_int32_t uint32_t;
#define HAVE_UINT32_T 1
#endif
#endif
#ifndef HAVE_UINT64_T
#ifdef  HAVE_U_INT64_T
typedef u_int64_t uint64_t;
#define HAVE_UINT64_T 1
#endif
#endif
#ifndef HAVE_UINTPTR_T
#ifdef  HAVE_U_INTPTR_T
typedef u_intptr_t uintptr_t;
#define HAVE_UINTPTR_T 1
#endif
#endif
#if !defined HAVE_INT32_T && defined SIZEOF_INT && (SIZEOF_INT == 4)
typedef int int32_t;
#define HAVE_INT32_T 1
#endif
#if !defined HAVE_UINT32_T && defined SIZEOF_INT && (SIZEOF_INT == 4)
typedef unsigned int uint32_t;
#define HAVE_UINT32_T 1
#endif
#if !defined HAVE_INT32_T && defined SIZEOF_SHORT_INT && (SIZEOF_SHORT_INT == 4)
typedef short int int32_t;
#define HAVE_INT32_T 1
#endif
#if !defined HAVE_UINT32_T && defined SIZEOF_SHORT_INT && (SIZEOF_SHORT_INT == 4)
typedef unsigned short int uint32_t;
#define HAVE_UINT32_T 1
#endif
#if !defined HAVE_INT64_T && defined SIZEOF_LONG && (SIZEOF_LONG == 8)
typedef long int64_t;
#define HAVE_INT64_T 1
#endif
#if !defined HAVE_UINT64_T && defined SIZEOF_LONG && (SIZEOF_LONG == 8)
typedef unsigned long uint64_t;
#define HAVE_UINT64_T 1
#endif
#if !defined HAVE_INT64_T && defined SIZEOF_LONG_LONG && (SIZEOF_LONG_LONG == 8)
typedef long long int64_t;
#define HAVE_INT64_T 1
#endif
#if !defined HAVE_UINT64_T && defined SIZEOF_LONG_LONG && (SIZEOF_LONG_LONG == 8)
typedef unsigned long long uint64_t;
#define HAVE_UINT64_T 1
#endif
#if !defined HAVE_INTPTR_T && defined SIZEOF_VOID_P && (SIZEOF_VOID_P == 4) && defined HAVE_INT32_T
typedef int32_t intptr_t;
#define HAVE_INTPTR_T 1
#endif
#if !defined HAVE_INTPTR_T && defined SIZEOF_VOID_P && (SIZEOF_VOID_P == 8) && defined HAVE_INT64_T
typedef int64_t intptr_t;
#define HAVE_INTPTR_T 1
#endif
#if !defined HAVE_UINTPTR_T && defined SIZEOF_VOID_P && (SIZEOF_VOID_P == 4) && defined HAVE_UINT32_T
typedef uint32_t uintptr_t;
#define HAVE_UINTPTR_T 1
#endif
#if !defined HAVE_UINTPTR_T && defined SIZEOF_VOID_P && (SIZEOF_VOID_P == 8) && defined HAVE_UINT64_T
typedef uint64_t uintptr_t;
#define HAVE_UINTPTR_T 1
#endif
#endif 
#endif 
#ifndef header_tags_h
#define header_tags_h 1
#if !defined HAVE_STDINT_H || !defined HAVE_INT32_T
#error This system needs a 32-bit integer type.
#endif
#define SIXTY_FOUR_BIT (sizeof(intptr_t) == 8)
typedef int                 CSLbool;
#define YES                 1
#define NO                  0
#ifndef PAGE_BITS
#  define PAGE_BITS             22
#endif 
#define PAGE_POWER_OF_TWO       (((uint32_t)1) << PAGE_BITS)
#define CSL_PAGE_SIZE           (PAGE_POWER_OF_TWO - 256U)
#ifndef MAX_HEAPSIZE
#  define MAX_HEAPSIZE       (SIXTY_FOUR_BIT ? (512*1024) : 2048)
#endif 
#ifndef MAX_BPSSIZE
#  define MAX_BPSSIZE           64
#endif 
#define MEGABYTE                ((uint32_t)0x100000U)
#if PAGE_BITS >= 20
#define MAX_PAGES               (MAX_HEAPSIZE >> (PAGE_BITS-20))
#define MAX_BPS_PAGES           (MAX_BPSSIZE >> (PAGE_BITS-20))
#else
#define MAX_PAGES               (MAX_HEAPSIZE << (20-PAGE_BITS))
#define MAX_BPS_PAGES           (MAX_BPSSIZE << (20-PAGE_BITS))
#endif
#define MAX_NATIVE_PAGES        MAX_BPS_PAGES
#define CSL_IGNORE(x)           (x = x)
#define LONGEST_LEGAL_FILENAME 1024
#define FP_WORD_ORDER 0x01
#define FP_BYTE_ORDER 0x02
#define FP_MASK       0xff
typedef intptr_t Lisp_Object;
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
#define fixnum_of_int(x)    ((Lisp_Object)(TAG_FIXNUM + (((int32_t)(x)) << 4)))
#ifdef SIGNED_SHIFTS_ARE_LOGICAL
#define int_of_fixnum(x)    ((int32_t)(((int32_t)(x)) < 0 ?           \
                             (((int32_t)(x))>>4) | (-0x10000000) :  \
                             (((int32_t)(x))>>4)))
#else 
#define int_of_fixnum(x)    ((int32_t)(((int32_t)(x)) >> 4))
#endif 
#define GC_BIT_I        8               
#define GC_BIT_H        8               
#define GC_BIT_P        ((intptr_t)~((~(uintptr_t)0) >> 1))
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
extern Cons_Cell *memory_reference(intptr_t p);
extern char *cmemory_reference(intptr_t p);
extern void identify_page_types();
extern long int car_counter;
extern unsigned long int car_low, car_high;
#define qcar(p) (memory_reference((intptr_t)p)->car)
#define qcdr(p) (memory_reference((intptr_t)p)->cdr)
#else 
#define qcar(p) (((Cons_Cell *) (p))->car)
#define qcdr(p) (((Cons_Cell *) (p))->cdr)
#endif 
#define car32(p) (*(int32_t *)(p))
#define cdr32(p) (*(int32_t *)(p))[1])
typedef Lisp_Object Special_Form(Lisp_Object, Lisp_Object);
typedef Lisp_Object one_args(Lisp_Object, Lisp_Object);
typedef Lisp_Object two_args(Lisp_Object, Lisp_Object, Lisp_Object);
typedef Lisp_Object MS_CDECL n_args(Lisp_Object, int, ...);
typedef uintptr_t Header;
#define header_mask          0x3f0
#define type_of_header(h)    (((unsigned int)(h)) & header_mask)
#define length_of_header(h)  (((uint32_t)(h)) >> 10)
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
#define numhdr(v) (*(Header *)memory_reference((intptr_t)((char *)(v) - \
                                               TAG_NUMBERS)))
#define flthdr(v) (*(Header *)memory_reference((intptr_t)((char *)(v) - \
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
#define ADDRESS_SHIFT (SIXTY_FOUR_BIT ? 3 : 2)
#ifdef MEMORY_TRACE
#define vechdr(v)  (*(Header *)memory_reference((intptr_t)((char *)(v) - \
                               TAG_VECTOR)))
#define elt(v, n)  (*(Lisp_Object *)memory_reference((intptr_t)((char *)(v) + \
                               (CELL-TAG_VECTOR) + \
                               (((intptr_t)(n))<<ADDRESS_SHIFT))))
#define celt(v, n) (*cmemory_reference((intptr_t)((char *)(v) + \
                               (CELL-TAG_VECTOR)+((intptr_t)(n)))))
#define ucelt(v, n) (*(unsigned char *)cmemory_reference( \
                               (intptr_t)((char *)(v) + \
                               (CELL-TAG_VECTOR)+((intptr_t)(n)))))
#define scelt(v, n) (*(signed char *)cmemory_reference( \
                               (intptr_t)((char *)(v) + \
                               (CELL-TAG_VECTOR)+((intptr_t)(n)))))
#else 
#define vechdr(v)  (*(Header *)((char *)(v) - TAG_VECTOR))
#define elt(v, n)  (*(Lisp_Object *)((char *)(v) + \
                               (CELL-TAG_VECTOR) + \
                               (((intptr_t)(n))<<ADDRESS_SHIFT)))
#define celt(v, n) (*((char *)(v) + (CELL-TAG_VECTOR)+((intptr_t)(n))))
#define ucelt(v, n) (*((unsigned char *)(v) + (CELL-TAG_VECTOR)+((intptr_t)(n))))
#define scelt(v, n) (*((signed char *)(v) + (CELL-TAG_VECTOR)+((intptr_t)(n))))
#endif 
#define helt(v, n) \
   ((*(unsigned char *)((v) + (CELL-TAG_VECTOR) + (2*(intptr_t)(n))) | \
    (*(signed char *)((v) + (CELL-TAG_VECTOR+1) + (2*(intptr_t)(n)))) << 8))
#define sethelt(v, n, x) \
   do { \
      *(char *)((v) + (CELL-TAG_VECTOR+0) + (2*(intptr_t)(n))) = (x); \
      *(char *)((v) + (CELL-TAG_VECTOR+1) + (2*(intptr_t)(n))) = (x)>>8; \
      } while (0)
#define ielt(v, n)  (*(intptr_t *)((char *)(v) + \
                           (CELL-TAG_VECTOR)+(((intptr_t)(n))<<ADDRESS_SHIFT)))
#define ielt32(v, n)  (*(int32_t *)((char *)(v) + \
                           (CELL-TAG_VECTOR)+(((intptr_t)(n))<<2)))
#define felt(v, n)  (*(float *)((char *)(v) + \
                           (CELL-TAG_VECTOR)+(((intptr_t)(n))<<2)))
#define delt(v, n)  (*(double *)((char *)(v) + \
                           (2*CELL-TAG_VECTOR)+(((intptr_t)(n))<<3)))
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
#define is_spid(x)   (((int)(x) & ODDS_MASK) == TAG_SPID)
#define is_library(x)(((int)(x) & 0xffff)    == SPID_LIBRARY)
#define library_number(x) (((x) >> 20) & 0xfff)
#ifdef OLD_VERSION
#define font_of_char(n)  (((int32_t)(n) >> 24) & 0xff)
#define bits_of_char(n)  (((int32_t)(n) >> 16) & 0xff)
#ifdef Kanji
#define code_of_char(n)  (((int32_t)(n) >>  8) & 0xffff)
#else
#define code_of_char(n)  ((char)(((int32_t)(n) >>  8) & 0xff))
#endif
#define pack_char(bits, font, code)                                \
    ((Lisp_Object)((((uint32_t)(font)) << 24) |                  \
    (((uint32_t)(bits)) << 16) | (((uint32_t)(code)) << 8) | TAG_CHAR))
    
#define CHAR_EOF pack_char(0, 0xff, 4)
#else 
#define font_of_char(n)  (((int32_t)(n) >> 29) & 0x03)
#define bits_of_char(n)  (0)
#define code_of_char(n)  (((int32_t)(n) >>  8) & 0x001fffff)
#define pack_char(bits, font, code)                                \
    ((Lisp_Object)((((uint32_t)(font)) << 29) |                    \
                   (((uint32_t)(code)) << 8) | TAG_CHAR))
    
#define CHAR_EOF ((Lisp_Object)(int32_t)0xff000402)
#endif  
#define data_of_bps(v)                                        \
  ((char *)(doubleword_align_up((intptr_t)                    \
               bps_pages[((uint32_t)(v))>>(PAGE_BITS+6)]) +   \
            (SIXTY_FOUR_BIT ?                                 \
               (intptr_t)((((uint64_t)(v))>>(32-PAGE_BITS)) & \
                          PAGE_POWER_OF_TWO) :                \
               0) +                                           \
            (((v) >> 6) & (PAGE_POWER_OF_TWO-4))))
typedef int32_t junk;      
typedef intptr_t junkxx;   
typedef struct Symbol_Head
{
    Header header;      
    Lisp_Object value;   
    Lisp_Object env;     
    intptr_t function1;  
    intptr_t function2;  
    intptr_t functionn;  
    Lisp_Object pname;   
    Lisp_Object plist;   
    Lisp_Object fastgets;
    uintptr_t count;     
#ifdef COMMON
    Lisp_Object package;
#endif 
} Symbol_Head;
#define MAX_FASTGET_SIZE  63
#ifdef COMMON
#define symalign(n) (SIXTY_FOUR_BIT ? \
     ((char *)((intptr_t)(n) & ~(intptr_t)TAG_SYMBOL)) : \
     (n)
#else
#define symalign(n) (n)
#endif
#ifndef MEMORY_TRACE
#define qheader(p)     (*(Header *)     symalign((char *)(p) - TAG_SYMBOL))
#define qvalue(p)      (*(Lisp_Object *)symalign((char *)(p) + (CELL - TAG_SYMBOL)))
#define qenv(p)        (*(Lisp_Object *)symalign((char *)(p) + (2*CELL - TAG_SYMBOL)))
#define qfn1(p)        ((one_args *) *((intptr_t *)symalign((char *)(p) + \
                                         (3*CELL - TAG_SYMBOL))))
#define qfn2(p)        ((two_args *) *((intptr_t *)symalign((char *)(p) + \
                                         (4*CELL - TAG_SYMBOL))))
#define qfnn(p)        ((n_args *)   *((intptr_t *)symalign((char *)(p) + \
                                         (5*CELL - TAG_SYMBOL))))
#define ifn1(p)        (*(intptr_t *)      symalign((char *)(p) + (3*CELL-TAG_SYMBOL)))
#define ifn2(p)        (*(intptr_t *)      symalign((char *)(p) + (4*CELL-TAG_SYMBOL)))
#define ifnn(p)        (*(intptr_t *)      symalign((char *)(p) + (5*CELL-TAG_SYMBOL)))
#define qpname(p)      (*(Lisp_Object *)symalign((char *)(p) + (6*CELL-TAG_SYMBOL)))
#define qplist(p)      (*(Lisp_Object *)symalign((char *)(p) + (7*CELL-TAG_SYMBOL)))
#define qfastgets(p)   (*(Lisp_Object *)symalign((char *)(p) + (8*CELL-TAG_SYMBOL)))
#define qcount(p)      (*(uintptr_t *) symalign((char *)(p) + (9*CELL-TAG_SYMBOL)))
#ifdef COMMON
#define qpackage(p)    (*(Lisp_Object *)symalign((char *)(p) + (10*CELL-TAG_SYMBOL)))
#endif
#else 
#define qheader(p)     (*(Header *)     memory_reference((intptr_t) \
                                         symalign((char *)(p) - TAG_SYMBOL)))
#define qvalue(p)      (*(Lisp_Object *)memory_reference((intptr_t) \
                                         symalign((char *)(p) + (CELL-TAG_SYMBOL))))
#define qenv(p)        (*(Lisp_Object *)memory_reference((intptr_t) \
                                         symalign((char *)(p) + (2*CELL-TAG_SYMBOL))))
#define qfn1(p)        ((one_args *) *(intptr_t *)memory_reference((intptr_t) \
                                         symalign((char *)(p) + (3*CELL-TAG_SYMBOL))))
#define qfn2(p)        ((two_args *) *(intptr_t *)memory_reference((intptr_t) \
                                         symalign((char *)(p) + (4*CELL-TAG_SYMBOL))))
#define qfnn(p)        ((n_args *)   *(intptr_t *)memory_reference((intptr_t) \
                                         symalign((char *)(p) + (5*CELL-TAG_SYMBOL))))
#define ifn1(p)        (*(intptr_t *)      memory_reference((intptr_t) \
                                         symalign((char *)(p) + (3*CELL-TAG_SYMBOL))))
#define ifn2(p)        (*(intptr_t *)      memory_reference((intptr_t) \
                                         symalign((char *)(p) + (4*CELL-TAG_SYMBOL))))
#define ifnn(p)        (*(intptr_t *)      memory_reference((intptr_t) \
                                         symalign((char *)(p) + (5*CELL-TAG_SYMBOL))))
#define qpname(p)      (*(Lisp_Object *)memory_reference((intptr_t) \
                                         symalign((char *)(p) + (6*CELL-TAG_SYMBOL))))
#define qplist(p)      (*(Lisp_Object *)memory_reference((intptr_t) \
                                         symalign((char *)(p) + (7*CELL-TAG_SYMBOL))))
#define qfastgets(p)   (*(Lisp_Object *)memory_reference((intptr_t) \
                                         symalign((char *)(p) + (8*CELL-TAG_SYMBOL))))
#define qcount(p)      (*(uintptr_t *) memory_reference((intptr_t) \
                                         symalign((char *)(p) + (9*CELL-TAG_SYMBOL))))
#ifdef COMMON
#define qpackage(p)    (*(Lisp_Object *)memory_reference((intptr_t) \
                                         symalign((char *)(p) + (10*CELL-TAG_SYMBOL))))
#endif
#endif 
#ifdef COMMON
typedef union Float_union
{
    float f;
    int32_t i;
} Float_union;
#endif
typedef struct Big_Number
{
    Header h;
    uint32_t d[1];  
} Big_Number;
#define bignum_length(b)  length_of_header(numhdr(b))
#ifdef MEMORY_TRACE
#define bignum_digits(b)  ((uint32_t *)memory_reference((intptr_t)((char *)b + \
                                         (CELL-TAG_NUMBERS))))
#else
#define bignum_digits(b)  ((uint32_t *)((char *)b  + (CELL-TAG_NUMBERS)))
#endif
#define make_bighdr(n)    (TAG_ODDS+TYPE_BIGNUM+(((intptr_t)(n))<<12))
#define pack_hdrlength(n) (((intptr_t)(n))<<12)
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
       int32_t i;
    } f;
} Single_Float;
#define single_float_val(v) \
    (((Single_Float *)((char *)(v)-TAG_BOXFLOAT))->f.f)
#endif 
#define SIZEOF_DOUBLE_FLOAT     16
#define double_float_addr(v)    ((double *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
#define double_float_val(v)     (*(double *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
#ifdef COMMON
#define SIZEOF_LONG_FLOAT       16
#define long_float_addr(v)      ((double *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
#define long_float_val(v)       (*(double *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
#endif
#define word_align_up(n) ((Lisp_Object)(((intptr_t)(n) + 3) & (-4)))
#define doubleword_align_up(n) ((Lisp_Object)(((intptr_t)(n) + 7) & (-8)))
#define doubleword_align_down(n) ((Lisp_Object)((intptr_t)(n) & (-8)))
#define object_align_up(n) ((Lisp_Object)(((intptr_t)(n) + \
                            sizeof(Lisp_Object) - 1) & (-sizeof(Lisp_Object))))
#define quadword_align_up(n) ((Lisp_Object)(((intptr_t)(n) + 15) & (-16)))
#define quadword_align_down(n) ((Lisp_Object)((intptr_t)(n) & (-16)))
#define UNWIND_NULL       0x0         
#define UNWIND_GO         0x1         
#define UNWIND_RETURN     0x2         
#define UNWIND_THROW      0x3         
#define UNWIND_RESTART    0x4         
#define UNWIND_RESOURCE   0x5         
#define UNWIND_FNAME      0x100       
#define UNWIND_ARGS       0x200       
#define UNWIND_ERROR      (UNWIND_FNAME|UNWIND_ARGS)
#define UNWIND_UNWIND     0x400       
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
#define verbos_flag (miscflags & GC_MSG_BITS)
#define HEADLINE_FLAG 0x08
#define FNAME_FLAG    0x10
#define ARGS_FLAG     0x20
#define BACKTRACE_MSG_BITS 0x38
 
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
#define err_no_longer_used       34      
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
    "this error code available for re-use",
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
extern int32_t mpi_rank,mpi_size;
#endif
#define D do { \
          char *fffff = strrchr(__FILE__, '/'); \
          if (fffff == NULL) fffff = strrchr(__FILE__, '\\'); \
          if (fffff == NULL) fffff = __FILE__; else fffff++; \
          fprintf(stderr, "Line %d File %s\n", __LINE__, fffff); \
          fflush(stderr); \
          } while (0)
#define DS(s) do { \
          char *fffff = strrchr(__FILE__, '/'); \
          if (fffff == NULL) fffff = strrchr(__FILE__, '\\'); \
          if (fffff == NULL) fffff = __FILE__; else fffff++; \
          fprintf(stderr, "Line %d File %s: %s\n", __LINE__, fffff, (s)); \
          fflush(stderr); \
          } while (0)
#define DX(s) do { \
          char *fffff = strrchr(__FILE__, '/'); \
          if (fffff == NULL) fffff = strrchr(__FILE__, '\\'); \
          if (fffff == NULL) fffff = __FILE__; else fffff++; \
          fprintf(stderr, "Line %d File %s: %llx\n", __LINE__, fffff, \
                          (long long unsigned)(s)); \
          fflush(stderr); \
          } while (0)
extern void **pages,
            **heap_pages, **vheap_pages,
            **bps_pages, **native_pages;
extern void **new_heap_pages, **new_vheap_pages,
            **new_bps_pages, **new_native_pages;
#ifdef CONSERVATIVE
#define PAGE_TYPE_CONS   0
#define PAGE_TYPE_VECTOR 1
#define PAGE_TYPE_BPS    2
#define PAGE_TYPE_NATIVE 3
typedef struct page_map_t
{
    void *start;
    void *end;
    int type;
} page_map_t;
#endif
extern int32_t pages_count,
               heap_pages_count, vheap_pages_count,
               bps_pages_count, native_pages_count;
extern int32_t new_heap_pages_count, new_vheap_pages_count,
               new_bps_pages_count, new_native_pages_count;
extern int32_t native_pages_changed;
extern int32_t native_fringe;
extern Lisp_Object *nilsegment, *stacksegment;
extern Lisp_Object *stackbase;
extern int32_t stack_segsize;  
extern Lisp_Object *C_stack;
#define stack C_stack
extern char *C_stack_limit;
extern CSLbool restartp;
extern char *big_chunk_start, *big_chunk_end;
#ifdef CONSERVATIVE
extern Lisp_Object *C_stackbase, *C_stacktop;
#endif
#ifdef MEMORY_TRACE
#define push(a)         do { \
                          *++stack = (a); \
                          memory_reference((intptr_t)stack); } while (0)
#define push2(a,b)      do { \
                          *++stack = (a); \
                          memory_reference((intptr_t)stack); \
                          *++stack = (b); \
                          memory_reference((intptr_t)stack); } while (0)
#define push3(a,b,c)    do { \
                          *++stack = (a); \
                          memory_reference((intptr_t)stack); \
                          *++stack = (b); \
                          memory_reference((intptr_t)stack); \
                          *++stack = (c); \
                          memory_reference((intptr_t)stack); } while (0)
#define push4(a,b,c,d)  do { \
                          *++stack = (a); \
                          memory_reference((intptr_t)stack); \
                          *++stack = (b); \
                          memory_reference((intptr_t)stack); \
                          *++stack = (c); \
                          memory_reference((intptr_t)stack); \
                          *++stack = (d); \
                          memory_reference((intptr_t)stack); } while (0)
#define push5(a,b,c,d,e)do { \
                          *++stack = (a); \
                          memory_reference((intptr_t)stack); \
                          *++stack = (b); \
                          memory_reference((intptr_t)stack); \
                          *++stack = (c); \
                          memory_reference((intptr_t)stack); \
                          *++stack = (d); \
                          memory_reference((intptr_t)stack); \
                          *++stack = (e); \
                          memory_reference((intptr_t)stack); } while (0)
#define push6(a,b,c,d,e,f) do {push3(a,b,c); push3(d,e,f); } while (0)
#define my_pop()        (memory_reference((int32_t)stack), (*stack--))
#define pop(a)          { memory_reference((intptr_t)stack); (a) = *stack--; }
#define pop2(a,b)       { memory_reference((intptr_t)stack); (a) = *stack--; memory_reference((intptr_t)stack); (b) = *stack--; }
#define pop3(a,b,c)     { memory_reference((intptr_t)stack); (a) = *stack--; memory_reference((intptr_t)stack); (b) = *stack--; memory_reference((intptr_t)stack); (c) = *stack--; }
#define pop4(a,b,c,d)   { memory_reference((intptr_t)stack); (a) = *stack--; memory_reference((intptr_t)stack); (b) = *stack--; memory_reference((intptr_t)stack); (c) = *stack--; \
                          memory_reference((intptr_t)stack); (d) = *stack--; }
#define pop5(a,b,c,d,e) { memory_reference((intptr_t)stack); (a) = *stack--; memory_reference((intptr_t)stack); (b) = *stack--; memory_reference((intptr_t)stack); (c) = *stack--; \
                          memory_reference((intptr_t)stack); (d) = *stack--; memory_reference((intptr_t)stack); (e) = *stack--; }
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
extern volatile char stack_contents_temp;
#ifdef CHECK_STACK
extern int check_stack(char *file, int line);
extern void show_stack();
#define if_check_stack \
   if (check_stack(__FILE__,__LINE__)) \
   {   show_stack(); return aerror("stack overflow"); }
#else
#define if_check_stack \
   {   char *p = (char *)&p; \
       if (p < C_stack_limit) return aerror("stack overflow"); \
   }
#endif
extern int32_t software_ticks, countdown;
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
#ifdef COMMON
#define BASE ((Lisp_Object *)nil)
#else
#define BASE (SIXTY_FOUR_BIT ? ((Lisp_Object *)(nil+4)): ((Lisp_Object *)nil))
#endif
#ifdef NILSEG_EXTERNS
#define nil_as_base
extern intptr_t byteflip;
extern Lisp_Object codefringe;
extern Lisp_Object volatile codelimit;
extern Lisp_Object * volatile stacklimit;
extern Lisp_Object fringe;
extern Lisp_Object volatile heaplimit;
extern Lisp_Object volatile vheaplimit;
extern Lisp_Object vfringe;
extern intptr_t nwork;
extern intptr_t exit_count;
extern intptr_t gensym_ser, print_precision, miscflags;
extern intptr_t current_modulus, fastget_size, package_bits;
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
extern Lisp_Object gchook, resources, callstack, procstack, procmem;
#ifdef COMMON
extern Lisp_Object keyword_package;
extern Lisp_Object all_packages, package_symbol, internal_symbol;
extern Lisp_Object external_symbol, inherited_symbol;
extern Lisp_Object key_key, allow_other_keys, aux_key;
extern Lisp_Object format_symbol;
extern Lisp_Object expand_def_symbol, allow_key_key;
#endif
extern Lisp_Object declare_symbol, special_symbol;
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
#define byteflip              BASE[12]
#define codefringe            BASE[13]
#define codelimit             (*(Lisp_Object volatile *)&BASE[14])
extern Lisp_Object * volatile stacklimit;
#define fringe                BASE[18]
#define heaplimit             (*(Lisp_Object volatile *)&BASE[19])
#define vheaplimit            (*(Lisp_Object volatile *)&BASE[20])
#define vfringe               BASE[21]
#define miscflags             BASE[22]
#define nwork                 BASE[24]
#define exit_count            BASE[26]
#define gensym_ser            BASE[27]
#define print_precision       BASE[28]
#define current_modulus       BASE[29]
#define fastget_size          BASE[30]
#define package_bits          BASE[31]
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
#define gchook                BASE[153]
#define resources             BASE[154]
#define callstack             BASE[155]
#define procstack             BASE[156]
#define procmem               BASE[157]
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
#endif
#define declare_symbol        BASE[182]
#define special_symbol        BASE[183]
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
extern intptr_t exit_reason;
extern int procstackp;
#ifdef DEBUG
extern int trace_all;
#endif
extern int garbage_collection_permitted;
#define MAX_INPUT_FILES         40  
#define MAX_SYMBOLS_TO_DEFINE   40
#define MAX_FASL_PATHS          20
extern char *files_to_read[MAX_INPUT_FILES],
     *symbols_to_define[MAX_SYMBOLS_TO_DEFINE],
     *fasl_paths[MAX_FASL_PATHS];
extern int csl_argc;
extern char **csl_argv;
extern int fasl_output_file, output_directory;
extern FILE *binary_read_file;
extern int boffop;
extern void packbyte(int c);
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
extern void report_file(const char *s);
extern CSLbool undefine_this_one[MAX_SYMBOLS_TO_DEFINE];
extern int errorset_min, errorset_max;
extern int number_of_input_files,
    number_of_symbols_to_define,
    number_of_fasl_paths,
    init_flags;
extern int native_code_tag;
extern char *standard_directory;
extern int gc_number;
extern CSLbool gc_method_is_copying;
extern int force_reclaim_method, reclaim_trap_count;
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
    uint32_t chk;   
    int status;     
    int nativedir;  
} Ihandle;
extern int32_t compression_worth_while;
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
extern int32_t code_up_fn1(one_args *e);
extern int32_t code_up_fn2(two_args *e);
extern int32_t code_up_fnn(n_args *e);
extern int32_t code_up_io(void *e);
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
extern intptr_t memory_base, memory_size;
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
#define IOPEN_OUT       0
#define IOPEN_UNCHECKED 1
#define IOPEN_CHECKED   2
extern CSLbool Iopen(char *name, int len, int dirn, char *expanded_name);
extern CSLbool Iopen_from_stdin(void), Iopen_to_stdout(void);
extern CSLbool IopenRoot(char *expanded_name, int hard, int sixtyfour);
extern CSLbool Iwriterootp(char *expanded);
extern CSLbool Iopen_help(int32_t offset);
extern CSLbool Iopen_banner(int code);
extern CSLbool Imodulep(char *name, int len, char *datestamp, int32_t *size,
                                 char *expanded_name);
extern CSLbool Icopy(char *name, int len);
extern CSLbool Idelete(char *name, int len);
extern CSLbool IcloseInput(int check_checksum);
extern CSLbool IcloseOutput(int write_checksum);
extern CSLbool Ifinished(void);
extern int  Igetc(void);
extern int32_t Iread(void *buff, int32_t size);
extern CSLbool Iputc(int ch);
extern CSLbool Iwrite(void *buff, int32_t size);
extern long int Ioutsize(void);
extern char *CSLtmpnam(char *suffix, int32_t suffixlen);
extern int Cmkdir(char *s);
extern char *look_in_lisp_variable(char *o, int prefix);
extern void CSL_MD5_Init(void);
extern void CSL_MD5_Update(unsigned char *data, int len);
extern void CSL_MD5_Final(unsigned char *md);
extern CSLbool CSL_MD5_busy;
extern unsigned char *CSL_MD5(unsigned char *data, int n, unsigned char *md);
extern void checksum(Lisp_Object a);
extern unsigned char unpredictable[256];
extern void inject_randomness(int n);
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
#ifdef USE_SIGALTSTACK
extern sigjmp_buf *errorset_buffer;
extern sigjmp_buf my_exit_buffer;
#else
extern jmp_buf *errorset_buffer;
extern jmp_buf my_exit_buffer;
#endif
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
extern int         primep(int32_t);
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
extern uint32_t  Crand(void);
extern Lisp_Object Cremainder(Lisp_Object a, Lisp_Object b);
extern void        Csrand(uint32_t a, uint32_t b);
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
extern Lisp_Object getvector(int tag, int type, int32_t length);
extern Lisp_Object getvector_init(int32_t n, Lisp_Object v);
extern Lisp_Object getcodevector(int type, int32_t size);
extern uint32_t  hash_lisp_string(Lisp_Object s);
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
extern Lisp_Object make_one_word_bignum(int32_t n);
extern Lisp_Object make_package(Lisp_Object name);
extern Lisp_Object make_string(const char *b);
extern Lisp_Object make_nstring(char *b, int32_t n);
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
extern void        preserve(char *msg, int len);
extern void        preserve_native_code(void);
extern void        relocate_native_function(unsigned char *bps);
extern Lisp_Object prin(Lisp_Object u);
extern char *get_string_data(Lisp_Object a, char *why, int32_t *len);
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
                           int stg_class, intptr_t size);
#ifdef DEBUG
extern void validate_all(char *why, int line, char *file);
extern int check_env(Lisp_Object env);
#endif
extern CSLbool do_not_kill_native_code;
extern void        set_fns(Lisp_Object sym, one_args *f1,
                                            two_args *f2, n_args *fn);
extern void        setup(int restartp, double storesize);
extern Lisp_Object simplify_string(Lisp_Object s);
extern CSLbool        stringp(Lisp_Object a);
extern Lisp_Object times2(Lisp_Object a, Lisp_Object b);
extern int32_t       thirty_two_bits(Lisp_Object a);
#ifdef HAVE_INT64_T
extern int64_t       sixty_four_bits(Lisp_Object a);
#endif
#ifdef DEBUG
extern void validate_string_fn(Lisp_Object a, char *f, int l);
#define validate_string(a) validate_string_fn(a, __FILE__, __LINE__)
#else
#define validate_string(a) 
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
extern uint32_t Imultiply(uint32_t *rlow, uint32_t a,
                            uint32_t b, uint32_t c);
#endif
#ifndef IDIVIDE
extern uint32_t Idivide(uint32_t *qp, uint32_t a,
                          uint32_t b, uint32_t c);
extern uint32_t Idiv10_9(uint32_t *qp, uint32_t a, uint32_t b);
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
    uint32_t c1;
    uint32_t c2;
} setup_type_1;
extern setup_type const
       arith06_setup[], arith08_setup[], arith10_setup[], arith12_setup[],
       char_setup[], eval1_setup[], eval2_setup[], eval3_setup[],
       funcs1_setup[], funcs2_setup[], funcs3_setup[], print_setup[],
       read_setup[], mpi_setup[];
extern setup_type const
                    u01_setup[], u02_setup[], u03_setup[], u04_setup[],
       u05_setup[], u06_setup[], u07_setup[], u08_setup[], u09_setup[],
       u10_setup[], u11_setup[], u12_setup[], u13_setup[], u14_setup[],
       u15_setup[], u16_setup[], u17_setup[], u18_setup[], u19_setup[],
       u20_setup[], u21_setup[], u22_setup[], u23_setup[], u24_setup[],
       u25_setup[], u26_setup[], u27_setup[], u28_setup[], u29_setup[],
       u30_setup[], u31_setup[], u32_setup[], u33_setup[], u34_setup[],
       u35_setup[], u36_setup[], u37_setup[], u38_setup[], u39_setup[],
       u40_setup[], u41_setup[], u42_setup[], u43_setup[], u44_setup[],
       u45_setup[], u46_setup[], u47_setup[], u48_setup[], u49_setup[],
       u50_setup[], u51_setup[], u52_setup[], u53_setup[], u54_setup[],
       u55_setup[], u56_setup[], u57_setup[], u58_setup[], u59_setup[],
       u60_setup[];
extern setup_type const *setup_tables[];
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
extern Lisp_Object resource_exceeded();
extern int64_t time_base,  space_base,  io_base,  errors_base;
extern int64_t time_now,   space_now,   io_now,   errors_now;
extern int64_t time_limit, space_limit, io_limit, errors_limit;
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
#define top_bit_set(n)     (((int32_t)(n)) < 0)
#define top_bit(n)         (((uint32_t)(n)) >> 31)
#define set_top_bit(n)     ((n) | (uint32_t)0x80000000)
#define clear_top_bit(n)   ((n) & 0x7fffffff)
#define signed_overflow(n) top_bit_set((n) ^ (((int32_t)(n))<<1))
#ifdef HAVE_UINT64_T
#define IMULTIPLY 1      
#define Dmultiply(hi, lo, a, b, c)                          \
 do { uint64_t r64 = (uint64_t)(a) * (uint64_t)(b) +  \
                     (uint32_t)(c);                       \
      (lo) = 0x7fffffffu & (uint32_t)r64;                 \
      (hi) = (uint32_t)(r64 >> 31); } while (0)
#define IDIVIDE   1
#define Ddivide(r, q, a, b, c)                                      \
 do { uint64_t r64 = (((uint64_t)(a)) << 31) | (uint64_t)(b); \
      uint64_t c64 = (uint64_t)(uint32_t)(c);                 \
      q = (uint32_t)(r64 / c64);                                  \
      r = (uint32_t)(r64 % c64); } while (0)
#define Ddiv10_9(r, q, a, b) Ddivide(r, q, a, b, 1000000000u)
#else
#define Dmultiply(hi, lo, a, b, c) ((hi) = Imultiply(&(lo), (a), (b), (c)))
#define Ddivide(r, q, a, b, c) ((r) = Idivide(&(q), (a), (b), (c)))
#define Ddiv10_9(r, q, a, b)   ((r) = Idiv10_9(&(q), (a), (b)))
#endif
#define fix_mask (-0x08000000)
#define fixnum_minusp(a) ((int32_t)(a) < 0)
#define bignum_minusp(a) \
    ((int32_t)bignum_digits(a)[((bignum_length(a)-CELL)/4)-1]<0)
extern Lisp_Object negateb(Lisp_Object);
extern Lisp_Object copyb(Lisp_Object);
extern Lisp_Object negate(Lisp_Object);
extern Lisp_Object plus2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object difference2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object times2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object quot2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object CLquot2(Lisp_Object a, Lisp_Object b);
extern Lisp_Object quotbn(Lisp_Object a, int32_t n);
extern Lisp_Object quotbn1(Lisp_Object a, int32_t n);
extern Lisp_Object quotbb(Lisp_Object a, Lisp_Object b);
extern Lisp_Object Cremainder(Lisp_Object a, Lisp_Object b);
extern Lisp_Object rembi(Lisp_Object a, Lisp_Object b);
extern Lisp_Object rembb(Lisp_Object a, Lisp_Object b);
extern Lisp_Object shrink_bignum(Lisp_Object a, int32_t lena);
extern Lisp_Object modulus(Lisp_Object a, Lisp_Object b);
extern Lisp_Object rational(Lisp_Object a);
extern Lisp_Object rationalize(Lisp_Object a);
extern Lisp_Object lcm(Lisp_Object a, Lisp_Object b);
extern Lisp_Object lengthen_by_one_bit(Lisp_Object a, int32_t msd);
extern CSLbool numeq2(Lisp_Object a, Lisp_Object b);
extern CSLbool zerop(Lisp_Object a);
extern CSLbool onep(Lisp_Object a);
extern CSLbool minusp(Lisp_Object a);
extern CSLbool plusp(Lisp_Object a);
extern CSLbool lesspbd(Lisp_Object a, double b);
extern CSLbool lessprd(Lisp_Object a, double b);
extern CSLbool lesspdb(double a, Lisp_Object b);
extern CSLbool lesspdr(double a, Lisp_Object b);
extern Lisp_Object make_one_word_bignum(int32_t n);
extern Lisp_Object make_two_word_bignum(int32_t a, uint32_t b);
extern Lisp_Object make_n_word_bignum(int32_t a1, uint32_t a2,
                                      uint32_t a3, int32_t n);
extern Lisp_Object make_sfloat(double d);
extern double float_of_integer(Lisp_Object a);
extern Lisp_Object add1(Lisp_Object p);
extern Lisp_Object sub1(Lisp_Object p);
extern Lisp_Object integerp(Lisp_Object p);
extern double float_of_number(Lisp_Object a);
extern Lisp_Object make_boxfloat(double a, int32_t type);
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
extern Lisp_Object Lresource_limit2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
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
extern Lisp_Object MS_CDECL Lresource_limitn(Lisp_Object env, int nargs, ...);
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


/* Code for split!-wrt!-variables */

static Lisp_Object MS_CDECL CC_splitKwrtKvariables(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v17, v18, v19;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "split-wrt-variables");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for split-wrt-variables");
#endif
    if (stack >= stacklimit)
    {
        push3(v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v2);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v2;
    stack[-1] = v1;
    v18 = v0;
/* end of prologue */

v20:
    v17 = v18;
    if (v17 == nil) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v17 = stack[0];
    if (v17 == nil) goto v21;
    v17 = stack[0];
    v19 = qcar(v17);
    v17 = (Lisp_Object)17; /* 1 */
    v17 = (v19 == v17 ? lisp_true : nil);
    goto v22;

v22:
    if (!(v17 == nil)) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v17 = v18;
    if (!consp(v17)) goto v23;
    v17 = v18;
    v17 = qcar(v17);
    v17 = (consp(v17) ? nil : lisp_true);
    goto v24;

v24:
    if (v17 == nil) goto v25;
    v17 = v18;
    v18 = Labsval(nil, v17);
    nil = C_nil;
    if (exception_pending()) goto v26;
    v17 = stack[0];
    popv(4);
    return cons(v18, v17);

v25:
    v17 = v18;
    v17 = qcar(v17);
    v17 = qcar(v17);
    v19 = qcar(v17);
    v17 = stack[-1];
    v17 = Lmember(nil, v19, v17);
    if (v17 == nil) goto v27;
    v17 = v18;
    v17 = qcdr(v17);
    stack[-2] = v17;
    v17 = v18;
    v17 = qcar(v17);
    v19 = qcdr(v17);
    v18 = stack[-1];
    v17 = stack[0];
    v17 = CC_splitKwrtKvariables(env, 3, v19, v18, v17);
    nil = C_nil;
    if (exception_pending()) goto v26;
    env = stack[-3];
    stack[0] = v17;
    v17 = stack[-2];
    v18 = v17;
    goto v20;

v27:
    v17 = stack[0];
    popv(4);
    return cons(v18, v17);

v23:
    v17 = qvalue(elt(env, 2)); /* t */
    goto v24;

v21:
    v17 = qvalue(elt(env, 1)); /* nil */
    goto v22;
/* error exit handlers */
v26:
    popv(4);
    return nil;
}



/* Code for dp!=replus */

static Lisp_Object CC_dpMreplus(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v30, v31;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dp=replus");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v31 = v0;
/* end of prologue */
    v30 = v31;
    if (!consp(v30)) return onevalue(v31);
    v30 = v31;
    v30 = qcdr(v30);
    if (v30 == nil) goto v32;
    v30 = elt(env, 1); /* plus */
    return cons(v30, v31);

v32:
    v30 = v31;
    v30 = qcar(v30);
    return onevalue(v30);
}



/* Code for pst_equitable */

static Lisp_Object CC_pst_equitable(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v27, v42;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pst_equitable");
#endif
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
    v42 = v0;
/* end of prologue */
    v27 = v42;
    v27 = qcdr(v27);
    if (v27 == nil) { popv(4); return onevalue(v42); }
    v27 = v42;
    v27 = qcar(v27);
    stack[-1] = v27;
    v27 = v42;
    v27 = qcdr(v27);
    fn = elt(env, 1); /* pst_reduce */
    v27 = (*qfn1(fn))(qenv(fn), v27);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-3];
    stack[-2] = v27;
    stack[0] = stack[-2];
    v42 = stack[-1];
    v27 = stack[-2];
    v27 = qcar(v27);
    v27 = Lappend(nil, v42, v27);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-3];
    v27 = Lrplaca(nil, stack[0], v27);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-3];
    goto v24;

v24:
    v27 = stack[-2];
    v27 = qcar(v27);
    stack[-1] = v27;
    stack[0] = stack[-1];
    v42 = stack[-1];
    v27 = stack[-2];
    v27 = qcdr(v27);
    fn = elt(env, 2); /* pst_equitable1 */
    v27 = (*qfn2(fn))(qenv(fn), v42, v27);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-3];
    v27 = cons(stack[0], v27);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-3];
    stack[-2] = v27;
    v27 = stack[-2];
    v27 = qcdr(v27);
    fn = elt(env, 1); /* pst_reduce */
    v27 = (*qfn1(fn))(qenv(fn), v27);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-3];
    stack[0] = v27;
    v27 = stack[0];
    v27 = qcar(v27);
    if (v27 == nil) goto v43;
    v42 = stack[-1];
    v27 = stack[0];
    v27 = qcar(v27);
    v42 = Lappend(nil, v42, v27);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-3];
    v27 = stack[0];
    v27 = qcdr(v27);
    v27 = cons(v42, v27);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-3];
    stack[-2] = v27;
    goto v43;

v43:
    v27 = stack[0];
    v27 = qcar(v27);
    stack[0] = v27;
    v27 = stack[0];
    if (v27 == nil) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    else goto v24;
/* error exit handlers */
v17:
    popv(4);
    return nil;
}



/* Code for sqlessp */

static Lisp_Object CC_sqlessp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v48, v49, v25;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for sqlessp");
#endif
    if (stack >= stacklimit)
    {
        push2(v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v1);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v1;
    v48 = v0;
/* end of prologue */
    stack[-1] = v48;
    v48 = stack[0];
    v48 = qcar(v48);
    fn = elt(env, 3); /* negf */
    v49 = (*qfn1(fn))(qenv(fn), v48);
    nil = C_nil;
    if (exception_pending()) goto v50;
    env = stack[-2];
    v48 = stack[0];
    v48 = qcdr(v48);
    v48 = cons(v49, v48);
    nil = C_nil;
    if (exception_pending()) goto v50;
    env = stack[-2];
    fn = elt(env, 4); /* addsq */
    v48 = (*qfn2(fn))(qenv(fn), stack[-1], v48);
    nil = C_nil;
    if (exception_pending()) goto v50;
    env = stack[-2];
    v48 = qcar(v48);
    v25 = v48;
    v48 = v25;
    if (v48 == nil) goto v31;
    v48 = v25;
    if (!consp(v48)) goto v51;
    v48 = v25;
    v49 = qcar(v48);
    v48 = elt(env, 2); /* minusp */
    v48 = get(v49, v48);
    v49 = v25;
        popv(3);
        return Lapply1(nil, v48, v49);

v51:
    v48 = v25;
        popv(3);
        return Lminusp(nil, v48);

v31:
    v48 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v48); }
/* error exit handlers */
v50:
    popv(3);
    return nil;
}



/* Code for gcd!-with!-number */

static Lisp_Object CC_gcdKwithKnumber(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v58, v27, v42;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gcd-with-number");
#endif
    if (stack >= stacklimit)
    {
        push2(v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v1);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v1;
    v27 = v0;
/* end of prologue */

v59:
    v42 = v27;
    v58 = (Lisp_Object)17; /* 1 */
    if (v42 == v58) goto v60;
    v58 = v27;
    if (!consp(v58)) goto v51;
    v58 = qvalue(elt(env, 1)); /* t */
    goto v61;

v61:
    if (v58 == nil) goto v45;
    v58 = (Lisp_Object)17; /* 1 */
    { popv(2); return onevalue(v58); }

v45:
    v58 = stack[0];
    if (!consp(v58)) goto v62;
    v58 = stack[0];
    v58 = qcar(v58);
    v58 = (consp(v58) ? nil : lisp_true);
    goto v63;

v63:
    if (v58 == nil) goto v64;
    v58 = stack[0];
    if (v58 == nil) goto v48;
    v58 = stack[0];
    if (!consp(v58)) goto v65;
    v58 = (Lisp_Object)17; /* 1 */
    { popv(2); return onevalue(v58); }

v65:
    v58 = stack[0];
    {
        popv(2);
        fn = elt(env, 4); /* gcddd */
        return (*qfn2(fn))(qenv(fn), v27, v58);
    }

v48:
    v58 = v27;
        popv(2);
        return Labsval(nil, v58);

v64:
    v58 = stack[0];
    v58 = qcar(v58);
    v58 = qcdr(v58);
    v58 = CC_gcdKwithKnumber(env, v27, v58);
    nil = C_nil;
    if (exception_pending()) goto v4;
    env = stack[-1];
    v27 = v58;
    v58 = stack[0];
    v58 = qcdr(v58);
    stack[0] = v58;
    goto v59;

v62:
    v58 = qvalue(elt(env, 1)); /* t */
    goto v63;

v51:
    v42 = qvalue(elt(env, 2)); /* dmode!* */
    v58 = elt(env, 3); /* field */
    v58 = Lflagp(nil, v42, v58);
    env = stack[-1];
    goto v61;

v60:
    v58 = qvalue(elt(env, 1)); /* t */
    goto v61;
/* error exit handlers */
v4:
    popv(2);
    return nil;
}



/* Code for pasf_or */

static Lisp_Object CC_pasf_or(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v126, v127;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pasf_or");
#endif
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
    v127 = stack[0];
    v126 = elt(env, 1); /* true */
    if (v127 == v126) goto v128;
    v127 = stack[0];
    v126 = elt(env, 3); /* false */
    v126 = (v127 == v126 ? lisp_true : nil);
    goto v59;

v59:
    if (v126 == nil) goto v129;
    v126 = qvalue(elt(env, 2)); /* t */
    goto v46;

v46:
    if (!(v126 == nil)) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v126 = stack[0];
    v126 = qcdr(v126);
    v126 = qcar(v126);
    fn = elt(env, 10); /* pasf_deci */
    v126 = (*qfn1(fn))(qenv(fn), v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    stack[-1] = v126;
    v127 = stack[0];
    v126 = elt(env, 1); /* true */
    if (v127 == v126) goto v131;
    v127 = stack[0];
    v126 = elt(env, 3); /* false */
    v126 = (v127 == v126 ? lisp_true : nil);
    goto v132;

v132:
    if (v126 == nil) goto v133;
    v126 = stack[0];
    v127 = v126;
    goto v134;

v134:
    v126 = elt(env, 5); /* lessp */
    if (v127 == v126) goto v135;
    v126 = qvalue(elt(env, 6)); /* nil */
    goto v17;

v17:
    if (v126 == nil) goto v136;
    stack[-1] = elt(env, 7); /* leq */
    v126 = stack[0];
    v126 = qcdr(v126);
    stack[0] = qcar(v126);
    v126 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 11); /* simp */
    v126 = (*qfn1(fn))(qenv(fn), v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    v126 = qcar(v126);
    fn = elt(env, 12); /* addf */
    v126 = (*qfn2(fn))(qenv(fn), stack[0], v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    v127 = qvalue(elt(env, 6)); /* nil */
    {
        Lisp_Object v137 = stack[-1];
        popv(3);
        return list3(v137, v126, v127);
    }

v136:
    v127 = stack[0];
    v126 = elt(env, 1); /* true */
    if (v127 == v126) goto v138;
    v127 = stack[0];
    v126 = elt(env, 3); /* false */
    v126 = (v127 == v126 ? lisp_true : nil);
    goto v139;

v139:
    if (v126 == nil) goto v140;
    v126 = stack[0];
    v127 = v126;
    goto v141;

v141:
    v126 = elt(env, 7); /* leq */
    if (v127 == v126) goto v142;
    v126 = qvalue(elt(env, 6)); /* nil */
    goto v143;

v143:
    if (v126 == nil) goto v144;
    stack[-1] = elt(env, 5); /* lessp */
    v126 = stack[0];
    v126 = qcdr(v126);
    stack[0] = qcar(v126);
    v126 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 11); /* simp */
    v126 = (*qfn1(fn))(qenv(fn), v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    v126 = qcar(v126);
    fn = elt(env, 13); /* negf */
    v126 = (*qfn1(fn))(qenv(fn), v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    fn = elt(env, 12); /* addf */
    v126 = (*qfn2(fn))(qenv(fn), stack[0], v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    v127 = qvalue(elt(env, 6)); /* nil */
    {
        Lisp_Object v145 = stack[-1];
        popv(3);
        return list3(v145, v126, v127);
    }

v144:
    v127 = stack[0];
    v126 = elt(env, 1); /* true */
    if (v127 == v126) goto v146;
    v127 = stack[0];
    v126 = elt(env, 3); /* false */
    v126 = (v127 == v126 ? lisp_true : nil);
    goto v147;

v147:
    if (v126 == nil) goto v148;
    v126 = stack[0];
    v127 = v126;
    goto v149;

v149:
    v126 = elt(env, 8); /* greaterp */
    if (v127 == v126) goto v150;
    v126 = qvalue(elt(env, 6)); /* nil */
    goto v151;

v151:
    if (v126 == nil) goto v152;
    stack[-1] = elt(env, 9); /* geq */
    v126 = stack[0];
    v126 = qcdr(v126);
    stack[0] = qcar(v126);
    v126 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 11); /* simp */
    v126 = (*qfn1(fn))(qenv(fn), v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    v126 = qcar(v126);
    fn = elt(env, 13); /* negf */
    v126 = (*qfn1(fn))(qenv(fn), v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    fn = elt(env, 12); /* addf */
    v126 = (*qfn2(fn))(qenv(fn), stack[0], v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    v127 = qvalue(elt(env, 6)); /* nil */
    {
        Lisp_Object v153 = stack[-1];
        popv(3);
        return list3(v153, v126, v127);
    }

v152:
    v127 = stack[0];
    v126 = elt(env, 1); /* true */
    if (v127 == v126) goto v154;
    v127 = stack[0];
    v126 = elt(env, 3); /* false */
    v126 = (v127 == v126 ? lisp_true : nil);
    goto v155;

v155:
    if (v126 == nil) goto v156;
    v126 = stack[0];
    v127 = v126;
    goto v157;

v157:
    v126 = elt(env, 9); /* geq */
    if (v127 == v126) goto v158;
    v126 = qvalue(elt(env, 6)); /* nil */
    goto v159;

v159:
    if (v126 == nil) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    stack[-1] = elt(env, 8); /* greaterp */
    v126 = stack[0];
    v126 = qcdr(v126);
    stack[0] = qcar(v126);
    v126 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 11); /* simp */
    v126 = (*qfn1(fn))(qenv(fn), v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    v126 = qcar(v126);
    fn = elt(env, 12); /* addf */
    v126 = (*qfn2(fn))(qenv(fn), stack[0], v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    v127 = qvalue(elt(env, 6)); /* nil */
    {
        Lisp_Object v160 = stack[-1];
        popv(3);
        return list3(v160, v126, v127);
    }

v158:
    v126 = stack[-1];
    v127 = qcdr(v126);
    v126 = (Lisp_Object)1; /* 0 */
    v126 = (Lisp_Object)lessp2(v127, v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    v126 = v126 ? lisp_true : nil;
    env = stack[-2];
    goto v159;

v156:
    v126 = stack[0];
    v126 = qcar(v126);
    v126 = Lconsp(nil, v126);
    env = stack[-2];
    if (v126 == nil) goto v161;
    v126 = stack[0];
    v126 = qcar(v126);
    v126 = qcar(v126);
    v127 = v126;
    goto v157;

v161:
    v126 = stack[0];
    v126 = qcar(v126);
    v127 = v126;
    goto v157;

v154:
    v126 = qvalue(elt(env, 2)); /* t */
    goto v155;

v150:
    v126 = stack[-1];
    v127 = qcdr(v126);
    v126 = (Lisp_Object)1; /* 0 */
    v126 = (Lisp_Object)greaterp2(v127, v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    v126 = v126 ? lisp_true : nil;
    env = stack[-2];
    goto v151;

v148:
    v126 = stack[0];
    v126 = qcar(v126);
    v126 = Lconsp(nil, v126);
    env = stack[-2];
    if (v126 == nil) goto v162;
    v126 = stack[0];
    v126 = qcar(v126);
    v126 = qcar(v126);
    v127 = v126;
    goto v149;

v162:
    v126 = stack[0];
    v126 = qcar(v126);
    v127 = v126;
    goto v149;

v146:
    v126 = qvalue(elt(env, 2)); /* t */
    goto v147;

v142:
    v126 = stack[-1];
    v127 = qcdr(v126);
    v126 = (Lisp_Object)1; /* 0 */
    v126 = (Lisp_Object)greaterp2(v127, v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    v126 = v126 ? lisp_true : nil;
    env = stack[-2];
    goto v143;

v140:
    v126 = stack[0];
    v126 = qcar(v126);
    v126 = Lconsp(nil, v126);
    env = stack[-2];
    if (v126 == nil) goto v163;
    v126 = stack[0];
    v126 = qcar(v126);
    v126 = qcar(v126);
    v127 = v126;
    goto v141;

v163:
    v126 = stack[0];
    v126 = qcar(v126);
    v127 = v126;
    goto v141;

v138:
    v126 = qvalue(elt(env, 2)); /* t */
    goto v139;

v135:
    v126 = stack[-1];
    v127 = qcdr(v126);
    v126 = (Lisp_Object)1; /* 0 */
    v126 = (Lisp_Object)lessp2(v127, v126);
    nil = C_nil;
    if (exception_pending()) goto v130;
    v126 = v126 ? lisp_true : nil;
    env = stack[-2];
    goto v17;

v133:
    v126 = stack[0];
    v126 = qcar(v126);
    v126 = Lconsp(nil, v126);
    env = stack[-2];
    if (v126 == nil) goto v164;
    v126 = stack[0];
    v126 = qcar(v126);
    v126 = qcar(v126);
    v127 = v126;
    goto v134;

v164:
    v126 = stack[0];
    v126 = qcar(v126);
    v127 = v126;
    goto v134;

v131:
    v126 = qvalue(elt(env, 2)); /* t */
    goto v132;

v129:
    v127 = stack[0];
    v126 = elt(env, 1); /* true */
    if (v127 == v126) goto v165;
    v127 = stack[0];
    v126 = elt(env, 3); /* false */
    v126 = (v127 == v126 ? lisp_true : nil);
    goto v166;

v166:
    if (v126 == nil) goto v37;
    v126 = stack[0];
    v127 = v126;
    goto v167;

v167:
    v126 = elt(env, 4); /* (lessp greaterp leq geq) */
    v126 = Lmemq(nil, v127, v126);
    v126 = (v126 == nil ? lisp_true : nil);
    goto v46;

v37:
    v126 = stack[0];
    v126 = qcar(v126);
    v126 = Lconsp(nil, v126);
    env = stack[-2];
    if (v126 == nil) goto v168;
    v126 = stack[0];
    v126 = qcar(v126);
    v126 = qcar(v126);
    v127 = v126;
    goto v167;

v168:
    v126 = stack[0];
    v126 = qcar(v126);
    v127 = v126;
    goto v167;

v165:
    v126 = qvalue(elt(env, 2)); /* t */
    goto v166;

v128:
    v126 = qvalue(elt(env, 2)); /* t */
    goto v59;
/* error exit handlers */
v130:
    popv(3);
    return nil;
}



/* Code for dip_f2dip1 */

static Lisp_Object MS_CDECL CC_dip_f2dip1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v174, v175, v52, v176, v177;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "dip_f2dip1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dip_f2dip1");
#endif
    if (stack >= stacklimit)
    {
        push3(v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v2);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v2;
    stack[-1] = v1;
    stack[-2] = v0;
/* end of prologue */
    v174 = stack[-2];
    if (v174 == nil) goto v178;
    v174 = stack[-2];
    if (!consp(v174)) goto v59;
    v174 = stack[-2];
    v174 = qcar(v174);
    v174 = (consp(v174) ? nil : lisp_true);
    goto v125;

v125:
    if (v174 == nil) goto v166;
    v174 = stack[-2];
    fn = elt(env, 3); /* bc_fd */
    v174 = (*qfn1(fn))(qenv(fn), v174);
    nil = C_nil;
    if (exception_pending()) goto v4;
    env = stack[-4];
    fn = elt(env, 4); /* bc_prod */
    v175 = (*qfn2(fn))(qenv(fn), stack[0], v174);
    nil = C_nil;
    if (exception_pending()) goto v4;
    env = stack[-4];
    v174 = stack[-1];
    {
        popv(5);
        fn = elt(env, 5); /* dip_fmon */
        return (*qfn2(fn))(qenv(fn), v175, v174);
    }

v166:
    v174 = stack[-2];
    v174 = qcar(v174);
    v174 = qcar(v174);
    v177 = qcar(v174);
    v174 = stack[-2];
    v174 = qcar(v174);
    v174 = qcar(v174);
    v176 = qcdr(v174);
    v174 = stack[-2];
    v174 = qcar(v174);
    v52 = qcdr(v174);
    v175 = stack[-1];
    v174 = stack[0];
    fn = elt(env, 6); /* dip_f2dip2 */
    stack[-3] = (*qfnn(fn))(qenv(fn), 5, v177, v176, v52, v175, v174);
    nil = C_nil;
    if (exception_pending()) goto v4;
    env = stack[-4];
    v174 = stack[-2];
    v52 = qcdr(v174);
    v175 = stack[-1];
    v174 = stack[0];
    v174 = CC_dip_f2dip1(env, 3, v52, v175, v174);
    nil = C_nil;
    if (exception_pending()) goto v4;
    env = stack[-4];
    {
        Lisp_Object v3 = stack[-3];
        popv(5);
        fn = elt(env, 7); /* dip_sum */
        return (*qfn2(fn))(qenv(fn), v3, v174);
    }

v59:
    v174 = qvalue(elt(env, 2)); /* t */
    goto v125;

v178:
    v174 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v174); }
/* error exit handlers */
v4:
    popv(5);
    return nil;
}



/* Code for rnfix!* */

static Lisp_Object CC_rnfixH(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v59, v128;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rnfix*");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v59 = v0;
/* end of prologue */
    v128 = v59;
    v128 = qcdr(v128);
    v128 = qcar(v128);
    v59 = qcdr(v59);
    v59 = qcdr(v59);
    return quot2(v128, v59);
}



/* Code for ldf!-all!-var */

static Lisp_Object CC_ldfKallKvar(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v22;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ldf-all-var");
#endif
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
    v22 = stack[-1];
    fn = elt(env, 1); /* ldf!-dep!-var */
    stack[-2] = (*qfn1(fn))(qenv(fn), v22);
    nil = C_nil;
    if (exception_pending()) goto v179;
    env = stack[-3];
    v22 = stack[-1];
    fn = elt(env, 2); /* ldf!-pow!-var */
    stack[0] = (*qfn1(fn))(qenv(fn), v22);
    nil = C_nil;
    if (exception_pending()) goto v179;
    env = stack[-3];
    v22 = stack[-1];
    fn = elt(env, 3); /* ldf!-spf!-var */
    v22 = (*qfn1(fn))(qenv(fn), v22);
    nil = C_nil;
    if (exception_pending()) goto v179;
    env = stack[-3];
    fn = elt(env, 4); /* appends */
    v22 = (*qfnn(fn))(qenv(fn), 3, stack[-2], stack[0], v22);
    nil = C_nil;
    if (exception_pending()) goto v179;
    env = stack[-3];
    {
        popv(4);
        fn = elt(env, 5); /* makeset */
        return (*qfn1(fn))(qenv(fn), v22);
    }
/* error exit handlers */
v179:
    popv(4);
    return nil;
}



/* Code for formoptimize1 */

static Lisp_Object MS_CDECL CC_formoptimize1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v219, v220, v221;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "formoptimize1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for formoptimize1");
#endif
    if (stack >= stacklimit)
    {
        push3(v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v2);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-6] = v2;
    stack[-7] = v1;
    stack[-1] = v0;
/* end of prologue */

v222:
    v219 = stack[-1];
    fn = elt(env, 12); /* constp */
    v219 = (*qfn1(fn))(qenv(fn), v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    if (v219 == nil) goto v20;
    v219 = stack[-1];
        popv(10);
        return Lmkquote(nil, v219);

v20:
    v219 = stack[-1];
    if (!consp(v219)) goto v60;
    v219 = stack[-1];
    v220 = qcar(v219);
    v219 = elt(env, 1); /* (!:rd!: !:cr!: !:crn!: !:dn!:) */
    v219 = Lmember(nil, v220, v219);
    if (v219 == nil) goto v63;
    v219 = stack[-1];
    v219 = qcdr(v219);
    fn = elt(env, 13); /* chopchop */
    v219 = (*qfn1(fn))(qenv(fn), v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    stack[-1] = v219;
    v219 = stack[-1];
    v220 = qcar(v219);
    v219 = stack[-1];
    v219 = qcdr(v219);
    fn = elt(env, 14); /* decimal2internal */
    v219 = (*qfn2(fn))(qenv(fn), v220, v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
        popv(10);
        return Lmkquote(nil, v219);

v63:
    v219 = stack[-1];
    v220 = qcar(v219);
    v219 = elt(env, 2); /* !:int!: */
    if (v220 == v219) goto v223;
    v220 = stack[-1];
    v219 = elt(env, 3); /* eval */
    if (!consp(v220)) goto v17;
    v220 = qcar(v220);
    if (!(v220 == v219)) goto v17;
    stack[-2] = elt(env, 4); /* sq2pre */
    stack[0] = elt(env, 5); /* aeval */
    v219 = stack[-1];
    v219 = qcdr(v219);
    v221 = qcar(v219);
    v220 = stack[-7];
    v219 = stack[-6];
    fn = elt(env, 15); /* form1 */
    v219 = (*qfnn(fn))(qenv(fn), 3, v221, v220, v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    v219 = list2(stack[0], v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    {
        Lisp_Object v224 = stack[-2];
        popv(10);
        return list2(v224, v219);
    }

v17:
    v219 = stack[-1];
    v220 = qcar(v219);
    v219 = elt(env, 6); /* (lsetq rsetq lrsetq) */
    v219 = Lmemq(nil, v220, v219);
    if (v219 == nil) goto v225;
    v219 = stack[-1];
    v219 = qcar(v219);
    stack[-8] = v219;
    v219 = stack[-1];
    v219 = qcdr(v219);
    v219 = qcar(v219);
    stack[0] = v219;
    v219 = stack[-1];
    v219 = qcdr(v219);
    v219 = qcdr(v219);
    v219 = qcar(v219);
    stack[-5] = v219;
    v220 = stack[-8];
    v219 = elt(env, 7); /* (lsetq lrsetq) */
    v219 = Lmemq(nil, v220, v219);
    if (v219 == nil) goto v226;
    v219 = stack[0];
    fn = elt(env, 16); /* listp */
    v219 = (*qfn1(fn))(qenv(fn), v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    if (v219 == nil) goto v226;
    v219 = stack[0];
    stack[-4] = qcar(v219);
    v219 = stack[0];
    v219 = qcdr(v219);
    stack[-3] = v219;
    v219 = stack[-3];
    if (v219 == nil) goto v227;
    v219 = stack[-3];
    v219 = qcar(v219);
    v220 = elt(env, 3); /* eval */
    v219 = list2(v220, v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    v219 = ncons(v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    stack[-1] = v219;
    stack[-2] = v219;
    goto v228;

v228:
    v219 = stack[-3];
    v219 = qcdr(v219);
    stack[-3] = v219;
    v219 = stack[-3];
    if (v219 == nil) goto v114;
    stack[0] = stack[-1];
    v219 = stack[-3];
    v219 = qcar(v219);
    v220 = elt(env, 3); /* eval */
    v219 = list2(v220, v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    v219 = ncons(v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    v219 = Lrplacd(nil, stack[0], v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    v219 = stack[-1];
    v219 = qcdr(v219);
    stack[-1] = v219;
    goto v228;

v114:
    v219 = stack[-2];
    goto v164;

v164:
    v219 = cons(stack[-4], v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    stack[0] = v219;
    goto v226;

v226:
    v220 = stack[-8];
    v219 = elt(env, 9); /* (rsetq lrsetq) */
    v219 = Lmemq(nil, v220, v219);
    if (v219 == nil) goto v229;
    v220 = elt(env, 3); /* eval */
    v219 = stack[-5];
    v219 = list2(v220, v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    stack[-5] = v219;
    goto v229;

v229:
    v221 = elt(env, 10); /* setq */
    v220 = stack[0];
    v219 = stack[-5];
    v221 = list3(v221, v220, v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    v220 = stack[-7];
    v219 = stack[-6];
    stack[-1] = v221;
    stack[-7] = v220;
    stack[-6] = v219;
    goto v222;

v227:
    v219 = qvalue(elt(env, 8)); /* nil */
    goto v164;

v225:
    stack[-4] = elt(env, 11); /* list */
    v219 = stack[-1];
    stack[-3] = v219;
    v219 = stack[-3];
    if (v219 == nil) goto v230;
    v219 = stack[-3];
    v219 = qcar(v219);
    v221 = v219;
    v220 = stack[-7];
    v219 = stack[-6];
    v219 = CC_formoptimize1(env, 3, v221, v220, v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    v219 = ncons(v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    stack[-1] = v219;
    stack[-2] = v219;
    goto v231;

v231:
    v219 = stack[-3];
    v219 = qcdr(v219);
    stack[-3] = v219;
    v219 = stack[-3];
    if (v219 == nil) goto v232;
    stack[0] = stack[-1];
    v219 = stack[-3];
    v219 = qcar(v219);
    v221 = v219;
    v220 = stack[-7];
    v219 = stack[-6];
    v219 = CC_formoptimize1(env, 3, v221, v220, v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    v219 = ncons(v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    v219 = Lrplacd(nil, stack[0], v219);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-9];
    v219 = stack[-1];
    v219 = qcdr(v219);
    stack[-1] = v219;
    goto v231;

v232:
    v219 = stack[-2];
    goto v233;

v233:
    {
        Lisp_Object v234 = stack[-4];
        popv(10);
        return cons(v234, v219);
    }

v230:
    v219 = qvalue(elt(env, 8)); /* nil */
    goto v233;

v223:
    v219 = stack[-1];
    v219 = qcdr(v219);
    v219 = qcar(v219);
        popv(10);
        return Lmkquote(nil, v219);

v60:
    v219 = stack[-1];
        popv(10);
        return Lmkquote(nil, v219);
/* error exit handlers */
v150:
    popv(10);
    return nil;
}



/* Code for test!-ideal */

static Lisp_Object CC_testKideal(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v171, v236, v215;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for test-ideal");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v215 = v0;
/* end of prologue */
    v236 = qvalue(elt(env, 1)); /* id!-vars!* */
    v171 = elt(env, 2); /* list */
    if (!consp(v236)) goto v128;
    v236 = qcar(v236);
    if (!(v236 == v171)) goto v128;
    v236 = v215;
    v171 = elt(env, 2); /* list */
    if (!consp(v236)) goto v63;
    v236 = qcar(v236);
    if (!(v236 == v171)) goto v63;
    v171 = elt(env, 4); /* i */
    v236 = v215;
    v236 = qcdr(v236);
    return cons(v171, v236);

v63:
    v236 = v215;
    v171 = elt(env, 4); /* i */
    if (!consp(v236)) goto v237;
    v236 = qcar(v236);
    if (v236 == v171) return onevalue(v215);
    else goto v237;

v237:
    v236 = v215;
    v171 = elt(env, 5); /* "polynomial ideal" */
    {
        fn = elt(env, 6); /* typerr */
        return (*qfn2(fn))(qenv(fn), v236, v171);
    }

v128:
    v236 = qvalue(elt(env, 1)); /* id!-vars!* */
    v171 = elt(env, 3); /* "ideal setting; set variables first" */
    {
        fn = elt(env, 6); /* typerr */
        return (*qfn2(fn))(qenv(fn), v236, v171);
    }
}



/* Code for rand!-mons!-dense */

static Lisp_Object MS_CDECL CC_randKmonsKdense(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v269, v79, v80;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "rand-mons-dense");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rand-mons-dense");
#endif
    if (stack >= stacklimit)
    {
        push3(v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v2);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-10] = v2;
    stack[-11] = v1;
    stack[-12] = v0;
/* end of prologue */
    v269 = stack[-12];
    v269 = qcar(v269);
    stack[-13] = v269;
    v269 = stack[-12];
    v269 = qcdr(v269);
    stack[-12] = v269;
    v269 = stack[-12];
    if (v269 == nil) goto v14;
    v80 = stack[-12];
    v79 = stack[-11];
    v269 = stack[-10];
    stack[-9] = CC_randKmonsKdense(env, 3, v80, v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = (Lisp_Object)17; /* 1 */
    stack[-8] = v269;
    goto v271;

v271:
    v79 = stack[-11];
    v269 = stack[-8];
    v269 = difference2(v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = Lminusp(nil, v269);
    env = stack[-14];
    if (v269 == nil) goto v272;
    v269 = qvalue(elt(env, 1)); /* nil */
    goto v273;

v273:
    {
        Lisp_Object v274 = stack[-9];
        popv(15);
        return Lappend(nil, v274, v269);
    }

v272:
    v79 = stack[-13];
    v269 = stack[-8];
    fn = elt(env, 2); /* mksq */
    v269 = (*qfn2(fn))(qenv(fn), v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = qcar(v269);
    stack[-4] = v269;
    stack[-2] = stack[-12];
    v79 = stack[-11];
    v269 = stack[-8];
    stack[-1] = difference2(v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[0] = (Lisp_Object)1; /* 0 */
    v79 = stack[-10];
    v269 = stack[-8];
    v269 = difference2(v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    fn = elt(env, 3); /* max */
    v269 = (*qfn2(fn))(qenv(fn), stack[0], v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = CC_randKmonsKdense(env, 3, stack[-2], stack[-1], v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[-3] = v269;
    v269 = stack[-3];
    if (v269 == nil) goto v110;
    v269 = stack[-3];
    v269 = qcar(v269);
    v79 = stack[-4];
    fn = elt(env, 4); /* multf */
    v269 = (*qfn2(fn))(qenv(fn), v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = ncons(v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[-1] = v269;
    stack[-2] = v269;
    goto v275;

v275:
    v269 = stack[-3];
    v269 = qcdr(v269);
    stack[-3] = v269;
    v269 = stack[-3];
    if (v269 == nil) goto v276;
    stack[0] = stack[-1];
    v269 = stack[-3];
    v269 = qcar(v269);
    v79 = stack[-4];
    fn = elt(env, 4); /* multf */
    v269 = (*qfn2(fn))(qenv(fn), v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = ncons(v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = Lrplacd(nil, stack[0], v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = stack[-1];
    v269 = qcdr(v269);
    stack[-1] = v269;
    goto v275;

v276:
    v269 = stack[-2];
    goto v277;

v277:
    stack[-7] = v269;
    v269 = stack[-7];
    fn = elt(env, 5); /* lastpair */
    v269 = (*qfn1(fn))(qenv(fn), v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[-6] = v269;
    v269 = stack[-8];
    v269 = add1(v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[-8] = v269;
    v269 = stack[-6];
    if (!consp(v269)) goto v271;
    else goto v98;

v98:
    v79 = stack[-11];
    v269 = stack[-8];
    v269 = difference2(v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = Lminusp(nil, v269);
    env = stack[-14];
    if (v269 == nil) goto v189;
    v269 = stack[-7];
    goto v273;

v189:
    stack[-5] = stack[-6];
    v79 = stack[-13];
    v269 = stack[-8];
    fn = elt(env, 2); /* mksq */
    v269 = (*qfn2(fn))(qenv(fn), v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = qcar(v269);
    stack[-4] = v269;
    stack[-2] = stack[-12];
    v79 = stack[-11];
    v269 = stack[-8];
    stack[-1] = difference2(v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[0] = (Lisp_Object)1; /* 0 */
    v79 = stack[-10];
    v269 = stack[-8];
    v269 = difference2(v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    fn = elt(env, 3); /* max */
    v269 = (*qfn2(fn))(qenv(fn), stack[0], v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = CC_randKmonsKdense(env, 3, stack[-2], stack[-1], v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[-3] = v269;
    v269 = stack[-3];
    if (v269 == nil) goto v278;
    v269 = stack[-3];
    v269 = qcar(v269);
    v79 = stack[-4];
    fn = elt(env, 4); /* multf */
    v269 = (*qfn2(fn))(qenv(fn), v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = ncons(v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[-1] = v269;
    stack[-2] = v269;
    goto v279;

v279:
    v269 = stack[-3];
    v269 = qcdr(v269);
    stack[-3] = v269;
    v269 = stack[-3];
    if (v269 == nil) goto v280;
    stack[0] = stack[-1];
    v269 = stack[-3];
    v269 = qcar(v269);
    v79 = stack[-4];
    fn = elt(env, 4); /* multf */
    v269 = (*qfn2(fn))(qenv(fn), v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = ncons(v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = Lrplacd(nil, stack[0], v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = stack[-1];
    v269 = qcdr(v269);
    stack[-1] = v269;
    goto v279;

v280:
    v269 = stack[-2];
    goto v281;

v281:
    v269 = Lrplacd(nil, stack[-5], v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = stack[-6];
    fn = elt(env, 5); /* lastpair */
    v269 = (*qfn1(fn))(qenv(fn), v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[-6] = v269;
    v269 = stack[-8];
    v269 = add1(v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[-8] = v269;
    goto v98;

v278:
    v269 = qvalue(elt(env, 1)); /* nil */
    goto v281;

v110:
    v269 = qvalue(elt(env, 1)); /* nil */
    goto v277;

v14:
    v79 = stack[-10];
    v269 = (Lisp_Object)1; /* 0 */
    v269 = (Lisp_Object)greaterp2(v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    v269 = v269 ? lisp_true : nil;
    env = stack[-14];
    if (v269 == nil) goto v55;
    v79 = stack[-13];
    v269 = stack[-10];
    fn = elt(env, 2); /* mksq */
    v269 = (*qfn2(fn))(qenv(fn), v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = qcar(v269);
    stack[-3] = v269;
    goto v57;

v57:
    v269 = stack[-10];
    v269 = add1(v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[-4] = v269;
    v79 = stack[-11];
    v269 = stack[-4];
    v269 = difference2(v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = Lminusp(nil, v269);
    env = stack[-14];
    if (v269 == nil) goto v65;
    v269 = qvalue(elt(env, 1)); /* nil */
    goto v47;

v47:
    {
        Lisp_Object v282 = stack[-3];
        popv(15);
        return cons(v282, v269);
    }

v65:
    v79 = stack[-13];
    v269 = stack[-4];
    fn = elt(env, 2); /* mksq */
    v269 = (*qfn2(fn))(qenv(fn), v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = qcar(v269);
    v269 = ncons(v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[-1] = v269;
    stack[-2] = v269;
    goto v129;

v129:
    v269 = stack[-4];
    v269 = add1(v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    stack[-4] = v269;
    v79 = stack[-11];
    v269 = stack[-4];
    v269 = difference2(v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = Lminusp(nil, v269);
    env = stack[-14];
    if (v269 == nil) goto v17;
    v269 = stack[-2];
    goto v47;

v17:
    stack[0] = stack[-1];
    v79 = stack[-13];
    v269 = stack[-4];
    fn = elt(env, 2); /* mksq */
    v269 = (*qfn2(fn))(qenv(fn), v79, v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = qcar(v269);
    v269 = ncons(v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = Lrplacd(nil, stack[0], v269);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-14];
    v269 = stack[-1];
    v269 = qcdr(v269);
    stack[-1] = v269;
    goto v129;

v55:
    v269 = (Lisp_Object)17; /* 1 */
    stack[-3] = v269;
    goto v57;
/* error exit handlers */
v270:
    popv(15);
    return nil;
}



/* Code for gcdlist */

static Lisp_Object CC_gcdlist(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v362, v363, v364;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gcdlist");
#endif
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
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    v362 = stack[0];
    if (v362 == nil) goto v16;
    v362 = stack[0];
    v362 = qcdr(v362);
    if (v362 == nil) goto v32;
    v362 = stack[0];
    v362 = qcar(v362);
    if (!consp(v362)) goto v57;
    v362 = stack[0];
    v362 = qcar(v362);
    v362 = qcar(v362);
    v362 = (consp(v362) ? nil : lisp_true);
    goto v365;

v365:
    if (v362 == nil) goto v167;
    v362 = stack[0];
    v363 = qcdr(v362);
    v362 = stack[0];
    v362 = qcar(v362);
    {
        popv(15);
        fn = elt(env, 4); /* gcdld */
        return (*qfn2(fn))(qenv(fn), v363, v362);
    }

v167:
    stack[-1] = nil;
    goto v165;

v165:
    v362 = stack[0];
    if (v362 == nil) goto v166;
    v362 = stack[0];
    v362 = qcar(v362);
    if (v362 == nil) goto v25;
    v362 = stack[0];
    v362 = qcar(v362);
    if (!consp(v362)) goto v366;
    v362 = stack[0];
    v362 = qcar(v362);
    v362 = qcar(v362);
    v362 = (consp(v362) ? nil : lisp_true);
    goto v9;

v9:
    if (v362 == nil) goto v118;
    v362 = stack[0];
    stack[-2] = qcdr(v362);
    v362 = stack[-1];
    fn = elt(env, 5); /* mapcarcar */
    v363 = (*qfn1(fn))(qenv(fn), v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = stack[0];
    v362 = qcar(v362);
    fn = elt(env, 4); /* gcdld */
    v362 = (*qfn2(fn))(qenv(fn), v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    fn = elt(env, 4); /* gcdld */
    v362 = (*qfn2(fn))(qenv(fn), stack[-2], v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = ncons(v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = ncons(v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-1] = v362;
    v362 = qvalue(elt(env, 1)); /* nil */
    stack[0] = v362;
    goto v165;

v118:
    v362 = stack[0];
    stack[-2] = qcar(v362);
    v362 = stack[0];
    v362 = qcar(v362);
    fn = elt(env, 6); /* powers1 */
    v363 = (*qfn1(fn))(qenv(fn), v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = stack[-1];
    v362 = acons(stack[-2], v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-1] = v362;
    v362 = stack[0];
    v362 = qcdr(v362);
    stack[0] = v362;
    goto v165;

v366:
    v362 = qvalue(elt(env, 2)); /* t */
    goto v9;

v25:
    v362 = stack[0];
    v362 = qcdr(v362);
    stack[0] = v362;
    goto v165;

v166:
    v362 = stack[-1];
    if (v362 == nil) goto v368;
    v362 = stack[-1];
    v362 = qcdr(v362);
    if (v362 == nil) goto v369;
    v362 = qvalue(elt(env, 1)); /* nil */
    stack[-13] = v362;
    v362 = qvalue(elt(env, 1)); /* nil */
    stack[-12] = v362;
    v362 = stack[-1];
    stack[-11] = v362;
    v362 = stack[-11];
    if (v362 == nil) goto v206;
    v362 = stack[-11];
    v362 = qcar(v362);
    stack[-7] = v362;
    stack[-6] = nil;
    v362 = stack[-7];
    v362 = qcdr(v362);
    stack[-5] = v362;
    v362 = stack[-5];
    if (v362 == nil) goto v207;
    v362 = stack[-5];
    v362 = qcar(v362);
    stack[-1] = v362;
    v362 = stack[-1];
    v364 = qcar(v362);
    v362 = stack[-1];
    v362 = qcdr(v362);
    v363 = qcdr(v362);
    v362 = stack[-6];
    v362 = acons(v364, v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-6] = v362;
    v362 = stack[-1];
    stack[0] = qcar(v362);
    v362 = stack[-1];
    v362 = qcdr(v362);
    v363 = qcar(v362);
    v362 = stack[-1];
    v362 = qcdr(v362);
    v362 = qcdr(v362);
    v362 = difference2(v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = cons(stack[0], v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = ncons(v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-3] = v362;
    stack[-4] = v362;
    goto v264;

v264:
    v362 = stack[-5];
    v362 = qcdr(v362);
    stack[-5] = v362;
    v362 = stack[-5];
    if (v362 == nil) goto v370;
    stack[-2] = stack[-3];
    v362 = stack[-5];
    v362 = qcar(v362);
    stack[-1] = v362;
    v362 = stack[-1];
    v364 = qcar(v362);
    v362 = stack[-1];
    v362 = qcdr(v362);
    v363 = qcdr(v362);
    v362 = stack[-6];
    v362 = acons(v364, v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-6] = v362;
    v362 = stack[-1];
    stack[0] = qcar(v362);
    v362 = stack[-1];
    v362 = qcdr(v362);
    v363 = qcar(v362);
    v362 = stack[-1];
    v362 = qcdr(v362);
    v362 = qcdr(v362);
    v362 = difference2(v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = cons(stack[0], v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = ncons(v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = Lrplacd(nil, stack[-2], v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = stack[-3];
    v362 = qcdr(v362);
    stack[-3] = v362;
    goto v264;

v370:
    v362 = stack[-4];
    goto v263;

v263:
    stack[-1] = v362;
    v362 = stack[-7];
    v362 = qcar(v362);
    fn = elt(env, 7); /* numeric!-content */
    v362 = (*qfn1(fn))(qenv(fn), v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-2] = v362;
    v362 = stack[-12];
    if (v362 == nil) goto v371;
    v363 = stack[-13];
    v362 = stack[-6];
    fn = elt(env, 8); /* vintersection */
    v362 = (*qfn2(fn))(qenv(fn), v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-13] = v362;
    v363 = stack[-12];
    v362 = stack[-2];
    fn = elt(env, 9); /* gcddd */
    v362 = (*qfn2(fn))(qenv(fn), v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-12] = v362;
    goto v372;

v372:
    v362 = stack[-6];
    stack[-3] = v362;
    goto v279;

v279:
    v362 = stack[-3];
    if (v362 == nil) goto v83;
    v362 = stack[-3];
    v362 = qcar(v362);
    stack[0] = v362;
    v362 = stack[0];
    v363 = qcdr(v362);
    v362 = (Lisp_Object)1; /* 0 */
    if (v363 == v362) goto v373;
    v362 = stack[0];
    v362 = qcar(v362);
    fn = elt(env, 10); /* fkern */
    v363 = (*qfn1(fn))(qenv(fn), v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = stack[0];
    v362 = qcdr(v362);
    fn = elt(env, 11); /* getpower */
    v363 = (*qfn2(fn))(qenv(fn), v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = (Lisp_Object)17; /* 1 */
    v362 = cons(v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = ncons(v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    fn = elt(env, 12); /* multf */
    v362 = (*qfn2(fn))(qenv(fn), stack[-2], v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-2] = v362;
    goto v373;

v373:
    v362 = stack[-3];
    v362 = qcdr(v362);
    stack[-3] = v362;
    goto v279;

v83:
    v362 = stack[-7];
    v364 = qcar(v362);
    v363 = stack[-2];
    v362 = elt(env, 3); /* "Term content division failed" */
    fn = elt(env, 13); /* quotfail1 */
    v363 = (*qfnn(fn))(qenv(fn), 3, v364, v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = stack[-1];
    v362 = cons(v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = ncons(v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-9] = v362;
    stack[-10] = v362;
    goto v374;

v374:
    v362 = stack[-11];
    v362 = qcdr(v362);
    stack[-11] = v362;
    v362 = stack[-11];
    if (v362 == nil) goto v375;
    stack[-8] = stack[-9];
    v362 = stack[-11];
    v362 = qcar(v362);
    stack[-7] = v362;
    stack[-6] = nil;
    v362 = stack[-7];
    v362 = qcdr(v362);
    stack[-5] = v362;
    v362 = stack[-5];
    if (v362 == nil) goto v376;
    v362 = stack[-5];
    v362 = qcar(v362);
    stack[-1] = v362;
    v362 = stack[-1];
    v364 = qcar(v362);
    v362 = stack[-1];
    v362 = qcdr(v362);
    v363 = qcdr(v362);
    v362 = stack[-6];
    v362 = acons(v364, v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-6] = v362;
    v362 = stack[-1];
    stack[0] = qcar(v362);
    v362 = stack[-1];
    v362 = qcdr(v362);
    v363 = qcar(v362);
    v362 = stack[-1];
    v362 = qcdr(v362);
    v362 = qcdr(v362);
    v362 = difference2(v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = cons(stack[0], v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = ncons(v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-3] = v362;
    stack[-4] = v362;
    goto v377;

v377:
    v362 = stack[-5];
    v362 = qcdr(v362);
    stack[-5] = v362;
    v362 = stack[-5];
    if (v362 == nil) goto v378;
    stack[-2] = stack[-3];
    v362 = stack[-5];
    v362 = qcar(v362);
    stack[-1] = v362;
    v362 = stack[-1];
    v364 = qcar(v362);
    v362 = stack[-1];
    v362 = qcdr(v362);
    v363 = qcdr(v362);
    v362 = stack[-6];
    v362 = acons(v364, v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-6] = v362;
    v362 = stack[-1];
    stack[0] = qcar(v362);
    v362 = stack[-1];
    v362 = qcdr(v362);
    v363 = qcar(v362);
    v362 = stack[-1];
    v362 = qcdr(v362);
    v362 = qcdr(v362);
    v362 = difference2(v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = cons(stack[0], v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = ncons(v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = Lrplacd(nil, stack[-2], v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = stack[-3];
    v362 = qcdr(v362);
    stack[-3] = v362;
    goto v377;

v378:
    v362 = stack[-4];
    goto v379;

v379:
    stack[-1] = v362;
    v362 = stack[-7];
    v362 = qcar(v362);
    fn = elt(env, 7); /* numeric!-content */
    v362 = (*qfn1(fn))(qenv(fn), v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-2] = v362;
    v362 = stack[-12];
    if (v362 == nil) goto v380;
    v363 = stack[-13];
    v362 = stack[-6];
    fn = elt(env, 8); /* vintersection */
    v362 = (*qfn2(fn))(qenv(fn), v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-13] = v362;
    v363 = stack[-12];
    v362 = stack[-2];
    fn = elt(env, 9); /* gcddd */
    v362 = (*qfn2(fn))(qenv(fn), v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-12] = v362;
    goto v381;

v381:
    v362 = stack[-6];
    stack[-3] = v362;
    goto v382;

v382:
    v362 = stack[-3];
    if (v362 == nil) goto v383;
    v362 = stack[-3];
    v362 = qcar(v362);
    stack[0] = v362;
    v362 = stack[0];
    v363 = qcdr(v362);
    v362 = (Lisp_Object)1; /* 0 */
    if (v363 == v362) goto v384;
    v362 = stack[0];
    v362 = qcar(v362);
    fn = elt(env, 10); /* fkern */
    v363 = (*qfn1(fn))(qenv(fn), v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = stack[0];
    v362 = qcdr(v362);
    fn = elt(env, 11); /* getpower */
    v363 = (*qfn2(fn))(qenv(fn), v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = (Lisp_Object)17; /* 1 */
    v362 = cons(v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = ncons(v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    fn = elt(env, 12); /* multf */
    v362 = (*qfn2(fn))(qenv(fn), stack[-2], v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-2] = v362;
    goto v384;

v384:
    v362 = stack[-3];
    v362 = qcdr(v362);
    stack[-3] = v362;
    goto v382;

v383:
    v362 = stack[-7];
    v364 = qcar(v362);
    v363 = stack[-2];
    v362 = elt(env, 3); /* "Term content division failed" */
    fn = elt(env, 13); /* quotfail1 */
    v363 = (*qfnn(fn))(qenv(fn), 3, v364, v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = stack[-1];
    v362 = cons(v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = ncons(v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = Lrplacd(nil, stack[-8], v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = stack[-9];
    v362 = qcdr(v362);
    stack[-9] = v362;
    goto v374;

v380:
    v362 = stack[-6];
    stack[-13] = v362;
    v362 = stack[-2];
    stack[-12] = v362;
    goto v381;

v376:
    v362 = qvalue(elt(env, 1)); /* nil */
    goto v379;

v375:
    v362 = stack[-10];
    goto v164;

v164:
    stack[0] = v362;
    v362 = stack[-13];
    stack[-2] = v362;
    goto v385;

v385:
    v362 = stack[-2];
    if (v362 == nil) goto v386;
    v362 = stack[-2];
    v362 = qcar(v362);
    stack[-1] = v362;
    stack[-3] = stack[-12];
    v362 = stack[-1];
    v362 = qcar(v362);
    fn = elt(env, 10); /* fkern */
    v363 = (*qfn1(fn))(qenv(fn), v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = stack[-1];
    v362 = qcdr(v362);
    fn = elt(env, 11); /* getpower */
    v363 = (*qfn2(fn))(qenv(fn), v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = (Lisp_Object)17; /* 1 */
    v362 = cons(v363, v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    v362 = ncons(v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    fn = elt(env, 12); /* multf */
    v362 = (*qfn2(fn))(qenv(fn), stack[-3], v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    stack[-12] = v362;
    v362 = stack[-2];
    v362 = qcdr(v362);
    stack[-2] = v362;
    goto v385;

v386:
    stack[-1] = stack[-12];
    v362 = stack[0];
    fn = elt(env, 14); /* gcdlist1 */
    v362 = (*qfn1(fn))(qenv(fn), v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    fn = elt(env, 12); /* multf */
    v362 = (*qfn2(fn))(qenv(fn), stack[-1], v362);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-14];
    {
        popv(15);
        fn = elt(env, 15); /* poly!-abs */
        return (*qfn1(fn))(qenv(fn), v362);
    }

v371:
    v362 = stack[-6];
    stack[-13] = v362;
    v362 = stack[-2];
    stack[-12] = v362;
    goto v372;

v207:
    v362 = qvalue(elt(env, 1)); /* nil */
    goto v263;

v206:
    v362 = qvalue(elt(env, 1)); /* nil */
    goto v164;

v369:
    v362 = stack[-1];
    v362 = qcar(v362);
    v362 = qcar(v362);
    {
        popv(15);
        fn = elt(env, 15); /* poly!-abs */
        return (*qfn1(fn))(qenv(fn), v362);
    }

v368:
    v362 = qvalue(elt(env, 1)); /* nil */
    { popv(15); return onevalue(v362); }

v57:
    v362 = qvalue(elt(env, 2)); /* t */
    goto v365;

v32:
    v362 = stack[0];
    v362 = qcar(v362);
    {
        popv(15);
        fn = elt(env, 15); /* poly!-abs */
        return (*qfn1(fn))(qenv(fn), v362);
    }

v16:
    v362 = qvalue(elt(env, 1)); /* nil */
    { popv(15); return onevalue(v362); }
/* error exit handlers */
v367:
    popv(15);
    return nil;
}



/* Code for calc_world */

static Lisp_Object CC_calc_world(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v215, v214;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for calc_world");
#endif
    if (stack >= stacklimit)
    {
        push2(v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v1);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v1;
    stack[-2] = v0;
/* end of prologue */
    stack[0] = stack[-1];
    v215 = stack[-2];
    fn = elt(env, 1); /* s_world_names */
    v215 = (*qfn1(fn))(qenv(fn), v215);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-4];
    fn = elt(env, 2); /* actual_alst */
    v215 = (*qfn2(fn))(qenv(fn), stack[0], v215);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-4];
    stack[-1] = v215;
    v215 = stack[-2];
    v215 = qcdr(v215);
    v215 = qcar(v215);
    stack[0] = v215;
    v214 = stack[-1];
    v215 = stack[0];
    v215 = qcdr(v215);
    v215 = Lassoc(nil, v214, v215);
    stack[-3] = v215;
    v215 = stack[-3];
    if (v215 == nil) goto v24;
    v215 = stack[-3];
    v215 = qcdr(v215);
    { popv(5); return onevalue(v215); }

v24:
    v215 = stack[-2];
    v215 = qcdr(v215);
    v215 = qcdr(v215);
    v214 = qcar(v215);
    v215 = stack[-1];
    fn = elt(env, 3); /* calc_atlas */
    v215 = (*qfn2(fn))(qenv(fn), v214, v215);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-4];
    fn = elt(env, 4); /* reval */
    v215 = (*qfn1(fn))(qenv(fn), v215);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-4];
    stack[-3] = v215;
    v214 = stack[-1];
    v215 = stack[-3];
    v215 = cons(v214, v215);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-4];
    v215 = ncons(v215);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-4];
    v215 = Lnconc(nil, stack[0], v215);
    nil = C_nil;
    if (exception_pending()) goto v65;
    { Lisp_Object res = stack[-3]; popv(5); return onevalue(res); }
/* error exit handlers */
v65:
    popv(5);
    return nil;
}



/* Code for makemainvar */

static Lisp_Object CC_makemainvar(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v54, v267, v268;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for makemainvar");
#endif
    if (stack >= stacklimit)
    {
        push2(v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v1);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v1;
    stack[-1] = v0;
/* end of prologue */
    v54 = stack[-1];
    if (!consp(v54)) goto v45;
    v54 = stack[-1];
    v54 = qcar(v54);
    v54 = (consp(v54) ? nil : lisp_true);
    goto v32;

v32:
    if (!(v54 == nil)) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v267 = stack[0];
    v54 = stack[-1];
    v54 = qcar(v54);
    v54 = qcar(v54);
    v54 = qcar(v54);
    if (equal(v267, v54)) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v54 = stack[-1];
    v54 = qcar(v54);
    v267 = qcdr(v54);
    v54 = stack[0];
    v268 = CC_makemainvar(env, v267, v54);
    nil = C_nil;
    if (exception_pending()) goto v64;
    env = stack[-3];
    v54 = stack[-1];
    v54 = qcar(v54);
    v267 = qcar(v54);
    v54 = stack[0];
    fn = elt(env, 2); /* mulcoeffsby */
    stack[-2] = (*qfnn(fn))(qenv(fn), 3, v268, v267, v54);
    nil = C_nil;
    if (exception_pending()) goto v64;
    env = stack[-3];
    v54 = stack[-1];
    v267 = qcdr(v54);
    v54 = stack[0];
    v267 = CC_makemainvar(env, v267, v54);
    nil = C_nil;
    if (exception_pending()) goto v64;
    env = stack[-3];
    v54 = stack[0];
    {
        Lisp_Object v7 = stack[-2];
        popv(4);
        fn = elt(env, 3); /* mergeadd */
        return (*qfnn(fn))(qenv(fn), 3, v7, v267, v54);
    }

v45:
    v54 = qvalue(elt(env, 1)); /* t */
    goto v32;
/* error exit handlers */
v64:
    popv(4);
    return nil;
}



/* Code for dvfsf_susitf */

static Lisp_Object CC_dvfsf_susitf(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object v16, v388;
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dvfsf_susitf");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v16 = v1;
    v388 = v0;
/* end of prologue */
    return onevalue(v388);
}



/* Code for put!-avalue */

static Lisp_Object MS_CDECL CC_putKavalue(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v356, v355, v209, v263, v264;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "put-avalue");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for put-avalue");
#endif
    if (stack >= stacklimit)
    {
        push3(v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v2);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v2;
    stack[-2] = v1;
    stack[0] = v0;
/* end of prologue */
    v355 = stack[-2];
    v356 = elt(env, 1); /* scalar */
    if (v355 == v356) goto v30;
    v355 = stack[0];
    v356 = stack[-1];
    fn = elt(env, 9); /* smember */
    v356 = (*qfn2(fn))(qenv(fn), v355, v356);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-4];
    if (v356 == nil) goto v392;
    v264 = qvalue(elt(env, 3)); /* nil */
    v263 = stack[0];
    v209 = elt(env, 4); /* "improperly defined in terms of itself" */
    v355 = qvalue(elt(env, 3)); /* nil */
    v356 = qvalue(elt(env, 5)); /* t */
    {
        popv(5);
        fn = elt(env, 10); /* msgpri */
        return (*qfnn(fn))(qenv(fn), 5, v264, v263, v209, v355, v356);
    }

v392:
    stack[-3] = stack[0];
    stack[0] = elt(env, 8); /* avalue */
    v355 = stack[-2];
    v356 = stack[-1];
    v356 = list2(v355, v356);
    nil = C_nil;
    if (exception_pending()) goto v207;
    {
        Lisp_Object v208 = stack[-3];
        Lisp_Object v277 = stack[0];
        popv(5);
        return Lputprop(nil, 3, v208, v277, v356);
    }

v30:
    v355 = stack[-1];
    v356 = elt(env, 2); /* !*sq */
    if (!consp(v355)) goto v48;
    v355 = qcar(v355);
    if (!(v355 == v356)) goto v48;
    v355 = stack[0];
    v356 = stack[-1];
    v356 = qcdr(v356);
    v356 = qcar(v356);
    v356 = qcar(v356);
    fn = elt(env, 11); /* sf_member */
    v356 = (*qfn2(fn))(qenv(fn), v355, v356);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-4];
    if (!(v356 == nil)) goto v47;
    v355 = stack[0];
    v356 = stack[-1];
    v356 = qcdr(v356);
    v356 = qcar(v356);
    v356 = qcdr(v356);
    fn = elt(env, 11); /* sf_member */
    v356 = (*qfn2(fn))(qenv(fn), v355, v356);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-4];
    goto v47;

v47:
    if (v356 == nil) goto v365;
    v264 = qvalue(elt(env, 3)); /* nil */
    v263 = stack[0];
    v209 = elt(env, 4); /* "improperly defined in terms of itself" */
    v355 = qvalue(elt(env, 3)); /* nil */
    v356 = qvalue(elt(env, 5)); /* t */
    {
        popv(5);
        fn = elt(env, 10); /* msgpri */
        return (*qfnn(fn))(qenv(fn), 5, v264, v263, v209, v355, v356);
    }

v365:
    v356 = qvalue(elt(env, 6)); /* !*reduce4 */
    if (v356 == nil) goto v4;
    v209 = stack[0];
    v355 = stack[-1];
    v356 = elt(env, 7); /* generic */
    {
        popv(5);
        fn = elt(env, 12); /* putobject */
        return (*qfnn(fn))(qenv(fn), 3, v209, v355, v356);
    }

v4:
    stack[-3] = stack[0];
    stack[0] = elt(env, 8); /* avalue */
    v355 = stack[-2];
    v356 = stack[-1];
    v356 = list2(v355, v356);
    nil = C_nil;
    if (exception_pending()) goto v207;
    {
        Lisp_Object v275 = stack[-3];
        Lisp_Object v393 = stack[0];
        popv(5);
        return Lputprop(nil, 3, v275, v393, v356);
    }

v48:
    v356 = qvalue(elt(env, 3)); /* nil */
    goto v47;
/* error exit handlers */
v207:
    popv(5);
    return nil;
}



/* Code for equal!+matrices!+p */

static Lisp_Object CC_equalLmatricesLp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v228, v389, v390;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for equal+matrices+p");
#endif
    if (stack >= stacklimit)
    {
        push2(v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v1);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v1;
    stack[-1] = v0;
/* end of prologue */
    v389 = stack[-1];
    v228 = stack[0];
    fn = elt(env, 4); /* same!+dim!+squared!+p */
    v228 = (*qfn2(fn))(qenv(fn), v389, v228);
    nil = C_nil;
    if (exception_pending()) goto v336;
    env = stack[-4];
    if (v228 == nil) goto v206;
    v389 = (Lisp_Object)-15; /* -1 */
    v228 = (Lisp_Object)17; /* 1 */
    v389 = cons(v389, v228);
    nil = C_nil;
    if (exception_pending()) goto v336;
    env = stack[-4];
    v228 = stack[0];
    fn = elt(env, 5); /* mk!+scal!+mult!+mat */
    v228 = (*qfn2(fn))(qenv(fn), v389, v228);
    nil = C_nil;
    if (exception_pending()) goto v336;
    env = stack[-4];
    fn = elt(env, 6); /* mk!+mat!+plus!+mat */
    v228 = (*qfn2(fn))(qenv(fn), stack[-1], v228);
    nil = C_nil;
    if (exception_pending()) goto v336;
    env = stack[-4];
    stack[0] = v228;
    v389 = qvalue(elt(env, 1)); /* nil */
    v228 = (Lisp_Object)17; /* 1 */
    v228 = cons(v389, v228);
    nil = C_nil;
    if (exception_pending()) goto v336;
    env = stack[-4];
    v390 = v228;
    v228 = stack[0];
    stack[-3] = v228;
    goto v25;

v25:
    v228 = stack[-3];
    if (v228 == nil) goto v49;
    v228 = stack[-3];
    v228 = qcar(v228);
    stack[-2] = v228;
    goto v169;

v169:
    v228 = stack[-2];
    if (v228 == nil) goto v34;
    v228 = stack[-2];
    v228 = qcar(v228);
    v389 = v228;
    v228 = qvalue(elt(env, 2)); /* !*complex */
    if (v228 == nil) goto v120;
    stack[-1] = v390;
    stack[0] = v389;
    v228 = v389;
    fn = elt(env, 7); /* mk!+conjugate!+sq */
    v228 = (*qfn1(fn))(qenv(fn), v228);
    nil = C_nil;
    if (exception_pending()) goto v336;
    env = stack[-4];
    fn = elt(env, 8); /* multsq */
    v228 = (*qfn2(fn))(qenv(fn), stack[0], v228);
    nil = C_nil;
    if (exception_pending()) goto v336;
    env = stack[-4];
    fn = elt(env, 9); /* addsq */
    v228 = (*qfn2(fn))(qenv(fn), stack[-1], v228);
    nil = C_nil;
    if (exception_pending()) goto v336;
    env = stack[-4];
    v390 = v228;
    goto v174;

v174:
    v228 = stack[-2];
    v228 = qcdr(v228);
    stack[-2] = v228;
    goto v169;

v120:
    stack[0] = v390;
    v228 = v389;
    fn = elt(env, 8); /* multsq */
    v228 = (*qfn2(fn))(qenv(fn), v228, v389);
    nil = C_nil;
    if (exception_pending()) goto v336;
    env = stack[-4];
    fn = elt(env, 9); /* addsq */
    v228 = (*qfn2(fn))(qenv(fn), stack[0], v228);
    nil = C_nil;
    if (exception_pending()) goto v336;
    env = stack[-4];
    v390 = v228;
    goto v174;

v34:
    v228 = stack[-3];
    v228 = qcdr(v228);
    stack[-3] = v228;
    goto v25;

v49:
    v228 = v390;
    fn = elt(env, 10); /* change!+sq!+to!+algnull */
    v228 = (*qfn1(fn))(qenv(fn), v228);
    nil = C_nil;
    if (exception_pending()) goto v336;
    env = stack[-4];
    v389 = v228;
    v228 = (Lisp_Object)1; /* 0 */
    if (v389 == v228) goto v211;
    v228 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v228); }

v211:
    v228 = qvalue(elt(env, 3)); /* t */
    { popv(5); return onevalue(v228); }

v206:
    v228 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v228); }
/* error exit handlers */
v336:
    popv(5);
    return nil;
}



/* Code for pasf_premf1 */

static Lisp_Object CC_pasf_premf1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v26, v212, v118;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pasf_premf1");
#endif
    if (stack >= stacklimit)
    {
        push2(v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v1);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v1;
    stack[-3] = v0;
/* end of prologue */
    v26 = stack[-3];
    if (!consp(v26)) goto v128;
    v26 = stack[-3];
    v26 = qcar(v26);
    v26 = (consp(v26) ? nil : lisp_true);
    goto v59;

v59:
    if (v26 == nil) goto v223;
    v26 = stack[-3];
    fn = elt(env, 2); /* minusf */
    v26 = (*qfn1(fn))(qenv(fn), v26);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-5];
    if (v26 == nil) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    v212 = stack[-3];
    v26 = stack[-2];
    {
        popv(6);
        fn = elt(env, 3); /* addf */
        return (*qfn2(fn))(qenv(fn), v212, v26);
    }

v223:
    v26 = stack[-3];
    v26 = qcar(v26);
    v212 = qcdr(v26);
    v26 = stack[-2];
    v26 = CC_pasf_premf1(env, v212, v26);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-5];
    stack[-4] = v26;
    v26 = stack[-3];
    v26 = qcar(v26);
    v26 = qcar(v26);
    v118 = qcar(v26);
    v212 = (Lisp_Object)17; /* 1 */
    v26 = (Lisp_Object)17; /* 1 */
    v26 = acons(v118, v212, v26);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-5];
    v26 = ncons(v26);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-5];
    stack[-1] = v26;
    v26 = stack[-3];
    v26 = qcar(v26);
    v26 = qcar(v26);
    v26 = qcdr(v26);
    stack[0] = v26;
    v26 = stack[-3];
    v212 = qcdr(v26);
    v26 = stack[-2];
    v26 = CC_pasf_premf1(env, v212, v26);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-5];
    stack[-2] = v26;
    stack[-3] = stack[-4];
    v212 = stack[-1];
    v26 = stack[0];
    fn = elt(env, 4); /* exptf */
    v26 = (*qfn2(fn))(qenv(fn), v212, v26);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-5];
    fn = elt(env, 5); /* multf */
    v212 = (*qfn2(fn))(qenv(fn), stack[-3], v26);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-5];
    v26 = stack[-2];
    {
        popv(6);
        fn = elt(env, 3); /* addf */
        return (*qfn2(fn))(qenv(fn), v212, v26);
    }

v128:
    v26 = qvalue(elt(env, 1)); /* t */
    goto v59;
/* error exit handlers */
v131:
    popv(6);
    return nil;
}



/* Code for cl_simpl1 */

static Lisp_Object MS_CDECL CC_cl_simpl1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, Lisp_Object v33, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v451, v452, v453, v454;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "cl_simpl1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for cl_simpl1");
#endif
    if (stack >= stacklimit)
    {
        push4(v33,v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0,v1,v2,v33);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v33;
    stack[-1] = v2;
    stack[-2] = v1;
    stack[-3] = v0;
/* end of prologue */
    v452 = stack[-1];
    v451 = (Lisp_Object)1; /* 0 */
    v451 = Leqn(nil, v452, v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    if (!(v451 == nil)) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    v451 = stack[-3];
    if (!consp(v451)) goto v39;
    v451 = stack[-3];
    v451 = qcar(v451);
    goto v31;

v31:
    stack[-4] = v451;
    v452 = stack[-4];
    v451 = elt(env, 1); /* true */
    if (v452 == v451) goto v167;
    v452 = stack[-4];
    v451 = elt(env, 3); /* false */
    v451 = (v452 == v451 ? lisp_true : nil);
    goto v56;

v56:
    if (!(v451 == nil)) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    v452 = stack[-4];
    v451 = elt(env, 4); /* or */
    if (v452 == v451) goto v9;
    v452 = stack[-4];
    v451 = elt(env, 5); /* and */
    v451 = (v452 == v451 ? lisp_true : nil);
    goto v8;

v8:
    if (v451 == nil) goto v271;
    v454 = stack[-4];
    v451 = stack[-3];
    v453 = qcdr(v451);
    v452 = stack[-2];
    v451 = stack[-1];
    fn = elt(env, 18); /* cl_smsimpl!-junct */
    v451 = (*qfnn(fn))(qenv(fn), 4, v454, v453, v452, v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    v452 = v451;
    v451 = v452;
    if (v451 == nil) goto v133;
    v451 = v452;
    v451 = qcdr(v451);
    if (v451 == nil) goto v133;
    v451 = stack[-4];
    popv(6);
    return cons(v451, v452);

v133:
    v451 = v452;
    if (v451 == nil) goto v122;
    v451 = v452;
    v451 = qcar(v451);
    { popv(6); return onevalue(v451); }

v122:
    v452 = stack[-4];
    v451 = elt(env, 5); /* and */
    if (v452 == v451) goto v456;
    v451 = elt(env, 3); /* false */
    { popv(6); return onevalue(v451); }

v456:
    v451 = elt(env, 1); /* true */
    { popv(6); return onevalue(v451); }

v271:
    v452 = stack[-4];
    v451 = elt(env, 6); /* not */
    if (v452 == v451) goto v336;
    v452 = stack[-4];
    v451 = elt(env, 7); /* ex */
    if (v452 == v451) goto v108;
    v452 = stack[-4];
    v451 = elt(env, 8); /* all */
    v451 = (v452 == v451 ? lisp_true : nil);
    goto v107;

v107:
    if (v451 == nil) goto v343;
    v451 = qvalue(elt(env, 9)); /* !*rlsism */
    if (v451 == nil) goto v97;
    v452 = stack[-2];
    v451 = stack[-3];
    v451 = qcdr(v451);
    v451 = qcar(v451);
    fn = elt(env, 19); /* rl_smrmknowl */
    v451 = (*qfn2(fn))(qenv(fn), v452, v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    stack[-2] = v451;
    goto v97;

v97:
    v451 = stack[-3];
    v451 = qcdr(v451);
    v451 = qcdr(v451);
    stack[0] = qcar(v451);
    v451 = stack[-1];
    v452 = sub1(v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    v451 = stack[-4];
    v451 = CC_cl_simpl1(env, 4, stack[0], stack[-2], v452, v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    stack[-1] = v451;
    v452 = stack[-1];
    v451 = elt(env, 1); /* true */
    if (v452 == v451) goto v189;
    v452 = stack[-1];
    v451 = elt(env, 3); /* false */
    v451 = (v452 == v451 ? lisp_true : nil);
    goto v191;

v191:
    if (!(v451 == nil)) { Lisp_Object res = stack[-1]; popv(6); return onevalue(res); }
    v451 = stack[-3];
    v451 = qcdr(v451);
    stack[0] = qcar(v451);
    v451 = stack[-1];
    fn = elt(env, 20); /* cl_fvarl */
    v451 = (*qfn1(fn))(qenv(fn), v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    v451 = Lmemq(nil, stack[0], v451);
    if (v451 == nil) { Lisp_Object res = stack[-1]; popv(6); return onevalue(res); }
    v453 = stack[-4];
    v451 = stack[-3];
    v451 = qcdr(v451);
    v452 = qcar(v451);
    v451 = stack[-1];
    popv(6);
    return list3(v453, v452, v451);

v189:
    v451 = qvalue(elt(env, 2)); /* t */
    goto v191;

v343:
    v452 = stack[-4];
    v451 = elt(env, 10); /* bex */
    if (v452 == v451) goto v278;
    v452 = stack[-4];
    v451 = elt(env, 11); /* ball */
    v451 = (v452 == v451 ? lisp_true : nil);
    goto v457;

v457:
    if (v451 == nil) goto v79;
    v451 = qvalue(elt(env, 9)); /* !*rlsism */
    if (v451 == nil) goto v458;
    v452 = stack[-2];
    v451 = stack[-3];
    v451 = qcdr(v451);
    v451 = qcar(v451);
    fn = elt(env, 19); /* rl_smrmknowl */
    v451 = (*qfn2(fn))(qenv(fn), v452, v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    stack[-2] = v451;
    goto v458;

v458:
    v453 = stack[-3];
    v452 = stack[-2];
    v451 = stack[-1];
    {
        popv(6);
        fn = elt(env, 21); /* cl_simplbq */
        return (*qfnn(fn))(qenv(fn), 3, v453, v452, v451);
    }

v79:
    v452 = stack[-4];
    v451 = elt(env, 12); /* impl */
    if (v452 == v451) goto v459;
    v452 = stack[-4];
    v451 = elt(env, 13); /* repl */
    if (v452 == v451) goto v460;
    v452 = stack[-4];
    v451 = elt(env, 14); /* equiv */
    if (v452 == v451) goto v145;
    v452 = stack[-4];
    v451 = elt(env, 15); /* cl_simpl */
    fn = elt(env, 22); /* rl_external */
    v451 = (*qfn2(fn))(qenv(fn), v452, v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    v452 = v451;
    if (v451 == nil) goto v461;
    stack[0] = v452;
    v451 = stack[-3];
    v451 = ncons(v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    {
        Lisp_Object v462 = stack[0];
        popv(6);
        fn = elt(env, 23); /* apply */
        return (*qfn2(fn))(qenv(fn), v462, v451);
    }

v461:
    v452 = stack[-3];
    v451 = stack[0];
    fn = elt(env, 24); /* cl_simplat */
    v451 = (*qfn2(fn))(qenv(fn), v452, v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    v452 = v451;
    v451 = qvalue(elt(env, 9)); /* !*rlsism */
    if (v451 == nil) goto v463;
    v451 = v452;
    if (!consp(v451)) goto v464;
    v451 = v452;
    v451 = qcar(v451);
    goto v380;

v380:
    stack[-4] = v451;
    v453 = stack[-4];
    v451 = elt(env, 4); /* or */
    if (v453 == v451) goto v465;
    v453 = stack[-4];
    v451 = elt(env, 5); /* and */
    v451 = (v453 == v451 ? lisp_true : nil);
    goto v317;

v317:
    if (v451 == nil) goto v292;
    v454 = stack[-4];
    v451 = v452;
    v453 = qcdr(v451);
    v452 = stack[-2];
    v451 = stack[-1];
    fn = elt(env, 18); /* cl_smsimpl!-junct */
    v451 = (*qfnn(fn))(qenv(fn), 4, v454, v453, v452, v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    v452 = v451;
    v451 = v452;
    if (v451 == nil) goto v466;
    v451 = v452;
    v451 = qcdr(v451);
    if (v451 == nil) goto v466;
    v451 = stack[-4];
    popv(6);
    return cons(v451, v452);

v466:
    v451 = v452;
    if (v451 == nil) goto v467;
    v451 = v452;
    v451 = qcar(v451);
    { popv(6); return onevalue(v451); }

v467:
    v452 = stack[-4];
    v451 = elt(env, 5); /* and */
    if (v452 == v451) goto v308;
    v451 = elt(env, 3); /* false */
    { popv(6); return onevalue(v451); }

v308:
    v451 = elt(env, 1); /* true */
    { popv(6); return onevalue(v451); }

v292:
    v453 = stack[-4];
    v451 = elt(env, 1); /* true */
    if (v453 == v451) goto v468;
    v453 = stack[-4];
    v451 = elt(env, 3); /* false */
    v451 = (v453 == v451 ? lisp_true : nil);
    goto v296;

v296:
    if (!(v451 == nil)) { popv(6); return onevalue(v452); }
    stack[-3] = elt(env, 5); /* and */
    v451 = v452;
    stack[0] = ncons(v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    v451 = stack[-2];
    fn = elt(env, 25); /* rl_smcpknowl */
    v452 = (*qfn1(fn))(qenv(fn), v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    v451 = stack[-1];
    fn = elt(env, 26); /* rl_smupdknowl */
    v451 = (*qfnn(fn))(qenv(fn), 4, stack[-3], stack[0], v452, v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    v453 = v451;
    v452 = elt(env, 3); /* false */
    if (v453 == v452) goto v469;
    v454 = elt(env, 5); /* and */
    v453 = stack[-2];
    v452 = v451;
    v451 = stack[-1];
    fn = elt(env, 27); /* rl_smmkatl */
    v451 = (*qfnn(fn))(qenv(fn), 4, v454, v453, v452, v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    v452 = v451;
    v451 = v452;
    if (v451 == nil) goto v470;
    v451 = v452;
    v451 = qcdr(v451);
    if (v451 == nil) goto v470;
    v451 = elt(env, 5); /* and */
    popv(6);
    return cons(v451, v452);

v470:
    v451 = v452;
    if (v451 == nil) goto v471;
    v451 = v452;
    v451 = qcar(v451);
    { popv(6); return onevalue(v451); }

v471:
    v452 = elt(env, 5); /* and */
    v451 = elt(env, 5); /* and */
    if (v452 == v451) goto v472;
    v451 = elt(env, 3); /* false */
    { popv(6); return onevalue(v451); }

v472:
    v451 = elt(env, 1); /* true */
    { popv(6); return onevalue(v451); }

v469:
    v451 = elt(env, 3); /* false */
    { popv(6); return onevalue(v451); }

v468:
    v451 = qvalue(elt(env, 2)); /* t */
    goto v296;

v465:
    v451 = qvalue(elt(env, 2)); /* t */
    goto v317;

v464:
    v451 = v452;
    goto v380;

v463:
    v451 = v452;
    if (!(v451 == nil)) { popv(6); return onevalue(v452); }
    v451 = qvalue(elt(env, 16)); /* !*protfg */
    if (!(v451 == nil)) goto v473;
    v452 = elt(env, 17); /* "cl_simpl1(): unknown operator" */
    v451 = stack[-4];
    v451 = list2(v452, v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    fn = elt(env, 28); /* lprie */
    v451 = (*qfn1(fn))(qenv(fn), v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    goto v473;

v473:
    v451 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v455;
    v451 = nil;
    { popv(6); return onevalue(v451); }

v145:
    v451 = stack[-3];
    v451 = qcdr(v451);
    v454 = qcar(v451);
    v451 = stack[-3];
    v451 = qcdr(v451);
    v451 = qcdr(v451);
    v453 = qcar(v451);
    v452 = stack[-2];
    v451 = stack[-1];
    {
        popv(6);
        fn = elt(env, 29); /* cl_smsimpl!-equiv */
        return (*qfnn(fn))(qenv(fn), 4, v454, v453, v452, v451);
    }

v460:
    v451 = stack[-3];
    v451 = qcdr(v451);
    v451 = qcdr(v451);
    v454 = qcar(v451);
    v451 = stack[-3];
    v451 = qcdr(v451);
    v453 = qcar(v451);
    v452 = stack[-2];
    v451 = stack[-1];
    {
        popv(6);
        fn = elt(env, 30); /* cl_smsimpl!-imprep */
        return (*qfnn(fn))(qenv(fn), 4, v454, v453, v452, v451);
    }

v459:
    v451 = stack[-3];
    v451 = qcdr(v451);
    v454 = qcar(v451);
    v451 = stack[-3];
    v451 = qcdr(v451);
    v451 = qcdr(v451);
    v453 = qcar(v451);
    v452 = stack[-2];
    v451 = stack[-1];
    {
        popv(6);
        fn = elt(env, 30); /* cl_smsimpl!-imprep */
        return (*qfnn(fn))(qenv(fn), 4, v454, v453, v452, v451);
    }

v278:
    v451 = qvalue(elt(env, 2)); /* t */
    goto v457;

v108:
    v451 = qvalue(elt(env, 2)); /* t */
    goto v107;

v336:
    v451 = stack[-3];
    v451 = qcdr(v451);
    stack[0] = qcar(v451);
    v451 = stack[-1];
    v452 = sub1(v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    v451 = elt(env, 6); /* not */
    v451 = CC_cl_simpl1(env, 4, stack[0], stack[-2], v452, v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    stack[-1] = v451;
    v452 = stack[-1];
    v451 = elt(env, 1); /* true */
    if (v452 == v451) goto v113;
    v452 = stack[-1];
    v451 = elt(env, 3); /* false */
    v451 = (v452 == v451 ? lisp_true : nil);
    goto v115;

v115:
    if (v451 == nil) goto v474;
    v451 = stack[-1];
    {
        popv(6);
        fn = elt(env, 31); /* cl_flip */
        return (*qfn1(fn))(qenv(fn), v451);
    }

v474:
    v451 = stack[-1];
    fn = elt(env, 32); /* cl_atfp */
    v451 = (*qfn1(fn))(qenv(fn), v451);
    nil = C_nil;
    if (exception_pending()) goto v455;
    env = stack[-5];
    if (v451 == nil) goto v475;
    v451 = stack[-1];
    {
        popv(6);
        fn = elt(env, 33); /* rl_negateat */
        return (*qfn1(fn))(qenv(fn), v451);
    }

v475:
    v451 = stack[-1];
    {
        popv(6);
        fn = elt(env, 34); /* cl_negate!-invol */
        return (*qfn1(fn))(qenv(fn), v451);
    }

v113:
    v451 = qvalue(elt(env, 2)); /* t */
    goto v115;

v9:
    v451 = qvalue(elt(env, 2)); /* t */
    goto v8;

v167:
    v451 = qvalue(elt(env, 2)); /* t */
    goto v56;

v39:
    v451 = stack[-3];
    goto v31;
/* error exit handlers */
v455:
    popv(6);
    return nil;
}



/* Code for rat_sgn */

static Lisp_Object CC_rat_sgn(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v3, v17;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rat_sgn");
#endif
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
    v3 = stack[0];
    v3 = qcar(v3);
    if (v3 == nil) goto v32;
    v3 = stack[0];
    v17 = qcar(v3);
    v3 = (Lisp_Object)1; /* 0 */
    v3 = (v17 == v3 ? lisp_true : nil);
    goto v20;

v20:
    if (v3 == nil) goto v24;
    v3 = (Lisp_Object)1; /* 0 */
    { popv(3); return onevalue(v3); }

v24:
    v3 = stack[0];
    v17 = qcar(v3);
    v3 = (Lisp_Object)1; /* 0 */
    v3 = (Lisp_Object)greaterp2(v17, v3);
    nil = C_nil;
    if (exception_pending()) goto v361;
    v3 = v3 ? lisp_true : nil;
    env = stack[-2];
    if (v3 == nil) goto v165;
    v3 = (Lisp_Object)17; /* 1 */
    stack[-1] = v3;
    goto v8;

v8:
    v3 = stack[0];
    v17 = qcdr(v3);
    v3 = (Lisp_Object)1; /* 0 */
    v3 = (Lisp_Object)greaterp2(v17, v3);
    nil = C_nil;
    if (exception_pending()) goto v361;
    v3 = v3 ? lisp_true : nil;
    env = stack[-2];
    if (v3 == nil) goto v168;
    v3 = (Lisp_Object)17; /* 1 */
    goto v21;

v21:
    if (equal(stack[-1], v3)) goto v31;
    v3 = (Lisp_Object)-15; /* -1 */
    { popv(3); return onevalue(v3); }

v31:
    v3 = (Lisp_Object)17; /* 1 */
    { popv(3); return onevalue(v3); }

v168:
    v3 = stack[0];
    v17 = qcdr(v3);
    v3 = (Lisp_Object)1; /* 0 */
    v3 = (Lisp_Object)lessp2(v17, v3);
    nil = C_nil;
    if (exception_pending()) goto v361;
    v3 = v3 ? lisp_true : nil;
    if (v3 == nil) goto v176;
    v3 = (Lisp_Object)-15; /* -1 */
    goto v21;

v176:
    v3 = (Lisp_Object)1; /* 0 */
    goto v21;

v165:
    v3 = stack[0];
    v17 = qcar(v3);
    v3 = (Lisp_Object)1; /* 0 */
    v3 = (Lisp_Object)lessp2(v17, v3);
    nil = C_nil;
    if (exception_pending()) goto v361;
    v3 = v3 ? lisp_true : nil;
    env = stack[-2];
    if (v3 == nil) goto v25;
    v3 = (Lisp_Object)-15; /* -1 */
    stack[-1] = v3;
    goto v8;

v25:
    v3 = (Lisp_Object)1; /* 0 */
    stack[-1] = v3;
    goto v8;

v32:
    v3 = qvalue(elt(env, 1)); /* t */
    goto v20;
/* error exit handlers */
v361:
    popv(3);
    return nil;
}



/* Code for tryreduction */

static Lisp_Object MS_CDECL CC_tryreduction(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v476, v360;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "tryreduction");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for tryreduction");
#endif
    if (stack >= stacklimit)
    {
        push3(v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v2);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v2;
    stack[-1] = v1;
    stack[-2] = v0;
/* end of prologue */
    v476 = stack[-2];
    v476 = qcar(v476);
    stack[-3] = v476;
    v476 = stack[-3];
    if (!consp(v476)) goto v31;
    v476 = stack[-3];
    stack[-2] = v476;
    v476 = stack[-2];
    v476 = qcar(v476);
    stack[-3] = v476;
    goto v31;

v31:
    v360 = stack[-3];
    v476 = (Lisp_Object)1; /* 0 */
    if (v360 == v476) goto v28;
    v360 = stack[-3];
    v476 = (Lisp_Object)17; /* 1 */
    v476 = (v360 == v476 ? lisp_true : nil);
    goto v29;

v29:
    if (!(v476 == nil)) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    v360 = stack[-3];
    v476 = (Lisp_Object)33; /* 2 */
    v476 = Ldivide(nil, v360, v476);
    nil = C_nil;
    if (exception_pending()) goto v123;
    env = stack[-4];
    stack[-3] = v476;
    v360 = stack[-2];
    v476 = stack[-3];
    v476 = qcdr(v476);
    v476 = Lrplaca(nil, v360, v476);
    nil = C_nil;
    if (exception_pending()) goto v123;
    env = stack[-4];
    v476 = stack[-3];
    v476 = qcar(v476);
    stack[-3] = v476;
    v476 = stack[-1];
    v476 = qcdr(v476);
    v476 = qcar(v476);
    fn = elt(env, 2); /* simp */
    v476 = (*qfn1(fn))(qenv(fn), v476);
    nil = C_nil;
    if (exception_pending()) goto v123;
    env = stack[-4];
    stack[-1] = v476;
    v360 = stack[-1];
    v476 = stack[-3];
    fn = elt(env, 3); /* !*exptsq */
    v476 = (*qfn2(fn))(qenv(fn), v360, v476);
    nil = C_nil;
    if (exception_pending()) goto v123;
    env = stack[-4];
    stack[-1] = v476;
    v360 = (Lisp_Object)17; /* 1 */
    v476 = stack[-1];
    v476 = qcdr(v476);
    stack[-2] = cons(v360, v476);
    nil = C_nil;
    if (exception_pending()) goto v123;
    env = stack[-4];
    v476 = stack[-1];
    v476 = qcar(v476);
    fn = elt(env, 4); /* f2df */
    v476 = (*qfn1(fn))(qenv(fn), v476);
    nil = C_nil;
    if (exception_pending()) goto v123;
    env = stack[-4];
    fn = elt(env, 5); /* multdfconst */
    v476 = (*qfn2(fn))(qenv(fn), stack[-2], v476);
    nil = C_nil;
    if (exception_pending()) goto v123;
    env = stack[-4];
    stack[-3] = v476;
    v476 = stack[0];
    if (v476 == nil) goto v17;
    v360 = stack[0];
    v476 = stack[-3];
    fn = elt(env, 6); /* multdf */
    v476 = (*qfn2(fn))(qenv(fn), v360, v476);
    nil = C_nil;
    if (exception_pending()) goto v123;
    stack[0] = v476;
    { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }

v17:
    v476 = stack[-3];
    stack[0] = v476;
    { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }

v28:
    v476 = qvalue(elt(env, 1)); /* t */
    goto v29;
/* error exit handlers */
v123:
    popv(5);
    return nil;
}



/* Code for make!-ps */

static Lisp_Object MS_CDECL CC_makeKps(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, Lisp_Object v33, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v212, v118, v201;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "make-ps");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for make-ps");
#endif
    if (stack >= stacklimit)
    {
        push4(v33,v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0,v1,v2,v33);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v33;
    stack[-1] = v2;
    stack[-2] = v1;
    stack[-3] = v0;
/* end of prologue */
    v118 = elt(env, 1); /* tps */
    v212 = elt(env, 2); /* tag */
    stack[-4] = get(v118, v212);
    env = stack[-5];
    v212 = (Lisp_Object)113; /* 7 */
    v212 = Lmkvect(nil, v212);
    nil = C_nil;
    if (exception_pending()) goto v476;
    env = stack[-5];
    v212 = cons(stack[-4], v212);
    nil = C_nil;
    if (exception_pending()) goto v476;
    env = stack[-5];
    stack[-4] = v212;
    v201 = stack[-4];
    v118 = (Lisp_Object)1; /* 0 */
    v212 = (Lisp_Object)1; /* 0 */
    fn = elt(env, 4); /* ps!:putv */
    v212 = (*qfnn(fn))(qenv(fn), 3, v201, v118, v212);
    nil = C_nil;
    if (exception_pending()) goto v476;
    env = stack[-5];
    v201 = stack[-4];
    v118 = (Lisp_Object)97; /* 6 */
    v212 = stack[-3];
    fn = elt(env, 4); /* ps!:putv */
    v212 = (*qfnn(fn))(qenv(fn), 3, v201, v118, v212);
    nil = C_nil;
    if (exception_pending()) goto v476;
    env = stack[-5];
    v201 = stack[-4];
    v118 = (Lisp_Object)65; /* 4 */
    v212 = stack[-2];
    fn = elt(env, 4); /* ps!:putv */
    v212 = (*qfnn(fn))(qenv(fn), 3, v201, v118, v212);
    nil = C_nil;
    if (exception_pending()) goto v476;
    env = stack[-5];
    v201 = stack[-4];
    v118 = (Lisp_Object)33; /* 2 */
    v212 = stack[-1];
    fn = elt(env, 4); /* ps!:putv */
    v212 = (*qfnn(fn))(qenv(fn), 3, v201, v118, v212);
    nil = C_nil;
    if (exception_pending()) goto v476;
    env = stack[-5];
    v201 = stack[-4];
    v118 = (Lisp_Object)49; /* 3 */
    v212 = stack[0];
    fn = elt(env, 4); /* ps!:putv */
    v212 = (*qfnn(fn))(qenv(fn), 3, v201, v118, v212);
    nil = C_nil;
    if (exception_pending()) goto v476;
    env = stack[-5];
    v201 = stack[-4];
    v118 = (Lisp_Object)17; /* 1 */
    v212 = (Lisp_Object)-15; /* -1 */
    fn = elt(env, 4); /* ps!:putv */
    v212 = (*qfnn(fn))(qenv(fn), 3, v201, v118, v212);
    nil = C_nil;
    if (exception_pending()) goto v476;
    env = stack[-5];
    v212 = stack[-4];
    v118 = qcdr(v212);
    v212 = (Lisp_Object)113; /* 7 */
    v201 = qvalue(elt(env, 3)); /* !*sqvar!* */
    *(Lisp_Object *)((char *)v118 + (CELL-TAG_VECTOR) + ((int32_t)v212/(16/CELL))) = v201;
    { Lisp_Object res = stack[-4]; popv(6); return onevalue(res); }
/* error exit handlers */
v476:
    popv(6);
    return nil;
}



/* Code for check_info */

static Lisp_Object CC_check_info(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v164, v374, v392;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for check_info");
#endif
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
    v164 = nil;
    v374 = stack[0];
    v374 = Lconsp(nil, v374);
    env = stack[-1];
    if (v374 == nil) goto v32;
    v164 = stack[0];
    fn = elt(env, 8); /* constp */
    v164 = (*qfn1(fn))(qenv(fn), v164);
    nil = C_nil;
    if (exception_pending()) goto v119;
    env = stack[-1];
    if (!(v164 == nil)) goto v178;
    v164 = stack[0];
    stack[0] = v164;
    goto v28;

v28:
    v164 = stack[0];
    if (v164 == nil) goto v178;
    v164 = stack[0];
    v164 = qcar(v164);
    v164 = CC_check_info(env, v164);
    nil = C_nil;
    if (exception_pending()) goto v119;
    env = stack[-1];
    v164 = stack[0];
    v164 = qcdr(v164);
    stack[0] = v164;
    goto v28;

v178:
    v164 = nil;
    { popv(2); return onevalue(v164); }

v32:
    v374 = stack[0];
    if (!(symbolp(v374))) goto v178;
    v392 = stack[0];
    v374 = qvalue(elt(env, 2)); /* avarlst */
    v374 = Lmemq(nil, v392, v374);
    if (v374 == nil) goto v48;
    v374 = qvalue(elt(env, 1)); /* nil */
    goto v63;

v63:
    if (v374 == nil) goto v178;
    v392 = stack[0];
    v374 = elt(env, 4); /* a2value */
    v164 = Lputprop(nil, 3, v392, v374, v164);
    nil = C_nil;
    if (exception_pending()) goto v119;
    env = stack[-1];
    v374 = stack[0];
    v164 = elt(env, 3); /* avalue */
    v164 = Lremprop(nil, v374, v164);
    env = stack[-1];
    v374 = stack[0];
    v164 = qvalue(elt(env, 2)); /* avarlst */
    v164 = cons(v374, v164);
    nil = C_nil;
    if (exception_pending()) goto v119;
    env = stack[-1];
    qvalue(elt(env, 2)) = v164; /* avarlst */
    v374 = stack[0];
    v164 = elt(env, 5); /* rtype */
    v374 = get(v374, v164);
    env = stack[-1];
    v164 = elt(env, 6); /* (array matrix) */
    v164 = Lmember(nil, v374, v164);
    if (v164 == nil) goto v178;
    v374 = stack[0];
    v392 = stack[0];
    v164 = elt(env, 5); /* rtype */
    v392 = get(v392, v164);
    env = stack[-1];
    v164 = qvalue(elt(env, 7)); /* malst */
    v164 = acons(v374, v392, v164);
    nil = C_nil;
    if (exception_pending()) goto v119;
    env = stack[-1];
    qvalue(elt(env, 7)) = v164; /* malst */
    v374 = stack[0];
    v164 = elt(env, 5); /* rtype */
    v164 = Lremprop(nil, v374, v164);
    goto v178;

v48:
    v374 = stack[0];
    v164 = elt(env, 3); /* avalue */
    v374 = get(v374, v164);
    env = stack[-1];
    v164 = v374;
    goto v63;
/* error exit handlers */
v119:
    popv(2);
    return nil;
}



/* Code for vdpenumerate */

static Lisp_Object CC_vdpenumerate(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v216, v129, v237;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for vdpenumerate");
#endif
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
    v216 = stack[0];
    if (v216 == nil) goto v32;
    v216 = stack[0];
    v216 = qcdr(v216);
    v216 = qcdr(v216);
    v216 = qcdr(v216);
    v216 = qcar(v216);
    v216 = (v216 == nil ? lisp_true : nil);
    goto v20;

v20:
    if (!(v216 == nil)) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v216 = stack[0];
    fn = elt(env, 4); /* vdpsave */
    v216 = (*qfn1(fn))(qenv(fn), v216);
    nil = C_nil;
    if (exception_pending()) goto v44;
    env = stack[-1];
    stack[0] = v216;
    v129 = stack[0];
    v216 = elt(env, 2); /* number */
    fn = elt(env, 5); /* vdpgetprop */
    v216 = (*qfn2(fn))(qenv(fn), v129, v216);
    nil = C_nil;
    if (exception_pending()) goto v44;
    env = stack[-1];
    if (!(v216 == nil)) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v237 = stack[0];
    v129 = elt(env, 2); /* number */
    v216 = qvalue(elt(env, 3)); /* pcount!* */
    v216 = (Lisp_Object)((int32_t)(v216) + 0x10);
    qvalue(elt(env, 3)) = v216; /* pcount!* */
    fn = elt(env, 6); /* vdpputprop */
    v216 = (*qfnn(fn))(qenv(fn), 3, v237, v129, v216);
    nil = C_nil;
    if (exception_pending()) goto v44;
    stack[0] = v216;
    { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }

v32:
    v216 = qvalue(elt(env, 1)); /* t */
    goto v20;
/* error exit handlers */
v44:
    popv(2);
    return nil;
}



/* Code for cvt5 */

static Lisp_Object CC_cvt5(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v31, v39;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for cvt5");
#endif
    if (stack >= stacklimit)
    {
        push2(v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v1);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v1;
    v31 = v0;
/* end of prologue */
    v39 = v31;
    v31 = (Lisp_Object)321; /* 20 */
    fn = elt(env, 1); /* round!:mt */
    stack[-1] = (*qfn2(fn))(qenv(fn), v39, v31);
    nil = C_nil;
    if (exception_pending()) goto v172;
    env = stack[-2];
    v39 = stack[0];
    v31 = (Lisp_Object)321; /* 20 */
    fn = elt(env, 1); /* round!:mt */
    v31 = (*qfn2(fn))(qenv(fn), v39, v31);
    nil = C_nil;
    if (exception_pending()) goto v172;
    env = stack[-2];
    {
        Lisp_Object v21 = stack[-1];
        popv(3);
        fn = elt(env, 2); /* equal!: */
        return (*qfn2(fn))(qenv(fn), v21, v31);
    }
/* error exit handlers */
v172:
    popv(3);
    return nil;
}



/* Code for redassign1p */

static Lisp_Object CC_redassign1p(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v167, v217, v223;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for redassign1p");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v217 = v0;
/* end of prologue */

v16:
    v167 = v217;
    if (!consp(v167)) goto v20;
    v167 = v217;
    v223 = qcar(v167);
    v167 = elt(env, 2); /* setq */
    if (v223 == v167) goto v61;
    v167 = v217;
    v217 = qcar(v167);
    v167 = elt(env, 3); /* (read for) */
    v167 = Lmemq(nil, v217, v167);
    if (v167 == nil) goto v24;
    v167 = qvalue(elt(env, 4)); /* nil */
    return onevalue(v167);

v24:
    v167 = qvalue(elt(env, 1)); /* t */
    return onevalue(v167);

v61:
    v167 = v217;
    v167 = qcdr(v167);
    v167 = qcdr(v167);
    v167 = qcar(v167);
    v217 = v167;
    goto v16;

v20:
    v167 = qvalue(elt(env, 1)); /* t */
    return onevalue(v167);
}



/* Code for partdff */

static Lisp_Object CC_partdff(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v202, v119;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for partdff");
#endif
    if (stack >= stacklimit)
    {
        push2(v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v1);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v1;
    stack[-3] = v0;
/* end of prologue */
    stack[-4] = nil;
    goto v20;

v20:
    v202 = stack[-3];
    if (!consp(v202)) goto v13;
    v202 = stack[-3];
    v202 = qcar(v202);
    v202 = (consp(v202) ? nil : lisp_true);
    goto v128;

v128:
    if (v202 == nil) goto v39;
    v119 = qvalue(elt(env, 3)); /* nil */
    v202 = (Lisp_Object)17; /* 1 */
    v202 = cons(v119, v202);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    v119 = v202;
    goto v45;

v45:
    v202 = stack[-4];
    if (v202 == nil) { popv(6); return onevalue(v119); }
    v202 = stack[-4];
    v202 = qcar(v202);
    fn = elt(env, 4); /* addsq */
    v202 = (*qfn2(fn))(qenv(fn), v202, v119);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    v119 = v202;
    v202 = stack[-4];
    v202 = qcdr(v202);
    stack[-4] = v202;
    goto v45;

v39:
    v202 = qvalue(elt(env, 2)); /* !*product!-rule */
    if (v202 == nil) goto v24;
    v202 = stack[-3];
    v202 = qcar(v202);
    v119 = qcar(v202);
    v202 = (Lisp_Object)17; /* 1 */
    v202 = cons(v119, v202);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    v119 = ncons(v202);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    v202 = (Lisp_Object)17; /* 1 */
    stack[0] = cons(v119, v202);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    v202 = stack[-3];
    v202 = qcar(v202);
    v119 = qcdr(v202);
    v202 = stack[-2];
    v202 = CC_partdff(env, v119, v202);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    fn = elt(env, 5); /* multsq */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[0], v202);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    v202 = stack[-3];
    v202 = qcar(v202);
    v119 = qcar(v202);
    v202 = stack[-2];
    fn = elt(env, 6); /* partdfpow */
    stack[0] = (*qfn2(fn))(qenv(fn), v119, v202);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    v202 = stack[-3];
    v202 = qcar(v202);
    v119 = qcdr(v202);
    v202 = (Lisp_Object)17; /* 1 */
    v202 = cons(v119, v202);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    fn = elt(env, 5); /* multsq */
    v202 = (*qfn2(fn))(qenv(fn), stack[0], v202);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    fn = elt(env, 4); /* addsq */
    v202 = (*qfn2(fn))(qenv(fn), stack[-1], v202);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    v119 = v202;
    goto v15;

v15:
    v202 = stack[-4];
    v202 = cons(v119, v202);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    stack[-4] = v202;
    v202 = stack[-3];
    v202 = qcdr(v202);
    stack[-3] = v202;
    goto v20;

v24:
    v202 = stack[-3];
    v119 = qcar(v202);
    v202 = stack[-2];
    fn = elt(env, 7); /* partdft */
    v202 = (*qfn2(fn))(qenv(fn), v119, v202);
    nil = C_nil;
    if (exception_pending()) goto v389;
    env = stack[-5];
    v119 = v202;
    goto v15;

v13:
    v202 = qvalue(elt(env, 1)); /* t */
    goto v128;
/* error exit handlers */
v389:
    popv(6);
    return nil;
}



setup_type const u48_setup[] =
{
    {"split-wrt-variables",     wrong_no_na,    wrong_no_nb,   (n_args *)CC_splitKwrtKvariables},
    {"dp=replus",               CC_dpMreplus,   too_many_1,    wrong_no_1},
    {"pst_equitable",           CC_pst_equitable,too_many_1,   wrong_no_1},
    {"sqlessp",                 too_few_2,      CC_sqlessp,    wrong_no_2},
    {"gcd-with-number",         too_few_2,      CC_gcdKwithKnumber,wrong_no_2},
    {"pasf_or",                 CC_pasf_or,     too_many_1,    wrong_no_1},
    {"dip_f2dip1",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_dip_f2dip1},
    {"rnfix*",                  CC_rnfixH,      too_many_1,    wrong_no_1},
    {"ldf-all-var",             CC_ldfKallKvar, too_many_1,    wrong_no_1},
    {"formoptimize1",           wrong_no_na,    wrong_no_nb,   (n_args *)CC_formoptimize1},
    {"test-ideal",              CC_testKideal,  too_many_1,    wrong_no_1},
    {"rand-mons-dense",         wrong_no_na,    wrong_no_nb,   (n_args *)CC_randKmonsKdense},
    {"gcdlist",                 CC_gcdlist,     too_many_1,    wrong_no_1},
    {"calc_world",              too_few_2,      CC_calc_world, wrong_no_2},
    {"makemainvar",             too_few_2,      CC_makemainvar,wrong_no_2},
    {"dvfsf_susitf",            too_few_2,      CC_dvfsf_susitf,wrong_no_2},
    {"put-avalue",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_putKavalue},
    {"equal+matrices+p",        too_few_2,      CC_equalLmatricesLp,wrong_no_2},
    {"pasf_premf1",             too_few_2,      CC_pasf_premf1,wrong_no_2},
    {"cl_simpl1",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_cl_simpl1},
    {"rat_sgn",                 CC_rat_sgn,     too_many_1,    wrong_no_1},
    {"tryreduction",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_tryreduction},
    {"make-ps",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_makeKps},
    {"check_info",              CC_check_info,  too_many_1,    wrong_no_1},
    {"vdpenumerate",            CC_vdpenumerate,too_many_1,    wrong_no_1},
    {"cvt5",                    too_few_2,      CC_cvt5,       wrong_no_2},
    {"redassign1p",             CC_redassign1p, too_many_1,    wrong_no_1},
    {"partdff",                 too_few_2,      CC_partdff,    wrong_no_2},
    {NULL, (one_args *)"u48", (two_args *)"15485 5353527 9953695", 0}
};

/* end of generated code */
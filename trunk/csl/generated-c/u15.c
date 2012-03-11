
/* $destdir\u15.c        Machine generated C code */

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


/* Code for listeval */

static Lisp_Object CC_listeval(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v39, v40, v41;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for listeval");
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
    push(nil);
/* copy arguments values to proper place */
    stack[-4] = v1;
    stack[0] = v0;
/* end of prologue */
    v39 = qvalue(elt(env, 1)); /* simpcount!* */
    v40 = add1(v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    qvalue(elt(env, 1)) = v40; /* simpcount!* */
    v39 = qvalue(elt(env, 2)); /* simplimit!* */
    v39 = (Lisp_Object)greaterp2(v40, v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    v39 = v39 ? lisp_true : nil;
    env = stack[-6];
    if (v39 == nil) goto v43;
    v39 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 1)) = v39; /* simpcount!* */
    v39 = elt(env, 3); /* "Simplification recursion too deep" */
    v40 = v39;
    v39 = v40;
    qvalue(elt(env, 4)) = v39; /* errmsg!* */
    v39 = qvalue(elt(env, 5)); /* !*protfg */
    if (!(v39 == nil)) goto v44;
    v39 = v40;
    fn = elt(env, 12); /* lprie */
    v39 = (*qfn1(fn))(qenv(fn), v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    goto v44;

v44:
    v39 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    goto v43;

v43:
    v39 = stack[0];
    if (!consp(v39)) goto v45;
    v39 = stack[0];
    v40 = qcar(v39);
    v39 = elt(env, 8); /* list */
    if (v40 == v39) goto v46;
    v39 = stack[0];
    v40 = qcar(v39);
    v39 = elt(env, 10); /* listfn */
    v39 = get(v40, v39);
    env = stack[-6];
    v40 = v39;
    v39 = v40;
    if (v39 == nil) goto v47;
    v41 = v40;
    v39 = stack[0];
    v40 = qcdr(v39);
    v39 = stack[-4];
    v39 = Lapply2(nil, 3, v41, v40, v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    goto v48;

v48:
    stack[0] = v39;
    v39 = qvalue(elt(env, 1)); /* simpcount!* */
    v39 = sub1(v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    qvalue(elt(env, 1)) = v39; /* simpcount!* */
    { Lisp_Object res = stack[0]; popv(7); return onevalue(res); }

v47:
    v39 = elt(env, 11); /* "Illegal operation on lists" */
    v40 = v39;
    v39 = v40;
    qvalue(elt(env, 4)) = v39; /* errmsg!* */
    v39 = qvalue(elt(env, 5)); /* !*protfg */
    if (!(v39 == nil)) goto v49;
    v39 = v40;
    fn = elt(env, 12); /* lprie */
    v39 = (*qfn1(fn))(qenv(fn), v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    goto v49;

v49:
    v39 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    v39 = nil;
    goto v48;

v46:
    stack[-5] = elt(env, 8); /* list */
    v39 = stack[0];
    v39 = qcdr(v39);
    stack[-3] = v39;
    v39 = stack[-3];
    if (v39 == nil) goto v50;
    v39 = stack[-3];
    v39 = qcar(v39);
    v40 = v39;
    v39 = stack[-4];
    fn = elt(env, 13); /* reval1 */
    v39 = (*qfn2(fn))(qenv(fn), v40, v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    v39 = ncons(v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    stack[-1] = v39;
    stack[-2] = v39;
    goto v51;

v51:
    v39 = stack[-3];
    v39 = qcdr(v39);
    stack[-3] = v39;
    v39 = stack[-3];
    if (v39 == nil) goto v52;
    stack[0] = stack[-1];
    v39 = stack[-3];
    v39 = qcar(v39);
    v40 = v39;
    v39 = stack[-4];
    fn = elt(env, 13); /* reval1 */
    v39 = (*qfn2(fn))(qenv(fn), v40, v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    v39 = ncons(v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    v39 = Lrplacd(nil, stack[0], v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    v39 = stack[-1];
    v39 = qcdr(v39);
    stack[-1] = v39;
    goto v51;

v52:
    v39 = stack[-2];
    goto v53;

v53:
    v39 = cons(stack[-5], v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    goto v48;

v50:
    v39 = qvalue(elt(env, 9)); /* nil */
    goto v53;

v45:
    v40 = stack[0];
    v39 = elt(env, 6); /* avalue */
    v39 = get(v40, v39);
    env = stack[-6];
    v41 = v39;
    v40 = stack[0];
    v39 = elt(env, 7); /* share */
    v39 = Lflagp(nil, v40, v39);
    env = stack[-6];
    if (v39 == nil) goto v54;
    v39 = stack[0];
    fn = elt(env, 14); /* eval */
    v39 = (*qfn1(fn))(qenv(fn), v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    v40 = v39;
    goto v55;

v55:
    v39 = stack[-4];
    v39 = CC_listeval(env, v40, v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    goto v48;

v54:
    v39 = v41;
    if (v39 == nil) goto v56;
    v39 = v41;
    v39 = qcdr(v39);
    v39 = qcar(v39);
    v40 = v39;
    goto v55;

v56:
    v40 = stack[0];
    v39 = elt(env, 8); /* list */
    fn = elt(env, 15); /* typerr */
    v39 = (*qfn2(fn))(qenv(fn), v40, v39);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-6];
    v40 = v39;
    goto v55;
/* error exit handlers */
v42:
    popv(7);
    return nil;
}



/* Code for indord2 */

static Lisp_Object CC_indord2(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v61, v62;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for indord2");
#endif
    if (stack >= stacklimit)
    {
        push2(v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v1);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v1;
    stack[-1] = v0;
/* end of prologue */
    v62 = stack[-1];
    v61 = stack[0];
    fn = elt(env, 1); /* indordp */
    v61 = (*qfn2(fn))(qenv(fn), v62, v61);
    nil = C_nil;
    if (exception_pending()) goto v63;
    if (v61 == nil) goto v64;
    v62 = stack[-1];
    v61 = stack[0];
    popv(2);
    return list2(v62, v61);

v64:
    v62 = stack[0];
    v61 = stack[-1];
    popv(2);
    return list2(v62, v61);
/* error exit handlers */
v63:
    popv(2);
    return nil;
}



/* Code for my_freeof */

static Lisp_Object CC_my_freeof(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v67, v2, v48;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for my_freeof");
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
    stack[-1] = v0;
/* end of prologue */
    v2 = stack[0];
    v67 = stack[-1];
    fn = elt(env, 3); /* smember */
    v67 = (*qfn2(fn))(qenv(fn), v2, v67);
    nil = C_nil;
    if (exception_pending()) goto v62;
    env = stack[-2];
    if (v67 == nil) goto v68;
    v67 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v67); }

v68:
    v48 = qvalue(elt(env, 1)); /* depl!* */
    v2 = stack[-1];
    v67 = stack[0];
    {
        popv(3);
        fn = elt(env, 4); /* freeofdepl */
        return (*qfnn(fn))(qenv(fn), 3, v48, v2, v67);
    }
/* error exit handlers */
v62:
    popv(3);
    return nil;
}



/* Code for map__edges */

static Lisp_Object CC_map__edges(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v31, v73;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for map__edges");
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
    stack[-1] = nil;
    goto v74;

v74:
    v31 = stack[0];
    if (v31 == nil) goto v75;
    v31 = stack[0];
    v73 = qcar(v31);
    v31 = stack[-1];
    v31 = cons(v73, v31);
    nil = C_nil;
    if (exception_pending()) goto v55;
    env = stack[-2];
    stack[-1] = v31;
    v31 = stack[0];
    v31 = qcdr(v31);
    stack[0] = v31;
    goto v74;

v75:
    v31 = qvalue(elt(env, 1)); /* nil */
    v73 = v31;
    goto v76;

v76:
    v31 = stack[-1];
    if (v31 == nil) { popv(3); return onevalue(v73); }
    v31 = stack[-1];
    v31 = qcar(v31);
    fn = elt(env, 2); /* union_edges */
    v31 = (*qfn2(fn))(qenv(fn), v31, v73);
    nil = C_nil;
    if (exception_pending()) goto v55;
    env = stack[-2];
    v73 = v31;
    v31 = stack[-1];
    v31 = qcdr(v31);
    stack[-1] = v31;
    goto v76;
/* error exit handlers */
v55:
    popv(3);
    return nil;
}



/* Code for sfpx1 */

static Lisp_Object MS_CDECL CC_sfpx1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v72, Lisp_Object v71, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v108, v109, v110, v111;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "sfpx1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for sfpx1");
#endif
    if (stack >= stacklimit)
    {
        push4(v71,v72,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0,v1,v72,v71);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-3] = v71;
    stack[-4] = v72;
    stack[-5] = v1;
    v110 = v0;
/* end of prologue */

v112:
    v108 = v110;
    if (!consp(v108)) goto v58;
    v108 = v110;
    v108 = qcar(v108);
    v108 = (consp(v108) ? nil : lisp_true);
    goto v59;

v59:
    if (v108 == nil) goto v113;
    v108 = qvalue(elt(env, 1)); /* t */
    { popv(8); return onevalue(v108); }

v113:
    v108 = v110;
    v108 = Lconsp(nil, v108);
    env = stack[-7];
    if (v108 == nil) goto v62;
    v108 = v110;
    v108 = qcar(v108);
    v109 = v110;
    v109 = qcdr(v109);
    stack[-2] = v109;
    v109 = v108;
    v109 = Lconsp(nil, v109);
    env = stack[-7];
    if (v109 == nil) goto v114;
    v109 = v108;
    v109 = qcdr(v109);
    stack[-6] = v109;
    v108 = qcar(v108);
    stack[0] = v108;
    v108 = stack[0];
    v108 = Lconsp(nil, v108);
    env = stack[-7];
    if (v108 == nil) goto v115;
    v108 = stack[0];
    v108 = qcar(v108);
    stack[-1] = v108;
    v108 = stack[-1];
    fn = elt(env, 3); /* assert_kernelp */
    v108 = (*qfn1(fn))(qenv(fn), v108);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-7];
    if (v108 == nil) goto v117;
    v108 = stack[0];
    v108 = qcdr(v108);
    stack[0] = v108;
    v109 = stack[-1];
    v108 = stack[-4];
    if (v109 == v108) goto v118;
    v108 = stack[-4];
    if (v108 == nil) goto v119;
    v109 = stack[-4];
    v108 = stack[-5];
    v108 = cons(v109, v108);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-7];
    stack[-5] = v108;
    goto v119;

v119:
    v108 = stack[-5];
    if (v108 == nil) goto v120;
    v109 = stack[-1];
    v108 = (Lisp_Object)17; /* 1 */
    stack[-3] = cons(v109, v108);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-7];
    v108 = stack[-5];
    v109 = qcar(v108);
    v108 = (Lisp_Object)17; /* 1 */
    v108 = cons(v109, v108);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-7];
    fn = elt(env, 4); /* ordpp */
    v108 = (*qfn2(fn))(qenv(fn), stack[-3], v108);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-7];
    if (v108 == nil) goto v120;
    v108 = qvalue(elt(env, 2)); /* nil */
    { popv(8); return onevalue(v108); }

v120:
    stack[-3] = stack[-6];
    v109 = stack[-1];
    v108 = stack[-5];
    v110 = cons(v109, v108);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-7];
    v109 = qvalue(elt(env, 2)); /* nil */
    v108 = (Lisp_Object)1; /* 0 */
    v108 = CC_sfpx1(env, 4, stack[-3], v110, v109, v108);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-7];
    if (v108 == nil) goto v121;
    v110 = stack[-2];
    v111 = stack[-5];
    v109 = stack[-1];
    v108 = stack[0];
    stack[-5] = v111;
    stack[-4] = v109;
    stack[-3] = v108;
    goto v112;

v121:
    v108 = qvalue(elt(env, 2)); /* nil */
    { popv(8); return onevalue(v108); }

v118:
    v109 = stack[0];
    v108 = stack[-3];
    v108 = (Lisp_Object)lessp2(v109, v108);
    nil = C_nil;
    if (exception_pending()) goto v116;
    v108 = v108 ? lisp_true : nil;
    env = stack[-7];
    if (v108 == nil) goto v122;
    stack[-1] = stack[-6];
    v109 = stack[-4];
    v108 = stack[-5];
    v110 = cons(v109, v108);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-7];
    v109 = qvalue(elt(env, 2)); /* nil */
    v108 = (Lisp_Object)1; /* 0 */
    v108 = CC_sfpx1(env, 4, stack[-1], v110, v109, v108);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-7];
    if (v108 == nil) goto v20;
    v110 = stack[-2];
    v111 = stack[-5];
    v109 = stack[-4];
    v108 = stack[0];
    stack[-5] = v111;
    stack[-4] = v109;
    stack[-3] = v108;
    goto v112;

v20:
    v108 = qvalue(elt(env, 2)); /* nil */
    { popv(8); return onevalue(v108); }

v122:
    v108 = qvalue(elt(env, 2)); /* nil */
    { popv(8); return onevalue(v108); }

v117:
    v108 = qvalue(elt(env, 2)); /* nil */
    { popv(8); return onevalue(v108); }

v115:
    v108 = qvalue(elt(env, 2)); /* nil */
    { popv(8); return onevalue(v108); }

v114:
    v108 = qvalue(elt(env, 2)); /* nil */
    { popv(8); return onevalue(v108); }

v62:
    v108 = qvalue(elt(env, 2)); /* nil */
    { popv(8); return onevalue(v108); }

v58:
    v108 = qvalue(elt(env, 1)); /* t */
    goto v59;
/* error exit handlers */
v116:
    popv(8);
    return nil;
}



/* Code for mo_neworder */

static Lisp_Object CC_mo_neworder(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v38;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mo_neworder");
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
    v38 = v0;
/* end of prologue */
    v38 = qcar(v38);
    fn = elt(env, 1); /* mo!=shorten */
    v38 = (*qfn1(fn))(qenv(fn), v38);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-1];
    stack[0] = v38;
    fn = elt(env, 2); /* mo!=deglist */
    v38 = (*qfn1(fn))(qenv(fn), v38);
    nil = C_nil;
    if (exception_pending()) goto v113;
    {
        Lisp_Object v36 = stack[0];
        popv(2);
        return cons(v36, v38);
    }
/* error exit handlers */
v113:
    popv(2);
    return nil;
}



/* Code for pv_times1 */

static Lisp_Object MS_CDECL CC_pv_times1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v72, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v48, v57, v61;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "pv_times1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pv_times1");
#endif
    if (stack >= stacklimit)
    {
        push3(v72,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v72);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v57 = v72;
    stack[0] = v1;
    v48 = v0;
/* end of prologue */

v75:
    v61 = v48;
    if (v61 == nil) { popv(3); return onevalue(v57); }
    v61 = v48;
    v61 = qcdr(v61);
    stack[-1] = v61;
    v61 = qcar(v48);
    v48 = stack[0];
    fn = elt(env, 1); /* pv_times2 */
    v48 = (*qfnn(fn))(qenv(fn), 3, v61, v48, v57);
    nil = C_nil;
    if (exception_pending()) goto v45;
    env = stack[-2];
    v57 = v48;
    v48 = stack[-1];
    goto v75;
/* error exit handlers */
v45:
    popv(3);
    return nil;
}



/* Code for rootrnd */

static Lisp_Object CC_rootrnd(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v125, v126;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rootrnd");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v125 = v0;
/* end of prologue */
    v126 = v125;
    v125 = qvalue(elt(env, 1)); /* acc!# */
    {
        fn = elt(env, 2); /* rtrnda */
        return (*qfn2(fn))(qenv(fn), v126, v125);
    }
}



/* Code for quotient!-mod!-p */

static Lisp_Object CC_quotientKmodKp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v137, v119, v18;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for quotient-mod-p");
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
    v137 = stack[-1];
    if (v137 == nil) goto v84;
    v137 = stack[-1];
    if (!consp(v137)) goto v60;
    v137 = stack[-1];
    v137 = qcar(v137);
    v137 = (consp(v137) ? nil : lisp_true);
    goto v37;

v37:
    if (v137 == nil) goto v126;
    v137 = stack[-1];
    fn = elt(env, 5); /* safe!-modular!-reciprocal */
    v137 = (*qfn1(fn))(qenv(fn), v137);
    nil = C_nil;
    if (exception_pending()) goto v138;
    env = stack[-4];
    v119 = stack[-1];
    if (v119 == nil) goto v2;
    v119 = stack[-2];
    {
        popv(5);
        fn = elt(env, 6); /* multiply!-by!-constant!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v119, v137);
    }

v2:
    v137 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 4)) = v137; /* exact!-quotient!-flag */
    { popv(5); return onevalue(v137); }

v126:
    v137 = stack[-2];
    if (v137 == nil) goto v73;
    v137 = stack[-2];
    if (!consp(v137)) goto v139;
    v137 = stack[-2];
    v137 = qcar(v137);
    v137 = (consp(v137) ? nil : lisp_true);
    goto v140;

v140:
    if (v137 == nil) goto v141;
    v137 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 4)) = v137; /* exact!-quotient!-flag */
    { popv(5); return onevalue(v137); }

v141:
    v137 = stack[-2];
    v137 = qcar(v137);
    v137 = qcar(v137);
    v119 = qcar(v137);
    v137 = stack[-1];
    v137 = qcar(v137);
    v137 = qcar(v137);
    v137 = qcar(v137);
    if (equal(v119, v137)) goto v29;
    v137 = stack[-2];
    v137 = qcar(v137);
    v137 = qcar(v137);
    v119 = qcar(v137);
    v137 = stack[-1];
    v137 = qcar(v137);
    v137 = qcar(v137);
    v137 = qcar(v137);
    fn = elt(env, 7); /* ordop */
    v137 = (*qfn2(fn))(qenv(fn), v119, v137);
    nil = C_nil;
    if (exception_pending()) goto v138;
    env = stack[-4];
    if (v137 == nil) goto v106;
    v137 = stack[-2];
    v137 = qcar(v137);
    stack[-3] = qcar(v137);
    v137 = stack[-2];
    v137 = qcar(v137);
    v119 = qcdr(v137);
    v137 = stack[-1];
    stack[0] = CC_quotientKmodKp(env, v119, v137);
    nil = C_nil;
    if (exception_pending()) goto v138;
    env = stack[-4];
    v137 = stack[-2];
    v119 = qcdr(v137);
    v137 = stack[-1];
    v137 = CC_quotientKmodKp(env, v119, v137);
    nil = C_nil;
    if (exception_pending()) goto v138;
    env = stack[-4];
    {
        Lisp_Object v142 = stack[-3];
        Lisp_Object v16 = stack[0];
        popv(5);
        fn = elt(env, 8); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v142, v16, v137);
    }

v106:
    v137 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 4)) = v137; /* exact!-quotient!-flag */
    { popv(5); return onevalue(v137); }

v29:
    v18 = stack[-2];
    v119 = stack[-1];
    v137 = stack[-1];
    v137 = qcar(v137);
    v137 = qcar(v137);
    v137 = qcar(v137);
    {
        popv(5);
        fn = elt(env, 9); /* xquotient!-mod!-p */
        return (*qfnn(fn))(qenv(fn), 3, v18, v119, v137);
    }

v139:
    v137 = qvalue(elt(env, 2)); /* t */
    goto v140;

v73:
    v137 = qvalue(elt(env, 3)); /* nil */
    { popv(5); return onevalue(v137); }

v60:
    v137 = qvalue(elt(env, 2)); /* t */
    goto v37;

v84:
    v137 = elt(env, 1); /* "B=0 IN QUOTIENT-MOD-P" */
    {
        popv(5);
        fn = elt(env, 10); /* errorf */
        return (*qfn1(fn))(qenv(fn), v137);
    }
/* error exit handlers */
v138:
    popv(5);
    return nil;
}



/* Code for rlis */

static Lisp_Object MS_CDECL CC_rlis(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v96, v97, v53;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "rlis");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rlis");
#endif
    if (stack >= stacklimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* end of prologue */
    v96 = qvalue(elt(env, 1)); /* cursym!* */
    stack[0] = v96;
    fn = elt(env, 8); /* scan */
    v97 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v19;
    env = stack[-2];
    v96 = elt(env, 2); /* delim */
    v96 = Lflagp(nil, v97, v96);
    env = stack[-2];
    if (v96 == nil) goto v76;
    v96 = stack[0];
    v97 = qvalue(elt(env, 3)); /* nil */
    popv(3);
    return list2(v96, v97);

v76:
    v96 = qvalue(elt(env, 4)); /* !*reduce4 */
    if (v96 == nil) goto v148;
    stack[-1] = stack[0];
    stack[0] = elt(env, 5); /* list */
    v96 = elt(env, 6); /* lambda */
    fn = elt(env, 9); /* xread1 */
    v96 = (*qfn1(fn))(qenv(fn), v96);
    nil = C_nil;
    if (exception_pending()) goto v19;
    env = stack[-2];
    v53 = v96;
    v97 = v53;
    v96 = elt(env, 7); /* !*comma!* */
    if (!consp(v97)) goto v149;
    v97 = qcar(v97);
    if (!(v97 == v96)) goto v149;
    v96 = v53;
    v96 = qcdr(v96);
    goto v69;

v69:
    v96 = cons(stack[0], v96);
    nil = C_nil;
    if (exception_pending()) goto v19;
    {
        Lisp_Object v21 = stack[-1];
        popv(3);
        return list2(v21, v96);
    }

v149:
    v96 = v53;
    v96 = ncons(v96);
    nil = C_nil;
    if (exception_pending()) goto v19;
    env = stack[-2];
    goto v69;

v148:
    v96 = elt(env, 6); /* lambda */
    fn = elt(env, 9); /* xread1 */
    v96 = (*qfn1(fn))(qenv(fn), v96);
    nil = C_nil;
    if (exception_pending()) goto v19;
    env = stack[-2];
    v53 = v96;
    v97 = v53;
    v96 = elt(env, 7); /* !*comma!* */
    if (!consp(v97)) goto v25;
    v97 = qcar(v97);
    if (!(v97 == v96)) goto v25;
    v96 = v53;
    v96 = qcdr(v96);
    goto v150;

v150:
    {
        Lisp_Object v20 = stack[0];
        popv(3);
        return cons(v20, v96);
    }

v25:
    v96 = v53;
    v96 = ncons(v96);
    nil = C_nil;
    if (exception_pending()) goto v19;
    goto v150;
/* error exit handlers */
v19:
    popv(3);
    return nil;
}



/* Code for mml2om */

static Lisp_Object MS_CDECL CC_mml2om(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v38;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "mml2om");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mml2om");
#endif
    if (stack >= stacklimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* end of prologue */
    fn = elt(env, 3); /* mml2ir */
    v38 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-1];
    stack[0] = v38;
    v38 = qvalue(elt(env, 1)); /* t */
    fn = elt(env, 4); /* terpri!* */
    v38 = (*qfn1(fn))(qenv(fn), v38);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-1];
    v38 = elt(env, 2); /* "Intermediate representation: " */
    v38 = Lprinc(nil, v38);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-1];
    v38 = qvalue(elt(env, 1)); /* t */
    fn = elt(env, 4); /* terpri!* */
    v38 = (*qfn1(fn))(qenv(fn), v38);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-1];
    v38 = stack[0];
    v38 = Lprint(nil, v38);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-1];
    v38 = stack[0];
    fn = elt(env, 5); /* ir2om */
    v38 = (*qfn1(fn))(qenv(fn), v38);
    nil = C_nil;
    if (exception_pending()) goto v113;
    v38 = nil;
    { popv(2); return onevalue(v38); }
/* error exit handlers */
v113:
    popv(2);
    return nil;
}



/* Code for vevlcm */

static Lisp_Object CC_vevlcm(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v143, v136, v152;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for vevlcm");
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
    stack[-1] = v0;
/* end of prologue */
    v152 = nil;
    goto v76;

v76:
    v143 = stack[-1];
    if (v143 == nil) goto v75;
    v143 = stack[0];
    if (v143 == nil) goto v75;
    v143 = stack[-1];
    v136 = qcar(v143);
    v143 = stack[0];
    v143 = qcar(v143);
    if (((int32_t)(v136)) > ((int32_t)(v143))) goto v64;
    v143 = stack[0];
    v143 = qcar(v143);
    goto v59;

v59:
    v136 = v152;
    v143 = cons(v143, v136);
    nil = C_nil;
    if (exception_pending()) goto v28;
    env = stack[-2];
    v152 = v143;
    v143 = stack[-1];
    v143 = qcdr(v143);
    stack[-1] = v143;
    v143 = stack[0];
    v143 = qcdr(v143);
    stack[0] = v143;
    goto v76;

v64:
    v143 = stack[-1];
    v143 = qcar(v143);
    goto v59;

v75:
    v143 = v152;
    v143 = Lnreverse(nil, v143);
    env = stack[-2];
    v152 = v143;
    v143 = stack[-1];
    if (v143 == nil) goto v54;
    v136 = v152;
    v143 = stack[-1];
    v143 = Lnconc(nil, v136, v143);
    nil = C_nil;
    if (exception_pending()) goto v28;
    v152 = v143;
    { popv(3); return onevalue(v152); }

v54:
    v143 = stack[0];
    if (v143 == nil) { popv(3); return onevalue(v152); }
    v136 = v152;
    v143 = stack[0];
    v143 = Lnconc(nil, v136, v143);
    nil = C_nil;
    if (exception_pending()) goto v28;
    v152 = v143;
    { popv(3); return onevalue(v152); }
/* error exit handlers */
v28:
    popv(3);
    return nil;
}



/* Code for oprinla */

static Lisp_Object CC_oprinla(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v153, v27, v140;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for oprinla");
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
/* copy arguments values to proper place */
    v27 = v0;
/* end of prologue */
    v140 = v27;
    v153 = elt(env, 1); /* lapr */
    v153 = get(v140, v153);
    env = stack[0];
    v140 = v153;
    if (v153 == nil) goto v58;
    v153 = v140;
    fn = elt(env, 5); /* prin2la */
    v153 = (*qfn1(fn))(qenv(fn), v153);
    nil = C_nil;
    if (exception_pending()) goto v139;
    goto v74;

v74:
    v153 = nil;
    { popv(1); return onevalue(v153); }

v58:
    v140 = v27;
    v153 = elt(env, 2); /* prtch */
    v153 = get(v140, v153);
    env = stack[0];
    v140 = v153;
    if (v153 == nil) goto v62;
    v153 = v140;
    fn = elt(env, 5); /* prin2la */
    v153 = (*qfn1(fn))(qenv(fn), v153);
    nil = C_nil;
    if (exception_pending()) goto v139;
    goto v74;

v62:
    v140 = v27;
    v153 = elt(env, 3); /* lapop */
    v153 = get(v140, v153);
    env = stack[0];
    v140 = v153;
    if (v153 == nil) goto v114;
    v153 = v140;
    fn = elt(env, 5); /* prin2la */
    v153 = (*qfn1(fn))(qenv(fn), v153);
    nil = C_nil;
    if (exception_pending()) goto v139;
    env = stack[0];
    v153 = elt(env, 4); /* !  */
    fn = elt(env, 5); /* prin2la */
    v153 = (*qfn1(fn))(qenv(fn), v153);
    nil = C_nil;
    if (exception_pending()) goto v139;
    goto v74;

v114:
    v153 = v27;
    fn = elt(env, 6); /* prinlatom */
    v153 = (*qfn1(fn))(qenv(fn), v153);
    nil = C_nil;
    if (exception_pending()) goto v139;
    goto v74;
/* error exit handlers */
v139:
    popv(1);
    return nil;
}



/* Code for fortexp */

static Lisp_Object CC_fortexp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v125, v126;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for fortexp");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v125 = v0;
/* end of prologue */
    v126 = v125;
    v125 = (Lisp_Object)1; /* 0 */
    {
        fn = elt(env, 1); /* fortexp1 */
        return (*qfn2(fn))(qenv(fn), v126, v125);
    }
}



/* Code for command */

static Lisp_Object MS_CDECL CC_command(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v186, v187, v188, v189;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "command");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for command");
#endif
    if (stack >= stacklimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* end of prologue */
    stack[-3] = qvalue(elt(env, 1)); /* errmsg!* */
    qvalue(elt(env, 1)) = nil; /* errmsg!* */
    stack[-2] = qvalue(elt(env, 2)); /* loopdelimslist!* */
    qvalue(elt(env, 2)) = nil; /* loopdelimslist!* */
    v186 = qvalue(elt(env, 3)); /* !*demo */
    if (v186 == nil) goto v60;
    v186 = qvalue(elt(env, 4)); /* ifl!* */
    if (v186 == nil) goto v60;
    fn = elt(env, 32); /* commdemo */
    v186 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    goto v75;

v75:
    qvalue(elt(env, 2)) = stack[-2]; /* loopdelimslist!* */
    qvalue(elt(env, 1)) = stack[-3]; /* errmsg!* */
    { popv(5); return onevalue(v186); }

v60:
    v186 = qvalue(elt(env, 5)); /* !*slin */
    if (v186 == nil) goto v65;
    v186 = qvalue(elt(env, 7)); /* !*reduce4 */
    goto v44;

v44:
    if (!(v186 == nil)) goto v76;
    v186 = qvalue(elt(env, 4)); /* ifl!* */
    if (v186 == nil) goto v61;
    v186 = qvalue(elt(env, 4)); /* ifl!* */
    v188 = qcar(v186);
    v187 = (Lisp_Object)17; /* 1 */
    v186 = qvalue(elt(env, 9)); /* curline!* */
    v186 = list2star(v188, v187, v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    goto v57;

v57:
    qvalue(elt(env, 10)) = v186; /* cloc!* */
    v186 = qvalue(elt(env, 11)); /* lreadfn!* */
    if (v186 == nil) goto v141;
    v187 = qvalue(elt(env, 11)); /* lreadfn!* */
    v186 = qvalue(elt(env, 8)); /* nil */
    fn = elt(env, 33); /* lispapply */
    v186 = (*qfn2(fn))(qenv(fn), v187, v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    goto v139;

v139:
    stack[-1] = v186;
    goto v83;

v83:
    v186 = qvalue(elt(env, 7)); /* !*reduce4 */
    if (v186 == nil) goto v191;
    v186 = qvalue(elt(env, 28)); /* !*debug */
    if (v186 == nil) goto v192;
    v186 = elt(env, 29); /* "Parse: " */
    v186 = Lprinc(nil, v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    stack[0] = stack[-1];
    v186 = Lposn(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    fn = elt(env, 34); /* superprinm */
    v186 = (*qfn2(fn))(qenv(fn), stack[0], v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    v186 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    goto v192;

v192:
    v187 = qvalue(elt(env, 20)); /* key!* */
    v186 = elt(env, 30); /* !*semicol!* */
    if (v187 == v186) goto v76;
    v186 = qvalue(elt(env, 7)); /* !*reduce4 */
    if (v186 == nil) goto v193;
    v186 = stack[-1];
    fn = elt(env, 35); /* n_form */
    v186 = (*qfn1(fn))(qenv(fn), v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    stack[-1] = v186;
    goto v194;

v194:
    v186 = qvalue(elt(env, 28)); /* !*debug */
    if (v186 == nil) goto v195;
    v186 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    v186 = elt(env, 31); /* "Form: " */
    v186 = Lprinc(nil, v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    stack[0] = stack[-1];
    v186 = Lposn(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    fn = elt(env, 34); /* superprinm */
    v186 = (*qfn2(fn))(qenv(fn), stack[0], v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    v186 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    goto v195;

v195:
    v186 = stack[-1];
    goto v75;

v193:
    v186 = stack[-1];
    fn = elt(env, 36); /* form */
    v186 = (*qfn1(fn))(qenv(fn), v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    stack[-1] = v186;
    goto v194;

v76:
    fn = elt(env, 37); /* readch1 */
    v186 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    qvalue(elt(env, 12)) = v186; /* crchar!* */
    v187 = qvalue(elt(env, 12)); /* crchar!* */
    v186 = qvalue(elt(env, 13)); /* !$eol!$ */
    if (equal(v187, v186)) goto v76;
    fn = elt(env, 38); /* command1 */
    v186 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    stack[-1] = v186;
    goto v83;

v191:
    v186 = qvalue(elt(env, 14)); /* !*struct */
    if (v186 == nil) goto v99;
    v186 = stack[-1];
    fn = elt(env, 39); /* structchk */
    v186 = (*qfn1(fn))(qenv(fn), v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    stack[-1] = v186;
    goto v99;

v99:
    v186 = qvalue(elt(env, 15)); /* !*pret */
    if (v186 == nil) goto v196;
    v186 = stack[-1];
    if (!consp(v186)) goto v21;
    v186 = stack[-1];
    v187 = qcar(v186);
    v186 = elt(env, 16); /* (in out shut) */
    v186 = Lmemq(nil, v187, v186);
    v186 = (v186 == nil ? lisp_true : nil);
    goto v19;

v19:
    if (v186 == nil) goto v196;
    v186 = stack[-1];
    if (v186 == nil) goto v197;
    v186 = qvalue(elt(env, 8)); /* nil */
    goto v95;

v95:
    if (v186 == nil) goto v106;
    v186 = elt(env, 18); /* end */
    fn = elt(env, 40); /* rprint */
    v186 = (*qfn1(fn))(qenv(fn), v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    goto v196;

v196:
    v186 = qvalue(elt(env, 5)); /* !*slin */
    if (v186 == nil) goto v198;
    v187 = elt(env, 19); /* symbolic */
    v186 = stack[-1];
    v186 = list2(v187, v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    goto v75;

v198:
    v186 = stack[-1];
    fn = elt(env, 36); /* form */
    v186 = (*qfn1(fn))(qenv(fn), v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    v187 = v186;
    v188 = qvalue(elt(env, 20)); /* key!* */
    v186 = elt(env, 21); /* modefn */
    v186 = Lflagp(nil, v188, v186);
    env = stack[-4];
    if (v186 == nil) goto v199;
    v186 = qvalue(elt(env, 20)); /* key!* */
    goto v200;

v200:
    stack[0] = v186;
    v189 = v187;
    v188 = qvalue(elt(env, 8)); /* nil */
    v187 = elt(env, 19); /* symbolic */
    fn = elt(env, 41); /* convertmode1 */
    v186 = (*qfnn(fn))(qenv(fn), 4, v189, v188, v187, v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    v186 = list2(stack[0], v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    goto v75;

v199:
    v186 = v187;
    if (!consp(v186)) goto v201;
    v186 = v187;
    v188 = qcar(v186);
    v186 = elt(env, 22); /* quote */
    if (v188 == v186) goto v202;
    v186 = v187;
    v186 = qcar(v186);
    if (!(symbolp(v186))) goto v203;
    v186 = v187;
    v188 = qcar(v186);
    v186 = elt(env, 23); /* nochange */
    v186 = Lflagp(nil, v188, v186);
    env = stack[-4];
    if (v186 == nil) goto v204;
    v186 = qvalue(elt(env, 6)); /* t */
    goto v79;

v79:
    if (v186 == nil) goto v203;
    v186 = v187;
    v188 = qcar(v186);
    v186 = elt(env, 26); /* (setq setel setf) */
    v186 = Lmemq(nil, v188, v186);
    if (v186 == nil) goto v205;
    v186 = v187;
    v186 = qcdr(v186);
    v186 = qcdr(v186);
    v188 = qcar(v186);
    v186 = elt(env, 22); /* quote */
    v186 = Leqcar(nil, v188, v186);
    env = stack[-4];
    goto v88;

v88:
    if (v186 == nil) goto v206;
    v186 = elt(env, 19); /* symbolic */
    goto v200;

v206:
    v186 = qvalue(elt(env, 27)); /* !*mode */
    goto v200;

v205:
    v186 = qvalue(elt(env, 8)); /* nil */
    goto v88;

v203:
    v186 = qvalue(elt(env, 6)); /* t */
    goto v88;

v204:
    v186 = v187;
    v188 = qcar(v186);
    v186 = elt(env, 24); /* intfn */
    v186 = Lflagp(nil, v188, v186);
    env = stack[-4];
    if (v186 == nil) goto v111;
    v186 = qvalue(elt(env, 6)); /* t */
    goto v79;

v111:
    v186 = v187;
    v188 = qcar(v186);
    v186 = elt(env, 25); /* list */
    v186 = (v188 == v186 ? lisp_true : nil);
    goto v79;

v202:
    v186 = qvalue(elt(env, 8)); /* nil */
    goto v88;

v201:
    v186 = qvalue(elt(env, 8)); /* nil */
    goto v88;

v106:
    v186 = stack[-1];
    fn = elt(env, 40); /* rprint */
    v186 = (*qfn1(fn))(qenv(fn), v186);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    v186 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    goto v196;

v197:
    v187 = qvalue(elt(env, 17)); /* cursym!* */
    v186 = elt(env, 18); /* end */
    v186 = (v187 == v186 ? lisp_true : nil);
    goto v95;

v21:
    v186 = qvalue(elt(env, 6)); /* t */
    goto v19;

v141:
    v186 = Lread(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v190;
    env = stack[-4];
    goto v139;

v61:
    v186 = qvalue(elt(env, 8)); /* nil */
    goto v57;

v65:
    v186 = qvalue(elt(env, 6)); /* t */
    goto v44;
/* error exit handlers */
v190:
    env = stack[-4];
    qvalue(elt(env, 2)) = stack[-2]; /* loopdelimslist!* */
    qvalue(elt(env, 1)) = stack[-3]; /* errmsg!* */
    popv(5);
    return nil;
}



/* Code for dp_neg */

static Lisp_Object CC_dp_neg(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v151, v184;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dp_neg");
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
/* copy arguments values to proper place */
    v151 = v0;
/* end of prologue */
    stack[-4] = v151;
    v151 = stack[-4];
    if (v151 == nil) goto v126;
    v151 = stack[-4];
    v151 = qcar(v151);
    v184 = v151;
    v151 = v184;
    stack[0] = qcar(v151);
    v151 = v184;
    v151 = qcdr(v151);
    fn = elt(env, 2); /* bc_neg */
    v151 = (*qfn1(fn))(qenv(fn), v151);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-5];
    v151 = cons(stack[0], v151);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-5];
    v151 = ncons(v151);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-5];
    stack[-2] = v151;
    stack[-3] = v151;
    goto v75;

v75:
    v151 = stack[-4];
    v151 = qcdr(v151);
    stack[-4] = v151;
    v151 = stack[-4];
    if (v151 == nil) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    stack[-1] = stack[-2];
    v151 = stack[-4];
    v151 = qcar(v151);
    v184 = v151;
    v151 = v184;
    stack[0] = qcar(v151);
    v151 = v184;
    v151 = qcdr(v151);
    fn = elt(env, 2); /* bc_neg */
    v151 = (*qfn1(fn))(qenv(fn), v151);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-5];
    v151 = cons(stack[0], v151);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-5];
    v151 = ncons(v151);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-5];
    v151 = Lrplacd(nil, stack[-1], v151);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-5];
    v151 = stack[-2];
    v151 = qcdr(v151);
    stack[-2] = v151;
    goto v75;

v126:
    v151 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v151); }
/* error exit handlers */
v150:
    popv(6);
    return nil;
}



/* Code for simp!-prop!-order */

static Lisp_Object CC_simpKpropKorder(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v73, v114, v209, v55;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for simp-prop-order");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v114 = v1;
    v209 = v0;
/* end of prologue */

v84:
    v73 = v209;
    if (v73 == nil) goto v76;
    v73 = v209;
    v73 = qcar(v73);
    v55 = qcar(v73);
    v73 = v114;
    v73 = qcar(v73);
    v73 = qcar(v73);
    if (equal(v55, v73)) goto v98;
    v73 = v209;
    v73 = qcar(v73);
    v114 = qcar(v73);
    v73 = elt(env, 2); /* prop!* */
    if (v114 == v73) goto v67;
    v73 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v73);

v67:
    v73 = qvalue(elt(env, 3)); /* t */
    return onevalue(v73);

v98:
    v73 = v209;
    v73 = qcdr(v73);
    v209 = v73;
    v73 = v114;
    v73 = qcdr(v73);
    v114 = v73;
    goto v84;

v76:
    v73 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v73);
}



/* Code for symbvarlst */

static Lisp_Object MS_CDECL CC_symbvarlst(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v72, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v94, v95, v91;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "symbvarlst");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for symbvarlst");
#endif
    if (stack >= stacklimit)
    {
        push3(v72,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v72);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    v94 = v72;
    stack[-4] = v1;
    v91 = v0;
/* end of prologue */
    v95 = v94;
    v94 = elt(env, 1); /* symbolic */
    if (v95 == v94) goto v125;
    v94 = qvalue(elt(env, 2)); /* nil */
    { popv(7); return onevalue(v94); }

v125:
    v94 = v91;
    stack[-5] = v94;
    goto v76;

v76:
    v94 = stack[-5];
    if (v94 == nil) goto v65;
    v94 = stack[-5];
    v94 = qcar(v94);
    v94 = Lconsp(nil, v94);
    env = stack[-6];
    if (v94 == nil) goto v208;
    v94 = stack[-5];
    v94 = qcar(v94);
    v94 = qcar(v94);
    goto v67;

v67:
    stack[0] = v94;
    v94 = stack[0];
    v94 = Lsymbol_specialp(nil, v94);
    nil = C_nil;
    if (exception_pending()) goto v52;
    env = stack[-6];
    if (v94 == nil) goto v185;
    v94 = qvalue(elt(env, 2)); /* nil */
    goto v55;

v55:
    if (v94 == nil) goto v31;
    v94 = qvalue(elt(env, 4)); /* !*msg */
    if (v94 == nil) goto v31;
    stack[-3] = elt(env, 5); /* "***" */
    stack[-2] = elt(env, 6); /* "local variable" */
    stack[-1] = stack[0];
    stack[0] = elt(env, 7); /* "in procedure" */
    v95 = qvalue(elt(env, 8)); /* fname!* */
    v94 = elt(env, 9); /* "not used" */
    v94 = list2(v95, v94);
    nil = C_nil;
    if (exception_pending()) goto v52;
    env = stack[-6];
    v94 = list3star(stack[-2], stack[-1], stack[0], v94);
    nil = C_nil;
    if (exception_pending()) goto v52;
    env = stack[-6];
    fn = elt(env, 10); /* lpriw */
    v94 = (*qfn2(fn))(qenv(fn), stack[-3], v94);
    nil = C_nil;
    if (exception_pending()) goto v52;
    env = stack[-6];
    goto v31;

v31:
    v94 = stack[-5];
    v94 = qcdr(v94);
    stack[-5] = v94;
    goto v76;

v185:
    v94 = stack[0];
    v94 = Lsymbol_globalp(nil, v94);
    env = stack[-6];
    if (v94 == nil) goto v184;
    v94 = qvalue(elt(env, 2)); /* nil */
    goto v55;

v184:
    v95 = stack[0];
    v94 = stack[-4];
    v94 = Lsmemq(nil, v95, v94);
    nil = C_nil;
    if (exception_pending()) goto v52;
    env = stack[-6];
    if (v94 == nil) goto v32;
    v94 = qvalue(elt(env, 2)); /* nil */
    goto v55;

v32:
    v94 = qvalue(elt(env, 3)); /* !*novarmsg */
    v94 = (v94 == nil ? lisp_true : nil);
    goto v55;

v208:
    v94 = stack[-5];
    v94 = qcar(v94);
    goto v67;

v65:
    v94 = qvalue(elt(env, 2)); /* nil */
    { popv(7); return onevalue(v94); }
/* error exit handlers */
v52:
    popv(7);
    return nil;
}



/* Code for setqget */

static Lisp_Object MS_CDECL CC_setqget(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v123, v67;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "setqget");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for setqget");
#endif
    if (stack >= stacklimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* end of prologue */
    v123 = qvalue(elt(env, 1)); /* fluidbibasissetq */
    v123 = qcar(v123);
    stack[-1] = v123;
    v123 = qvalue(elt(env, 1)); /* fluidbibasissetq */
    stack[0] = v123;
    v67 = stack[0];
    v123 = stack[0];
    v123 = qcdr(v123);
    v123 = qcar(v123);
    v67 = Lrplaca(nil, v67, v123);
    nil = C_nil;
    if (exception_pending()) goto v57;
    env = stack[-2];
    v123 = stack[0];
    v123 = qcdr(v123);
    v123 = qcdr(v123);
    v123 = Lrplacd(nil, v67, v123);
    nil = C_nil;
    if (exception_pending()) goto v57;
    { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
/* error exit handlers */
v57:
    popv(3);
    return nil;
}



/* Code for mk!+mat!+mult!+mat */

static Lisp_Object CC_mkLmatLmultLmat(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v272, v273, v274;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mk+mat+mult+mat");
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
    push5(nil, nil, nil, nil, nil);
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-13] = v1;
    stack[-14] = v0;
/* end of prologue */
    v272 = stack[-14];
    fn = elt(env, 7); /* matrix!+p */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    if (!(v272 == nil)) goto v60;
    v272 = qvalue(elt(env, 1)); /* !*protfg */
    if (!(v272 == nil)) goto v58;
    v272 = elt(env, 2); /* "no matrix in mult" */
    fn = elt(env, 8); /* lprie */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    goto v58;

v58:
    v272 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    goto v60;

v60:
    v272 = stack[-13];
    fn = elt(env, 7); /* matrix!+p */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    if (!(v272 == nil)) goto v2;
    v272 = qvalue(elt(env, 1)); /* !*protfg */
    if (!(v272 == nil)) goto v208;
    v272 = elt(env, 2); /* "no matrix in mult" */
    fn = elt(env, 8); /* lprie */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    goto v208;

v208:
    v272 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    goto v2;

v2:
    v272 = stack[-14];
    fn = elt(env, 9); /* get!+col!+nr */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-15] = v272;
    v272 = stack[-14];
    fn = elt(env, 10); /* get!+row!+nr */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-12] = v272;
    v272 = stack[-13];
    fn = elt(env, 9); /* get!+col!+nr */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-11] = v272;
    stack[0] = stack[-15];
    v272 = stack[-13];
    fn = elt(env, 10); /* get!+row!+nr */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    if (equal(stack[0], v272)) goto v139;
    v272 = qvalue(elt(env, 1)); /* !*protfg */
    if (!(v272 == nil)) goto v276;
    v272 = elt(env, 3); /* "matrices can not be multiplied" */
    fn = elt(env, 8); /* lprie */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    goto v276;

v276:
    v272 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    goto v139;

v139:
    v272 = (Lisp_Object)17; /* 1 */
    stack[-10] = v272;
    v273 = stack[-12];
    v272 = stack[-10];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lminusp(nil, v272);
    env = stack[-16];
    if (v272 == nil) goto v99;
    v272 = qvalue(elt(env, 4)); /* nil */
    { popv(17); return onevalue(v272); }

v99:
    v272 = (Lisp_Object)17; /* 1 */
    stack[-5] = v272;
    v273 = stack[-11];
    v272 = stack[-5];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lminusp(nil, v272);
    env = stack[-16];
    if (v272 == nil) goto v128;
    v272 = qvalue(elt(env, 4)); /* nil */
    goto v21;

v21:
    v272 = ncons(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-8] = v272;
    stack[-9] = v272;
    goto v29;

v29:
    v272 = stack[-10];
    v272 = add1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-10] = v272;
    v273 = stack[-12];
    v272 = stack[-10];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lminusp(nil, v272);
    env = stack[-16];
    if (!(v272 == nil)) { Lisp_Object res = stack[-9]; popv(17); return onevalue(res); }
    stack[-7] = stack[-8];
    v272 = (Lisp_Object)17; /* 1 */
    stack[-6] = v272;
    v273 = stack[-11];
    v272 = stack[-6];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lminusp(nil, v272);
    env = stack[-16];
    if (v272 == nil) goto v194;
    v272 = qvalue(elt(env, 4)); /* nil */
    goto v277;

v277:
    v272 = ncons(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lrplacd(nil, stack[-7], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = stack[-8];
    v272 = qcdr(v272);
    stack[-8] = v272;
    goto v29;

v194:
    v273 = qvalue(elt(env, 4)); /* nil */
    v272 = (Lisp_Object)17; /* 1 */
    v272 = cons(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[0] = v272;
    v272 = (Lisp_Object)17; /* 1 */
    stack[-1] = v272;
    goto v278;

v278:
    v273 = stack[-15];
    v272 = stack[-1];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lminusp(nil, v272);
    env = stack[-16];
    if (v272 == nil) goto v279;
    v272 = qvalue(elt(env, 5)); /* t */
    stack[-1] = qvalue(elt(env, 6)); /* !*sub2 */
    qvalue(elt(env, 6)) = v272; /* !*sub2 */
    v272 = stack[0];
    fn = elt(env, 11); /* subs2 */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v280;
    env = stack[-16];
    stack[0] = v272;
    qvalue(elt(env, 6)) = stack[-1]; /* !*sub2 */
    v272 = stack[0];
    v272 = ncons(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-4] = v272;
    stack[-5] = v272;
    goto v281;

v281:
    v272 = stack[-6];
    v272 = add1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-6] = v272;
    v273 = stack[-11];
    v272 = stack[-6];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lminusp(nil, v272);
    env = stack[-16];
    if (v272 == nil) goto v282;
    v272 = stack[-5];
    goto v277;

v282:
    stack[-3] = stack[-4];
    v273 = qvalue(elt(env, 4)); /* nil */
    v272 = (Lisp_Object)17; /* 1 */
    v272 = cons(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[0] = v272;
    v272 = (Lisp_Object)17; /* 1 */
    stack[-2] = v272;
    goto v283;

v283:
    v273 = stack[-15];
    v272 = stack[-2];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lminusp(nil, v272);
    env = stack[-16];
    if (v272 == nil) goto v284;
    v272 = qvalue(elt(env, 5)); /* t */
    stack[-1] = qvalue(elt(env, 6)); /* !*sub2 */
    qvalue(elt(env, 6)) = v272; /* !*sub2 */
    v272 = stack[0];
    fn = elt(env, 11); /* subs2 */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-16];
    stack[0] = v272;
    qvalue(elt(env, 6)) = stack[-1]; /* !*sub2 */
    v272 = stack[0];
    v272 = ncons(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lrplacd(nil, stack[-3], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = stack[-4];
    v272 = qcdr(v272);
    stack[-4] = v272;
    goto v281;

v284:
    stack[-1] = stack[0];
    v274 = stack[-14];
    v273 = stack[-10];
    v272 = stack[-2];
    fn = elt(env, 12); /* get!+mat!+entry */
    stack[0] = (*qfnn(fn))(qenv(fn), 3, v274, v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v274 = stack[-13];
    v273 = stack[-2];
    v272 = stack[-6];
    fn = elt(env, 12); /* get!+mat!+entry */
    v272 = (*qfnn(fn))(qenv(fn), 3, v274, v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    fn = elt(env, 13); /* multsq */
    v272 = (*qfn2(fn))(qenv(fn), stack[0], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    fn = elt(env, 14); /* addsq */
    v272 = (*qfn2(fn))(qenv(fn), stack[-1], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[0] = v272;
    v272 = stack[-2];
    v272 = add1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-2] = v272;
    goto v283;

v279:
    stack[-2] = stack[0];
    v274 = stack[-14];
    v273 = stack[-10];
    v272 = stack[-1];
    fn = elt(env, 12); /* get!+mat!+entry */
    stack[0] = (*qfnn(fn))(qenv(fn), 3, v274, v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v274 = stack[-13];
    v273 = stack[-1];
    v272 = stack[-6];
    fn = elt(env, 12); /* get!+mat!+entry */
    v272 = (*qfnn(fn))(qenv(fn), 3, v274, v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    fn = elt(env, 13); /* multsq */
    v272 = (*qfn2(fn))(qenv(fn), stack[0], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    fn = elt(env, 14); /* addsq */
    v272 = (*qfn2(fn))(qenv(fn), stack[-2], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[0] = v272;
    v272 = stack[-1];
    v272 = add1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-1] = v272;
    goto v278;

v128:
    v273 = qvalue(elt(env, 4)); /* nil */
    v272 = (Lisp_Object)17; /* 1 */
    v272 = cons(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[0] = v272;
    v272 = (Lisp_Object)17; /* 1 */
    stack[-1] = v272;
    goto v107;

v107:
    v273 = stack[-15];
    v272 = stack[-1];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lminusp(nil, v272);
    env = stack[-16];
    if (v272 == nil) goto v286;
    v272 = qvalue(elt(env, 5)); /* t */
    stack[-1] = qvalue(elt(env, 6)); /* !*sub2 */
    qvalue(elt(env, 6)) = v272; /* !*sub2 */
    v272 = stack[0];
    fn = elt(env, 11); /* subs2 */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v287;
    env = stack[-16];
    stack[0] = v272;
    qvalue(elt(env, 6)) = stack[-1]; /* !*sub2 */
    v272 = stack[0];
    v272 = ncons(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-3] = v272;
    stack[-4] = v272;
    goto v20;

v20:
    v272 = stack[-5];
    v272 = add1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-5] = v272;
    v273 = stack[-11];
    v272 = stack[-5];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lminusp(nil, v272);
    env = stack[-16];
    if (v272 == nil) goto v288;
    v272 = stack[-4];
    goto v21;

v288:
    stack[-2] = stack[-3];
    v273 = qvalue(elt(env, 4)); /* nil */
    v272 = (Lisp_Object)17; /* 1 */
    v272 = cons(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[0] = v272;
    v272 = (Lisp_Object)17; /* 1 */
    stack[-1] = v272;
    goto v111;

v111:
    v273 = stack[-15];
    v272 = stack[-1];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lminusp(nil, v272);
    env = stack[-16];
    if (v272 == nil) goto v289;
    v272 = qvalue(elt(env, 5)); /* t */
    stack[-1] = qvalue(elt(env, 6)); /* !*sub2 */
    qvalue(elt(env, 6)) = v272; /* !*sub2 */
    v272 = stack[0];
    fn = elt(env, 11); /* subs2 */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-16];
    stack[0] = v272;
    qvalue(elt(env, 6)) = stack[-1]; /* !*sub2 */
    v272 = stack[0];
    v272 = ncons(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = Lrplacd(nil, stack[-2], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v272 = stack[-3];
    v272 = qcdr(v272);
    stack[-3] = v272;
    goto v20;

v289:
    stack[-6] = stack[0];
    v274 = stack[-14];
    v273 = stack[-10];
    v272 = stack[-1];
    fn = elt(env, 12); /* get!+mat!+entry */
    stack[0] = (*qfnn(fn))(qenv(fn), 3, v274, v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v274 = stack[-13];
    v273 = stack[-1];
    v272 = stack[-5];
    fn = elt(env, 12); /* get!+mat!+entry */
    v272 = (*qfnn(fn))(qenv(fn), 3, v274, v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    fn = elt(env, 13); /* multsq */
    v272 = (*qfn2(fn))(qenv(fn), stack[0], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    fn = elt(env, 14); /* addsq */
    v272 = (*qfn2(fn))(qenv(fn), stack[-6], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[0] = v272;
    v272 = stack[-1];
    v272 = add1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-1] = v272;
    goto v111;

v286:
    stack[-2] = stack[0];
    v274 = stack[-14];
    v273 = stack[-10];
    v272 = stack[-1];
    fn = elt(env, 12); /* get!+mat!+entry */
    stack[0] = (*qfnn(fn))(qenv(fn), 3, v274, v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    v274 = stack[-13];
    v273 = stack[-1];
    v272 = stack[-5];
    fn = elt(env, 12); /* get!+mat!+entry */
    v272 = (*qfnn(fn))(qenv(fn), 3, v274, v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    fn = elt(env, 13); /* multsq */
    v272 = (*qfn2(fn))(qenv(fn), stack[0], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    fn = elt(env, 14); /* addsq */
    v272 = (*qfn2(fn))(qenv(fn), stack[-2], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[0] = v272;
    v272 = stack[-1];
    v272 = add1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-16];
    stack[-1] = v272;
    goto v107;
/* error exit handlers */
v290:
    env = stack[-16];
    qvalue(elt(env, 6)) = stack[-1]; /* !*sub2 */
    popv(17);
    return nil;
v287:
    env = stack[-16];
    qvalue(elt(env, 6)) = stack[-1]; /* !*sub2 */
    popv(17);
    return nil;
v285:
    env = stack[-16];
    qvalue(elt(env, 6)) = stack[-1]; /* !*sub2 */
    popv(17);
    return nil;
v280:
    env = stack[-16];
    qvalue(elt(env, 6)) = stack[-1]; /* !*sub2 */
    popv(17);
    return nil;
v275:
    popv(17);
    return nil;
}



/* Code for ratpoly_lc */

static Lisp_Object CC_ratpoly_lc(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v37, v60;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ratpoly_lc");
#endif
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
    v37 = stack[0];
    v37 = qcar(v37);
    fn = elt(env, 1); /* numpoly_lc */
    v60 = (*qfn1(fn))(qenv(fn), v37);
    nil = C_nil;
    if (exception_pending()) goto v68;
    v37 = stack[0];
    v37 = qcdr(v37);
    popv(1);
    return cons(v60, v37);
/* error exit handlers */
v68:
    popv(1);
    return nil;
}



/* Code for getsetvars */

static Lisp_Object CC_getsetvars(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v148, v150;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for getsetvars");
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
    stack[-1] = nil;
    goto v84;

v84:
    v148 = stack[0];
    if (!consp(v148)) goto v76;
    v148 = stack[0];
    v150 = qcar(v148);
    v148 = elt(env, 1); /* (setel setk) */
    v148 = Lmemq(nil, v150, v148);
    if (v148 == nil) goto v34;
    v148 = stack[0];
    v148 = qcdr(v148);
    v148 = qcar(v148);
    fn = elt(env, 3); /* getsetvarlis */
    v150 = (*qfn1(fn))(qenv(fn), v148);
    nil = C_nil;
    if (exception_pending()) goto v135;
    env = stack[-2];
    v148 = stack[-1];
    v148 = cons(v150, v148);
    nil = C_nil;
    if (exception_pending()) goto v135;
    env = stack[-2];
    stack[-1] = v148;
    v148 = stack[0];
    v148 = qcdr(v148);
    v148 = qcdr(v148);
    v148 = qcar(v148);
    stack[0] = v148;
    goto v84;

v34:
    v148 = stack[0];
    v150 = qcar(v148);
    v148 = elt(env, 2); /* setq */
    if (v150 == v148) goto v27;
    v148 = stack[-1];
    {
        popv(3);
        fn = elt(env, 4); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v148);
    }

v27:
    v148 = stack[0];
    v148 = qcdr(v148);
    v148 = qcar(v148);
    v150 = Lmkquote(nil, v148);
    nil = C_nil;
    if (exception_pending()) goto v135;
    env = stack[-2];
    v148 = stack[-1];
    v148 = cons(v150, v148);
    nil = C_nil;
    if (exception_pending()) goto v135;
    env = stack[-2];
    stack[-1] = v148;
    v148 = stack[0];
    v148 = qcdr(v148);
    v148 = qcdr(v148);
    v148 = qcar(v148);
    stack[0] = v148;
    goto v84;

v76:
    v148 = stack[-1];
    {
        popv(3);
        fn = elt(env, 4); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v148);
    }
/* error exit handlers */
v135:
    popv(3);
    return nil;
}



/* Code for merge!-ind!-vars */

static Lisp_Object CC_mergeKindKvars(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v149, v32;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for merge-ind-vars");
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
    v149 = qvalue(elt(env, 1)); /* !*nocommutedf */
    if (!(v149 == nil)) goto v208;
    v149 = qvalue(elt(env, 2)); /* !*commutedf */
    if (v149 == nil) goto v38;
    v149 = qvalue(elt(env, 3)); /* nil */
    goto v126;

v126:
    if (!(v149 == nil)) goto v208;
    v32 = stack[0];
    v149 = stack[-1];
    v149 = qcdr(v149);
    v149 = qcdr(v149);
    {
        popv(4);
        fn = elt(env, 4); /* derad */
        return (*qfn2(fn))(qenv(fn), v32, v149);
    }

v208:
    v32 = stack[0];
    v149 = stack[-1];
    v149 = qcdr(v149);
    v149 = qcdr(v149);
    {
        popv(4);
        fn = elt(env, 5); /* derad!* */
        return (*qfn2(fn))(qenv(fn), v32, v149);
    }

v38:
    v149 = stack[-1];
    v149 = qcdr(v149);
    stack[-2] = qcar(v149);
    v32 = stack[0];
    v149 = stack[-1];
    v149 = qcdr(v149);
    v149 = qcdr(v149);
    v149 = cons(v32, v149);
    nil = C_nil;
    if (exception_pending()) goto v141;
    env = stack[-3];
    v149 = Lmemq(nil, stack[-2], v149);
    goto v126;
/* error exit handlers */
v141:
    popv(4);
    return nil;
}



/* Code for vdpsave */

static Lisp_Object CC_vdpsave(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object v71;
#ifdef DEBUG
    if (check_env(env)) return aerror("env for vdpsave");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v71 = v0;
/* end of prologue */
    return onevalue(v71);
}



/* Code for prinlatom */

static Lisp_Object CC_prinlatom(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v150, v291;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for prinlatom");
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
    v291 = stack[-1];
    v150 = elt(env, 1); /* font */
    v150 = get(v291, v150);
    env = stack[-3];
    stack[-2] = v150;
    if (v150 == nil) goto v64;
    v150 = stack[-2];
    fn = elt(env, 5); /* prin2la */
    v150 = (*qfn1(fn))(qenv(fn), v150);
    nil = C_nil;
    if (exception_pending()) goto v145;
    env = stack[-3];
    goto v64;

v64:
    v291 = stack[-1];
    v150 = elt(env, 2); /* accent */
    v150 = get(v291, v150);
    env = stack[-3];
    stack[0] = v150;
    if (v150 == nil) goto v70;
    v150 = stack[0];
    fn = elt(env, 5); /* prin2la */
    v150 = (*qfn1(fn))(qenv(fn), v150);
    nil = C_nil;
    if (exception_pending()) goto v145;
    env = stack[-3];
    goto v70;

v70:
    v291 = stack[-1];
    v150 = elt(env, 3); /* name */
    v150 = get(v291, v150);
    env = stack[-3];
    v291 = v150;
    if (v150 == nil) goto v153;
    v150 = v291;
    fn = elt(env, 5); /* prin2la */
    v150 = (*qfn1(fn))(qenv(fn), v150);
    nil = C_nil;
    if (exception_pending()) goto v145;
    env = stack[-3];
    goto v45;

v45:
    v150 = stack[0];
    if (v150 == nil) goto v147;
    v150 = elt(env, 4); /* "}" */
    fn = elt(env, 5); /* prin2la */
    v150 = (*qfn1(fn))(qenv(fn), v150);
    nil = C_nil;
    if (exception_pending()) goto v145;
    env = stack[-3];
    goto v147;

v147:
    v150 = stack[-2];
    if (v150 == nil) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v150 = elt(env, 4); /* "}" */
    fn = elt(env, 5); /* prin2la */
    v150 = (*qfn1(fn))(qenv(fn), v150);
    nil = C_nil;
    if (exception_pending()) goto v145;
    { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }

v153:
    v150 = stack[-1];
    fn = elt(env, 6); /* testchar1 */
    v150 = (*qfn1(fn))(qenv(fn), v150);
    nil = C_nil;
    if (exception_pending()) goto v145;
    env = stack[-3];
    fn = elt(env, 5); /* prin2la */
    v150 = (*qfn1(fn))(qenv(fn), v150);
    nil = C_nil;
    if (exception_pending()) goto v145;
    env = stack[-3];
    goto v45;
/* error exit handlers */
v145:
    popv(4);
    return nil;
}



/* Code for insertparens */

static Lisp_Object CC_insertparens(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v36;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for insertparens");
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
    v36 = v0;
/* end of prologue */
    stack[-1] = elt(env, 1); /* !( */
    stack[0] = v36;
    v36 = elt(env, 2); /* !) */
    v36 = ncons(v36);
    nil = C_nil;
    if (exception_pending()) goto v59;
    env = stack[-2];
    v36 = Lappend(nil, stack[0], v36);
    nil = C_nil;
    if (exception_pending()) goto v59;
    {
        Lisp_Object v58 = stack[-1];
        popv(3);
        return cons(v58, v36);
    }
/* error exit handlers */
v59:
    popv(3);
    return nil;
}



/* Code for deleteall */

static Lisp_Object CC_deleteall(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v208, v69, v70, v34;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for deleteall");
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
    v70 = nil;
    goto v75;

v75:
    v208 = stack[0];
    if (v208 == nil) { popv(4); return onevalue(v70); }
    v208 = stack[0];
    v208 = qcar(v208);
    v34 = v208;
    v208 = stack[0];
    v208 = qcdr(v208);
    stack[0] = v208;
    v69 = v34;
    v208 = stack[-1];
    if (equal(v69, v208)) goto v75;
    stack[-2] = v70;
    v208 = v34;
    v208 = ncons(v208);
    nil = C_nil;
    if (exception_pending()) goto v114;
    env = stack[-3];
    v208 = Lnconc(nil, stack[-2], v208);
    nil = C_nil;
    if (exception_pending()) goto v114;
    env = stack[-3];
    v70 = v208;
    goto v75;
/* error exit handlers */
v114:
    popv(4);
    return nil;
}



/* Code for lesspcdr */

static Lisp_Object CC_lesspcdr(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v37, v60;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lesspcdr");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v37 = v1;
    v60 = v0;
/* end of prologue */
    v60 = qcdr(v60);
    v37 = qcdr(v37);
        return Llessp(nil, v60, v37);
}



/* Code for set!-global!-mode */

static Lisp_Object CC_setKglobalKmode(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v64;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for set-global-mode");
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
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0;
/* end of prologue */
    v64 = qvalue(elt(env, 1)); /* nil */
    v64 = ncons(v64);
    nil = C_nil;
    if (exception_pending()) goto v48;
    env = stack[-4];
    qvalue(elt(env, 2)) = v64; /* alglist!* */
    v64 = stack[-2];
    qvalue(elt(env, 3)) = v64; /* !*mode */
    stack[-3] = elt(env, 4); /* null */
    stack[-1] = elt(env, 5); /* setq */
    stack[0] = elt(env, 3); /* !*mode */
    v64 = stack[-2];
    v64 = Lmkquote(nil, v64);
    nil = C_nil;
    if (exception_pending()) goto v48;
    env = stack[-4];
    v64 = list3(stack[-1], stack[0], v64);
    nil = C_nil;
    if (exception_pending()) goto v48;
    {
        Lisp_Object v57 = stack[-3];
        popv(5);
        return list2(v57, v64);
    }
/* error exit handlers */
v48:
    popv(5);
    return nil;
}



/* Code for setk */

static Lisp_Object CC_setk(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v132, v51, v294;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for setk");
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
    v51 = v0;
/* end of prologue */
    v132 = v51;
    if (!consp(v132)) goto v12;
    v132 = v51;
    v294 = qcar(v132);
    v132 = elt(env, 1); /* evalargfn */
    v132 = get(v294, v132);
    env = stack[-2];
    v294 = v132;
    v132 = v294;
    if (v132 == nil) goto v147;
    v132 = v51;
    stack[-1] = qcar(v132);
    v132 = v294;
    v51 = qcdr(v51);
    v132 = Lapply1(nil, v132, v51);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-2];
    v51 = cons(stack[-1], v132);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-2];
    v132 = stack[0];
    {
        popv(3);
        fn = elt(env, 4); /* setk0 */
        return (*qfn2(fn))(qenv(fn), v51, v132);
    }

v147:
    v132 = v51;
    v294 = qcar(v132);
    v132 = elt(env, 2); /* rtype */
    v294 = get(v294, v132);
    env = stack[-2];
    v132 = elt(env, 3); /* matrix */
    if (v294 == v132) goto v295;
    v132 = v51;
    stack[-1] = qcar(v132);
    v132 = v51;
    v132 = qcdr(v132);
    fn = elt(env, 5); /* revlis */
    v132 = (*qfn1(fn))(qenv(fn), v132);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-2];
    v51 = cons(stack[-1], v132);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-2];
    v132 = stack[0];
    {
        popv(3);
        fn = elt(env, 4); /* setk0 */
        return (*qfn2(fn))(qenv(fn), v51, v132);
    }

v295:
    v132 = stack[0];
    {
        popv(3);
        fn = elt(env, 4); /* setk0 */
        return (*qfn2(fn))(qenv(fn), v51, v132);
    }

v12:
    v132 = stack[0];
    {
        popv(3);
        fn = elt(env, 4); /* setk0 */
        return (*qfn2(fn))(qenv(fn), v51, v132);
    }
/* error exit handlers */
v212:
    popv(3);
    return nil;
}



/* Code for sf_member */

static Lisp_Object CC_sf_member(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v134, v292;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for sf_member");
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
    stack[-1] = v0;
/* end of prologue */

v112:
    v134 = stack[0];
    if (!consp(v134)) goto v83;
    v134 = stack[0];
    v134 = qcar(v134);
    v134 = (consp(v134) ? nil : lisp_true);
    goto v76;

v76:
    if (v134 == nil) goto v66;
    v134 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v134); }

v66:
    v292 = stack[-1];
    v134 = stack[0];
    v134 = qcar(v134);
    v134 = qcar(v134);
    v134 = qcar(v134);
    if (equal(v292, v134)) goto v44;
    v134 = stack[0];
    v134 = qcar(v134);
    v134 = qcar(v134);
    v134 = qcar(v134);
    if (!consp(v134)) goto v214;
    v292 = stack[-1];
    v134 = stack[0];
    v134 = qcar(v134);
    v134 = qcar(v134);
    v134 = qcar(v134);
    v134 = qcdr(v134);
    fn = elt(env, 3); /* arglist_member */
    v134 = (*qfn2(fn))(qenv(fn), v292, v134);
    nil = C_nil;
    if (exception_pending()) goto v26;
    env = stack[-2];
    goto v58;

v58:
    if (!(v134 == nil)) { popv(3); return onevalue(v134); }
    v292 = stack[-1];
    v134 = stack[0];
    v134 = qcar(v134);
    v134 = qcdr(v134);
    v134 = CC_sf_member(env, v292, v134);
    nil = C_nil;
    if (exception_pending()) goto v26;
    env = stack[-2];
    if (!(v134 == nil)) { popv(3); return onevalue(v134); }
    v292 = stack[-1];
    v134 = stack[0];
    v134 = qcdr(v134);
    stack[-1] = v292;
    stack[0] = v134;
    goto v112;

v214:
    v134 = qvalue(elt(env, 2)); /* nil */
    goto v58;

v44:
    v134 = qvalue(elt(env, 1)); /* t */
    goto v58;

v83:
    v134 = qvalue(elt(env, 1)); /* t */
    goto v76;
/* error exit handlers */
v26:
    popv(3);
    return nil;
}



/* Code for dl_get2 */

static Lisp_Object CC_dl_get2(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v31, v73, v114, v209;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dl_get2");
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
    v73 = v1;
    v114 = v0;
/* end of prologue */

v74:
    v31 = v114;
    if (v31 == nil) { popv(2); return onevalue(v73); }
    v31 = v114;
    v209 = qcar(v31);
    v31 = elt(env, 1); /* dummy */
    v31 = get(v209, v31);
    env = stack[-1];
    if (v31 == nil) goto v69;
    v31 = v114;
    v31 = qcdr(v31);
    stack[0] = v31;
    v31 = v114;
    v114 = qcar(v31);
    v31 = qvalue(elt(env, 2)); /* nil */
    fn = elt(env, 3); /* di_insert */
    v31 = (*qfnn(fn))(qenv(fn), 3, v114, v73, v31);
    nil = C_nil;
    if (exception_pending()) goto v185;
    env = stack[-1];
    v73 = v31;
    v31 = stack[0];
    v114 = v31;
    goto v74;

v69:
    v31 = v114;
    v31 = qcdr(v31);
    v114 = v31;
    goto v74;
/* error exit handlers */
v185:
    popv(2);
    return nil;
}



/* Code for ilcm */

static Lisp_Object CC_ilcm(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v145, v143, v136, v152;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ilcm");
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
    v136 = v1;
    v152 = v0;
/* end of prologue */
    v143 = v152;
    v145 = (Lisp_Object)1; /* 0 */
    if (v143 == v145) goto v83;
    v143 = v136;
    v145 = (Lisp_Object)1; /* 0 */
    v145 = (v143 == v145 ? lisp_true : nil);
    goto v76;

v76:
    if (v145 == nil) goto v57;
    v145 = (Lisp_Object)1; /* 0 */
    { popv(3); return onevalue(v145); }

v57:
    v143 = v152;
    v145 = (Lisp_Object)17; /* 1 */
    if (v143 == v145) { popv(3); return onevalue(v136); }
    v143 = v136;
    v145 = (Lisp_Object)17; /* 1 */
    if (v143 == v145) { popv(3); return onevalue(v152); }
    stack[-1] = v152;
    stack[0] = v136;
    v145 = v152;
    v143 = v136;
    v145 = Lgcd(nil, v145, v143);
    nil = C_nil;
    if (exception_pending()) goto v28;
    env = stack[-2];
    v145 = quot2(stack[0], v145);
    nil = C_nil;
    if (exception_pending()) goto v28;
    {
        Lisp_Object v99 = stack[-1];
        popv(3);
        return times2(v99, v145);
    }

v83:
    v145 = qvalue(elt(env, 1)); /* t */
    goto v76;
/* error exit handlers */
v28:
    popv(3);
    return nil;
}



/* Code for reverse!-num */

static Lisp_Object CC_reverseKnum(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v153, v27;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for reverse-num");
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
    v27 = stack[0];
    v153 = (Lisp_Object)1; /* 0 */
    if (v27 == v153) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v27 = stack[0];
    v153 = (Lisp_Object)1; /* 0 */
    v153 = (Lisp_Object)lessp2(v27, v153);
    nil = C_nil;
    if (exception_pending()) goto v54;
    v153 = v153 ? lisp_true : nil;
    env = stack[-2];
    if (v153 == nil) goto v70;
    v153 = stack[0];
    stack[-1] = negate(v153);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-2];
    v153 = stack[0];
    v153 = negate(v153);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-2];
    fn = elt(env, 1); /* ilog2 */
    v153 = (*qfn1(fn))(qenv(fn), v153);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-2];
    v153 = add1(v153);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-2];
    fn = elt(env, 2); /* reverse!-num1 */
    v153 = (*qfn2(fn))(qenv(fn), stack[-1], v153);
    nil = C_nil;
    if (exception_pending()) goto v54;
    popv(3);
    return negate(v153);

v70:
    stack[-1] = stack[0];
    v153 = stack[0];
    fn = elt(env, 1); /* ilog2 */
    v153 = (*qfn1(fn))(qenv(fn), v153);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-2];
    v153 = add1(v153);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-2];
    {
        Lisp_Object v293 = stack[-1];
        popv(3);
        fn = elt(env, 2); /* reverse!-num1 */
        return (*qfn2(fn))(qenv(fn), v293, v153);
    }
/* error exit handlers */
v54:
    popv(3);
    return nil;
}



/* Code for readprogn */

static Lisp_Object MS_CDECL CC_readprogn(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v54, v293;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "readprogn");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for readprogn");
#endif
    if (stack >= stacklimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* end of prologue */
    stack[0] = nil;
    goto v38;

v38:
    fn = elt(env, 7); /* scan */
    v54 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-1];
    v54 = qvalue(elt(env, 1)); /* !*eoldelimp */
    if (v54 == nil) goto v36;
    v293 = qvalue(elt(env, 2)); /* cursym!* */
    v54 = elt(env, 3); /* !*semicol!* */
    if (v293 == v54) goto v38;
    else goto v36;

v36:
    v54 = elt(env, 4); /* group */
    fn = elt(env, 8); /* xread1 */
    v54 = (*qfn1(fn))(qenv(fn), v54);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-1];
    v54 = ncons(v54);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-1];
    v54 = Lnconc(nil, stack[0], v54);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-1];
    stack[0] = v54;
    v293 = qvalue(elt(env, 2)); /* cursym!* */
    v54 = elt(env, 5); /* !*rsqbkt!* */
    if (!(v293 == v54)) goto v38;
    fn = elt(env, 7); /* scan */
    v54 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-1];
    v293 = elt(env, 6); /* progn */
    v54 = stack[0];
    popv(2);
    return cons(v293, v54);
/* error exit handlers */
v115:
    popv(2);
    return nil;
}



/* Code for ibalp_initwl */

static Lisp_Object CC_ibalp_initwl(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v301, v167;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ibalp_initwl");
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
    push(nil);
/* copy arguments values to proper place */
    v301 = v0;
/* end of prologue */
    stack[-4] = nil;
    stack[-2] = v301;
    goto v125;

v125:
    v301 = stack[-2];
    if (v301 == nil) { Lisp_Object res = stack[-4]; popv(7); return onevalue(res); }
    v301 = stack[-2];
    v301 = qcar(v301);
    stack[-1] = v301;
    v301 = (Lisp_Object)1; /* 0 */
    stack[-5] = v301;
    v301 = stack[-1];
    v301 = qcar(v301);
    stack[-3] = v301;
    goto v45;

v45:
    v167 = stack[-5];
    v301 = (Lisp_Object)33; /* 2 */
    v301 = Leqn(nil, v167, v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    if (v301 == nil) goto v61;
    v301 = qvalue(elt(env, 1)); /* nil */
    goto v57;

v57:
    if (v301 == nil) goto v66;
    v301 = stack[-1];
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    stack[0] = qcdr(v301);
    v301 = stack[-3];
    v167 = qcar(v301);
    v301 = stack[-1];
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcar(v301);
    v301 = cons(v167, v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    fn = elt(env, 2); /* setcar */
    v301 = (*qfn2(fn))(qenv(fn), stack[0], v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    v301 = stack[-3];
    v301 = qcar(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    stack[0] = qcdr(v301);
    v167 = stack[-1];
    v301 = stack[-3];
    v301 = qcar(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcar(v301);
    v301 = cons(v167, v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    fn = elt(env, 2); /* setcar */
    v301 = (*qfn2(fn))(qenv(fn), stack[0], v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    v301 = stack[-5];
    v301 = add1(v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    stack[-5] = v301;
    v301 = stack[-3];
    v301 = qcdr(v301);
    stack[-3] = v301;
    goto v45;

v66:
    v301 = stack[-1];
    v301 = qcdr(v301);
    v301 = qcar(v301);
    stack[-3] = v301;
    goto v303;

v303:
    v167 = stack[-5];
    v301 = (Lisp_Object)33; /* 2 */
    v301 = Leqn(nil, v167, v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    if (v301 == nil) goto v304;
    v301 = qvalue(elt(env, 1)); /* nil */
    goto v182;

v182:
    if (v301 == nil) goto v105;
    v301 = stack[-1];
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    stack[0] = qcdr(v301);
    v301 = stack[-3];
    v167 = qcar(v301);
    v301 = stack[-1];
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcar(v301);
    v301 = cons(v167, v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    fn = elt(env, 2); /* setcar */
    v301 = (*qfn2(fn))(qenv(fn), stack[0], v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    v301 = stack[-3];
    v301 = qcar(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    stack[0] = qcdr(v301);
    v167 = stack[-1];
    v301 = stack[-3];
    v301 = qcar(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcdr(v301);
    v301 = qcar(v301);
    v301 = cons(v167, v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    fn = elt(env, 2); /* setcar */
    v301 = (*qfn2(fn))(qenv(fn), stack[0], v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    v301 = stack[-5];
    v301 = add1(v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    stack[-5] = v301;
    v301 = stack[-3];
    v301 = qcdr(v301);
    stack[-3] = v301;
    goto v303;

v105:
    v167 = stack[-5];
    v301 = (Lisp_Object)33; /* 2 */
    v301 = (Lisp_Object)lessp2(v167, v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    v301 = v301 ? lisp_true : nil;
    env = stack[-6];
    if (v301 == nil) goto v204;
    v167 = stack[-1];
    v301 = stack[-4];
    v301 = cons(v167, v301);
    nil = C_nil;
    if (exception_pending()) goto v302;
    env = stack[-6];
    stack[-4] = v301;
    goto v204;

v204:
    v301 = stack[-2];
    v301 = qcdr(v301);
    stack[-2] = v301;
    goto v125;

v304:
    v301 = stack[-3];
    goto v182;

v61:
    v301 = stack[-3];
    goto v57;
/* error exit handlers */
v302:
    popv(7);
    return nil;
}



/* Code for poly!-minusp */

static Lisp_Object CC_polyKminusp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v48, v57;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for poly-minusp");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v48 = v0;
/* end of prologue */

v43:
    v57 = v48;
    if (v57 == nil) goto v75;
    v57 = v48;
    if (!consp(v57)) goto v38;
    v57 = v48;
    v57 = qcar(v57);
    v57 = (consp(v57) ? nil : lisp_true);
    goto v60;

v60:
    if (v57 == nil) goto v64;
        return Lminusp(nil, v48);

v64:
    v48 = qcar(v48);
    v48 = qcdr(v48);
    goto v43;

v38:
    v57 = qvalue(elt(env, 2)); /* t */
    goto v60;

v75:
    v48 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v48);
}



/* Code for ofsf_sacat */

static Lisp_Object MS_CDECL CC_ofsf_sacat(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v72, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v151, v184, v141, v117;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "ofsf_sacat");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ofsf_sacat");
#endif
    if (stack >= stacklimit)
    {
        push3(v72,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v72);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v141 = v72;
    v117 = v1;
    stack[0] = v0;
/* end of prologue */
    v151 = stack[0];
    v151 = qcdr(v151);
    v184 = qcar(v151);
    v151 = v117;
    v151 = qcdr(v151);
    v151 = qcar(v151);
    if (equal(v184, v151)) goto v65;
    v151 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v151); }

v65:
    v151 = stack[0];
    v151 = qcar(v151);
    v184 = v117;
    v184 = qcar(v184);
    fn = elt(env, 3); /* ofsf_sacrel */
    v151 = (*qfnn(fn))(qenv(fn), 3, v151, v184, v141);
    nil = C_nil;
    if (exception_pending()) goto v295;
    env = stack[-1];
    v141 = v151;
    v184 = v141;
    v151 = elt(env, 2); /* (drop keep keep1 keep2) */
    v151 = Lmemq(nil, v184, v151);
    if (!(v151 == nil)) { popv(2); return onevalue(v141); }
    v184 = v141;
    v151 = stack[0];
    v151 = qcdr(v151);
    v151 = qcar(v151);
    v141 = qvalue(elt(env, 1)); /* nil */
    popv(2);
    return list3(v184, v151, v141);
/* error exit handlers */
v295:
    popv(2);
    return nil;
}



/* Code for ir2om */

static Lisp_Object CC_ir2om(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v68;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ir2om");
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
    v68 = (Lisp_Object)33; /* 2 */
    qvalue(elt(env, 1)) = v68; /* ind */
    v68 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 2)) = v68; /* indent */
    v68 = elt(env, 3); /* "<OMOBJ>" */
    fn = elt(env, 7); /* printout */
    v68 = (*qfn1(fn))(qenv(fn), v68);
    nil = C_nil;
    if (exception_pending()) goto v36;
    env = stack[-1];
    v68 = qvalue(elt(env, 4)); /* t */
    fn = elt(env, 8); /* indent!* */
    v68 = (*qfn1(fn))(qenv(fn), v68);
    nil = C_nil;
    if (exception_pending()) goto v36;
    env = stack[-1];
    v68 = stack[0];
    fn = elt(env, 9); /* objectom */
    v68 = (*qfn1(fn))(qenv(fn), v68);
    nil = C_nil;
    if (exception_pending()) goto v36;
    env = stack[-1];
    v68 = qvalue(elt(env, 5)); /* nil */
    fn = elt(env, 8); /* indent!* */
    v68 = (*qfn1(fn))(qenv(fn), v68);
    nil = C_nil;
    if (exception_pending()) goto v36;
    env = stack[-1];
    v68 = elt(env, 6); /* "</OMOBJ>" */
    fn = elt(env, 7); /* printout */
    v68 = (*qfn1(fn))(qenv(fn), v68);
    nil = C_nil;
    if (exception_pending()) goto v36;
    v68 = nil;
    { popv(2); return onevalue(v68); }
/* error exit handlers */
v36:
    popv(2);
    return nil;
}



/* Code for cr!:minusp */

static Lisp_Object CC_crTminusp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v54, v293, v147;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for cr:minusp");
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
/* copy arguments values to proper place */
    v54 = v0;
/* end of prologue */
    v293 = v54;
    v293 = qcdr(v293);
    v293 = qcar(v293);
    v54 = qcdr(v54);
    v54 = qcdr(v54);
    v147 = v293;
    v293 = v54;
    v54 = v147;
    if (!consp(v54)) goto v98;
    v54 = v293;
    v54 = qcar(v54);
    v54 = (Lisp_Object)zerop(v54);
    v54 = v54 ? lisp_true : nil;
    env = stack[0];
    if (v54 == nil) goto v45;
    v54 = v147;
    v293 = qcar(v54);
    v54 = (Lisp_Object)1; /* 0 */
        popv(1);
        return Llessp(nil, v293, v54);

v45:
    v54 = qvalue(elt(env, 1)); /* nil */
    { popv(1); return onevalue(v54); }

v98:
    v54 = v293;
    v54 = (Lisp_Object)zerop(v54);
    v54 = v54 ? lisp_true : nil;
    env = stack[0];
    if (v54 == nil) goto v113;
    v293 = v147;
    v54 = (Lisp_Object)1; /* 0 */
        popv(1);
        return Llessp(nil, v293, v54);

v113:
    v54 = qvalue(elt(env, 1)); /* nil */
    { popv(1); return onevalue(v54); }
}



/* Code for xord_deglex */

static Lisp_Object CC_xord_deglex(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v141, v117, v276, v295;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for xord_deglex");
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
    v141 = stack[-1];
    v117 = qcar(v141);
    v141 = (Lisp_Object)17; /* 1 */
    if (v117 == v141) goto v84;
    v141 = stack[0];
    v117 = qcar(v141);
    v141 = (Lisp_Object)17; /* 1 */
    if (v117 == v141) goto v68;
    v141 = stack[-1];
    fn = elt(env, 3); /* xdegreemon */
    stack[-2] = (*qfn1(fn))(qenv(fn), v141);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-3];
    v141 = stack[0];
    fn = elt(env, 3); /* xdegreemon */
    v141 = (*qfn1(fn))(qenv(fn), v141);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-3];
    v295 = stack[-2];
    v276 = v141;
    v117 = v295;
    v141 = v276;
    if (equal(v117, v141)) goto v55;
    v141 = v295;
    v117 = v276;
        popv(4);
        return Lgreaterp(nil, v141, v117);

v55:
    v117 = stack[-1];
    v141 = stack[0];
    {
        popv(4);
        fn = elt(env, 4); /* xord_lex */
        return (*qfn2(fn))(qenv(fn), v117, v141);
    }

v68:
    v141 = qvalue(elt(env, 2)); /* t */
    { popv(4); return onevalue(v141); }

v84:
    v141 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v141); }
/* error exit handlers */
v144:
    popv(4);
    return nil;
}



/* Code for fortranname */

static Lisp_Object CC_fortranname(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v150, v291;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for fortranname");
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
    v150 = stack[0];
    v150 = Lstringp(nil, v150);
    env = stack[-1];
    if (v150 == nil) goto v68;
    v150 = stack[0];
    {
        popv(2);
        fn = elt(env, 9); /* stringtoatom */
        return (*qfn1(fn))(qenv(fn), v150);
    }

v68:
    v291 = stack[0];
    v150 = qvalue(elt(env, 1)); /* !*notfortranfuns!* */
    v150 = Lmemq(nil, v291, v150);
    if (v150 == nil) goto v37;
    v150 = qvalue(elt(env, 2)); /* !*stdout!* */
    v150 = qcdr(v150);
    v150 = Lwrs(nil, v150);
    nil = C_nil;
    if (exception_pending()) goto v135;
    env = stack[-1];
    v150 = elt(env, 3); /* "*** WARNING: " */
    v150 = Lprinc(nil, v150);
    nil = C_nil;
    if (exception_pending()) goto v135;
    env = stack[-1];
    v150 = stack[0];
    v150 = Lprin(nil, v150);
    nil = C_nil;
    if (exception_pending()) goto v135;
    env = stack[-1];
    v150 = elt(env, 4); /* " is not an intrinsic Fortran function" */
    v150 = Lprinc(nil, v150);
    nil = C_nil;
    if (exception_pending()) goto v135;
    env = stack[-1];
    v150 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v135;
    env = stack[-1];
    goto v37;

v37:
    v150 = qvalue(elt(env, 6)); /* !*double */
    if (v150 == nil) goto v33;
    v291 = stack[0];
    v150 = elt(env, 7); /* !*doublename!* */
    v150 = get(v291, v150);
    if (v150 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    else { popv(2); return onevalue(v150); }

v33:
    v291 = stack[0];
    v150 = elt(env, 8); /* !*fortranname!* */
    v150 = get(v291, v150);
    if (v150 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    else { popv(2); return onevalue(v150); }
/* error exit handlers */
v135:
    popv(2);
    return nil;
}



/* Code for physop2sq */

static Lisp_Object CC_physop2sq(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v11, v9, v3;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for physop2sq");
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

v112:
    v11 = stack[0];
    fn = elt(env, 5); /* physopp */
    v11 = (*qfn1(fn))(qenv(fn), v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-2];
    if (v11 == nil) goto v76;
    v9 = stack[0];
    v11 = elt(env, 1); /* rvalue */
    v11 = get(v9, v11);
    env = stack[-2];
    stack[-1] = v11;
    if (v11 == nil) goto v60;
    v11 = stack[-1];
    stack[0] = v11;
    goto v112;

v60:
    v11 = stack[0];
    if (symbolp(v11)) goto v45;
    v11 = stack[0];
    v9 = qcar(v11);
    v11 = elt(env, 2); /* psimpfn */
    v11 = get(v9, v11);
    env = stack[-2];
    stack[-1] = v11;
    if (v11 == nil) goto v20;
    v9 = stack[-1];
    v11 = stack[0];
    v11 = Lapply1(nil, v9, v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-2];
    stack[-1] = v11;
    fn = elt(env, 5); /* physopp */
    v11 = (*qfn1(fn))(qenv(fn), v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-2];
    if (v11 == nil) goto v26;
    v3 = stack[-1];
    v9 = (Lisp_Object)17; /* 1 */
    v11 = (Lisp_Object)17; /* 1 */
    v11 = acons(v3, v9, v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-2];
    v9 = ncons(v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    v11 = (Lisp_Object)17; /* 1 */
    popv(3);
    return cons(v9, v11);

v26:
    v11 = stack[-1];
    fn = elt(env, 6); /* physopsm!* */
    v11 = (*qfn1(fn))(qenv(fn), v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    v11 = qcdr(v11);
    v11 = qcar(v11);
    { popv(3); return onevalue(v11); }

v20:
    v11 = stack[0];
    v9 = qcar(v11);
    v11 = elt(env, 3); /* opmtch */
    v11 = get(v9, v11);
    env = stack[-2];
    if (v11 == nil) goto v23;
    v11 = stack[0];
    fn = elt(env, 7); /* opmtch!* */
    v11 = (*qfn1(fn))(qenv(fn), v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-2];
    stack[-1] = v11;
    if (v11 == nil) goto v23;
    v11 = stack[-1];
    stack[0] = v11;
    goto v112;

v23:
    v3 = stack[0];
    v9 = (Lisp_Object)17; /* 1 */
    v11 = (Lisp_Object)17; /* 1 */
    v11 = acons(v3, v9, v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-2];
    v9 = ncons(v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    v11 = (Lisp_Object)17; /* 1 */
    popv(3);
    return cons(v9, v11);

v45:
    v3 = stack[0];
    v9 = (Lisp_Object)17; /* 1 */
    v11 = (Lisp_Object)17; /* 1 */
    v11 = acons(v3, v9, v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-2];
    v9 = ncons(v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    v11 = (Lisp_Object)17; /* 1 */
    popv(3);
    return cons(v9, v11);

v76:
    v11 = stack[0];
    if (!consp(v11)) goto v303;
    v11 = stack[0];
    v9 = qcar(v11);
    v11 = elt(env, 4); /* !*sq */
    if (v9 == v11) goto v15;
    v11 = stack[0];
    fn = elt(env, 8); /* getphystype */
    v11 = (*qfn1(fn))(qenv(fn), v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-2];
    if (v11 == nil) goto v90;
    v11 = stack[0];
    fn = elt(env, 6); /* physopsm!* */
    v11 = (*qfn1(fn))(qenv(fn), v11);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-2];
    stack[0] = v11;
    goto v112;

v90:
    v11 = stack[0];
    {
        popv(3);
        fn = elt(env, 9); /* simp */
        return (*qfn1(fn))(qenv(fn), v11);
    }

v15:
    v11 = stack[0];
    v11 = qcdr(v11);
    v11 = qcar(v11);
    { popv(3); return onevalue(v11); }

v303:
    v11 = stack[0];
    {
        popv(3);
        fn = elt(env, 9); /* simp */
        return (*qfn1(fn))(qenv(fn), v11);
    }
/* error exit handlers */
v178:
    popv(3);
    return nil;
}



/* Code for sf2mv1 */

static Lisp_Object MS_CDECL CC_sf2mv1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v72, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v92, v271, v24;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "sf2mv1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for sf2mv1");
#endif
    if (stack >= stacklimit)
    {
        push3(v72,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v72);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v72;
    stack[-2] = v1;
    stack[-3] = v0;
/* end of prologue */

v74:
    v92 = stack[-3];
    if (v92 == nil) goto v83;
    v92 = stack[-3];
    if (!consp(v92)) goto v113;
    v92 = stack[-3];
    v92 = qcar(v92);
    v92 = (consp(v92) ? nil : lisp_true);
    goto v68;

v68:
    if (v92 == nil) goto v209;
    stack[0] = stack[-2];
    v92 = stack[-1];
    v92 = Llength(nil, v92);
    nil = C_nil;
    if (exception_pending()) goto v91;
    env = stack[-5];
    fn = elt(env, 3); /* nzeros */
    v92 = (*qfn1(fn))(qenv(fn), v92);
    nil = C_nil;
    if (exception_pending()) goto v91;
    env = stack[-5];
    v271 = Lappend(nil, stack[0], v92);
    nil = C_nil;
    if (exception_pending()) goto v91;
    env = stack[-5];
    v92 = stack[-3];
    v92 = cons(v271, v92);
    nil = C_nil;
    if (exception_pending()) goto v91;
    popv(6);
    return ncons(v92);

v209:
    v92 = stack[-3];
    v92 = qcar(v92);
    v92 = qcar(v92);
    v271 = qcar(v92);
    v92 = stack[-1];
    v92 = qcar(v92);
    if (equal(v271, v92)) goto v141;
    stack[0] = stack[-2];
    v92 = (Lisp_Object)1; /* 0 */
    v92 = ncons(v92);
    nil = C_nil;
    if (exception_pending()) goto v91;
    env = stack[-5];
    v92 = Lappend(nil, stack[0], v92);
    nil = C_nil;
    if (exception_pending()) goto v91;
    env = stack[-5];
    stack[-2] = v92;
    v92 = stack[-1];
    v92 = qcdr(v92);
    stack[-1] = v92;
    goto v74;

v141:
    v92 = stack[-3];
    v92 = qcar(v92);
    stack[-4] = qcdr(v92);
    stack[0] = stack[-2];
    v92 = stack[-3];
    v92 = qcar(v92);
    v92 = qcar(v92);
    v92 = qcdr(v92);
    v92 = ncons(v92);
    nil = C_nil;
    if (exception_pending()) goto v91;
    env = stack[-5];
    v271 = Lappend(nil, stack[0], v92);
    nil = C_nil;
    if (exception_pending()) goto v91;
    env = stack[-5];
    v92 = stack[-1];
    v92 = qcdr(v92);
    stack[0] = CC_sf2mv1(env, 3, stack[-4], v271, v92);
    nil = C_nil;
    if (exception_pending()) goto v91;
    env = stack[-5];
    v92 = stack[-3];
    v24 = qcdr(v92);
    v271 = stack[-2];
    v92 = stack[-1];
    v92 = CC_sf2mv1(env, 3, v24, v271, v92);
    nil = C_nil;
    if (exception_pending()) goto v91;
    {
        Lisp_Object v22 = stack[0];
        popv(6);
        return Lappend(nil, v22, v92);
    }

v113:
    v92 = qvalue(elt(env, 2)); /* t */
    goto v68;

v83:
    v92 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v92); }
/* error exit handlers */
v91:
    popv(6);
    return nil;
}



/* Code for rnminusp!: */

static Lisp_Object CC_rnminuspT(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v146, v45, v63;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rnminusp:");
#endif
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
    v45 = v0;
/* end of prologue */
    v146 = v45;
    v146 = qcdr(v146);
    v146 = qcar(v146);
    v45 = v146;
    if (!consp(v146)) goto v98;
    v146 = v45;
    v63 = qcar(v146);
    v146 = elt(env, 1); /* minusp */
    v146 = get(v63, v146);
        return Lapply1(nil, v146, v45);

v98:
    v146 = (Lisp_Object)1; /* 0 */
        return Llessp(nil, v45, v146);
}



/* Code for di_restore */

static Lisp_Object CC_di_restore(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v125, v126;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for di_restore");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v125 = v0;
/* end of prologue */
    v126 = v125;
    v125 = qvalue(elt(env, 1)); /* nil */
    {
        fn = elt(env, 2); /* di_restore1 */
        return (*qfn2(fn))(qenv(fn), v126, v125);
    }
}



/* Code for resimpf */

static Lisp_Object CC_resimpf(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v37, v60;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for resimpf");
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
    v60 = v0;
/* end of prologue */
    v37 = qvalue(elt(env, 1)); /* nil */
    stack[0] = qvalue(elt(env, 2)); /* varstack!* */
    qvalue(elt(env, 2)) = v37; /* varstack!* */
    v37 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 3); /* subf1 */
    v37 = (*qfn2(fn))(qenv(fn), v60, v37);
    nil = C_nil;
    if (exception_pending()) goto v68;
    env = stack[-1];
    v37 = qcar(v37);
    qvalue(elt(env, 2)) = stack[0]; /* varstack!* */
    { popv(2); return onevalue(v37); }
/* error exit handlers */
v68:
    env = stack[-1];
    qvalue(elt(env, 2)) = stack[0]; /* varstack!* */
    popv(2);
    return nil;
}



/* Code for numeric!-content */

static Lisp_Object CC_numericKcontent(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v150, v291, v144;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for numeric-content");
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

v43:
    v150 = stack[0];
    if (!consp(v150)) goto v126;
    v150 = stack[0];
    v150 = qcar(v150);
    v150 = (consp(v150) ? nil : lisp_true);
    goto v125;

v125:
    if (v150 == nil) goto v76;
    v150 = stack[0];
    fn = elt(env, 2); /* minusf */
    v150 = (*qfn1(fn))(qenv(fn), v150);
    nil = C_nil;
    if (exception_pending()) goto v145;
    env = stack[-2];
    if (v150 == nil) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v150 = stack[0];
    {
        popv(3);
        fn = elt(env, 3); /* negf */
        return (*qfn1(fn))(qenv(fn), v150);
    }

v76:
    v150 = stack[0];
    v150 = qcdr(v150);
    if (v150 == nil) goto v48;
    v150 = stack[0];
    v150 = qcar(v150);
    v150 = qcdr(v150);
    v150 = CC_numericKcontent(env, v150);
    nil = C_nil;
    if (exception_pending()) goto v145;
    env = stack[-2];
    v144 = v150;
    v291 = v144;
    v150 = (Lisp_Object)17; /* 1 */
    if (v291 == v150) { popv(3); return onevalue(v144); }
    stack[-1] = v144;
    v150 = stack[0];
    v150 = qcdr(v150);
    v150 = CC_numericKcontent(env, v150);
    nil = C_nil;
    if (exception_pending()) goto v145;
    env = stack[-2];
    fn = elt(env, 4); /* gcddd */
    v150 = (*qfn2(fn))(qenv(fn), stack[-1], v150);
    nil = C_nil;
    if (exception_pending()) goto v145;
    v144 = v150;
    { popv(3); return onevalue(v144); }

v48:
    v150 = stack[0];
    v150 = qcar(v150);
    v150 = qcdr(v150);
    stack[0] = v150;
    goto v43;

v126:
    v150 = qvalue(elt(env, 1)); /* t */
    goto v125;
/* error exit handlers */
v145:
    popv(3);
    return nil;
}



/* Code for cl_identifyat */

static Lisp_Object CC_cl_identifyat(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v147, v115;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for cl_identifyat");
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
    v115 = stack[0];
    v147 = elt(env, 1); /* true */
    if (v115 == v147) goto v126;
    v115 = stack[0];
    v147 = elt(env, 3); /* false */
    v147 = (v115 == v147 ? lisp_true : nil);
    goto v125;

v125:
    if (!(v147 == nil)) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v115 = stack[0];
    v147 = qvalue(elt(env, 4)); /* cl_identify!-atl!* */
    v147 = Lmember(nil, v115, v147);
    v115 = v147;
    if (v147 == nil) goto v55;
    v147 = v115;
    v147 = qcar(v147);
    { popv(2); return onevalue(v147); }

v55:
    v115 = stack[0];
    v147 = qvalue(elt(env, 4)); /* cl_identify!-atl!* */
    v147 = cons(v115, v147);
    nil = C_nil;
    if (exception_pending()) goto v214;
    env = stack[-1];
    qvalue(elt(env, 4)) = v147; /* cl_identify!-atl!* */
    { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }

v126:
    v147 = qvalue(elt(env, 2)); /* t */
    goto v125;
/* error exit handlers */
v214:
    popv(2);
    return nil;
}



/* Code for evaluatecoeffts */

static Lisp_Object CC_evaluatecoeffts(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v91, v22, v23;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for evaluatecoeffts");
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
    v91 = stack[-1];
    if (v91 == nil) goto v83;
    v91 = stack[-1];
    if (!consp(v91)) goto v113;
    v91 = stack[-1];
    v91 = qcar(v91);
    v91 = (consp(v91) ? nil : lisp_true);
    goto v76;

v76:
    if (v91 == nil) goto v27;
    v22 = stack[-1];
    v91 = (Lisp_Object)1; /* 0 */
    if (!(v22 == v91)) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v91 = qvalue(elt(env, 2)); /* nil */
    { popv(4); return onevalue(v91); }

v27:
    v91 = stack[-1];
    v91 = qcar(v91);
    v91 = qcar(v91);
    v22 = qcar(v91);
    v91 = qvalue(elt(env, 3)); /* indexlist */
    v91 = Lmember(nil, v22, v91);
    if (v91 == nil) goto v30;
    v91 = stack[-1];
    v91 = qcar(v91);
    v91 = qcar(v91);
    v23 = qcar(v91);
    v22 = stack[0];
    v91 = qvalue(elt(env, 3)); /* indexlist */
    fn = elt(env, 4); /* valuecoefft */
    v91 = (*qfnn(fn))(qenv(fn), 3, v23, v22, v91);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-3];
    goto v25;

v25:
    stack[-2] = v91;
    v91 = stack[-1];
    v91 = qcar(v91);
    v22 = qcdr(v91);
    v91 = stack[0];
    v91 = CC_evaluatecoeffts(env, v22, v91);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-3];
    fn = elt(env, 5); /* !*multf */
    v91 = (*qfn2(fn))(qenv(fn), stack[-2], v91);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-3];
    stack[-2] = v91;
    v91 = stack[-1];
    v22 = qcdr(v91);
    v91 = stack[0];
    v91 = CC_evaluatecoeffts(env, v22, v91);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-3];
    {
        Lisp_Object v52 = stack[-2];
        popv(4);
        fn = elt(env, 6); /* addf */
        return (*qfn2(fn))(qenv(fn), v52, v91);
    }

v30:
    v91 = stack[-1];
    v91 = qcar(v91);
    v22 = qcar(v91);
    v91 = (Lisp_Object)17; /* 1 */
    v91 = cons(v22, v91);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-3];
    v91 = ncons(v91);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-3];
    goto v25;

v113:
    v91 = qvalue(elt(env, 1)); /* t */
    goto v76;

v83:
    v91 = qvalue(elt(env, 1)); /* t */
    goto v76;
/* error exit handlers */
v131:
    popv(4);
    return nil;
}



/* Code for ibalp_readclause */

static Lisp_Object CC_ibalp_readclause(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v264, v262, v263, v259;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ibalp_readclause");
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
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-7] = v1;
    v264 = v0;
/* end of prologue */
    stack[-3] = nil;
    stack[-2] = nil;
    v264 = qcdr(v264);
    stack[-4] = v264;
    stack[-5] = qvalue(elt(env, 1)); /* nil */
    stack[-1] = qvalue(elt(env, 1)); /* nil */
    stack[0] = (Lisp_Object)1; /* 0 */
    v259 = (Lisp_Object)1; /* 0 */
    v263 = qvalue(elt(env, 1)); /* nil */
    v262 = qvalue(elt(env, 1)); /* nil */
    v264 = qvalue(elt(env, 1)); /* nil */
    v264 = list4(v259, v263, v262, v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    v264 = list3star(stack[-5], stack[-1], stack[0], v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    stack[-5] = v264;
    v264 = qvalue(elt(env, 2)); /* t */
    stack[-1] = v264;
    goto v114;

v114:
    v264 = stack[-1];
    if (v264 == nil) goto v73;
    v264 = stack[-4];
    if (v264 == nil) goto v73;
    v264 = stack[-4];
    v264 = qcar(v264);
    stack[-8] = v264;
    v262 = stack[-8];
    v264 = elt(env, 3); /* true */
    if (v262 == v264) goto v149;
    v264 = stack[-4];
    v264 = qcdr(v264);
    stack[-4] = v264;
    v262 = stack[-8];
    v264 = elt(env, 4); /* false */
    if (v262 == v264) goto v114;
    v264 = stack[-8];
    if (!consp(v264)) goto v53;
    v264 = stack[-8];
    v264 = qcar(v264);
    v262 = v264;
    goto v26;

v26:
    v264 = elt(env, 5); /* not */
    if (v262 == v264) goto v134;
    v264 = stack[-8];
    fn = elt(env, 6); /* ibalp_arg2l */
    v264 = (*qfn1(fn))(qenv(fn), v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    stack[-6] = v264;
    v264 = stack[-8];
    fn = elt(env, 7); /* ibalp_arg2r */
    v264 = (*qfn1(fn))(qenv(fn), v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    goto v182;

v182:
    v262 = v264;
    v264 = (Lisp_Object)17; /* 1 */
    v264 = Leqn(nil, v262, v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    if (v264 == nil) goto v203;
    v262 = stack[-6];
    v264 = stack[-3];
    v264 = Lmemq(nil, v262, v264);
    if (!(v264 == nil)) goto v114;
    v264 = stack[-5];
    v264 = qcdr(v264);
    stack[0] = qcdr(v264);
    v264 = stack[-5];
    v264 = qcdr(v264);
    v264 = qcdr(v264);
    v264 = qcar(v264);
    v264 = add1(v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    fn = elt(env, 8); /* setcar */
    v264 = (*qfn2(fn))(qenv(fn), stack[0], v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    v262 = stack[-6];
    v264 = stack[-3];
    v264 = cons(v262, v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    stack[-3] = v264;
    v259 = stack[-5];
    v263 = stack[-7];
    v262 = stack[-6];
    v264 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 9); /* ibalp_process!-var */
    v264 = (*qfnn(fn))(qenv(fn), 4, v259, v263, v262, v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    stack[-7] = v264;
    goto v114;

v203:
    v262 = stack[-6];
    v264 = stack[-2];
    v264 = Lmemq(nil, v262, v264);
    if (!(v264 == nil)) goto v114;
    v264 = stack[-5];
    v264 = qcdr(v264);
    v264 = qcdr(v264);
    stack[0] = qcdr(v264);
    v264 = stack[-5];
    v264 = qcdr(v264);
    v264 = qcdr(v264);
    v264 = qcdr(v264);
    v264 = qcar(v264);
    v264 = add1(v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    fn = elt(env, 8); /* setcar */
    v264 = (*qfn2(fn))(qenv(fn), stack[0], v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    v262 = stack[-6];
    v264 = stack[-2];
    v264 = cons(v262, v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    stack[-2] = v264;
    v259 = stack[-5];
    v263 = stack[-7];
    v262 = stack[-6];
    v264 = (Lisp_Object)1; /* 0 */
    fn = elt(env, 9); /* ibalp_process!-var */
    v264 = (*qfnn(fn))(qenv(fn), 4, v259, v263, v262, v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    stack[-7] = v264;
    goto v114;

v134:
    v264 = stack[-8];
    v264 = qcdr(v264);
    v264 = qcar(v264);
    fn = elt(env, 6); /* ibalp_arg2l */
    v264 = (*qfn1(fn))(qenv(fn), v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    stack[-6] = v264;
    stack[0] = (Lisp_Object)17; /* 1 */
    v264 = stack[-8];
    v264 = qcdr(v264);
    v264 = qcar(v264);
    fn = elt(env, 7); /* ibalp_arg2r */
    v264 = (*qfn1(fn))(qenv(fn), v264);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-9];
    v264 = (Lisp_Object)(int32_t)((int32_t)stack[0] - (int32_t)v264 + TAG_FIXNUM);
    goto v182;

v53:
    v264 = stack[-8];
    v262 = v264;
    goto v26;

v149:
    v264 = qvalue(elt(env, 1)); /* nil */
    stack[-1] = v264;
    goto v114;

v73:
    v264 = stack[-1];
    if (v264 == nil) goto v205;
    v262 = stack[-5];
    v264 = stack[-7];
    popv(10);
    return cons(v262, v264);

v205:
    v262 = elt(env, 3); /* true */
    v264 = stack[-7];
    popv(10);
    return cons(v262, v264);
/* error exit handlers */
v201:
    popv(10);
    return nil;
}



/* Code for ratpoly_1 */

static Lisp_Object MS_CDECL CC_ratpoly_1(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v71;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "ratpoly_1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ratpoly_1");
#endif
    CSL_IGNORE(env);
/* end of prologue */
    v71 = (Lisp_Object)17; /* 1 */
    {
        fn = elt(env, 1); /* simp */
        return (*qfn1(fn))(qenv(fn), v71);
    }
}



/* Code for mapins */

static Lisp_Object CC_mapins(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v70, v34, v35;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mapins");
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
    stack[-2] = nil;
    goto v74;

v74:
    v70 = stack[0];
    if (v70 == nil) goto v83;
    v34 = stack[-1];
    v70 = stack[0];
    v70 = qcar(v70);
    v70 = qcar(v70);
    v35 = cons(v34, v70);
    nil = C_nil;
    if (exception_pending()) goto v209;
    env = stack[-3];
    v70 = stack[0];
    v70 = qcar(v70);
    v34 = qcdr(v70);
    v70 = stack[-2];
    v70 = acons(v35, v34, v70);
    nil = C_nil;
    if (exception_pending()) goto v209;
    env = stack[-3];
    stack[-2] = v70;
    v70 = stack[0];
    v70 = qcdr(v70);
    stack[0] = v70;
    goto v74;

v83:
    v70 = stack[-2];
    {
        popv(4);
        fn = elt(env, 1); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v70);
    }
/* error exit handlers */
v209:
    popv(4);
    return nil;
}



/* Code for om2mml */

static Lisp_Object MS_CDECL CC_om2mml(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v113;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "om2mml");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for om2mml");
#endif
    if (stack >= stacklimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* end of prologue */
    fn = elt(env, 3); /* om2ir */
    v113 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v215;
    env = stack[-1];
    stack[0] = v113;
    v113 = qvalue(elt(env, 1)); /* t */
    fn = elt(env, 4); /* terpri!* */
    v113 = (*qfn1(fn))(qenv(fn), v113);
    nil = C_nil;
    if (exception_pending()) goto v215;
    env = stack[-1];
    v113 = elt(env, 2); /* "Intermediate representation:" */
    v113 = Lprinc(nil, v113);
    nil = C_nil;
    if (exception_pending()) goto v215;
    env = stack[-1];
    v113 = qvalue(elt(env, 1)); /* t */
    fn = elt(env, 4); /* terpri!* */
    v113 = (*qfn1(fn))(qenv(fn), v113);
    nil = C_nil;
    if (exception_pending()) goto v215;
    env = stack[-1];
    v113 = stack[0];
    v113 = Lprinc(nil, v113);
    nil = C_nil;
    if (exception_pending()) goto v215;
    env = stack[-1];
    v113 = qvalue(elt(env, 1)); /* t */
    fn = elt(env, 4); /* terpri!* */
    v113 = (*qfn1(fn))(qenv(fn), v113);
    nil = C_nil;
    if (exception_pending()) goto v215;
    env = stack[-1];
    v113 = stack[0];
    fn = elt(env, 5); /* ir2mml */
    v113 = (*qfn1(fn))(qenv(fn), v113);
    nil = C_nil;
    if (exception_pending()) goto v215;
    v113 = nil;
    { popv(2); return onevalue(v113); }
/* error exit handlers */
v215:
    popv(2);
    return nil;
}



/* Code for resume */

static Lisp_Object CC_resume(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v70, v34, v35, v31;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for resume");
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
/* copy arguments values to proper place */
    v70 = v1;
    v34 = v0;
/* end of prologue */
    v35 = v70;
    if (v35 == nil) goto v2;
    v35 = v70;
    v35 = qcar(v35);
    v31 = qcar(v35);
    v35 = v70;
    v35 = qcar(v35);
    v35 = qcdr(v35);
    v35 = qcar(v35);
    v70 = qcdr(v70);
    {
        popv(1);
        fn = elt(env, 3); /* amatch */
        return (*qfnn(fn))(qenv(fn), 4, v31, v35, v34, v70);
    }

v2:
    v70 = v34;
    fn = elt(env, 4); /* chk */
    v34 = (*qfn1(fn))(qenv(fn), v70);
    nil = C_nil;
    if (exception_pending()) goto v73;
    env = stack[0];
    v70 = qvalue(elt(env, 1)); /* t */
    if (v34 == v70) goto v123;
    v70 = nil;
    { popv(1); return onevalue(v70); }

v123:
    v70 = qvalue(elt(env, 2)); /* substitution */
    {
        popv(1);
        fn = elt(env, 5); /* bsubs */
        return (*qfn1(fn))(qenv(fn), v70);
    }
/* error exit handlers */
v73:
    popv(1);
    return nil;
}



setup_type const u15_setup[] =
{
    {"listeval",                too_few_2,      CC_listeval,   wrong_no_2},
    {"indord2",                 too_few_2,      CC_indord2,    wrong_no_2},
    {"my_freeof",               too_few_2,      CC_my_freeof,  wrong_no_2},
    {"map__edges",              CC_map__edges,  too_many_1,    wrong_no_1},
    {"sfpx1",                   wrong_no_na,    wrong_no_nb,   (n_args *)CC_sfpx1},
    {"mo_neworder",             CC_mo_neworder, too_many_1,    wrong_no_1},
    {"pv_times1",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_pv_times1},
    {"rootrnd",                 CC_rootrnd,     too_many_1,    wrong_no_1},
    {"quotient-mod-p",          too_few_2,      CC_quotientKmodKp,wrong_no_2},
    {"rlis",                    wrong_no_na,    wrong_no_nb,   (n_args *)CC_rlis},
    {"mml2om",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_mml2om},
    {"vevlcm",                  too_few_2,      CC_vevlcm,     wrong_no_2},
    {"oprinla",                 CC_oprinla,     too_many_1,    wrong_no_1},
    {"fortexp",                 CC_fortexp,     too_many_1,    wrong_no_1},
    {"command",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_command},
    {"dp_neg",                  CC_dp_neg,      too_many_1,    wrong_no_1},
    {"simp-prop-order",         too_few_2,      CC_simpKpropKorder,wrong_no_2},
    {"symbvarlst",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_symbvarlst},
    {"setqget",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_setqget},
    {"mk+mat+mult+mat",         too_few_2,      CC_mkLmatLmultLmat,wrong_no_2},
    {"ratpoly_lc",              CC_ratpoly_lc,  too_many_1,    wrong_no_1},
    {"getsetvars",              CC_getsetvars,  too_many_1,    wrong_no_1},
    {"merge-ind-vars",          too_few_2,      CC_mergeKindKvars,wrong_no_2},
    {"vdpsave",                 CC_vdpsave,     too_many_1,    wrong_no_1},
    {"prinlatom",               CC_prinlatom,   too_many_1,    wrong_no_1},
    {"insertparens",            CC_insertparens,too_many_1,    wrong_no_1},
    {"deleteall",               too_few_2,      CC_deleteall,  wrong_no_2},
    {"lesspcdr",                too_few_2,      CC_lesspcdr,   wrong_no_2},
    {"set-global-mode",         CC_setKglobalKmode,too_many_1, wrong_no_1},
    {"setk",                    too_few_2,      CC_setk,       wrong_no_2},
    {"sf_member",               too_few_2,      CC_sf_member,  wrong_no_2},
    {"dl_get2",                 too_few_2,      CC_dl_get2,    wrong_no_2},
    {"ilcm",                    too_few_2,      CC_ilcm,       wrong_no_2},
    {"reverse-num",             CC_reverseKnum, too_many_1,    wrong_no_1},
    {"readprogn",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_readprogn},
    {"ibalp_initwl",            CC_ibalp_initwl,too_many_1,    wrong_no_1},
    {"poly-minusp",             CC_polyKminusp, too_many_1,    wrong_no_1},
    {"ofsf_sacat",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_ofsf_sacat},
    {"ir2om",                   CC_ir2om,       too_many_1,    wrong_no_1},
    {"cr:minusp",               CC_crTminusp,   too_many_1,    wrong_no_1},
    {"xord_deglex",             too_few_2,      CC_xord_deglex,wrong_no_2},
    {"fortranname",             CC_fortranname, too_many_1,    wrong_no_1},
    {"physop2sq",               CC_physop2sq,   too_many_1,    wrong_no_1},
    {"sf2mv1",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_sf2mv1},
    {"rnminusp:",               CC_rnminuspT,   too_many_1,    wrong_no_1},
    {"di_restore",              CC_di_restore,  too_many_1,    wrong_no_1},
    {"resimpf",                 CC_resimpf,     too_many_1,    wrong_no_1},
    {"numeric-content",         CC_numericKcontent,too_many_1, wrong_no_1},
    {"cl_identifyat",           CC_cl_identifyat,too_many_1,   wrong_no_1},
    {"evaluatecoeffts",         too_few_2,      CC_evaluatecoeffts,wrong_no_2},
    {"ibalp_readclause",        too_few_2,      CC_ibalp_readclause,wrong_no_2},
    {"ratpoly_1",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_ratpoly_1},
    {"mapins",                  too_few_2,      CC_mapins,     wrong_no_2},
    {"om2mml",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_om2mml},
    {"resume",                  too_few_2,      CC_resume,     wrong_no_2},
    {NULL, (one_args *)"u15", (two_args *)"20091 6607288 6203018", 0}
};

/* end of generated code */

/* $destdir\u30.c        Machine generated C code */

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


/* Code for gpexpp */

static Lisp_Object CC_gpexpp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v23, v24;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gpexpp");
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

v25:
    v23 = stack[0];
    if (!consp(v23)) goto v26;
    v23 = stack[0];
    v24 = qcar(v23);
    v23 = elt(env, 2); /* (!:rd!: !:cr!: !:crn!: !:gi!:) */
    v23 = Lmemq(nil, v24, v23);
    if (v23 == nil) goto v27;
    v23 = qvalue(elt(env, 3)); /* t */
    { popv(2); return onevalue(v23); }

v27:
    v23 = stack[0];
    v24 = qcar(v23);
    v23 = elt(env, 4); /* plus */
    if (v24 == v23) goto v28;
    v23 = stack[0];
    v24 = qcar(v23);
    v23 = elt(env, 5); /* (minus recip) */
    v23 = Lmemq(nil, v24, v23);
    if (v23 == nil) goto v29;
    v23 = stack[0];
    v24 = Llength(nil, v23);
    nil = C_nil;
    if (exception_pending()) goto v30;
    env = stack[-1];
    v23 = (Lisp_Object)33; /* 2 */
    if (v24 == v23) goto v31;
    v23 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v23); }

v31:
    v23 = stack[0];
    v23 = qcdr(v23);
    v23 = qcar(v23);
    stack[0] = v23;
    goto v25;

v29:
    v23 = stack[0];
    v24 = qcar(v23);
    v23 = elt(env, 6); /* (difference quotient expt) */
    v23 = Lmemq(nil, v24, v23);
    if (v23 == nil) goto v32;
    v23 = stack[0];
    v24 = Llength(nil, v23);
    nil = C_nil;
    if (exception_pending()) goto v30;
    env = stack[-1];
    v23 = (Lisp_Object)49; /* 3 */
    if (v24 == v23) goto v33;
    v23 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v23); }

v33:
    v23 = stack[0];
    v23 = qcdr(v23);
    v23 = qcar(v23);
    v23 = CC_gpexpp(env, v23);
    nil = C_nil;
    if (exception_pending()) goto v30;
    env = stack[-1];
    if (v23 == nil) goto v34;
    v23 = stack[0];
    v23 = qcdr(v23);
    v23 = qcdr(v23);
    v23 = qcar(v23);
    stack[0] = v23;
    goto v25;

v34:
    v23 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v23); }

v32:
    v23 = stack[0];
    v24 = qcar(v23);
    v23 = elt(env, 7); /* times */
    if (v24 == v23) goto v35;
    v23 = stack[0];
    v24 = qcar(v23);
    v23 = elt(env, 8); /* !:rd!: */
    if (v24 == v23) goto v36;
    v23 = stack[0];
    v24 = qcar(v23);
    v23 = elt(env, 9); /* (!:cr!: !:crn!: !:gi!:) */
    v23 = Lmemq(nil, v24, v23);
    if (v23 == nil) goto v37;
    v23 = qvalue(elt(env, 3)); /* t */
    { popv(2); return onevalue(v23); }

v37:
    v23 = stack[0];
    v23 = qcar(v23);
    fn = elt(env, 10); /* unresidp */
    v23 = (*qfn1(fn))(qenv(fn), v23);
    nil = C_nil;
    if (exception_pending()) goto v30;
    env = stack[-1];
    if (v23 == nil) goto v38;
    v23 = stack[0];
    v23 = qcdr(v23);
    {
        popv(2);
        fn = elt(env, 11); /* gparg1p */
        return (*qfn1(fn))(qenv(fn), v23);
    }

v38:
    v23 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v23); }

v36:
    v23 = qvalue(elt(env, 3)); /* t */
    { popv(2); return onevalue(v23); }

v35:
    v23 = stack[0];
    v24 = Llength(nil, v23);
    nil = C_nil;
    if (exception_pending()) goto v30;
    env = stack[-1];
    v23 = (Lisp_Object)49; /* 3 */
    v23 = (Lisp_Object)geq2(v24, v23);
    nil = C_nil;
    if (exception_pending()) goto v30;
    v23 = v23 ? lisp_true : nil;
    env = stack[-1];
    if (v23 == nil) goto v39;
    v23 = stack[0];
    v23 = qcdr(v23);
    v23 = qcar(v23);
    v23 = CC_gpexpp(env, v23);
    nil = C_nil;
    if (exception_pending()) goto v30;
    env = stack[-1];
    if (v23 == nil) goto v40;
    v23 = stack[0];
    v23 = qcdr(v23);
    v23 = qcdr(v23);
    v23 = qcar(v23);
    v23 = CC_gpexpp(env, v23);
    nil = C_nil;
    if (exception_pending()) goto v30;
    env = stack[-1];
    if (v23 == nil) goto v41;
    v23 = stack[0];
    v23 = qcdr(v23);
    v23 = qcdr(v23);
    v23 = qcdr(v23);
    {
        popv(2);
        fn = elt(env, 12); /* gpexp1p */
        return (*qfn1(fn))(qenv(fn), v23);
    }

v41:
    v23 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v23); }

v40:
    v23 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v23); }

v39:
    v23 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v23); }

v28:
    v23 = stack[0];
    v24 = Llength(nil, v23);
    nil = C_nil;
    if (exception_pending()) goto v30;
    env = stack[-1];
    v23 = (Lisp_Object)33; /* 2 */
    v23 = (Lisp_Object)geq2(v24, v23);
    nil = C_nil;
    if (exception_pending()) goto v30;
    v23 = v23 ? lisp_true : nil;
    env = stack[-1];
    if (v23 == nil) goto v42;
    v23 = stack[0];
    v23 = qcdr(v23);
    v23 = qcar(v23);
    v23 = CC_gpexpp(env, v23);
    nil = C_nil;
    if (exception_pending()) goto v30;
    env = stack[-1];
    if (v23 == nil) goto v43;
    v23 = stack[0];
    v23 = qcdr(v23);
    v23 = qcdr(v23);
    {
        popv(2);
        fn = elt(env, 12); /* gpexp1p */
        return (*qfn1(fn))(qenv(fn), v23);
    }

v43:
    v23 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v23); }

v42:
    v23 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v23); }

v26:
    v23 = stack[0];
    v23 = Lsymbolp(nil, v23);
    env = stack[-1];
    v24 = v23;
    if (!(v23 == nil)) { popv(2); return onevalue(v24); }
    v23 = stack[0];
    v23 = (is_number(v23) ? lisp_true : nil);
    v24 = v23;
    if (!(v23 == nil)) { popv(2); return onevalue(v24); }
    v23 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v23); }
/* error exit handlers */
v30:
    popv(2);
    return nil;
}



/* Code for reduce!-ratios */

static Lisp_Object CC_reduceKratios(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v56, v57;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for reduce-ratios");
#endif
    if (stack >= stacklimit)
    {
        push2(v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v44);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v44;
    stack[-2] = v0;
/* end of prologue */

v58:
    v57 = stack[-2];
    v56 = stack[-1];
    fn = elt(env, 1); /* red!-ratios1 */
    v56 = (*qfn2(fn))(qenv(fn), v57, v56);
    nil = C_nil;
    if (exception_pending()) goto v59;
    env = stack[-4];
    stack[-3] = v56;
    if (v56 == nil) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v56 = stack[-3];
    v57 = qcar(v56);
    v56 = stack[-2];
    fn = elt(env, 2); /* mv!-domainlist!-!* */
    stack[0] = (*qfn2(fn))(qenv(fn), v57, v56);
    nil = C_nil;
    if (exception_pending()) goto v59;
    env = stack[-4];
    v56 = stack[-3];
    v57 = qcdr(v56);
    v56 = stack[-1];
    fn = elt(env, 2); /* mv!-domainlist!-!* */
    v56 = (*qfn2(fn))(qenv(fn), v57, v56);
    nil = C_nil;
    if (exception_pending()) goto v59;
    env = stack[-4];
    fn = elt(env, 3); /* mv!-domainlist!-!- */
    v56 = (*qfn2(fn))(qenv(fn), stack[0], v56);
    nil = C_nil;
    if (exception_pending()) goto v59;
    env = stack[-4];
    stack[-3] = v56;
    v56 = stack[-2];
    fn = elt(env, 4); /* zeros */
    stack[0] = (*qfn1(fn))(qenv(fn), v56);
    nil = C_nil;
    if (exception_pending()) goto v59;
    env = stack[-4];
    v56 = stack[-3];
    fn = elt(env, 4); /* zeros */
    v56 = (*qfn1(fn))(qenv(fn), v56);
    nil = C_nil;
    if (exception_pending()) goto v59;
    env = stack[-4];
    v56 = (Lisp_Object)geq2(stack[0], v56);
    nil = C_nil;
    if (exception_pending()) goto v59;
    v56 = v56 ? lisp_true : nil;
    env = stack[-4];
    if (!(v56 == nil)) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v57 = stack[-3];
    v56 = stack[-1];
    stack[-2] = v57;
    stack[-1] = v56;
    goto v58;
/* error exit handlers */
v59:
    popv(5);
    return nil;
}



/* Code for makeqn!-maybe */

static Lisp_Object MS_CDECL CC_makeqnKmaybe(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v44,
                         Lisp_Object v60, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v64, v65, v47;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "makeqn-maybe");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for makeqn-maybe");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v64 = v60;
    v65 = v44;
    v47 = v0;
/* end of prologue */
    if (!(v64 == nil)) return onevalue(v65);
    v64 = elt(env, 1); /* equal */
    return list3(v64, v47, v65);
}



/* Code for createmonomunit */

static Lisp_Object MS_CDECL CC_createmonomunit(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v69, v70, v71;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "createmonomunit");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for createmonomunit");
#endif
    if (stack >= stacklimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* end of prologue */
    v69 = (Lisp_Object)17; /* 1 */
    v69 = Lmkvect(nil, v69);
    nil = C_nil;
    if (exception_pending()) goto v21;
    env = stack[-3];
    stack[-2] = v69;
    v71 = stack[-2];
    v70 = (Lisp_Object)1; /* 0 */
    v69 = (Lisp_Object)1; /* 0 */
    *(Lisp_Object *)((char *)v71 + (CELL-TAG_VECTOR) + ((int32_t)v70/(16/CELL))) = v69;
    stack[-1] = stack[-2];
    stack[0] = (Lisp_Object)17; /* 1 */
    v69 = qvalue(elt(env, 1)); /* nil */
    v69 = ncons(v69);
    nil = C_nil;
    if (exception_pending()) goto v21;
    *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v69;
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
/* error exit handlers */
v21:
    popv(4);
    return nil;
}



/* Code for ofsf_smordtable */

static Lisp_Object CC_ofsf_smordtable(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v64, v65, v47;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ofsf_smordtable");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v64 = v44;
    v65 = v0;
/* end of prologue */
    v47 = elt(env, 1); /* ((equal (equal . false) (neq equal . t) (geq equal . t) (leq . false) (greaterp equal . t) (lessp . false)) (neq (equal equal) (neq) (geq) (leq leq) (greaterp) (lessp lessp))
 (geq (equal . false) (neq geq . t) (geq geq . t) (leq . false) (greaterp geq . t) (lessp . false)) (leq (equal equal) (neq) (geq) (leq leq) (greaterp) (lessp lessp)) (greaterp (equal . false) (neq gr
eaterp . t) (geq greaterp . t) (leq . false) (greaterp greaterp . t) (lessp . false)) (lessp (equal equal) (neq) (geq) (leq leq) (greaterp) (lessp lessp))) 
*/
    v65 = Latsoc(nil, v65, v47);
    v64 = Latsoc(nil, v64, v65);
    v64 = qcdr(v64);
    return onevalue(v64);
}



/* Code for ofsf_negateat */

static Lisp_Object CC_ofsf_negateat(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v50, v51, v21;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ofsf_negateat");
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
    v50 = stack[0];
    v50 = qcdr(v50);
    v51 = qcar(v50);
    v50 = stack[0];
    v50 = qcdr(v50);
    v50 = qcdr(v50);
    v50 = qcar(v50);
    v50 = list2(v51, v50);
    nil = C_nil;
    if (exception_pending()) goto v77;
    env = stack[-2];
    stack[-1] = v50;
    v50 = stack[0];
    v50 = qcar(v50);
    fn = elt(env, 1); /* ofsf_lnegrel */
    v21 = (*qfn1(fn))(qenv(fn), v50);
    nil = C_nil;
    if (exception_pending()) goto v77;
    v50 = stack[-1];
    v51 = qcar(v50);
    v50 = stack[-1];
    v50 = qcdr(v50);
    v50 = qcar(v50);
    popv(3);
    return list3(v21, v51, v50);
/* error exit handlers */
v77:
    popv(3);
    return nil;
}



/* Code for bvarom */

static Lisp_Object CC_bvarom(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v50, v51;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for bvarom");
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
    v50 = stack[0];
    v50 = qcar(v50);
    v50 = Lconsp(nil, v50);
    env = stack[-1];
    if (v50 == nil) goto v25;
    v50 = stack[0];
    v50 = qcar(v50);
    v51 = qcar(v50);
    v50 = elt(env, 1); /* bvar */
    if (!(v51 == v50)) goto v25;
    v50 = stack[0];
    v50 = qcar(v50);
    v50 = qcdr(v50);
    v50 = qcar(v50);
    fn = elt(env, 2); /* objectom */
    v50 = (*qfn1(fn))(qenv(fn), v50);
    nil = C_nil;
    if (exception_pending()) goto v22;
    env = stack[-1];
    v50 = stack[0];
    v50 = qcdr(v50);
    v50 = CC_bvarom(env, v50);
    nil = C_nil;
    if (exception_pending()) goto v22;
    goto v25;

v25:
    v50 = nil;
    { popv(2); return onevalue(v50); }
/* error exit handlers */
v22:
    popv(2);
    return nil;
}



/* Code for expand!-imrepart */

static Lisp_Object CC_expandKimrepart(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v81, v43;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for expand-imrepart");
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
    stack[-2] = nil;
    goto v82;

v82:
    v81 = stack[-1];
    if (!consp(v81)) goto v67;
    v81 = stack[-1];
    v81 = qcar(v81);
    v81 = (consp(v81) ? nil : lisp_true);
    goto v68;

v68:
    if (v81 == nil) goto v75;
    v43 = stack[-1];
    v81 = (Lisp_Object)17; /* 1 */
    v81 = cons(v43, v81);
    nil = C_nil;
    if (exception_pending()) goto v83;
    env = stack[-3];
    v43 = v81;
    goto v26;

v26:
    v81 = stack[-2];
    if (v81 == nil) { popv(4); return onevalue(v43); }
    v81 = stack[-2];
    v81 = qcar(v81);
    fn = elt(env, 2); /* addsq */
    v81 = (*qfn2(fn))(qenv(fn), v81, v43);
    nil = C_nil;
    if (exception_pending()) goto v83;
    env = stack[-3];
    v43 = v81;
    v81 = stack[-2];
    v81 = qcdr(v81);
    stack[-2] = v81;
    goto v26;

v75:
    v81 = stack[-1];
    v81 = qcar(v81);
    v81 = qcar(v81);
    fn = elt(env, 3); /* expand!-imrepartpow */
    stack[0] = (*qfn1(fn))(qenv(fn), v81);
    nil = C_nil;
    if (exception_pending()) goto v83;
    env = stack[-3];
    v81 = stack[-1];
    v81 = qcar(v81);
    v81 = qcdr(v81);
    v81 = CC_expandKimrepart(env, v81);
    nil = C_nil;
    if (exception_pending()) goto v83;
    env = stack[-3];
    fn = elt(env, 4); /* multsq */
    v43 = (*qfn2(fn))(qenv(fn), stack[0], v81);
    nil = C_nil;
    if (exception_pending()) goto v83;
    env = stack[-3];
    v81 = stack[-2];
    v81 = cons(v43, v81);
    nil = C_nil;
    if (exception_pending()) goto v83;
    env = stack[-3];
    stack[-2] = v81;
    v81 = stack[-1];
    v81 = qcdr(v81);
    stack[-1] = v81;
    goto v82;

v67:
    v81 = qvalue(elt(env, 1)); /* t */
    goto v68;
/* error exit handlers */
v83:
    popv(4);
    return nil;
}



/* Code for specrd!:times */

static Lisp_Object CC_specrdTtimes(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v33, v95;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for specrd:times");
#endif
    if (stack >= stacklimit)
    {
        push2(v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v44);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v44;
    stack[-1] = v0;
/* end of prologue */
    stack[-2] = nil;
    v33 = stack[-1];
    fn = elt(env, 4); /* add_minus */
    v33 = (*qfn1(fn))(qenv(fn), v33);
    nil = C_nil;
    if (exception_pending()) goto v96;
    env = stack[-3];
    stack[-1] = v33;
    v33 = stack[0];
    fn = elt(env, 4); /* add_minus */
    v33 = (*qfn1(fn))(qenv(fn), v33);
    nil = C_nil;
    if (exception_pending()) goto v96;
    env = stack[-3];
    stack[0] = v33;
    v95 = stack[-1];
    v33 = elt(env, 1); /* minus */
    if (!consp(v95)) goto v75;
    v95 = qcar(v95);
    if (!(v95 == v33)) goto v75;
    v33 = stack[-1];
    v33 = qcdr(v33);
    v33 = qcar(v33);
    stack[-1] = v33;
    v33 = qvalue(elt(env, 2)); /* t */
    stack[-2] = v33;
    goto v75;

v75:
    v95 = stack[0];
    v33 = elt(env, 1); /* minus */
    if (!consp(v95)) goto v97;
    v95 = qcar(v95);
    if (!(v95 == v33)) goto v97;
    v33 = stack[0];
    v33 = qcdr(v33);
    v33 = qcar(v33);
    stack[0] = v33;
    v33 = stack[-2];
    v33 = (v33 == nil ? lisp_true : nil);
    stack[-2] = v33;
    goto v97;

v97:
    v33 = stack[-1];
    if (!(!consp(v33))) goto v79;
    v33 = stack[-1];
    v33 = Lfloat(nil, v33);
    nil = C_nil;
    if (exception_pending()) goto v96;
    env = stack[-3];
    v95 = v33;
    if (!(!consp(v95))) goto v98;
    v95 = elt(env, 3); /* !:rd!: */
    v33 = cons(v95, v33);
    nil = C_nil;
    if (exception_pending()) goto v96;
    env = stack[-3];
    goto v98;

v98:
    stack[-1] = v33;
    goto v79;

v79:
    v33 = stack[0];
    if (!(!consp(v33))) goto v56;
    v33 = stack[0];
    v33 = Lfloat(nil, v33);
    nil = C_nil;
    if (exception_pending()) goto v96;
    env = stack[-3];
    v95 = v33;
    if (!(!consp(v95))) goto v42;
    v95 = elt(env, 3); /* !:rd!: */
    v33 = cons(v95, v33);
    nil = C_nil;
    if (exception_pending()) goto v96;
    env = stack[-3];
    goto v42;

v42:
    stack[0] = v33;
    goto v56;

v56:
    v33 = stack[-2];
    if (v33 == nil) goto v99;
    stack[-2] = elt(env, 1); /* minus */
    v95 = stack[-1];
    v33 = stack[0];
    fn = elt(env, 5); /* rd!:times */
    v33 = (*qfn2(fn))(qenv(fn), v95, v33);
    nil = C_nil;
    if (exception_pending()) goto v96;
    {
        Lisp_Object v100 = stack[-2];
        popv(4);
        return list2(v100, v33);
    }

v99:
    v95 = stack[-1];
    v33 = stack[0];
    {
        popv(4);
        fn = elt(env, 5); /* rd!:times */
        return (*qfn2(fn))(qenv(fn), v95, v33);
    }
/* error exit handlers */
v96:
    popv(4);
    return nil;
}



/* Code for dipprodin */

static Lisp_Object CC_dipprodin(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v55, v54, v56;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dipprodin");
#endif
    if (stack >= stacklimit)
    {
        push2(v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v44);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v44;
    stack[-1] = v0;
/* end of prologue */
    stack[-2] = nil;
    goto v103;

v103:
    v55 = stack[-1];
    if (v55 == nil) goto v52;
    v55 = stack[0];
    v55 = (v55 == nil ? lisp_true : nil);
    goto v67;

v67:
    if (v55 == nil) goto v75;
    v55 = qvalue(elt(env, 2)); /* dipzero */
    v54 = v55;
    goto v104;

v104:
    v55 = stack[-2];
    if (v55 == nil) { popv(4); return onevalue(v54); }
    v55 = stack[-2];
    v55 = qcar(v55);
    fn = elt(env, 3); /* dipsum */
    v55 = (*qfn2(fn))(qenv(fn), v55, v54);
    nil = C_nil;
    if (exception_pending()) goto v81;
    env = stack[-3];
    v54 = v55;
    v55 = stack[-2];
    v55 = qcdr(v55);
    stack[-2] = v55;
    goto v104;

v75:
    v55 = stack[-1];
    v55 = qcdr(v55);
    v56 = qcar(v55);
    v55 = stack[-1];
    v54 = qcar(v55);
    v55 = stack[0];
    fn = elt(env, 4); /* dipprodin1 */
    v54 = (*qfnn(fn))(qenv(fn), 3, v56, v54, v55);
    nil = C_nil;
    if (exception_pending()) goto v81;
    env = stack[-3];
    v55 = stack[-2];
    v55 = cons(v54, v55);
    nil = C_nil;
    if (exception_pending()) goto v81;
    env = stack[-3];
    stack[-2] = v55;
    v55 = stack[-1];
    v55 = qcdr(v55);
    v55 = qcdr(v55);
    stack[-1] = v55;
    goto v103;

v52:
    v55 = qvalue(elt(env, 1)); /* t */
    goto v67;
/* error exit handlers */
v81:
    popv(4);
    return nil;
}



/* Code for exdff0 */

static Lisp_Object CC_exdff0(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v113, v114;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for exdff0");
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
    stack[-3] = nil;
    goto v82;

v82:
    v113 = stack[-2];
    if (!consp(v113)) goto v67;
    v113 = stack[-2];
    v113 = qcar(v113);
    v113 = (consp(v113) ? nil : lisp_true);
    goto v68;

v68:
    if (v113 == nil) goto v92;
    v113 = qvalue(elt(env, 2)); /* nil */
    v114 = v113;
    goto v26;

v26:
    v113 = stack[-3];
    if (v113 == nil) { popv(5); return onevalue(v114); }
    v113 = stack[-3];
    v113 = qcar(v113);
    fn = elt(env, 3); /* addpf */
    v113 = (*qfn2(fn))(qenv(fn), v113, v114);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-4];
    v114 = v113;
    v113 = stack[-3];
    v113 = qcdr(v113);
    stack[-3] = v113;
    goto v26;

v92:
    v113 = stack[-2];
    v113 = qcar(v113);
    v114 = qcar(v113);
    v113 = (Lisp_Object)17; /* 1 */
    v113 = cons(v114, v113);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-4];
    v114 = ncons(v113);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-4];
    v113 = (Lisp_Object)17; /* 1 */
    stack[0] = cons(v114, v113);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-4];
    v113 = stack[-2];
    v113 = qcar(v113);
    v113 = qcdr(v113);
    v113 = CC_exdff0(env, v113);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-4];
    fn = elt(env, 4); /* multsqpf */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[0], v113);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-4];
    v113 = stack[-2];
    v113 = qcar(v113);
    v113 = qcar(v113);
    fn = elt(env, 5); /* exdfp0 */
    stack[0] = (*qfn1(fn))(qenv(fn), v113);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-4];
    v113 = stack[-2];
    v113 = qcar(v113);
    v114 = qcdr(v113);
    v113 = (Lisp_Object)17; /* 1 */
    v113 = cons(v114, v113);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-4];
    fn = elt(env, 6); /* multpfsq */
    v113 = (*qfn2(fn))(qenv(fn), stack[0], v113);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-4];
    fn = elt(env, 3); /* addpf */
    v114 = (*qfn2(fn))(qenv(fn), stack[-1], v113);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-4];
    v113 = stack[-3];
    v113 = cons(v114, v113);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-4];
    stack[-3] = v113;
    v113 = stack[-2];
    v113 = qcdr(v113);
    stack[-2] = v113;
    goto v82;

v67:
    v113 = qvalue(elt(env, 1)); /* t */
    goto v68;
/* error exit handlers */
v115:
    popv(5);
    return nil;
}



/* Code for evalmember */

static Lisp_Object CC_evalmember(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v72, v66;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for evalmember");
#endif
    if (stack >= stacklimit)
    {
        push2(v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v44);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v72 = v44;
    v66 = v0;
/* end of prologue */
    stack[0] = v66;
    fn = elt(env, 1); /* getrlist */
    v72 = (*qfn1(fn))(qenv(fn), v72);
    nil = C_nil;
    if (exception_pending()) goto v67;
    v72 = Lmember(nil, stack[0], v72);
    { popv(1); return onevalue(v72); }
/* error exit handlers */
v67:
    popv(1);
    return nil;
}



/* Code for red_tailreddriver */

static Lisp_Object MS_CDECL CC_red_tailreddriver(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v44,
                         Lisp_Object v60, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v17;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "red_tailreddriver");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for red_tailreddriver");
#endif
    if (stack >= stacklimit)
    {
        push3(v60,v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v44,v60);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v60;
    stack[-2] = v44;
    stack[-3] = v0;
/* end of prologue */
    v17 = stack[-2];
    fn = elt(env, 3); /* bas_dpoly */
    v17 = (*qfn1(fn))(qenv(fn), v17);
    nil = C_nil;
    if (exception_pending()) goto v106;
    env = stack[-5];
    if (v17 == nil) goto v76;
    v17 = stack[-2];
    fn = elt(env, 3); /* bas_dpoly */
    v17 = (*qfn1(fn))(qenv(fn), v17);
    nil = C_nil;
    if (exception_pending()) goto v106;
    env = stack[-5];
    v17 = qcdr(v17);
    if (v17 == nil) goto v74;
    v17 = stack[-3];
    v17 = (v17 == nil ? lisp_true : nil);
    goto v104;

v104:
    if (!(v17 == nil)) { Lisp_Object res = stack[-2]; popv(6); return onevalue(res); }

v80:
    v17 = stack[-2];
    fn = elt(env, 3); /* bas_dpoly */
    v17 = (*qfn1(fn))(qenv(fn), v17);
    nil = C_nil;
    if (exception_pending()) goto v106;
    env = stack[-5];
    if (v17 == nil) goto v22;
    stack[-4] = stack[-1];
    stack[0] = stack[-3];
    v17 = stack[-2];
    fn = elt(env, 4); /* red!=hidelt */
    v17 = (*qfn1(fn))(qenv(fn), v17);
    nil = C_nil;
    if (exception_pending()) goto v106;
    env = stack[-5];
    v17 = Lapply2(nil, 3, stack[-4], stack[0], v17);
    nil = C_nil;
    if (exception_pending()) goto v106;
    env = stack[-5];
    stack[-2] = v17;
    goto v80;

v22:
    v17 = stack[-2];
    {
        popv(6);
        fn = elt(env, 5); /* red!=recover */
        return (*qfn1(fn))(qenv(fn), v17);
    }

v74:
    v17 = qvalue(elt(env, 1)); /* t */
    goto v104;

v76:
    v17 = qvalue(elt(env, 1)); /* t */
    goto v104;
/* error exit handlers */
v106:
    popv(6);
    return nil;
}



/* Code for noncomfree */

static Lisp_Object CC_noncomfree(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v51;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for noncomfree");
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

v116:
    v51 = stack[0];
    if (symbolp(v51)) goto v101;
    v51 = stack[0];
    if (!consp(v51)) goto v68;
    v51 = stack[0];
    v51 = qcar(v51);
    v51 = CC_noncomfree(env, v51);
    nil = C_nil;
    if (exception_pending()) goto v22;
    env = stack[-1];
    if (v51 == nil) goto v63;
    v51 = stack[0];
    v51 = qcdr(v51);
    stack[0] = v51;
    goto v116;

v63:
    v51 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v51); }

v68:
    v51 = qvalue(elt(env, 1)); /* t */
    { popv(2); return onevalue(v51); }

v101:
    v51 = stack[0];
    if (!symbolp(v51)) v51 = nil;
    else { v51 = qfastgets(v51);
           if (v51 != nil) { v51 = elt(v51, 0); /* noncom */
#ifdef RECORD_GET
             if (v51 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v51 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v51 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v51 == SPID_NOPROP) v51 = nil; else v51 = lisp_true; }}
#endif
    v51 = (v51 == nil ? lisp_true : nil);
    { popv(2); return onevalue(v51); }
/* error exit handlers */
v22:
    popv(2);
    return nil;
}



/* Code for pasf_simplat1 */

static Lisp_Object CC_pasf_simplat1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v134, v135, v136;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pasf_simplat1");
#endif
    if (stack >= stacklimit)
    {
        push2(v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v44);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v134 = v44;
    v135 = v0;
/* end of prologue */
    v134 = v135;
    fn = elt(env, 7); /* pasf_zcong */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[0];
    fn = elt(env, 8); /* pasf_mkpos */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[0];
    fn = elt(env, 9); /* pasf_dt */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[0];
    fn = elt(env, 10); /* pasf_vf */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[0];
    v135 = v134;
    v136 = v135;
    v134 = elt(env, 1); /* true */
    if (v136 == v134) goto v52;
    v136 = v135;
    v134 = elt(env, 3); /* false */
    v134 = (v136 == v134 ? lisp_true : nil);
    goto v67;

v67:
    if (!(v134 == nil)) { popv(1); return onevalue(v135); }
    v134 = v135;
    v134 = Lconsp(nil, v134);
    env = stack[0];
    if (v134 == nil) goto v109;
    v134 = v135;
    v134 = qcar(v134);
    v134 = Lconsp(nil, v134);
    env = stack[0];
    if (v134 == nil) goto v109;
    v134 = v135;
    v134 = qcar(v134);
    v136 = qcar(v134);
    v134 = elt(env, 4); /* (cong ncong) */
    v134 = Lmemq(nil, v136, v134);
    if (v134 == nil) goto v109;
    v134 = v135;
    fn = elt(env, 11); /* pasf_mr */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[0];
    fn = elt(env, 10); /* pasf_vf */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[0];
    fn = elt(env, 12); /* pasf_cecong */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[0];
    v135 = v134;
    goto v10;

v10:
    v136 = v135;
    v134 = elt(env, 1); /* true */
    if (v136 == v134) goto v9;
    v136 = v135;
    v134 = elt(env, 3); /* false */
    v134 = (v136 == v134 ? lisp_true : nil);
    goto v100;

v100:
    if (!(v134 == nil)) { popv(1); return onevalue(v135); }
    v136 = v135;
    v134 = elt(env, 1); /* true */
    if (v136 == v134) goto v35;
    v136 = v135;
    v134 = elt(env, 3); /* false */
    v134 = (v136 == v134 ? lisp_true : nil);
    goto v138;

v138:
    if (v134 == nil) goto v139;
    v134 = v135;
    v136 = v134;
    goto v140;

v140:
    v134 = elt(env, 4); /* (cong ncong) */
    v134 = Lmemq(nil, v136, v134);
    if (v134 == nil) goto v141;
    v134 = v135;
    fn = elt(env, 13); /* pasf_sc */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[0];
    goto v142;

v142:
    v135 = v134;
    v134 = qvalue(elt(env, 6)); /* !*rlsifac */
    if (v134 == nil) { popv(1); return onevalue(v135); }
    v134 = v135;
    {
        popv(1);
        fn = elt(env, 14); /* pasf_fact */
        return (*qfn1(fn))(qenv(fn), v134);
    }

v141:
    v136 = v135;
    v134 = elt(env, 1); /* true */
    if (v136 == v134) goto v143;
    v136 = v135;
    v134 = elt(env, 3); /* false */
    v134 = (v136 == v134 ? lisp_true : nil);
    goto v144;

v144:
    if (v134 == nil) goto v4;
    v134 = v135;
    v136 = v134;
    goto v145;

v145:
    v134 = elt(env, 5); /* (equal neq) */
    v134 = Lmemq(nil, v136, v134);
    if (v134 == nil) goto v146;
    v134 = v135;
    fn = elt(env, 15); /* pasf_se */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[0];
    goto v142;

v146:
    v134 = v135;
    fn = elt(env, 16); /* pasf_or */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[0];
    goto v142;

v4:
    v134 = v135;
    v134 = qcar(v134);
    v134 = Lconsp(nil, v134);
    env = stack[0];
    if (v134 == nil) goto v147;
    v134 = v135;
    v134 = qcar(v134);
    v134 = qcar(v134);
    v136 = v134;
    goto v145;

v147:
    v134 = v135;
    v134 = qcar(v134);
    v136 = v134;
    goto v145;

v143:
    v134 = qvalue(elt(env, 2)); /* t */
    goto v144;

v139:
    v134 = v135;
    v134 = qcar(v134);
    v134 = Lconsp(nil, v134);
    env = stack[0];
    if (v134 == nil) goto v148;
    v134 = v135;
    v134 = qcar(v134);
    v134 = qcar(v134);
    v136 = v134;
    goto v140;

v148:
    v134 = v135;
    v134 = qcar(v134);
    v136 = v134;
    goto v140;

v35:
    v134 = qvalue(elt(env, 2)); /* t */
    goto v138;

v9:
    v134 = qvalue(elt(env, 2)); /* t */
    goto v100;

v109:
    v136 = v135;
    v134 = elt(env, 1); /* true */
    if (v136 == v134) goto v149;
    v136 = v135;
    v134 = elt(env, 3); /* false */
    v134 = (v136 == v134 ? lisp_true : nil);
    goto v150;

v150:
    if (v134 == nil) goto v151;
    v134 = v135;
    v136 = v134;
    goto v81;

v81:
    v134 = elt(env, 5); /* (equal neq) */
    v134 = Lmemq(nil, v136, v134);
    if (v134 == nil) goto v152;
    v134 = v135;
    fn = elt(env, 17); /* pasf_ceeq */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[0];
    v135 = v134;
    goto v10;

v152:
    v134 = v135;
    fn = elt(env, 18); /* pasf_cein */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[0];
    v135 = v134;
    goto v10;

v151:
    v134 = v135;
    v134 = qcar(v134);
    v134 = Lconsp(nil, v134);
    env = stack[0];
    if (v134 == nil) goto v29;
    v134 = v135;
    v134 = qcar(v134);
    v134 = qcar(v134);
    v136 = v134;
    goto v81;

v29:
    v134 = v135;
    v134 = qcar(v134);
    v136 = v134;
    goto v81;

v149:
    v134 = qvalue(elt(env, 2)); /* t */
    goto v150;

v52:
    v134 = qvalue(elt(env, 2)); /* t */
    goto v67;
/* error exit handlers */
v137:
    popv(1);
    return nil;
}



/* Code for ratpoly_neg */

static Lisp_Object CC_ratpoly_neg(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v66, v68;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ratpoly_neg");
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
    v66 = stack[0];
    v66 = qcar(v66);
    fn = elt(env, 1); /* negf */
    v68 = (*qfn1(fn))(qenv(fn), v66);
    nil = C_nil;
    if (exception_pending()) goto v52;
    v66 = stack[0];
    v66 = qcdr(v66);
    popv(1);
    return cons(v68, v66);
/* error exit handlers */
v52:
    popv(1);
    return nil;
}



/* Code for vdp_setsugar */

static Lisp_Object CC_vdp_setsugar(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v63, v64, v65;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for vdp_setsugar");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v63 = v44;
    v65 = v0;
/* end of prologue */
    v64 = qvalue(elt(env, 1)); /* !*cgbsugar */
    if (v64 == nil) return onevalue(v65);
    v64 = elt(env, 2); /* sugar */
    {
        fn = elt(env, 3); /* vdp_putprop */
        return (*qfnn(fn))(qenv(fn), 3, v65, v64, v63);
    }
}



/* Code for ciml */

static Lisp_Object MS_CDECL CC_ciml(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v153, v27;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "ciml");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ciml");
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
    v27 = qvalue(elt(env, 2)); /* atts */
    v153 = elt(env, 3); /* (t y p e) */
    fn = elt(env, 5); /* search_att */
    v153 = (*qfn2(fn))(qenv(fn), v27, v153);
    nil = C_nil;
    if (exception_pending()) goto v49;
    env = stack[-1];
    fn = elt(env, 6); /* lex */
    v153 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v49;
    env = stack[-1];
    v153 = qvalue(elt(env, 4)); /* char */
    stack[0] = v153;
    fn = elt(env, 6); /* lex */
    v153 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v49;
    env = stack[-1];
    v153 = stack[0];
    v153 = Lcompress(nil, v153);
    nil = C_nil;
    if (exception_pending()) goto v49;
    env = stack[-1];
    stack[0] = v153;
    v153 = stack[0];
    if (!(is_number(v153))) goto v65;
    v27 = stack[0];
    v153 = (Lisp_Object)65; /* 4 */
    fn = elt(env, 7); /* errorml */
    v153 = (*qfn2(fn))(qenv(fn), v27, v153);
    nil = C_nil;
    if (exception_pending()) goto v49;
    goto v65;

v65:
    v153 = stack[0];
        popv(2);
        return Lintern(nil, v153);
/* error exit handlers */
v49:
    popv(2);
    return nil;
}



/* Code for d2int */

static Lisp_Object CC_d2int(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v105, v155, v90;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for d2int");
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
    v155 = v0;
/* end of prologue */
    v105 = v155;
    v90 = qcdr(v105);
    v105 = (Lisp_Object)17; /* 1 */
    if (v90 == v105) goto v25;
    v105 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v105); }

v25:
    v105 = v155;
    v105 = qcar(v105);
    v155 = v105;
    if (is_number(v105)) { popv(3); return onevalue(v155); }
    v105 = v155;
    if (!consp(v105)) goto v69;
    v105 = v155;
    v105 = qcar(v105);
    v105 = (consp(v105) ? nil : lisp_true);
    goto v97;

v97:
    if (v105 == nil) goto v65;
    v105 = v155;
    v90 = qcar(v105);
    v105 = elt(env, 3); /* !:rd!: */
    v105 = (v90 == v105 ? lisp_true : nil);
    v105 = (v105 == nil ? lisp_true : nil);
    goto v64;

v64:
    if (v105 == nil) goto v91;
    v105 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v105); }

v91:
    v105 = v155;
    v105 = qcdr(v105);
    stack[-1] = v105;
    v105 = stack[-1];
    v105 = Ltruncate(nil, v105);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-2];
    stack[0] = v105;
    v105 = stack[0];
    v155 = Lfloat(nil, v105);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-2];
    v105 = stack[-1];
    v105 = difference2(v155, v105);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-2];
    v155 = Labsval(nil, v105);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-2];
    v105 = qvalue(elt(env, 4)); /* !!fleps1 */
    v105 = (Lisp_Object)lessp2(v155, v105);
    nil = C_nil;
    if (exception_pending()) goto v133;
    v105 = v105 ? lisp_true : nil;
    env = stack[-2];
    if (!(v105 == nil)) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v105 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v105); }

v65:
    v105 = qvalue(elt(env, 2)); /* t */
    goto v64;

v69:
    v105 = qvalue(elt(env, 2)); /* t */
    goto v97;
/* error exit handlers */
v133:
    popv(3);
    return nil;
}



/* Code for groedeletip */

static Lisp_Object CC_groedeletip(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v81, v43;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for groedeletip");
#endif
    if (stack >= stacklimit)
    {
        push2(v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v44);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v44;
    stack[-1] = v0;
/* end of prologue */

v26:
    v81 = stack[0];
    if (v81 == nil) goto v103;
    v43 = stack[-1];
    v81 = stack[0];
    v81 = qcar(v81);
    if (!(equal(v43, v81))) goto v103;
    v81 = stack[0];
    v81 = qcdr(v81);
    stack[0] = v81;
    goto v26;

v103:
    v81 = stack[0];
    if (v81 == nil) goto v70;
    v81 = stack[0];
    stack[-2] = v81;
    goto v80;

v80:
    v81 = stack[0];
    v81 = qcdr(v81);
    if (v81 == nil) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v43 = stack[-1];
    v81 = stack[0];
    v81 = qcdr(v81);
    v81 = qcar(v81);
    if (equal(v43, v81)) goto v17;
    v81 = stack[0];
    v81 = qcdr(v81);
    stack[0] = v81;
    goto v80;

v17:
    v43 = stack[0];
    v81 = stack[0];
    v81 = qcdr(v81);
    v81 = qcdr(v81);
    fn = elt(env, 2); /* setcdr */
    v81 = (*qfn2(fn))(qenv(fn), v43, v81);
    nil = C_nil;
    if (exception_pending()) goto v83;
    env = stack[-3];
    goto v80;

v70:
    v81 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v81); }
/* error exit handlers */
v83:
    popv(4);
    return nil;
}



/* Code for maprintla */

static Lisp_Object CC_maprintla(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v200, v201, v202;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for maprintla");
#endif
    if (stack >= stacklimit)
    {
        push2(v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v44);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v44;
    stack[-2] = v0;
/* end of prologue */

v116:
    v200 = stack[-2];
    if (v200 == nil) goto v58;
    v200 = stack[-2];
    if (is_number(v200)) goto v203;
    v200 = stack[-2];
    if (!consp(v200)) goto v73;
    v200 = stack[-2];
    v200 = Lstringp(nil, v200);
    env = stack[-4];
    if (v200 == nil) goto v65;
    v200 = stack[-2];
    {
        popv(5);
        fn = elt(env, 19); /* prin2la */
        return (*qfn1(fn))(qenv(fn), v200);
    }

v65:
    v200 = stack[-2];
    v200 = qcar(v200);
    if (!consp(v200)) goto v20;
    v200 = stack[-2];
    v201 = qcar(v200);
    v200 = stack[-1];
    stack[-2] = v201;
    stack[-1] = v200;
    goto v116;

v20:
    v200 = stack[-2];
    v201 = qcar(v200);
    v200 = elt(env, 2); /* laprifn */
    v200 = get(v201, v200);
    env = stack[-4];
    stack[-3] = v200;
    if (v200 == nil) goto v127;
    v200 = stack[-2];
    v201 = qcar(v200);
    v200 = elt(env, 3); /* fulla */
    v200 = Lflagp(nil, v201, v200);
    env = stack[-4];
    if (v200 == nil) goto v151;
    v200 = qvalue(elt(env, 1)); /* nil */
    goto v18;

v18:
    if (v200 == nil) goto v204;
    v200 = qvalue(elt(env, 5)); /* t */
    goto v156;

v156:
    if (!(v200 == nil)) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }

v127:
    v200 = stack[-2];
    v201 = qcar(v200);
    v200 = elt(env, 6); /* indexed */
    v200 = get(v201, v200);
    env = stack[-4];
    stack[-3] = v200;
    if (v200 == nil) goto v5;
    v200 = stack[-2];
    v202 = qcar(v200);
    v200 = stack[-2];
    v201 = qcdr(v200);
    v200 = stack[-3];
    {
        popv(5);
        fn = elt(env, 20); /* prinidop */
        return (*qfnn(fn))(qenv(fn), 3, v202, v201, v200);
    }

v5:
    v200 = stack[-2];
    v201 = qcar(v200);
    v200 = elt(env, 7); /* infix */
    v200 = get(v201, v200);
    env = stack[-4];
    stack[-3] = v200;
    if (v200 == nil) goto v205;
    v201 = stack[-3];
    v200 = stack[-1];
    v200 = (Lisp_Object)greaterp2(v201, v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    v200 = v200 ? lisp_true : nil;
    env = stack[-4];
    stack[-1] = v200;
    v200 = stack[-1];
    if (v200 == nil) goto v207;
    v200 = qvalue(elt(env, 1)); /* nil */
    goto v208;

v208:
    if (v200 == nil) goto v209;
    v200 = qvalue(elt(env, 5)); /* t */
    stack[-1] = v200;
    goto v209;

v209:
    v200 = stack[-1];
    if (!(v200 == nil)) goto v210;
    v200 = elt(env, 16); /* !( */
    fn = elt(env, 21); /* prinlatom */
    v200 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    env = stack[-4];
    goto v210;

v210:
    v200 = stack[-2];
    v202 = qcar(v200);
    v201 = stack[-3];
    v200 = stack[-2];
    v200 = qcdr(v200);
    fn = elt(env, 22); /* inprinla */
    v200 = (*qfnn(fn))(qenv(fn), 3, v202, v201, v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    env = stack[-4];
    v200 = stack[-1];
    if (!(v200 == nil)) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v200 = elt(env, 17); /* !) */
    fn = elt(env, 21); /* prinlatom */
    v200 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }

v207:
    v200 = stack[-2];
    v201 = qcar(v200);
    v200 = elt(env, 15); /* equal */
    v200 = (v201 == v200 ? lisp_true : nil);
    goto v208;

v205:
    v200 = stack[-2];
    v201 = qcar(v200);
    v200 = elt(env, 8); /* !:rd!: */
    if (v201 == v200) goto v211;
    v200 = stack[-2];
    v200 = qcar(v200);
    fn = elt(env, 23); /* oprinla */
    v200 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    env = stack[-4];
    v200 = stack[-2];
    v202 = qcar(v200);
    v200 = stack[-2];
    v201 = qcdr(v200);
    v200 = stack[-1];
    fn = elt(env, 24); /* prinpopargs */
    v200 = (*qfnn(fn))(qenv(fn), 3, v202, v201, v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }

v211:
    stack[-1] = qvalue(elt(env, 9)); /* !*nat */
    qvalue(elt(env, 9)) = nil; /* !*nat */
    v200 = stack[-2];
    v200 = qcdr(v200);
    v200 = Lfloatp(nil, v200);
    env = stack[-4];
    if (v200 == nil) goto v212;
    v200 = stack[-2];
    v200 = qcdr(v200);
    v200 = Llengthc(nil, v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    goto v214;

v214:
    stack[0] = v200;
    v201 = qvalue(elt(env, 10)); /* ncharspr!* */
    v200 = stack[0];
    v201 = plus2(v201, v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    v200 = qvalue(elt(env, 11)); /* laline!* */
    v200 = (Lisp_Object)greaterp2(v201, v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    v200 = v200 ? lisp_true : nil;
    env = stack[-4];
    if (v200 == nil) goto v215;
    v200 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    v200 = stack[0];
    qvalue(elt(env, 10)) = v200; /* ncharspr!* */
    goto v216;

v216:
    v200 = qvalue(elt(env, 12)); /* orig!* */
    qvalue(elt(env, 13)) = v200; /* posn!* */
    v200 = stack[-2];
    v200 = qcdr(v200);
    if (!consp(v200)) goto v137;
    v200 = stack[-2];
    stack[0] = v200;
    goto v217;

v217:
    v201 = qvalue(elt(env, 14)); /* !:bprec!: */
    v200 = (Lisp_Object)49; /* 3 */
    v200 = difference2(v201, v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    fn = elt(env, 25); /* round!:mt */
    v200 = (*qfn2(fn))(qenv(fn), stack[0], v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    fn = elt(env, 26); /* csl_normbf */
    v200 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    fn = elt(env, 27); /* bfprin0 */
    v200 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    v200 = nil;
    qvalue(elt(env, 9)) = stack[-1]; /* !*nat */
    { popv(5); return onevalue(v200); }

v137:
    v200 = stack[-2];
    v200 = qcdr(v200);
    fn = elt(env, 28); /* fl2bf */
    v200 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    stack[0] = v200;
    goto v217;

v215:
    v201 = qvalue(elt(env, 10)); /* ncharspr!* */
    v200 = stack[0];
    v200 = plus2(v201, v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    qvalue(elt(env, 10)) = v200; /* ncharspr!* */
    goto v216;

v212:
    v200 = stack[-2];
    v200 = qcdr(v200);
    v200 = qcar(v200);
    stack[0] = Llengthc(nil, v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    v200 = stack[-2];
    v200 = qcdr(v200);
    v200 = qcdr(v200);
    v201 = Llengthc(nil, v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    v200 = (Lisp_Object)81; /* 5 */
    v200 = plus2(v201, v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    v200 = plus2(stack[0], v200);
    nil = C_nil;
    if (exception_pending()) goto v213;
    env = stack[-4];
    goto v214;

v204:
    v200 = stack[-2];
    v201 = qcar(v200);
    v200 = elt(env, 3); /* fulla */
    v200 = Lflagp(nil, v201, v200);
    env = stack[-4];
    if (v200 == nil) goto v218;
    stack[0] = stack[-3];
    v201 = stack[-2];
    v200 = stack[-1];
    v200 = list2(v201, v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    env = stack[-4];
    fn = elt(env, 29); /* apply */
    v201 = (*qfn2(fn))(qenv(fn), stack[0], v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    env = stack[-4];
    v200 = elt(env, 4); /* failed */
    v200 = (v201 == v200 ? lisp_true : nil);
    v200 = (v200 == nil ? lisp_true : nil);
    goto v156;

v218:
    v200 = qvalue(elt(env, 1)); /* nil */
    goto v156;

v151:
    stack[0] = stack[-3];
    v200 = stack[-2];
    v201 = qcdr(v200);
    v200 = stack[-1];
    v200 = list2(v201, v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    env = stack[-4];
    fn = elt(env, 29); /* apply */
    v201 = (*qfn2(fn))(qenv(fn), stack[0], v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    env = stack[-4];
    v200 = elt(env, 4); /* failed */
    v200 = (v201 == v200 ? lisp_true : nil);
    v200 = (v200 == nil ? lisp_true : nil);
    goto v18;

v73:
    v200 = stack[-2];
    {
        popv(5);
        fn = elt(env, 21); /* prinlatom */
        return (*qfn1(fn))(qenv(fn), v200);
    }

v203:
    v201 = stack[-2];
    v200 = (Lisp_Object)1; /* 0 */
    v200 = (Lisp_Object)lessp2(v201, v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    v200 = v200 ? lisp_true : nil;
    env = stack[-4];
    if (v200 == nil) goto v219;
    v202 = stack[-1];
    v201 = elt(env, 18); /* minus */
    v200 = elt(env, 7); /* infix */
    v200 = get(v201, v200);
    env = stack[-4];
    v200 = (Lisp_Object)lessp2(v202, v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    v200 = v200 ? lisp_true : nil;
    env = stack[-4];
    goto v220;

v220:
    if (v200 == nil) goto v221;
    v200 = stack[-2];
    {
        popv(5);
        fn = elt(env, 19); /* prin2la */
        return (*qfn1(fn))(qenv(fn), v200);
    }

v221:
    v200 = elt(env, 16); /* !( */
    fn = elt(env, 19); /* prin2la */
    v200 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    env = stack[-4];
    v200 = stack[-2];
    fn = elt(env, 19); /* prin2la */
    v200 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    env = stack[-4];
    v200 = elt(env, 17); /* !) */
    fn = elt(env, 19); /* prin2la */
    v200 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v206;
    { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }

v219:
    v200 = qvalue(elt(env, 5)); /* t */
    goto v220;

v58:
    v200 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v200); }
/* error exit handlers */
v213:
    env = stack[-4];
    qvalue(elt(env, 9)) = stack[-1]; /* !*nat */
    popv(5);
    return nil;
v206:
    popv(5);
    return nil;
}



/* Code for spp */

static Lisp_Object CC_spp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v68, v67;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for spp");
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
    v68 = v0;
/* end of prologue */
    v67 = v68;
    v67 = Lconsp(nil, v67);
    env = stack[0];
    if (v67 == nil) goto v101;
    v68 = qcar(v68);
    {
        popv(1);
        fn = elt(env, 2); /* kernelp */
        return (*qfn1(fn))(qenv(fn), v68);
    }

v101:
    v68 = qvalue(elt(env, 1)); /* nil */
    { popv(1); return onevalue(v68); }
}



/* Code for replace2_parents */

static Lisp_Object MS_CDECL CC_replace2_parents(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v44,
                         Lisp_Object v60, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v79, v222;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "replace2_parents");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for replace2_parents");
#endif
    if (stack >= stacklimit)
    {
        push3(v60,v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v44,v60);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v60;
    stack[-1] = v44;
    stack[-2] = v0;
/* end of prologue */
    v222 = stack[-2];
    v79 = stack[0];
    v79 = qcar(v79);
    if (!(equal(v222, v79))) goto v69;
    v222 = stack[0];
    v79 = stack[-1];
    v79 = Lrplaca(nil, v222, v79);
    nil = C_nil;
    if (exception_pending()) goto v223;
    goto v69;

v69:
    v222 = stack[-2];
    v79 = stack[0];
    v79 = qcdr(v79);
    if (equal(v222, v79)) goto v77;
    v79 = nil;
    { popv(3); return onevalue(v79); }

v77:
    v222 = stack[0];
    v79 = stack[-1];
        popv(3);
        return Lrplacd(nil, v222, v79);
/* error exit handlers */
v223:
    popv(3);
    return nil;
}



/* Code for splitup */

static Lisp_Object CC_splitup(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v89, v42, v83;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for splitup");
#endif
    if (stack >= stacklimit)
    {
        push2(v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v44);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v83 = v44;
    stack[0] = v0;
/* end of prologue */
    v89 = stack[0];
    if (v89 == nil) goto v104;
    v89 = stack[0];
    v89 = qcar(v89);
    v89 = qcar(v89);
    v89 = qcar(v89);
    v42 = v89;
    v89 = v42;
    if (v89 == nil) goto v47;
    v89 = v83;
    v89 = Lmemq(nil, v42, v89);
    goto v65;

v65:
    if (v89 == nil) goto v92;
    v42 = qvalue(elt(env, 1)); /* nil */
    v89 = stack[0];
    popv(3);
    return list2(v42, v89);

v92:
    v89 = stack[0];
    v89 = qcdr(v89);
    v42 = v83;
    v89 = CC_splitup(env, v89, v42);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-2];
    v42 = v89;
    v89 = stack[0];
    stack[-1] = qcar(v89);
    v89 = v42;
    stack[0] = qcar(v89);
    v89 = v42;
    v89 = qcdr(v89);
    v89 = qcar(v89);
    v89 = ncons(v89);
    nil = C_nil;
    if (exception_pending()) goto v150;
    {
        Lisp_Object v149 = stack[-1];
        Lisp_Object v108 = stack[0];
        popv(3);
        return acons(v149, v108, v89);
    }

v47:
    v89 = qvalue(elt(env, 2)); /* t */
    goto v65;

v104:
    v89 = qvalue(elt(env, 1)); /* nil */
    v42 = qvalue(elt(env, 1)); /* nil */
    popv(3);
    return list2(v89, v42);
/* error exit handlers */
v150:
    popv(3);
    return nil;
}



/* Code for mk_dummy_ids */

static Lisp_Object CC_mk_dummy_ids(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v48, v49;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mk_dummy_ids");
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
    v48 = v0;
/* end of prologue */
    v49 = v48;
    v49 = qcar(v49);
    v48 = qcdr(v48);
    v48 = qcar(v48);
    fn = elt(env, 4); /* intersection */
    v48 = (*qfn2(fn))(qenv(fn), v49, v48);
    nil = C_nil;
    if (exception_pending()) goto v79;
    env = stack[-1];
    fn = elt(env, 5); /* clean_numid */
    v48 = (*qfn1(fn))(qenv(fn), v48);
    nil = C_nil;
    if (exception_pending()) goto v79;
    env = stack[-1];
    stack[0] = v48;
    v49 = stack[0];
    v48 = elt(env, 1); /* dummy */
    v48 = Lflag(nil, v49, v48);
    nil = C_nil;
    if (exception_pending()) goto v79;
    env = stack[-1];
    v49 = stack[0];
    v48 = elt(env, 2); /* reserved */
    v48 = Lflag(nil, v49, v48);
    nil = C_nil;
    if (exception_pending()) goto v79;
    env = stack[-1];
    v49 = stack[0];
    v48 = qvalue(elt(env, 3)); /* dummy_id!* */
    fn = elt(env, 6); /* union */
    v48 = (*qfn2(fn))(qenv(fn), v49, v48);
    nil = C_nil;
    if (exception_pending()) goto v79;
    env = stack[-1];
    qvalue(elt(env, 3)) = v48; /* dummy_id!* */
    v48 = nil;
    { popv(2); return onevalue(v48); }
/* error exit handlers */
v79:
    popv(2);
    return nil;
}



/* Code for precision */

static Lisp_Object CC_precision(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v102, v79;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for precision");
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
    v102 = stack[0];
    if (is_number(v102)) goto v67;
    v102 = qvalue(elt(env, 1)); /* t */
    goto v103;

v103:
    if (v102 == nil) goto v80;
    v102 = elt(env, 2); /* "positive number required" */
    v79 = v102;
    v102 = v79;
    qvalue(elt(env, 3)) = v102; /* errmsg!* */
    v102 = qvalue(elt(env, 4)); /* !*protfg */
    if (!(v102 == nil)) goto v69;
    v102 = v79;
    fn = elt(env, 5); /* lprie */
    v102 = (*qfn1(fn))(qenv(fn), v102);
    nil = C_nil;
    if (exception_pending()) goto v20;
    env = stack[-1];
    goto v69;

v69:
    v102 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v20;
    env = stack[-1];
    goto v80;

v80:
    v79 = stack[0];
    v102 = qvalue(elt(env, 1)); /* t */
    {
        popv(2);
        fn = elt(env, 6); /* precision1 */
        return (*qfn2(fn))(qenv(fn), v79, v102);
    }

v67:
    v79 = stack[0];
    v102 = (Lisp_Object)1; /* 0 */
    v102 = (Lisp_Object)lessp2(v79, v102);
    nil = C_nil;
    if (exception_pending()) goto v20;
    v102 = v102 ? lisp_true : nil;
    env = stack[-1];
    goto v103;
/* error exit handlers */
v20:
    popv(2);
    return nil;
}



/* Code for simpexpt1 */

static Lisp_Object MS_CDECL CC_simpexpt1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v44,
                         Lisp_Object v60, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v282, v283, v284;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "simpexpt1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for simpexpt1");
#endif
    if (stack >= stacklimit)
    {
        push3(v60,v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v44,v60);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-4] = v60;
    stack[-5] = v44;
    stack[-6] = v0;
/* end of prologue */
    stack[-7] = qvalue(elt(env, 1)); /* !*allfac */
    qvalue(elt(env, 1)) = nil; /* !*allfac */
    stack[-3] = qvalue(elt(env, 2)); /* !*div */
    qvalue(elt(env, 2)) = nil; /* !*div */
    v282 = stack[-6];
    v282 = Lonep(nil, v282);
    env = stack[-8];
    if (v282 == nil) goto v72;
    v283 = (Lisp_Object)17; /* 1 */
    v282 = (Lisp_Object)17; /* 1 */
    v282 = cons(v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v76;

v76:
    qvalue(elt(env, 2)) = stack[-3]; /* !*div */
    qvalue(elt(env, 1)) = stack[-7]; /* !*allfac */
    { popv(9); return onevalue(v282); }

v72:
    v282 = qvalue(elt(env, 3)); /* t */
    qvalue(elt(env, 1)) = v282; /* !*allfac */
    v282 = stack[-5];
    v282 = qcar(v282);
    stack[-2] = v282;
    v283 = stack[-2];
    v282 = (Lisp_Object)17; /* 1 */
    if (v283 == v282) goto v102;
    v282 = qvalue(elt(env, 4)); /* nil */
    goto v51;

v51:
    if (v282 == nil) goto v286;
    v282 = stack[-6];
    fn = elt(env, 13); /* simp */
    v282 = (*qfn1(fn))(qenv(fn), v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v76;

v286:
    v283 = stack[-6];
    v282 = elt(env, 5); /* e */
    if (v283 == v282) goto v94;
    v282 = qvalue(elt(env, 4)); /* nil */
    goto v93;

v93:
    if (v282 == nil) goto v17;
    v282 = stack[-2];
    v282 = qcar(v282);
    v282 = qcar(v282);
    v282 = qcar(v282);
    v282 = qcdr(v282);
    v282 = qcar(v282);
    fn = elt(env, 14); /* simp!* */
    v282 = (*qfn1(fn))(qenv(fn), v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    fn = elt(env, 15); /* prepsq!* */
    stack[0] = (*qfn1(fn))(qenv(fn), v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    v282 = stack[-2];
    v282 = qcar(v282);
    v283 = qcdr(v282);
    v282 = stack[-5];
    v282 = qcdr(v282);
    v283 = cons(v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    v282 = qvalue(elt(env, 4)); /* nil */
    v282 = CC_simpexpt1(env, 3, stack[0], v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v76;

v17:
    v282 = stack[-2];
    if (!consp(v282)) goto v182;
    v282 = stack[-2];
    v282 = qcar(v282);
    v282 = (consp(v282) ? nil : lisp_true);
    goto v176;

v176:
    if (v282 == nil) goto v287;
    v282 = stack[-5];
    v282 = qcdr(v282);
    if (!consp(v282)) goto v288;
    v282 = stack[-5];
    v282 = qcdr(v282);
    v282 = qcar(v282);
    v282 = (consp(v282) ? nil : lisp_true);
    goto v289;

v289:
    v282 = (v282 == nil ? lisp_true : nil);
    goto v290;

v290:
    if (v282 == nil) goto v205;
    v284 = stack[-6];
    v283 = stack[-5];
    v282 = stack[-4];
    fn = elt(env, 16); /* simpexpt11 */
    v282 = (*qfnn(fn))(qenv(fn), 3, v284, v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v76;

v205:
    v282 = stack[-6];
    fn = elt(env, 13); /* simp */
    v282 = (*qfn1(fn))(qenv(fn), v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    stack[-1] = v282;
    v282 = stack[-2];
    if (v282 == nil) goto v291;
    v282 = stack[-1];
    v282 = qcar(v282);
    if (v282 == nil) goto v134;
    v282 = stack[-2];
    if (!consp(v282)) goto v169;
    v282 = qvalue(elt(env, 4)); /* nil */
    goto v292;

v292:
    if (v282 == nil) goto v293;
    v282 = stack[-1];
    v282 = qcar(v282);
    if (!consp(v282)) goto v294;
    v282 = qvalue(elt(env, 4)); /* nil */
    goto v295;

v295:
    if (v282 == nil) goto v296;
    v282 = stack[-1];
    v283 = qcar(v282);
    v282 = stack[-2];
    v282 = Lexpt(nil, v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    fn = elt(env, 17); /* !*d2q */
    v282 = (*qfn1(fn))(qenv(fn), v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v76;

v296:
    v282 = stack[-1];
    v283 = qcar(v282);
    v282 = stack[-2];
    fn = elt(env, 18); /* !:expt */
    v283 = (*qfn2(fn))(qenv(fn), v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    v282 = (Lisp_Object)17; /* 1 */
    v282 = cons(v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    stack[-1] = v282;
    v282 = qvalue(elt(env, 11)); /* !*mcd */
    if (v282 == nil) goto v297;
    v282 = stack[-1];
    fn = elt(env, 19); /* resimp */
    v282 = (*qfn1(fn))(qenv(fn), v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v76;

v297:
    v282 = stack[-1];
    goto v76;

v294:
    v283 = stack[-2];
    v282 = (Lisp_Object)1; /* 0 */
    v282 = (Lisp_Object)greaterp2(v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    v282 = v282 ? lisp_true : nil;
    env = stack[-8];
    goto v295;

v293:
    stack[0] = elt(env, 12); /* expt */
    v283 = stack[-1];
    v282 = stack[-5];
    v282 = list2(v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    fn = elt(env, 20); /* domainvalchk */
    v282 = (*qfn2(fn))(qenv(fn), stack[0], v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    v283 = v282;
    if (v282 == nil) goto v298;
    v282 = v283;
    goto v76;

v298:
    v282 = stack[-2];
    if (!consp(v282)) goto v299;
    v282 = qvalue(elt(env, 4)); /* nil */
    goto v300;

v300:
    if (v282 == nil) goto v301;
    v283 = stack[-2];
    v282 = (Lisp_Object)1; /* 0 */
    v282 = (Lisp_Object)lessp2(v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    v282 = v282 ? lisp_true : nil;
    env = stack[-8];
    if (v282 == nil) goto v302;
    v282 = qvalue(elt(env, 11)); /* !*mcd */
    if (v282 == nil) goto v303;
    stack[0] = stack[-1];
    v282 = stack[-2];
    v282 = negate(v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    fn = elt(env, 21); /* exptsq */
    v282 = (*qfn2(fn))(qenv(fn), stack[0], v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    fn = elt(env, 22); /* invsq */
    v282 = (*qfn1(fn))(qenv(fn), v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v76;

v303:
    v282 = stack[-1];
    v283 = qcar(v282);
    v282 = stack[-2];
    fn = elt(env, 23); /* expf */
    stack[0] = (*qfn2(fn))(qenv(fn), v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    v282 = stack[-1];
    stack[-1] = qcdr(v282);
    v282 = stack[-2];
    v282 = negate(v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    fn = elt(env, 24); /* mksfpf */
    v282 = (*qfn2(fn))(qenv(fn), stack[-1], v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    fn = elt(env, 25); /* multf */
    v283 = (*qfn2(fn))(qenv(fn), stack[0], v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    v282 = (Lisp_Object)17; /* 1 */
    v282 = cons(v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v76;

v302:
    v283 = stack[-1];
    v282 = stack[-2];
    fn = elt(env, 21); /* exptsq */
    v282 = (*qfn2(fn))(qenv(fn), v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v76;

v301:
    v282 = stack[-4];
    if (v282 == nil) goto v304;
    v282 = stack[-6];
    v284 = v282;
    goto v305;

v305:
    v283 = stack[-5];
    v282 = qvalue(elt(env, 3)); /* t */
    fn = elt(env, 16); /* simpexpt11 */
    v282 = (*qfnn(fn))(qenv(fn), 3, v284, v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v76;

v304:
    v282 = stack[-1];
    fn = elt(env, 26); /* subs2!* */
    v282 = (*qfn1(fn))(qenv(fn), v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    fn = elt(env, 15); /* prepsq!* */
    v282 = (*qfn1(fn))(qenv(fn), v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    v284 = v282;
    goto v305;

v299:
    v282 = stack[-5];
    v283 = qcdr(v282);
    v282 = (Lisp_Object)17; /* 1 */
    v282 = (v283 == v282 ? lisp_true : nil);
    goto v300;

v169:
    v282 = stack[-5];
    v283 = qcdr(v282);
    v282 = (Lisp_Object)17; /* 1 */
    if (v283 == v282) goto v306;
    v282 = qvalue(elt(env, 4)); /* nil */
    goto v292;

v306:
    v282 = stack[-1];
    v282 = qcar(v282);
    if (!consp(v282)) goto v210;
    v282 = stack[-1];
    v282 = qcar(v282);
    v282 = qcar(v282);
    v282 = (consp(v282) ? nil : lisp_true);
    goto v307;

v307:
    if (v282 == nil) goto v308;
    v282 = stack[-1];
    v283 = qcdr(v282);
    v282 = (Lisp_Object)17; /* 1 */
    v282 = (v283 == v282 ? lisp_true : nil);
    goto v292;

v308:
    v282 = qvalue(elt(env, 4)); /* nil */
    goto v292;

v210:
    v282 = qvalue(elt(env, 3)); /* t */
    goto v307;

v134:
    v282 = stack[-2];
    if (!consp(v282)) goto v217;
    v282 = stack[-2];
    v282 = qcar(v282);
    v282 = (consp(v282) ? nil : lisp_true);
    goto v177;

v177:
    if (v282 == nil) goto v309;
    v282 = stack[-2];
    fn = elt(env, 27); /* minusf */
    v282 = (*qfn1(fn))(qenv(fn), v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v310;

v310:
    if (v282 == nil) goto v170;
    v282 = elt(env, 10); /* "Zero divisor" */
    v283 = v282;
    v282 = v283;
    qvalue(elt(env, 8)) = v282; /* errmsg!* */
    v282 = qvalue(elt(env, 9)); /* !*protfg */
    if (!(v282 == nil)) goto v311;
    v282 = v283;
    fn = elt(env, 28); /* lprie */
    v282 = (*qfn1(fn))(qenv(fn), v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v311;

v311:
    v282 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    v282 = nil;
    goto v76;

v170:
    v283 = qvalue(elt(env, 4)); /* nil */
    v282 = (Lisp_Object)17; /* 1 */
    v282 = cons(v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v76;

v309:
    v282 = qvalue(elt(env, 4)); /* nil */
    goto v310;

v217:
    v282 = qvalue(elt(env, 3)); /* t */
    goto v177;

v291:
    v282 = stack[-1];
    v282 = qcar(v282);
    if (v282 == nil) goto v38;
    v283 = (Lisp_Object)17; /* 1 */
    v282 = (Lisp_Object)17; /* 1 */
    v282 = cons(v283, v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v76;

v38:
    v282 = elt(env, 7); /* "0**0 formed" */
    v283 = v282;
    v282 = v283;
    qvalue(elt(env, 8)) = v282; /* errmsg!* */
    v282 = qvalue(elt(env, 9)); /* !*protfg */
    if (!(v282 == nil)) goto v312;
    v282 = v283;
    fn = elt(env, 28); /* lprie */
    v282 = (*qfn1(fn))(qenv(fn), v282);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    goto v312;

v312:
    v282 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-8];
    v282 = nil;
    goto v76;

v288:
    v282 = qvalue(elt(env, 3)); /* t */
    goto v289;

v287:
    v282 = qvalue(elt(env, 3)); /* t */
    goto v290;

v182:
    v282 = qvalue(elt(env, 3)); /* t */
    goto v176;

v94:
    v282 = stack[-5];
    v282 = qcdr(v282);
    if (!consp(v282)) goto v151;
    v282 = stack[-5];
    v282 = qcdr(v282);
    v282 = qcar(v282);
    v282 = (consp(v282) ? nil : lisp_true);
    goto v83;

v83:
    if (v282 == nil) goto v313;
    v282 = stack[-2];
    if (!consp(v282)) goto v314;
    v282 = stack[-2];
    v282 = qcar(v282);
    v282 = (consp(v282) ? nil : lisp_true);
    goto v315;

v315:
    if (v282 == nil) goto v316;
    v282 = qvalue(elt(env, 4)); /* nil */
    goto v93;

v316:
    v282 = stack[-2];
    v282 = qcar(v282);
    v282 = qcar(v282);
    v283 = qcdr(v282);
    v282 = (Lisp_Object)17; /* 1 */
    if (v283 == v282) goto v114;
    v282 = qvalue(elt(env, 4)); /* nil */
    goto v93;

v114:
    v282 = stack[-2];
    v282 = qcdr(v282);
    if (v282 == nil) goto v317;
    v282 = qvalue(elt(env, 4)); /* nil */
    goto v93;

v317:
    v282 = stack[-2];
    v282 = qcar(v282);
    v282 = qcar(v282);
    v283 = qcar(v282);
    v282 = elt(env, 6); /* log */
    v282 = Leqcar(nil, v283, v282);
    env = stack[-8];
    goto v93;

v314:
    v282 = qvalue(elt(env, 3)); /* t */
    goto v315;

v313:
    v282 = qvalue(elt(env, 4)); /* nil */
    goto v93;

v151:
    v282 = qvalue(elt(env, 3)); /* t */
    goto v83;

v102:
    v282 = stack[-5];
    v283 = qcdr(v282);
    v282 = (Lisp_Object)17; /* 1 */
    v282 = (v283 == v282 ? lisp_true : nil);
    goto v51;
/* error exit handlers */
v285:
    env = stack[-8];
    qvalue(elt(env, 2)) = stack[-3]; /* !*div */
    qvalue(elt(env, 1)) = stack[-7]; /* !*allfac */
    popv(9);
    return nil;
}



/* Code for makecoeffpairs */

static Lisp_Object MS_CDECL CC_makecoeffpairs(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v44,
                         Lisp_Object v60, Lisp_Object v46, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v61, v63, v64, v65;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "makecoeffpairs");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for makecoeffpairs");
#endif
    if (stack >= stacklimit)
    {
        push4(v46,v60,v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0,v44,v60,v46);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v61 = v46;
    v63 = v60;
    v64 = v44;
    v65 = v0;
/* end of prologue */
    fn = elt(env, 1); /* makecoeffpairs1 */
    v61 = (*qfnn(fn))(qenv(fn), 4, v65, v64, v63, v61);
    errexit();
    v61 = qcdr(v61);
        return Lnreverse(nil, v61);
}



/* Code for mk!+equation */

static Lisp_Object CC_mkLequation(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v52, v53, v73;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mk+equation");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v52 = v44;
    v53 = v0;
/* end of prologue */
    v73 = elt(env, 1); /* equal */
    return list3(v73, v53, v52);
}



/* Code for scar */

static Lisp_Object CC_scar(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v102, v79;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for scar");
#endif
    if (stack >= stacklimit)
    {
        push2(v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v44);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v44;
    stack[-1] = v0;
/* end of prologue */

v116:
    v102 = stack[0];
    if (!consp(v102)) goto v25;
    v79 = stack[-1];
    v102 = stack[0];
    v102 = qcar(v102);
    if (equal(v79, v102)) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v79 = stack[-1];
    v102 = stack[0];
    v102 = qcar(v102);
    v102 = CC_scar(env, v79, v102);
    nil = C_nil;
    if (exception_pending()) goto v19;
    env = stack[-2];
    if (!(v102 == nil)) { popv(3); return onevalue(v102); }
    v79 = stack[-1];
    v102 = stack[0];
    v102 = qcdr(v102);
    stack[-1] = v79;
    stack[0] = v102;
    goto v116;

v25:
    v102 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v102); }
/* error exit handlers */
v19:
    popv(3);
    return nil;
}



/* Code for o!-nextarg */

static Lisp_Object CC_oKnextarg(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v138, v35;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for o-nextarg");
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
    v138 = qvalue(elt(env, 1)); /* !*udebug */
    if (v138 == nil) goto v62;
    v138 = qvalue(elt(env, 2)); /* nil */
    fn = elt(env, 12); /* uprint */
    v138 = (*qfn1(fn))(qenv(fn), v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    env = stack[-3];
    goto v62;

v62:
    v35 = qvalue(elt(env, 3)); /* i */
    v138 = (Lisp_Object)17; /* 1 */
    if (v35 == v138) goto v69;
    v138 = qvalue(elt(env, 2)); /* nil */
    goto v53;

v53:
    if (v138 == nil) goto v222;
    v138 = stack[-1];
    goto v66;

v66:
    stack[0] = v138;
    v138 = qvalue(elt(env, 3)); /* i */
    v138 = add1(v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    env = stack[-3];
    qvalue(elt(env, 3)) = v138; /* i */
    { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }

v222:
    v35 = qvalue(elt(env, 3)); /* i */
    v138 = (Lisp_Object)1; /* 0 */
    if (v35 == v138) goto v28;
    v138 = qvalue(elt(env, 2)); /* nil */
    goto v49;

v49:
    if (v138 == nil) goto v27;
    v35 = elt(env, 5); /* (null!-fn) */
    v138 = stack[-1];
    v138 = cons(v35, v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    env = stack[-3];
    goto v66;

v27:
    v138 = qvalue(elt(env, 6)); /* acontract */
    if (v138 == nil) goto v81;
    v35 = qvalue(elt(env, 3)); /* i */
    v138 = qvalue(elt(env, 4)); /* upb */
    v138 = (Lisp_Object)lesseq2(v35, v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    v138 = v138 ? lisp_true : nil;
    env = stack[-3];
    if (v138 == nil) goto v81;
    stack[-2] = qvalue(elt(env, 7)); /* op */
    v35 = stack[-1];
    v138 = qvalue(elt(env, 3)); /* i */
    fn = elt(env, 13); /* first0 */
    stack[0] = (*qfn2(fn))(qenv(fn), v35, v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    env = stack[-3];
    v35 = stack[-1];
    v138 = qvalue(elt(env, 3)); /* i */
    fn = elt(env, 14); /* last0 */
    v138 = (*qfn2(fn))(qenv(fn), v35, v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    env = stack[-3];
    v138 = acons(stack[-2], stack[0], v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    env = stack[-3];
    fn = elt(env, 15); /* mval */
    v138 = (*qfn1(fn))(qenv(fn), v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    env = stack[-3];
    goto v66;

v81:
    v138 = qvalue(elt(env, 8)); /* mcontract */
    if (v138 == nil) goto v115;
    v35 = qvalue(elt(env, 3)); /* i */
    v138 = qvalue(elt(env, 4)); /* upb */
    v138 = (Lisp_Object)lesseq2(v35, v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    v138 = v138 ? lisp_true : nil;
    env = stack[-3];
    if (v138 == nil) goto v115;
    stack[-2] = elt(env, 9); /* null!-fn */
    v35 = stack[-1];
    v138 = qvalue(elt(env, 3)); /* i */
    fn = elt(env, 13); /* first0 */
    stack[0] = (*qfn2(fn))(qenv(fn), v35, v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    env = stack[-3];
    v35 = stack[-1];
    v138 = qvalue(elt(env, 3)); /* i */
    fn = elt(env, 14); /* last0 */
    v138 = (*qfn2(fn))(qenv(fn), v35, v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    env = stack[-3];
    v138 = acons(stack[-2], stack[0], v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    env = stack[-3];
    goto v66;

v115:
    v138 = qvalue(elt(env, 10)); /* expand */
    if (v138 == nil) goto v117;
    v138 = qvalue(elt(env, 2)); /* nil */
    qvalue(elt(env, 10)) = v138; /* expand */
    v35 = qvalue(elt(env, 11)); /* identity */
    v138 = stack[-1];
    v138 = cons(v35, v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    env = stack[-3];
    goto v66;

v117:
    v138 = nil;
    goto v66;

v28:
    v35 = qvalue(elt(env, 3)); /* i */
    v138 = qvalue(elt(env, 4)); /* upb */
    v138 = (Lisp_Object)lesseq2(v35, v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    v138 = v138 ? lisp_true : nil;
    env = stack[-3];
    goto v49;

v69:
    v35 = qvalue(elt(env, 3)); /* i */
    v138 = qvalue(elt(env, 4)); /* upb */
    v138 = (Lisp_Object)lesseq2(v35, v138);
    nil = C_nil;
    if (exception_pending()) goto v325;
    v138 = v138 ? lisp_true : nil;
    env = stack[-3];
    goto v53;
/* error exit handlers */
v325:
    popv(4);
    return nil;
}



/* Code for arglength */

static Lisp_Object CC_arglength(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v154, v97;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for arglength");
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
    v97 = v0;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* !*intstr */
    qvalue(elt(env, 1)) = nil; /* !*intstr */
    v154 = v97;
    if (v154 == nil) goto v26;
    v154 = qvalue(elt(env, 2)); /* t */
    qvalue(elt(env, 1)) = v154; /* !*intstr */
    v154 = v97;
    fn = elt(env, 3); /* reval */
    v154 = (*qfn1(fn))(qenv(fn), v154);
    nil = C_nil;
    if (exception_pending()) goto v70;
    env = stack[-1];
    v97 = v154;
    v154 = v97;
    if (!consp(v154)) goto v53;
    v154 = v97;
    v154 = qcdr(v154);
    v154 = Llength(nil, v154);
    nil = C_nil;
    if (exception_pending()) goto v70;
    env = stack[-1];
    goto v25;

v25:
    qvalue(elt(env, 1)) = stack[0]; /* !*intstr */
    { popv(2); return onevalue(v154); }

v53:
    v154 = (Lisp_Object)-15; /* -1 */
    goto v25;

v26:
    v154 = (Lisp_Object)1; /* 0 */
    goto v25;
/* error exit handlers */
v70:
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*intstr */
    popv(2);
    return nil;
}



/* Code for sqprint */

static Lisp_Object CC_sqprint(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v328, v329, v118;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for sqprint");
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
    stack[0] = qvalue(elt(env, 1)); /* !*prin!# */
    qvalue(elt(env, 1)) = nil; /* !*prin!# */
    v328 = qvalue(elt(env, 2)); /* t */
    qvalue(elt(env, 1)) = v328; /* !*prin!# */
    v328 = qvalue(elt(env, 3)); /* orig!* */
    stack[-1] = v328;
    v328 = qvalue(elt(env, 4)); /* !*nat */
    if (v328 == nil) goto v76;
    v329 = qvalue(elt(env, 5)); /* posn!* */
    v328 = (Lisp_Object)321; /* 20 */
    v328 = (Lisp_Object)lessp2(v329, v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    v328 = v328 ? lisp_true : nil;
    env = stack[-4];
    if (v328 == nil) goto v76;
    v328 = qvalue(elt(env, 5)); /* posn!* */
    qvalue(elt(env, 3)) = v328; /* orig!* */
    goto v76;

v76:
    v328 = qvalue(elt(env, 6)); /* !*pri */
    if (!(v328 == nil)) goto v21;
    v328 = qvalue(elt(env, 7)); /* wtl!* */
    if (!(v328 == nil)) goto v21;
    v328 = stack[-2];
    v329 = qcdr(v328);
    v328 = (Lisp_Object)17; /* 1 */
    if (v329 == v328) goto v39;
    v328 = stack[-2];
    v328 = qcar(v328);
    if (!consp(v328)) goto v315;
    v328 = stack[-2];
    v328 = qcar(v328);
    v328 = qcar(v328);
    v328 = (consp(v328) ? nil : lisp_true);
    goto v197;

v197:
    if (v328 == nil) goto v330;
    v328 = qvalue(elt(env, 13)); /* nil */
    goto v133;

v133:
    stack[-3] = v328;
    v328 = stack[-3];
    if (v328 == nil) goto v99;
    v328 = elt(env, 14); /* "(" */
    fn = elt(env, 17); /* prin2!* */
    v328 = (*qfn1(fn))(qenv(fn), v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    goto v99;

v99:
    v328 = stack[-2];
    v328 = qcar(v328);
    fn = elt(env, 18); /* xprinf2 */
    v328 = (*qfn1(fn))(qenv(fn), v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    v328 = stack[-3];
    if (v328 == nil) goto v331;
    v328 = elt(env, 15); /* ")" */
    fn = elt(env, 17); /* prin2!* */
    v328 = (*qfn1(fn))(qenv(fn), v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    goto v331;

v331:
    v328 = elt(env, 16); /* " / " */
    fn = elt(env, 17); /* prin2!* */
    v328 = (*qfn1(fn))(qenv(fn), v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    v328 = stack[-2];
    v328 = qcdr(v328);
    if (!consp(v328)) goto v313;
    v328 = stack[-2];
    v328 = qcdr(v328);
    v328 = qcar(v328);
    v328 = (consp(v328) ? nil : lisp_true);
    goto v34;

v34:
    if (v328 == nil) goto v320;
    v328 = qvalue(elt(env, 13)); /* nil */
    goto v323;

v323:
    stack[-3] = v328;
    v328 = stack[-3];
    if (v328 == nil) goto v332;
    v328 = elt(env, 14); /* "(" */
    fn = elt(env, 17); /* prin2!* */
    v328 = (*qfn1(fn))(qenv(fn), v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    goto v332;

v332:
    v328 = stack[-2];
    v328 = qcdr(v328);
    fn = elt(env, 18); /* xprinf2 */
    v328 = (*qfn1(fn))(qenv(fn), v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    v328 = stack[-3];
    if (v328 == nil) goto v154;
    v328 = elt(env, 15); /* ")" */
    fn = elt(env, 17); /* prin2!* */
    v328 = (*qfn1(fn))(qenv(fn), v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    goto v154;

v154:
    v328 = stack[-1];
    qvalue(elt(env, 3)) = v328; /* orig!* */
    qvalue(elt(env, 1)) = stack[0]; /* !*prin!# */
    { popv(5); return onevalue(v328); }

v320:
    v328 = stack[-2];
    v328 = qcdr(v328);
    v328 = qcdr(v328);
    if (!(v328 == nil)) goto v323;
    v328 = stack[-2];
    v328 = qcdr(v328);
    v328 = qcar(v328);
    v329 = qcdr(v328);
    v328 = (Lisp_Object)17; /* 1 */
    v328 = Lneq(nil, v329, v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    goto v323;

v313:
    v328 = qvalue(elt(env, 2)); /* t */
    goto v34;

v330:
    v328 = stack[-2];
    v328 = qcar(v328);
    v328 = qcdr(v328);
    goto v133;

v315:
    v328 = qvalue(elt(env, 2)); /* t */
    goto v197;

v39:
    v328 = stack[-2];
    v328 = qcar(v328);
    fn = elt(env, 18); /* xprinf2 */
    v328 = (*qfn1(fn))(qenv(fn), v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    goto v154;

v21:
    v328 = stack[-2];
    fn = elt(env, 19); /* sqhorner!* */
    v328 = (*qfn1(fn))(qenv(fn), v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    fn = elt(env, 20); /* prepsq!* */
    stack[-2] = (*qfn1(fn))(qenv(fn), v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    v329 = qvalue(elt(env, 8)); /* ordl!* */
    v328 = qvalue(elt(env, 9)); /* factors!* */
    v328 = Lappend(nil, v329, v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    fn = elt(env, 21); /* prepreform1 */
    v328 = (*qfn2(fn))(qenv(fn), stack[-2], v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    v329 = qvalue(elt(env, 10)); /* outputhandler!* */
    if (v329 == nil) goto v78;
    v118 = qvalue(elt(env, 10)); /* outputhandler!* */
    v329 = elt(env, 11); /* maprin */
    v328 = Lapply2(nil, 3, v118, v329, v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    goto v154;

v78:
    v329 = qvalue(elt(env, 12)); /* overflowed!* */
    if (!(v329 == nil)) goto v154;
    v329 = v328;
    v328 = (Lisp_Object)1; /* 0 */
    fn = elt(env, 22); /* maprint */
    v328 = (*qfn2(fn))(qenv(fn), v329, v328);
    nil = C_nil;
    if (exception_pending()) goto v144;
    env = stack[-4];
    goto v154;
/* error exit handlers */
v144:
    env = stack[-4];
    qvalue(elt(env, 1)) = stack[0]; /* !*prin!# */
    popv(5);
    return nil;
}



/* Code for even_action_term */

static Lisp_Object MS_CDECL CC_even_action_term(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v44,
                         Lisp_Object v60, Lisp_Object v46, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v81, v43;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "even_action_term");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for even_action_term");
#endif
    if (stack >= stacklimit)
    {
        push4(v46,v60,v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0,v44,v60,v46);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v46;
    stack[-3] = v60;
    stack[-4] = v44;
    stack[-5] = v0;
/* end of prologue */
    stack[-6] = stack[-5];
    v81 = stack[-4];
    stack[-1] = qcar(v81);
    stack[0] = stack[-3];
    v43 = stack[-2];
    v81 = stack[-4];
    v81 = qcdr(v81);
    fn = elt(env, 1); /* multf */
    v43 = (*qfn2(fn))(qenv(fn), v43, v81);
    nil = C_nil;
    if (exception_pending()) goto v149;
    env = stack[-7];
    v81 = (Lisp_Object)17; /* 1 */
    v81 = cons(v43, v81);
    nil = C_nil;
    if (exception_pending()) goto v149;
    env = stack[-7];
    fn = elt(env, 2); /* even_action_pow */
    stack[-1] = (*qfnn(fn))(qenv(fn), 4, stack[-6], stack[-1], stack[0], v81);
    nil = C_nil;
    if (exception_pending()) goto v149;
    env = stack[-7];
    v81 = stack[-4];
    stack[0] = qcdr(v81);
    v81 = stack[-4];
    v43 = qcar(v81);
    v81 = (Lisp_Object)17; /* 1 */
    v81 = cons(v43, v81);
    nil = C_nil;
    if (exception_pending()) goto v149;
    env = stack[-7];
    v81 = ncons(v81);
    nil = C_nil;
    if (exception_pending()) goto v149;
    env = stack[-7];
    fn = elt(env, 1); /* multf */
    v81 = (*qfn2(fn))(qenv(fn), stack[-2], v81);
    nil = C_nil;
    if (exception_pending()) goto v149;
    env = stack[-7];
    fn = elt(env, 3); /* even_action_sf */
    v81 = (*qfnn(fn))(qenv(fn), 4, stack[-5], stack[0], stack[-3], v81);
    nil = C_nil;
    if (exception_pending()) goto v149;
    env = stack[-7];
    {
        Lisp_Object v108 = stack[-1];
        popv(8);
        fn = elt(env, 4); /* addsq */
        return (*qfn2(fn))(qenv(fn), v108, v81);
    }
/* error exit handlers */
v149:
    popv(8);
    return nil;
}



/* Code for cl_sitheo */

static Lisp_Object CC_cl_sitheo(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v151, v131, v150;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for cl_sitheo");
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
    stack[-3] = nil;
    stack[-1] = nil;
    stack[0] = qvalue(elt(env, 1)); /* !*rlsiexpla */
    qvalue(elt(env, 1)) = nil; /* !*rlsiexpla */
    v151 = qvalue(elt(env, 2)); /* !*rlsithok */
    if (v151 == nil) goto v52;
    v151 = stack[-2];
    goto v103;

v103:
    qvalue(elt(env, 1)) = stack[0]; /* !*rlsiexpla */
    { popv(5); return onevalue(v151); }

v52:
    v151 = stack[-2];
    if (v151 == nil) goto v57;
    v151 = stack[-2];
    v151 = qcar(v151);
    stack[-3] = v151;
    v151 = stack[-2];
    v151 = qcdr(v151);
    stack[-2] = v151;
    v131 = stack[-3];
    v151 = qvalue(elt(env, 3)); /* nil */
    fn = elt(env, 7); /* cl_simplat */
    v151 = (*qfn2(fn))(qenv(fn), v131, v151);
    nil = C_nil;
    if (exception_pending()) goto v155;
    env = stack[-4];
    v150 = v151;
    v131 = v150;
    v151 = elt(env, 4); /* false */
    if (v131 == v151) goto v77;
    v131 = v150;
    v151 = elt(env, 6); /* true */
    if (v131 == v151) goto v52;
    v131 = v150;
    v151 = stack[-1];
    v151 = cons(v131, v151);
    nil = C_nil;
    if (exception_pending()) goto v155;
    env = stack[-4];
    stack[-1] = v151;
    goto v52;

v77:
    v151 = elt(env, 5); /* inctheo */
    stack[-3] = v151;
    v151 = qvalue(elt(env, 3)); /* nil */
    stack[-2] = v151;
    goto v52;

v57:
    v131 = stack[-3];
    v151 = elt(env, 5); /* inctheo */
    if (v131 == v151) goto v54;
    v151 = stack[-1];
    goto v103;

v54:
    v151 = elt(env, 5); /* inctheo */
    goto v103;
/* error exit handlers */
v155:
    env = stack[-4];
    qvalue(elt(env, 1)) = stack[0]; /* !*rlsiexpla */
    popv(5);
    return nil;
}



/* Code for maxfrom */

static Lisp_Object CC_maxfrom(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v67, v52;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for maxfrom");
#endif
    if (stack >= stacklimit)
    {
        push2(v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v44);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v67 = v44;
    v52 = v0;
/* end of prologue */
    stack[0] = v52;
    v52 = add1(v67);
    nil = C_nil;
    if (exception_pending()) goto v73;
    env = stack[-1];
    v67 = (Lisp_Object)1; /* 0 */
    {
        Lisp_Object v74 = stack[0];
        popv(2);
        fn = elt(env, 1); /* maxfrom1 */
        return (*qfnn(fn))(qenv(fn), 3, v74, v52, v67);
    }
/* error exit handlers */
v73:
    popv(2);
    return nil;
}



/* Code for expf */

static Lisp_Object CC_expf(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v326, v6;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for expf");
#endif
    if (stack >= stacklimit)
    {
        push2(v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v44);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v44;
    stack[-2] = v0;
/* end of prologue */
    v326 = stack[-2];
    if (v326 == nil) goto v25;
    v6 = stack[-2];
    v326 = (Lisp_Object)17; /* 1 */
    if (v6 == v326) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v326 = stack[-2];
    if (!consp(v326)) goto v64;
    v326 = stack[-2];
    if (!consp(v326)) goto v49;
    v326 = stack[-2];
    v326 = qcar(v326);
    v326 = (consp(v326) ? nil : lisp_true);
    goto v48;

v48:
    if (v326 == nil) goto v153;
    v6 = stack[-2];
    v326 = stack[-1];
    {
        popv(5);
        fn = elt(env, 3); /* !:expt */
        return (*qfn2(fn))(qenv(fn), v6, v326);
    }

v153:
    v326 = stack[-2];
    v326 = qcdr(v326);
    if (v326 == nil) goto v59;
    v6 = stack[-2];
    v326 = stack[-1];
    {
        popv(5);
        fn = elt(env, 4); /* mksp!* */
        return (*qfn2(fn))(qenv(fn), v6, v326);
    }

v59:
    v326 = stack[-2];
    v326 = qcar(v326);
    v326 = qcar(v326);
    v6 = qcdr(v326);
    v326 = stack[-1];
    v326 = times2(v6, v326);
    nil = C_nil;
    if (exception_pending()) goto v191;
    env = stack[-4];
    stack[0] = v326;
    v6 = stack[0];
    v326 = (Lisp_Object)1; /* 0 */
    v326 = (Lisp_Object)greaterp2(v6, v326);
    nil = C_nil;
    if (exception_pending()) goto v191;
    v326 = v326 ? lisp_true : nil;
    env = stack[-4];
    if (v326 == nil) goto v337;
    v326 = stack[-2];
    v326 = qcar(v326);
    v326 = qcar(v326);
    v326 = qcar(v326);
    if (!consp(v326)) goto v99;
    v326 = stack[-2];
    v326 = qcar(v326);
    v326 = qcar(v326);
    v326 = qcar(v326);
    v326 = qcar(v326);
    v326 = (consp(v326) ? nil : lisp_true);
    v326 = (v326 == nil ? lisp_true : nil);
    goto v324;

v324:
    if (v326 == nil) goto v337;
    v326 = stack[-2];
    v326 = qcar(v326);
    v326 = qcar(v326);
    v6 = qcar(v326);
    v326 = stack[0];
    fn = elt(env, 5); /* exptf */
    stack[0] = (*qfn2(fn))(qenv(fn), v6, v326);
    nil = C_nil;
    if (exception_pending()) goto v191;
    env = stack[-4];
    v326 = stack[-2];
    v326 = qcar(v326);
    v6 = qcdr(v326);
    v326 = stack[-1];
    v326 = CC_expf(env, v6, v326);
    nil = C_nil;
    if (exception_pending()) goto v191;
    env = stack[-4];
    {
        Lisp_Object v211 = stack[0];
        popv(5);
        fn = elt(env, 6); /* multf */
        return (*qfn2(fn))(qenv(fn), v211, v326);
    }

v337:
    v326 = stack[-2];
    v326 = qcar(v326);
    v326 = qcar(v326);
    stack[-3] = qcar(v326);
    v326 = stack[-2];
    v326 = qcar(v326);
    v6 = qcdr(v326);
    v326 = stack[-1];
    v326 = CC_expf(env, v6, v326);
    nil = C_nil;
    if (exception_pending()) goto v191;
    env = stack[-4];
    v326 = acons(stack[-3], stack[0], v326);
    nil = C_nil;
    if (exception_pending()) goto v191;
    popv(5);
    return ncons(v326);

v99:
    v326 = qvalue(elt(env, 1)); /* nil */
    goto v324;

v49:
    v326 = qvalue(elt(env, 2)); /* t */
    goto v48;

v64:
    stack[0] = (Lisp_Object)17; /* 1 */
    v326 = stack[-1];
    v326 = negate(v326);
    nil = C_nil;
    if (exception_pending()) goto v191;
    env = stack[-4];
    v326 = Lexpt(nil, stack[-2], v326);
    nil = C_nil;
    if (exception_pending()) goto v191;
    env = stack[-4];
    {
        Lisp_Object v332 = stack[0];
        popv(5);
        fn = elt(env, 7); /* mkrn */
        return (*qfn2(fn))(qenv(fn), v332, v326);
    }

v25:
    v326 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v326); }
/* error exit handlers */
v191:
    popv(5);
    return nil;
}



/* Code for mk!+real!+inner!+product */

static Lisp_Object CC_mkLrealLinnerLproduct(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v44)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v315, v314;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mk+real+inner+product");
#endif
    if (stack >= stacklimit)
    {
        push2(v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v44);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v44;
    stack[-3] = v0;
/* end of prologue */
    v315 = stack[-3];
    fn = elt(env, 6); /* get!+vec!+dim */
    stack[0] = (*qfn1(fn))(qenv(fn), v315);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-5];
    v315 = stack[-2];
    fn = elt(env, 6); /* get!+vec!+dim */
    v315 = (*qfn1(fn))(qenv(fn), v315);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-5];
    if (equal(stack[0], v315)) goto v75;
    v315 = qvalue(elt(env, 1)); /* !*protfg */
    if (!(v315 == nil)) goto v64;
    v315 = elt(env, 2); /* "wrong dimensions in innerproduct" */
    fn = elt(env, 7); /* lprie */
    v315 = (*qfn1(fn))(qenv(fn), v315);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-5];
    goto v64;

v64:
    v315 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-5];
    goto v75;

v75:
    v314 = qvalue(elt(env, 3)); /* nil */
    v315 = (Lisp_Object)17; /* 1 */
    v315 = cons(v314, v315);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-5];
    stack[0] = v315;
    v315 = (Lisp_Object)17; /* 1 */
    stack[-4] = v315;
    goto v223;

v223:
    v315 = stack[-3];
    fn = elt(env, 6); /* get!+vec!+dim */
    v314 = (*qfn1(fn))(qenv(fn), v315);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-5];
    v315 = stack[-4];
    v315 = difference2(v314, v315);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-5];
    v315 = Lminusp(nil, v315);
    env = stack[-5];
    if (v315 == nil) goto v111;
    v315 = qvalue(elt(env, 4)); /* t */
    stack[-1] = qvalue(elt(env, 5)); /* !*sub2 */
    qvalue(elt(env, 5)) = v315; /* !*sub2 */
    v315 = stack[0];
    fn = elt(env, 8); /* subs2 */
    v315 = (*qfn1(fn))(qenv(fn), v315);
    nil = C_nil;
    if (exception_pending()) goto v87;
    env = stack[-5];
    stack[0] = v315;
    qvalue(elt(env, 5)) = stack[-1]; /* !*sub2 */
    { Lisp_Object res = stack[0]; popv(6); return onevalue(res); }

v111:
    stack[-1] = stack[0];
    v314 = stack[-3];
    v315 = stack[-4];
    fn = elt(env, 9); /* get!+vec!+entry */
    stack[0] = (*qfn2(fn))(qenv(fn), v314, v315);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-5];
    v314 = stack[-2];
    v315 = stack[-4];
    fn = elt(env, 9); /* get!+vec!+entry */
    v315 = (*qfn2(fn))(qenv(fn), v314, v315);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-5];
    fn = elt(env, 10); /* multsq */
    v315 = (*qfn2(fn))(qenv(fn), stack[0], v315);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-5];
    fn = elt(env, 11); /* addsq */
    v315 = (*qfn2(fn))(qenv(fn), stack[-1], v315);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-5];
    stack[0] = v315;
    v315 = stack[-4];
    v315 = add1(v315);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-5];
    stack[-4] = v315;
    goto v223;
/* error exit handlers */
v87:
    env = stack[-5];
    qvalue(elt(env, 5)) = stack[-1]; /* !*sub2 */
    popv(6);
    return nil;
v14:
    popv(6);
    return nil;
}



/* Code for cl_susiupdknowl2 */

static Lisp_Object MS_CDECL CC_cl_susiupdknowl2(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v44,
                         Lisp_Object v60, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v340, v185, v214, v148;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "cl_susiupdknowl2");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for cl_susiupdknowl2");
#endif
    if (stack >= stacklimit)
    {
        push3(v60,v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v44,v60);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-4] = v60;
    stack[-5] = v44;
    stack[-6] = v0;
/* end of prologue */
    stack[-3] = nil;
    stack[-1] = nil;
    stack[0] = nil;
    v340 = stack[-5];
    stack[-2] = v340;
    v340 = qvalue(elt(env, 1)); /* nil */
    v148 = v340;
    v340 = stack[-5];
    v214 = v340;
    goto v73;

v73:
    v340 = v214;
    if (v340 == nil) goto v53;
    v340 = v214;
    v340 = qcar(v340);
    v185 = stack[-6];
    if (!(equal(v185, v340))) goto v71;
    v340 = lisp_true;
    v148 = v340;
    goto v71;

v71:
    v340 = v214;
    v340 = qcdr(v340);
    v214 = v340;
    goto v73;

v53:
    v340 = v148;
    if (!(v340 == nil)) { Lisp_Object res = stack[-5]; popv(9); return onevalue(res); }

v91:
    v340 = stack[-2];
    if (v340 == nil) goto v321;
    v340 = stack[-2];
    v340 = qcar(v340);
    stack[-7] = v340;
    v340 = stack[-2];
    v340 = qcdr(v340);
    stack[-2] = v340;
    v185 = stack[-7];
    v340 = stack[-6];
    fn = elt(env, 4); /* rl_susibin */
    v340 = (*qfn2(fn))(qenv(fn), v185, v340);
    nil = C_nil;
    if (exception_pending()) goto v288;
    env = stack[-8];
    stack[-3] = v340;
    v185 = stack[-3];
    v340 = elt(env, 2); /* false */
    if (v185 == v340) goto v81;
    v214 = stack[-3];
    v185 = stack[-5];
    v340 = stack[-7];
    fn = elt(env, 5); /* cl_susiinter */
    v340 = (*qfnn(fn))(qenv(fn), 3, v214, v185, v340);
    nil = C_nil;
    if (exception_pending()) goto v288;
    env = stack[-8];
    stack[-3] = v340;
    v185 = stack[0];
    v340 = stack[-3];
    v340 = qcdr(v340);
    v340 = qcar(v340);
    v340 = Lnconc(nil, v185, v340);
    nil = C_nil;
    if (exception_pending()) goto v288;
    env = stack[-8];
    stack[0] = v340;
    v340 = stack[-3];
    v340 = qcar(v340);
    stack[-5] = v340;
    v340 = stack[-3];
    v340 = qcdr(v340);
    v340 = qcdr(v340);
    v340 = qcar(v340);
    if (!(v340 == nil)) goto v316;

v316:
    v340 = stack[-3];
    v340 = qcdr(v340);
    v340 = qcdr(v340);
    v340 = qcdr(v340);
    v340 = qcar(v340);
    if (v340 == nil) goto v91;
    v340 = qvalue(elt(env, 3)); /* t */
    stack[-1] = v340;
    v340 = qvalue(elt(env, 1)); /* nil */
    stack[-2] = v340;
    goto v91;

v81:
    v340 = qvalue(elt(env, 1)); /* nil */
    stack[-2] = v340;
    goto v91;

v321:
    v185 = stack[-3];
    v340 = elt(env, 2); /* false */
    if (v185 == v340) goto v341;
    v340 = stack[-1];
    if (!(v340 == nil)) goto v342;
    v185 = stack[-6];
    v340 = stack[-5];
    v340 = cons(v185, v340);
    nil = C_nil;
    if (exception_pending()) goto v288;
    env = stack[-8];
    stack[-5] = v340;
    goto v342;

v342:
    v340 = stack[0];
    if (v340 == nil) { Lisp_Object res = stack[-5]; popv(9); return onevalue(res); }
    v340 = stack[0];
    v214 = qcar(v340);
    v185 = stack[-5];
    v340 = stack[-4];
    v340 = CC_cl_susiupdknowl2(env, 3, v214, v185, v340);
    nil = C_nil;
    if (exception_pending()) goto v288;
    env = stack[-8];
    stack[-5] = v340;
    v185 = stack[-5];
    v340 = elt(env, 2); /* false */
    if (v185 == v340) goto v190;
    v340 = stack[0];
    v340 = qcdr(v340);
    stack[0] = v340;
    goto v342;

v190:
    v340 = qvalue(elt(env, 1)); /* nil */
    stack[0] = v340;
    goto v342;

v341:
    v340 = elt(env, 2); /* false */
    { popv(9); return onevalue(v340); }
/* error exit handlers */
v288:
    popv(9);
    return nil;
}



/* Code for ofsf_sacrel */

static Lisp_Object MS_CDECL CC_ofsf_sacrel(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v44,
                         Lisp_Object v60, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v51, v21, v22, v80;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "ofsf_sacrel");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ofsf_sacrel");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v51 = v60;
    v22 = v44;
    v80 = v0;
/* end of prologue */
    v21 = v51;
    v51 = elt(env, 1); /* or */
    if (v21 == v51) goto v52;
    v51 = v80;
    v21 = v22;
    {
        fn = elt(env, 2); /* ofsf_sacrel!-and */
        return (*qfn2(fn))(qenv(fn), v51, v21);
    }

v52:
    v51 = v80;
    v21 = v22;
    {
        fn = elt(env, 3); /* ofsf_sacrel!-or */
        return (*qfn2(fn))(qenv(fn), v51, v21);
    }
}



/* Code for setfuncsnaryrd */

static Lisp_Object MS_CDECL CC_setfuncsnaryrd(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v28, v78;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "setfuncsnaryrd");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for setfuncsnaryrd");
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
    fn = elt(env, 4); /* mathml */
    v28 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v156;
    env = stack[-1];
    stack[0] = v28;
    v28 = stack[0];
    v28 = Lconsp(nil, v28);
    env = stack[-1];
    if (v28 == nil) goto v82;
    v28 = stack[0];
    v28 = qcdr(v28);
    v28 = qcar(v28);
    if (v28 == nil) goto v82;
    v28 = stack[0];
    v28 = qcdr(v28);
    v28 = qcar(v28);
    v28 = qcar(v28);
    v28 = qcdr(v28);
    v28 = qcar(v28);
    v78 = Lintern(nil, v28);
    nil = C_nil;
    if (exception_pending()) goto v156;
    env = stack[-1];
    v28 = elt(env, 1); /* multiset */
    if (!(v78 == v28)) goto v82;
    v28 = elt(env, 1); /* multiset */
    qvalue(elt(env, 2)) = v28; /* mmlatts */
    goto v82;

v82:
    v28 = stack[0];
    if (v28 == nil) goto v153;
    v28 = CC_setfuncsnaryrd(env, 0);
    nil = C_nil;
    if (exception_pending()) goto v156;
    {
        Lisp_Object v112 = stack[0];
        popv(2);
        return cons(v112, v28);
    }

v153:
    v28 = nil;
    { popv(2); return onevalue(v28); }
/* error exit handlers */
v156:
    popv(2);
    return nil;
}



/* Code for indexsymmetrize */

static Lisp_Object CC_indexsymmetrize(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v43, v59, v89;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for indexsymmetrize");
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
    v43 = stack[-2];
    v59 = qcar(v43);
    v43 = elt(env, 1); /* indxsymmetrize */
    v43 = get(v59, v43);
    env = stack[-4];
    stack[-3] = v43;
    v43 = (Lisp_Object)17; /* 1 */
    stack[0] = v43;
    v59 = (Lisp_Object)17; /* 1 */
    v43 = stack[-2];
    v43 = qcdr(v43);
    v43 = cons(v59, v43);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-4];
    stack[-1] = v43;
    goto v103;

v103:
    v43 = stack[-3];
    if (v43 == nil) goto v21;
    v43 = stack[-3];
    v59 = qcar(v43);
    v43 = stack[-1];
    v43 = qcdr(v43);
    v43 = Lapply1(nil, v59, v43);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-4];
    stack[-1] = v43;
    v43 = stack[-1];
    if (v43 == nil) goto v17;
    v43 = stack[-1];
    v59 = qcar(v43);
    v43 = stack[0];
    v43 = times2(v59, v43);
    nil = C_nil;
    if (exception_pending()) goto v150;
    env = stack[-4];
    stack[0] = v43;
    v43 = stack[-3];
    v43 = qcdr(v43);
    stack[-3] = v43;
    goto v103;

v17:
    v43 = qvalue(elt(env, 2)); /* nil */
    { popv(5); return onevalue(v43); }

v21:
    v89 = stack[0];
    v43 = stack[-2];
    v59 = qcar(v43);
    v43 = stack[-1];
    v43 = qcdr(v43);
    popv(5);
    return list2star(v89, v59, v43);
/* error exit handlers */
v150:
    popv(5);
    return nil;
}



/* Code for applsmacro */

static Lisp_Object MS_CDECL CC_applsmacro(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v44,
                         Lisp_Object v60, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v358, v294;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "applsmacro");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for applsmacro");
#endif
    if (stack >= stacklimit)
    {
        push3(v60,v44,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v44,v60);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v60;
    stack[-6] = v44;
    v294 = v0;
/* end of prologue */
    stack[-5] = nil;
    v358 = v294;
    v358 = qcdr(v358);
    v358 = qcar(v358);
    stack[-2] = v358;
    v358 = v294;
    v358 = qcdr(v358);
    v358 = qcdr(v358);
    v358 = qcar(v358);
    stack[-7] = v358;
    v358 = stack[-2];
    stack[0] = Llength(nil, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = stack[-6];
    v358 = Llength(nil, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    if (equal(stack[0], v358)) goto v73;
    v294 = elt(env, 1); /* "Argument mismatch for SMACRO" */
    v358 = stack[-1];
    v358 = list2(v294, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v294 = v358;
    v358 = v294;
    qvalue(elt(env, 2)) = v358; /* errmsg!* */
    v358 = qvalue(elt(env, 3)); /* !*protfg */
    if (!(v358 == nil)) goto v102;
    v358 = v294;
    fn = elt(env, 7); /* lprie */
    v358 = (*qfn1(fn))(qenv(fn), v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    goto v102;

v102:
    v358 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    goto v73;

v73:
    v358 = stack[-6];
    fn = elt(env, 8); /* no!-side!-effect!-listp */
    v358 = (*qfn1(fn))(qenv(fn), v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    if (!(v358 == nil)) goto v43;
    v294 = stack[-2];
    v358 = stack[-7];
    fn = elt(env, 9); /* one!-entry!-listp */
    v358 = (*qfn2(fn))(qenv(fn), v294, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    if (!(v358 == nil)) goto v43;
    v358 = stack[-2];
    v294 = Llength(nil, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = (Lisp_Object)17; /* 1 */
    v358 = (Lisp_Object)greaterp2(v294, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    v358 = v358 ? lisp_true : nil;
    env = stack[-8];
    if (v358 == nil) goto v91;
    v358 = stack[-2];
    stack[-4] = v358;
    v358 = stack[-4];
    if (v358 == nil) goto v14;
    v358 = stack[-4];
    v358 = qcar(v358);
    stack[0] = v358;
    v358 = elt(env, 5); /* g */
    v358 = Lgensym1(nil, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = cons(stack[0], v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = ncons(v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    stack[-2] = v358;
    stack[-3] = v358;
    goto v336;

v336:
    v358 = stack[-4];
    v358 = qcdr(v358);
    stack[-4] = v358;
    v358 = stack[-4];
    if (v358 == nil) goto v95;
    stack[-1] = stack[-2];
    v358 = stack[-4];
    v358 = qcar(v358);
    stack[0] = v358;
    v358 = elt(env, 5); /* g */
    v358 = Lgensym1(nil, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = cons(stack[0], v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = ncons(v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = Lrplacd(nil, stack[-1], v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = stack[-2];
    v358 = qcdr(v358);
    stack[-2] = v358;
    goto v336;

v95:
    v358 = stack[-3];
    goto v335;

v335:
    stack[0] = v358;
    v294 = stack[0];
    v358 = stack[-7];
    fn = elt(env, 10); /* subla!-q */
    v358 = (*qfn2(fn))(qenv(fn), v294, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    stack[-7] = v358;
    v358 = stack[0];
    stack[-3] = v358;
    v358 = stack[-3];
    if (v358 == nil) goto v192;
    v358 = stack[-3];
    v358 = qcar(v358);
    v358 = qcdr(v358);
    v358 = ncons(v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    stack[-1] = v358;
    stack[-2] = v358;
    goto v139;

v139:
    v358 = stack[-3];
    v358 = qcdr(v358);
    stack[-3] = v358;
    v358 = stack[-3];
    if (v358 == nil) goto v205;
    stack[0] = stack[-1];
    v358 = stack[-3];
    v358 = qcar(v358);
    v358 = qcdr(v358);
    v358 = ncons(v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = Lrplacd(nil, stack[0], v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = stack[-1];
    v358 = qcdr(v358);
    stack[-1] = v358;
    goto v139;

v205:
    v358 = stack[-2];
    goto v333;

v333:
    stack[-2] = v358;
    goto v91;

v91:
    v358 = stack[-6];
    stack[-1] = v358;
    goto v289;

v289:
    v358 = stack[-1];
    if (v358 == nil) goto v39;
    v358 = stack[-1];
    v358 = qcar(v358);
    stack[0] = v358;
    v358 = stack[0];
    fn = elt(env, 11); /* no!-side!-effectp */
    v358 = (*qfn1(fn))(qenv(fn), v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    if (!(v358 == nil)) goto v23;
    v358 = stack[-2];
    v294 = qcar(v358);
    v358 = stack[-7];
    fn = elt(env, 12); /* one!-entryp */
    v358 = (*qfn2(fn))(qenv(fn), v294, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    if (!(v358 == nil)) goto v23;
    stack[-3] = stack[-5];
    v358 = stack[-2];
    v294 = qcar(v358);
    v358 = stack[0];
    v358 = cons(v294, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = ncons(v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = Lnconc(nil, stack[-3], v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    stack[-5] = v358;
    goto v144;

v144:
    v358 = stack[-2];
    v358 = qcdr(v358);
    stack[-2] = v358;
    v358 = stack[-1];
    v358 = qcdr(v358);
    stack[-1] = v358;
    goto v289;

v23:
    v358 = stack[-2];
    v294 = qcar(v358);
    v358 = stack[0];
    v358 = cons(v294, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v294 = ncons(v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = stack[-7];
    fn = elt(env, 10); /* subla!-q */
    v358 = (*qfn2(fn))(qenv(fn), v294, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    stack[-7] = v358;
    goto v144;

v39:
    v358 = stack[-5];
    if (v358 == nil) { Lisp_Object res = stack[-7]; popv(9); return onevalue(res); }
    stack[-4] = elt(env, 6); /* lambda */
    v358 = stack[-5];
    stack[-3] = v358;
    v358 = stack[-3];
    if (v358 == nil) goto v360;
    v358 = stack[-3];
    v358 = qcar(v358);
    v358 = qcar(v358);
    v358 = ncons(v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    stack[-1] = v358;
    stack[-2] = v358;
    goto v311;

v311:
    v358 = stack[-3];
    v358 = qcdr(v358);
    stack[-3] = v358;
    v358 = stack[-3];
    if (v358 == nil) goto v361;
    stack[0] = stack[-1];
    v358 = stack[-3];
    v358 = qcar(v358);
    v358 = qcar(v358);
    v358 = ncons(v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = Lrplacd(nil, stack[0], v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = stack[-1];
    v358 = qcdr(v358);
    stack[-1] = v358;
    goto v311;

v361:
    v358 = stack[-2];
    v294 = v358;
    goto v309;

v309:
    v358 = stack[-7];
    stack[-3] = list3(stack[-4], v294, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = stack[-5];
    stack[-4] = v358;
    v358 = stack[-4];
    if (v358 == nil) goto v362;
    v358 = stack[-4];
    v358 = qcar(v358);
    v358 = qcdr(v358);
    v358 = ncons(v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    stack[-1] = v358;
    stack[-2] = v358;
    goto v363;

v363:
    v358 = stack[-4];
    v358 = qcdr(v358);
    stack[-4] = v358;
    v358 = stack[-4];
    if (v358 == nil) goto v364;
    stack[0] = stack[-1];
    v358 = stack[-4];
    v358 = qcar(v358);
    v358 = qcdr(v358);
    v358 = ncons(v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = Lrplacd(nil, stack[0], v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = stack[-1];
    v358 = qcdr(v358);
    stack[-1] = v358;
    goto v363;

v364:
    v358 = stack[-2];
    goto v365;

v365:
    {
        Lisp_Object v366 = stack[-3];
        popv(9);
        return cons(v366, v358);
    }

v362:
    v358 = qvalue(elt(env, 4)); /* nil */
    goto v365;

v360:
    v358 = qvalue(elt(env, 4)); /* nil */
    v294 = v358;
    goto v309;

v192:
    v358 = qvalue(elt(env, 4)); /* nil */
    goto v333;

v14:
    v358 = qvalue(elt(env, 4)); /* nil */
    goto v335;

v43:
    v294 = stack[-2];
    v358 = stack[-6];
    fn = elt(env, 13); /* pair */
    v294 = (*qfn2(fn))(qenv(fn), v294, v358);
    nil = C_nil;
    if (exception_pending()) goto v359;
    env = stack[-8];
    v358 = stack[-7];
    {
        popv(9);
        fn = elt(env, 10); /* subla!-q */
        return (*qfn2(fn))(qenv(fn), v294, v358);
    }
/* error exit handlers */
v359:
    popv(9);
    return nil;
}



setup_type const u30_setup[] =
{
    {"gpexpp",                  CC_gpexpp,      too_many_1,    wrong_no_1},
    {"reduce-ratios",           too_few_2,      CC_reduceKratios,wrong_no_2},
    {"makeqn-maybe",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_makeqnKmaybe},
    {"createmonomunit",         wrong_no_na,    wrong_no_nb,   (n_args *)CC_createmonomunit},
    {"ofsf_smordtable",         too_few_2,      CC_ofsf_smordtable,wrong_no_2},
    {"ofsf_negateat",           CC_ofsf_negateat,too_many_1,   wrong_no_1},
    {"bvarom",                  CC_bvarom,      too_many_1,    wrong_no_1},
    {"expand-imrepart",         CC_expandKimrepart,too_many_1, wrong_no_1},
    {"specrd:times",            too_few_2,      CC_specrdTtimes,wrong_no_2},
    {"dipprodin",               too_few_2,      CC_dipprodin,  wrong_no_2},
    {"exdff0",                  CC_exdff0,      too_many_1,    wrong_no_1},
    {"evalmember",              too_few_2,      CC_evalmember, wrong_no_2},
    {"red_tailreddriver",       wrong_no_na,    wrong_no_nb,   (n_args *)CC_red_tailreddriver},
    {"noncomfree",              CC_noncomfree,  too_many_1,    wrong_no_1},
    {"pasf_simplat1",           too_few_2,      CC_pasf_simplat1,wrong_no_2},
    {"ratpoly_neg",             CC_ratpoly_neg, too_many_1,    wrong_no_1},
    {"vdp_setsugar",            too_few_2,      CC_vdp_setsugar,wrong_no_2},
    {"ciml",                    wrong_no_na,    wrong_no_nb,   (n_args *)CC_ciml},
    {"d2int",                   CC_d2int,       too_many_1,    wrong_no_1},
    {"groedeletip",             too_few_2,      CC_groedeletip,wrong_no_2},
    {"maprintla",               too_few_2,      CC_maprintla,  wrong_no_2},
    {"spp",                     CC_spp,         too_many_1,    wrong_no_1},
    {"replace2_parents",        wrong_no_na,    wrong_no_nb,   (n_args *)CC_replace2_parents},
    {"splitup",                 too_few_2,      CC_splitup,    wrong_no_2},
    {"mk_dummy_ids",            CC_mk_dummy_ids,too_many_1,    wrong_no_1},
    {"precision",               CC_precision,   too_many_1,    wrong_no_1},
    {"simpexpt1",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_simpexpt1},
    {"makecoeffpairs",          wrong_no_na,    wrong_no_nb,   (n_args *)CC_makecoeffpairs},
    {"mk+equation",             too_few_2,      CC_mkLequation,wrong_no_2},
    {"scar",                    too_few_2,      CC_scar,       wrong_no_2},
    {"o-nextarg",               CC_oKnextarg,   too_many_1,    wrong_no_1},
    {"arglength",               CC_arglength,   too_many_1,    wrong_no_1},
    {"sqprint",                 CC_sqprint,     too_many_1,    wrong_no_1},
    {"even_action_term",        wrong_no_na,    wrong_no_nb,   (n_args *)CC_even_action_term},
    {"cl_sitheo",               CC_cl_sitheo,   too_many_1,    wrong_no_1},
    {"maxfrom",                 too_few_2,      CC_maxfrom,    wrong_no_2},
    {"expf",                    too_few_2,      CC_expf,       wrong_no_2},
    {"mk+real+inner+product",   too_few_2,      CC_mkLrealLinnerLproduct,wrong_no_2},
    {"cl_susiupdknowl2",        wrong_no_na,    wrong_no_nb,   (n_args *)CC_cl_susiupdknowl2},
    {"ofsf_sacrel",             wrong_no_na,    wrong_no_nb,   (n_args *)CC_ofsf_sacrel},
    {"setfuncsnaryrd",          wrong_no_na,    wrong_no_nb,   (n_args *)CC_setfuncsnaryrd},
    {"indexsymmetrize",         CC_indexsymmetrize,too_many_1, wrong_no_1},
    {"applsmacro",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_applsmacro},
    {NULL, (one_args *)"u30", (two_args *)"19806 2588920 4231204", 0}
};

/* end of generated code */
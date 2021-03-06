
/* $destdir/u03.c        Machine generated C code */

/* $Id: $ */

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
#ifdef __cplusplus
#define __STDC_CONSTANT_MACROS 1
#endif
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
#define TYPE_FOREIGN        TYPE_SPARE 
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
#define font_of_char(n)  (((int32_t)(n) >> 29) & 0x03)
#define bits_of_char(n)  (0)
#define code_of_char(n)  (((int32_t)(n) >>  8) & 0x001fffff)
#define pack_char(font, code)                                      \
    ((Lisp_Object)((((uint32_t)(font)) << 29) |                    \
                   (((uint32_t)(code)) << 8) | TAG_CHAR))
    
#define CHAR_EOF pack_char(0, 0x0010ffff)
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
#if 0 && defined DEBUG
#define SHOW_FNAME  (exit_reason == UNWIND_THROW || \
                     (exit_reason & UNWIND_FNAME) != 0)
#define SHOW_ARGS   (exit_reason == UNWIND_THROW || \
                     (exit_reason & UNWIND_ARGS) != 0)
#else
#define SHOW_FNAME  ((exit_reason & UNWIND_FNAME) != 0)
#define SHOW_ARGS   ((exit_reason & UNWIND_ARGS) != 0)
#endif
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
extern char *C_stack_base, *C_stack_limit;
extern double max_store_size;
extern CSLbool restartp;
extern char *big_chunk_start, *big_chunk_end;
#ifdef CONSERVATIVE
extern Lisp_Object *C_stackbase, *C_stacktop;
#endif
extern Lisp_Object multiplication_buffer;
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
   if (check_stack("@" __FILE__,__LINE__)) \
   {   show_stack(); return aerror("stack overflow"); }
#else
#define if_check_stack \
   {   char *p = (char *)&p; \
       if (p < C_stack_limit) return aerror("stack overflow"); \
   }
#endif
extern int32_t software_ticks, countdown;
#ifdef DEBUG
extern char debug_trail[32][32];
extern char debug_trail_file[32][32];
extern int debug_trail_line[32];
extern int debug_trailp;
extern void debug_record_raw(const char *data, const char *file, int line);
extern void debug_record_int_raw(const char *s, int n, const char *file, int line);
extern void debug_show_trail_raw(const char *msg, const char *file, int line);
#define debug_record(data) debug_record_raw(data, __FILE__, __LINE__)
#define debug_record_int(s, n) debug_record_int_raw(s, n, __FILE__, __LINE__)
#define debug_record_string(s) debug_record(&celt(s, 0))
#define debug_record_symbol(x) debug_record_string(qpname(x))
#define debug_show_trail(data) debug_show_trail_raw(data, __FILE__, __LINE__)
#define debug_assert(x) \
  if (!(x)) { debug_show_trail("Assertion failed"); exit(7); }
#else
#define debug_record(data)
#define debug_record_int(s, n)
#define debug_record_string(s)
#define debug_record_symbol(x)
#define debug_show_trail(x)
#define debug_assert(x)
#endif
extern volatile int blipflag;
extern int64_t blipcount, startblip;
#if defined __linux__ && defined DEBUG
#define HANDLE_BLIP                                                       \
    if (blipflag)                                                         \
    {   blipflag = 0;                                                     \
        if (startblip >= 0 && ++blipcount > startblip)                    \
        {   fprintf(stderr, "Line %d of file %s\n", __LINE__, __FILE__);  \
            fflush(stderr);                                               \
        }                                                                 \
    }
#else
#define HANDLE_BLIP
#endif
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
extern intptr_t modulus_is_large;
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
extern Lisp_Object trap_time, count_high;
#ifdef COMMON
extern Lisp_Object keyword_package;
extern Lisp_Object all_packages, package_symbol, internal_symbol;
extern Lisp_Object external_symbol, inherited_symbol;
extern Lisp_Object key_key, allow_other_keys, aux_key;
extern Lisp_Object format_symbol;
extern Lisp_Object expand_def_symbol, allow_key_key;
#endif
extern Lisp_Object declare_symbol, special_symbol, large_modulus;
extern Lisp_Object used_space, avail_space, eof_symbol, call_stack;
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
#define modulus_is_large      BASE[32]
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
#define trap_time             BASE[158]
#define count_high            BASE[159]
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
#define large_modulus         BASE[184]
#define used_space            BASE[185]
#define avail_space           BASE[186]
#define eof_symbol            BASE[187]
#define call_stack            BASE[188]
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
#ifndef NO_BYTECOUNT
extern const char *name_of_caller;
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
#ifdef BUILTIN_IMAGE
const unsigned char *binary_read_filep;
#else
extern FILE *binary_read_file;
#endif
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
extern int force_reclaim_method, reclaim_trap_count, reclaim_stack_limit;
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
extern void *extract_pointer(Lisp_Object a);
extern Lisp_Object Lencapsulatedp(Lisp_Object nil, Lisp_Object a);
typedef void initfn(Lisp_Object *, Lisp_Object **, Lisp_Object * volatile *);
extern int load_dynamic(char *objname, char *modname,
                        Lisp_Object name, Lisp_Object fns);
extern Lisp_Object Linstate_c_code(Lisp_Object nil,
                                   Lisp_Object name, Lisp_Object fns);
extern Lisp_Object characterify(Lisp_Object a);
extern Lisp_Object char_to_id(int ch);
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
extern const char *CSLtmpdir();
extern const char *CSLtmpnam(char *suffix, int32_t suffixlen);
extern int Cmkdir(char *s);
extern char *look_in_lisp_variable(char *o, int prefix);
extern void CSL_MD5_Init(void);
extern void CSL_MD5_Update(const unsigned char *data, int len);
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
extern Lisp_Object noisy_Ceval(Lisp_Object u, Lisp_Object env);
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
                         Lisp_Object env, Lisp_Object fname, int noisy);
extern Lisp_Object apply_lambda(Lisp_Object def, int nargs,
                         Lisp_Object env, Lisp_Object name, int noisy);
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
                              size_t n, const char *dirn, FILE *old_file);
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
#define noisy_eval(a, b) noisy_Ceval(a, b)
#define noisy_voideval(a, b) noisy_Ceval(a, b)
#else
#define eval(a, b) \
    (is_cons(a) ? Ceval(a, b) : \
     is_symbol(a) ? (qvalue(a) == unset_var ? error(1, err_unset_var, a) : \
                     onevalue(qvalue(a))) : \
     onevalue(a))
#define voideval(a, b) \
    if (is_cons(a)) Ceval(a, b) 
#define noisy_eval(a, b) \
    (is_cons(a) ? noisy_Ceval(a, b) : \
     is_symbol(a) ? (qvalue(a) == unset_var ? error(1, err_unset_var, a) : \
                     onevalue(qvalue(a))) : \
     onevalue(a))
#define noisy_voideval(a, b) \
    if (is_cons(a)) noisy_Ceval(a, b) 
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
                            Lisp_Object env, int compilerp, int noisy);
extern Lisp_Object mv_call_fn(Lisp_Object args, Lisp_Object env);
extern Lisp_Object noisy_mv_call_fn(Lisp_Object args, Lisp_Object env);
extern Lisp_Object progn_fn(Lisp_Object args, Lisp_Object env);
extern Lisp_Object noisy_progn_fn(Lisp_Object args, Lisp_Object env);
extern Lisp_Object quote_fn(Lisp_Object args, Lisp_Object env);
extern Lisp_Object tagbody_fn(Lisp_Object args, Lisp_Object env);
extern Lisp_Object noisy_tagbody_fn(Lisp_Object args, Lisp_Object env);
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
#define _pi       ((12868.0 - 0.036490896206895257)/4096.0)
#define _half_pi  ((12868.0 - 0.036490896206895257)/8192.0)
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
extern Lisp_Object make_three_word_bignum(int32_t a, uint32_t b, uint32_t c);
extern Lisp_Object make_n_word_bignum(int32_t a1, uint32_t a2,
                                      uint32_t a3, int32_t n);
extern Lisp_Object make_lisp_integer32(int32_t n);
extern Lisp_Object make_lisp_integer64(int64_t n);
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
#if defined HAVE_LIBPTHREAD || defined WIN32
#include <semaphore.h>
#ifdef WIN32
#include <windows.h>
extern HANDLE kara_thread1, kara_thread2;
#define KARARESULT DWORD
#define KARAARG    LPVOID
extern KARARESULT WINAPI kara_worker1(KARAARG p);
extern KARARESULT WINAPI kara_worker2(KARAARG p);
#else
#include <pthread.h>
extern pthread_t kara_thread1, kara_thread2;
#define KARARESULT void *
#define KARAARG    void *
#define WINAPI
extern KARARESULT kara_worker1(KARAARG p);
extern KARARESULT kara_worker2(KARAARG p);
#endif
#ifdef MACINTOSH
extern sem_t *kara_sem1a, *kara_sem1b, *kara_sem1c,
             *kara_sem2a, *kara_sem2b, *kara_sem2c;
#else
extern sem_t kara_sem1a, kara_sem1b, kara_sem1c,
             kara_sem2a, kara_sem2b, kara_sem2c;
#endif
extern int karatsuba_parallel;
#ifndef KARATSUBA_PARALLEL_CUTOFF
#  define KARATSUBA_PARALLEL_CUTOFF 120
#endif
#endif 
#ifndef KARATSUBA_CUTOFF
#define KARATSUBA_CUTOFF 12
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
extern Lisp_Object bytecounts1(Lisp_Object env, Lisp_Object a);
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
extern Lisp_Object tracesetfunarged1(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object hardopt1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object hardoptrest1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object interpreted1(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object tracebytecoded1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object tracesetbytecoded1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object jitcompileme1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object tracebyteopt1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object tracesetbyteopt1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object tracebyteoptrest1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object tracesetbyteoptrest1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object tracebytecoded1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object tracesetbytecoded1(Lisp_Object env, Lisp_Object a);
extern Lisp_Object traceinterpreted1(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object tracesetinterpreted1(Lisp_Object env, Lisp_Object a1);
extern Lisp_Object tracehardopt1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object tracesethardopt1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object tracehardoptrest1(Lisp_Object def, Lisp_Object a);
extern Lisp_Object tracesethardoptrest1(Lisp_Object def, Lisp_Object a);
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
extern Lisp_Object Lthrow_nil(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Ltrace(Lisp_Object env, Lisp_Object a);
extern Lisp_Object Ltraceset(Lisp_Object env, Lisp_Object a);
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
extern Lisp_Object tracesetfunarged2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object hardopt2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object hardoptrest2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object interpreted2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object tracebyteopt2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object tracesetbyteopt2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object tracebyteoptrest2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object tracesetbyteoptrest2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object tracebytecoded2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object tracesetbytecoded2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object jitcompileme2(Lisp_Object env, Lisp_Object a, Lisp_Object b);
extern Lisp_Object traceinterpreted2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object tracesetinterpreted2(Lisp_Object env, Lisp_Object a1, Lisp_Object a2);
extern Lisp_Object tracehardopt2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object tracesethardopt2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object tracehardoptrest2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
extern Lisp_Object tracesethardoptrest2(Lisp_Object def, Lisp_Object a, Lisp_Object b);
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
extern Lisp_Object Lthrow_one_value(Lisp_Object env, Lisp_Object a, Lisp_Object b);
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
extern Lisp_Object MS_CDECL tracesetfunargedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL hardoptn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL hardoptrestn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL interpretedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracebyteoptn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL tracesetbyteoptn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL tracebyteoptrestn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL tracesetbyteoptrestn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL tracebytecoded0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracesetbytecoded0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracebytecoded3(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracesetbytecoded3(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracebytecodedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracesetbytecodedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL jitcompileme0(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL jitcompileme3(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL jitcompilemen(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL traceinterpretedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracesetinterpretedn(Lisp_Object env, int nargs, ...);
extern Lisp_Object MS_CDECL tracehardoptn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL tracesethardoptn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL tracehardoptrestn(Lisp_Object def, int nargs, ...);
extern Lisp_Object MS_CDECL tracesethardoptrestn(Lisp_Object def, int nargs, ...);
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


/* Code for subs2f */

static Lisp_Object CC_subs2f(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0012, v0013, v0014;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for subs2f");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0000;
/* end of prologue */
    v0013 = qvalue(elt(env, 1)); /* simpcount!* */
    v0012 = qvalue(elt(env, 2)); /* simplimit!* */
    v0012 = (Lisp_Object)greaterp2(v0013, v0012);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    v0012 = v0012 ? lisp_true : nil;
    env = stack[-2];
    if (v0012 == nil) goto v0016;
    v0012 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 1)) = v0012; /* simpcount!* */
    v0014 = elt(env, 3); /* poly */
    v0013 = (Lisp_Object)337; /* 21 */
    v0012 = elt(env, 4); /* "Simplification recursion too deep" */
    fn = elt(env, 9); /* rerror */
    v0012 = (*qfnn(fn))(qenv(fn), 3, v0014, v0013, v0012);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    env = stack[-2];
    goto v0016;

v0016:
    v0012 = qvalue(elt(env, 1)); /* simpcount!* */
    v0012 = add1(v0012);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    env = stack[-2];
    qvalue(elt(env, 1)) = v0012; /* simpcount!* */
    v0012 = qvalue(elt(env, 5)); /* nil */
    qvalue(elt(env, 6)) = v0012; /* !*sub2 */
    v0012 = stack[0];
    fn = elt(env, 10); /* subs2f1 */
    v0012 = (*qfn1(fn))(qenv(fn), v0012);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    env = stack[-2];
    stack[-1] = v0012;
    v0012 = qvalue(elt(env, 6)); /* !*sub2 */
    if (!(v0012 == nil)) goto v0017;
    v0012 = qvalue(elt(env, 7)); /* powlis1!* */
    if (!(v0012 == nil)) goto v0017;

v0018:
    v0012 = qvalue(elt(env, 1)); /* simpcount!* */
    v0012 = sub1(v0012);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    env = stack[-2];
    qvalue(elt(env, 1)) = v0012; /* simpcount!* */
    { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }

v0017:
    v0012 = qvalue(elt(env, 8)); /* !*resubs */
    if (v0012 == nil) goto v0018;
    v0012 = stack[-1];
    v0013 = qcar(v0012);
    v0012 = stack[0];
    if (equal(v0013, v0012)) goto v0019;
    v0012 = qvalue(elt(env, 5)); /* nil */
    goto v0020;

v0020:
    if (v0012 == nil) goto v0021;
    v0012 = qvalue(elt(env, 5)); /* nil */
    qvalue(elt(env, 6)) = v0012; /* !*sub2 */
    goto v0018;

v0021:
    v0012 = stack[-1];
    fn = elt(env, 11); /* subs2q */
    v0012 = (*qfn1(fn))(qenv(fn), v0012);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    env = stack[-2];
    stack[-1] = v0012;
    goto v0018;

v0019:
    v0012 = stack[-1];
    v0013 = qcdr(v0012);
    v0012 = (Lisp_Object)17; /* 1 */
    v0012 = (v0013 == v0012 ? lisp_true : nil);
    goto v0020;
/* error exit handlers */
v0015:
    popv(3);
    return nil;
}



/* Code for qqe_qopheadp */

static Lisp_Object CC_qqe_qopheadp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0024, v0025;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for qqe_qopheadp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0024 = v0000;
/* end of prologue */
    v0025 = elt(env, 1); /* (lhead rhead) */
    v0024 = Lmemq(nil, v0024, v0025);
    return onevalue(v0024);
}



/* Code for absf */

static Lisp_Object CC_absf(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0026;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for absf");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0000;
/* end of prologue */
    v0026 = stack[0];
    fn = elt(env, 1); /* minusf */
    v0026 = (*qfn1(fn))(qenv(fn), v0026);
    nil = C_nil;
    if (exception_pending()) goto v0010;
    env = stack[-1];
    if (v0026 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v0026 = stack[0];
    {
        popv(2);
        fn = elt(env, 2); /* negf */
        return (*qfn1(fn))(qenv(fn), v0026);
    }
/* error exit handlers */
v0010:
    popv(2);
    return nil;
}



/* Code for get_content */

static Lisp_Object MS_CDECL CC_get_content(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0038, v0015;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "get_content");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for get_content");
#endif
#ifdef CHECK_STACK
    if_check_stack;
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
    v0038 = qvalue(elt(env, 1)); /* nil */
    stack[0] = v0038;
    goto v0011;

v0011:
    v0015 = Lreadch(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0039;
    env = stack[-1];
    qvalue(elt(env, 2)) = v0015; /* ch */
    v0038 = elt(env, 3); /* !< */
    if (v0015 == v0038) goto v0040;
    v0015 = qvalue(elt(env, 2)); /* ch */
    v0038 = qvalue(elt(env, 4)); /* !$eof!$ */
    v0038 = Lneq(nil, v0015, v0038);
    nil = C_nil;
    if (exception_pending()) goto v0039;
    env = stack[-1];
    goto v0026;

v0026:
    if (v0038 == nil) goto v0016;
    v0015 = qvalue(elt(env, 2)); /* ch */
    v0038 = qvalue(elt(env, 5)); /* space */
    if (equal(v0015, v0038)) goto v0005;
    v0038 = qvalue(elt(env, 2)); /* ch */
    fn = elt(env, 7); /* string2list */
    v0038 = (*qfn1(fn))(qenv(fn), v0038);
    nil = C_nil;
    if (exception_pending()) goto v0039;
    env = stack[-1];
    v0015 = qcar(v0038);
    v0038 = (Lisp_Object)161; /* 10 */
    v0038 = (Lisp_Object)greaterp2(v0015, v0038);
    nil = C_nil;
    if (exception_pending()) goto v0039;
    v0038 = v0038 ? lisp_true : nil;
    env = stack[-1];
    goto v0041;

v0041:
    if (v0038 == nil) goto v0011;
    v0015 = qvalue(elt(env, 2)); /* ch */
    v0038 = stack[0];
    v0038 = cons(v0015, v0038);
    nil = C_nil;
    if (exception_pending()) goto v0039;
    env = stack[-1];
    stack[0] = v0038;
    goto v0011;

v0005:
    v0038 = qvalue(elt(env, 1)); /* nil */
    goto v0041;

v0016:
    v0038 = stack[0];
    if (v0038 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v0015 = elt(env, 6); /* !$ */
    v0038 = stack[0];
    v0038 = cons(v0015, v0038);
    nil = C_nil;
    if (exception_pending()) goto v0039;
    stack[0] = v0038;
    { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }

v0040:
    v0038 = qvalue(elt(env, 1)); /* nil */
    goto v0026;
/* error exit handlers */
v0039:
    popv(2);
    return nil;
}



/* Code for !:zerop */

static Lisp_Object CC_Tzerop(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0030, v0041, v0044;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for :zerop");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0044 = v0000;
/* end of prologue */
    v0030 = v0044;
    if (v0030 == nil) goto v0022;
    v0041 = v0044;
    v0030 = (Lisp_Object)1; /* 0 */
    v0030 = (v0041 == v0030 ? lisp_true : nil);
    goto v0023;

v0023:
    if (v0030 == nil) goto v0045;
    v0030 = qvalue(elt(env, 1)); /* t */
    return onevalue(v0030);

v0045:
    v0030 = v0044;
    if (!consp(v0030)) goto v0046;
    v0030 = v0044;
    v0030 = qcar(v0030);
    if (!symbolp(v0030)) v0030 = nil;
    else { v0030 = qfastgets(v0030);
           if (v0030 != nil) { v0030 = elt(v0030, 15); /* zerop */
#ifdef RECORD_GET
             if (v0030 != SPID_NOPROP)
                record_get(elt(fastget_names, 15), 1);
             else record_get(elt(fastget_names, 15), 0),
                v0030 = nil; }
           else record_get(elt(fastget_names, 15), 0); }
#else
             if (v0030 == SPID_NOPROP) v0030 = nil; }}
#endif
    v0041 = v0044;
        return Lapply1(nil, v0030, v0041);

v0046:
    v0030 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0030);

v0022:
    v0030 = qvalue(elt(env, 1)); /* t */
    goto v0023;
}



/* Code for evcompless!? */

static Lisp_Object CC_evcomplessW(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0048, v0042;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for evcompless?");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0042 = v0027;
    v0048 = v0000;
/* end of prologue */
    stack[0] = (Lisp_Object)17; /* 1 */
    fn = elt(env, 1); /* evcomp */
    v0048 = (*qfn2(fn))(qenv(fn), v0042, v0048);
    nil = C_nil;
    if (exception_pending()) goto v0037;
    v0048 = (stack[0] == v0048 ? lisp_true : nil);
    { popv(1); return onevalue(v0048); }
/* error exit handlers */
v0037:
    popv(1);
    return nil;
}



/* Code for rd!:zerop */

static Lisp_Object CC_rdTzerop(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0046, v0049;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rd:zerop");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0046 = v0000;
/* end of prologue */
    v0049 = v0046;
    v0049 = qcdr(v0049);
    if (!consp(v0049)) goto v0050;
    v0046 = qcdr(v0046);
    v0049 = qcar(v0046);
    v0046 = (Lisp_Object)1; /* 0 */
    v0046 = (v0049 == v0046 ? lisp_true : nil);
    return onevalue(v0046);

v0050:
    v0046 = qcdr(v0046);
        return Lzerop(nil, v0046);
}



/* Code for monordp */

static Lisp_Object CC_monordp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0037, v0036, v0046, v0049;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for monordp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0046 = v0027;
    v0049 = v0000;
/* end of prologue */
    v0036 = elt(env, 1); /* wedge */
    v0037 = elt(env, 2); /* xorder */
    v0037 = get(v0036, v0037);
    v0036 = v0049;
        return Lapply2(nil, 3, v0037, v0036, v0046);
}



/* Code for union_edges */

static Lisp_Object CC_union_edges(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0007, v0008, v0034;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for union_edges");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0007 = v0027;
    v0008 = v0000;
/* end of prologue */

v0016:
    v0034 = v0008;
    if (v0034 == nil) { popv(2); return onevalue(v0007); }
    v0034 = v0008;
    v0034 = qcdr(v0034);
    stack[0] = v0034;
    v0008 = qcar(v0008);
    fn = elt(env, 1); /* union_edge */
    v0007 = (*qfn2(fn))(qenv(fn), v0008, v0007);
    nil = C_nil;
    if (exception_pending()) goto v0040;
    env = stack[-1];
    v0008 = stack[0];
    goto v0016;
/* error exit handlers */
v0040:
    popv(2);
    return nil;
}



/* Code for errorp */

static Lisp_Object CC_errorp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0033, v0026;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for errorp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0026 = v0000;
/* end of prologue */
    v0033 = v0026;
    if (!consp(v0033)) goto v0050;
    v0033 = v0026;
    v0033 = qcdr(v0033);
    return onevalue(v0033);

v0050:
    v0033 = qvalue(elt(env, 1)); /* t */
    return onevalue(v0033);
}



/* Code for cdiv */

static Lisp_Object CC_cdiv(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0026, v0054;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for cdiv");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v0026 = v0027;
    v0054 = v0000;
/* end of prologue */
    v0026 = cons(v0054, v0026);
    nil = C_nil;
    if (exception_pending()) goto v0010;
    env = stack[0];
    fn = elt(env, 1); /* resimp */
    v0026 = (*qfn1(fn))(qenv(fn), v0026);
    nil = C_nil;
    if (exception_pending()) goto v0010;
    v0026 = qcar(v0026);
    { popv(1); return onevalue(v0026); }
/* error exit handlers */
v0010:
    popv(1);
    return nil;
}



/* Code for add_prin_char */

static Lisp_Object CC_add_prin_char(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0031, v0006, v0005;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for add_prin_char");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0027;
    stack[-1] = v0000;
/* end of prologue */
    v0031 = qvalue(elt(env, 1)); /* !*nat */
    if (v0031 == nil) goto v0045;
    v0005 = qvalue(elt(env, 2)); /* posn!* */
    v0006 = stack[0];
    v0031 = qvalue(elt(env, 3)); /* ycoord!* */
    v0005 = acons(v0005, v0006, v0031);
    nil = C_nil;
    if (exception_pending()) goto v0061;
    env = stack[-2];
    v0006 = stack[-1];
    v0031 = qvalue(elt(env, 4)); /* pline!* */
    v0031 = acons(v0005, v0006, v0031);
    nil = C_nil;
    if (exception_pending()) goto v0061;
    env = stack[-2];
    qvalue(elt(env, 4)) = v0031; /* pline!* */
    v0031 = stack[0];
    qvalue(elt(env, 2)) = v0031; /* posn!* */
    { popv(3); return onevalue(v0031); }

v0045:
    v0031 = stack[-1];
    v0031 = Lstringp(nil, v0031);
    env = stack[-2];
    if (!(v0031 == nil)) goto v0024;
    v0031 = stack[-1];
    if (!symbolp(v0031)) v0031 = nil;
    else { v0031 = qfastgets(v0031);
           if (v0031 != nil) { v0031 = elt(v0031, 11); /* switch!* */
#ifdef RECORD_GET
             if (v0031 != SPID_NOPROP)
                record_get(elt(fastget_names, 11), 1);
             else record_get(elt(fastget_names, 11), 0),
                v0031 = nil; }
           else record_get(elt(fastget_names, 11), 0); }
#else
             if (v0031 == SPID_NOPROP) v0031 = nil; }}
#endif
    if (!(v0031 == nil)) goto v0024;
    v0031 = stack[-1];
    v0031 = Ldigitp(nil, v0031);
    env = stack[-2];
    if (!(v0031 == nil)) goto v0024;
    v0031 = stack[-1];
    v0031 = Lexplodec(nil, v0031);
    nil = C_nil;
    if (exception_pending()) goto v0061;
    v0031 = qcar(v0031);
    if (!symbolp(v0031)) v0031 = nil;
    else { v0031 = qfastgets(v0031);
           if (v0031 != nil) { v0031 = elt(v0031, 11); /* switch!* */
#ifdef RECORD_GET
             if (v0031 != SPID_NOPROP)
                record_get(elt(fastget_names, 11), 1);
             else record_get(elt(fastget_names, 11), 0),
                v0031 = nil; }
           else record_get(elt(fastget_names, 11), 0); }
#else
             if (v0031 == SPID_NOPROP) v0031 = nil; }}
#endif
    if (!(v0031 == nil)) goto v0024;
    v0031 = stack[-1];
        popv(3);
        return Lprin(nil, v0031);

v0024:
    v0031 = stack[-1];
        popv(3);
        return Lprinc(nil, v0031);
/* error exit handlers */
v0061:
    popv(3);
    return nil;
}



/* Code for pv_sort2 */

static Lisp_Object CC_pv_sort2(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0033, v0026;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pv_sort2");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0027;
    v0033 = v0000;
/* end of prologue */
    v0026 = v0033;
    v0033 = stack[0];
    fn = elt(env, 1); /* pv_sort2a */
    v0033 = (*qfn2(fn))(qenv(fn), v0026, v0033);
    nil = C_nil;
    if (exception_pending()) goto v0010;
    { Lisp_Object res = stack[0]; popv(1); return onevalue(res); }
/* error exit handlers */
v0010:
    popv(1);
    return nil;
}



/* Code for !*i2rn */

static Lisp_Object CC_Hi2rn(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0026, v0054, v0010;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for *i2rn");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0026 = v0000;
/* end of prologue */
    v0010 = elt(env, 1); /* !:rn!: */
    v0054 = v0026;
    v0026 = (Lisp_Object)17; /* 1 */
    return list2star(v0010, v0054, v0026);
}



/* Code for plus!-mod!-p */

static Lisp_Object CC_plusKmodKp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0090, v0091, v0092;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for plus-mod-p");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0027;
    stack[-1] = v0000;
/* end of prologue */
    stack[-2] = nil;
    goto v0022;

v0022:
    v0090 = stack[-1];
    if (v0090 == nil) goto v0033;
    v0090 = stack[0];
    if (v0090 == nil) goto v0011;
    v0090 = stack[-1];
    if (!consp(v0090)) goto v0049;
    v0090 = stack[-1];
    v0090 = qcar(v0090);
    v0090 = (consp(v0090) ? nil : lisp_true);
    goto v0046;

v0046:
    if (v0090 == nil) goto v0037;
    v0090 = stack[0];
    if (!consp(v0090)) goto v0030;
    v0090 = stack[0];
    v0090 = qcar(v0090);
    v0090 = (consp(v0090) ? nil : lisp_true);
    goto v0017;

v0017:
    if (v0090 == nil) goto v0005;
    v0091 = stack[-1];
    v0090 = stack[0];
    {   int32_t w = int_of_fixnum(v0091) + int_of_fixnum(v0090);
        if (w >= current_modulus) w -= current_modulus;
        v0090 = fixnum_of_int(w);
    }
    fn = elt(env, 3); /* !*n2f */
    v0090 = (*qfn1(fn))(qenv(fn), v0090);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    v0091 = v0090;
    goto v0094;

v0094:
    v0090 = stack[-2];
    if (v0090 == nil) { popv(4); return onevalue(v0091); }
    v0090 = stack[-2];
    v0090 = qcdr(v0090);
    stack[-1] = v0090;
    v0090 = stack[-2];
    v0090 = Lrplacd(nil, v0090, v0091);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    v0090 = stack[-2];
    v0091 = v0090;
    v0090 = stack[-1];
    stack[-2] = v0090;
    goto v0094;

v0005:
    v0090 = stack[0];
    v0091 = qcar(v0090);
    v0090 = stack[-2];
    v0090 = cons(v0091, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    stack[-2] = v0090;
    v0090 = stack[0];
    v0090 = qcdr(v0090);
    stack[0] = v0090;
    goto v0022;

v0030:
    v0090 = qvalue(elt(env, 1)); /* t */
    goto v0017;

v0037:
    v0090 = stack[0];
    if (!consp(v0090)) goto v0021;
    v0090 = stack[0];
    v0090 = qcar(v0090);
    v0090 = (consp(v0090) ? nil : lisp_true);
    goto v0095;

v0095:
    if (v0090 == nil) goto v0096;
    v0090 = stack[-1];
    v0091 = qcar(v0090);
    v0090 = stack[-2];
    v0090 = cons(v0091, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    stack[-2] = v0090;
    v0090 = stack[-1];
    v0090 = qcdr(v0090);
    stack[-1] = v0090;
    goto v0022;

v0096:
    v0090 = stack[-1];
    v0090 = qcar(v0090);
    v0091 = qcar(v0090);
    v0090 = stack[0];
    v0090 = qcar(v0090);
    v0090 = qcar(v0090);
    if (equal(v0091, v0090)) goto v0097;
    v0090 = stack[-1];
    v0090 = qcar(v0090);
    v0090 = qcar(v0090);
    v0091 = qcar(v0090);
    v0090 = stack[0];
    v0090 = qcar(v0090);
    v0090 = qcar(v0090);
    v0090 = qcar(v0090);
    if (equal(v0091, v0090)) goto v0098;
    v0090 = qvalue(elt(env, 2)); /* nil */
    goto v0099;

v0099:
    if (!(v0090 == nil)) goto v0100;
    v0090 = stack[-1];
    v0090 = qcar(v0090);
    v0090 = qcar(v0090);
    v0091 = qcar(v0090);
    v0090 = stack[0];
    v0090 = qcar(v0090);
    v0090 = qcar(v0090);
    v0090 = qcar(v0090);
    if (equal(v0091, v0090)) goto v0101;
    v0090 = stack[-1];
    v0090 = qcar(v0090);
    v0090 = qcar(v0090);
    v0091 = qcar(v0090);
    v0090 = stack[0];
    v0090 = qcar(v0090);
    v0090 = qcar(v0090);
    v0090 = qcar(v0090);
    fn = elt(env, 4); /* ordop */
    v0090 = (*qfn2(fn))(qenv(fn), v0091, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    goto v0102;

v0102:
    if (!(v0090 == nil)) goto v0100;
    v0090 = stack[0];
    v0091 = qcar(v0090);
    v0090 = stack[-2];
    v0090 = cons(v0091, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    stack[-2] = v0090;
    v0090 = stack[0];
    v0090 = qcdr(v0090);
    stack[0] = v0090;
    goto v0022;

v0100:
    v0090 = stack[-1];
    v0091 = qcar(v0090);
    v0090 = stack[-2];
    v0090 = cons(v0091, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    stack[-2] = v0090;
    v0090 = stack[-1];
    v0090 = qcdr(v0090);
    stack[-1] = v0090;
    goto v0022;

v0101:
    v0090 = qvalue(elt(env, 2)); /* nil */
    goto v0102;

v0098:
    v0090 = stack[-1];
    v0090 = qcar(v0090);
    v0090 = qcar(v0090);
    v0091 = qcdr(v0090);
    v0090 = stack[0];
    v0090 = qcar(v0090);
    v0090 = qcar(v0090);
    v0090 = qcdr(v0090);
    v0090 = ((intptr_t)v0091 > (intptr_t)v0090) ? lisp_true : nil;
    goto v0099;

v0097:
    v0090 = stack[-1];
    v0090 = qcar(v0090);
    v0091 = qcdr(v0090);
    v0090 = stack[0];
    v0090 = qcar(v0090);
    v0090 = qcdr(v0090);
    v0090 = CC_plusKmodKp(env, v0091, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    v0091 = v0090;
    if (v0091 == nil) goto v0103;
    v0091 = stack[-1];
    v0091 = qcar(v0091);
    v0092 = qcar(v0091);
    v0091 = v0090;
    v0090 = stack[-2];
    v0090 = acons(v0092, v0091, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    stack[-2] = v0090;
    goto v0103;

v0103:
    v0090 = stack[-1];
    v0090 = qcdr(v0090);
    stack[-1] = v0090;
    v0090 = stack[0];
    v0090 = qcdr(v0090);
    stack[0] = v0090;
    goto v0022;

v0021:
    v0090 = qvalue(elt(env, 1)); /* t */
    goto v0095;

v0049:
    v0090 = qvalue(elt(env, 1)); /* t */
    goto v0046;

v0011:
    v0090 = stack[-1];
    v0091 = v0090;
    goto v0094;

v0033:
    v0090 = stack[0];
    v0091 = v0090;
    goto v0094;
/* error exit handlers */
v0093:
    popv(4);
    return nil;
}



/* Code for striptag */

static Lisp_Object CC_striptag(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0033, v0026;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for striptag");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0033 = v0000;
/* end of prologue */
    v0026 = v0033;
    if (!consp(v0026)) return onevalue(v0033);
    v0033 = qcdr(v0033);
    return onevalue(v0033);
}



/* Code for lalr_cached_goto */

static Lisp_Object CC_lalr_cached_goto(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0042, v0043;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lalr_cached_goto");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0042 = v0027;
    v0043 = v0000;
/* end of prologue */
    stack[0] = v0043;
    v0043 = v0042;
    v0042 = qvalue(elt(env, 1)); /* goto_cache */
    fn = elt(env, 2); /* gethash */
    v0042 = (*qfn2(fn))(qenv(fn), v0043, v0042);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    v0042 = Lassoc(nil, stack[0], v0042);
    v0042 = qcdr(v0042);
    { popv(1); return onevalue(v0042); }
/* error exit handlers */
v0036:
    popv(1);
    return nil;
}



/* Code for toknump */

static Lisp_Object CC_toknump(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0035, v0040, v0104;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for toknump");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0104 = v0000;
/* end of prologue */
    v0035 = v0104;
    v0035 = (is_number(v0035) ? lisp_true : nil);
    if (!(v0035 == nil)) return onevalue(v0035);
    v0040 = v0104;
    v0035 = elt(env, 1); /* !:dn!: */
    if (!consp(v0040)) goto v0046;
    v0040 = qcar(v0040);
    if (!(v0040 == v0035)) goto v0046;
    v0035 = qvalue(elt(env, 2)); /* t */
    return onevalue(v0035);

v0046:
    v0035 = v0104;
    v0040 = elt(env, 3); /* !:int!: */
        return Leqcar(nil, v0035, v0040);
}



/* Code for ofsf_posdefp */

static Lisp_Object CC_ofsf_posdefp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0026, v0054;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ofsf_posdefp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0054 = v0000;
/* end of prologue */
    v0026 = qvalue(elt(env, 1)); /* !*rlpos */
    if (v0026 == nil) goto v0047;
    v0026 = v0054;
    {
        fn = elt(env, 2); /* ofsf_posdefp!-pos */
        return (*qfn1(fn))(qenv(fn), v0026);
    }

v0047:
    v0026 = v0054;
    {
        fn = elt(env, 3); /* sfto_tsqsumf */
        return (*qfn1(fn))(qenv(fn), v0026);
    }
}



/* Code for lt!* */

static Lisp_Object CC_ltH(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0029, v0106, v0087;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lt*");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0000;
/* end of prologue */
    v0029 = qvalue(elt(env, 1)); /* !*mcd */
    if (!(v0029 == nil)) goto v0050;
    v0029 = stack[-1];
    v0029 = qcar(v0029);
    v0029 = qcar(v0029);
    v0106 = qcdr(v0029);
    v0029 = (Lisp_Object)1; /* 0 */
    v0029 = (Lisp_Object)greaterp2(v0106, v0029);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    v0029 = v0029 ? lisp_true : nil;
    env = stack[-3];
    if (!(v0029 == nil)) goto v0050;
    v0029 = stack[-1];
    v0029 = qcar(v0029);
    stack[-2] = v0029;
    v0029 = stack[-1];
    v0029 = qcar(v0029);
    v0029 = qcar(v0029);
    v0029 = qcar(v0029);
    stack[0] = v0029;
    goto v0008;

v0008:
    v0029 = stack[-1];
    v0029 = qcdr(v0029);
    stack[-1] = v0029;
    v0029 = stack[-1];
    if (v0029 == nil) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v0106 = stack[-1];
    v0029 = stack[0];
    fn = elt(env, 2); /* degr */
    v0106 = (*qfn2(fn))(qenv(fn), v0106, v0029);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    env = stack[-3];
    v0029 = (Lisp_Object)1; /* 0 */
    if (!(v0106 == v0029)) goto v0008;
    v0087 = stack[0];
    v0106 = (Lisp_Object)1; /* 0 */
    v0029 = stack[-1];
    popv(4);
    return acons(v0087, v0106, v0029);

v0050:
    v0029 = stack[-1];
    v0029 = qcar(v0029);
    { popv(4); return onevalue(v0029); }
/* error exit handlers */
v0107:
    popv(4);
    return nil;
}



/* Code for printout */

static Lisp_Object CC_printout(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0013, v0014;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for printout");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0000;
/* end of prologue */
    v0013 = qvalue(elt(env, 1)); /* !*web */
    if (!(v0013 == nil)) goto v0045;
    v0013 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    env = stack[-2];
    goto v0045;

v0045:
    v0013 = qvalue(elt(env, 1)); /* !*web */
    if (!(v0013 == nil)) goto v0025;
    v0013 = (Lisp_Object)17; /* 1 */
    stack[-1] = v0013;
    goto v0009;

v0009:
    v0014 = qvalue(elt(env, 2)); /* indent */
    v0013 = stack[-1];
    v0013 = difference2(v0014, v0013);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    env = stack[-2];
    v0013 = Lminusp(nil, v0013);
    env = stack[-2];
    if (!(v0013 == nil)) goto v0025;
    v0013 = elt(env, 4); /* " " */
    v0013 = Lprinc(nil, v0013);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    env = stack[-2];
    v0013 = stack[-1];
    v0013 = add1(v0013);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    env = stack[-2];
    stack[-1] = v0013;
    goto v0009;

v0025:
    v0013 = stack[0];
    v0013 = Lconsp(nil, v0013);
    env = stack[-2];
    if (v0013 == nil) goto v0108;
    v0013 = stack[0];
    v0014 = qcar(v0013);
    v0013 = elt(env, 5); /* !:rd!: */
    if (v0014 == v0013) goto v0020;
    v0013 = stack[0];
    v0014 = qcar(v0013);
    v0013 = elt(env, 7); /* !:rn!: */
    v0013 = (v0014 == v0013 ? lisp_true : nil);
    goto v0002;

v0002:
    if (v0013 == nil) goto v0021;
    v0013 = stack[0];
    fn = elt(env, 8); /* ma_print */
    v0013 = (*qfn1(fn))(qenv(fn), v0013);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    goto v0030;

v0030:
    v0013 = nil;
    { popv(3); return onevalue(v0013); }

v0021:
    v0013 = stack[0];
    v0013 = Lprinc(nil, v0013);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    goto v0030;

v0020:
    v0013 = qvalue(elt(env, 6)); /* t */
    goto v0002;

v0108:
    v0013 = stack[0];
    v0013 = Lprinc(nil, v0013);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    goto v0030;
/* error exit handlers */
v0015:
    popv(3);
    return nil;
}



/* Code for initcomb */

static Lisp_Object CC_initcomb(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0050;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for initcomb");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0050 = v0000;
/* end of prologue */
    return ncons(v0050);
}



/* Code for evmatrixcomp */

static Lisp_Object CC_evmatrixcomp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0054, v0010, v0011;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for evmatrixcomp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0054 = v0027;
    v0010 = v0000;
/* end of prologue */
    v0011 = v0010;
    v0010 = v0054;
    v0054 = qvalue(elt(env, 1)); /* vdpmatrix!* */
    {
        fn = elt(env, 2); /* evmatrixcomp1 */
        return (*qfnn(fn))(qenv(fn), 3, v0011, v0010, v0054);
    }
}



/* Code for wedgepf2 */

static Lisp_Object CC_wedgepf2(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0112, v0061;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for wedgepf2");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0027;
    stack[-2] = v0000;
/* end of prologue */
    v0112 = stack[-2];
    if (v0112 == nil) goto v0047;
    v0112 = stack[-1];
    v0112 = (v0112 == nil ? lisp_true : nil);
    goto v0022;

v0022:
    if (v0112 == nil) goto v0007;
    v0112 = qvalue(elt(env, 2)); /* nil */
    { popv(5); return onevalue(v0112); }

v0007:
    v0112 = stack[-2];
    v0061 = qcar(v0112);
    v0112 = stack[-1];
    v0112 = qcar(v0112);
    fn = elt(env, 3); /* wedget2 */
    stack[-3] = (*qfn2(fn))(qenv(fn), v0061, v0112);
    nil = C_nil;
    if (exception_pending()) goto v0004;
    env = stack[-4];
    v0112 = stack[-2];
    v0112 = qcar(v0112);
    v0061 = ncons(v0112);
    nil = C_nil;
    if (exception_pending()) goto v0004;
    env = stack[-4];
    v0112 = stack[-1];
    v0112 = qcdr(v0112);
    stack[0] = CC_wedgepf2(env, v0061, v0112);
    nil = C_nil;
    if (exception_pending()) goto v0004;
    env = stack[-4];
    v0112 = stack[-2];
    v0061 = qcdr(v0112);
    v0112 = stack[-1];
    v0112 = CC_wedgepf2(env, v0061, v0112);
    nil = C_nil;
    if (exception_pending()) goto v0004;
    env = stack[-4];
    fn = elt(env, 4); /* addpf */
    v0112 = (*qfn2(fn))(qenv(fn), stack[0], v0112);
    nil = C_nil;
    if (exception_pending()) goto v0004;
    env = stack[-4];
    {
        Lisp_Object v0028 = stack[-3];
        popv(5);
        fn = elt(env, 4); /* addpf */
        return (*qfn2(fn))(qenv(fn), v0028, v0112);
    }

v0047:
    v0112 = qvalue(elt(env, 1)); /* t */
    goto v0022;
/* error exit handlers */
v0004:
    popv(5);
    return nil;
}



/* Code for pprin2 */

static Lisp_Object CC_pprin2(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0036, v0046;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pprin2");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0000;
/* end of prologue */
    v0046 = stack[0];
    v0036 = qvalue(elt(env, 1)); /* !*pprinbuf!* */
    v0036 = cons(v0046, v0036);
    nil = C_nil;
    if (exception_pending()) goto v0009;
    env = stack[-2];
    qvalue(elt(env, 1)) = v0036; /* !*pprinbuf!* */
    stack[-1] = qvalue(elt(env, 2)); /* !*posn!* */
    v0036 = stack[0];
    v0036 = Lexplodec(nil, v0036);
    nil = C_nil;
    if (exception_pending()) goto v0009;
    env = stack[-2];
    v0036 = Llength(nil, v0036);
    nil = C_nil;
    if (exception_pending()) goto v0009;
    env = stack[-2];
    v0036 = plus2(stack[-1], v0036);
    nil = C_nil;
    if (exception_pending()) goto v0009;
    env = stack[-2];
    qvalue(elt(env, 2)) = v0036; /* !*posn!* */
    v0036 = nil;
    { popv(3); return onevalue(v0036); }
/* error exit handlers */
v0009:
    popv(3);
    return nil;
}



/* Code for opmtch!* */

static Lisp_Object CC_opmtchH(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0033, v0026;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for opmtch*");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0026 = v0000;
/* end of prologue */
    v0033 = qvalue(elt(env, 1)); /* subfg!* */
    stack[0] = v0033;
    v0033 = qvalue(elt(env, 2)); /* t */
    qvalue(elt(env, 1)) = v0033; /* subfg!* */
    v0033 = v0026;
    fn = elt(env, 3); /* opmtch */
    v0033 = (*qfn1(fn))(qenv(fn), v0033);
    nil = C_nil;
    if (exception_pending()) goto v0010;
    env = stack[-1];
    v0026 = v0033;
    v0033 = stack[0];
    qvalue(elt(env, 1)) = v0033; /* subfg!* */
    { popv(2); return onevalue(v0026); }
/* error exit handlers */
v0010:
    popv(2);
    return nil;
}



/* Code for timesip */

static Lisp_Object CC_timesip(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0009, v0007, v0008;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for timesip");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0008 = v0000;
/* end of prologue */
    v0007 = v0008;
    v0009 = elt(env, 1); /* times */
    if (!consp(v0007)) goto v0046;
    v0007 = qcar(v0007);
    if (!(v0007 == v0009)) goto v0046;
    v0009 = elt(env, 2); /* i */
    v0007 = v0008;
    v0007 = qcdr(v0007);
    v0009 = Lmemq(nil, v0009, v0007);
    return onevalue(v0009);

v0046:
    v0009 = qvalue(elt(env, 3)); /* nil */
    return onevalue(v0009);
}



/* Code for fs!:timestermterm */

static Lisp_Object CC_fsTtimestermterm(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0172, v0173, v0174;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fs:timestermterm");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-6] = v0027;
    stack[-7] = v0000;
/* end of prologue */
    v0172 = (Lisp_Object)113; /* 7 */
    v0172 = Lmkvect(nil, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    stack[-8] = v0172;
    v0173 = stack[-7];
    v0172 = (Lisp_Object)33; /* 2 */
    v0172 = *(Lisp_Object *)((char *)v0173 + (CELL-TAG_VECTOR) + ((int32_t)v0172/(16/CELL)));
    stack[-4] = v0172;
    v0173 = stack[-6];
    v0172 = (Lisp_Object)33; /* 2 */
    v0172 = *(Lisp_Object *)((char *)v0173 + (CELL-TAG_VECTOR) + ((int32_t)v0172/(16/CELL)));
    stack[-3] = v0172;
    v0172 = (Lisp_Object)1; /* 0 */
    stack[-2] = v0172;
    goto v0041;

v0041:
    v0173 = (Lisp_Object)113; /* 7 */
    v0172 = stack[-2];
    v0172 = difference2(v0173, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    v0172 = Lminusp(nil, v0172);
    env = stack[-9];
    if (v0172 == nil) goto v0032;
    v0172 = (Lisp_Object)113; /* 7 */
    v0172 = Lmkvect(nil, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    stack[-5] = v0172;
    v0172 = (Lisp_Object)1; /* 0 */
    stack[-2] = v0172;
    goto v0176;

v0176:
    v0173 = (Lisp_Object)113; /* 7 */
    v0172 = stack[-2];
    v0172 = difference2(v0173, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    v0172 = Lminusp(nil, v0172);
    env = stack[-9];
    if (v0172 == nil) goto v0177;
    v0173 = stack[-7];
    v0172 = (Lisp_Object)1; /* 0 */
    v0174 = *(Lisp_Object *)((char *)v0173 + (CELL-TAG_VECTOR) + ((int32_t)v0172/(16/CELL)));
    v0173 = stack[-6];
    v0172 = (Lisp_Object)1; /* 0 */
    v0172 = *(Lisp_Object *)((char *)v0173 + (CELL-TAG_VECTOR) + ((int32_t)v0172/(16/CELL)));
    fn = elt(env, 5); /* multsq */
    v0172 = (*qfn2(fn))(qenv(fn), v0174, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    stack[0] = v0172;
    v0173 = stack[0];
    v0172 = elt(env, 2); /* (1 . 2) */
    fn = elt(env, 5); /* multsq */
    v0172 = (*qfn2(fn))(qenv(fn), v0173, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    stack[0] = v0172;
    v0172 = stack[0];
    v0172 = qcar(v0172);
    if (v0172 == nil) goto v0178;
    v0173 = stack[-7];
    v0172 = (Lisp_Object)17; /* 1 */
    v0173 = *(Lisp_Object *)((char *)v0173 + (CELL-TAG_VECTOR) + ((int32_t)v0172/(16/CELL)));
    v0172 = elt(env, 3); /* sin */
    if (v0173 == v0172) goto v0179;
    v0173 = stack[-6];
    v0172 = (Lisp_Object)17; /* 1 */
    v0173 = *(Lisp_Object *)((char *)v0173 + (CELL-TAG_VECTOR) + ((int32_t)v0172/(16/CELL)));
    v0172 = elt(env, 3); /* sin */
    if (v0173 == v0172) goto v0180;
    v0174 = elt(env, 4); /* cos */
    v0173 = stack[-8];
    v0172 = stack[0];
    fn = elt(env, 6); /* make!-term */
    stack[-1] = (*qfnn(fn))(qenv(fn), 3, v0174, v0173, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    v0174 = elt(env, 4); /* cos */
    v0173 = stack[-5];
    v0172 = stack[0];
    fn = elt(env, 6); /* make!-term */
    v0172 = (*qfnn(fn))(qenv(fn), 3, v0174, v0173, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    {
        Lisp_Object v0181 = stack[-1];
        popv(10);
        fn = elt(env, 7); /* fs!:plus */
        return (*qfn2(fn))(qenv(fn), v0181, v0172);
    }

v0180:
    v0174 = elt(env, 3); /* sin */
    v0173 = stack[-8];
    v0172 = stack[0];
    fn = elt(env, 6); /* make!-term */
    stack[-2] = (*qfnn(fn))(qenv(fn), 3, v0174, v0173, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    stack[-1] = elt(env, 3); /* sin */
    stack[-3] = stack[-5];
    v0172 = stack[0];
    fn = elt(env, 8); /* negsq */
    v0172 = (*qfn1(fn))(qenv(fn), v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    fn = elt(env, 6); /* make!-term */
    v0172 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[-3], v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    {
        Lisp_Object v0182 = stack[-2];
        popv(10);
        fn = elt(env, 7); /* fs!:plus */
        return (*qfn2(fn))(qenv(fn), v0182, v0172);
    }

v0179:
    v0173 = stack[-6];
    v0172 = (Lisp_Object)17; /* 1 */
    v0173 = *(Lisp_Object *)((char *)v0173 + (CELL-TAG_VECTOR) + ((int32_t)v0172/(16/CELL)));
    v0172 = elt(env, 3); /* sin */
    if (v0173 == v0172) goto v0183;
    v0174 = elt(env, 3); /* sin */
    v0173 = stack[-8];
    v0172 = stack[0];
    fn = elt(env, 6); /* make!-term */
    stack[-1] = (*qfnn(fn))(qenv(fn), 3, v0174, v0173, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    v0174 = elt(env, 3); /* sin */
    v0173 = stack[-5];
    v0172 = stack[0];
    fn = elt(env, 6); /* make!-term */
    v0172 = (*qfnn(fn))(qenv(fn), 3, v0174, v0173, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    {
        Lisp_Object v0184 = stack[-1];
        popv(10);
        fn = elt(env, 7); /* fs!:plus */
        return (*qfn2(fn))(qenv(fn), v0184, v0172);
    }

v0183:
    stack[-1] = elt(env, 4); /* cos */
    stack[-2] = stack[-8];
    v0172 = stack[0];
    fn = elt(env, 8); /* negsq */
    v0172 = (*qfn1(fn))(qenv(fn), v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    fn = elt(env, 6); /* make!-term */
    stack[-1] = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[-2], v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    v0174 = elt(env, 4); /* cos */
    v0173 = stack[-5];
    v0172 = stack[0];
    fn = elt(env, 6); /* make!-term */
    v0172 = (*qfnn(fn))(qenv(fn), 3, v0174, v0173, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    {
        Lisp_Object v0185 = stack[-1];
        popv(10);
        fn = elt(env, 7); /* fs!:plus */
        return (*qfn2(fn))(qenv(fn), v0185, v0172);
    }

v0178:
    v0172 = qvalue(elt(env, 1)); /* nil */
    { popv(10); return onevalue(v0172); }

v0177:
    stack[-1] = stack[-5];
    stack[0] = stack[-2];
    v0173 = stack[-4];
    v0172 = stack[-2];
    v0174 = *(Lisp_Object *)((char *)v0173 + (CELL-TAG_VECTOR) + ((int32_t)v0172/(16/CELL)));
    v0173 = stack[-3];
    v0172 = stack[-2];
    v0172 = *(Lisp_Object *)((char *)v0173 + (CELL-TAG_VECTOR) + ((int32_t)v0172/(16/CELL)));
    v0172 = difference2(v0174, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v0172;
    v0172 = stack[-2];
    v0172 = add1(v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    stack[-2] = v0172;
    goto v0176;

v0032:
    stack[-1] = stack[-8];
    stack[0] = stack[-2];
    v0173 = stack[-4];
    v0172 = stack[-2];
    v0174 = *(Lisp_Object *)((char *)v0173 + (CELL-TAG_VECTOR) + ((int32_t)v0172/(16/CELL)));
    v0173 = stack[-3];
    v0172 = stack[-2];
    v0172 = *(Lisp_Object *)((char *)v0173 + (CELL-TAG_VECTOR) + ((int32_t)v0172/(16/CELL)));
    v0172 = plus2(v0174, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v0172;
    v0172 = stack[-2];
    v0172 = add1(v0172);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-9];
    stack[-2] = v0172;
    goto v0041;
/* error exit handlers */
v0175:
    popv(10);
    return nil;
}



/* Code for mo_vdivides!? */

static Lisp_Object CC_mo_vdividesW(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0008, v0034;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mo_vdivides?");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0027;
    stack[-1] = v0000;
/* end of prologue */
    v0008 = stack[-1];
    fn = elt(env, 2); /* mo_comp */
    stack[-2] = (*qfn1(fn))(qenv(fn), v0008);
    nil = C_nil;
    if (exception_pending()) goto v0111;
    env = stack[-3];
    v0008 = stack[0];
    fn = elt(env, 2); /* mo_comp */
    v0008 = (*qfn1(fn))(qenv(fn), v0008);
    nil = C_nil;
    if (exception_pending()) goto v0111;
    env = stack[-3];
    v0008 = Leqn(nil, stack[-2], v0008);
    nil = C_nil;
    if (exception_pending()) goto v0111;
    env = stack[-3];
    if (v0008 == nil) goto v0045;
    v0034 = stack[-1];
    v0008 = stack[0];
    {
        popv(4);
        fn = elt(env, 3); /* mo_divides!? */
        return (*qfn2(fn))(qenv(fn), v0034, v0008);
    }

v0045:
    v0008 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v0008); }
/* error exit handlers */
v0111:
    popv(4);
    return nil;
}



/* Code for dless */

static Lisp_Object CC_dless(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0015, v0188, v0039;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dless");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v0039 = v0027;
    stack[0] = v0000;
/* end of prologue */
    v0188 = qvalue(elt(env, 1)); /* ordering */
    v0015 = elt(env, 2); /* lex */
    if (v0188 == v0015) goto v0010;
    v0015 = stack[0];
    v0188 = qcar(v0015);
    v0015 = v0039;
    v0015 = qcar(v0015);
    if (((int32_t)(v0188)) < ((int32_t)(v0015))) goto v0036;
    v0015 = stack[0];
    v0188 = qcar(v0015);
    v0015 = v0039;
    v0015 = qcar(v0015);
    if (((int32_t)(v0188)) > ((int32_t)(v0015))) goto v0189;
    v0188 = qvalue(elt(env, 1)); /* ordering */
    v0015 = elt(env, 5); /* glex */
    if (v0188 == v0015) goto v0056;
    v0188 = qvalue(elt(env, 1)); /* ordering */
    v0015 = elt(env, 6); /* grev */
    if (v0188 == v0015) goto v0190;
    v0015 = nil;
    { popv(3); return onevalue(v0015); }

v0190:
    v0015 = v0039;
    v0015 = qcdr(v0015);
    stack[-1] = Lreverse(nil, v0015);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-2];
    v0015 = stack[0];
    v0015 = qcdr(v0015);
    v0015 = Lreverse(nil, v0015);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-2];
    {
        Lisp_Object v0191 = stack[-1];
        popv(3);
        fn = elt(env, 7); /* dlesslex */
        return (*qfn2(fn))(qenv(fn), v0191, v0015);
    }

v0056:
    v0015 = stack[0];
    v0015 = qcdr(v0015);
    v0188 = v0039;
    v0188 = qcdr(v0188);
    {
        popv(3);
        fn = elt(env, 7); /* dlesslex */
        return (*qfn2(fn))(qenv(fn), v0015, v0188);
    }

v0189:
    v0015 = qvalue(elt(env, 4)); /* nil */
    { popv(3); return onevalue(v0015); }

v0036:
    v0015 = qvalue(elt(env, 3)); /* t */
    { popv(3); return onevalue(v0015); }

v0010:
    v0015 = stack[0];
    v0188 = v0039;
    {
        popv(3);
        fn = elt(env, 7); /* dlesslex */
        return (*qfn2(fn))(qenv(fn), v0015, v0188);
    }
/* error exit handlers */
v0086:
    popv(3);
    return nil;
}



/* Code for pv_multc */

static Lisp_Object CC_pv_multc(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0039, v0192, v0085;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pv_multc");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0027;
    stack[-1] = v0000;
/* end of prologue */
    v0192 = stack[0];
    v0039 = (Lisp_Object)1; /* 0 */
    if (v0192 == v0039) goto v0047;
    v0039 = stack[-1];
    v0039 = (v0039 == nil ? lisp_true : nil);
    goto v0022;

v0022:
    if (v0039 == nil) goto v0009;
    v0039 = qvalue(elt(env, 2)); /* nil */
    { popv(4); return onevalue(v0039); }

v0009:
    v0192 = stack[0];
    v0039 = (Lisp_Object)17; /* 1 */
    if (v0192 == v0039) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    stack[-2] = nil;
    goto v0044;

v0044:
    v0039 = stack[-1];
    if (v0039 == nil) goto v0041;
    v0039 = stack[-1];
    v0039 = qcar(v0039);
    v0192 = qcar(v0039);
    v0039 = (Lisp_Object)1; /* 0 */
    if (v0192 == v0039) goto v0002;
    v0192 = stack[0];
    v0039 = stack[-1];
    v0039 = qcar(v0039);
    v0039 = qcar(v0039);
    v0085 = times2(v0192, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0176;
    env = stack[-3];
    v0039 = stack[-1];
    v0039 = qcar(v0039);
    v0192 = qcdr(v0039);
    v0039 = stack[-2];
    v0039 = acons(v0085, v0192, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0176;
    env = stack[-3];
    stack[-2] = v0039;
    goto v0002;

v0002:
    v0039 = stack[-1];
    v0039 = qcdr(v0039);
    stack[-1] = v0039;
    goto v0044;

v0041:
    v0039 = stack[-2];
        popv(4);
        return Lnreverse(nil, v0039);

v0047:
    v0039 = qvalue(elt(env, 1)); /* t */
    goto v0022;
/* error exit handlers */
v0176:
    popv(4);
    return nil;
}



/* Code for upbve */

static Lisp_Object CC_upbve(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0054;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for upbve");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0000;
/* end of prologue */
    v0054 = stack[0];
    v0054 = Lupbv(nil, v0054);
    nil = C_nil;
    if (exception_pending()) goto v0011;
    env = stack[-1];
    if (v0054 == nil) goto v0050;
    v0054 = stack[0];
    v0054 = Lupbv(nil, v0054);
    nil = C_nil;
    if (exception_pending()) goto v0011;
    popv(2);
    return add1(v0054);

v0050:
    v0054 = (Lisp_Object)1; /* 0 */
    { popv(2); return onevalue(v0054); }
/* error exit handlers */
v0011:
    popv(2);
    return nil;
}



/* Code for rl_ordatp */

static Lisp_Object CC_rl_ordatp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0048, v0042;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rl_ordatp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0048 = v0027;
    v0042 = v0000;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* rl_ordatp!* */
    v0048 = list2(v0042, v0048);
    nil = C_nil;
    if (exception_pending()) goto v0037;
    env = stack[-1];
    {
        Lisp_Object v0036 = stack[0];
        popv(2);
        fn = elt(env, 2); /* apply */
        return (*qfn2(fn))(qenv(fn), v0036, v0048);
    }
/* error exit handlers */
v0037:
    popv(2);
    return nil;
}



/* Code for monomisdivisibleby */

static Lisp_Object CC_monomisdivisibleby(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0194, v0186, v0012;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for monomisdivisibleby");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v0012 = v0027;
    v0194 = v0000;
/* end of prologue */
    v0186 = v0194;
    v0194 = (Lisp_Object)17; /* 1 */
    v0194 = *(Lisp_Object *)((char *)v0186 + (CELL-TAG_VECTOR) + ((int32_t)v0194/(16/CELL)));
    stack[-1] = v0194;
    v0186 = v0012;
    v0194 = (Lisp_Object)17; /* 1 */
    v0194 = *(Lisp_Object *)((char *)v0186 + (CELL-TAG_VECTOR) + ((int32_t)v0194/(16/CELL)));
    stack[0] = v0194;
    goto v0052;

v0052:
    v0194 = stack[-1];
    v0194 = qcar(v0194);
    if (v0194 == nil) goto v0049;
    v0194 = stack[0];
    v0194 = qcar(v0194);
    if (v0194 == nil) goto v0049;
    v0194 = stack[-1];
    v0186 = qcar(v0194);
    v0194 = stack[0];
    v0194 = qcar(v0194);
    if (equal(v0186, v0194)) goto v0030;
    v0194 = stack[-1];
    v0186 = qcar(v0194);
    v0194 = stack[0];
    v0194 = qcar(v0194);
    v0194 = (Lisp_Object)greaterp2(v0186, v0194);
    nil = C_nil;
    if (exception_pending()) goto v0195;
    v0194 = v0194 ? lisp_true : nil;
    env = stack[-2];
    if (v0194 == nil) goto v0029;
    v0194 = stack[-1];
    v0194 = qcdr(v0194);
    stack[-1] = v0194;
    goto v0052;

v0029:
    v0194 = qvalue(elt(env, 1)); /* nil */
    v0194 = ncons(v0194);
    nil = C_nil;
    if (exception_pending()) goto v0195;
    env = stack[-2];
    stack[-1] = v0194;
    goto v0052;

v0030:
    v0194 = stack[-1];
    v0194 = qcdr(v0194);
    stack[-1] = v0194;
    v0194 = stack[0];
    v0194 = qcdr(v0194);
    stack[0] = v0194;
    goto v0052;

v0049:
    v0194 = stack[0];
    v0194 = qcar(v0194);
    v0194 = (v0194 == nil ? lisp_true : nil);
    { popv(3); return onevalue(v0194); }
/* error exit handlers */
v0195:
    popv(3);
    return nil;
}



/* Code for delallasc */

static Lisp_Object CC_delallasc(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0041, v0044, v0110;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for delallasc");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0027;
    stack[-1] = v0000;
/* end of prologue */
    v0110 = nil;
    goto v0016;

v0016:
    v0041 = stack[0];
    if (v0041 == nil) goto v0047;
    v0044 = stack[-1];
    v0041 = stack[0];
    v0041 = qcar(v0041);
    v0041 = qcar(v0041);
    if (v0044 == v0041) goto v0054;
    v0041 = stack[0];
    v0041 = qcar(v0041);
    v0044 = v0110;
    v0041 = cons(v0041, v0044);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    env = stack[-2];
    v0110 = v0041;
    v0041 = stack[0];
    v0041 = qcdr(v0041);
    stack[0] = v0041;
    goto v0016;

v0054:
    v0041 = stack[0];
    v0041 = qcdr(v0041);
    stack[0] = v0041;
    goto v0016;

v0047:
    v0041 = v0110;
    {
        popv(3);
        fn = elt(env, 1); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0041);
    }
/* error exit handlers */
v0170:
    popv(3);
    return nil;
}



/* Code for nocp */

static Lisp_Object CC_nocp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0049;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for nocp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0000;
/* end of prologue */

v0196:
    v0049 = stack[0];
    if (v0049 == nil) goto v0050;
    v0049 = stack[0];
    v0049 = qcar(v0049);
    v0049 = qcar(v0049);
    fn = elt(env, 3); /* noncomp */
    v0049 = (*qfn1(fn))(qenv(fn), v0049);
    nil = C_nil;
    if (exception_pending()) goto v0009;
    env = stack[-1];
    if (v0049 == nil) goto v0033;
    v0049 = stack[0];
    v0049 = qcdr(v0049);
    stack[0] = v0049;
    goto v0196;

v0033:
    v0049 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v0049); }

v0050:
    v0049 = qvalue(elt(env, 1)); /* t */
    { popv(2); return onevalue(v0049); }
/* error exit handlers */
v0009:
    popv(2);
    return nil;
}



/* Code for multsq */

static Lisp_Object CC_multsq(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0154, v0155;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for multsq");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0027;
    stack[-3] = v0000;
/* end of prologue */
    v0154 = stack[-3];
    v0154 = qcar(v0154);
    if (v0154 == nil) goto v0047;
    v0154 = stack[-2];
    v0154 = qcar(v0154);
    v0154 = (v0154 == nil ? lisp_true : nil);
    goto v0022;

v0022:
    if (v0154 == nil) goto v0111;
    v0155 = qvalue(elt(env, 2)); /* nil */
    v0154 = (Lisp_Object)17; /* 1 */
    popv(6);
    return cons(v0155, v0154);

v0111:
    v0154 = stack[-3];
    v0155 = qcdr(v0154);
    v0154 = (Lisp_Object)17; /* 1 */
    if (v0155 == v0154) goto v0044;
    v0154 = qvalue(elt(env, 2)); /* nil */
    goto v0035;

v0035:
    if (v0154 == nil) goto v0108;
    v0154 = stack[-3];
    v0155 = qcar(v0154);
    v0154 = stack[-2];
    v0154 = qcar(v0154);
    fn = elt(env, 3); /* multf */
    v0155 = (*qfn2(fn))(qenv(fn), v0155, v0154);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    v0154 = (Lisp_Object)17; /* 1 */
    popv(6);
    return cons(v0155, v0154);

v0108:
    v0154 = stack[-3];
    v0155 = qcar(v0154);
    v0154 = stack[-2];
    v0154 = qcdr(v0154);
    fn = elt(env, 4); /* gcdf */
    v0154 = (*qfn2(fn))(qenv(fn), v0155, v0154);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-5];
    stack[-4] = v0154;
    v0154 = stack[-2];
    v0155 = qcar(v0154);
    v0154 = stack[-3];
    v0154 = qcdr(v0154);
    fn = elt(env, 4); /* gcdf */
    v0154 = (*qfn2(fn))(qenv(fn), v0155, v0154);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-5];
    stack[-1] = v0154;
    v0154 = stack[-3];
    v0155 = qcar(v0154);
    v0154 = stack[-4];
    fn = elt(env, 5); /* quotf!-fail */
    stack[0] = (*qfn2(fn))(qenv(fn), v0155, v0154);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-5];
    v0154 = stack[-2];
    v0155 = qcar(v0154);
    v0154 = stack[-1];
    fn = elt(env, 5); /* quotf!-fail */
    v0154 = (*qfn2(fn))(qenv(fn), v0155, v0154);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-5];
    fn = elt(env, 3); /* multf */
    v0154 = (*qfn2(fn))(qenv(fn), stack[0], v0154);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-5];
    stack[0] = v0154;
    v0154 = stack[-3];
    v0155 = qcdr(v0154);
    v0154 = stack[-1];
    fn = elt(env, 5); /* quotf!-fail */
    stack[-1] = (*qfn2(fn))(qenv(fn), v0155, v0154);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-5];
    v0154 = stack[-2];
    v0155 = qcdr(v0154);
    v0154 = stack[-4];
    fn = elt(env, 5); /* quotf!-fail */
    v0154 = (*qfn2(fn))(qenv(fn), v0155, v0154);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-5];
    fn = elt(env, 3); /* multf */
    v0154 = (*qfn2(fn))(qenv(fn), stack[-1], v0154);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-5];
    stack[-4] = v0154;
    v0155 = stack[0];
    v0154 = stack[-4];
    v0154 = cons(v0155, v0154);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-5];
    {
        popv(6);
        fn = elt(env, 6); /* canonsq */
        return (*qfn1(fn))(qenv(fn), v0154);
    }

v0044:
    v0154 = stack[-2];
    v0155 = qcdr(v0154);
    v0154 = (Lisp_Object)17; /* 1 */
    v0154 = (v0155 == v0154 ? lisp_true : nil);
    goto v0035;

v0047:
    v0154 = qvalue(elt(env, 1)); /* t */
    goto v0022;
/* error exit handlers */
v0098:
    popv(6);
    return nil;
}



/* Code for qqe_nytidp */

static Lisp_Object CC_qqe_nytidp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0045;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for qqe_nytidp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0045 = v0000;
/* end of prologue */
    if (!symbolp(v0045)) v0045 = nil;
    else { v0045 = qfastgets(v0045);
           if (v0045 != nil) { v0045 = elt(v0045, 10); /* idtype */
#ifdef RECORD_GET
             if (v0045 != SPID_NOPROP)
                record_get(elt(fastget_names, 10), 1);
             else record_get(elt(fastget_names, 10), 0),
                v0045 = nil; }
           else record_get(elt(fastget_names, 10), 0); }
#else
             if (v0045 == SPID_NOPROP) v0045 = nil; }}
#endif
    v0045 = (v0045 == nil ? lisp_true : nil);
    return onevalue(v0045);
}



/* Code for sort */

static Lisp_Object CC_sort(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0048, v0042;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for sort");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0027;
    v0048 = v0000;
/* end of prologue */
    v0042 = v0048;
    v0048 = qvalue(elt(env, 1)); /* nil */
    v0042 = Lappend(nil, v0042, v0048);
    nil = C_nil;
    if (exception_pending()) goto v0037;
    env = stack[-1];
    v0048 = stack[0];
    {
        popv(2);
        fn = elt(env, 2); /* stable!-sortip */
        return (*qfn2(fn))(qenv(fn), v0042, v0048);
    }
/* error exit handlers */
v0037:
    popv(2);
    return nil;
}



/* Code for bftrim!: */

static Lisp_Object CC_bftrimT(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0048, v0042;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for bftrim:");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0048 = v0000;
/* end of prologue */
    stack[0] = v0048;
    v0042 = qvalue(elt(env, 1)); /* !:bprec!: */
    v0048 = (Lisp_Object)49; /* 3 */
    v0048 = difference2(v0042, v0048);
    nil = C_nil;
    if (exception_pending()) goto v0037;
    env = stack[-1];
    fn = elt(env, 2); /* round!:mt */
    v0048 = (*qfn2(fn))(qenv(fn), stack[0], v0048);
    nil = C_nil;
    if (exception_pending()) goto v0037;
    env = stack[-1];
    {
        popv(2);
        fn = elt(env, 3); /* normbf */
        return (*qfn1(fn))(qenv(fn), v0048);
    }
/* error exit handlers */
v0037:
    popv(2);
    return nil;
}



/* Code for !*q2a1 */

static Lisp_Object CC_Hq2a1(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0054, v0010;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for *q2a1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0054 = v0027;
    v0010 = v0000;
/* end of prologue */
    if (v0054 == nil) goto v0045;
    v0054 = v0010;
    {
        fn = elt(env, 1); /* prepsqxx */
        return (*qfn1(fn))(qenv(fn), v0054);
    }

v0045:
    v0054 = v0010;
    {
        fn = elt(env, 2); /* mk!*sq */
        return (*qfn1(fn))(qenv(fn), v0054);
    }
}



/* Code for off1 */

static Lisp_Object CC_off1(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0024, v0025;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for off1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0024 = v0000;
/* end of prologue */
    v0025 = v0024;
    v0024 = qvalue(elt(env, 1)); /* nil */
    {
        fn = elt(env, 2); /* onoff */
        return (*qfn2(fn))(qenv(fn), v0025, v0024);
    }
}



/* Code for mgenp */

static Lisp_Object CC_mgenp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0048, v0042;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mgenp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0042 = v0000;
/* end of prologue */
    v0048 = v0042;
    if (!consp(v0048)) goto v0022;
    v0048 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0048);

v0022:
    v0048 = v0042;
    v0042 = elt(env, 1); /* mgen */
    return get(v0048, v0042);
}



/* Code for on1 */

static Lisp_Object CC_on1(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0024, v0025;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for on1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0024 = v0000;
/* end of prologue */
    v0025 = v0024;
    v0024 = qvalue(elt(env, 1)); /* t */
    {
        fn = elt(env, 2); /* onoff */
        return (*qfn2(fn))(qenv(fn), v0025, v0024);
    }
}



/* Code for evsum */

static Lisp_Object CC_evsum(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0004, v0028, v0029;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for evsum");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0027;
    stack[-1] = v0000;
/* end of prologue */
    v0029 = nil;
    goto v0022;

v0022:
    v0004 = stack[-1];
    if (v0004 == nil) goto v0023;
    v0004 = stack[0];
    if (v0004 == nil) goto v0023;
    v0004 = stack[-1];
    v0028 = qcar(v0004);
    v0004 = stack[0];
    v0004 = qcar(v0004);
    v0004 = (Lisp_Object)(int32_t)((int32_t)v0028 + (int32_t)v0004 - TAG_FIXNUM);
    v0028 = v0029;
    v0004 = cons(v0004, v0028);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-2];
    v0029 = v0004;
    v0004 = stack[-1];
    v0004 = qcdr(v0004);
    stack[-1] = v0004;
    v0004 = stack[0];
    v0004 = qcdr(v0004);
    stack[0] = v0004;
    goto v0022;

v0023:
    v0004 = v0029;
    v0004 = Lnreverse(nil, v0004);
    v0029 = v0004;
    v0004 = stack[-1];
    if (v0004 == nil) goto v0057;
    v0028 = v0029;
    v0004 = stack[-1];
        popv(3);
        return Lnconc(nil, v0028, v0004);

v0057:
    v0004 = stack[0];
    if (v0004 == nil) { popv(3); return onevalue(v0029); }
    v0028 = v0029;
    v0004 = stack[0];
        popv(3);
        return Lnconc(nil, v0028, v0004);
/* error exit handlers */
v0095:
    popv(3);
    return nil;
}



/* Code for bcint2op */

static Lisp_Object MS_CDECL CC_bcint2op(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0078, v0079, v0208, v0209, v0210;
    Lisp_Object v0001, v0027, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "bcint2op");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0027 = va_arg(aa, Lisp_Object);
    v0001 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for bcint2op");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0001,v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0027,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v0210 = v0001;
    v0208 = v0027;
    v0209 = v0000;
/* end of prologue */
    v0078 = qvalue(elt(env, 1)); /* dmode!* */
    if (v0078 == nil) goto v0051;
    v0078 = qvalue(elt(env, 2)); /* nil */
    goto v0047;

v0047:
    if (v0078 == nil) goto v0023;
    v0079 = v0209;
    v0078 = (Lisp_Object)1; /* 0 */
    if (v0079 == v0078) goto v0211;
    v0078 = v0209;
    v0079 = v0078;
    goto v0212;

v0212:
    v0078 = (Lisp_Object)17; /* 1 */
    popv(1);
    return cons(v0079, v0078);

v0211:
    v0078 = qvalue(elt(env, 2)); /* nil */
    v0079 = v0078;
    goto v0212;

v0023:
    v0078 = nil;
    { popv(1); return onevalue(v0078); }

v0051:
    v0079 = (Lisp_Object)17; /* 1 */
    v0078 = v0209;
    v0078 = qcdr(v0078);
    if (v0079 == v0078) goto v0010;
    v0078 = qvalue(elt(env, 2)); /* nil */
    goto v0047;

v0010:
    v0078 = v0209;
    v0078 = qcar(v0078);
    v0209 = v0078;
    if (is_number(v0078)) goto v0017;
    v0078 = qvalue(elt(env, 2)); /* nil */
    goto v0047;

v0017:
    v0079 = (Lisp_Object)17; /* 1 */
    v0078 = v0208;
    v0078 = qcdr(v0078);
    if (v0079 == v0078) goto v0109;
    v0078 = qvalue(elt(env, 2)); /* nil */
    goto v0047;

v0109:
    v0078 = v0208;
    v0078 = qcar(v0078);
    v0208 = v0078;
    if (is_number(v0078)) goto v0006;
    v0078 = qvalue(elt(env, 2)); /* nil */
    goto v0047;

v0006:
    v0079 = v0210;
    v0078 = elt(env, 3); /* times */
    if (v0079 == v0078) goto v0003;
    v0079 = v0210;
    v0078 = elt(env, 4); /* plus */
    if (v0079 == v0078) goto v0195;
    v0078 = v0210;
    v0079 = v0209;
    v0078 = Lapply2(nil, 3, v0078, v0079, v0208);
    nil = C_nil;
    if (exception_pending()) goto v0213;
    env = stack[0];
    goto v0056;

v0056:
    v0209 = v0078;
    goto v0047;

v0195:
    v0078 = v0209;
    v0079 = v0208;
    v0078 = plus2(v0078, v0079);
    nil = C_nil;
    if (exception_pending()) goto v0213;
    env = stack[0];
    goto v0056;

v0003:
    v0078 = v0209;
    v0079 = v0208;
    v0078 = times2(v0078, v0079);
    nil = C_nil;
    if (exception_pending()) goto v0213;
    env = stack[0];
    goto v0056;
/* error exit handlers */
v0213:
    popv(1);
    return nil;
}



/* Code for quotfm */

static Lisp_Object CC_quotfm(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0010, v0011, v0051;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for quotfm");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0011 = v0027;
    v0051 = v0000;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* !*mcd */
    qvalue(elt(env, 1)) = nil; /* !*mcd */
    v0010 = qvalue(elt(env, 2)); /* t */
    qvalue(elt(env, 1)) = v0010; /* !*mcd */
    v0010 = v0051;
    fn = elt(env, 3); /* quotf */
    v0010 = (*qfn2(fn))(qenv(fn), v0010, v0011);
    nil = C_nil;
    if (exception_pending()) goto v0042;
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*mcd */
    { popv(2); return onevalue(v0010); }
/* error exit handlers */
v0042:
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*mcd */
    popv(2);
    return nil;
}



/* Code for getphystype!*sq */

static Lisp_Object CC_getphystypeHsq(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0016;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for getphystype*sq");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0016 = v0000;
/* end of prologue */
    v0016 = qcar(v0016);
    v0016 = qcar(v0016);
    {
        fn = elt(env, 1); /* getphystypesf */
        return (*qfn1(fn))(qenv(fn), v0016);
    }
}



/* Code for constimes */

static Lisp_Object CC_constimes(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0024, v0025;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for constimes");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0024 = v0000;
/* end of prologue */
    v0025 = v0024;
    v0024 = qvalue(elt(env, 1)); /* nil */
    {
        fn = elt(env, 2); /* cstimes */
        return (*qfn2(fn))(qenv(fn), v0025, v0024);
    }
}



/* Code for fs!:angle!-order */

static Lisp_Object CC_fsTangleKorder(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0204, v0203, v0163;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fs:angle-order");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0027;
    stack[-3] = v0000;
/* end of prologue */
    v0204 = (Lisp_Object)1; /* 0 */
    stack[-4] = v0204;
    v0203 = stack[-3];
    v0204 = (Lisp_Object)33; /* 2 */
    v0204 = *(Lisp_Object *)((char *)v0203 + (CELL-TAG_VECTOR) + ((int32_t)v0204/(16/CELL)));
    stack[-1] = v0204;
    v0203 = stack[-2];
    v0204 = (Lisp_Object)33; /* 2 */
    v0204 = *(Lisp_Object *)((char *)v0203 + (CELL-TAG_VECTOR) + ((int32_t)v0204/(16/CELL)));
    stack[0] = v0204;
    goto v0111;

v0111:
    v0203 = stack[-1];
    v0204 = stack[-4];
    v0163 = *(Lisp_Object *)((char *)v0203 + (CELL-TAG_VECTOR) + ((int32_t)v0204/(16/CELL)));
    v0203 = stack[0];
    v0204 = stack[-4];
    v0204 = *(Lisp_Object *)((char *)v0203 + (CELL-TAG_VECTOR) + ((int32_t)v0204/(16/CELL)));
    v0204 = difference2(v0163, v0204);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-5];
    v0163 = v0204;
    v0203 = v0163;
    v0204 = (Lisp_Object)1; /* 0 */
    if (v0203 == v0204) goto v0020;
    v0203 = v0163;
    v0204 = (Lisp_Object)1; /* 0 */
        popv(6);
        return Lgreaterp(nil, v0203, v0204);

v0020:
    v0204 = stack[-4];
    v0204 = add1(v0204);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-5];
    stack[-4] = v0204;
    v0203 = stack[-4];
    v0204 = (Lisp_Object)129; /* 8 */
    v0204 = (Lisp_Object)lessp2(v0203, v0204);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    v0204 = v0204 ? lisp_true : nil;
    env = stack[-5];
    if (!(v0204 == nil)) goto v0111;
    v0203 = stack[-3];
    v0204 = (Lisp_Object)17; /* 1 */
    v0163 = *(Lisp_Object *)((char *)v0203 + (CELL-TAG_VECTOR) + ((int32_t)v0204/(16/CELL)));
    v0203 = stack[-2];
    v0204 = (Lisp_Object)17; /* 1 */
    v0204 = *(Lisp_Object *)((char *)v0203 + (CELL-TAG_VECTOR) + ((int32_t)v0204/(16/CELL)));
    if (equal(v0163, v0204)) goto v0195;
    v0203 = stack[-3];
    v0204 = (Lisp_Object)17; /* 1 */
    v0203 = *(Lisp_Object *)((char *)v0203 + (CELL-TAG_VECTOR) + ((int32_t)v0204/(16/CELL)));
    v0204 = elt(env, 2); /* sin */
    if (v0203 == v0204) goto v0097;
    v0204 = qvalue(elt(env, 3)); /* t */
    { popv(6); return onevalue(v0204); }

v0097:
    v0204 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0204); }

v0195:
    v0204 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0204); }
/* error exit handlers */
v0079:
    popv(6);
    return nil;
}



/* Code for cali_trace */

static Lisp_Object MS_CDECL CC_cali_trace(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0053;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "cali_trace");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for cali_trace");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* end of prologue */
    v0053 = elt(env, 1); /* cali */
    if (!symbolp(v0053)) v0053 = nil;
    else { v0053 = qfastgets(v0053);
           if (v0053 != nil) { v0053 = elt(v0053, 31); /* trace */
#ifdef RECORD_GET
             if (v0053 != SPID_NOPROP)
                record_get(elt(fastget_names, 31), 1);
             else record_get(elt(fastget_names, 31), 0),
                v0053 = nil; }
           else record_get(elt(fastget_names, 31), 0); }
#else
             if (v0053 == SPID_NOPROP) v0053 = nil; }}
#endif
    return onevalue(v0053);
}



/* Code for pcmult */

static Lisp_Object CC_pcmult(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0190, v0107;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pcmult");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-4] = v0027;
    v0190 = v0000;
/* end of prologue */
    stack[-5] = v0190;
    v0190 = stack[-5];
    if (v0190 == nil) goto v0033;
    v0190 = stack[-5];
    v0190 = qcar(v0190);
    v0107 = v0190;
    stack[0] = qcar(v0107);
    v0107 = stack[-4];
    v0190 = qcdr(v0190);
    fn = elt(env, 2); /* cprod */
    v0190 = (*qfn2(fn))(qenv(fn), v0107, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0014;
    env = stack[-6];
    v0190 = cons(stack[0], v0190);
    nil = C_nil;
    if (exception_pending()) goto v0014;
    env = stack[-6];
    v0190 = ncons(v0190);
    nil = C_nil;
    if (exception_pending()) goto v0014;
    env = stack[-6];
    stack[-2] = v0190;
    stack[-3] = v0190;
    goto v0022;

v0022:
    v0190 = stack[-5];
    v0190 = qcdr(v0190);
    stack[-5] = v0190;
    v0190 = stack[-5];
    if (v0190 == nil) { Lisp_Object res = stack[-3]; popv(7); return onevalue(res); }
    stack[-1] = stack[-2];
    v0190 = stack[-5];
    v0190 = qcar(v0190);
    v0107 = v0190;
    stack[0] = qcar(v0107);
    v0107 = stack[-4];
    v0190 = qcdr(v0190);
    fn = elt(env, 2); /* cprod */
    v0190 = (*qfn2(fn))(qenv(fn), v0107, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0014;
    env = stack[-6];
    v0190 = cons(stack[0], v0190);
    nil = C_nil;
    if (exception_pending()) goto v0014;
    env = stack[-6];
    v0190 = ncons(v0190);
    nil = C_nil;
    if (exception_pending()) goto v0014;
    env = stack[-6];
    v0190 = Lrplacd(nil, stack[-1], v0190);
    nil = C_nil;
    if (exception_pending()) goto v0014;
    env = stack[-6];
    v0190 = stack[-2];
    v0190 = qcdr(v0190);
    stack[-2] = v0190;
    goto v0022;

v0033:
    v0190 = qvalue(elt(env, 1)); /* nil */
    { popv(7); return onevalue(v0190); }
/* error exit handlers */
v0014:
    popv(7);
    return nil;
}



/* Code for pkp */

static Lisp_Object CC_pkp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0222, v0223, v0197;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pkp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0000;
/* end of prologue */
    stack[-3] = nil;
    v0222 = stack[0];
    if (!consp(v0222)) goto v0026;
    v0222 = qvalue(elt(env, 2)); /* !*ppacked */
    v0222 = (v0222 == nil ? lisp_true : nil);
    goto v0033;

v0033:
    if (!(v0222 == nil)) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    v0222 = stack[0];
    v0223 = Llength(nil, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0224;
    env = stack[-4];
    v0222 = (Lisp_Object)161; /* 10 */
    v0222 = (Lisp_Object)geq2(v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0224;
    v0222 = v0222 ? lisp_true : nil;
    env = stack[-4];
    stack[-2] = v0222;
    v0222 = stack[0];
    stack[-1] = v0222;
    goto v0189;

v0189:
    v0222 = stack[-1];
    if (v0222 == nil) goto v0111;
    v0222 = stack[-1];
    v0222 = qcar(v0222);
    stack[0] = v0222;
    v0222 = stack[-2];
    if (v0222 == nil) goto v0079;
    v0223 = stack[0];
    v0222 = (Lisp_Object)161; /* 10 */
    v0222 = (Lisp_Object)lessp2(v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0224;
    v0222 = v0222 ? lisp_true : nil;
    env = stack[-4];
    if (v0222 == nil) goto v0195;
    v0223 = stack[0];
    v0222 = qvalue(elt(env, 4)); /* diglist!* */
    fn = elt(env, 6); /* dssoc */
    v0222 = (*qfn2(fn))(qenv(fn), v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0224;
    env = stack[-4];
    v0197 = qcar(v0222);
    v0223 = elt(env, 5); /* !0 */
    v0222 = stack[-3];
    v0222 = list2star(v0197, v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0224;
    env = stack[-4];
    stack[-3] = v0222;
    goto v0171;

v0171:
    v0222 = stack[-1];
    v0222 = qcdr(v0222);
    stack[-1] = v0222;
    goto v0189;

v0195:
    v0223 = stack[0];
    v0222 = (Lisp_Object)161; /* 10 */
    v0222 = Ldivide(nil, v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0224;
    env = stack[-4];
    stack[0] = v0222;
    v0222 = stack[0];
    v0223 = qcar(v0222);
    v0222 = qvalue(elt(env, 4)); /* diglist!* */
    fn = elt(env, 6); /* dssoc */
    v0222 = (*qfn2(fn))(qenv(fn), v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0224;
    env = stack[-4];
    v0223 = qcar(v0222);
    v0222 = stack[-3];
    v0222 = cons(v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0224;
    env = stack[-4];
    stack[-3] = v0222;
    v0222 = stack[0];
    v0223 = qcdr(v0222);
    v0222 = qvalue(elt(env, 4)); /* diglist!* */
    fn = elt(env, 6); /* dssoc */
    v0222 = (*qfn2(fn))(qenv(fn), v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0224;
    env = stack[-4];
    v0223 = qcar(v0222);
    v0222 = stack[-3];
    v0222 = cons(v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0224;
    env = stack[-4];
    stack[-3] = v0222;
    goto v0171;

v0079:
    v0223 = stack[0];
    v0222 = qvalue(elt(env, 4)); /* diglist!* */
    fn = elt(env, 6); /* dssoc */
    v0222 = (*qfn2(fn))(qenv(fn), v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0224;
    env = stack[-4];
    v0223 = qcar(v0222);
    v0222 = stack[-3];
    v0222 = cons(v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0224;
    env = stack[-4];
    stack[-3] = v0222;
    goto v0171;

v0111:
    v0222 = stack[-3];
    v0222 = Lnreverse(nil, v0222);
        popv(5);
        return Lcompress(nil, v0222);

v0026:
    v0222 = qvalue(elt(env, 1)); /* t */
    goto v0033;
/* error exit handlers */
v0224:
    popv(5);
    return nil;
}



/* Code for fkern */

static Lisp_Object CC_fkern(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0215, v0216, v0084;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fkern");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0000;
/* end of prologue */
    v0215 = stack[-1];
    if (!consp(v0215)) goto v0033;
    v0215 = stack[-1];
    v0215 = qcar(v0215);
    if (!symbolp(v0215)) v0215 = nil;
    else { v0215 = qfastgets(v0215);
           if (v0215 != nil) { v0215 = elt(v0215, 38); /* fkernfn */
#ifdef RECORD_GET
             if (v0215 != SPID_NOPROP)
                record_get(elt(fastget_names, 38), 1);
             else record_get(elt(fastget_names, 38), 0),
                v0215 = nil; }
           else record_get(elt(fastget_names, 38), 0); }
#else
             if (v0215 == SPID_NOPROP) v0215 = nil; }}
#endif
    stack[-2] = v0215;
    if (v0215 == nil) goto v0023;
    v0216 = stack[-2];
    v0215 = stack[-1];
        popv(4);
        return Lapply1(nil, v0216, v0215);

v0023:
    v0215 = stack[-1];
    v0215 = qcar(v0215);
    if (!consp(v0215)) goto v0189;
    v0215 = qvalue(elt(env, 2)); /* exlist!* */
    goto v0111;

v0111:
    stack[0] = v0215;
    v0216 = stack[-1];
    v0215 = stack[0];
    v0215 = Lassoc(nil, v0216, v0215);
    stack[-2] = v0215;
    if (!(v0215 == nil)) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v0216 = stack[-1];
    v0215 = qvalue(elt(env, 1)); /* nil */
    v0215 = list2(v0216, v0215);
    nil = C_nil;
    if (exception_pending()) goto v0160;
    env = stack[-3];
    stack[-2] = v0215;
    v0216 = stack[-2];
    v0215 = stack[0];
    fn = elt(env, 5); /* ordad */
    v0215 = (*qfn2(fn))(qenv(fn), v0216, v0215);
    nil = C_nil;
    if (exception_pending()) goto v0160;
    env = stack[-3];
    stack[0] = v0215;
    v0215 = stack[-1];
    v0215 = qcar(v0215);
    if (!consp(v0215)) goto v0194;
    v0215 = stack[0];
    qvalue(elt(env, 2)) = v0215; /* exlist!* */
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }

v0194:
    v0215 = stack[-1];
    v0215 = qcar(v0215);
    v0216 = ncons(v0215);
    nil = C_nil;
    if (exception_pending()) goto v0160;
    env = stack[-3];
    v0215 = qvalue(elt(env, 3)); /* kprops!* */
    fn = elt(env, 6); /* union */
    v0215 = (*qfn2(fn))(qenv(fn), v0216, v0215);
    nil = C_nil;
    if (exception_pending()) goto v0160;
    env = stack[-3];
    qvalue(elt(env, 3)) = v0215; /* kprops!* */
    v0215 = stack[-1];
    v0084 = qcar(v0215);
    v0216 = elt(env, 4); /* klist */
    v0215 = stack[0];
    v0215 = Lputprop(nil, 3, v0084, v0216, v0215);
    nil = C_nil;
    if (exception_pending()) goto v0160;
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }

v0189:
    v0215 = stack[-1];
    v0215 = qcar(v0215);
    if (!symbolp(v0215)) v0215 = nil;
    else { v0215 = qfastgets(v0215);
           if (v0215 != nil) { v0215 = elt(v0215, 24); /* klist */
#ifdef RECORD_GET
             if (v0215 != SPID_NOPROP)
                record_get(elt(fastget_names, 24), 1);
             else record_get(elt(fastget_names, 24), 0),
                v0215 = nil; }
           else record_get(elt(fastget_names, 24), 0); }
#else
             if (v0215 == SPID_NOPROP) v0215 = nil; }}
#endif
    goto v0111;

v0033:
    v0215 = stack[-1];
    v0216 = qvalue(elt(env, 1)); /* nil */
    popv(4);
    return list2(v0215, v0216);
/* error exit handlers */
v0160:
    popv(4);
    return nil;
}



/* Code for gcdfd */

static Lisp_Object CC_gcdfd(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0043, v0037, v0036;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for gcdfd");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0037 = v0027;
    v0036 = v0000;
/* end of prologue */
    v0043 = qvalue(elt(env, 1)); /* dmode!* */
    if (!symbolp(v0043)) v0043 = nil;
    else { v0043 = qfastgets(v0043);
           if (v0043 != nil) { v0043 = elt(v0043, 3); /* field */
#ifdef RECORD_GET
             if (v0043 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v0043 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v0043 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v0043 == SPID_NOPROP) v0043 = nil; else v0043 = lisp_true; }}
#endif
    if (v0043 == nil) goto v0026;
    v0043 = (Lisp_Object)17; /* 1 */
    return onevalue(v0043);

v0026:
    v0043 = v0036;
    {
        fn = elt(env, 2); /* gcdfd1 */
        return (*qfn2(fn))(qenv(fn), v0043, v0037);
    }
}



/* Code for monomcomparedegrevlex */

static Lisp_Object CC_monomcomparedegrevlex(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0200, v0073, v0099;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for monomcomparedegrevlex");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0027;
    stack[-1] = v0000;
/* end of prologue */
    v0200 = (Lisp_Object)1; /* 0 */
    stack[-2] = v0200;
    v0073 = stack[-1];
    v0200 = (Lisp_Object)1; /* 0 */
    v0099 = *(Lisp_Object *)((char *)v0073 + (CELL-TAG_VECTOR) + ((int32_t)v0200/(16/CELL)));
    v0073 = stack[0];
    v0200 = (Lisp_Object)1; /* 0 */
    v0200 = *(Lisp_Object *)((char *)v0073 + (CELL-TAG_VECTOR) + ((int32_t)v0200/(16/CELL)));
    v0200 = (Lisp_Object)greaterp2(v0099, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0225;
    v0200 = v0200 ? lisp_true : nil;
    env = stack[-3];
    if (v0200 == nil) goto v0170;
    v0200 = (Lisp_Object)17; /* 1 */
    stack[-2] = v0200;
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }

v0170:
    v0073 = stack[-1];
    v0200 = (Lisp_Object)1; /* 0 */
    v0099 = *(Lisp_Object *)((char *)v0073 + (CELL-TAG_VECTOR) + ((int32_t)v0200/(16/CELL)));
    v0073 = stack[0];
    v0200 = (Lisp_Object)1; /* 0 */
    v0200 = *(Lisp_Object *)((char *)v0073 + (CELL-TAG_VECTOR) + ((int32_t)v0200/(16/CELL)));
    v0200 = (Lisp_Object)lessp2(v0099, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0225;
    v0200 = v0200 ? lisp_true : nil;
    env = stack[-3];
    if (v0200 == nil) goto v0206;
    v0200 = (Lisp_Object)-15; /* -1 */
    stack[-2] = v0200;
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }

v0206:
    v0073 = stack[-1];
    v0200 = (Lisp_Object)17; /* 1 */
    v0200 = *(Lisp_Object *)((char *)v0073 + (CELL-TAG_VECTOR) + ((int32_t)v0200/(16/CELL)));
    stack[-1] = v0200;
    v0073 = stack[0];
    v0200 = (Lisp_Object)17; /* 1 */
    v0200 = *(Lisp_Object *)((char *)v0073 + (CELL-TAG_VECTOR) + ((int32_t)v0200/(16/CELL)));
    stack[0] = v0200;
    goto v0014;

v0014:
    v0200 = stack[-1];
    v0200 = qcar(v0200);
    if (v0200 == nil) goto v0013;
    v0200 = stack[-1];
    v0073 = qcar(v0200);
    v0200 = stack[0];
    v0200 = qcar(v0200);
    v0200 = (Lisp_Object)lessp2(v0073, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0225;
    v0200 = v0200 ? lisp_true : nil;
    env = stack[-3];
    if (v0200 == nil) goto v0201;
    v0200 = (Lisp_Object)17; /* 1 */
    stack[-2] = v0200;
    v0200 = qvalue(elt(env, 1)); /* nil */
    v0200 = ncons(v0200);
    nil = C_nil;
    if (exception_pending()) goto v0225;
    env = stack[-3];
    stack[-1] = v0200;
    goto v0014;

v0201:
    v0200 = stack[-1];
    v0073 = qcar(v0200);
    v0200 = stack[0];
    v0200 = qcar(v0200);
    v0200 = (Lisp_Object)greaterp2(v0073, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0225;
    v0200 = v0200 ? lisp_true : nil;
    env = stack[-3];
    if (v0200 == nil) goto v0226;
    v0200 = (Lisp_Object)-15; /* -1 */
    stack[-2] = v0200;
    v0200 = qvalue(elt(env, 1)); /* nil */
    v0200 = ncons(v0200);
    nil = C_nil;
    if (exception_pending()) goto v0225;
    env = stack[-3];
    stack[-1] = v0200;
    goto v0014;

v0226:
    v0200 = stack[-1];
    v0200 = qcdr(v0200);
    stack[-1] = v0200;
    v0200 = stack[0];
    v0200 = qcdr(v0200);
    stack[0] = v0200;
    goto v0014;

v0013:
    v0200 = stack[0];
    v0200 = qcar(v0200);
    if (!(v0200 == nil)) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v0200 = (Lisp_Object)1; /* 0 */
    stack[-2] = v0200;
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
/* error exit handlers */
v0225:
    popv(4);
    return nil;
}



/* Code for rmultpf */

static Lisp_Object CC_rmultpf(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0039, v0192;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rmultpf");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0027;
    stack[-2] = v0000;
/* end of prologue */
    stack[-3] = nil;
    goto v0016;

v0016:
    v0039 = stack[-1];
    if (v0039 == nil) goto v0047;
    v0039 = stack[-1];
    if (!consp(v0039)) goto v0036;
    v0039 = stack[-1];
    v0039 = qcar(v0039);
    v0039 = (consp(v0039) ? nil : lisp_true);
    goto v0037;

v0037:
    if (v0039 == nil) goto v0018;
    v0039 = qvalue(elt(env, 1)); /* t */
    goto v0051;

v0051:
    if (v0039 == nil) goto v0206;
    stack[0] = stack[-3];
    v0192 = stack[-2];
    v0039 = stack[-1];
    v0039 = cons(v0192, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0176;
    env = stack[-4];
    v0039 = ncons(v0039);
    nil = C_nil;
    if (exception_pending()) goto v0176;
    env = stack[-4];
    {
        Lisp_Object v0227 = stack[0];
        popv(5);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v0227, v0039);
    }

v0206:
    v0039 = stack[-1];
    v0039 = qcar(v0039);
    stack[0] = qcar(v0039);
    v0192 = stack[-2];
    v0039 = stack[-1];
    v0039 = qcar(v0039);
    v0039 = qcdr(v0039);
    v0192 = CC_rmultpf(env, v0192, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0176;
    env = stack[-4];
    v0039 = stack[-3];
    v0039 = acons(stack[0], v0192, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0176;
    env = stack[-4];
    stack[-3] = v0039;
    v0039 = stack[-1];
    v0039 = qcdr(v0039);
    stack[-1] = v0039;
    goto v0016;

v0018:
    v0039 = stack[-2];
    v0192 = qcar(v0039);
    v0039 = stack[-1];
    v0039 = qcar(v0039);
    v0039 = qcar(v0039);
    v0039 = qcar(v0039);
    fn = elt(env, 3); /* reordop */
    v0039 = (*qfn2(fn))(qenv(fn), v0192, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0176;
    env = stack[-4];
    goto v0051;

v0036:
    v0039 = qvalue(elt(env, 1)); /* t */
    goto v0037;

v0047:
    v0039 = stack[-3];
    {
        popv(5);
        fn = elt(env, 2); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0039);
    }
/* error exit handlers */
v0176:
    popv(5);
    return nil;
}



/* Code for mtchp */

static Lisp_Object MS_CDECL CC_mtchp(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0228, v0199, v0204, v0203;
    Lisp_Object fn;
    Lisp_Object v0050, v0053, v0001, v0027, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 5, "mtchp");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0027 = va_arg(aa, Lisp_Object);
    v0001 = va_arg(aa, Lisp_Object);
    v0053 = va_arg(aa, Lisp_Object);
    v0050 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mtchp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push5(v0050,v0053,v0001,v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop5(v0000,v0027,v0001,v0053,v0050);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0050;
    v0228 = v0053;
    stack[-1] = v0001;
    stack[-2] = v0027;
    stack[-3] = v0000;
/* end of prologue */
    v0203 = stack[-3];
    v0204 = stack[-2];
    v0199 = v0228;
    v0228 = stack[0];
    fn = elt(env, 2); /* mtchp1 */
    v0228 = (*qfnn(fn))(qenv(fn), 4, v0203, v0204, v0199, v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    stack[-4] = v0228;
    goto v0047;

v0047:
    v0228 = stack[-4];
    if (v0228 == nil) goto v0007;
    v0228 = stack[-4];
    v0199 = qcar(v0228);
    v0228 = stack[0];
    v0228 = Lsubla(nil, v0199, v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    fn = elt(env, 3); /* lispeval */
    v0228 = (*qfn1(fn))(qenv(fn), v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    if (v0228 == nil) goto v0009;
    v0228 = stack[-3];
    stack[0] = qcdr(v0228);
    v0228 = stack[-4];
    v0199 = qcar(v0228);
    v0228 = stack[-2];
    v0228 = qcdr(v0228);
    v0228 = Lsubla(nil, v0199, v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    v0228 = Ldivide(nil, stack[0], v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    stack[-2] = v0228;
    v0228 = stack[-4];
    v0199 = qcar(v0228);
    v0228 = stack[-1];
    v0228 = Lsubla(nil, v0199, v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    fn = elt(env, 4); /* simp */
    v0199 = (*qfn1(fn))(qenv(fn), v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    v0228 = stack[-2];
    v0228 = qcar(v0228);
    fn = elt(env, 5); /* exptsq */
    v0228 = (*qfn2(fn))(qenv(fn), v0199, v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    stack[-1] = v0228;
    v0228 = stack[-2];
    v0199 = qcdr(v0228);
    v0228 = (Lisp_Object)1; /* 0 */
    if (v0199 == v0228) { Lisp_Object res = stack[-1]; popv(6); return onevalue(res); }
    v0228 = stack[-3];
    v0199 = qcar(v0228);
    v0228 = stack[-2];
    v0228 = qcdr(v0228);
    fn = elt(env, 6); /* to */
    v0199 = (*qfn2(fn))(qenv(fn), v0199, v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    v0228 = (Lisp_Object)17; /* 1 */
    v0228 = cons(v0199, v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    v0199 = ncons(v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    v0228 = (Lisp_Object)17; /* 1 */
    v0199 = cons(v0199, v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    v0228 = stack[-1];
    fn = elt(env, 7); /* multsq */
    v0228 = (*qfn2(fn))(qenv(fn), v0199, v0228);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    stack[-1] = v0228;
    { Lisp_Object res = stack[-1]; popv(6); return onevalue(res); }

v0009:
    v0228 = stack[-4];
    v0228 = qcdr(v0228);
    stack[-4] = v0228;
    goto v0047;

v0007:
    v0228 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0228); }
/* error exit handlers */
v0078:
    popv(6);
    return nil;
}



/* Code for subs2q */

static Lisp_Object CC_subs2q(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0191, v0229, v0176, v0227;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for subs2q");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0000;
/* end of prologue */

v0196:
    v0191 = stack[-2];
    v0229 = qcar(v0191);
    v0191 = stack[-2];
    v0191 = qcdr(v0191);
    stack[-3] = v0229;
    stack[-1] = v0191;
    v0191 = stack[-3];
    fn = elt(env, 2); /* subs2f */
    stack[0] = (*qfn1(fn))(qenv(fn), v0191);
    nil = C_nil;
    if (exception_pending()) goto v0168;
    env = stack[-4];
    v0191 = stack[-1];
    fn = elt(env, 2); /* subs2f */
    v0191 = (*qfn1(fn))(qenv(fn), v0191);
    nil = C_nil;
    if (exception_pending()) goto v0168;
    env = stack[-4];
    v0227 = stack[0];
    v0176 = v0191;
    v0191 = v0227;
    v0229 = qcdr(v0191);
    v0191 = (Lisp_Object)17; /* 1 */
    if (v0229 == v0191) goto v0035;
    v0191 = qvalue(elt(env, 1)); /* nil */
    goto v0042;

v0042:
    if (v0191 == nil) goto v0038;
    v0191 = v0227;
    v0229 = qcar(v0191);
    v0191 = stack[-3];
    if (equal(v0229, v0191)) goto v0031;
    v0191 = qvalue(elt(env, 1)); /* nil */
    goto v0193;

v0193:
    if (!(v0191 == nil)) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v0191 = v0227;
    v0229 = v0176;
    {
        popv(5);
        fn = elt(env, 3); /* quotsq */
        return (*qfn2(fn))(qenv(fn), v0191, v0229);
    }

v0031:
    v0191 = v0176;
    v0229 = qcar(v0191);
    v0191 = stack[-1];
    v0191 = (equal(v0229, v0191) ? lisp_true : nil);
    goto v0193;

v0038:
    v0191 = v0227;
    v0229 = v0176;
    fn = elt(env, 3); /* quotsq */
    v0191 = (*qfn2(fn))(qenv(fn), v0191, v0229);
    nil = C_nil;
    if (exception_pending()) goto v0168;
    env = stack[-4];
    stack[-2] = v0191;
    goto v0196;

v0035:
    v0191 = v0176;
    v0229 = qcdr(v0191);
    v0191 = (Lisp_Object)17; /* 1 */
    v0191 = (v0229 == v0191 ? lisp_true : nil);
    goto v0042;
/* error exit handlers */
v0168:
    popv(5);
    return nil;
}



/* Code for qqe_btidp */

static Lisp_Object CC_qqe_btidp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0025, v0033;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for qqe_btidp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0025 = v0000;
/* end of prologue */
    if (!symbolp(v0025)) v0025 = nil;
    else { v0025 = qfastgets(v0025);
           if (v0025 != nil) { v0025 = elt(v0025, 10); /* idtype */
#ifdef RECORD_GET
             if (v0025 != SPID_NOPROP)
                record_get(elt(fastget_names, 10), 1);
             else record_get(elt(fastget_names, 10), 0),
                v0025 = nil; }
           else record_get(elt(fastget_names, 10), 0); }
#else
             if (v0025 == SPID_NOPROP) v0025 = nil; }}
#endif
    v0033 = elt(env, 1); /* bt */
    v0025 = (v0025 == v0033 ? lisp_true : nil);
    return onevalue(v0025);
}



/* Code for prepsq */

static Lisp_Object CC_prepsq(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0042, v0043;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for prepsq");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0043 = v0000;
/* end of prologue */
    v0042 = v0043;
    v0042 = qcar(v0042);
    if (v0042 == nil) goto v0050;
    v0042 = elt(env, 1); /* prepf */
    {
        fn = elt(env, 2); /* sqform */
        return (*qfn2(fn))(qenv(fn), v0043, v0042);
    }

v0050:
    v0042 = (Lisp_Object)1; /* 0 */
    return onevalue(v0042);
}



/* Code for ps!:order */

static Lisp_Object CC_psTorder(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0207, v0057, v0170;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ps:order");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0170 = v0000;
/* end of prologue */
    v0207 = v0170;
    if (!consp(v0207)) goto v0022;
    v0207 = v0170;
    v0057 = qcar(v0207);
    v0207 = elt(env, 2); /* !:ps!: */
    if (v0057 == v0207) goto v0034;
    v0207 = v0170;
    v0207 = qcar(v0207);
    if (!symbolp(v0207)) v0207 = nil;
    else { v0207 = qfastgets(v0207);
           if (v0207 != nil) { v0207 = elt(v0207, 8); /* dname */
#ifdef RECORD_GET
             if (v0207 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v0207 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v0207 == SPID_NOPROP) v0207 = nil; }}
#endif
    goto v0023;

v0023:
    if (v0207 == nil) goto v0109;
    v0207 = (Lisp_Object)1; /* 0 */
    return onevalue(v0207);

v0109:
    v0057 = v0170;
    v0207 = (Lisp_Object)1; /* 0 */
    {
        fn = elt(env, 4); /* ps!:getv */
        return (*qfn2(fn))(qenv(fn), v0057, v0207);
    }

v0034:
    v0207 = qvalue(elt(env, 3)); /* nil */
    goto v0023;

v0022:
    v0207 = qvalue(elt(env, 1)); /* t */
    goto v0023;
}



/* Code for negsq */

static Lisp_Object CC_negsq(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0026, v0054;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for negsq");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0000;
/* end of prologue */
    v0026 = stack[0];
    v0026 = qcar(v0026);
    fn = elt(env, 1); /* negf */
    v0054 = (*qfn1(fn))(qenv(fn), v0026);
    nil = C_nil;
    if (exception_pending()) goto v0011;
    v0026 = stack[0];
    v0026 = qcdr(v0026);
    popv(1);
    return cons(v0054, v0026);
/* error exit handlers */
v0011:
    popv(1);
    return nil;
}



/* Code for !*physopp!* */

static Lisp_Object CC_HphysoppH(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0047;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for *physopp*");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0000;
/* end of prologue */
    v0047 = stack[0];
    fn = elt(env, 1); /* physopp!* */
    v0047 = (*qfn1(fn))(qenv(fn), v0047);
    nil = C_nil;
    if (exception_pending()) goto v0025;
    env = stack[-1];
    if (!(v0047 == nil)) { popv(2); return onevalue(v0047); }
    v0047 = stack[0];
    {
        popv(2);
        fn = elt(env, 2); /* getphystype */
        return (*qfn1(fn))(qenv(fn), v0047);
    }
/* error exit handlers */
v0025:
    popv(2);
    return nil;
}



/* Code for errorset!* */

static Lisp_Object CC_errorsetH(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0054, v0010, v0011;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for errorset*");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0054 = v0027;
    v0010 = v0000;
/* end of prologue */
    v0011 = v0010;
    v0010 = v0054;
    v0054 = qvalue(elt(env, 1)); /* !*backtrace */
    {
        fn = elt(env, 2); /* errorset */
        return (*qfnn(fn))(qenv(fn), 3, v0011, v0010, v0054);
    }
}



/* Code for arraychk */

static Lisp_Object CC_arraychk(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0025;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for arraychk");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0025 = v0000;
/* end of prologue */
    if (v0025 == nil) goto v0050;
    v0025 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0025);

v0050:
    v0025 = elt(env, 1); /* array */
    return onevalue(v0025);
}



/* Code for fs!:timesterm */

static Lisp_Object CC_fsTtimesterm(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0032, v0002, v0020;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fs:timesterm");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0027;
    stack[-1] = v0000;
/* end of prologue */
    v0032 = stack[0];
    if (v0032 == nil) goto v0045;
    v0032 = stack[-1];
    if (v0032 == nil) goto v0047;
    v0002 = stack[-1];
    v0032 = stack[0];
    fn = elt(env, 2); /* fs!:timestermterm */
    v0032 = (*qfn2(fn))(qenv(fn), v0002, v0032);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-3];
    stack[-2] = v0032;
    v0020 = stack[-1];
    v0002 = stack[0];
    v0032 = (Lisp_Object)49; /* 3 */
    v0032 = *(Lisp_Object *)((char *)v0002 + (CELL-TAG_VECTOR) + ((int32_t)v0032/(16/CELL)));
    v0032 = CC_fsTtimesterm(env, v0020, v0032);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-3];
    {
        Lisp_Object v0055 = stack[-2];
        popv(4);
        fn = elt(env, 3); /* fs!:plus */
        return (*qfn2(fn))(qenv(fn), v0055, v0032);
    }

v0047:
    v0032 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v0032); }

v0045:
    v0032 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v0032); }
/* error exit handlers */
v0059:
    popv(4);
    return nil;
}



/* Code for bas_rep */

static Lisp_Object CC_bas_rep(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0024, v0025;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for bas_rep");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0024 = v0000;
/* end of prologue */
    v0025 = v0024;
    v0024 = (Lisp_Object)81; /* 5 */
    {
        fn = elt(env, 1); /* nth */
        return (*qfn2(fn))(qenv(fn), v0025, v0024);
    }
}



/* Code for !:minus */

static Lisp_Object CC_Tminus(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0218, v0060, v0058;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for :minus");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v0060 = v0000;
/* end of prologue */
    v0218 = v0060;
    if (v0218 == nil) goto v0050;
    v0218 = v0060;
    if (!consp(v0218)) goto v0022;
    v0218 = v0060;
    v0058 = qcar(v0218);
    v0218 = elt(env, 2); /* minus */
    v0218 = get(v0058, v0218);
    env = stack[0];
    v0058 = v0218;
    v0218 = v0058;
    if (v0218 == nil) goto v0044;
    v0218 = v0058;
        popv(1);
        return Lapply1(nil, v0218, v0060);

v0044:
    v0058 = v0060;
    v0060 = (Lisp_Object)-15; /* -1 */
    v0218 = elt(env, 3); /* times */
    {
        popv(1);
        fn = elt(env, 4); /* dcombine */
        return (*qfnn(fn))(qenv(fn), 3, v0058, v0060, v0218);
    }

v0022:
    v0218 = v0060;
    popv(1);
    return negate(v0218);

v0050:
    v0218 = qvalue(elt(env, 1)); /* nil */
    { popv(1); return onevalue(v0218); }
}



/* Code for rev */

static Lisp_Object CC_rev(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0007, v0008, v0034;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rev");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0007 = v0027;
    v0008 = v0000;
/* end of prologue */

v0016:
    v0034 = v0008;
    if (v0034 == nil) { popv(2); return onevalue(v0007); }
    v0034 = v0008;
    v0034 = qcdr(v0034);
    stack[0] = v0034;
    v0008 = qcar(v0008);
    v0007 = cons(v0008, v0007);
    nil = C_nil;
    if (exception_pending()) goto v0040;
    env = stack[-1];
    v0008 = stack[0];
    goto v0016;
/* error exit handlers */
v0040:
    popv(2);
    return nil;
}



/* Code for !*!*s2a */

static Lisp_Object CC_HHs2a(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object v0050, v0045;
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for **s2a");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0050 = v0027;
    v0045 = v0000;
/* end of prologue */
    return onevalue(v0045);
}



/* Code for lto_insertq */

static Lisp_Object CC_lto_insertq(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0009, v0007, v0008, v0034;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lto_insertq");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0007 = v0027;
    v0008 = v0000;
/* end of prologue */
    v0034 = v0008;
    v0009 = v0007;
    v0009 = Lmemq(nil, v0034, v0009);
    if (!(v0009 == nil)) return onevalue(v0007);
    v0009 = v0008;
    return cons(v0009, v0007);
}



/* Code for lnc */

static Lisp_Object CC_lnc(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0035, v0040;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lnc");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0035 = v0000;
/* end of prologue */

v0050:
    v0040 = v0035;
    if (v0040 == nil) goto v0023;
    v0040 = v0035;
    if (!consp(v0040)) goto v0010;
    v0040 = v0035;
    v0040 = qcar(v0040);
    v0040 = (consp(v0040) ? nil : lisp_true);
    goto v0054;

v0054:
    if (!(v0040 == nil)) return onevalue(v0035);
    v0035 = qcar(v0035);
    v0035 = qcdr(v0035);
    goto v0050;

v0010:
    v0040 = qvalue(elt(env, 1)); /* t */
    goto v0054;

v0023:
    v0035 = (Lisp_Object)1; /* 0 */
    return onevalue(v0035);
}



/* Code for qqe_mk2 */

static Lisp_Object MS_CDECL CC_qqe_mk2(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0010, v0011, v0051;
    Lisp_Object v0001, v0027, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "qqe_mk2");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0027 = va_arg(aa, Lisp_Object);
    v0001 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for qqe_mk2");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0010 = v0001;
    v0011 = v0027;
    v0051 = v0000;
/* end of prologue */
    return list3(v0051, v0011, v0010);
}



/* Code for lex */

static Lisp_Object MS_CDECL CC_lex(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0015, v0188;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "lex");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lex");
#endif
#ifdef CHECK_STACK
    if_check_stack;
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
    v0015 = qvalue(elt(env, 2)); /* atts */
    if (v0015 == nil) goto v0016;
    v0015 = qvalue(elt(env, 2)); /* atts */
    qvalue(elt(env, 3)) = v0015; /* safe_atts */
    goto v0016;

v0016:
    v0015 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 2)) = v0015; /* atts */
    v0188 = qvalue(elt(env, 4)); /* ch */
    v0015 = qvalue(elt(env, 5)); /* !$eof!$ */
    if (equal(v0188, v0015)) goto v0026;
    v0188 = qvalue(elt(env, 4)); /* ch */
    v0015 = qvalue(elt(env, 6)); /* space */
    if (equal(v0188, v0015)) goto v0110;
    v0188 = qvalue(elt(env, 4)); /* ch */
    v0015 = elt(env, 7); /* !< */
    if (v0188 == v0015) goto v0020;
    fn = elt(env, 10); /* get_content */
    v0015 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-1];
    qvalue(elt(env, 8)) = v0015; /* char */
    goto v0049;

v0049:
    v0015 = qvalue(elt(env, 8)); /* char */
    if (v0015 == nil) goto v0013;
    v0015 = qvalue(elt(env, 9)); /* count */
    v0015 = add1(v0015);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-1];
    qvalue(elt(env, 9)) = v0015; /* count */
    v0015 = qvalue(elt(env, 8)); /* char */
    v0015 = Lreverse(nil, v0015);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-1];
    stack[0] = v0015;
    v0015 = stack[0];
    fn = elt(env, 11); /* butes */
    v0015 = (*qfn1(fn))(qenv(fn), v0015);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-1];
    qvalue(elt(env, 8)) = v0015; /* char */
    v0188 = qvalue(elt(env, 8)); /* char */
    v0015 = stack[0];
    fn = elt(env, 12); /* attributes */
    v0015 = (*qfn2(fn))(qenv(fn), v0188, v0015);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    goto v0026;

v0026:
    v0015 = nil;
    { popv(2); return onevalue(v0015); }

v0013:
    v0015 = CC_lex(env, 0);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    goto v0026;

v0020:
    fn = elt(env, 13); /* get_token */
    v0015 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-1];
    qvalue(elt(env, 8)) = v0015; /* char */
    goto v0049;

v0110:
    v0188 = Lreadch(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-1];
    qvalue(elt(env, 4)) = v0188; /* ch */
    v0015 = qvalue(elt(env, 6)); /* space */
    if (equal(v0188, v0015)) goto v0110;
    else goto v0049;
/* error exit handlers */
v0192:
    popv(2);
    return nil;
}



/* Code for replus1 */

static Lisp_Object CC_replus1(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0060, v0058, v0059;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for replus1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0059 = v0000;
/* end of prologue */
    v0060 = v0059;
    if (v0060 == nil) goto v0050;
    v0060 = v0059;
    if (!consp(v0060)) goto v0033;
    v0058 = v0059;
    v0060 = elt(env, 2); /* plus */
    if (!consp(v0058)) goto v0104;
    v0058 = qcar(v0058);
    if (!(v0058 == v0060)) goto v0104;
    v0060 = v0059;
    v0060 = qcdr(v0060);
    goto v0025;

v0025:
    if (!(v0060 == nil)) return onevalue(v0059);
    v0060 = v0059;
    v0060 = qcdr(v0060);
    if (v0060 == nil) goto v0109;
    v0060 = elt(env, 2); /* plus */
    v0058 = v0059;
    return cons(v0060, v0058);

v0109:
    v0060 = v0059;
    v0060 = qcar(v0060);
    return onevalue(v0060);

v0104:
    v0060 = qvalue(elt(env, 3)); /* nil */
    goto v0025;

v0033:
    v0060 = qvalue(elt(env, 1)); /* t */
    goto v0025;

v0050:
    v0060 = (Lisp_Object)1; /* 0 */
    return onevalue(v0060);
}



/* Code for ps!:last!-term */

static Lisp_Object CC_psTlastKterm(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0207, v0057, v0170;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ps:last-term");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0170 = v0000;
/* end of prologue */
    v0207 = v0170;
    if (!consp(v0207)) goto v0022;
    v0207 = v0170;
    v0057 = qcar(v0207);
    v0207 = elt(env, 2); /* !:ps!: */
    if (v0057 == v0207) goto v0034;
    v0207 = v0170;
    v0207 = qcar(v0207);
    if (!symbolp(v0207)) v0207 = nil;
    else { v0207 = qfastgets(v0207);
           if (v0207 != nil) { v0207 = elt(v0207, 8); /* dname */
#ifdef RECORD_GET
             if (v0207 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v0207 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v0207 == SPID_NOPROP) v0207 = nil; }}
#endif
    goto v0023;

v0023:
    if (v0207 == nil) goto v0109;
    v0207 = qvalue(elt(env, 4)); /* ps!:max!-order */
    return onevalue(v0207);

v0109:
    v0057 = v0170;
    v0207 = (Lisp_Object)17; /* 1 */
    {
        fn = elt(env, 5); /* ps!:getv */
        return (*qfn2(fn))(qenv(fn), v0057, v0207);
    }

v0034:
    v0207 = qvalue(elt(env, 3)); /* nil */
    goto v0023;

v0022:
    v0207 = qvalue(elt(env, 1)); /* t */
    goto v0023;
}



/* Code for subs2!* */

static Lisp_Object CC_subs2H(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0016, v0023;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for subs2*");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0023 = v0000;
/* end of prologue */
    v0016 = qvalue(elt(env, 1)); /* !*sub2 */
    stack[0] = qvalue(elt(env, 1)); /* !*sub2 */
    qvalue(elt(env, 1)) = v0016; /* !*sub2 */
    v0016 = v0023;
    fn = elt(env, 2); /* subs2 */
    v0016 = (*qfn1(fn))(qenv(fn), v0016);
    nil = C_nil;
    if (exception_pending()) goto v0047;
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*sub2 */
    { popv(2); return onevalue(v0016); }
/* error exit handlers */
v0047:
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*sub2 */
    popv(2);
    return nil;
}



/* Code for peel */

static Lisp_Object CC_peel(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0005, v0019;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for peel");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0000;
/* end of prologue */
    v0005 = stack[0];
    v0019 = qcar(v0005);
    v0005 = elt(env, 1); /* (liedf innerprod) */
    v0005 = Lmemq(nil, v0019, v0005);
    if (v0005 == nil) goto v0037;
    v0005 = stack[0];
    v0005 = qcdr(v0005);
    v0005 = qcdr(v0005);
    v0005 = qcar(v0005);
    { popv(1); return onevalue(v0005); }

v0037:
    v0005 = stack[0];
    v0019 = qcar(v0005);
    v0005 = elt(env, 2); /* quotient */
    if (v0019 == v0005) goto v0189;
    v0005 = stack[0];
    v0005 = qcdr(v0005);
    v0005 = qcar(v0005);
    { popv(1); return onevalue(v0005); }

v0189:
    v0005 = stack[0];
    v0005 = qcdr(v0005);
    v0019 = qcar(v0005);
    v0005 = stack[0];
    v0005 = qcdr(v0005);
    v0005 = qcdr(v0005);
    v0005 = qcar(v0005);
    fn = elt(env, 3); /* worderp */
    v0005 = (*qfn2(fn))(qenv(fn), v0019, v0005);
    nil = C_nil;
    if (exception_pending()) goto v0061;
    if (v0005 == nil) goto v0002;
    v0005 = stack[0];
    v0005 = qcdr(v0005);
    v0005 = qcar(v0005);
    { popv(1); return onevalue(v0005); }

v0002:
    v0005 = stack[0];
    v0005 = qcdr(v0005);
    v0005 = qcdr(v0005);
    v0005 = qcar(v0005);
    { popv(1); return onevalue(v0005); }
/* error exit handlers */
v0061:
    popv(1);
    return nil;
}



/* Code for hasonephysop */

static Lisp_Object CC_hasonephysop(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0042;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for hasonephysop");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0000;
/* end of prologue */

v0196:
    v0042 = stack[0];
    if (v0042 == nil) goto v0050;
    v0042 = stack[0];
    v0042 = qcar(v0042);
    fn = elt(env, 2); /* physopp!* */
    v0042 = (*qfn1(fn))(qenv(fn), v0042);
    nil = C_nil;
    if (exception_pending()) goto v0037;
    env = stack[-1];
    if (!(v0042 == nil)) { popv(2); return onevalue(v0042); }
    v0042 = stack[0];
    v0042 = qcdr(v0042);
    stack[0] = v0042;
    goto v0196;

v0050:
    v0042 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0042); }
/* error exit handlers */
v0037:
    popv(2);
    return nil;
}



/* Code for mo_ecart */

static Lisp_Object CC_mo_ecart(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0032, v0002;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mo_ecart");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0000;
/* end of prologue */
    v0032 = stack[0];
    v0032 = qcar(v0032);
    if (v0032 == nil) goto v0050;
    v0032 = stack[0];
    fn = elt(env, 3); /* mo_comp */
    v0002 = (*qfn1(fn))(qenv(fn), v0032);
    nil = C_nil;
    if (exception_pending()) goto v0218;
    env = stack[-1];
    v0032 = qvalue(elt(env, 1)); /* cali!=degrees */
    v0032 = Latsoc(nil, v0002, v0032);
    v0002 = v0032;
    v0032 = v0002;
    if (v0032 == nil) goto v0044;
    v0032 = v0002;
    v0002 = qcdr(v0032);
    v0032 = stack[0];
    fn = elt(env, 4); /* mo_sum */
    v0032 = (*qfn2(fn))(qenv(fn), v0002, v0032);
    nil = C_nil;
    if (exception_pending()) goto v0218;
    env = stack[-1];
    goto v0008;

v0008:
    v0032 = qcar(v0032);
    stack[0] = qcdr(v0032);
    v0032 = qvalue(elt(env, 2)); /* cali!=basering */
    fn = elt(env, 5); /* ring_ecart */
    v0032 = (*qfn1(fn))(qenv(fn), v0032);
    nil = C_nil;
    if (exception_pending()) goto v0218;
    env = stack[-1];
    {
        Lisp_Object v0060 = stack[0];
        popv(2);
        fn = elt(env, 6); /* mo!=sprod */
        return (*qfn2(fn))(qenv(fn), v0060, v0032);
    }

v0044:
    v0032 = stack[0];
    goto v0008;

v0050:
    v0032 = (Lisp_Object)1; /* 0 */
    { popv(2); return onevalue(v0032); }
/* error exit handlers */
v0218:
    popv(2);
    return nil;
}



/* Code for pv_sort */

static Lisp_Object CC_pv_sort(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0037, v0036;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pv_sort");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0036 = v0000;
/* end of prologue */
    v0037 = v0036;
    if (v0037 == nil) goto v0050;
    v0037 = v0036;
    stack[0] = qcdr(v0037);
    v0037 = v0036;
    v0037 = qcar(v0037);
    v0037 = ncons(v0037);
    nil = C_nil;
    if (exception_pending()) goto v0049;
    env = stack[-1];
    {
        Lisp_Object v0052 = stack[0];
        popv(2);
        fn = elt(env, 2); /* pv_sort1 */
        return (*qfn2(fn))(qenv(fn), v0052, v0037);
    }

v0050:
    v0037 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0037); }
/* error exit handlers */
v0049:
    popv(2);
    return nil;
}



/* Code for bfzerop!: */

static Lisp_Object CC_bfzeropT(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0033, v0026;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for bfzerop:");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0033 = v0000;
/* end of prologue */
    v0033 = qcdr(v0033);
    v0026 = qcar(v0033);
    v0033 = (Lisp_Object)1; /* 0 */
    v0033 = (v0026 == v0033 ? lisp_true : nil);
    return onevalue(v0033);
}



/* Code for reordop */

static Lisp_Object CC_reordop(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0111, v0189;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for reordop");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0027;
    stack[-1] = v0000;
/* end of prologue */
    v0111 = qvalue(elt(env, 1)); /* !*ncmp */
    if (v0111 == nil) goto v0022;
    v0111 = stack[-1];
    fn = elt(env, 3); /* noncomp1 */
    v0111 = (*qfn1(fn))(qenv(fn), v0111);
    nil = C_nil;
    if (exception_pending()) goto v0089;
    env = stack[-2];
    if (v0111 == nil) goto v0011;
    v0111 = stack[0];
    fn = elt(env, 3); /* noncomp1 */
    v0111 = (*qfn1(fn))(qenv(fn), v0111);
    nil = C_nil;
    if (exception_pending()) goto v0089;
    env = stack[-2];
    goto v0023;

v0023:
    if (!(v0111 == nil)) { popv(3); return onevalue(v0111); }
    v0189 = stack[-1];
    v0111 = stack[0];
    {
        popv(3);
        fn = elt(env, 4); /* ordop */
        return (*qfn2(fn))(qenv(fn), v0189, v0111);
    }

v0011:
    v0111 = qvalue(elt(env, 2)); /* nil */
    goto v0023;

v0022:
    v0111 = qvalue(elt(env, 2)); /* nil */
    goto v0023;
/* error exit handlers */
v0089:
    popv(3);
    return nil;
}



/* Code for quotf!-fail */

static Lisp_Object CC_quotfKfail(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0013, v0014, v0195;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for quotf-fail");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0027);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0027;
    stack[-2] = v0000;
/* end of prologue */
    v0013 = stack[-2];
    if (v0013 == nil) goto v0045;
    v0014 = stack[-2];
    v0013 = stack[-1];
    fn = elt(env, 6); /* quotf */
    v0013 = (*qfn2(fn))(qenv(fn), v0014, v0013);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-4];
    v0014 = v0013;
    v0013 = v0014;
    if (v0013 == nil) goto v0008;
    v0013 = qvalue(elt(env, 1)); /* nil */
    goto v0007;

v0007:
    if (v0013 == nil) goto v0046;
    v0013 = qvalue(elt(env, 1)); /* nil */
    stack[0] = qvalue(elt(env, 3)); /* !*roundall */
    qvalue(elt(env, 3)) = v0013; /* !*roundall */
    v0014 = stack[-2];
    v0013 = stack[-1];
    fn = elt(env, 6); /* quotf */
    v0013 = (*qfn2(fn))(qenv(fn), v0014, v0013);
    nil = C_nil;
    if (exception_pending()) goto v0085;
    env = stack[-4];
    v0014 = v0013;
    qvalue(elt(env, 3)) = stack[0]; /* !*roundall */
    goto v0046;

v0046:
    v0013 = v0014;
    if (!(v0013 == nil)) { popv(5); return onevalue(v0014); }
    stack[-3] = elt(env, 4); /* poly */
    stack[0] = (Lisp_Object)1585; /* 99 */
    v0195 = elt(env, 5); /* "UNEXPECTED DIVISION FAILURE" */
    v0014 = stack[-2];
    v0013 = stack[-1];
    v0013 = list3(v0195, v0014, v0013);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-4];
    fn = elt(env, 7); /* rerror */
    v0013 = (*qfnn(fn))(qenv(fn), 3, stack[-3], stack[0], v0013);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    v0013 = nil;
    { popv(5); return onevalue(v0013); }

v0008:
    v0013 = qvalue(elt(env, 2)); /* !*rounded */
    if (v0013 == nil) goto v0111;
    v0013 = qvalue(elt(env, 3)); /* !*roundall */
    goto v0007;

v0111:
    v0013 = qvalue(elt(env, 1)); /* nil */
    goto v0007;

v0045:
    v0013 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0013); }
/* error exit handlers */
v0085:
    env = stack[-4];
    qvalue(elt(env, 3)) = stack[0]; /* !*roundall */
    popv(5);
    return nil;
v0192:
    popv(5);
    return nil;
}



/* Code for pasf_dec */

static Lisp_Object CC_pasf_dec(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0207, v0057;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pasf_dec");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v0057 = v0000;
/* end of prologue */
    v0207 = v0057;
    stack[-1] = v0207;
    goto v0022;

v0022:
    v0207 = stack[-1];
    if (!consp(v0207)) goto v0010;
    v0207 = stack[-1];
    v0207 = qcar(v0207);
    v0207 = (consp(v0207) ? nil : lisp_true);
    goto v0054;

v0054:
    if (v0207 == nil) goto v0024;
    stack[0] = v0057;
    v0207 = stack[-1];
    fn = elt(env, 3); /* negf */
    v0207 = (*qfn1(fn))(qenv(fn), v0207);
    nil = C_nil;
    if (exception_pending()) goto v0193;
    env = stack[-2];
    fn = elt(env, 4); /* addf */
    v0057 = (*qfn2(fn))(qenv(fn), stack[0], v0207);
    nil = C_nil;
    if (exception_pending()) goto v0193;
    v0207 = stack[-1];
    popv(3);
    return cons(v0057, v0207);

v0024:
    v0207 = stack[-1];
    v0207 = qcdr(v0207);
    stack[-1] = v0207;
    goto v0022;

v0010:
    v0207 = qvalue(elt(env, 1)); /* t */
    goto v0054;
/* error exit handlers */
v0193:
    popv(3);
    return nil;
}



/* Code for cgp_evlmon */

static Lisp_Object CC_cgp_evlmon(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0045;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for cgp_evlmon");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v0045 = v0000;
/* end of prologue */
    fn = elt(env, 1); /* cgp_rp */
    v0045 = (*qfn1(fn))(qenv(fn), v0045);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 2); /* dip_evlmon */
        return (*qfn1(fn))(qenv(fn), v0045);
    }
/* error exit handlers */
v0016:
    popv(1);
    return nil;
}



/* Code for retimes */

static Lisp_Object CC_retimes(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0170, v0171;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for retimes");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0170 = v0000;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* !*bool */
    qvalue(elt(env, 1)) = nil; /* !*bool */
    fn = elt(env, 4); /* retimes1 */
    v0170 = (*qfn1(fn))(qenv(fn), v0170);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-1];
    v0171 = v0170;
    if (v0171 == nil) goto v0047;
    v0171 = v0170;
    v0171 = qcdr(v0171);
    if (v0171 == nil) goto v0052;
    v0171 = elt(env, 2); /* times */
    v0170 = cons(v0171, v0170);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-1];
    goto v0022;

v0022:
    v0171 = qvalue(elt(env, 1)); /* !*bool */
    if (v0171 == nil) goto v0050;
    v0171 = elt(env, 3); /* minus */
    v0170 = list2(v0171, v0170);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-1];
    goto v0050;

v0050:
    qvalue(elt(env, 1)) = stack[0]; /* !*bool */
    { popv(2); return onevalue(v0170); }

v0052:
    v0170 = qcar(v0170);
    goto v0022;

v0047:
    v0170 = (Lisp_Object)17; /* 1 */
    goto v0022;
/* error exit handlers */
v0032:
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*bool */
    popv(2);
    return nil;
}



/* Code for idlistp */

static Lisp_Object CC_idlistp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0035, v0040;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for idlistp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0035 = v0000;
/* end of prologue */

v0196:
    v0040 = v0035;
    if (v0040 == nil) goto v0050;
    v0040 = v0035;
    if (!consp(v0040)) goto v0007;
    v0040 = v0035;
    v0040 = qcar(v0040);
    if (symbolp(v0040)) goto v0036;
    v0035 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0035);

v0036:
    v0035 = qcdr(v0035);
    goto v0196;

v0007:
    v0035 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0035);

v0050:
    v0035 = qvalue(elt(env, 1)); /* t */
    return onevalue(v0035);
}



/* Code for qassoc */

static Lisp_Object CC_qassoc(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0027)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0034, v0035, v0040, v0104;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for qassoc");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0040 = v0027;
    v0104 = v0000;
/* end of prologue */

v0045:
    v0034 = v0040;
    if (v0034 == nil) goto v0022;
    v0035 = v0104;
    v0034 = v0040;
    v0034 = qcar(v0034);
    v0034 = qcar(v0034);
    if (v0035 == v0034) goto v0033;
    v0034 = v0040;
    v0034 = qcdr(v0034);
    v0040 = v0034;
    goto v0045;

v0033:
    v0034 = v0040;
    v0034 = qcar(v0034);
    return onevalue(v0034);

v0022:
    v0034 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v0034);
}



/* Code for negf */

static Lisp_Object CC_negf(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0186, v0012;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for negf");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0000;
/* end of prologue */
    stack[-2] = nil;
    goto v0045;

v0045:
    v0186 = stack[-1];
    if (v0186 == nil) goto v0022;
    v0186 = stack[-1];
    if (!consp(v0186)) goto v0051;
    v0186 = stack[-1];
    v0186 = qcar(v0186);
    v0186 = (consp(v0186) ? nil : lisp_true);
    goto v0011;

v0011:
    if (v0186 == nil) goto v0061;
    stack[0] = stack[-2];
    v0186 = stack[-1];
    if (!consp(v0186)) goto v0041;
    v0186 = qvalue(elt(env, 3)); /* nil */
    goto v0030;

v0030:
    if (v0186 == nil) goto v0105;
    v0186 = qvalue(elt(env, 2)); /* dmode!* */
    if (!symbolp(v0186)) v0012 = nil;
    else { v0012 = qfastgets(v0186);
           if (v0012 != nil) { v0012 = elt(v0012, 34); /* i2d */
#ifdef RECORD_GET
             if (v0012 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v0012 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v0012 == SPID_NOPROP) v0012 = nil; }}
#endif
    v0186 = stack[-1];
    v0186 = Lapply1(nil, v0012, v0186);
    nil = C_nil;
    if (exception_pending()) goto v0038;
    env = stack[-3];
    goto v0018;

v0018:
    fn = elt(env, 4); /* !:minus */
    v0186 = (*qfn1(fn))(qenv(fn), v0186);
    nil = C_nil;
    if (exception_pending()) goto v0038;
    env = stack[-3];
    {
        Lisp_Object v0015 = stack[0];
        popv(4);
        fn = elt(env, 5); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v0015, v0186);
    }

v0105:
    v0186 = stack[-1];
    goto v0018;

v0041:
    v0186 = qvalue(elt(env, 2)); /* dmode!* */
    if (!symbolp(v0186)) v0186 = nil;
    else { v0186 = qfastgets(v0186);
           if (v0186 != nil) { v0186 = elt(v0186, 5); /* convert */
#ifdef RECORD_GET
             if (v0186 == SPID_NOPROP)
                record_get(elt(fastget_names, 5), 0),
                v0186 = nil;
             else record_get(elt(fastget_names, 5), 1),
                v0186 = lisp_true; }
           else record_get(elt(fastget_names, 5), 0); }
#else
             if (v0186 == SPID_NOPROP) v0186 = nil; else v0186 = lisp_true; }}
#endif
    goto v0030;

v0061:
    v0186 = stack[-1];
    v0186 = qcar(v0186);
    stack[0] = qcar(v0186);
    v0186 = stack[-1];
    v0186 = qcar(v0186);
    v0186 = qcdr(v0186);
    v0012 = CC_negf(env, v0186);
    nil = C_nil;
    if (exception_pending()) goto v0038;
    env = stack[-3];
    v0186 = stack[-2];
    v0186 = acons(stack[0], v0012, v0186);
    nil = C_nil;
    if (exception_pending()) goto v0038;
    env = stack[-3];
    stack[-2] = v0186;
    v0186 = stack[-1];
    v0186 = qcdr(v0186);
    stack[-1] = v0186;
    goto v0045;

v0051:
    v0186 = qvalue(elt(env, 1)); /* t */
    goto v0011;

v0022:
    v0186 = stack[-2];
    {
        popv(4);
        fn = elt(env, 5); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0186);
    }
/* error exit handlers */
v0038:
    popv(4);
    return nil;
}



/* Code for formlis */

static Lisp_Object MS_CDECL CC_formlis(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0109, v0089, v0017;
    Lisp_Object fn;
    Lisp_Object v0001, v0027, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "formlis");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0027 = va_arg(aa, Lisp_Object);
    v0001 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for formlis");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0001,v0027,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0027,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    stack[-1] = v0027;
    stack[-2] = v0000;
/* end of prologue */
    stack[-3] = nil;
    goto v0023;

v0023:
    v0109 = stack[-2];
    if (v0109 == nil) goto v0024;
    v0109 = stack[-2];
    v0017 = qcar(v0109);
    v0089 = stack[-1];
    v0109 = stack[0];
    fn = elt(env, 1); /* form1 */
    v0089 = (*qfnn(fn))(qenv(fn), 3, v0017, v0089, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0207;
    env = stack[-4];
    v0109 = stack[-3];
    v0109 = cons(v0089, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0207;
    env = stack[-4];
    stack[-3] = v0109;
    v0109 = stack[-2];
    v0109 = qcdr(v0109);
    stack[-2] = v0109;
    goto v0023;

v0024:
    v0109 = stack[-3];
    {
        popv(5);
        fn = elt(env, 2); /* reversip!* */
        return (*qfn1(fn))(qenv(fn), v0109);
    }
/* error exit handlers */
v0207:
    popv(5);
    return nil;
}



/* Code for nonzero!-length */

static Lisp_Object CC_nonzeroKlength(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0034, v0035, v0040;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for nonzero-length");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0000);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0035 = v0000;
/* end of prologue */

v0050:
    v0034 = v0035;
    if (v0034 == nil) goto v0023;
    v0034 = v0035;
    v0040 = qcar(v0034);
    v0034 = (Lisp_Object)1; /* 0 */
    if (v0040 == v0034) goto v0025;
    v0034 = v0035;
    v0034 = qcdr(v0034);
    v0034 = CC_nonzeroKlength(env, v0034);
    errexit();
    return add1(v0034);

v0025:
    v0034 = v0035;
    v0034 = qcdr(v0034);
    v0035 = v0034;
    goto v0050;

v0023:
    v0034 = (Lisp_Object)1; /* 0 */
    return onevalue(v0034);
}



setup_type const u03_setup[] =
{
    {"subs2f",                  CC_subs2f,      too_many_1,    wrong_no_1},
    {"qqe_qopheadp",            CC_qqe_qopheadp,too_many_1,    wrong_no_1},
    {"absf",                    CC_absf,        too_many_1,    wrong_no_1},
    {"get_content",             wrong_no_na,    wrong_no_nb,   (n_args *)CC_get_content},
    {":zerop",                  CC_Tzerop,      too_many_1,    wrong_no_1},
    {"evcompless?",             too_few_2,      CC_evcomplessW,wrong_no_2},
    {"rd:zerop",                CC_rdTzerop,    too_many_1,    wrong_no_1},
    {"monordp",                 too_few_2,      CC_monordp,    wrong_no_2},
    {"union_edges",             too_few_2,      CC_union_edges,wrong_no_2},
    {"errorp",                  CC_errorp,      too_many_1,    wrong_no_1},
    {"cdiv",                    too_few_2,      CC_cdiv,       wrong_no_2},
    {"add_prin_char",           too_few_2,      CC_add_prin_char,wrong_no_2},
    {"pv_sort2",                too_few_2,      CC_pv_sort2,   wrong_no_2},
    {"*i2rn",                   CC_Hi2rn,       too_many_1,    wrong_no_1},
    {"plus-mod-p",              too_few_2,      CC_plusKmodKp, wrong_no_2},
    {"striptag",                CC_striptag,    too_many_1,    wrong_no_1},
    {"lalr_cached_goto",        too_few_2,      CC_lalr_cached_goto,wrong_no_2},
    {"toknump",                 CC_toknump,     too_many_1,    wrong_no_1},
    {"ofsf_posdefp",            CC_ofsf_posdefp,too_many_1,    wrong_no_1},
    {"lt*",                     CC_ltH,         too_many_1,    wrong_no_1},
    {"printout",                CC_printout,    too_many_1,    wrong_no_1},
    {"initcomb",                CC_initcomb,    too_many_1,    wrong_no_1},
    {"evmatrixcomp",            too_few_2,      CC_evmatrixcomp,wrong_no_2},
    {"wedgepf2",                too_few_2,      CC_wedgepf2,   wrong_no_2},
    {"pprin2",                  CC_pprin2,      too_many_1,    wrong_no_1},
    {"opmtch*",                 CC_opmtchH,     too_many_1,    wrong_no_1},
    {"timesip",                 CC_timesip,     too_many_1,    wrong_no_1},
    {"fs:timestermterm",        too_few_2,      CC_fsTtimestermterm,wrong_no_2},
    {"mo_vdivides?",            too_few_2,      CC_mo_vdividesW,wrong_no_2},
    {"dless",                   too_few_2,      CC_dless,      wrong_no_2},
    {"pv_multc",                too_few_2,      CC_pv_multc,   wrong_no_2},
    {"upbve",                   CC_upbve,       too_many_1,    wrong_no_1},
    {"rl_ordatp",               too_few_2,      CC_rl_ordatp,  wrong_no_2},
    {"monomisdivisibleby",      too_few_2,      CC_monomisdivisibleby,wrong_no_2},
    {"delallasc",               too_few_2,      CC_delallasc,  wrong_no_2},
    {"nocp",                    CC_nocp,        too_many_1,    wrong_no_1},
    {"multsq",                  too_few_2,      CC_multsq,     wrong_no_2},
    {"qqe_nytidp",              CC_qqe_nytidp,  too_many_1,    wrong_no_1},
    {"sort",                    too_few_2,      CC_sort,       wrong_no_2},
    {"bftrim:",                 CC_bftrimT,     too_many_1,    wrong_no_1},
    {"*q2a1",                   too_few_2,      CC_Hq2a1,      wrong_no_2},
    {"off1",                    CC_off1,        too_many_1,    wrong_no_1},
    {"mgenp",                   CC_mgenp,       too_many_1,    wrong_no_1},
    {"on1",                     CC_on1,         too_many_1,    wrong_no_1},
    {"evsum",                   too_few_2,      CC_evsum,      wrong_no_2},
    {"bcint2op",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_bcint2op},
    {"quotfm",                  too_few_2,      CC_quotfm,     wrong_no_2},
    {"getphystype*sq",          CC_getphystypeHsq,too_many_1,  wrong_no_1},
    {"constimes",               CC_constimes,   too_many_1,    wrong_no_1},
    {"fs:angle-order",          too_few_2,      CC_fsTangleKorder,wrong_no_2},
    {"cali_trace",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_cali_trace},
    {"pcmult",                  too_few_2,      CC_pcmult,     wrong_no_2},
    {"pkp",                     CC_pkp,         too_many_1,    wrong_no_1},
    {"fkern",                   CC_fkern,       too_many_1,    wrong_no_1},
    {"gcdfd",                   too_few_2,      CC_gcdfd,      wrong_no_2},
    {"monomcomparedegrevlex",   too_few_2,      CC_monomcomparedegrevlex,wrong_no_2},
    {"rmultpf",                 too_few_2,      CC_rmultpf,    wrong_no_2},
    {"mtchp",                   wrong_no_na,    wrong_no_nb,   (n_args *)CC_mtchp},
    {"subs2q",                  CC_subs2q,      too_many_1,    wrong_no_1},
    {"qqe_btidp",               CC_qqe_btidp,   too_many_1,    wrong_no_1},
    {"prepsq",                  CC_prepsq,      too_many_1,    wrong_no_1},
    {"ps:order",                CC_psTorder,    too_many_1,    wrong_no_1},
    {"negsq",                   CC_negsq,       too_many_1,    wrong_no_1},
    {"*physopp*",               CC_HphysoppH,   too_many_1,    wrong_no_1},
    {"errorset*",               too_few_2,      CC_errorsetH,  wrong_no_2},
    {"arraychk",                CC_arraychk,    too_many_1,    wrong_no_1},
    {"fs:timesterm",            too_few_2,      CC_fsTtimesterm,wrong_no_2},
    {"bas_rep",                 CC_bas_rep,     too_many_1,    wrong_no_1},
    {":minus",                  CC_Tminus,      too_many_1,    wrong_no_1},
    {"rev",                     too_few_2,      CC_rev,        wrong_no_2},
    {"**s2a",                   too_few_2,      CC_HHs2a,      wrong_no_2},
    {"lto_insertq",             too_few_2,      CC_lto_insertq,wrong_no_2},
    {"lnc",                     CC_lnc,         too_many_1,    wrong_no_1},
    {"qqe_mk2",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_qqe_mk2},
    {"lex",                     wrong_no_na,    wrong_no_nb,   (n_args *)CC_lex},
    {"replus1",                 CC_replus1,     too_many_1,    wrong_no_1},
    {"ps:last-term",            CC_psTlastKterm,too_many_1,    wrong_no_1},
    {"subs2*",                  CC_subs2H,      too_many_1,    wrong_no_1},
    {"peel",                    CC_peel,        too_many_1,    wrong_no_1},
    {"hasonephysop",            CC_hasonephysop,too_many_1,    wrong_no_1},
    {"mo_ecart",                CC_mo_ecart,    too_many_1,    wrong_no_1},
    {"pv_sort",                 CC_pv_sort,     too_many_1,    wrong_no_1},
    {"bfzerop:",                CC_bfzeropT,    too_many_1,    wrong_no_1},
    {"reordop",                 too_few_2,      CC_reordop,    wrong_no_2},
    {"quotf-fail",              too_few_2,      CC_quotfKfail, wrong_no_2},
    {"pasf_dec",                CC_pasf_dec,    too_many_1,    wrong_no_1},
    {"cgp_evlmon",              CC_cgp_evlmon,  too_many_1,    wrong_no_1},
    {"retimes",                 CC_retimes,     too_many_1,    wrong_no_1},
    {"idlistp",                 CC_idlistp,     too_many_1,    wrong_no_1},
    {"qassoc",                  too_few_2,      CC_qassoc,     wrong_no_2},
    {"negf",                    CC_negf,        too_many_1,    wrong_no_1},
    {"formlis",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_formlis},
    {"nonzero-length",          CC_nonzeroKlength,too_many_1,  wrong_no_1},
    {NULL, (one_args *)"u03", (two_args *)"11376 2720153 9958555", 0}
};

/* end of generated code */

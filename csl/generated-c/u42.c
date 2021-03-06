
/* $destdir/u42.c        Machine generated C code */

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


/* Code for ra_wrapper */

static Lisp_Object CC_ra_wrapper(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0013, v0014, v0015;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ra_wrapper");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0001;
    v0014 = v0000;
/* end of prologue */
    v0013 = qvalue(elt(env, 1)); /* dmode!* */
    if (!symbolp(v0013)) v0013 = nil;
    else { v0013 = qfastgets(v0013);
           if (v0013 != nil) { v0013 = elt(v0013, 8); /* dname */
#ifdef RECORD_GET
             if (v0013 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v0013 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v0013 == SPID_NOPROP) v0013 = nil; }}
#endif
    stack[-3] = v0013;
    stack[-1] = elt(env, 2); /* ra_wrapper1 */
    v0013 = v0014;
    stack[0] = Lmkquote(nil, v0013);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    v0013 = stack[-2];
    stack[-2] = Lmkquote(nil, v0013);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    v0013 = stack[-3];
    v0013 = Lmkquote(nil, v0013);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    v0015 = list4(stack[-1], stack[0], stack[-2], v0013);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    v0014 = qvalue(elt(env, 3)); /* t */
    v0013 = qvalue(elt(env, 4)); /* !*backtrace */
    fn = elt(env, 6); /* errorset */
    v0013 = (*qfnn(fn))(qenv(fn), 3, v0015, v0014, v0013);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    stack[0] = v0013;
    v0013 = stack[0];
    fn = elt(env, 7); /* errorp */
    v0013 = (*qfn1(fn))(qenv(fn), v0013);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    if (v0013 == nil) goto v0017;
    v0014 = elt(env, 5); /* "caught error - restoring domain mode" */
    v0013 = stack[-3];
    v0013 = list2(v0014, v0013);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    fn = elt(env, 8); /* lprim */
    v0013 = (*qfn1(fn))(qenv(fn), v0013);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    v0013 = stack[-3];
    if (v0013 == nil) goto v0018;
    v0013 = stack[-3];
    fn = elt(env, 9); /* on1 */
    v0013 = (*qfn1(fn))(qenv(fn), v0013);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    goto v0018;

v0018:
    v0013 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    goto v0017;

v0017:
    v0013 = stack[0];
    v0013 = qcar(v0013);
    { popv(5); return onevalue(v0013); }
/* error exit handlers */
v0016:
    popv(5);
    return nil;
}



/* Code for settreset */

static Lisp_Object MS_CDECL CC_settreset(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0019;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "settreset");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for settreset");
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
/* end of prologue */
    v0019 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 2)) = v0019; /* fluidbibasisjanettreerootnode */
    v0019 = qvalue(elt(env, 1)); /* nil */
    v0019 = ncons(v0019);
    nil = C_nil;
    if (exception_pending()) goto v0020;
    env = stack[0];
    qvalue(elt(env, 3)) = v0019; /* fluidbibasissett */
    v0019 = nil;
    { popv(1); return onevalue(v0019); }
/* error exit handlers */
v0020:
    popv(1);
    return nil;
}



/* Code for ofsf_smwrmknowl */

static Lisp_Object CC_ofsf_smwrmknowl(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0025, v0012, v0011;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ofsf_smwrmknowl");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0012 = v0001;
    v0011 = v0000;
/* end of prologue */
    v0025 = qvalue(elt(env, 1)); /* !*rlsusi */
    if (v0025 == nil) goto v0026;
    v0025 = v0011;
    {
        fn = elt(env, 2); /* ofsf_susirmknowl */
        return (*qfn2(fn))(qenv(fn), v0025, v0012);
    }

v0026:
    v0025 = v0011;
    {
        fn = elt(env, 3); /* ofsf_smrmknowl */
        return (*qfn2(fn))(qenv(fn), v0025, v0012);
    }
}



/* Code for valuechk */

static Lisp_Object CC_valuechk(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0051, v0052, v0053;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for valuechk");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */
    v0051 = stack[-2];
    if (!symbolp(v0051)) v0051 = nil;
    else { v0051 = qfastgets(v0051);
           if (v0051 != nil) { v0051 = elt(v0051, 42); /* number!-of!-args 
*/
#ifdef RECORD_GET
             if (v0051 != SPID_NOPROP)
                record_get(elt(fastget_names, 42), 1);
             else record_get(elt(fastget_names, 42), 0),
                v0051 = nil; }
           else record_get(elt(fastget_names, 42), 0); }
#else
             if (v0051 == SPID_NOPROP) v0051 = nil; }}
#endif
    stack[0] = v0051;
    if (v0051 == nil) goto v0054;
    v0051 = stack[-1];
    v0052 = Llength(nil, v0051);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[-4];
    v0051 = stack[0];
    if (equal(v0052, v0051)) goto v0056;
    v0052 = stack[-2];
    v0051 = elt(env, 1); /* variadic */
    v0051 = Lflagp(nil, v0052, v0051);
    env = stack[-4];
    v0051 = (v0051 == nil ? lisp_true : nil);
    goto v0057;

v0057:
    if (!(v0051 == nil)) goto v0058;

v0054:
    v0051 = stack[0];
    if (v0051 == nil) goto v0059;
    v0051 = qvalue(elt(env, 2)); /* nil */
    goto v0060;

v0060:
    if (!(v0051 == nil)) goto v0058;

v0061:
    v0052 = stack[-2];
    v0051 = stack[-1];
    v0051 = cons(v0052, v0051);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[-4];
    fn = elt(env, 9); /* opfchk!! */
    v0051 = (*qfn1(fn))(qenv(fn), v0051);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[-4];
    stack[-1] = v0051;
    v0051 = stack[-1];
    if (v0051 == nil) goto v0062;
    v0052 = stack[-1];
    v0051 = elt(env, 8); /* list */
    if (!consp(v0052)) goto v0063;
    v0052 = qcar(v0052);
    if (!(v0052 == v0051)) goto v0063;
    v0053 = stack[-1];
    v0052 = (Lisp_Object)17; /* 1 */
    v0051 = (Lisp_Object)17; /* 1 */
    v0051 = acons(v0053, v0052, v0051);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[-4];
    v0051 = ncons(v0051);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[-4];
    v0052 = v0051;
    goto v0064;

v0064:
    v0051 = (Lisp_Object)17; /* 1 */
    v0051 = cons(v0052, v0051);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[-4];
    {
        popv(5);
        fn = elt(env, 10); /* znumrnil */
        return (*qfn1(fn))(qenv(fn), v0051);
    }

v0063:
    v0051 = stack[-1];
    v0052 = v0051;
    goto v0064;

v0062:
    v0051 = nil;
    { popv(5); return onevalue(v0051); }

v0058:
    v0051 = qvalue(elt(env, 5)); /* !*strict_argcount */
    if (v0051 == nil) goto v0065;
    stack[-3] = elt(env, 6); /* alg */
    stack[0] = (Lisp_Object)273; /* 17 */
    v0052 = elt(env, 7); /* "Wrong number of arguments to" */
    v0051 = stack[-2];
    v0051 = list2(v0052, v0051);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[-4];
    fn = elt(env, 11); /* rerror */
    v0051 = (*qfnn(fn))(qenv(fn), 3, stack[-3], stack[0], v0051);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[-4];
    goto v0061;

v0065:
    v0052 = elt(env, 7); /* "Wrong number of arguments to" */
    v0051 = stack[-2];
    v0051 = list2(v0052, v0051);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[-4];
    fn = elt(env, 12); /* lprim */
    v0051 = (*qfn1(fn))(qenv(fn), v0051);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[-4];
    goto v0061;

v0059:
    v0051 = stack[-1];
    if (v0051 == nil) goto v0066;
    v0051 = stack[-1];
    v0051 = qcdr(v0051);
    if (v0051 == nil) goto v0067;
    v0052 = stack[-2];
    v0051 = elt(env, 3); /* !:rd!: */
    v0051 = get(v0052, v0051);
    env = stack[-4];
    if (!(v0051 == nil)) goto v0060;
    v0052 = stack[-2];
    v0051 = elt(env, 4); /* !:rn!: */
    v0051 = get(v0052, v0051);
    env = stack[-4];
    goto v0060;

v0067:
    v0051 = qvalue(elt(env, 2)); /* nil */
    goto v0060;

v0066:
    v0051 = qvalue(elt(env, 2)); /* nil */
    goto v0060;

v0056:
    v0051 = qvalue(elt(env, 2)); /* nil */
    goto v0057;
/* error exit handlers */
v0055:
    popv(5);
    return nil;
}



/* Code for mk!+inner!+product */

static Lisp_Object CC_mkLinnerLproduct(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0040, v0038;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mk+inner+product");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0001;
    stack[-3] = v0000;
/* end of prologue */
    v0040 = stack[-3];
    fn = elt(env, 6); /* get!+vec!+dim */
    stack[0] = (*qfn1(fn))(qenv(fn), v0040);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    v0040 = stack[-1];
    fn = elt(env, 6); /* get!+vec!+dim */
    v0040 = (*qfn1(fn))(qenv(fn), v0040);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    if (equal(stack[0], v0040)) goto v0021;
    v0040 = elt(env, 1); /* "Error in Gram_schmidt: each list in input must be the same length." 
*/
    fn = elt(env, 7); /* rederr */
    v0040 = (*qfn1(fn))(qenv(fn), v0040);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    goto v0021;

v0021:
    v0038 = qvalue(elt(env, 2)); /* nil */
    v0040 = (Lisp_Object)17; /* 1 */
    v0040 = cons(v0038, v0040);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    stack[0] = v0040;
    v0040 = qvalue(elt(env, 3)); /* !*complex */
    if (v0040 == nil) goto v0079;
    v0040 = stack[-1];
    fn = elt(env, 8); /* mk!+conjugate!+vec */
    v0040 = (*qfn1(fn))(qenv(fn), v0040);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    stack[-4] = v0040;
    goto v0010;

v0010:
    v0040 = (Lisp_Object)17; /* 1 */
    stack[-2] = v0040;
    goto v0018;

v0018:
    v0040 = stack[-3];
    fn = elt(env, 6); /* get!+vec!+dim */
    v0038 = (*qfn1(fn))(qenv(fn), v0040);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    v0040 = stack[-2];
    v0040 = difference2(v0038, v0040);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    v0040 = Lminusp(nil, v0040);
    env = stack[-5];
    if (v0040 == nil) goto v0014;
    v0040 = qvalue(elt(env, 4)); /* t */
    stack[-1] = qvalue(elt(env, 5)); /* !*sub2 */
    qvalue(elt(env, 5)) = v0040; /* !*sub2 */
    v0040 = stack[0];
    fn = elt(env, 9); /* subs2 */
    v0040 = (*qfn1(fn))(qenv(fn), v0040);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    env = stack[-5];
    stack[0] = v0040;
    qvalue(elt(env, 5)) = stack[-1]; /* !*sub2 */
    { Lisp_Object res = stack[0]; popv(6); return onevalue(res); }

v0014:
    stack[-1] = stack[0];
    v0038 = stack[-3];
    v0040 = stack[-2];
    fn = elt(env, 10); /* get!+vec!+entry */
    stack[0] = (*qfn2(fn))(qenv(fn), v0038, v0040);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    v0038 = stack[-4];
    v0040 = stack[-2];
    fn = elt(env, 10); /* get!+vec!+entry */
    v0040 = (*qfn2(fn))(qenv(fn), v0038, v0040);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    fn = elt(env, 11); /* multsq */
    v0040 = (*qfn2(fn))(qenv(fn), stack[0], v0040);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    fn = elt(env, 12); /* addsq */
    v0040 = (*qfn2(fn))(qenv(fn), stack[-1], v0040);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    stack[0] = v0040;
    v0040 = stack[-2];
    v0040 = add1(v0040);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-5];
    stack[-2] = v0040;
    goto v0018;

v0079:
    v0040 = stack[-1];
    stack[-4] = v0040;
    goto v0010;
/* error exit handlers */
v0041:
    env = stack[-5];
    qvalue(elt(env, 5)) = stack[-1]; /* !*sub2 */
    popv(6);
    return nil;
v0078:
    popv(6);
    return nil;
}



/* Code for iv_new */

static Lisp_Object CC_iv_new(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0011, v0077, v0009;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for iv_new");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0077 = v0001;
    v0009 = v0000;
/* end of prologue */
    v0011 = v0009;
    if (v0011 == nil) goto v0057;
    v0011 = v0009;
    v0009 = v0011;
    goto v0020;

v0020:
    v0011 = v0077;
    if (v0011 == nil) goto v0022;
    v0011 = v0077;
    goto v0058;

v0058:
    v0011 = cons(v0009, v0011);
    errexit();
    return ncons(v0011);

v0022:
    v0011 = (Lisp_Object)1; /* 0 */
    goto v0058;

v0057:
    v0011 = (Lisp_Object)1; /* 0 */
    v0009 = v0011;
    goto v0020;
}



/* Code for lto_setminus */

static Lisp_Object CC_lto_setminus(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0083, v0084, v0046;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lto_setminus");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-3] = v0001;
    v0083 = v0000;
/* end of prologue */
    stack[-4] = v0083;
    goto v0058;

v0058:
    v0083 = stack[-4];
    if (v0083 == nil) goto v0085;
    v0083 = stack[-4];
    v0083 = qcar(v0083);
    v0046 = v0083;
    v0084 = v0046;
    v0083 = stack[-3];
    v0083 = Lmember(nil, v0084, v0083);
    if (v0083 == nil) goto v0086;
    v0083 = nil;
    goto v0087;

v0087:
    stack[-2] = v0083;
    v0083 = stack[-2];
    fn = elt(env, 2); /* lastpair */
    v0083 = (*qfn1(fn))(qenv(fn), v0083);
    nil = C_nil;
    if (exception_pending()) goto v0088;
    env = stack[-5];
    stack[-1] = v0083;
    v0083 = stack[-4];
    v0083 = qcdr(v0083);
    stack[-4] = v0083;
    v0083 = stack[-1];
    if (!consp(v0083)) goto v0058;
    else goto v0089;

v0089:
    v0083 = stack[-4];
    if (v0083 == nil) { Lisp_Object res = stack[-2]; popv(6); return onevalue(res); }
    stack[0] = stack[-1];
    v0083 = stack[-4];
    v0083 = qcar(v0083);
    v0046 = v0083;
    v0084 = v0046;
    v0083 = stack[-3];
    v0083 = Lmember(nil, v0084, v0083);
    if (v0083 == nil) goto v0013;
    v0083 = nil;
    goto v0045;

v0045:
    v0083 = Lrplacd(nil, stack[0], v0083);
    nil = C_nil;
    if (exception_pending()) goto v0088;
    env = stack[-5];
    v0083 = stack[-1];
    fn = elt(env, 2); /* lastpair */
    v0083 = (*qfn1(fn))(qenv(fn), v0083);
    nil = C_nil;
    if (exception_pending()) goto v0088;
    env = stack[-5];
    stack[-1] = v0083;
    v0083 = stack[-4];
    v0083 = qcdr(v0083);
    stack[-4] = v0083;
    goto v0089;

v0013:
    v0083 = v0046;
    v0083 = ncons(v0083);
    nil = C_nil;
    if (exception_pending()) goto v0088;
    env = stack[-5];
    goto v0045;

v0086:
    v0083 = v0046;
    v0083 = ncons(v0083);
    nil = C_nil;
    if (exception_pending()) goto v0088;
    env = stack[-5];
    goto v0087;

v0085:
    v0083 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0083); }
/* error exit handlers */
v0088:
    popv(6);
    return nil;
}



/* Code for pdiffvars */

static Lisp_Object CC_pdiffvars(Lisp_Object env,
                         Lisp_Object v0001, Lisp_Object v0090)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0091, v0043;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pdiffvars");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0090,v0001);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0001,v0090);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0090;
    v0091 = v0001;
/* end of prologue */
    stack[-2] = qvalue(elt(env, 1)); /* ind */
    qvalue(elt(env, 1)) = nil; /* ind */
    qvalue(elt(env, 1)) = v0091; /* ind */
    v0091 = qvalue(elt(env, 1)); /* ind */
    if (v0091 == nil) goto v0085;
    v0043 = stack[-1];
    v0091 = qvalue(elt(env, 1)); /* ind */
    v0091 = qcar(v0091);
    fn = elt(env, 2); /* nth */
    stack[0] = (*qfn2(fn))(qenv(fn), v0043, v0091);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    env = stack[-3];
    v0091 = qvalue(elt(env, 1)); /* ind */
    v0043 = qcdr(v0091);
    v0091 = stack[-1];
    v0091 = CC_pdiffvars(env, v0043, v0091);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    env = stack[-3];
    v0091 = cons(stack[0], v0091);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    env = stack[-3];
    goto v0019;

v0019:
    qvalue(elt(env, 1)) = stack[-2]; /* ind */
    { popv(4); return onevalue(v0091); }

v0085:
    v0091 = nil;
    goto v0019;
/* error exit handlers */
v0092:
    env = stack[-3];
    qvalue(elt(env, 1)) = stack[-2]; /* ind */
    popv(4);
    return nil;
}



/* Code for copy_vect */

static Lisp_Object CC_copy_vect(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0004, v0005, v0095, v0018;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for copy_vect");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */
    v0004 = stack[-1];
    v0004 = Lupbv(nil, v0004);
    nil = C_nil;
    if (exception_pending()) goto v0075;
    env = stack[-4];
    stack[-3] = v0004;
    v0004 = (Lisp_Object)1; /* 0 */
    stack[0] = v0004;
    goto v0086;

v0086:
    v0005 = stack[-3];
    v0004 = stack[0];
    v0004 = difference2(v0005, v0004);
    nil = C_nil;
    if (exception_pending()) goto v0075;
    env = stack[-4];
    v0004 = Lminusp(nil, v0004);
    env = stack[-4];
    if (v0004 == nil) goto v0009;
    v0004 = nil;
    { popv(5); return onevalue(v0004); }

v0009:
    v0018 = stack[-2];
    v0095 = stack[0];
    v0005 = stack[-1];
    v0004 = stack[0];
    v0004 = *(Lisp_Object *)((char *)v0005 + (CELL-TAG_VECTOR) + ((int32_t)v0004/(16/CELL)));
    *(Lisp_Object *)((char *)v0018 + (CELL-TAG_VECTOR) + ((int32_t)v0095/(16/CELL))) = v0004;
    v0004 = stack[0];
    v0004 = add1(v0004);
    nil = C_nil;
    if (exception_pending()) goto v0075;
    env = stack[-4];
    stack[0] = v0004;
    goto v0086;
/* error exit handlers */
v0075:
    popv(5);
    return nil;
}



/* Code for findhc */

static Lisp_Object CC_findhc(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0106, v0034;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for findhc");
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
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    v0106 = v0000;
/* end of prologue */
    stack[-4] = nil;
    v0034 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 1)) = v0034; /* njsi */
    stack[-2] = v0034;
    v0034 = qvalue(elt(env, 2)); /* nil */
    qvalue(elt(env, 3)) = v0034; /* jsi */
    stack[0] = qvalue(elt(env, 4)); /* codmat */
    v0034 = qvalue(elt(env, 5)); /* maxvar */
    v0106 = plus2(v0034, v0106);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    env = stack[-5];
    v0034 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v0106/(16/CELL)));
    v0106 = (Lisp_Object)65; /* 4 */
    v0106 = *(Lisp_Object *)((char *)v0034 + (CELL-TAG_VECTOR) + ((int32_t)v0106/(16/CELL)));
    stack[-1] = v0106;
    goto v0085;

v0085:
    v0106 = stack[-1];
    if (v0106 == nil) goto v0108;
    v0106 = stack[-1];
    v0106 = qcar(v0106);
    stack[0] = qvalue(elt(env, 4)); /* codmat */
    v0034 = qvalue(elt(env, 5)); /* maxvar */
    v0106 = qcar(v0106);
    stack[-3] = v0106;
    v0106 = plus2(v0034, v0106);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    env = stack[-5];
    v0034 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v0106/(16/CELL)));
    v0106 = (Lisp_Object)1; /* 0 */
    v0106 = *(Lisp_Object *)((char *)v0034 + (CELL-TAG_VECTOR) + ((int32_t)v0106/(16/CELL)));
    if (v0106 == nil) goto v0094;
    v0034 = stack[-3];
    v0106 = qvalue(elt(env, 3)); /* jsi */
    v0106 = cons(v0034, v0106);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    env = stack[-5];
    qvalue(elt(env, 3)) = v0106; /* jsi */
    v0106 = qvalue(elt(env, 1)); /* njsi */
    v0106 = add1(v0106);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    env = stack[-5];
    qvalue(elt(env, 1)) = v0106; /* njsi */
    stack[0] = qvalue(elt(env, 4)); /* codmat */
    v0034 = qvalue(elt(env, 5)); /* maxvar */
    v0106 = stack[-3];
    v0106 = plus2(v0034, v0106);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    env = stack[-5];
    v0034 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v0106/(16/CELL)));
    v0106 = (Lisp_Object)17; /* 1 */
    v0106 = *(Lisp_Object *)((char *)v0034 + (CELL-TAG_VECTOR) + ((int32_t)v0106/(16/CELL)));
    v0106 = qcar(v0106);
    v0034 = qcar(v0106);
    stack[0] = v0034;
    v0106 = stack[-2];
    v0106 = (Lisp_Object)greaterp2(v0034, v0106);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    v0106 = v0106 ? lisp_true : nil;
    env = stack[-5];
    if (v0106 == nil) goto v0094;
    v0106 = stack[0];
    stack[-2] = v0106;
    v0106 = stack[-3];
    stack[-4] = v0106;
    goto v0094;

v0094:
    v0106 = stack[-1];
    v0106 = qcdr(v0106);
    stack[-1] = v0106;
    goto v0085;

v0108:
    v0106 = qvalue(elt(env, 3)); /* jsi */
    v0106 = Lreverse(nil, v0106);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    env = stack[-5];
    qvalue(elt(env, 3)) = v0106; /* jsi */
    { Lisp_Object res = stack[-4]; popv(6); return onevalue(res); }
/* error exit handlers */
v0107:
    popv(6);
    return nil;
}



/* Code for evaluate2 */

static Lisp_Object MS_CDECL CC_evaluate2(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0128, v0129, v0130;
    Lisp_Object fn;
    Lisp_Object v0090, v0001, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "evaluate2");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0001 = va_arg(aa, Lisp_Object);
    v0090 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for evaluate2");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0090,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0001,v0090);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-3] = v0090;
    v0129 = v0001;
    stack[-4] = v0000;
/* end of prologue */
    v0130 = stack[-4];
    v0128 = elt(env, 1); /* !:dn!: */
    if (v0130 == v0128) goto v0019;
    v0128 = v0129;
    stack[-5] = v0128;
    v0128 = stack[-5];
    if (v0128 == nil) goto v0105;
    v0128 = stack[-5];
    v0128 = qcar(v0128);
    v0129 = v0128;
    v0128 = stack[-3];
    fn = elt(env, 6); /* evaluate1 */
    v0128 = (*qfn2(fn))(qenv(fn), v0129, v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-6];
    v0128 = ncons(v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-6];
    stack[-1] = v0128;
    stack[-2] = v0128;
    goto v0012;

v0012:
    v0128 = stack[-5];
    v0128 = qcdr(v0128);
    stack[-5] = v0128;
    v0128 = stack[-5];
    if (v0128 == nil) goto v0095;
    stack[0] = stack[-1];
    v0128 = stack[-5];
    v0128 = qcar(v0128);
    v0129 = v0128;
    v0128 = stack[-3];
    fn = elt(env, 6); /* evaluate1 */
    v0128 = (*qfn2(fn))(qenv(fn), v0129, v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-6];
    v0128 = ncons(v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-6];
    v0128 = Lrplacd(nil, stack[0], v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-6];
    v0128 = stack[-1];
    v0128 = qcdr(v0128);
    stack[-1] = v0128;
    goto v0012;

v0095:
    v0128 = stack[-2];
    goto v0025;

v0025:
    v0129 = v0128;
    v0130 = stack[-4];
    v0128 = elt(env, 3); /* plus */
    if (v0130 == v0128) goto v0084;
    v0130 = stack[-4];
    v0128 = elt(env, 4); /* times */
    if (v0130 == v0128) goto v0072;
    v0130 = stack[-4];
    v0128 = qvalue(elt(env, 5)); /* dmarith!* */
    v0128 = Lassoc(nil, v0130, v0128);
    v0130 = v0128;
    if (v0128 == nil) goto v0132;
    v0128 = v0130;
    v0128 = qcdr(v0128);
    {
        popv(7);
        fn = elt(env, 7); /* apply */
        return (*qfn2(fn))(qenv(fn), v0128, v0129);
    }

v0132:
    v0128 = v0129;
    v0128 = qcar(v0128);
    v0128 = Lconsp(nil, v0128);
    env = stack[-6];
    if (v0128 == nil) goto v0133;
    v0130 = stack[-4];
    v0128 = v0129;
    v0128 = qcar(v0128);
    v0128 = qcar(v0128);
    v0128 = get(v0130, v0128);
    env = stack[-6];
    v0130 = v0128;
    if (v0128 == nil) goto v0133;
    v0128 = v0130;
    {
        popv(7);
        fn = elt(env, 7); /* apply */
        return (*qfn2(fn))(qenv(fn), v0128, v0129);
    }

v0133:
    v0128 = v0129;
    stack[-3] = v0128;
    v0128 = stack[-3];
    if (v0128 == nil) goto v0134;
    v0128 = stack[-3];
    v0128 = qcar(v0128);
    fn = elt(env, 8); /* prepf */
    v0128 = (*qfn1(fn))(qenv(fn), v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-6];
    v0128 = ncons(v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-6];
    stack[-1] = v0128;
    stack[-2] = v0128;
    goto v0031;

v0031:
    v0128 = stack[-3];
    v0128 = qcdr(v0128);
    stack[-3] = v0128;
    v0128 = stack[-3];
    if (v0128 == nil) goto v0135;
    stack[0] = stack[-1];
    v0128 = stack[-3];
    v0128 = qcar(v0128);
    fn = elt(env, 8); /* prepf */
    v0128 = (*qfn1(fn))(qenv(fn), v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-6];
    v0128 = ncons(v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-6];
    v0128 = Lrplacd(nil, stack[0], v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-6];
    v0128 = stack[-1];
    v0128 = qcdr(v0128);
    stack[-1] = v0128;
    goto v0031;

v0135:
    v0128 = stack[-2];
    goto v0136;

v0136:
    v0128 = cons(stack[-4], v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-6];
    fn = elt(env, 9); /* simp */
    v0128 = (*qfn1(fn))(qenv(fn), v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-6];
    v0128 = qcar(v0128);
    {
        popv(7);
        fn = elt(env, 10); /* force!-to!-dm */
        return (*qfn1(fn))(qenv(fn), v0128);
    }

v0134:
    v0128 = qvalue(elt(env, 2)); /* nil */
    goto v0136;

v0072:
    v0128 = v0129;
    {
        popv(7);
        fn = elt(env, 11); /* !:dmtimeslst */
        return (*qfn1(fn))(qenv(fn), v0128);
    }

v0084:
    v0128 = v0129;
    {
        popv(7);
        fn = elt(env, 12); /* !:dmpluslst */
        return (*qfn1(fn))(qenv(fn), v0128);
    }

v0105:
    v0128 = qvalue(elt(env, 2)); /* nil */
    goto v0025;

v0019:
    v0128 = v0129;
    fn = elt(env, 13); /* dn!:simp */
    v0128 = (*qfn1(fn))(qenv(fn), v0128);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    v0128 = qcar(v0128);
    { popv(7); return onevalue(v0128); }
/* error exit handlers */
v0131:
    popv(7);
    return nil;
}



/* Code for fortassign */

static Lisp_Object CC_fortassign(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0024, v0057;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fortassign");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0024 = v0000;
/* end of prologue */
    v0057 = v0024;
    v0057 = qcdr(v0057);
    v0057 = qcar(v0057);
    v0024 = qcdr(v0024);
    v0024 = qcdr(v0024);
    v0024 = qcar(v0024);
    {
        fn = elt(env, 1); /* mkffortassign */
        return (*qfn2(fn))(qenv(fn), v0057, v0024);
    }
}



/* Code for setmatelem */

static Lisp_Object CC_setmatelem(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0151, v0152, v0111;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for setmatelem");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0001;
    stack[-3] = v0000;
/* end of prologue */
    v0151 = stack[-3];
    v0152 = Llength(nil, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    v0151 = (Lisp_Object)49; /* 3 */
    if (v0152 == v0151) goto v0058;
    v0152 = stack[-3];
    v0151 = elt(env, 1); /* "matrix element" */
    fn = elt(env, 9); /* typerr */
    v0151 = (*qfn2(fn))(qenv(fn), v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    goto v0058;

v0058:
    v0151 = stack[-3];
    v0151 = qcar(v0151);
    if (!symbolp(v0151)) v0151 = nil;
    else { v0151 = qfastgets(v0151);
           if (v0151 != nil) { v0151 = elt(v0151, 4); /* avalue */
#ifdef RECORD_GET
             if (v0151 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v0151 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v0151 == SPID_NOPROP) v0151 = nil; }}
#endif
    stack[-4] = v0151;
    v0151 = stack[-4];
    if (v0151 == nil) goto v0056;
    v0151 = stack[-4];
    v0152 = qcar(v0151);
    v0151 = elt(env, 3); /* matrix */
    v0151 = (v0152 == v0151 ? lisp_true : nil);
    v0151 = (v0151 == nil ? lisp_true : nil);
    goto v0007;

v0007:
    if (v0151 == nil) goto v0154;
    v0151 = stack[-3];
    v0152 = qcar(v0151);
    v0151 = elt(env, 4); /* "matrix" */
    fn = elt(env, 9); /* typerr */
    v0151 = (*qfn2(fn))(qenv(fn), v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    goto v0105;

v0105:
    v0151 = stack[-3];
    v0151 = qcdr(v0151);
    v0151 = qcar(v0151);
    fn = elt(env, 10); /* reval_without_mod */
    v0151 = (*qfn1(fn))(qenv(fn), v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    stack[0] = v0151;
    v0151 = stack[0];
    v0151 = integerp(v0151);
    if (v0151 == nil) goto v0041;
    v0152 = stack[0];
    v0151 = (Lisp_Object)1; /* 0 */
    v0151 = (Lisp_Object)lesseq2(v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    v0151 = v0151 ? lisp_true : nil;
    env = stack[-5];
    goto v0078;

v0078:
    if (v0151 == nil) goto v0155;
    v0152 = stack[0];
    v0151 = elt(env, 8); /* "positive integer" */
    fn = elt(env, 9); /* typerr */
    v0151 = (*qfn2(fn))(qenv(fn), v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    goto v0155;

v0155:
    v0151 = stack[-4];
    v0152 = qcdr(v0151);
    v0151 = stack[0];
    fn = elt(env, 11); /* nth */
    v0151 = (*qfn2(fn))(qenv(fn), v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    stack[-4] = v0151;
    v0151 = stack[-3];
    v0151 = qcdr(v0151);
    v0151 = qcdr(v0151);
    v0151 = qcar(v0151);
    fn = elt(env, 10); /* reval_without_mod */
    v0151 = (*qfn1(fn))(qenv(fn), v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    stack[0] = v0151;
    v0151 = stack[0];
    v0151 = integerp(v0151);
    if (v0151 == nil) goto v0156;
    v0152 = stack[0];
    v0151 = (Lisp_Object)1; /* 0 */
    v0151 = (Lisp_Object)lesseq2(v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    v0151 = v0151 ? lisp_true : nil;
    env = stack[-5];
    goto v0157;

v0157:
    if (v0151 == nil) goto v0135;
    v0152 = stack[0];
    v0151 = elt(env, 8); /* "positive integer" */
    fn = elt(env, 9); /* typerr */
    v0151 = (*qfn2(fn))(qenv(fn), v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    goto v0135;

v0135:
    v0152 = stack[-4];
    v0151 = stack[0];
    fn = elt(env, 12); /* pnth */
    v0152 = (*qfn2(fn))(qenv(fn), v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    v0151 = stack[-2];
        popv(6);
        return Lrplaca(nil, v0152, v0151);

v0156:
    v0151 = qvalue(elt(env, 2)); /* t */
    goto v0157;

v0041:
    v0151 = qvalue(elt(env, 2)); /* t */
    goto v0078;

v0154:
    v0151 = stack[-4];
    v0151 = qcdr(v0151);
    v0152 = qcar(v0151);
    stack[-4] = v0152;
    v0151 = elt(env, 5); /* mat */
    if (!consp(v0152)) goto v0069;
    v0152 = qcar(v0152);
    if (v0152 == v0151) goto v0105;
    else goto v0069;

v0069:
    stack[-1] = elt(env, 3); /* matrix */
    stack[0] = (Lisp_Object)161; /* 10 */
    v0111 = elt(env, 6); /* "Matrix" */
    v0151 = stack[-3];
    v0152 = qcar(v0151);
    v0151 = elt(env, 7); /* "not set" */
    v0151 = list3(v0111, v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    fn = elt(env, 13); /* rerror */
    v0151 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[0], v0151);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    goto v0105;

v0056:
    v0151 = qvalue(elt(env, 2)); /* t */
    goto v0007;
/* error exit handlers */
v0153:
    popv(6);
    return nil;
}



/* Code for fs!:prin!: */

static Lisp_Object CC_fsTprinT(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0089;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fs:prin:");
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
    v0089 = elt(env, 1); /* "[" */
    fn = elt(env, 3); /* prin2!* */
    v0089 = (*qfn1(fn))(qenv(fn), v0089);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-1];
    v0089 = stack[0];
    v0089 = qcdr(v0089);
    fn = elt(env, 4); /* fs!:prin */
    v0089 = (*qfn1(fn))(qenv(fn), v0089);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-1];
    v0089 = elt(env, 2); /* "]" */
    {
        popv(2);
        fn = elt(env, 3); /* prin2!* */
        return (*qfn1(fn))(qenv(fn), v0089);
    }
/* error exit handlers */
v0093:
    popv(2);
    return nil;
}



/* Code for inormmat */

static Lisp_Object CC_inormmat(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0164, v0107;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for inormmat");
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
    push5(nil, nil, nil, nil, nil);
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    v0164 = v0000;
/* end of prologue */
    stack[-6] = nil;
    stack[-5] = v0164;
    goto v0054;

v0054:
    v0164 = stack[-5];
    if (v0164 == nil) goto v0089;
    v0164 = stack[-5];
    v0164 = qcar(v0164);
    stack[-1] = v0164;
    v0164 = (Lisp_Object)17; /* 1 */
    stack[-7] = v0164;
    v0164 = stack[-1];
    stack[0] = v0164;
    goto v0022;

v0022:
    v0164 = stack[0];
    if (v0164 == nil) goto v0149;
    v0164 = stack[0];
    v0164 = qcar(v0164);
    v0107 = stack[-7];
    v0164 = qcdr(v0164);
    fn = elt(env, 2); /* ilcm */
    v0164 = (*qfn2(fn))(qenv(fn), v0107, v0164);
    nil = C_nil;
    if (exception_pending()) goto v0165;
    env = stack[-8];
    stack[-7] = v0164;
    v0164 = stack[0];
    v0164 = qcdr(v0164);
    stack[0] = v0164;
    goto v0022;

v0149:
    v0164 = stack[-1];
    stack[-4] = v0164;
    v0164 = stack[-4];
    if (v0164 == nil) goto v0014;
    v0164 = stack[-4];
    v0164 = qcar(v0164);
    v0107 = v0164;
    stack[0] = qcar(v0107);
    v0107 = stack[-7];
    v0164 = qcdr(v0164);
    v0164 = quot2(v0107, v0164);
    nil = C_nil;
    if (exception_pending()) goto v0165;
    env = stack[-8];
    v0164 = times2(stack[0], v0164);
    nil = C_nil;
    if (exception_pending()) goto v0165;
    env = stack[-8];
    v0164 = ncons(v0164);
    nil = C_nil;
    if (exception_pending()) goto v0165;
    env = stack[-8];
    stack[-2] = v0164;
    stack[-3] = v0164;
    goto v0080;

v0080:
    v0164 = stack[-4];
    v0164 = qcdr(v0164);
    stack[-4] = v0164;
    v0164 = stack[-4];
    if (v0164 == nil) goto v0148;
    stack[-1] = stack[-2];
    v0164 = stack[-4];
    v0164 = qcar(v0164);
    v0107 = v0164;
    stack[0] = qcar(v0107);
    v0107 = stack[-7];
    v0164 = qcdr(v0164);
    v0164 = quot2(v0107, v0164);
    nil = C_nil;
    if (exception_pending()) goto v0165;
    env = stack[-8];
    v0164 = times2(stack[0], v0164);
    nil = C_nil;
    if (exception_pending()) goto v0165;
    env = stack[-8];
    v0164 = ncons(v0164);
    nil = C_nil;
    if (exception_pending()) goto v0165;
    env = stack[-8];
    v0164 = Lrplacd(nil, stack[-1], v0164);
    nil = C_nil;
    if (exception_pending()) goto v0165;
    env = stack[-8];
    v0164 = stack[-2];
    v0164 = qcdr(v0164);
    stack[-2] = v0164;
    goto v0080;

v0148:
    v0164 = stack[-3];
    v0107 = v0164;
    goto v0005;

v0005:
    v0164 = stack[-6];
    v0164 = cons(v0107, v0164);
    nil = C_nil;
    if (exception_pending()) goto v0165;
    env = stack[-8];
    stack[-6] = v0164;
    v0164 = stack[-5];
    v0164 = qcdr(v0164);
    stack[-5] = v0164;
    goto v0054;

v0014:
    v0164 = qvalue(elt(env, 1)); /* nil */
    v0107 = v0164;
    goto v0005;

v0089:
    v0164 = stack[-6];
        popv(9);
        return Lreverse(nil, v0164);
/* error exit handlers */
v0165:
    popv(9);
    return nil;
}



/* Code for coeffs */

static Lisp_Object CC_coeffs(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0156, v0033;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for coeffs");
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
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-4] = v0000;
/* end of prologue */
    stack[-2] = nil;
    v0156 = stack[-4];
    v0156 = qcar(v0156);
    v0156 = qcar(v0156);
    v0156 = qcar(v0156);
    stack[-1] = v0156;
    v0156 = stack[-4];
    v0156 = qcar(v0156);
    v0156 = qcar(v0156);
    v0156 = qcdr(v0156);
    stack[-5] = v0156;
    goto v0082;

v0082:
    v0156 = stack[-4];
    if (!consp(v0156)) goto v0105;
    v0156 = stack[-4];
    v0156 = qcar(v0156);
    v0156 = (consp(v0156) ? nil : lisp_true);
    goto v0009;

v0009:
    if (v0156 == nil) goto v0043;
    v0156 = qvalue(elt(env, 2)); /* nil */
    goto v0025;

v0025:
    if (v0156 == nil) goto v0026;
    v0156 = stack[-4];
    v0156 = qcar(v0156);
    v0156 = qcar(v0156);
    v0156 = qcdr(v0156);
    stack[-3] = v0156;
    v0156 = (Lisp_Object)17; /* 1 */
    stack[0] = v0156;
    goto v0083;

v0083:
    v0033 = stack[-5];
    v0156 = stack[-3];
    v0156 = difference2(v0033, v0156);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-6];
    v0033 = sub1(v0156);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-6];
    v0156 = stack[0];
    v0156 = difference2(v0033, v0156);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-6];
    v0156 = Lminusp(nil, v0156);
    env = stack[-6];
    if (v0156 == nil) goto v0168;
    v0156 = stack[-4];
    v0156 = qcar(v0156);
    v0033 = qcdr(v0156);
    v0156 = stack[-2];
    v0156 = cons(v0033, v0156);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-6];
    stack[-2] = v0156;
    v0156 = stack[-4];
    v0156 = qcdr(v0156);
    stack[-4] = v0156;
    v0156 = stack[-3];
    stack[-5] = v0156;
    goto v0082;

v0168:
    v0033 = qvalue(elt(env, 2)); /* nil */
    v0156 = stack[-2];
    v0156 = cons(v0033, v0156);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-6];
    stack[-2] = v0156;
    v0156 = stack[0];
    v0156 = add1(v0156);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-6];
    stack[0] = v0156;
    goto v0083;

v0026:
    v0156 = (Lisp_Object)17; /* 1 */
    stack[0] = v0156;
    goto v0061;

v0061:
    v0156 = stack[-5];
    v0033 = sub1(v0156);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-6];
    v0156 = stack[0];
    v0156 = difference2(v0033, v0156);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-6];
    v0156 = Lminusp(nil, v0156);
    env = stack[-6];
    if (v0156 == nil) goto v0164;
    v0033 = stack[-4];
    v0156 = stack[-2];
    v0156 = cons(v0033, v0156);
    nil = C_nil;
    if (exception_pending()) goto v0115;
        popv(7);
        return Lnreverse(nil, v0156);

v0164:
    v0033 = qvalue(elt(env, 2)); /* nil */
    v0156 = stack[-2];
    v0156 = cons(v0033, v0156);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-6];
    stack[-2] = v0156;
    v0156 = stack[0];
    v0156 = add1(v0156);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-6];
    stack[0] = v0156;
    goto v0061;

v0043:
    v0156 = stack[-4];
    v0156 = qcar(v0156);
    v0156 = qcar(v0156);
    v0033 = qcar(v0156);
    v0156 = stack[-1];
    v0156 = (v0033 == v0156 ? lisp_true : nil);
    goto v0025;

v0105:
    v0156 = qvalue(elt(env, 1)); /* t */
    goto v0009;
/* error exit handlers */
v0115:
    popv(7);
    return nil;
}



/* Code for makecoeffpairs */

static Lisp_Object MS_CDECL CC_makecoeffpairs(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0087, v0086, v0127, v0021;
    Lisp_Object fn;
    Lisp_Object v0002, v0090, v0001, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "makecoeffpairs");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0001 = va_arg(aa, Lisp_Object);
    v0090 = va_arg(aa, Lisp_Object);
    v0002 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for makecoeffpairs");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push4(v0002,v0090,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0000,v0001,v0090,v0002);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0087 = v0002;
    v0086 = v0090;
    v0127 = v0001;
    v0021 = v0000;
/* end of prologue */
    fn = elt(env, 1); /* makecoeffpairs1 */
    v0087 = (*qfnn(fn))(qenv(fn), 4, v0021, v0127, v0086, v0087);
    errexit();
    v0087 = qcdr(v0087);
        return Lnreverse(nil, v0087);
}



/* Code for operator_fn */

static Lisp_Object CC_operator_fn(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0067, v0158;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for operator_fn");
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
    v0067 = stack[0];
    v0158 = qcar(v0067);
    v0067 = elt(env, 1); /* ((arcsinh . sinh) (arcsech . sech) (arccosh . cosh) (arccsch csch) (arctanh . tanh) (arccoth . coth)) 
*/
    v0067 = Latsoc(nil, v0158, v0067);
    stack[-1] = v0067;
    v0067 = stack[-1];
    if (v0067 == nil) goto v0022;
    v0067 = elt(env, 2); /* "<apply><inverse/>" */
    fn = elt(env, 8); /* printout */
    v0067 = (*qfn1(fn))(qenv(fn), v0067);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    env = stack[-2];
    v0067 = stack[-1];
    v0067 = qcdr(v0067);
    v0067 = Lprinc(nil, v0067);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    env = stack[-2];
    goto v0007;

v0007:
    v0158 = qvalue(elt(env, 6)); /* indent */
    v0067 = (Lisp_Object)49; /* 3 */
    v0067 = plus2(v0158, v0067);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    env = stack[-2];
    qvalue(elt(env, 6)) = v0067; /* indent */
    v0067 = stack[0];
    v0067 = qcdr(v0067);
    fn = elt(env, 9); /* multi_args */
    v0067 = (*qfn1(fn))(qenv(fn), v0067);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    env = stack[-2];
    v0158 = qvalue(elt(env, 6)); /* indent */
    v0067 = (Lisp_Object)49; /* 3 */
    v0067 = difference2(v0158, v0067);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    env = stack[-2];
    qvalue(elt(env, 6)) = v0067; /* indent */
    v0067 = elt(env, 7); /* "</apply>" */
    fn = elt(env, 8); /* printout */
    v0067 = (*qfn1(fn))(qenv(fn), v0067);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    v0067 = nil;
    { popv(3); return onevalue(v0067); }

v0022:
    v0067 = elt(env, 4); /* "<apply><fn><ci>" */
    fn = elt(env, 8); /* printout */
    v0067 = (*qfn1(fn))(qenv(fn), v0067);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    env = stack[-2];
    v0067 = stack[0];
    v0067 = qcar(v0067);
    v0067 = Lprinc(nil, v0067);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    env = stack[-2];
    v0067 = elt(env, 5); /* "</ci></fn>" */
    v0067 = Lprinc(nil, v0067);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    env = stack[-2];
    goto v0007;
/* error exit handlers */
v0076:
    popv(3);
    return nil;
}



/* Code for scar */

static Lisp_Object CC_scar(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0169, v0092;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for scar");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    stack[-1] = v0000;
/* end of prologue */

v0170:
    v0169 = stack[0];
    if (!consp(v0169)) goto v0073;
    v0092 = stack[-1];
    v0169 = stack[0];
    v0169 = qcar(v0169);
    if (equal(v0092, v0169)) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v0092 = stack[-1];
    v0169 = stack[0];
    v0169 = qcar(v0169);
    v0169 = CC_scar(env, v0092, v0169);
    nil = C_nil;
    if (exception_pending()) goto v0066;
    env = stack[-2];
    if (!(v0169 == nil)) { popv(3); return onevalue(v0169); }
    v0092 = stack[-1];
    v0169 = stack[0];
    v0169 = qcdr(v0169);
    stack[-1] = v0092;
    stack[0] = v0169;
    goto v0170;

v0073:
    v0169 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0169); }
/* error exit handlers */
v0066:
    popv(3);
    return nil;
}



/* Code for sroot1 */

static Lisp_Object CC_sroot1(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0137, v0151, v0152, v0111;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for sroot1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    stack[-3] = v0000;
/* end of prologue */
    stack[-2] = qvalue(elt(env, 1)); /* freevars */
    qvalue(elt(env, 1)) = nil; /* freevars */
    stack[-1] = qvalue(elt(env, 2)); /* substitution */
    qvalue(elt(env, 2)) = nil; /* substitution */
    v0151 = qvalue(elt(env, 3)); /* rpt */
    v0137 = elt(env, 4); /* inf */
    if (v0151 == v0137) goto v0010;
    v0151 = qvalue(elt(env, 3)); /* rpt */
    v0137 = (Lisp_Object)1; /* 0 */
    v0137 = (Lisp_Object)lesseq2(v0151, v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    v0137 = v0137 ? lisp_true : nil;
    env = stack[-5];
    goto v0023;

v0023:
    if (!(v0137 == nil)) goto v0054;
    v0137 = stack[-3];
    if (!consp(v0137)) goto v0079;
    v0137 = stack[-3];
    v0151 = qcar(v0137);
    v0137 = stack[0];
    v0137 = qcdr(v0137);
    v0137 = qcar(v0137);
    v0137 = qcar(v0137);
    v0137 = Lneq(nil, v0151, v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    goto v0017;

v0017:
    if (!(v0137 == nil)) goto v0054;
    v0137 = stack[0];
    v0137 = qcdr(v0137);
    v0137 = qcar(v0137);
    fn = elt(env, 12); /* findnewvars */
    v0151 = (*qfn1(fn))(qenv(fn), v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    v0137 = qvalue(elt(env, 5)); /* nil */
    fn = elt(env, 13); /* union */
    v0137 = (*qfn2(fn))(qenv(fn), v0151, v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    qvalue(elt(env, 1)) = v0137; /* freevars */
    v0137 = stack[0];
    v0137 = qcdr(v0137);
    v0137 = qcdr(v0137);
    v0137 = qcar(v0137);
    qvalue(elt(env, 2)) = v0137; /* substitution */
    v0137 = qvalue(elt(env, 1)); /* freevars */
    stack[-4] = v0137;
    goto v0167;

v0167:
    v0137 = stack[-4];
    if (v0137 == nil) goto v0069;
    v0137 = stack[-4];
    v0137 = qcar(v0137);
    fn = elt(env, 14); /* newenv */
    v0137 = (*qfn1(fn))(qenv(fn), v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    v0137 = stack[-4];
    v0137 = qcdr(v0137);
    stack[-4] = v0137;
    goto v0167;

v0069:
    v0137 = qvalue(elt(env, 7)); /* !*trpm */
    if (v0137 == nil) goto v0042;
    v0137 = elt(env, 8); /* "Trying rule  " */
    v0137 = Lprinc(nil, v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    v0137 = stack[0];
    fn = elt(env, 15); /* rprint */
    v0137 = (*qfn1(fn))(qenv(fn), v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    v0137 = elt(env, 9); /* "against      " */
    v0137 = Lprinc(nil, v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    v0137 = stack[-3];
    fn = elt(env, 15); /* rprint */
    v0137 = (*qfn1(fn))(qenv(fn), v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    goto v0042;

v0042:
    v0137 = stack[0];
    v0137 = qcdr(v0137);
    v0111 = qcar(v0137);
    v0152 = stack[-3];
    v0151 = qvalue(elt(env, 6)); /* t */
    v0137 = qvalue(elt(env, 5)); /* nil */
    fn = elt(env, 16); /* amatch */
    v0137 = (*qfnn(fn))(qenv(fn), 4, v0111, v0152, v0151, v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    stack[-4] = v0137;
    v0137 = qvalue(elt(env, 7)); /* !*trpm */
    if (v0137 == nil) goto v0161;
    v0137 = stack[-4];
    if (v0137 == nil) goto v0173;
    v0137 = elt(env, 10); /* "producing    " */
    v0137 = Lprinc(nil, v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    v0137 = stack[-4];
    fn = elt(env, 17); /* embed!-null!-fn */
    v0137 = (*qfn1(fn))(qenv(fn), v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    stack[-4] = v0137;
    fn = elt(env, 15); /* rprint */
    v0137 = (*qfn1(fn))(qenv(fn), v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    goto v0143;

v0143:
    v0137 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    goto v0161;

v0161:
    v0137 = qvalue(elt(env, 1)); /* freevars */
    stack[0] = v0137;
    goto v0157;

v0157:
    v0137 = stack[0];
    if (v0137 == nil) goto v0142;
    v0137 = stack[0];
    v0137 = qcar(v0137);
    fn = elt(env, 18); /* restorenv */
    v0137 = (*qfn1(fn))(qenv(fn), v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    v0137 = stack[0];
    v0137 = qcdr(v0137);
    stack[0] = v0137;
    goto v0157;

v0142:
    v0137 = stack[-4];
    if (v0137 == nil) goto v0174;
    v0151 = qvalue(elt(env, 3)); /* rpt */
    v0137 = elt(env, 4); /* inf */
    if (v0151 == v0137) goto v0052;
    v0137 = qvalue(elt(env, 3)); /* rpt */
    v0137 = sub1(v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    qvalue(elt(env, 3)) = v0137; /* rpt */
    goto v0052;

v0052:
    v0137 = stack[-4];
    fn = elt(env, 17); /* embed!-null!-fn */
    v0137 = (*qfn1(fn))(qenv(fn), v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    goto v0020;

v0020:
    qvalue(elt(env, 2)) = stack[-1]; /* substitution */
    qvalue(elt(env, 1)) = stack[-2]; /* freevars */
    { popv(6); return onevalue(v0137); }

v0174:
    v0137 = stack[-3];
    goto v0020;

v0173:
    v0137 = elt(env, 11); /* "failed" */
    v0137 = Lprinc(nil, v0137);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    v0137 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-5];
    goto v0143;

v0054:
    v0137 = stack[-3];
    goto v0020;

v0079:
    v0137 = qvalue(elt(env, 6)); /* t */
    goto v0017;

v0010:
    v0137 = qvalue(elt(env, 5)); /* nil */
    goto v0023;
/* error exit handlers */
v0153:
    env = stack[-5];
    qvalue(elt(env, 2)) = stack[-1]; /* substitution */
    qvalue(elt(env, 1)) = stack[-2]; /* freevars */
    popv(6);
    return nil;
}



/* Code for mkforttab */

static Lisp_Object MS_CDECL CC_mkforttab(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0057, v0008;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "mkforttab");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mkforttab");
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
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* end of prologue */
    stack[0] = elt(env, 1); /* forttab */
    v0008 = qvalue(elt(env, 2)); /* fortcurrind!* */
    v0057 = (Lisp_Object)97; /* 6 */
    v0057 = plus2(v0008, v0057);
    nil = C_nil;
    if (exception_pending()) goto v0026;
    {
        Lisp_Object v0082 = stack[0];
        popv(1);
        return list2(v0082, v0057);
    }
/* error exit handlers */
v0026:
    popv(1);
    return nil;
}



/* Code for subfindices */

static Lisp_Object CC_subfindices(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0184, v0185;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for subfindices");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */
    stack[-3] = qvalue(elt(env, 1)); /* alglist!* */
    qvalue(elt(env, 1)) = nil; /* alglist!* */
    v0184 = qvalue(elt(env, 2)); /* nil */
    v0184 = ncons(v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    qvalue(elt(env, 1)) = v0184; /* alglist!* */
    v0184 = stack[-2];
    if (!consp(v0184)) goto v0023;
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0184 = (consp(v0184) ? nil : lisp_true);
    goto v0085;

v0085:
    if (v0184 == nil) goto v0043;
    v0185 = stack[-2];
    v0184 = (Lisp_Object)17; /* 1 */
    v0184 = cons(v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    goto v0073;

v0073:
    qvalue(elt(env, 1)) = stack[-3]; /* alglist!* */
    { popv(5); return onevalue(v0184); }

v0043:
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    if (!consp(v0184)) goto v0013;
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    fn = elt(env, 5); /* sfp */
    v0184 = (*qfn1(fn))(qenv(fn), v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    if (v0184 == nil) goto v0049;
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0185 = qcar(v0184);
    v0184 = stack[-1];
    v0185 = CC_subfindices(env, v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0184 = qcdr(v0184);
    fn = elt(env, 6); /* exptsq */
    v0184 = (*qfn2(fn))(qenv(fn), v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    stack[0] = v0184;
    goto v0128;

v0128:
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0185 = qcdr(v0184);
    v0184 = stack[-1];
    v0184 = CC_subfindices(env, v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    fn = elt(env, 7); /* multsq */
    stack[0] = (*qfn2(fn))(qenv(fn), stack[0], v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    v0184 = stack[-2];
    v0185 = qcdr(v0184);
    v0184 = stack[-1];
    v0184 = CC_subfindices(env, v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    fn = elt(env, 8); /* addsq */
    v0184 = (*qfn2(fn))(qenv(fn), stack[0], v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    goto v0073;

v0049:
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    if (!symbolp(v0184)) v0184 = nil;
    else { v0184 = qfastgets(v0184);
           if (v0184 != nil) { v0184 = elt(v0184, 16); /* indexvar */
#ifdef RECORD_GET
             if (v0184 == SPID_NOPROP)
                record_get(elt(fastget_names, 16), 0),
                v0184 = nil;
             else record_get(elt(fastget_names, 16), 1),
                v0184 = lisp_true; }
           else record_get(elt(fastget_names, 16), 0); }
#else
             if (v0184 == SPID_NOPROP) v0184 = nil; else v0184 = lisp_true; }}
#endif
    if (v0184 == nil) goto v0117;
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    stack[0] = qcar(v0184);
    v0185 = stack[-1];
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0184 = qcdr(v0184);
    v0184 = Lsubla(nil, v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    v0184 = cons(stack[0], v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    fn = elt(env, 9); /* simpindexvar */
    v0185 = (*qfn1(fn))(qenv(fn), v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0184 = qcdr(v0184);
    fn = elt(env, 6); /* exptsq */
    v0184 = (*qfn2(fn))(qenv(fn), v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    stack[0] = v0184;
    goto v0128;

v0117:
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0185 = qcar(v0184);
    v0184 = elt(env, 4); /* (wedge d partdf innerprod liedf hodge vardf) 
*/
    v0184 = Lmemq(nil, v0185, v0184);
    if (v0184 == nil) goto v0152;
    v0185 = stack[-1];
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    fn = elt(env, 10); /* subindk */
    v0184 = (*qfn2(fn))(qenv(fn), v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    fn = elt(env, 11); /* simp */
    v0185 = (*qfn1(fn))(qenv(fn), v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0184 = qcar(v0184);
    v0184 = qcdr(v0184);
    fn = elt(env, 6); /* exptsq */
    v0184 = (*qfn2(fn))(qenv(fn), v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    stack[0] = v0184;
    goto v0128;

v0152:
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0185 = qcar(v0184);
    v0184 = (Lisp_Object)17; /* 1 */
    v0184 = cons(v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    v0185 = ncons(v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    v0184 = (Lisp_Object)17; /* 1 */
    v0184 = cons(v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    stack[0] = v0184;
    goto v0128;

v0013:
    v0184 = stack[-2];
    v0184 = qcar(v0184);
    v0185 = qcar(v0184);
    v0184 = (Lisp_Object)17; /* 1 */
    v0184 = cons(v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    v0185 = ncons(v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    v0184 = (Lisp_Object)17; /* 1 */
    v0184 = cons(v0185, v0184);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-4];
    stack[0] = v0184;
    goto v0128;

v0023:
    v0184 = qvalue(elt(env, 3)); /* t */
    goto v0085;
/* error exit handlers */
v0186:
    env = stack[-4];
    qvalue(elt(env, 1)) = stack[-3]; /* alglist!* */
    popv(5);
    return nil;
}



/* Code for defined_all_edge */

static Lisp_Object MS_CDECL CC_defined_all_edge(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0083, v0084, v0046;
    Lisp_Object fn;
    Lisp_Object v0090, v0001, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "defined_all_edge");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0001 = va_arg(aa, Lisp_Object);
    v0090 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for defined_all_edge");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0090,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0001,v0090);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0090;
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */

v0020:
    v0083 = stack[-2];
    if (v0083 == nil) goto v0054;
    v0083 = stack[-2];
    v0084 = qcar(v0083);
    v0083 = stack[0];
    fn = elt(env, 3); /* def_edge */
    v0083 = (*qfn2(fn))(qenv(fn), v0084, v0083);
    nil = C_nil;
    if (exception_pending()) goto v0163;
    env = stack[-4];
    if (v0083 == nil) goto v0015;
    v0083 = stack[-2];
    v0083 = qcar(v0083);
    fn = elt(env, 4); /* p_def_edge */
    v0083 = (*qfn1(fn))(qenv(fn), v0083);
    nil = C_nil;
    if (exception_pending()) goto v0163;
    env = stack[-4];
    if (v0083 == nil) goto v0059;
    v0083 = qvalue(elt(env, 2)); /* t */
    { popv(5); return onevalue(v0083); }

v0059:
    v0084 = stack[-1];
    v0083 = stack[-2];
    stack[0] = Lnconc(nil, v0084, v0083);
    nil = C_nil;
    if (exception_pending()) goto v0163;
    env = stack[-4];
    v0083 = stack[-2];
    v0083 = qcar(v0083);
    v0083 = qcdr(v0083);
    v0046 = qcar(v0083);
    v0084 = qvalue(elt(env, 2)); /* t */
    v0083 = qvalue(elt(env, 1)); /* nil */
    v0083 = list2star(v0046, v0084, v0083);
    nil = C_nil;
    if (exception_pending()) goto v0163;
    env = stack[-4];
    {
        Lisp_Object v0088 = stack[0];
        popv(5);
        fn = elt(env, 5); /* rep_edge_prop_ */
        return (*qfn2(fn))(qenv(fn), v0088, v0083);
    }

v0015:
    v0083 = stack[-2];
    v0083 = qcdr(v0083);
    stack[-3] = v0083;
    v0083 = stack[-2];
    v0084 = qcar(v0083);
    v0083 = stack[-1];
    v0083 = cons(v0084, v0083);
    nil = C_nil;
    if (exception_pending()) goto v0163;
    env = stack[-4];
    stack[-1] = v0083;
    v0083 = stack[-3];
    stack[-2] = v0083;
    goto v0020;

v0054:
    v0083 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0083); }
/* error exit handlers */
v0163:
    popv(5);
    return nil;
}



/* Code for sign!-abs */

static Lisp_Object CC_signKabs(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0066, v0149;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for sign-abs");
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
    v0066 = stack[0];
    fn = elt(env, 3); /* sign!-of */
    v0066 = (*qfn1(fn))(qenv(fn), v0066);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-2];
    stack[-1] = v0066;
    v0066 = stack[-1];
    if (is_number(v0066)) goto v0026;
    v0066 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0066); }

v0026:
    v0149 = stack[-1];
    v0066 = (Lisp_Object)1; /* 0 */
    v0066 = (Lisp_Object)lessp2(v0149, v0066);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    v0066 = v0066 ? lisp_true : nil;
    env = stack[-2];
    if (v0066 == nil) goto v0056;
    v0149 = elt(env, 2); /* minus */
    v0066 = stack[0];
    v0066 = list2(v0149, v0066);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-2];
    goto v0024;

v0024:
    {
        popv(3);
        fn = elt(env, 4); /* simp */
        return (*qfn1(fn))(qenv(fn), v0066);
    }

v0056:
    v0149 = stack[-1];
    v0066 = (Lisp_Object)1; /* 0 */
    if (v0149 == v0066) goto v0006;
    v0066 = stack[0];
    goto v0024;

v0006:
    v0066 = (Lisp_Object)1; /* 0 */
    goto v0024;
/* error exit handlers */
v0095:
    popv(3);
    return nil;
}



/* Code for mv!-compact */

static Lisp_Object MS_CDECL CC_mvKcompact(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0032, v0133, v0136;
    Lisp_Object fn;
    Lisp_Object v0090, v0001, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "mv-compact");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0001 = va_arg(aa, Lisp_Object);
    v0090 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mv-compact");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0090,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0001,v0090);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0090;
    stack[-2] = v0001;
    stack[-3] = v0000;
/* end of prologue */

v0170:
    v0032 = stack[-3];
    if (v0032 == nil) goto v0054;
    v0133 = stack[-3];
    v0032 = stack[-2];
    fn = elt(env, 2); /* mv!-pow!-chk */
    v0032 = (*qfn2(fn))(qenv(fn), v0133, v0032);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-5];
    stack[-4] = v0032;
    if (v0032 == nil) goto v0076;
    stack[0] = stack[-3];
    v0133 = stack[-4];
    v0032 = stack[-2];
    fn = elt(env, 3); /* mv!-pow!-mv!-!+ */
    v0032 = (*qfn2(fn))(qenv(fn), v0133, v0032);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-5];
    fn = elt(env, 4); /* mv!-compact2 */
    v0032 = (*qfn2(fn))(qenv(fn), stack[0], v0032);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-5];
    stack[0] = v0032;
    if (v0032 == nil) goto v0076;
    v0136 = stack[0];
    v0133 = stack[-2];
    v0032 = stack[-1];
    stack[-3] = v0136;
    stack[-2] = v0133;
    stack[-1] = v0032;
    goto v0170;

v0076:
    v0133 = stack[-3];
    v0032 = stack[-2];
    v0032 = qcdr(v0032);
    fn = elt(env, 2); /* mv!-pow!-chk */
    v0032 = (*qfn2(fn))(qenv(fn), v0133, v0032);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-5];
    stack[-4] = v0032;
    if (v0032 == nil) goto v0107;
    v0133 = stack[-4];
    v0032 = stack[-2];
    v0032 = qcar(v0032);
    v0032 = qcar(v0032);
    fn = elt(env, 5); /* mv!-pow!-!+ */
    v0133 = (*qfn2(fn))(qenv(fn), v0133, v0032);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-5];
    stack[0] = v0133;
    v0032 = stack[-1];
    fn = elt(env, 6); /* mv!-pow!-assoc */
    v0032 = (*qfn2(fn))(qenv(fn), v0133, v0032);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-5];
    if (v0032 == nil) goto v0123;
    v0032 = qvalue(elt(env, 1)); /* nil */
    goto v0081;

v0081:
    if (v0032 == nil) goto v0107;
    v0136 = stack[0];
    v0133 = stack[-2];
    v0032 = stack[-1];
    stack[-3] = v0136;
    stack[-2] = v0133;
    stack[-1] = v0032;
    goto v0170;

v0107:
    v0032 = stack[-3];
    stack[0] = qcdr(v0032);
    v0032 = stack[-3];
    v0133 = qcar(v0032);
    v0032 = stack[-1];
    v0032 = cons(v0133, v0032);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-5];
    stack[-3] = stack[0];
    stack[-1] = v0032;
    goto v0170;

v0123:
    v0136 = stack[0];
    v0133 = (Lisp_Object)1; /* 0 */
    v0032 = stack[-3];
    stack[0] = acons(v0136, v0133, v0032);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-5];
    v0133 = stack[-4];
    v0032 = stack[-2];
    fn = elt(env, 3); /* mv!-pow!-mv!-!+ */
    v0032 = (*qfn2(fn))(qenv(fn), v0133, v0032);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-5];
    fn = elt(env, 4); /* mv!-compact2 */
    v0032 = (*qfn2(fn))(qenv(fn), stack[0], v0032);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-5];
    stack[0] = v0032;
    goto v0081;

v0054:
    v0032 = stack[-1];
    {
        popv(6);
        fn = elt(env, 7); /* mv!-reverse */
        return (*qfn1(fn))(qenv(fn), v0032);
    }
/* error exit handlers */
v0110:
    popv(6);
    return nil;
}



/* Code for polynomlistautoreduce */

static Lisp_Object CC_polynomlistautoreduce(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0193, v0194, v0195;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for polynomlistautoreduce");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-3] = v0001;
    stack[-4] = v0000;
/* end of prologue */
    v0193 = qvalue(elt(env, 1)); /* nil */
    v0193 = ncons(v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    stack[-5] = v0193;
    goto v0085;

v0085:
    v0193 = stack[-4];
    v0193 = qcar(v0193);
    if (v0193 == nil) goto v0108;
    v0195 = stack[-5];
    v0193 = stack[-4];
    v0194 = qcar(v0193);
    v0193 = stack[-3];
    fn = elt(env, 2); /* polynomlistreduce */
    v0193 = (*qfnn(fn))(qenv(fn), 3, v0195, v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    stack[-2] = v0193;
    v0194 = stack[-4];
    v0193 = stack[-4];
    v0193 = qcdr(v0193);
    v0193 = qcar(v0193);
    v0194 = Lrplaca(nil, v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    v0193 = stack[-4];
    v0193 = qcdr(v0193);
    v0193 = qcdr(v0193);
    v0193 = Lrplacd(nil, v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    v0193 = stack[-2];
    v0193 = qcar(v0193);
    if (v0193 == nil) goto v0085;
    v0193 = stack[-2];
    v0193 = qcar(v0193);
    stack[-1] = v0193;
    v0193 = stack[-5];
    stack[0] = v0193;
    goto v0015;

v0015:
    v0193 = stack[0];
    v0193 = qcar(v0193);
    if (v0193 == nil) goto v0197;
    v0193 = stack[0];
    v0193 = qcar(v0193);
    v0194 = qcar(v0193);
    v0193 = stack[-1];
    fn = elt(env, 3); /* monomisdivisibleby */
    v0193 = (*qfn2(fn))(qenv(fn), v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    if (v0193 == nil) goto v0160;
    v0194 = stack[-4];
    v0193 = stack[0];
    v0193 = qcar(v0193);
    fn = elt(env, 4); /* pushback */
    v0193 = (*qfn2(fn))(qenv(fn), v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    v0194 = stack[0];
    v0193 = stack[0];
    v0193 = qcdr(v0193);
    v0193 = qcar(v0193);
    v0194 = Lrplaca(nil, v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    v0193 = stack[0];
    v0193 = qcdr(v0193);
    v0193 = qcdr(v0193);
    v0193 = Lrplacd(nil, v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    goto v0015;

v0160:
    v0193 = stack[0];
    v0193 = qcdr(v0193);
    stack[0] = v0193;
    goto v0015;

v0197:
    v0194 = stack[-5];
    v0193 = stack[-2];
    fn = elt(env, 4); /* pushback */
    v0193 = (*qfn2(fn))(qenv(fn), v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    goto v0085;

v0108:
    v0193 = stack[-5];
    stack[0] = v0193;
    goto v0198;

v0198:
    v0193 = stack[0];
    v0193 = qcar(v0193);
    if (v0193 == nil) { Lisp_Object res = stack[-5]; popv(7); return onevalue(res); }
    v0193 = stack[0];
    v0193 = qcar(v0193);
    stack[-2] = v0193;
    v0194 = stack[0];
    v0193 = stack[0];
    v0193 = qcdr(v0193);
    v0193 = qcar(v0193);
    v0194 = Lrplaca(nil, v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    v0193 = stack[0];
    v0193 = qcdr(v0193);
    v0193 = qcdr(v0193);
    v0193 = Lrplacd(nil, v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    v0195 = stack[-5];
    v0194 = stack[-2];
    v0193 = stack[-3];
    fn = elt(env, 2); /* polynomlistreduce */
    v0193 = (*qfnn(fn))(qenv(fn), 3, v0195, v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    stack[-2] = v0193;
    v0193 = stack[-2];
    if (v0193 == nil) goto v0198;
    v0193 = stack[-2];
    v0193 = qcar(v0193);
    if (v0193 == nil) goto v0198;
    stack[-1] = stack[0];
    v0193 = stack[0];
    v0194 = qcar(v0193);
    v0193 = stack[0];
    v0193 = qcdr(v0193);
    v0193 = cons(v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    v0194 = Lrplacd(nil, stack[-1], v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    v0193 = stack[-2];
    v0193 = Lrplaca(nil, v0194, v0193);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-6];
    v0193 = stack[0];
    v0193 = qcdr(v0193);
    stack[0] = v0193;
    goto v0198;
/* error exit handlers */
v0196:
    popv(7);
    return nil;
}



/* Code for girationalize!: */

static Lisp_Object CC_girationalizeT(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0039, v0192, v0132;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for girationalize:");
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
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-4] = v0000;
/* end of prologue */
    stack[-5] = nil;
    stack[-3] = qvalue(elt(env, 1)); /* !*gcd */
    qvalue(elt(env, 1)) = nil; /* !*gcd */
    v0039 = qvalue(elt(env, 2)); /* t */
    qvalue(elt(env, 1)) = v0039; /* !*gcd */
    stack[-1] = stack[-5];
    v0039 = stack[-4];
    v0039 = qcdr(v0039);
    stack[-5] = v0039;
    fn = elt(env, 4); /* conjgd */
    v0039 = (*qfn1(fn))(qenv(fn), v0039);
    nil = C_nil;
    if (exception_pending()) goto v0122;
    env = stack[-6];
    stack[0] = v0039;
    if (equal(stack[-1], v0039)) goto v0054;
    stack[-2] = stack[0];
    v0192 = stack[-5];
    v0039 = stack[0];
    fn = elt(env, 5); /* addf */
    stack[-1] = (*qfn2(fn))(qenv(fn), v0192, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0122;
    env = stack[-6];
    v0039 = stack[-5];
    fn = elt(env, 6); /* negf */
    v0039 = (*qfn1(fn))(qenv(fn), v0039);
    nil = C_nil;
    if (exception_pending()) goto v0122;
    env = stack[-6];
    fn = elt(env, 5); /* addf */
    stack[0] = (*qfn2(fn))(qenv(fn), stack[0], v0039);
    nil = C_nil;
    if (exception_pending()) goto v0122;
    env = stack[-6];
    v0132 = elt(env, 3); /* !:gi!: */
    v0192 = (Lisp_Object)1; /* 0 */
    v0039 = (Lisp_Object)17; /* 1 */
    v0039 = list2star(v0132, v0192, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0122;
    env = stack[-6];
    fn = elt(env, 7); /* multf */
    v0039 = (*qfn2(fn))(qenv(fn), stack[0], v0039);
    nil = C_nil;
    if (exception_pending()) goto v0122;
    env = stack[-6];
    fn = elt(env, 8); /* gcdf */
    v0192 = (*qfn2(fn))(qenv(fn), stack[-1], v0039);
    nil = C_nil;
    if (exception_pending()) goto v0122;
    env = stack[-6];
    v0039 = (Lisp_Object)33; /* 2 */
    fn = elt(env, 9); /* quotf */
    v0039 = (*qfn2(fn))(qenv(fn), v0192, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0122;
    env = stack[-6];
    fn = elt(env, 10); /* quotf!-fail */
    v0039 = (*qfn2(fn))(qenv(fn), stack[-2], v0039);
    nil = C_nil;
    if (exception_pending()) goto v0122;
    env = stack[-6];
    stack[0] = v0039;
    v0039 = stack[-4];
    v0192 = qcar(v0039);
    v0039 = stack[0];
    fn = elt(env, 7); /* multf */
    stack[-1] = (*qfn2(fn))(qenv(fn), v0192, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0122;
    env = stack[-6];
    v0192 = stack[-5];
    v0039 = stack[0];
    fn = elt(env, 7); /* multf */
    v0039 = (*qfn2(fn))(qenv(fn), v0192, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0122;
    env = stack[-6];
    fn = elt(env, 11); /* gigcdsq */
    v0039 = (*qfn2(fn))(qenv(fn), stack[-1], v0039);
    nil = C_nil;
    if (exception_pending()) goto v0122;
    env = stack[-6];
    goto v0019;

v0019:
    qvalue(elt(env, 1)) = stack[-3]; /* !*gcd */
    { popv(7); return onevalue(v0039); }

v0054:
    v0039 = stack[-4];
    goto v0019;
/* error exit handlers */
v0122:
    env = stack[-6];
    qvalue(elt(env, 1)) = stack[-3]; /* !*gcd */
    popv(7);
    return nil;
}



/* Code for pasf_dnf */

static Lisp_Object CC_pasf_dnf(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0025, v0012;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pasf_dnf");
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
    v0012 = stack[0];
    v0025 = elt(env, 1); /* and */
    fn = elt(env, 3); /* pasf_puregconp */
    v0025 = (*qfn2(fn))(qenv(fn), v0012, v0025);
    nil = C_nil;
    if (exception_pending()) goto v0077;
    env = stack[-1];
    if (!(v0025 == nil)) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v0025 = stack[0];
    fn = elt(env, 4); /* pasf_pnf */
    v0012 = (*qfn1(fn))(qenv(fn), v0025);
    nil = C_nil;
    if (exception_pending()) goto v0077;
    env = stack[-1];
    v0025 = elt(env, 2); /* dnf */
    {
        popv(2);
        fn = elt(env, 5); /* pasf_pbnf */
        return (*qfn2(fn))(qenv(fn), v0012, v0025);
    }
/* error exit handlers */
v0077:
    popv(2);
    return nil;
}



/* Code for limitom */

static Lisp_Object CC_limitom(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0098, v0099, v0078;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for limitom");
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
    v0099 = v0000;
/* end of prologue */
    v0098 = v0099;
    v0098 = qcdr(v0098);
    v0098 = qcdr(v0098);
    v0098 = qcar(v0098);
    stack[-2] = v0098;
    v0098 = v0099;
    v0098 = qcdr(v0098);
    v0098 = qcdr(v0098);
    v0098 = qcdr(v0098);
    v0098 = qcar(v0098);
    stack[0] = v0098;
    v0098 = v0099;
    v0098 = Lreverse(nil, v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    v0098 = qcar(v0098);
    stack[-3] = v0098;
    v0098 = elt(env, 1); /* "<OMA>" */
    fn = elt(env, 12); /* printout */
    v0098 = (*qfn1(fn))(qenv(fn), v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    v0098 = qvalue(elt(env, 2)); /* t */
    fn = elt(env, 13); /* indent!* */
    v0098 = (*qfn1(fn))(qenv(fn), v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    v0098 = elt(env, 3); /* "<OMS cd=""limit1"" name=""limit""/>" */
    fn = elt(env, 12); /* printout */
    v0098 = (*qfn1(fn))(qenv(fn), v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    v0098 = stack[0];
    v0099 = qcar(v0098);
    v0098 = elt(env, 4); /* lowlimit */
    if (!(v0099 == v0098)) goto v0149;
    v0098 = stack[0];
    v0098 = qcdr(v0098);
    v0098 = qcar(v0098);
    fn = elt(env, 14); /* objectom */
    v0098 = (*qfn1(fn))(qenv(fn), v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    v0098 = elt(env, 5); /* "<OMS cd=""limit1"" name=""null""/>" */
    fn = elt(env, 12); /* printout */
    v0098 = (*qfn1(fn))(qenv(fn), v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    goto v0149;

v0149:
    v0098 = stack[0];
    v0099 = qcar(v0098);
    v0098 = elt(env, 6); /* condition */
    if (!(v0099 == v0098)) goto v0084;
    v0098 = stack[0];
    v0098 = qcdr(v0098);
    v0098 = qcar(v0098);
    v0098 = Lreverse(nil, v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    v0098 = qcar(v0098);
    fn = elt(env, 14); /* objectom */
    v0098 = (*qfn1(fn))(qenv(fn), v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    v0098 = stack[0];
    v0098 = qcdr(v0098);
    v0098 = qcar(v0098);
    v0098 = qcdr(v0098);
    v0098 = qcar(v0098);
    v0098 = qcar(v0098);
    v0098 = qcdr(v0098);
    v0098 = qcar(v0098);
    stack[0] = v0098;
    v0098 = elt(env, 7); /* "<OMS cd=""limit1"" name=""" */
    fn = elt(env, 12); /* printout */
    v0098 = (*qfn1(fn))(qenv(fn), v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    v0098 = stack[0];
    v0098 = Lprinc(nil, v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    v0098 = elt(env, 8); /* """/>" */
    v0098 = Lprinc(nil, v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    goto v0084;

v0084:
    stack[-1] = elt(env, 9); /* limit */
    stack[0] = qvalue(elt(env, 10)); /* nil */
    v0078 = stack[-2];
    v0099 = stack[-3];
    v0098 = qvalue(elt(env, 10)); /* nil */
    v0098 = list2star(v0078, v0099, v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    v0098 = list2star(stack[-1], stack[0], v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    fn = elt(env, 15); /* lambdaom */
    v0098 = (*qfn1(fn))(qenv(fn), v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    v0098 = qvalue(elt(env, 10)); /* nil */
    fn = elt(env, 13); /* indent!* */
    v0098 = (*qfn1(fn))(qenv(fn), v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-4];
    v0098 = elt(env, 11); /* "</OMA>" */
    fn = elt(env, 12); /* printout */
    v0098 = (*qfn1(fn))(qenv(fn), v0098);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    v0098 = nil;
    { popv(5); return onevalue(v0098); }
/* error exit handlers */
v0100:
    popv(5);
    return nil;
}



/* Code for f2dip */

static Lisp_Object CC_f2dip(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0023;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for f2dip");
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
    v0023 = v0000;
/* end of prologue */
    stack[-1] = v0023;
    fn = elt(env, 1); /* evzero */
    stack[0] = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0008;
    env = stack[-2];
    v0023 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 2); /* bcfd */
    v0023 = (*qfn1(fn))(qenv(fn), v0023);
    nil = C_nil;
    if (exception_pending()) goto v0008;
    env = stack[-2];
    {
        Lisp_Object v0150 = stack[-1];
        Lisp_Object v0026 = stack[0];
        popv(3);
        fn = elt(env, 3); /* f2dip1 */
        return (*qfnn(fn))(qenv(fn), 3, v0150, v0026, v0023);
    }
/* error exit handlers */
v0008:
    popv(3);
    return nil;
}



/* Code for split!-comfac!-part */

static Lisp_Object CC_splitKcomfacKpart(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0085, v0023, v0024;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for split-comfac-part");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0085 = v0000;
/* end of prologue */
    v0024 = v0085;
    v0023 = (Lisp_Object)17; /* 1 */
    v0085 = (Lisp_Object)17; /* 1 */
    {
        fn = elt(env, 1); /* split!-comfac */
        return (*qfnn(fn))(qenv(fn), 3, v0024, v0023, v0085);
    }
}



/* Code for mv2sf */

static Lisp_Object CC_mv2sf(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0075, v0080, v0076;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mv2sf");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    stack[-1] = v0000;
/* end of prologue */
    stack[-2] = nil;
    goto v0020;

v0020:
    v0075 = stack[-1];
    if (v0075 == nil) goto v0058;
    v0075 = stack[-1];
    v0075 = qcar(v0075);
    v0076 = qcar(v0075);
    v0075 = stack[-1];
    v0075 = qcar(v0075);
    v0080 = qcdr(v0075);
    v0075 = stack[0];
    fn = elt(env, 2); /* mv2sf1 */
    v0080 = (*qfnn(fn))(qenv(fn), 3, v0076, v0080, v0075);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    env = stack[-3];
    v0075 = stack[-2];
    v0075 = cons(v0080, v0075);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    env = stack[-3];
    stack[-2] = v0075;
    v0075 = stack[-1];
    v0075 = qcdr(v0075);
    stack[-1] = v0075;
    goto v0020;

v0058:
    v0075 = qvalue(elt(env, 1)); /* nil */
    v0080 = v0075;
    goto v0089;

v0089:
    v0075 = stack[-2];
    if (v0075 == nil) { popv(4); return onevalue(v0080); }
    v0075 = stack[-2];
    v0075 = qcar(v0075);
    fn = elt(env, 3); /* addf */
    v0075 = (*qfn2(fn))(qenv(fn), v0075, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0015;
    env = stack[-3];
    v0080 = v0075;
    v0075 = stack[-2];
    v0075 = qcdr(v0075);
    stack[-2] = v0075;
    goto v0089;
/* error exit handlers */
v0015:
    popv(4);
    return nil;
}



/* Code for polynomreduceby */

static Lisp_Object CC_polynomreduceby(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0070, v0145;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for polynomreduceby");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */
    stack[-3] = nil;
    goto v0054;

v0054:
    v0070 = stack[-3];
    if (v0070 == nil) goto v0108;
    v0070 = qvalue(elt(env, 3)); /* fluidbibasisreductionsmade */
    v0070 = (Lisp_Object)((int32_t)(v0070) + 0x10);
    qvalue(elt(env, 3)) = v0070; /* fluidbibasisreductionsmade */
    v0070 = nil;
    { popv(5); return onevalue(v0070); }

v0108:
    v0070 = stack[-2];
    stack[0] = v0070;
    goto v0082;

v0082:
    v0070 = stack[0];
    v0070 = qcar(v0070);
    if (v0070 == nil) goto v0026;
    v0070 = stack[0];
    v0145 = qcar(v0070);
    v0070 = stack[-1];
    v0070 = qcar(v0070);
    fn = elt(env, 4); /* monomisdivisibleby */
    v0070 = (*qfn2(fn))(qenv(fn), v0145, v0070);
    nil = C_nil;
    if (exception_pending()) goto v0071;
    env = stack[-4];
    if (!(v0070 == nil)) goto v0026;
    v0070 = stack[0];
    v0070 = qcdr(v0070);
    stack[0] = v0070;
    goto v0082;

v0026:
    v0070 = stack[0];
    v0070 = qcar(v0070);
    if (v0070 == nil) goto v0044;
    v0070 = stack[0];
    v0145 = qcar(v0070);
    v0070 = stack[-1];
    v0070 = qcar(v0070);
    fn = elt(env, 5); /* monomdivide */
    v0070 = (*qfn2(fn))(qenv(fn), v0145, v0070);
    nil = C_nil;
    if (exception_pending()) goto v0071;
    env = stack[-4];
    stack[0] = stack[-2];
    v0145 = stack[-1];
    fn = elt(env, 6); /* polynommultiplybymonom */
    v0070 = (*qfn2(fn))(qenv(fn), v0145, v0070);
    nil = C_nil;
    if (exception_pending()) goto v0071;
    env = stack[-4];
    fn = elt(env, 7); /* polynomadd */
    v0070 = (*qfn2(fn))(qenv(fn), stack[0], v0070);
    nil = C_nil;
    if (exception_pending()) goto v0071;
    env = stack[-4];
    goto v0054;

v0044:
    v0070 = qvalue(elt(env, 2)); /* t */
    stack[-3] = v0070;
    goto v0054;
/* error exit handlers */
v0071:
    popv(5);
    return nil;
}



/* Code for get!*order */

static Lisp_Object CC_getHorder(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0020;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for get*order");
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
    v0020 = v0000;
/* end of prologue */
    fn = elt(env, 1); /* get!*elements */
    v0020 = (*qfn1(fn))(qenv(fn), v0020);
    errexit();
        return Llength(nil, v0020);
}



/* Code for quotf!* */

static Lisp_Object CC_quotfH(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0104, v0068, v0016;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for quotf*");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    stack[-1] = v0000;
/* end of prologue */
    v0104 = stack[-1];
    if (v0104 == nil) goto v0073;
    v0068 = stack[-1];
    v0104 = stack[0];
    fn = elt(env, 3); /* quotf */
    v0104 = (*qfn2(fn))(qenv(fn), v0068, v0104);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    v0068 = v0104;
    v0104 = v0068;
    if (!(v0104 == nil)) { popv(3); return onevalue(v0068); }
    v0068 = stack[-1];
    v0104 = stack[0];
    v0104 = cons(v0068, v0104);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    fn = elt(env, 4); /* rationalizesq */
    v0104 = (*qfn1(fn))(qenv(fn), v0104);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    v0016 = v0104;
    v0104 = v0016;
    v0068 = qcdr(v0104);
    v0104 = (Lisp_Object)17; /* 1 */
    if (v0068 == v0104) goto v0043;
    v0016 = elt(env, 2); /* "DIVISION FAILED" */
    v0068 = stack[-1];
    v0104 = stack[0];
    v0104 = list3(v0016, v0068, v0104);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    {
        popv(3);
        fn = elt(env, 5); /* errach */
        return (*qfn1(fn))(qenv(fn), v0104);
    }

v0043:
    v0104 = v0016;
    v0104 = qcar(v0104);
    { popv(3); return onevalue(v0104); }

v0073:
    v0104 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0104); }
/* error exit handlers */
v0048:
    popv(3);
    return nil;
}



/* Code for qqe_simplqneq */

static Lisp_Object CC_qqe_simplqneq(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0069, v0167, v0200;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for qqe_simplqneq");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    v0167 = v0001;
    v0069 = v0000;
/* end of prologue */
    v0167 = v0069;
    v0167 = qcdr(v0167);
    v0167 = qcar(v0167);
    v0069 = qcdr(v0069);
    v0069 = qcdr(v0069);
    v0069 = qcar(v0069);
    v0200 = elt(env, 1); /* qequal */
    fn = elt(env, 6); /* qqe_mk2 */
    v0167 = (*qfnn(fn))(qenv(fn), 3, v0200, v0167, v0069);
    nil = C_nil;
    if (exception_pending()) goto v0047;
    env = stack[-3];
    v0069 = qvalue(elt(env, 2)); /* nil */
    fn = elt(env, 7); /* qqe_simplqequal */
    v0069 = (*qfn2(fn))(qenv(fn), v0167, v0069);
    nil = C_nil;
    if (exception_pending()) goto v0047;
    env = stack[-3];
    stack[-2] = v0069;
    v0167 = stack[-2];
    v0069 = elt(env, 3); /* true */
    if (v0167 == v0069) goto v0079;
    v0167 = stack[-2];
    v0069 = elt(env, 4); /* false */
    if (v0167 == v0069) goto v0149;
    stack[-1] = elt(env, 5); /* qneq */
    v0069 = stack[-2];
    fn = elt(env, 8); /* qqe_arg2l */
    stack[0] = (*qfn1(fn))(qenv(fn), v0069);
    nil = C_nil;
    if (exception_pending()) goto v0047;
    env = stack[-3];
    v0069 = stack[-2];
    fn = elt(env, 9); /* qqe_arg2r */
    v0069 = (*qfn1(fn))(qenv(fn), v0069);
    nil = C_nil;
    if (exception_pending()) goto v0047;
    env = stack[-3];
    fn = elt(env, 6); /* qqe_mk2 */
    v0069 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[0], v0069);
    nil = C_nil;
    if (exception_pending()) goto v0047;
    { popv(4); return onevalue(v0069); }

v0149:
    v0069 = elt(env, 3); /* true */
    { popv(4); return onevalue(v0069); }

v0079:
    v0069 = elt(env, 4); /* false */
    { popv(4); return onevalue(v0069); }
/* error exit handlers */
v0047:
    popv(4);
    return nil;
}



/* Code for ofsf_updsignpow */

static Lisp_Object CC_ofsf_updsignpow(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0091, v0043, v0060, v0059;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ofsf_updsignpow");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v0060 = v0001;
    v0059 = v0000;
/* end of prologue */
    v0043 = v0059;
    v0091 = elt(env, 1); /* (equal greaterp geq neq) */
    v0091 = Lmemq(nil, v0043, v0091);
    if (!(v0091 == nil)) { popv(1); return onevalue(v0059); }
    v0043 = v0059;
    v0091 = elt(env, 2); /* (lessp leq) */
    v0091 = Lmemq(nil, v0043, v0091);
    if (v0091 == nil) goto v0056;
    v0091 = v0059;
    v0043 = v0060;
    v0043 = Levenp(nil, v0043);
    env = stack[0];
    v0043 = (v0043 == nil ? lisp_true : nil);
    {
        popv(1);
        fn = elt(env, 4); /* ofsf_canegrel */
        return (*qfn2(fn))(qenv(fn), v0091, v0043);
    }

v0056:
    v0091 = elt(env, 3); /* unknown */
    { popv(1); return onevalue(v0091); }
}



/* Code for f2df */

static Lisp_Object CC_f2df(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0036, v0037, v0120;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for f2df");
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
    v0036 = stack[0];
    if (!consp(v0036)) goto v0058;
    v0036 = stack[0];
    v0036 = qcar(v0036);
    v0036 = (consp(v0036) ? nil : lisp_true);
    goto v0020;

v0020:
    if (v0036 == nil) goto v0011;
    v0037 = stack[0];
    v0036 = (Lisp_Object)17; /* 1 */
    v0036 = cons(v0037, v0036);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-2];
    {
        popv(3);
        fn = elt(env, 4); /* dfconst */
        return (*qfn1(fn))(qenv(fn), v0036);
    }

v0011:
    v0036 = stack[0];
    v0036 = qcar(v0036);
    v0036 = qcar(v0036);
    v0037 = qcar(v0036);
    v0036 = qvalue(elt(env, 2)); /* zlist */
    v0036 = Lmember(nil, v0037, v0036);
    if (v0036 == nil) goto v0038;
    v0036 = stack[0];
    v0036 = qcar(v0036);
    v0036 = qcar(v0036);
    v0120 = qcar(v0036);
    v0036 = stack[0];
    v0036 = qcar(v0036);
    v0036 = qcar(v0036);
    v0037 = qcdr(v0036);
    v0036 = qvalue(elt(env, 2)); /* zlist */
    fn = elt(env, 5); /* vp2df */
    stack[-1] = (*qfnn(fn))(qenv(fn), 3, v0120, v0037, v0036);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-2];
    v0036 = stack[0];
    v0036 = qcar(v0036);
    v0036 = qcdr(v0036);
    v0036 = CC_f2df(env, v0036);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-2];
    fn = elt(env, 6); /* multdf */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[-1], v0036);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-2];
    v0036 = stack[0];
    v0036 = qcdr(v0036);
    v0036 = CC_f2df(env, v0036);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-2];
    {
        Lisp_Object v0161 = stack[-1];
        popv(3);
        fn = elt(env, 7); /* plusdf */
        return (*qfn2(fn))(qenv(fn), v0161, v0036);
    }

v0038:
    v0036 = stack[0];
    v0036 = qcar(v0036);
    v0037 = qcar(v0036);
    v0036 = (Lisp_Object)17; /* 1 */
    v0120 = cons(v0037, v0036);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-2];
    v0037 = qvalue(elt(env, 3)); /* nil */
    v0036 = (Lisp_Object)17; /* 1 */
    stack[-1] = acons(v0120, v0037, v0036);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-2];
    v0036 = stack[0];
    v0036 = qcar(v0036);
    v0036 = qcdr(v0036);
    v0036 = CC_f2df(env, v0036);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-2];
    fn = elt(env, 8); /* multdfconst */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[-1], v0036);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-2];
    v0036 = stack[0];
    v0036 = qcdr(v0036);
    v0036 = CC_f2df(env, v0036);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-2];
    {
        Lisp_Object v0201 = stack[-1];
        popv(3);
        fn = elt(env, 7); /* plusdf */
        return (*qfn2(fn))(qenv(fn), v0201, v0036);
    }

v0058:
    v0036 = qvalue(elt(env, 1)); /* t */
    goto v0020;
/* error exit handlers */
v0197:
    popv(3);
    return nil;
}



/* Code for d2int */

static Lisp_Object CC_d2int(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0163, v0088, v0124;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for d2int");
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
    v0088 = v0000;
/* end of prologue */
    v0163 = v0088;
    v0124 = qcdr(v0163);
    v0163 = (Lisp_Object)17; /* 1 */
    if (v0124 == v0163) goto v0073;
    v0163 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0163); }

v0073:
    v0163 = v0088;
    v0163 = qcar(v0163);
    v0088 = v0163;
    if (is_number(v0163)) { popv(3); return onevalue(v0088); }
    v0163 = v0088;
    if (!consp(v0163)) goto v0011;
    v0163 = v0088;
    v0163 = qcar(v0163);
    v0163 = (consp(v0163) ? nil : lisp_true);
    goto v0012;

v0012:
    if (v0163 == nil) goto v0021;
    v0163 = v0088;
    v0124 = qcar(v0163);
    v0163 = elt(env, 3); /* !:rd!: */
    v0163 = (v0124 == v0163 ? lisp_true : nil);
    v0163 = (v0163 == nil ? lisp_true : nil);
    goto v0127;

v0127:
    if (v0163 == nil) goto v0095;
    v0163 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0163); }

v0095:
    v0163 = v0088;
    v0163 = qcdr(v0163);
    stack[-1] = v0163;
    v0163 = stack[-1];
    v0163 = Ltruncate(nil, v0163);
    nil = C_nil;
    if (exception_pending()) goto v0072;
    env = stack[-2];
    stack[0] = v0163;
    v0163 = stack[0];
    v0088 = Lfloat(nil, v0163);
    nil = C_nil;
    if (exception_pending()) goto v0072;
    env = stack[-2];
    v0163 = stack[-1];
    v0163 = difference2(v0088, v0163);
    nil = C_nil;
    if (exception_pending()) goto v0072;
    env = stack[-2];
    v0088 = Labsval(nil, v0163);
    nil = C_nil;
    if (exception_pending()) goto v0072;
    env = stack[-2];
    v0163 = qvalue(elt(env, 4)); /* !!fleps1 */
    v0163 = (Lisp_Object)lessp2(v0088, v0163);
    nil = C_nil;
    if (exception_pending()) goto v0072;
    v0163 = v0163 ? lisp_true : nil;
    env = stack[-2];
    if (!(v0163 == nil)) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v0163 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0163); }

v0021:
    v0163 = qvalue(elt(env, 2)); /* t */
    goto v0127;

v0011:
    v0163 = qvalue(elt(env, 2)); /* t */
    goto v0012;
/* error exit handlers */
v0072:
    popv(3);
    return nil;
}



/* Code for newsym1 */

static Lisp_Object MS_CDECL CC_newsym1(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0008, v0150;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "newsym1");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for newsym1");
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
    v0008 = qvalue(elt(env, 1)); /* cindex!* */
    v0008 = Lexplode(nil, v0008);
    nil = C_nil;
    if (exception_pending()) goto v0082;
    env = stack[-1];
    stack[0] = v0008;
    v0008 = qvalue(elt(env, 1)); /* cindex!* */
    v0008 = add1(v0008);
    nil = C_nil;
    if (exception_pending()) goto v0082;
    env = stack[-1];
    qvalue(elt(env, 1)) = v0008; /* cindex!* */
    v0150 = qvalue(elt(env, 2)); /* cname!* */
    v0008 = stack[0];
    v0008 = Lappend(nil, v0150, v0008);
    nil = C_nil;
    if (exception_pending()) goto v0082;
        popv(2);
        return Lcompress(nil, v0008);
/* error exit handlers */
v0082:
    popv(2);
    return nil;
}



/* Code for groebcplistmerge */

static Lisp_Object CC_groebcplistmerge(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0048, v0049;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for groebcplistmerge");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */
    v0048 = stack[-2];
    if (v0048 == nil) { Lisp_Object res = stack[-1]; popv(5); return onevalue(res); }
    v0048 = stack[-1];
    if (v0048 == nil) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v0048 = stack[-2];
    v0048 = qcar(v0048);
    stack[-3] = v0048;
    v0048 = stack[-1];
    v0048 = qcar(v0048);
    stack[0] = v0048;
    v0049 = stack[-3];
    v0048 = stack[0];
    fn = elt(env, 1); /* groebcpcompless!? */
    v0048 = (*qfn2(fn))(qenv(fn), v0049, v0048);
    nil = C_nil;
    if (exception_pending()) goto v0083;
    env = stack[-4];
    if (v0048 == nil) goto v0015;
    stack[0] = stack[-3];
    v0048 = stack[-2];
    v0049 = qcdr(v0048);
    v0048 = stack[-1];
    v0048 = CC_groebcplistmerge(env, v0049, v0048);
    nil = C_nil;
    if (exception_pending()) goto v0083;
    {
        Lisp_Object v0084 = stack[0];
        popv(5);
        return cons(v0084, v0048);
    }

v0015:
    v0049 = stack[-2];
    v0048 = stack[-1];
    v0048 = qcdr(v0048);
    v0048 = CC_groebcplistmerge(env, v0049, v0048);
    nil = C_nil;
    if (exception_pending()) goto v0083;
    {
        Lisp_Object v0046 = stack[0];
        popv(5);
        return cons(v0046, v0048);
    }
/* error exit handlers */
v0083:
    popv(5);
    return nil;
}



/* Code for xregister_spoly_pair */

static Lisp_Object MS_CDECL CC_xregister_spoly_pair(Lisp_Object env, int nargs, ...)
{
    Lisp_Object v0090;
    argcheck(nargs, 0, "xregister_spoly_pair");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for xregister_spoly_pair");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* end of prologue */
    v0090 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v0090);
}



/* Code for latexprint */

static Lisp_Object CC_latexprint(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0019;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for latexprint");
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
    fn = elt(env, 1); /* prinlabegin */
    v0019 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0058;
    env = stack[-1];
    v0019 = stack[0];
    fn = elt(env, 2); /* latexprin */
    v0019 = (*qfn1(fn))(qenv(fn), v0019);
    nil = C_nil;
    if (exception_pending()) goto v0058;
    env = stack[-1];
    {
        popv(2);
        fn = elt(env, 3); /* prinlaend */
        return (*qfnn(fn))(qenv(fn), 0);
    }
/* error exit handlers */
v0058:
    popv(2);
    return nil;
}



/* Code for mapcarcar */

static Lisp_Object CC_mapcarcar(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0092;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mapcarcar");
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
    v0092 = v0000;
/* end of prologue */
    stack[-3] = v0092;
    v0092 = stack[-3];
    if (v0092 == nil) goto v0093;
    v0092 = stack[-3];
    v0092 = qcar(v0092);
    v0092 = qcar(v0092);
    v0092 = ncons(v0092);
    nil = C_nil;
    if (exception_pending()) goto v0004;
    env = stack[-4];
    stack[-1] = v0092;
    stack[-2] = v0092;
    goto v0020;

v0020:
    v0092 = stack[-3];
    v0092 = qcdr(v0092);
    stack[-3] = v0092;
    v0092 = stack[-3];
    if (v0092 == nil) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    stack[0] = stack[-1];
    v0092 = stack[-3];
    v0092 = qcar(v0092);
    v0092 = qcar(v0092);
    v0092 = ncons(v0092);
    nil = C_nil;
    if (exception_pending()) goto v0004;
    env = stack[-4];
    v0092 = Lrplacd(nil, stack[0], v0092);
    nil = C_nil;
    if (exception_pending()) goto v0004;
    env = stack[-4];
    v0092 = stack[-1];
    v0092 = qcdr(v0092);
    stack[-1] = v0092;
    goto v0020;

v0093:
    v0092 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0092); }
/* error exit handlers */
v0004:
    popv(5);
    return nil;
}



/* Code for reduce!-ratios */

static Lisp_Object CC_reduceKratios(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0016, v0081;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for reduce-ratios");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */

v0093:
    v0081 = stack[-2];
    v0016 = stack[-1];
    fn = elt(env, 1); /* red!-ratios1 */
    v0016 = (*qfn2(fn))(qenv(fn), v0081, v0016);
    nil = C_nil;
    if (exception_pending()) goto v0069;
    env = stack[-4];
    stack[-3] = v0016;
    if (v0016 == nil) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v0016 = stack[-3];
    v0081 = qcar(v0016);
    v0016 = stack[-2];
    fn = elt(env, 2); /* mv!-domainlist!-!* */
    stack[0] = (*qfn2(fn))(qenv(fn), v0081, v0016);
    nil = C_nil;
    if (exception_pending()) goto v0069;
    env = stack[-4];
    v0016 = stack[-3];
    v0081 = qcdr(v0016);
    v0016 = stack[-1];
    fn = elt(env, 2); /* mv!-domainlist!-!* */
    v0016 = (*qfn2(fn))(qenv(fn), v0081, v0016);
    nil = C_nil;
    if (exception_pending()) goto v0069;
    env = stack[-4];
    fn = elt(env, 3); /* mv!-domainlist!-!- */
    v0016 = (*qfn2(fn))(qenv(fn), stack[0], v0016);
    nil = C_nil;
    if (exception_pending()) goto v0069;
    env = stack[-4];
    stack[-3] = v0016;
    v0016 = stack[-2];
    fn = elt(env, 4); /* reddom_zeros */
    stack[0] = (*qfn1(fn))(qenv(fn), v0016);
    nil = C_nil;
    if (exception_pending()) goto v0069;
    env = stack[-4];
    v0016 = stack[-3];
    fn = elt(env, 4); /* reddom_zeros */
    v0016 = (*qfn1(fn))(qenv(fn), v0016);
    nil = C_nil;
    if (exception_pending()) goto v0069;
    env = stack[-4];
    v0016 = (Lisp_Object)geq2(stack[0], v0016);
    nil = C_nil;
    if (exception_pending()) goto v0069;
    v0016 = v0016 ? lisp_true : nil;
    env = stack[-4];
    if (!(v0016 == nil)) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v0081 = stack[-3];
    v0016 = stack[-1];
    stack[-2] = v0081;
    stack[-1] = v0016;
    goto v0093;
/* error exit handlers */
v0069:
    popv(5);
    return nil;
}



/* Code for simp!-prop */

static Lisp_Object CC_simpKprop(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0196, v0210, v0186;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for simp-prop");
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
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0000;
/* end of prologue */
    stack[-6] = qvalue(elt(env, 1)); /* propvars!* */
    qvalue(elt(env, 1)) = nil; /* propvars!* */
    v0196 = stack[-2];
    v0196 = qcdr(v0196);
    stack[-4] = v0196;
    v0196 = stack[-4];
    if (v0196 == nil) goto v0008;
    v0196 = stack[-4];
    v0196 = qcar(v0196);
    fn = elt(env, 14); /* reval */
    v0196 = (*qfn1(fn))(qenv(fn), v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0196 = ncons(v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    stack[-1] = v0196;
    stack[-3] = v0196;
    goto v0108;

v0108:
    v0196 = stack[-4];
    v0196 = qcdr(v0196);
    stack[-4] = v0196;
    v0196 = stack[-4];
    if (v0196 == nil) goto v0105;
    stack[0] = stack[-1];
    v0196 = stack[-4];
    v0196 = qcar(v0196);
    fn = elt(env, 14); /* reval */
    v0196 = (*qfn1(fn))(qenv(fn), v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0196 = ncons(v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0196 = Lrplacd(nil, stack[0], v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0196 = stack[-1];
    v0196 = qcdr(v0196);
    stack[-1] = v0196;
    goto v0108;

v0105:
    v0196 = stack[-3];
    goto v0093;

v0093:
    stack[-5] = v0196;
    v0210 = elt(env, 3); /* and */
    v0196 = stack[-5];
    v0196 = Lmember(nil, v0210, v0196);
    if (v0196 == nil) goto v0068;
    v0196 = elt(env, 4); /* or */
    qvalue(elt(env, 5)) = v0196; /* !'and */
    v0196 = elt(env, 3); /* and */
    qvalue(elt(env, 6)) = v0196; /* !'or */
    v0196 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 7)) = v0196; /* !'true */
    v0196 = (Lisp_Object)17; /* 1 */
    qvalue(elt(env, 8)) = v0196; /* !'false */
    goto v0083;

v0083:
    v0196 = stack[-2];
    v0210 = qcar(v0196);
    v0196 = qvalue(elt(env, 9)); /* t */
    fn = elt(env, 15); /* simp!-prop1 */
    v0196 = (*qfn2(fn))(qenv(fn), v0210, v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    fn = elt(env, 16); /* prepf */
    v0196 = (*qfn1(fn))(qenv(fn), v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    fn = elt(env, 14); /* reval */
    v0196 = (*qfn1(fn))(qenv(fn), v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0186 = v0196;
    v0210 = v0186;
    v0196 = (Lisp_Object)1; /* 0 */
    if (v0210 == v0196) goto v0168;
    v0196 = qvalue(elt(env, 1)); /* propvars!* */
    stack[-4] = v0196;
    goto v0132;

v0132:
    v0196 = stack[-4];
    if (v0196 == nil) goto v0192;
    v0196 = stack[-4];
    v0196 = qcar(v0196);
    stack[-3] = elt(env, 10); /* times */
    stack[-2] = v0186;
    stack[-1] = qvalue(elt(env, 6)); /* !'or */
    stack[0] = v0196;
    v0210 = elt(env, 11); /* not */
    v0196 = list2(v0210, v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0210 = list3(stack[-1], stack[0], v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0196 = qvalue(elt(env, 9)); /* t */
    fn = elt(env, 15); /* simp!-prop1 */
    v0196 = (*qfn2(fn))(qenv(fn), v0210, v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    fn = elt(env, 16); /* prepf */
    v0196 = (*qfn1(fn))(qenv(fn), v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0196 = list3(stack[-3], stack[-2], v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    fn = elt(env, 14); /* reval */
    v0196 = (*qfn1(fn))(qenv(fn), v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0186 = v0196;
    v0196 = stack[-4];
    v0196 = qcdr(v0196);
    stack[-4] = v0196;
    goto v0132;

v0192:
    v0196 = v0186;
    fn = elt(env, 17); /* simp!-prop!-dist */
    v0196 = (*qfn1(fn))(qenv(fn), v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0186 = v0196;
    v0210 = elt(env, 12); /* full */
    v0196 = stack[-5];
    v0196 = Lmember(nil, v0210, v0196);
    if (!(v0196 == nil)) goto v0109;
    v0196 = v0186;
    fn = elt(env, 18); /* simp!-prop2 */
    v0196 = (*qfn1(fn))(qenv(fn), v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0186 = v0196;
    goto v0109;

v0109:
    v0196 = v0186;
    fn = elt(env, 19); /* simp!-prop!-form */
    v0196 = (*qfn1(fn))(qenv(fn), v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0186 = v0196;
    v0196 = v0186;
    if (is_number(v0196)) goto v0212;
    v0196 = v0186;
    if (!consp(v0196)) goto v0213;
    v0196 = elt(env, 13); /* boolean */
    v0210 = v0186;
    v0196 = list2(v0196, v0210);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0186 = v0196;
    goto v0213;

v0213:
    v0210 = v0186;
    v0196 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 20); /* to */
    v0210 = (*qfn2(fn))(qenv(fn), v0210, v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0196 = (Lisp_Object)17; /* 1 */
    v0186 = cons(v0210, v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    v0210 = qvalue(elt(env, 2)); /* nil */
    v0196 = (Lisp_Object)17; /* 1 */
    v0196 = acons(v0186, v0210, v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    goto v0019;

v0019:
    qvalue(elt(env, 1)) = stack[-6]; /* propvars!* */
    { popv(8); return onevalue(v0196); }

v0212:
    v0210 = v0186;
    v0196 = (Lisp_Object)17; /* 1 */
    v0196 = cons(v0210, v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    goto v0019;

v0168:
    v0196 = qvalue(elt(env, 8)); /* !'false */
    fn = elt(env, 21); /* simp */
    v0196 = (*qfn1(fn))(qenv(fn), v0196);
    nil = C_nil;
    if (exception_pending()) goto v0211;
    env = stack[-7];
    goto v0019;

v0068:
    v0196 = elt(env, 3); /* and */
    qvalue(elt(env, 5)) = v0196; /* !'and */
    v0196 = elt(env, 4); /* or */
    qvalue(elt(env, 6)) = v0196; /* !'or */
    v0196 = (Lisp_Object)17; /* 1 */
    qvalue(elt(env, 7)) = v0196; /* !'true */
    v0196 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 8)) = v0196; /* !'false */
    goto v0083;

v0008:
    v0196 = qvalue(elt(env, 2)); /* nil */
    goto v0093;
/* error exit handlers */
v0211:
    env = stack[-7];
    qvalue(elt(env, 1)) = stack[-6]; /* propvars!* */
    popv(8);
    return nil;
}



/* Code for simpsqrt2 */

static Lisp_Object CC_simpsqrt2(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0149, v0004;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for simpsqrt2");
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
    v0149 = stack[0];
    fn = elt(env, 2); /* minusf */
    v0149 = (*qfn1(fn))(qenv(fn), v0149);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-1];
    if (v0149 == nil) goto v0092;
    v0004 = stack[0];
    v0149 = (Lisp_Object)-15; /* -1 */
    fn = elt(env, 3); /* iequal */
    v0149 = (*qfn2(fn))(qenv(fn), v0004, v0149);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-1];
    if (v0149 == nil) goto v0087;
    v0149 = qvalue(elt(env, 1)); /* gaussiani */
    { popv(2); return onevalue(v0149); }

v0087:
    v0149 = stack[0];
    fn = elt(env, 4); /* negf */
    v0149 = (*qfn1(fn))(qenv(fn), v0149);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-1];
    v0004 = v0149;
    v0149 = v0004;
    if (is_number(v0149)) goto v0006;
    v0149 = stack[0];
    {
        popv(2);
        fn = elt(env, 5); /* simpsqrt3 */
        return (*qfn1(fn))(qenv(fn), v0149);
    }

v0006:
    stack[0] = qvalue(elt(env, 1)); /* gaussiani */
    v0149 = v0004;
    fn = elt(env, 5); /* simpsqrt3 */
    v0149 = (*qfn1(fn))(qenv(fn), v0149);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-1];
    {
        Lisp_Object v0018 = stack[0];
        popv(2);
        fn = elt(env, 6); /* multf */
        return (*qfn2(fn))(qenv(fn), v0018, v0149);
    }

v0092:
    v0149 = stack[0];
    {
        popv(2);
        fn = elt(env, 5); /* simpsqrt3 */
        return (*qfn1(fn))(qenv(fn), v0149);
    }
/* error exit handlers */
v0095:
    popv(2);
    return nil;
}



/* Code for nonlnr */

static Lisp_Object CC_nonlnr(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0160, v0096;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for nonlnr");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    stack[-1] = v0000;
/* end of prologue */

v0170:
    v0160 = stack[-1];
    if (!consp(v0160)) goto v0089;
    v0160 = stack[-1];
    v0160 = qcar(v0160);
    v0160 = (consp(v0160) ? nil : lisp_true);
    goto v0058;

v0058:
    if (v0160 == nil) goto v0087;
    v0160 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v0160); }

v0087:
    v0160 = stack[-1];
    v0160 = qcar(v0160);
    v0160 = qcar(v0160);
    v0096 = qcar(v0160);
    v0160 = stack[0];
    v0160 = Lmember(nil, v0096, v0160);
    if (v0160 == nil) goto v0046;
    v0160 = stack[-1];
    v0160 = qcar(v0160);
    v0160 = qcar(v0160);
    v0096 = qcdr(v0160);
    v0160 = (Lisp_Object)17; /* 1 */
    v0160 = (Lisp_Object)greaterp2(v0096, v0160);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    v0160 = v0160 ? lisp_true : nil;
    env = stack[-2];
    if (!(v0160 == nil)) { popv(3); return onevalue(v0160); }
    v0160 = stack[-1];
    v0160 = qcar(v0160);
    v0096 = qcdr(v0160);
    v0160 = stack[0];
    fn = elt(env, 3); /* freeofl */
    v0160 = (*qfn2(fn))(qenv(fn), v0096, v0160);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-2];
    if (v0160 == nil) goto v0149;
    v0160 = stack[-1];
    v0096 = qcdr(v0160);
    v0160 = stack[0];
    stack[-1] = v0096;
    stack[0] = v0160;
    goto v0170;

v0149:
    v0160 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v0160); }

v0046:
    v0160 = stack[-1];
    v0160 = qcar(v0160);
    v0160 = qcar(v0160);
    v0096 = qcar(v0160);
    v0160 = stack[0];
    fn = elt(env, 3); /* freeofl */
    v0160 = (*qfn2(fn))(qenv(fn), v0096, v0160);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-2];
    if (v0160 == nil) goto v0200;
    v0160 = stack[-1];
    v0160 = qcar(v0160);
    v0096 = qcdr(v0160);
    v0160 = stack[0];
    v0160 = CC_nonlnr(env, v0096, v0160);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-2];
    if (!(v0160 == nil)) { popv(3); return onevalue(v0160); }
    v0160 = stack[-1];
    v0096 = qcdr(v0160);
    v0160 = stack[0];
    stack[-1] = v0096;
    stack[0] = v0160;
    goto v0170;

v0200:
    v0160 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v0160); }

v0089:
    v0160 = qvalue(elt(env, 1)); /* t */
    goto v0058;
/* error exit handlers */
v0120:
    popv(3);
    return nil;
}



/* Code for cl_identifyonoff */

static Lisp_Object CC_cl_identifyonoff(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object v0002;
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for cl_identifyonoff");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0002 = v0000;
/* end of prologue */
    v0002 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 2)) = v0002; /* cl_identify!-atl!* */
    return onevalue(v0002);
}



/* Code for checkexp */

static Lisp_Object CC_checkexp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0091, v0043, v0060, v0059;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for checkexp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v0060 = v0001;
    v0059 = v0000;
/* end of prologue */
    v0043 = v0060;
    v0091 = (Lisp_Object)1; /* 0 */
    if (v0043 == v0091) goto v0073;
    v0043 = v0060;
    v0091 = (Lisp_Object)17; /* 1 */
    if (v0043 == v0091) { popv(2); return onevalue(v0059); }
    stack[-1] = elt(env, 1); /* expt */
    stack[0] = v0059;
    v0091 = v0060;
    fn = elt(env, 2); /* preptayexp */
    v0091 = (*qfn1(fn))(qenv(fn), v0091);
    nil = C_nil;
    if (exception_pending()) goto v0044;
    {
        Lisp_Object v0094 = stack[-1];
        Lisp_Object v0066 = stack[0];
        popv(2);
        return list3(v0094, v0066, v0091);
    }

v0073:
    v0091 = (Lisp_Object)17; /* 1 */
    { popv(2); return onevalue(v0091); }
/* error exit handlers */
v0044:
    popv(2);
    return nil;
}



/* Code for mri_simplat1 */

static Lisp_Object CC_mri_simplat1(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0123, v0040;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mri_simplat1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */
    v0123 = qvalue(elt(env, 1)); /* !*rlsimplfloor */
    if (v0123 == nil) goto v0058;
    v0123 = stack[-2];
    fn = elt(env, 4); /* mri_op */
    stack[-3] = (*qfn1(fn))(qenv(fn), v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    v0123 = stack[-2];
    fn = elt(env, 5); /* mri_arg2l */
    v0123 = (*qfn1(fn))(qenv(fn), v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    fn = elt(env, 6); /* mri_simplfloor */
    stack[0] = (*qfn1(fn))(qenv(fn), v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    v0123 = stack[-2];
    fn = elt(env, 7); /* mri_type */
    v0123 = (*qfn1(fn))(qenv(fn), v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    fn = elt(env, 8); /* mri_0mk2 */
    v0123 = (*qfnn(fn))(qenv(fn), 3, stack[-3], stack[0], v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    stack[-2] = v0123;
    goto v0058;

v0058:
    v0123 = stack[-2];
    fn = elt(env, 7); /* mri_type */
    v0123 = (*qfn1(fn))(qenv(fn), v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    if (!(v0123 == nil)) goto v0011;
    v0123 = stack[-2];
    fn = elt(env, 9); /* mri_dettype */
    v0123 = (*qfn1(fn))(qenv(fn), v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    goto v0011;

v0011:
    stack[0] = v0123;
    v0040 = stack[0];
    v0123 = elt(env, 2); /* int */
    if (v0040 == v0123) goto v0018;
    v0123 = stack[-2];
    fn = elt(env, 10); /* mri_congp */
    v0123 = (*qfn1(fn))(qenv(fn), v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    if (v0123 == nil) goto v0069;
    v0123 = stack[-2];
    fn = elt(env, 4); /* mri_op */
    stack[-1] = (*qfn1(fn))(qenv(fn), v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    v0123 = stack[-2];
    fn = elt(env, 5); /* mri_arg2l */
    v0040 = (*qfn1(fn))(qenv(fn), v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    v0123 = stack[0];
    {
        Lisp_Object v0099 = stack[-1];
        popv(5);
        fn = elt(env, 8); /* mri_0mk2 */
        return (*qfnn(fn))(qenv(fn), 3, v0099, v0040, v0123);
    }

v0069:
    v0123 = stack[-2];
    fn = elt(env, 11); /* mri_2ofsfat */
    v0040 = (*qfn1(fn))(qenv(fn), v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    v0123 = stack[-1];
    fn = elt(env, 12); /* ofsf_simplat1 */
    v0040 = (*qfn2(fn))(qenv(fn), v0040, v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    v0123 = elt(env, 3); /* real */
    {
        popv(5);
        fn = elt(env, 13); /* mri_ofsf2mri */
        return (*qfn2(fn))(qenv(fn), v0040, v0123);
    }

v0018:
    v0123 = stack[-2];
    fn = elt(env, 14); /* mri_2pasfat */
    v0040 = (*qfn1(fn))(qenv(fn), v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    v0123 = stack[-1];
    fn = elt(env, 15); /* pasf_simplat1 */
    v0040 = (*qfn2(fn))(qenv(fn), v0040, v0123);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-4];
    v0123 = elt(env, 2); /* int */
    {
        popv(5);
        fn = elt(env, 16); /* mri_pasf2mri */
        return (*qfn2(fn))(qenv(fn), v0040, v0123);
    }
/* error exit handlers */
v0098:
    popv(5);
    return nil;
}



/* Code for cl_sacat */

static Lisp_Object MS_CDECL CC_cl_sacat(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0026, v0082, v0087;
    Lisp_Object v0090, v0001, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "cl_sacat");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0001 = va_arg(aa, Lisp_Object);
    v0090 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for cl_sacat");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0026 = v0090;
    v0082 = v0001;
    v0087 = v0000;
/* end of prologue */
    v0026 = v0087;
    if (equal(v0026, v0082)) goto v0019;
    v0026 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0026);

v0019:
    v0026 = elt(env, 1); /* keep */
    return onevalue(v0026);
}



/* Code for cr!:prep */

static Lisp_Object CC_crTprep(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0105, v0010;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for cr:prep");
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
    v0010 = elt(env, 1); /* !:rd!: */
    v0105 = stack[0];
    v0105 = qcdr(v0105);
    v0105 = qcar(v0105);
    v0105 = cons(v0010, v0105);
    nil = C_nil;
    if (exception_pending()) goto v0007;
    env = stack[-2];
    fn = elt(env, 2); /* rd!:prep */
    stack[-1] = (*qfn1(fn))(qenv(fn), v0105);
    nil = C_nil;
    if (exception_pending()) goto v0007;
    env = stack[-2];
    v0010 = elt(env, 1); /* !:rd!: */
    v0105 = stack[0];
    v0105 = qcdr(v0105);
    v0105 = qcdr(v0105);
    v0105 = cons(v0010, v0105);
    nil = C_nil;
    if (exception_pending()) goto v0007;
    env = stack[-2];
    fn = elt(env, 2); /* rd!:prep */
    v0105 = (*qfn1(fn))(qenv(fn), v0105);
    nil = C_nil;
    if (exception_pending()) goto v0007;
    env = stack[-2];
    v0105 = cons(stack[-1], v0105);
    nil = C_nil;
    if (exception_pending()) goto v0007;
    env = stack[-2];
    {
        popv(3);
        fn = elt(env, 3); /* crprep1 */
        return (*qfn1(fn))(qenv(fn), v0105);
    }
/* error exit handlers */
v0007:
    popv(3);
    return nil;
}



/* Code for mkprec */

static Lisp_Object MS_CDECL CC_mkprec(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0100, v0101, v0065;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "mkprec");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mkprec");
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
    push4(nil, nil, nil, nil);
/* end of prologue */
    v0101 = qvalue(elt(env, 1)); /* fixedpreclis!* */
    v0100 = qvalue(elt(env, 2)); /* preclis!* */
    v0100 = Lappend(nil, v0101, v0100);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-4];
    stack[-3] = v0100;
    v0100 = (Lisp_Object)17; /* 1 */
    stack[-2] = v0100;
    goto v0019;

v0019:
    v0100 = stack[-3];
    if (v0100 == nil) goto v0150;
    v0100 = stack[-3];
    v0065 = qcar(v0100);
    v0101 = elt(env, 4); /* infix */
    v0100 = stack[-2];
    v0100 = Lputprop(nil, 3, v0065, v0101, v0100);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-4];
    v0100 = stack[-3];
    stack[-1] = qcar(v0100);
    stack[0] = elt(env, 5); /* op */
    v0101 = stack[-2];
    v0100 = stack[-2];
    v0100 = list2(v0101, v0100);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-4];
    v0100 = ncons(v0100);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-4];
    v0100 = Lputprop(nil, 3, stack[-1], stack[0], v0100);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-4];
    v0100 = stack[-3];
    v0101 = qcar(v0100);
    v0100 = elt(env, 6); /* unary */
    v0100 = get(v0101, v0100);
    env = stack[-4];
    stack[0] = v0100;
    if (v0100 == nil) goto v0067;
    v0065 = stack[0];
    v0101 = elt(env, 4); /* infix */
    v0100 = stack[-2];
    v0100 = Lputprop(nil, 3, v0065, v0101, v0100);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-4];
    goto v0067;

v0067:
    v0100 = stack[0];
    if (v0100 == nil) goto v0046;
    v0100 = stack[0];
    if (!symbolp(v0100)) v0100 = nil;
    else { v0100 = qfastgets(v0100);
           if (v0100 != nil) { v0100 = elt(v0100, 35); /* nary */
#ifdef RECORD_GET
             if (v0100 == SPID_NOPROP)
                record_get(elt(fastget_names, 35), 0),
                v0100 = nil;
             else record_get(elt(fastget_names, 35), 1),
                v0100 = lisp_true; }
           else record_get(elt(fastget_names, 35), 0); }
#else
             if (v0100 == SPID_NOPROP) v0100 = nil; else v0100 = lisp_true; }}
#endif
    if (!(v0100 == nil)) goto v0046;
    stack[-1] = stack[0];
    stack[0] = elt(env, 5); /* op */
    v0101 = qvalue(elt(env, 3)); /* nil */
    v0100 = stack[-2];
    v0100 = list2(v0101, v0100);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-4];
    v0100 = Lputprop(nil, 3, stack[-1], stack[0], v0100);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-4];
    goto v0046;

v0046:
    v0100 = stack[-3];
    v0100 = qcdr(v0100);
    stack[-3] = v0100;
    v0100 = stack[-2];
    v0100 = add1(v0100);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-4];
    stack[-2] = v0100;
    goto v0019;

v0150:
    v0100 = qvalue(elt(env, 3)); /* nil */
    { popv(5); return onevalue(v0100); }
/* error exit handlers */
v0036:
    popv(5);
    return nil;
}



setup_type const u42_setup[] =
{
    {"ra_wrapper",              too_few_2,      CC_ra_wrapper, wrong_no_2},
    {"settreset",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_settreset},
    {"ofsf_smwrmknowl",         too_few_2,      CC_ofsf_smwrmknowl,wrong_no_2},
    {"valuechk",                too_few_2,      CC_valuechk,   wrong_no_2},
    {"mk+inner+product",        too_few_2,      CC_mkLinnerLproduct,wrong_no_2},
    {"iv_new",                  too_few_2,      CC_iv_new,     wrong_no_2},
    {"lto_setminus",            too_few_2,      CC_lto_setminus,wrong_no_2},
    {"pdiffvars",               too_few_2,      CC_pdiffvars,  wrong_no_2},
    {"copy_vect",               too_few_2,      CC_copy_vect,  wrong_no_2},
    {"findhc",                  CC_findhc,      too_many_1,    wrong_no_1},
    {"evaluate2",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_evaluate2},
    {"fortassign",              CC_fortassign,  too_many_1,    wrong_no_1},
    {"setmatelem",              too_few_2,      CC_setmatelem, wrong_no_2},
    {"fs:prin:",                CC_fsTprinT,    too_many_1,    wrong_no_1},
    {"inormmat",                CC_inormmat,    too_many_1,    wrong_no_1},
    {"coeffs",                  CC_coeffs,      too_many_1,    wrong_no_1},
    {"makecoeffpairs",          wrong_no_na,    wrong_no_nb,   (n_args *)CC_makecoeffpairs},
    {"operator_fn",             CC_operator_fn, too_many_1,    wrong_no_1},
    {"scar",                    too_few_2,      CC_scar,       wrong_no_2},
    {"sroot1",                  too_few_2,      CC_sroot1,     wrong_no_2},
    {"mkforttab",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_mkforttab},
    {"subfindices",             too_few_2,      CC_subfindices,wrong_no_2},
    {"defined_all_edge",        wrong_no_na,    wrong_no_nb,   (n_args *)CC_defined_all_edge},
    {"sign-abs",                CC_signKabs,    too_many_1,    wrong_no_1},
    {"mv-compact",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_mvKcompact},
    {"polynomlistautoreduce",   too_few_2,      CC_polynomlistautoreduce,wrong_no_2},
    {"girationalize:",          CC_girationalizeT,too_many_1,  wrong_no_1},
    {"pasf_dnf",                CC_pasf_dnf,    too_many_1,    wrong_no_1},
    {"limitom",                 CC_limitom,     too_many_1,    wrong_no_1},
    {"f2dip",                   CC_f2dip,       too_many_1,    wrong_no_1},
    {"split-comfac-part",       CC_splitKcomfacKpart,too_many_1,wrong_no_1},
    {"mv2sf",                   too_few_2,      CC_mv2sf,      wrong_no_2},
    {"polynomreduceby",         too_few_2,      CC_polynomreduceby,wrong_no_2},
    {"get*order",               CC_getHorder,   too_many_1,    wrong_no_1},
    {"quotf*",                  too_few_2,      CC_quotfH,     wrong_no_2},
    {"qqe_simplqneq",           too_few_2,      CC_qqe_simplqneq,wrong_no_2},
    {"ofsf_updsignpow",         too_few_2,      CC_ofsf_updsignpow,wrong_no_2},
    {"f2df",                    CC_f2df,        too_many_1,    wrong_no_1},
    {"d2int",                   CC_d2int,       too_many_1,    wrong_no_1},
    {"newsym1",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_newsym1},
    {"groebcplistmerge",        too_few_2,      CC_groebcplistmerge,wrong_no_2},
    {"xregister_spoly_pair",    wrong_no_na,    wrong_no_nb,   (n_args *)CC_xregister_spoly_pair},
    {"latexprint",              CC_latexprint,  too_many_1,    wrong_no_1},
    {"mapcarcar",               CC_mapcarcar,   too_many_1,    wrong_no_1},
    {"reduce-ratios",           too_few_2,      CC_reduceKratios,wrong_no_2},
    {"simp-prop",               CC_simpKprop,   too_many_1,    wrong_no_1},
    {"simpsqrt2",               CC_simpsqrt2,   too_many_1,    wrong_no_1},
    {"nonlnr",                  too_few_2,      CC_nonlnr,     wrong_no_2},
    {"cl_identifyonoff",        CC_cl_identifyonoff,too_many_1,wrong_no_1},
    {"checkexp",                too_few_2,      CC_checkexp,   wrong_no_2},
    {"mri_simplat1",            too_few_2,      CC_mri_simplat1,wrong_no_2},
    {"cl_sacat",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_cl_sacat},
    {"cr:prep",                 CC_crTprep,     too_many_1,    wrong_no_1},
    {"mkprec",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_mkprec},
    {NULL, (one_args *)"u42", (two_args *)"19918 8115184 5569755", 0}
};

/* end of generated code */

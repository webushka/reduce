
/* $destdir/u35.c        Machine generated C code */

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


/* Code for sptransmat */

static Lisp_Object CC_sptransmat(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0027, v0028, v0029, v0030;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for sptransmat");
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
    stack[-1] = v0000;
/* end of prologue */
    v0027 = stack[-1];
    v0027 = Lconsp(nil, v0027);
    env = stack[-7];
    if (v0027 == nil) goto v0031;
    v0027 = stack[-1];
    stack[0] = v0027;
    v0027 = stack[-1];
    fn = elt(env, 3); /* matlength */
    v0027 = (*qfn1(fn))(qenv(fn), v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    v0027 = qcdr(v0027);
    goto v0033;

v0033:
    v0028 = (Lisp_Object)1; /* 0 */
    stack[-6] = v0028;
    v0028 = (Lisp_Object)1; /* 0 */
    stack[-5] = v0028;
    v0028 = v0027;
    stack[-1] = qcar(v0028);
    v0028 = elt(env, 1); /* spm */
    v0027 = cons(v0028, v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    fn = elt(env, 4); /* mkempspmat */
    v0027 = (*qfn2(fn))(qenv(fn), stack[-1], v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    stack[-2] = v0027;
    v0027 = qvalue(elt(env, 2)); /* nil */
    v0027 = ncons(v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    v0027 = ncons(v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    stack[-3] = v0027;
    v0027 = stack[0];
    v0027 = qcdr(v0027);
    stack[-1] = v0027;
    goto v0034;

v0034:
    v0027 = stack[-1];
    if (v0027 == nil) { Lisp_Object res = stack[-2]; popv(8); return onevalue(res); }
    v0027 = stack[-1];
    v0027 = qcar(v0027);
    stack[0] = v0027;
    v0027 = stack[-6];
    v0027 = add1(v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    stack[-6] = v0027;
    v0027 = stack[0];
    stack[0] = v0027;
    goto v0035;

v0035:
    v0027 = stack[0];
    if (v0027 == nil) goto v0036;
    v0027 = stack[0];
    v0027 = qcar(v0027);
    stack[-4] = v0027;
    v0027 = stack[-5];
    v0027 = add1(v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    stack[-5] = v0027;
    v0028 = stack[-4];
    v0027 = (Lisp_Object)1; /* 0 */
    if (v0028 == v0027) goto v0037;
    v0029 = stack[-5];
    v0028 = stack[-4];
    v0027 = stack[-3];
    v0027 = acons(v0029, v0028, v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    stack[-3] = v0027;
    goto v0037;

v0037:
    v0027 = stack[0];
    v0027 = qcdr(v0027);
    stack[0] = v0027;
    goto v0035;

v0036:
    v0027 = stack[-3];
    v0027 = Lreverse(nil, v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    stack[-3] = v0027;
    stack[0] = stack[-3];
    v0027 = qvalue(elt(env, 2)); /* nil */
    v0027 = ncons(v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    v0027 = ncons(v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    if (equal(stack[0], v0027)) goto v0038;
    v0028 = stack[-2];
    v0027 = stack[-6];
    v0030 = list2(v0028, v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    v0029 = stack[-3];
    v0028 = stack[-2];
    v0027 = qvalue(elt(env, 2)); /* nil */
    fn = elt(env, 5); /* letmtr3 */
    v0027 = (*qfnn(fn))(qenv(fn), 4, v0030, v0029, v0028, v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    goto v0038;

v0038:
    v0027 = (Lisp_Object)1; /* 0 */
    stack[-5] = v0027;
    v0027 = qvalue(elt(env, 2)); /* nil */
    v0027 = ncons(v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    v0027 = ncons(v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    stack[-3] = v0027;
    v0027 = stack[-1];
    v0027 = qcdr(v0027);
    stack[-1] = v0027;
    goto v0034;

v0031:
    v0027 = stack[-1];
    fn = elt(env, 6); /* aeval */
    v0027 = (*qfn1(fn))(qenv(fn), v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    stack[0] = v0027;
    v0027 = stack[-1];
    fn = elt(env, 6); /* aeval */
    v0027 = (*qfn1(fn))(qenv(fn), v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    fn = elt(env, 3); /* matlength */
    v0027 = (*qfn1(fn))(qenv(fn), v0027);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-7];
    v0027 = qcdr(v0027);
    goto v0033;
/* error exit handlers */
v0032:
    popv(8);
    return nil;
}



/* Code for greatertype */

static Lisp_Object CC_greatertype(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0056, v0057, v0058;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for greatertype");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-5] = v0039;
    stack[-6] = v0000;
/* end of prologue */
    stack[-4] = nil;
    stack[-3] = nil;
    stack[-2] = nil;
    stack[-1] = nil;
    v0056 = qvalue(elt(env, 1)); /* optlang!* */
    if (v0056 == nil) goto v0059;
    v0056 = qvalue(elt(env, 1)); /* optlang!* */
    v0057 = v0056;
    goto v0060;

v0060:
    v0056 = elt(env, 3); /* conversion */
    v0056 = get(v0057, v0056);
    env = stack[-8];
    fn = elt(env, 6); /* eval */
    v0056 = (*qfn1(fn))(qenv(fn), v0056);
    nil = C_nil;
    if (exception_pending()) goto v0061;
    env = stack[-8];
    stack[-7] = v0056;
    v0056 = stack[-7];
    v0057 = qcar(v0056);
    v0056 = stack[-5];
    if (equal(v0057, v0056)) goto v0062;
    v0056 = stack[-7];
    v0057 = qcar(v0056);
    v0056 = stack[-6];
    if (!(equal(v0057, v0056))) goto v0063;
    v0056 = qvalue(elt(env, 5)); /* nil */
    stack[-1] = v0056;
    { Lisp_Object res = stack[-1]; popv(9); return onevalue(res); }

v0063:
    v0056 = stack[-7];
    v0056 = qcdr(v0056);
    stack[-7] = v0056;
    if (v0056 == nil) { Lisp_Object res = stack[-1]; popv(9); return onevalue(res); }
    v0056 = stack[-4];
    if (!(v0056 == nil)) { Lisp_Object res = stack[-1]; popv(9); return onevalue(res); }
    v0056 = stack[-7];
    v0056 = qcar(v0056);
    v0058 = v0056;
    goto v0036;

v0036:
    v0056 = v0058;
    if (v0056 == nil) goto v0064;
    v0056 = stack[-2];
    if (!(v0056 == nil)) goto v0064;
    v0056 = v0058;
    v0057 = qcar(v0056);
    v0056 = stack[-6];
    if (!(equal(v0057, v0056))) goto v0065;
    v0056 = qvalue(elt(env, 4)); /* t */
    stack[-3] = v0056;
    goto v0065;

v0065:
    v0056 = v0058;
    v0057 = qcar(v0056);
    v0056 = stack[-5];
    if (equal(v0057, v0056)) goto v0018;
    v0056 = v0058;
    v0056 = qcdr(v0056);
    v0058 = v0056;
    goto v0036;

v0018:
    v0056 = qvalue(elt(env, 4)); /* t */
    stack[-2] = v0056;
    goto v0036;

v0064:
    v0056 = stack[-2];
    if (v0056 == nil) goto v0066;
    v0056 = v0058;
    v0056 = qcdr(v0056);
    v0058 = v0056;
    goto v0067;

v0067:
    v0056 = v0058;
    if (v0056 == nil) goto v0066;
    v0056 = stack[-1];
    if (!(v0056 == nil)) goto v0066;
    v0056 = v0058;
    v0057 = qcar(v0056);
    v0056 = stack[-6];
    if (equal(v0057, v0056)) goto v0068;
    v0056 = v0058;
    v0056 = qcdr(v0056);
    v0058 = v0056;
    goto v0067;

v0068:
    v0056 = qvalue(elt(env, 4)); /* t */
    stack[-1] = v0056;
    stack[-3] = v0056;
    goto v0067;

v0066:
    v0056 = stack[-3];
    if (v0056 == nil) goto v0069;
    v0056 = stack[-2];
    if (!(v0056 == nil)) goto v0069;

v0032:
    stack[0] = (Lisp_Object)65; /* 4 */
    v0057 = stack[-6];
    v0056 = stack[-5];
    v0056 = cons(v0057, v0056);
    nil = C_nil;
    if (exception_pending()) goto v0061;
    env = stack[-8];
    fn = elt(env, 7); /* typerror */
    v0056 = (*qfn2(fn))(qenv(fn), stack[0], v0056);
    nil = C_nil;
    if (exception_pending()) goto v0061;
    env = stack[-8];
    goto v0063;

v0069:
    v0056 = stack[-3];
    if (v0056 == nil) goto v0030;
    v0056 = qvalue(elt(env, 5)); /* nil */
    goto v0029;

v0029:
    if (!(v0056 == nil)) goto v0032;
    v0056 = stack[-3];
    if (v0056 == nil) goto v0063;
    v0056 = stack[-2];
    if (v0056 == nil) goto v0063;
    v0056 = qvalue(elt(env, 4)); /* t */
    stack[-4] = v0056;
    goto v0063;

v0030:
    v0056 = stack[-2];
    goto v0029;

v0062:
    v0056 = qvalue(elt(env, 4)); /* t */
    stack[-1] = v0056;
    { Lisp_Object res = stack[-1]; popv(9); return onevalue(res); }

v0059:
    v0056 = elt(env, 2); /* fortran */
    v0057 = v0056;
    goto v0060;
/* error exit handlers */
v0061:
    popv(9);
    return nil;
}



/* Code for vdpcleanup */

static Lisp_Object MS_CDECL CC_vdpcleanup(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0023;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "vdpcleanup");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for vdpcleanup");
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
    v0023 = qvalue(elt(env, 1)); /* nil */
    v0023 = ncons(v0023);
    nil = C_nil;
    if (exception_pending()) goto v0009;
    env = stack[0];
    qvalue(elt(env, 2)) = v0023; /* dipevlist!* */
    { popv(1); return onevalue(v0023); }
/* error exit handlers */
v0009:
    popv(1);
    return nil;
}



/* Code for wedgef */

static Lisp_Object CC_wedgef(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0101, v0102, v0103;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for wedgef");
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
    v0101 = stack[-1];
    fn = elt(env, 8); /* dim!<deg */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    if (v0101 == nil) goto v0105;
    v0101 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v0101); }

v0105:
    v0101 = stack[-1];
    v0102 = qcar(v0101);
    v0101 = elt(env, 2); /* hodge */
    if (!consp(v0102)) goto v0106;
    v0102 = qcar(v0102);
    if (!(v0102 == v0101)) goto v0106;
    v0101 = stack[-1];
    v0101 = qcar(v0101);
    v0101 = qcdr(v0101);
    v0101 = qcar(v0101);
    fn = elt(env, 9); /* deg!*form */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    stack[-2] = v0101;
    stack[0] = stack[-2];
    v0101 = stack[-1];
    v0101 = qcdr(v0101);
    fn = elt(env, 10); /* deg!*farg */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    if (equal(stack[0], v0101)) goto v0107;
    v0101 = stack[-1];
    {
        popv(4);
        fn = elt(env, 11); /* mkwedge */
        return (*qfn1(fn))(qenv(fn), v0101);
    }

v0107:
    v0101 = stack[-1];
    v0101 = qcar(v0101);
    v0101 = qcdr(v0101);
    v0103 = qcar(v0101);
    v0102 = (Lisp_Object)17; /* 1 */
    v0101 = (Lisp_Object)17; /* 1 */
    v0101 = list2star(v0103, v0102, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    stack[0] = ncons(v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    v0101 = stack[-1];
    v0101 = qcdr(v0101);
    v0101 = qcdr(v0101);
    if (v0101 == nil) goto v0108;
    v0101 = stack[-1];
    v0101 = qcdr(v0101);
    fn = elt(env, 12); /* mkuniquewedge1 */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    goto v0019;

v0019:
    fn = elt(env, 13); /* hodgepf */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    fn = elt(env, 14); /* mkunarywedge */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    fn = elt(env, 15); /* wedgepf2 */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[0], v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    stack[0] = stack[-2];
    v0101 = qvalue(elt(env, 3)); /* dimex!* */
    fn = elt(env, 16); /* negf */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    fn = elt(env, 17); /* addf */
    v0101 = (*qfn2(fn))(qenv(fn), stack[-2], v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    fn = elt(env, 18); /* multf */
    v0101 = (*qfn2(fn))(qenv(fn), stack[0], v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    fn = elt(env, 19); /* mksgnsq */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    {
        Lisp_Object v0109 = stack[-1];
        popv(4);
        fn = elt(env, 20); /* multpfsq */
        return (*qfn2(fn))(qenv(fn), v0109, v0101);
    }

v0108:
    v0101 = stack[-1];
    v0101 = qcdr(v0101);
    v0103 = qcar(v0101);
    v0102 = (Lisp_Object)17; /* 1 */
    v0101 = (Lisp_Object)17; /* 1 */
    v0101 = list2star(v0103, v0102, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    v0101 = ncons(v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    goto v0019;

v0106:
    v0101 = stack[-1];
    v0102 = qcar(v0101);
    v0101 = elt(env, 4); /* d */
    if (!consp(v0102)) goto v0110;
    v0102 = qcar(v0102);
    if (!(v0102 == v0101)) goto v0110;
    v0102 = elt(env, 4); /* d */
    v0101 = elt(env, 5); /* noxpnd */
    v0101 = Lflagp(nil, v0102, v0101);
    env = stack[-3];
    if (v0101 == nil) goto v0004;
    v0101 = qvalue(elt(env, 6)); /* t */
    goto v0111;

v0111:
    if (v0101 == nil) goto v0112;
    v0101 = stack[-1];
    v0101 = qcar(v0101);
    v0101 = qcdr(v0101);
    v0102 = qcar(v0101);
    v0101 = stack[-1];
    v0101 = qcdr(v0101);
    v0101 = cons(v0102, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    fn = elt(env, 21); /* dwedge */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    fn = elt(env, 14); /* mkunarywedge */
    stack[-2] = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    v0101 = stack[-1];
    v0101 = qcar(v0101);
    v0101 = qcdr(v0101);
    v0103 = qcar(v0101);
    v0102 = (Lisp_Object)17; /* 1 */
    v0101 = (Lisp_Object)17; /* 1 */
    v0101 = list2star(v0103, v0102, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    stack[0] = ncons(v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    v0101 = stack[-1];
    v0101 = qcdr(v0101);
    v0101 = qcdr(v0101);
    if (v0101 == nil) goto v0113;
    v0101 = stack[-1];
    v0101 = qcdr(v0101);
    fn = elt(env, 21); /* dwedge */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    goto v0114;

v0114:
    fn = elt(env, 14); /* mkunarywedge */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    fn = elt(env, 15); /* wedgepf2 */
    stack[0] = (*qfn2(fn))(qenv(fn), stack[0], v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    v0101 = stack[-1];
    v0101 = qcar(v0101);
    v0101 = qcdr(v0101);
    v0101 = qcar(v0101);
    fn = elt(env, 9); /* deg!*form */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    fn = elt(env, 19); /* mksgnsq */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    fn = elt(env, 22); /* negsq */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    fn = elt(env, 20); /* multpfsq */
    v0101 = (*qfn2(fn))(qenv(fn), stack[0], v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    {
        Lisp_Object v0115 = stack[-2];
        popv(4);
        fn = elt(env, 23); /* addpf */
        return (*qfn2(fn))(qenv(fn), v0115, v0101);
    }

v0113:
    v0101 = stack[-1];
    v0101 = qcdr(v0101);
    v0101 = qcar(v0101);
    fn = elt(env, 24); /* exdfk */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    goto v0114;

v0112:
    v0101 = stack[-1];
    {
        popv(4);
        fn = elt(env, 11); /* mkwedge */
        return (*qfn1(fn))(qenv(fn), v0101);
    }

v0004:
    v0102 = qvalue(elt(env, 7)); /* lftshft!* */
    v0101 = stack[-1];
    v0101 = qcar(v0101);
    v0101 = qcdr(v0101);
    v0101 = qcar(v0101);
    fn = elt(env, 25); /* smemqlp */
    v0101 = (*qfn2(fn))(qenv(fn), v0102, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-3];
    goto v0111;

v0110:
    v0101 = qvalue(elt(env, 1)); /* nil */
    goto v0111;
/* error exit handlers */
v0104:
    popv(4);
    return nil;
}



/* Code for bflessp */

static Lisp_Object CC_bflessp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0117, v0055, v0118;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for bflessp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0055 = v0039;
    v0118 = v0000;
/* end of prologue */
    v0117 = v0118;
    if (!consp(v0117)) goto v0005;
    v0117 = v0055;
    v0055 = v0118;
    {
        fn = elt(env, 1); /* grpbf */
        return (*qfn2(fn))(qenv(fn), v0117, v0055);
    }

v0005:
    v0117 = v0118;
        return Llessp(nil, v0117, v0055);
}



/* Code for calc_den_tar */

static Lisp_Object CC_calc_den_tar(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0118, v0121;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for calc_den_tar");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v0118 = v0039;
    v0121 = v0000;
/* end of prologue */
    fn = elt(env, 1); /* denlist */
    v0118 = (*qfn2(fn))(qenv(fn), v0121, v0118);
    nil = C_nil;
    if (exception_pending()) goto v0062;
    env = stack[0];
    v0121 = v0118;
    v0118 = v0121;
    if (v0118 == nil) goto v0116;
    v0118 = v0121;
    v0118 = qcdr(v0118);
    if (v0118 == nil) goto v0054;
    v0118 = v0121;
    {
        popv(1);
        fn = elt(env, 2); /* constimes */
        return (*qfn1(fn))(qenv(fn), v0118);
    }

v0054:
    v0118 = v0121;
    v0118 = qcar(v0118);
    { popv(1); return onevalue(v0118); }

v0116:
    v0118 = (Lisp_Object)17; /* 1 */
    { popv(1); return onevalue(v0118); }
/* error exit handlers */
v0062:
    popv(1);
    return nil;
}



/* Code for log_freevars */

static Lisp_Object CC_log_freevars(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0146, v0147, v0148;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for log_freevars");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0039;
    v0147 = v0000;
/* end of prologue */
    v0146 = stack[0];
    if (!consp(v0146)) goto v0016;
    v0148 = stack[0];
    v0146 = elt(env, 7); /* quote */
    if (!consp(v0148)) goto v0149;
    v0148 = qcar(v0148);
    if (!(v0148 == v0146)) goto v0149;
    v0146 = qvalue(elt(env, 1)); /* t */
    goto v0150;

v0150:
    if (v0146 == nil) goto v0151;
    v0146 = qvalue(elt(env, 3)); /* nil */
    { popv(2); return onevalue(v0146); }

v0151:
    v0148 = stack[0];
    v0146 = elt(env, 10); /* prog */
    if (!consp(v0148)) goto v0041;
    v0148 = qcar(v0148);
    if (!(v0148 == v0146)) goto v0041;
    v0146 = stack[0];
    v0146 = qcdr(v0146);
    v0146 = qcar(v0146);
    v0148 = Lappend(nil, v0146, v0147);
    nil = C_nil;
    if (exception_pending()) goto v0152;
    env = stack[-1];
    v0146 = stack[0];
    v0147 = qcdr(v0146);
    v0146 = qvalue(elt(env, 1)); /* t */
    {
        popv(2);
        fn = elt(env, 13); /* log_freevars_list */
        return (*qfnn(fn))(qenv(fn), 3, v0148, v0147, v0146);
    }

v0041:
    v0148 = stack[0];
    v0146 = elt(env, 11); /* lambda */
    if (!consp(v0148)) goto v0076;
    v0148 = qcar(v0148);
    if (!(v0148 == v0146)) goto v0076;
    v0146 = stack[0];
    v0146 = qcdr(v0146);
    v0146 = qcar(v0146);
    v0148 = Lappend(nil, v0146, v0147);
    nil = C_nil;
    if (exception_pending()) goto v0152;
    env = stack[-1];
    v0146 = stack[0];
    v0147 = qcdr(v0146);
    v0146 = qvalue(elt(env, 3)); /* nil */
    {
        popv(2);
        fn = elt(env, 13); /* log_freevars_list */
        return (*qfnn(fn))(qenv(fn), 3, v0148, v0147, v0146);
    }

v0076:
    v0148 = stack[0];
    v0146 = elt(env, 12); /* cond */
    if (!consp(v0148)) goto v0153;
    v0148 = qcar(v0148);
    if (!(v0148 == v0146)) goto v0153;
    v0146 = stack[0];
    v0146 = qcdr(v0146);
    {
        popv(2);
        fn = elt(env, 14); /* log_freevars_list_list */
        return (*qfn2(fn))(qenv(fn), v0147, v0146);
    }

v0153:
    v0146 = stack[0];
    v0146 = qcar(v0146);
    if (!consp(v0146)) goto v0154;
    v0148 = v0147;
    v0147 = stack[0];
    v0146 = qvalue(elt(env, 3)); /* nil */
    {
        popv(2);
        fn = elt(env, 13); /* log_freevars_list */
        return (*qfnn(fn))(qenv(fn), 3, v0148, v0147, v0146);
    }

v0154:
    v0148 = v0147;
    v0146 = stack[0];
    v0147 = qcdr(v0146);
    v0146 = qvalue(elt(env, 3)); /* nil */
    {
        popv(2);
        fn = elt(env, 13); /* log_freevars_list */
        return (*qfnn(fn))(qenv(fn), 3, v0148, v0147, v0146);
    }

v0149:
    v0148 = stack[0];
    v0146 = elt(env, 8); /* function */
    if (!consp(v0148)) goto v0010;
    v0148 = qcar(v0148);
    if (!(v0148 == v0146)) goto v0010;
    v0146 = stack[0];
    v0146 = qcdr(v0146);
    v0146 = qcar(v0146);
    v0146 = (consp(v0146) ? nil : lisp_true);
    goto v0012;

v0012:
    if (v0146 == nil) goto v0155;
    v0146 = qvalue(elt(env, 1)); /* t */
    goto v0150;

v0155:
    v0148 = stack[0];
    v0146 = elt(env, 9); /* go */
    v0146 = Leqcar(nil, v0148, v0146);
    env = stack[-1];
    goto v0150;

v0010:
    v0146 = qvalue(elt(env, 3)); /* nil */
    goto v0012;

v0016:
    v0146 = stack[0];
    if (symbolp(v0146)) goto v0156;
    v0146 = qvalue(elt(env, 1)); /* t */
    goto v0033;

v0033:
    if (v0146 == nil) goto v0019;
    v0146 = qvalue(elt(env, 3)); /* nil */
    { popv(2); return onevalue(v0146); }

v0019:
    v0146 = Lposn(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0152;
    env = stack[-1];
    v0146 = (Lisp_Object)zerop(v0146);
    v0146 = v0146 ? lisp_true : nil;
    env = stack[-1];
    if (!(v0146 == nil)) goto v0035;
    v0146 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0152;
    env = stack[-1];
    goto v0035;

v0035:
    v0146 = elt(env, 4); /* "+++ Use of free variable in smacro/inline body: " 
*/
    v0146 = Lprinc(nil, v0146);
    nil = C_nil;
    if (exception_pending()) goto v0152;
    env = stack[-1];
    v0146 = stack[0];
    v0146 = Lprint(nil, v0146);
    nil = C_nil;
    if (exception_pending()) goto v0152;
    env = stack[-1];
    v0146 = elt(env, 5); /* "+++ Macro was: " */
    v0146 = Lprinc(nil, v0146);
    nil = C_nil;
    if (exception_pending()) goto v0152;
    env = stack[-1];
    v0146 = qvalue(elt(env, 6)); /* inlineinfo */
    v0146 = Lprint(nil, v0146);
    nil = C_nil;
    if (exception_pending()) goto v0152;
    env = stack[-1];
    v0146 = qvalue(elt(env, 1)); /* t */
    { popv(2); return onevalue(v0146); }

v0156:
    v0146 = stack[0];
    v0146 = Lmember(nil, v0146, v0147);
    if (!(v0146 == nil)) goto v0033;
    v0146 = stack[0];
    v0146 = Lsymbol_globalp(nil, v0146);
    env = stack[-1];
    if (!(v0146 == nil)) goto v0033;
    v0146 = stack[0];
    v0146 = Lsymbol_specialp(nil, v0146);
    nil = C_nil;
    if (exception_pending()) goto v0152;
    env = stack[-1];
    if (!(v0146 == nil)) goto v0033;
    v0147 = stack[0];
    v0146 = elt(env, 2); /* constant!? */
    v0146 = get(v0147, v0146);
    env = stack[-1];
    if (!(v0146 == nil)) goto v0033;
    v0146 = stack[0];
    if (v0146 == nil) goto v0034;
    v0147 = stack[0];
    v0146 = qvalue(elt(env, 1)); /* t */
    v0146 = (equal(v0147, v0146) ? lisp_true : nil);
    goto v0033;

v0034:
    v0146 = qvalue(elt(env, 1)); /* t */
    goto v0033;
/* error exit handlers */
v0152:
    popv(2);
    return nil;
}



/* Code for dfp!-sub */

static Lisp_Object CC_dfpKsub(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0080, v0071, v0043;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dfp-sub");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-3] = v0039;
    stack[-4] = v0000;
/* end of prologue */
    v0080 = stack[-3];
    v0080 = qcdr(v0080);
    v0080 = qcar(v0080);
    v0071 = v0080;
    v0080 = v0071;
    v0080 = qcdr(v0080);
    stack[-5] = v0080;
    v0080 = v0071;
    v0071 = qcar(v0080);
    stack[-2] = v0071;
    v0080 = elt(env, 1); /* generic_function */
    v0080 = get(v0071, v0080);
    env = stack[-6];
    stack[-1] = v0080;
    v0080 = stack[-5];
    if (!(v0080 == nil)) goto v0174;
    v0080 = qvalue(elt(env, 2)); /* nil */
    v0071 = stack[-1];
    v0043 = v0071;
    goto v0175;

v0175:
    v0071 = v0043;
    if (v0071 == nil) goto v0176;
    v0071 = v0043;
    v0071 = qcar(v0071);
    if (!(v0080 == nil)) goto v0024;
    v0080 = stack[-4];
    v0080 = Lassoc(nil, v0071, v0080);
    goto v0024;

v0024:
    v0071 = v0043;
    v0071 = qcdr(v0071);
    v0043 = v0071;
    goto v0175;

v0176:
    if (v0080 == nil) goto v0174;
    v0080 = stack[-1];
    stack[-5] = v0080;
    goto v0174;

v0174:
    stack[0] = stack[-4];
    v0071 = elt(env, 3); /* list */
    v0080 = stack[-5];
    v0080 = cons(v0071, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0177;
    env = stack[-6];
    fn = elt(env, 5); /* listsub */
    v0080 = (*qfn2(fn))(qenv(fn), stack[0], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0177;
    env = stack[-6];
    v0080 = qcdr(v0080);
    stack[-5] = v0080;
    v0071 = stack[-2];
    v0080 = stack[-4];
    v0071 = Lassoc(nil, v0071, v0080);
    v0080 = v0071;
    if (v0071 == nil) goto v0048;
    v0071 = qvalue(elt(env, 2)); /* nil */
    goto v0037;

v0037:
    if (v0071 == nil) goto v0178;
    stack[0] = elt(env, 4); /* dfp */
    v0071 = stack[-2];
    v0080 = stack[-5];
    v0071 = cons(v0071, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0177;
    v0080 = stack[-3];
    v0080 = qcdr(v0080);
    v0080 = qcdr(v0080);
    v0080 = qcar(v0080);
    {
        Lisp_Object v0129 = stack[0];
        popv(7);
        return list3(v0129, v0071, v0080);
    }

v0178:
    v0080 = qcdr(v0080);
    fn = elt(env, 6); /* reval */
    v0080 = (*qfn1(fn))(qenv(fn), v0080);
    nil = C_nil;
    if (exception_pending()) goto v0177;
    env = stack[-6];
    stack[0] = v0080;
    v0080 = stack[-5];
    if (v0080 == nil) goto v0179;
    v0071 = stack[-1];
    v0080 = stack[-5];
    fn = elt(env, 7); /* pair */
    v0080 = (*qfn2(fn))(qenv(fn), v0071, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0177;
    env = stack[-6];
    v0071 = v0080;
    goto v0004;

v0004:
    v0080 = stack[-4];
    fn = elt(env, 8); /* dfp!-sub1 */
    v0080 = (*qfnn(fn))(qenv(fn), 3, stack[0], v0071, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0177;
    env = stack[-6];
    v0043 = elt(env, 4); /* dfp */
    v0071 = v0080;
    v0080 = stack[-3];
    v0080 = qcdr(v0080);
    v0080 = qcdr(v0080);
    v0080 = qcar(v0080);
    popv(7);
    return list3(v0043, v0071, v0080);

v0179:
    v0071 = nil;
    goto v0004;

v0048:
    v0071 = stack[-2];
    v0080 = stack[-1];
    v0071 = cons(v0071, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0177;
    env = stack[-6];
    v0080 = stack[-4];
    v0071 = Lassoc(nil, v0071, v0080);
    v0080 = v0071;
    v0071 = (v0071 == nil ? lisp_true : nil);
    goto v0037;
/* error exit handlers */
v0177:
    popv(7);
    return nil;
}



/* Code for lf!=zero */

static Lisp_Object CC_lfMzero(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0016;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lf=zero");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0016 = v0000;
/* end of prologue */
    v0016 = qcdr(v0016);
    v0016 = (v0016 == nil ? lisp_true : nil);
    return onevalue(v0016);
}



/* Code for bfminus */

static Lisp_Object CC_bfminus(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0033, v0116;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for bfminus");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0116 = v0000;
/* end of prologue */
    v0033 = v0116;
    if (!consp(v0033)) goto v0009;
    v0033 = v0116;
    {
        fn = elt(env, 1); /* minus!: */
        return (*qfn1(fn))(qenv(fn), v0033);
    }

v0009:
    v0033 = v0116;
    return negate(v0033);
}



/* Code for ra_intequiv0 */

static Lisp_Object CC_ra_intequiv0(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0029, v0030, v0162, v0163;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ra_intequiv0");
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
    stack[-3] = v0000;
/* end of prologue */
    v0029 = stack[-3];
    fn = elt(env, 3); /* ra_zerop */
    v0029 = (*qfn1(fn))(qenv(fn), v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    if (v0029 == nil) goto v0005;
    v0029 = (Lisp_Object)1; /* 0 */
    { popv(6); return onevalue(v0029); }

v0005:
    v0029 = stack[-3];
    fn = elt(env, 4); /* ra_f */
    v0029 = (*qfn1(fn))(qenv(fn), v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    stack[-4] = v0029;
    v0029 = stack[-4];
    v0029 = qcar(v0029);
    v0029 = qcar(v0029);
    v0030 = qcdr(v0029);
    v0029 = (Lisp_Object)17; /* 1 */
    v0029 = Leqn(nil, v0030, v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    if (v0029 == nil) goto v0054;
    v0029 = stack[-4];
    v0029 = qcar(v0029);
    v0030 = qcdr(v0029);
    v0029 = (Lisp_Object)17; /* 1 */
    v0029 = Leqn(nil, v0030, v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    if (v0029 == nil) goto v0054;
    v0029 = stack[-4];
    v0029 = qcdr(v0029);
    {
        popv(6);
        fn = elt(env, 5); /* negf */
        return (*qfn1(fn))(qenv(fn), v0029);
    }

v0054:
    v0029 = stack[-3];
    fn = elt(env, 6); /* ra_iv */
    v0029 = (*qfn1(fn))(qenv(fn), v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    fn = elt(env, 7); /* riv_l */
    v0029 = (*qfn1(fn))(qenv(fn), v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    stack[-2] = v0029;
    v0029 = stack[-3];
    fn = elt(env, 6); /* ra_iv */
    v0029 = (*qfn1(fn))(qenv(fn), v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    fn = elt(env, 8); /* riv_u */
    v0029 = (*qfn1(fn))(qenv(fn), v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    stack[-1] = v0029;
    goto v0174;

v0174:
    stack[0] = stack[-1];
    v0029 = stack[-2];
    fn = elt(env, 9); /* negsq */
    v0029 = (*qfn1(fn))(qenv(fn), v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    fn = elt(env, 10); /* addsq */
    stack[0] = (*qfn2(fn))(qenv(fn), stack[0], v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    v0030 = (Lisp_Object)17; /* 1 */
    v0029 = (Lisp_Object)17; /* 1 */
    v0029 = cons(v0030, v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    fn = elt(env, 11); /* sfto_greaterq */
    v0029 = (*qfn2(fn))(qenv(fn), stack[0], v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    if (v0029 == nil) goto v0192;
    v0163 = stack[-4];
    v0162 = stack[-2];
    v0030 = stack[-1];
    v0029 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 12); /* ra_refine1 */
    v0029 = (*qfnn(fn))(qenv(fn), 4, v0163, v0162, v0030, v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    v0030 = v0029;
    v0029 = v0030;
    v0029 = qcar(v0029);
    stack[-2] = v0029;
    v0029 = v0030;
    v0029 = qcdr(v0029);
    stack[-1] = v0029;
    goto v0174;

v0192:
    v0029 = stack[-2];
    fn = elt(env, 13); /* sfto_floorq */
    v0029 = (*qfn1(fn))(qenv(fn), v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    v0030 = qcar(v0029);
    v0029 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 14); /* addf */
    v0029 = (*qfn2(fn))(qenv(fn), v0030, v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    stack[0] = v0029;
    v0030 = stack[0];
    v0029 = (Lisp_Object)17; /* 1 */
    v0030 = cons(v0030, v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    v0029 = stack[-1];
    fn = elt(env, 15); /* sfto_lessq */
    v0029 = (*qfn2(fn))(qenv(fn), v0030, v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    if (v0029 == nil) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    stack[-1] = stack[-4];
    v0030 = elt(env, 2); /* x */
    v0029 = stack[0];
    v0029 = cons(v0030, v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    v0029 = ncons(v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    env = stack[-5];
    fn = elt(env, 16); /* sfto_fsub1 */
    v0029 = (*qfn2(fn))(qenv(fn), stack[-1], v0029);
    nil = C_nil;
    if (exception_pending()) goto v0032;
    if (!(v0029 == nil)) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    v0029 = stack[0];
    if (!(v0029 == nil)) { popv(6); return onevalue(v0029); }
    v0029 = (Lisp_Object)1; /* 0 */
    { popv(6); return onevalue(v0029); }
/* error exit handlers */
v0032:
    popv(6);
    return nil;
}



/* Code for setqinsertlist */

static Lisp_Object CC_setqinsertlist(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0001, v0002, v0161;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for setqinsertlist");
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
    v0002 = v0000;
/* end of prologue */
    v0001 = qvalue(elt(env, 1)); /* fluidbibasissetq */
    stack[-2] = v0001;
    v0001 = v0002;
    stack[-1] = v0001;
    goto v0105;

v0105:
    v0001 = stack[-2];
    v0001 = qcar(v0001);
    if (v0001 == nil) goto v0119;
    v0001 = stack[-1];
    v0001 = qcar(v0001);
    if (v0001 == nil) goto v0119;
    v0001 = stack[-2];
    v0002 = qcar(v0001);
    v0001 = (Lisp_Object)17; /* 1 */
    v0001 = *(Lisp_Object *)((char *)v0002 + (CELL-TAG_VECTOR) + ((int32_t)v0001/(16/CELL)));
    v0161 = qcar(v0001);
    v0001 = stack[-1];
    v0002 = qcar(v0001);
    v0001 = (Lisp_Object)17; /* 1 */
    v0001 = *(Lisp_Object *)((char *)v0002 + (CELL-TAG_VECTOR) + ((int32_t)v0001/(16/CELL)));
    v0001 = qcar(v0001);
    fn = elt(env, 4); /* monomcompare */
    v0001 = (*qfn2(fn))(qenv(fn), v0161, v0001);
    nil = C_nil;
    if (exception_pending()) goto v0179;
    env = stack[-3];
    v0161 = v0001;
    v0002 = v0161;
    v0001 = (Lisp_Object)-15; /* -1 */
    if (v0002 == v0001) goto v0063;
    v0002 = v0161;
    v0001 = (Lisp_Object)1; /* 0 */
    v0001 = (v0002 == v0001 ? lisp_true : nil);
    goto v0172;

v0172:
    if (v0001 == nil) goto v0196;
    v0001 = stack[-2];
    v0001 = qcdr(v0001);
    stack[-2] = v0001;
    goto v0105;

v0196:
    stack[0] = stack[-2];
    v0001 = stack[-2];
    v0002 = qcar(v0001);
    v0001 = stack[-2];
    v0001 = qcdr(v0001);
    v0001 = cons(v0002, v0001);
    nil = C_nil;
    if (exception_pending()) goto v0179;
    env = stack[-3];
    v0002 = Lrplacd(nil, stack[0], v0001);
    nil = C_nil;
    if (exception_pending()) goto v0179;
    env = stack[-3];
    v0001 = stack[-1];
    v0001 = qcar(v0001);
    v0001 = Lrplaca(nil, v0002, v0001);
    nil = C_nil;
    if (exception_pending()) goto v0179;
    env = stack[-3];
    v0001 = stack[-2];
    v0001 = qcdr(v0001);
    stack[-2] = v0001;
    v0001 = stack[-1];
    v0001 = qcdr(v0001);
    stack[-1] = v0001;
    goto v0105;

v0063:
    v0001 = qvalue(elt(env, 3)); /* t */
    goto v0172;

v0119:
    v0001 = stack[-1];
    v0001 = qcar(v0001);
    if (v0001 == nil) goto v0149;
    v0002 = stack[-2];
    v0001 = stack[-1];
    v0001 = Lrplacd(nil, v0002, v0001);
    nil = C_nil;
    if (exception_pending()) goto v0179;
    env = stack[-3];
    stack[0] = v0001;
    v0002 = stack[0];
    v0001 = stack[0];
    v0001 = qcdr(v0001);
    v0001 = qcar(v0001);
    v0002 = Lrplaca(nil, v0002, v0001);
    nil = C_nil;
    if (exception_pending()) goto v0179;
    env = stack[-3];
    v0001 = stack[0];
    v0001 = qcdr(v0001);
    v0001 = qcdr(v0001);
    v0001 = Lrplacd(nil, v0002, v0001);
    nil = C_nil;
    if (exception_pending()) goto v0179;
    goto v0149;

v0149:
    v0001 = nil;
    { popv(4); return onevalue(v0001); }
/* error exit handlers */
v0179:
    popv(4);
    return nil;
}



/* Code for freeof!-dfl */

static Lisp_Object CC_freeofKdfl(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0099, v0195;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for freeof-dfl");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0039;
    stack[-1] = v0000;
/* end of prologue */

v0197:
    v0099 = stack[-1];
    if (!consp(v0099)) goto v0016;
    v0099 = stack[-1];
    v0195 = qcar(v0099);
    v0099 = stack[0];
    fn = elt(env, 3); /* freeof!-df */
    v0099 = (*qfn2(fn))(qenv(fn), v0195, v0099);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-2];
    if (v0099 == nil) goto v0033;
    v0099 = stack[-1];
    v0195 = qcdr(v0099);
    v0099 = stack[0];
    stack[-1] = v0195;
    stack[0] = v0099;
    goto v0197;

v0033:
    v0099 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v0099); }

v0016:
    v0099 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v0099); }
/* error exit handlers */
v0022:
    popv(3);
    return nil;
}



/* Code for mri_ofsf2mriat */

static Lisp_Object CC_mri_ofsf2mriat(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0199, v0054, v0100;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mri_ofsf2mriat");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0199 = v0039;
    v0054 = v0000;
/* end of prologue */
    v0100 = v0054;
    v0100 = qcar(v0100);
    v0054 = qcdr(v0054);
    v0054 = qcar(v0054);
    {
        fn = elt(env, 1); /* mri_0mk2 */
        return (*qfnn(fn))(qenv(fn), 3, v0100, v0054, v0199);
    }
}



/* Code for intervalom */

static Lisp_Object CC_intervalom(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0049, v0094, v0088;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for intervalom");
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
    v0049 = stack[-2];
    v0049 = qcdr(v0049);
    v0049 = qcar(v0049);
    stack[-3] = v0049;
    v0049 = stack[-2];
    v0049 = qcar(v0049);
    stack[-1] = v0049;
    v0094 = stack[-1];
    v0049 = elt(env, 1); /* lowupperlimit */
    if (!(v0094 == v0049)) goto v0021;
    v0049 = elt(env, 2); /* integer_interval */
    stack[-1] = v0049;
    v0049 = qvalue(elt(env, 3)); /* nil */
    stack[-3] = v0049;
    v0049 = stack[-2];
    v0088 = qcar(v0049);
    v0094 = qvalue(elt(env, 3)); /* nil */
    v0049 = stack[-2];
    v0049 = qcdr(v0049);
    v0049 = list2star(v0088, v0094, v0049);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-4];
    stack[-2] = v0049;
    goto v0021;

v0021:
    v0094 = stack[-1];
    v0049 = qvalue(elt(env, 4)); /* valid_om!* */
    v0049 = Lassoc(nil, v0094, v0049);
    v0049 = qcdr(v0049);
    v0049 = qcar(v0049);
    stack[0] = v0049;
    v0049 = stack[-3];
    if (v0049 == nil) goto v0052;
    v0049 = stack[-3];
    v0049 = qcar(v0049);
    v0049 = qcdr(v0049);
    v0049 = qcar(v0049);
    v0094 = Lintern(nil, v0049);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-4];
    v0049 = qvalue(elt(env, 5)); /* interval!* */
    v0049 = Lassoc(nil, v0094, v0049);
    v0049 = qcdr(v0049);
    v0049 = qcar(v0049);
    stack[-1] = v0049;
    goto v0052;

v0052:
    v0049 = elt(env, 6); /* "<OMA>" */
    fn = elt(env, 12); /* printout */
    v0049 = (*qfn1(fn))(qenv(fn), v0049);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-4];
    v0049 = qvalue(elt(env, 7)); /* t */
    fn = elt(env, 13); /* indent!* */
    v0049 = (*qfn1(fn))(qenv(fn), v0049);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-4];
    v0049 = elt(env, 8); /* "<OMS cd=""" */
    fn = elt(env, 12); /* printout */
    v0049 = (*qfn1(fn))(qenv(fn), v0049);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-4];
    v0049 = stack[0];
    v0049 = Lprinc(nil, v0049);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-4];
    v0049 = elt(env, 9); /* """ name=""" */
    v0049 = Lprinc(nil, v0049);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-4];
    v0049 = stack[-1];
    v0049 = Lprinc(nil, v0049);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-4];
    v0049 = elt(env, 10); /* """/>" */
    v0049 = Lprinc(nil, v0049);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-4];
    v0049 = stack[-2];
    v0049 = qcdr(v0049);
    v0049 = qcdr(v0049);
    fn = elt(env, 14); /* multiom */
    v0049 = (*qfn1(fn))(qenv(fn), v0049);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-4];
    v0049 = qvalue(elt(env, 3)); /* nil */
    fn = elt(env, 13); /* indent!* */
    v0049 = (*qfn1(fn))(qenv(fn), v0049);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-4];
    v0049 = elt(env, 11); /* "</OMA>" */
    fn = elt(env, 12); /* printout */
    v0049 = (*qfn1(fn))(qenv(fn), v0049);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    v0049 = nil;
    { popv(5); return onevalue(v0049); }
/* error exit handlers */
v0141:
    popv(5);
    return nil;
}



/* Code for remzzzz */

static Lisp_Object CC_remzzzz(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0052, v0020, v0145;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for remzzzz");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0039;
    stack[-1] = v0000;
/* end of prologue */
    v0145 = nil;
    goto v0015;

v0015:
    v0052 = stack[-1];
    if (v0052 == nil) goto v0033;
    v0052 = stack[-1];
    v0052 = qcar(v0052);
    v0020 = qcar(v0052);
    v0052 = stack[0];
    v0052 = qcar(v0052);
    v0052 = qcar(v0052);
    if (equal(v0020, v0052)) goto v0142;
    v0052 = stack[0];
    v0052 = qcar(v0052);
    v0020 = v0145;
    v0052 = cons(v0052, v0020);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    env = stack[-2];
    v0145 = v0052;
    v0052 = stack[0];
    v0052 = qcdr(v0052);
    stack[0] = v0052;
    goto v0015;

v0142:
    v0052 = stack[-1];
    v0052 = qcdr(v0052);
    stack[-1] = v0052;
    v0052 = stack[0];
    v0052 = qcdr(v0052);
    stack[0] = v0052;
    goto v0015;

v0033:
    v0020 = v0145;
    v0052 = stack[0];
    {
        popv(3);
        fn = elt(env, 1); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v0020, v0052);
    }
/* error exit handlers */
v0172:
    popv(3);
    return nil;
}



/* Code for diplmon2sq */

static Lisp_Object CC_diplmon2sq(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0091, v0117;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for diplmon2sq");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0091 = v0039;
    v0117 = v0000;
/* end of prologue */
    stack[0] = v0117;
    v0117 = v0091;
    v0091 = qvalue(elt(env, 1)); /* dipvars!* */
    fn = elt(env, 2); /* dipev2f */
    v0117 = (*qfn2(fn))(qenv(fn), v0117, v0091);
    nil = C_nil;
    if (exception_pending()) goto v0118;
    env = stack[-1];
    v0091 = (Lisp_Object)17; /* 1 */
    v0091 = cons(v0117, v0091);
    nil = C_nil;
    if (exception_pending()) goto v0118;
    env = stack[-1];
    {
        Lisp_Object v0121 = stack[0];
        popv(2);
        fn = elt(env, 3); /* multsq */
        return (*qfn2(fn))(qenv(fn), v0121, v0091);
    }
/* error exit handlers */
v0118:
    popv(2);
    return nil;
}



/* Code for multiply!-by!-power!-of!-ten */

static Lisp_Object CC_multiplyKbyKpowerKofKten(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0203, v0166;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for multiply-by-power-of-ten");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0039;
    stack[-1] = v0000;
/* end of prologue */
    v0166 = stack[0];
    v0203 = (Lisp_Object)1; /* 0 */
    v0203 = (Lisp_Object)lessp2(v0166, v0203);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    v0203 = v0203 ? lisp_true : nil;
    env = stack[-3];
    if (v0203 == nil) goto v0199;
    v0203 = elt(env, 0); /* multiply!-by!-power!-of!-ten */
    {
        popv(4);
        fn = elt(env, 4); /* bflerrmsg */
        return (*qfn1(fn))(qenv(fn), v0203);
    }

v0199:
    v0203 = qvalue(elt(env, 1)); /* bften!* */
    stack[-2] = v0203;
    goto v0121;

v0121:
    v0166 = stack[0];
    v0203 = (Lisp_Object)1; /* 0 */
    v0203 = (Lisp_Object)greaterp2(v0166, v0203);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    v0203 = v0203 ? lisp_true : nil;
    env = stack[-3];
    if (v0203 == nil) goto v0204;
    v0203 = stack[0];
    v0203 = Levenp(nil, v0203);
    env = stack[-3];
    if (!(v0203 == nil)) goto v0107;
    v0166 = stack[-1];
    v0203 = stack[-2];
    fn = elt(env, 5); /* times!: */
    v0203 = (*qfn2(fn))(qenv(fn), v0166, v0203);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-3];
    fn = elt(env, 6); /* normbf */
    v0203 = (*qfn1(fn))(qenv(fn), v0203);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-3];
    stack[-1] = v0203;
    goto v0107;

v0107:
    v0166 = stack[0];
    v0203 = (Lisp_Object)-15; /* -1 */
    fn = elt(env, 7); /* lshift */
    v0203 = (*qfn2(fn))(qenv(fn), v0166, v0203);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-3];
    stack[0] = v0203;
    v0166 = stack[-2];
    v0203 = stack[-2];
    fn = elt(env, 5); /* times!: */
    v0166 = (*qfn2(fn))(qenv(fn), v0166, v0203);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-3];
    v0203 = qvalue(elt(env, 3)); /* !:bprec!: */
    fn = elt(env, 8); /* cut!:mt */
    v0203 = (*qfn2(fn))(qenv(fn), v0166, v0203);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-3];
    fn = elt(env, 6); /* normbf */
    v0203 = (*qfn1(fn))(qenv(fn), v0203);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-3];
    stack[-2] = v0203;
    goto v0121;

v0204:
    v0166 = stack[-1];
    v0203 = qvalue(elt(env, 3)); /* !:bprec!: */
    fn = elt(env, 8); /* cut!:mt */
    v0203 = (*qfn2(fn))(qenv(fn), v0166, v0203);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-3];
    {
        popv(4);
        fn = elt(env, 6); /* normbf */
        return (*qfn1(fn))(qenv(fn), v0203);
    }
/* error exit handlers */
v0150:
    popv(4);
    return nil;
}



/* Code for lengthreval */

static Lisp_Object CC_lengthreval(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0151, v0180, v0007;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lengthreval");
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
    stack[0] = nil;
    v0151 = stack[-1];
    v0180 = Llength(nil, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0002;
    env = stack[-3];
    v0151 = (Lisp_Object)17; /* 1 */
    if (v0180 == v0151) goto v0006;
    v0007 = elt(env, 1); /* alg */
    v0180 = (Lisp_Object)177; /* 11 */
    v0151 = elt(env, 2); /* "LENGTH called with wrong number of arguments" 
*/
    fn = elt(env, 9); /* rerror */
    v0151 = (*qfnn(fn))(qenv(fn), 3, v0007, v0180, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0002;
    env = stack[-3];
    goto v0006;

v0006:
    v0151 = stack[-1];
    v0151 = qcar(v0151);
    stack[-1] = v0151;
    v0151 = stack[-1];
    if (!(symbolp(v0151))) goto v0176;
    v0151 = stack[-1];
    fn = elt(env, 10); /* arrayp */
    v0151 = (*qfn1(fn))(qenv(fn), v0151);
    nil = C_nil;
    if (exception_pending()) goto v0002;
    env = stack[-3];
    if (v0151 == nil) goto v0176;
    v0007 = elt(env, 3); /* list */
    v0180 = stack[-1];
    v0151 = elt(env, 4); /* dimension */
    v0151 = get(v0180, v0151);
    popv(4);
    return cons(v0007, v0151);

v0176:
    v0151 = stack[-1];
    fn = elt(env, 11); /* aeval */
    v0151 = (*qfn1(fn))(qenv(fn), v0151);
    nil = C_nil;
    if (exception_pending()) goto v0002;
    env = stack[-3];
    stack[-2] = v0151;
    v0151 = stack[-2];
    fn = elt(env, 12); /* getrtype */
    v0151 = (*qfn1(fn))(qenv(fn), v0151);
    nil = C_nil;
    if (exception_pending()) goto v0002;
    env = stack[-3];
    v0007 = v0151;
    if (v0151 == nil) goto v0206;
    v0180 = v0007;
    v0151 = elt(env, 5); /* lengthfn */
    v0151 = get(v0180, v0151);
    env = stack[-3];
    stack[0] = v0151;
    if (v0151 == nil) goto v0206;
    v0180 = stack[0];
    v0151 = stack[-2];
        popv(4);
        return Lapply1(nil, v0180, v0151);

v0206:
    v0151 = stack[-2];
    if (!consp(v0151)) goto v0108;
    v0151 = stack[-2];
    v0151 = qcar(v0151);
    if (symbolp(v0151)) goto v0065;
    v0151 = qvalue(elt(env, 6)); /* t */
    goto v0136;

v0136:
    if (v0151 == nil) goto v0183;
    v0151 = v0007;
    if (v0151 == nil) goto v0010;
    v0151 = elt(env, 7); /* "LENGTH not defined for argument of type" */
    v0180 = v0007;
    v0151 = list2(v0151, v0180);
    nil = C_nil;
    if (exception_pending()) goto v0002;
    env = stack[-3];
    fn = elt(env, 13); /* lprie */
    v0151 = (*qfn1(fn))(qenv(fn), v0151);
    nil = C_nil;
    if (exception_pending()) goto v0002;
    goto v0200;

v0200:
    v0151 = nil;
    { popv(4); return onevalue(v0151); }

v0010:
    v0180 = stack[-1];
    v0151 = elt(env, 8); /* "LENGTH argument" */
    fn = elt(env, 14); /* typerr */
    v0151 = (*qfn2(fn))(qenv(fn), v0180, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0002;
    goto v0200;

v0183:
    v0180 = stack[0];
    v0151 = stack[-2];
    v0151 = qcdr(v0151);
        popv(4);
        return Lapply1(nil, v0180, v0151);

v0065:
    v0151 = stack[-2];
    v0180 = qcar(v0151);
    v0151 = elt(env, 5); /* lengthfn */
    v0151 = get(v0180, v0151);
    env = stack[-3];
    stack[0] = v0151;
    v0151 = (v0151 == nil ? lisp_true : nil);
    goto v0136;

v0108:
    v0151 = (Lisp_Object)17; /* 1 */
    { popv(4); return onevalue(v0151); }
/* error exit handlers */
v0002:
    popv(4);
    return nil;
}



/* Code for makeqn!-maybe */

static Lisp_Object MS_CDECL CC_makeqnKmaybe(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0156, v0059, v0091;
    Lisp_Object v0026, v0039, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "makeqn-maybe");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0039 = va_arg(aa, Lisp_Object);
    v0026 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for makeqn-maybe");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0156 = v0026;
    v0059 = v0039;
    v0091 = v0000;
/* end of prologue */
    if (!(v0156 == nil)) return onevalue(v0059);
    v0156 = elt(env, 1); /* equal */
    return list3(v0156, v0091, v0059);
}



/* Code for createmonomunit */

static Lisp_Object MS_CDECL CC_createmonomunit(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0118, v0121, v0062;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "createmonomunit");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for createmonomunit");
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
    push3(nil, nil, nil);
/* end of prologue */
    v0118 = (Lisp_Object)17; /* 1 */
    v0118 = Lmkvect(nil, v0118);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    env = stack[-3];
    stack[-2] = v0118;
    v0062 = stack[-2];
    v0121 = (Lisp_Object)1; /* 0 */
    v0118 = (Lisp_Object)1; /* 0 */
    *(Lisp_Object *)((char *)v0062 + (CELL-TAG_VECTOR) + ((int32_t)v0121/(16/CELL))) = v0118;
    stack[-1] = stack[-2];
    stack[0] = (Lisp_Object)17; /* 1 */
    v0118 = qvalue(elt(env, 1)); /* nil */
    v0118 = ncons(v0118);
    nil = C_nil;
    if (exception_pending()) goto v0175;
    *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v0118;
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
/* error exit handlers */
v0175:
    popv(4);
    return nil;
}



/* Code for rl_pnf */

static Lisp_Object CC_rl_pnf(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0119;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rl_pnf");
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
    v0119 = v0000;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* rl_pnf!* */
    v0119 = ncons(v0119);
    nil = C_nil;
    if (exception_pending()) goto v0033;
    env = stack[-1];
    {
        Lisp_Object v0116 = stack[0];
        popv(2);
        fn = elt(env, 2); /* apply */
        return (*qfn2(fn))(qenv(fn), v0116, v0119);
    }
/* error exit handlers */
v0033:
    popv(2);
    return nil;
}



/* Code for pickbasicset */

static Lisp_Object CC_pickbasicset(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0111, v0139;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pickbasicset");
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
    stack[-3] = nil;
    v0111 = qvalue(elt(env, 1)); /* wuvarlist!* */
    stack[-1] = v0111;
    goto v0006;

v0006:
    v0111 = stack[-1];
    if (v0111 == nil) goto v0040;
    v0111 = stack[-1];
    v0111 = qcar(v0111);
    stack[0] = v0111;
    goto v0207;

v0207:
    v0111 = stack[-2];
    if (v0111 == nil) goto v0024;
    v0111 = stack[-2];
    v0111 = qcar(v0111);
    v0111 = qcar(v0111);
    v0111 = qcar(v0111);
    v0139 = qcar(v0111);
    v0111 = stack[0];
    fn = elt(env, 3); /* symbollessp */
    v0111 = (*qfn2(fn))(qenv(fn), v0139, v0111);
    nil = C_nil;
    if (exception_pending()) goto v0010;
    env = stack[-4];
    if (v0111 == nil) goto v0024;
    v0111 = stack[-2];
    v0111 = qcdr(v0111);
    stack[-2] = v0111;
    goto v0207;

v0024:
    v0111 = stack[-2];
    if (v0111 == nil) goto v0087;
    v0139 = stack[0];
    v0111 = stack[-2];
    v0111 = qcar(v0111);
    v0111 = qcar(v0111);
    v0111 = qcar(v0111);
    v0111 = qcar(v0111);
    if (equal(v0139, v0111)) goto v0064;
    v0111 = qvalue(elt(env, 2)); /* nil */
    goto v0172;

v0172:
    if (v0111 == nil) goto v0087;
    v0111 = stack[-2];
    v0111 = qcdr(v0111);
    stack[-2] = v0111;
    goto v0024;

v0087:
    v0111 = stack[-2];
    if (v0111 == nil) goto v0166;
    v0139 = stack[0];
    v0111 = stack[-2];
    v0111 = qcar(v0111);
    v0111 = qcar(v0111);
    v0111 = qcar(v0111);
    v0111 = qcar(v0111);
    if (!(equal(v0139, v0111))) goto v0166;
    v0111 = stack[-2];
    v0139 = qcar(v0111);
    v0111 = stack[-3];
    v0111 = cons(v0139, v0111);
    nil = C_nil;
    if (exception_pending()) goto v0010;
    env = stack[-4];
    stack[-3] = v0111;
    v0111 = stack[-2];
    v0111 = qcdr(v0111);
    stack[-2] = v0111;
    goto v0166;

v0166:
    v0111 = stack[-1];
    v0111 = qcdr(v0111);
    stack[-1] = v0111;
    goto v0006;

v0064:
    v0111 = stack[-2];
    v0139 = qcar(v0111);
    v0111 = stack[-3];
    fn = elt(env, 4); /* wureducedpolysp */
    v0111 = (*qfn2(fn))(qenv(fn), v0139, v0111);
    nil = C_nil;
    if (exception_pending()) goto v0010;
    env = stack[-4];
    v0111 = (v0111 == nil ? lisp_true : nil);
    goto v0172;

v0040:
    v0111 = stack[-3];
        popv(5);
        return Lnreverse(nil, v0111);
/* error exit handlers */
v0010:
    popv(5);
    return nil;
}



/* Code for mk!+mat!+plus!+mat */

static Lisp_Object CC_mkLmatLplusLmat(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0238, v0239, v0240;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mk+mat+plus+mat");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push5(nil, nil, nil, nil, nil);
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-10] = v0039;
    stack[-11] = v0000;
/* end of prologue */
    v0238 = stack[-11];
    fn = elt(env, 6); /* matrix!+p */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    if (!(v0238 == nil)) goto v0105;
    v0238 = elt(env, 1); /* "no matrix in add" */
    fn = elt(env, 7); /* rederr */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    goto v0105;

v0105:
    v0238 = stack[-10];
    fn = elt(env, 6); /* matrix!+p */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    if (!(v0238 == nil)) goto v0142;
    v0238 = elt(env, 1); /* "no matrix in add" */
    fn = elt(env, 7); /* rederr */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    goto v0142;

v0142:
    v0238 = stack[-11];
    fn = elt(env, 8); /* get!+col!+nr */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    stack[-12] = v0238;
    v0238 = stack[-11];
    fn = elt(env, 9); /* get!+row!+nr */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    stack[-9] = v0238;
    stack[0] = stack[-12];
    v0238 = stack[-10];
    fn = elt(env, 8); /* get!+col!+nr */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    if (equal(stack[0], v0238)) goto v0051;
    v0238 = elt(env, 2); /* "wrong dimensions in add" */
    fn = elt(env, 7); /* rederr */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    goto v0051;

v0051:
    stack[0] = stack[-9];
    v0238 = stack[-10];
    fn = elt(env, 9); /* get!+row!+nr */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    if (equal(stack[0], v0238)) goto v0024;
    v0238 = elt(env, 2); /* "wrong dimensions in add" */
    fn = elt(env, 7); /* rederr */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    goto v0024;

v0024:
    v0238 = (Lisp_Object)17; /* 1 */
    stack[-8] = v0238;
    v0239 = stack[-9];
    v0238 = stack[-8];
    v0238 = difference2(v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0238 = Lminusp(nil, v0238);
    env = stack[-13];
    if (v0238 == nil) goto v0174;
    v0238 = qvalue(elt(env, 3)); /* nil */
    { popv(14); return onevalue(v0238); }

v0174:
    v0238 = (Lisp_Object)17; /* 1 */
    stack[-4] = v0238;
    v0239 = stack[-12];
    v0238 = stack[-4];
    v0238 = difference2(v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0238 = Lminusp(nil, v0238);
    env = stack[-13];
    if (v0238 == nil) goto v0013;
    v0238 = qvalue(elt(env, 3)); /* nil */
    goto v0203;

v0203:
    v0238 = ncons(v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    stack[-6] = v0238;
    stack[-7] = v0238;
    goto v0095;

v0095:
    v0238 = stack[-8];
    v0238 = add1(v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    stack[-8] = v0238;
    v0239 = stack[-9];
    v0238 = stack[-8];
    v0238 = difference2(v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0238 = Lminusp(nil, v0238);
    env = stack[-13];
    if (!(v0238 == nil)) { Lisp_Object res = stack[-7]; popv(14); return onevalue(res); }
    stack[-5] = stack[-6];
    v0238 = (Lisp_Object)17; /* 1 */
    stack[-4] = v0238;
    v0239 = stack[-12];
    v0238 = stack[-4];
    v0238 = difference2(v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0238 = Lminusp(nil, v0238);
    env = stack[-13];
    if (v0238 == nil) goto v0124;
    v0238 = qvalue(elt(env, 3)); /* nil */
    goto v0073;

v0073:
    v0238 = ncons(v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0238 = Lrplacd(nil, stack[-5], v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0238 = stack[-6];
    v0238 = qcdr(v0238);
    stack[-6] = v0238;
    goto v0095;

v0124:
    v0240 = stack[-11];
    v0239 = stack[-8];
    v0238 = stack[-4];
    fn = elt(env, 10); /* get!+mat!+entry */
    stack[0] = (*qfnn(fn))(qenv(fn), 3, v0240, v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0240 = stack[-10];
    v0239 = stack[-8];
    v0238 = stack[-4];
    fn = elt(env, 10); /* get!+mat!+entry */
    v0238 = (*qfnn(fn))(qenv(fn), 3, v0240, v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    fn = elt(env, 11); /* addsq */
    v0238 = (*qfn2(fn))(qenv(fn), stack[0], v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0239 = v0238;
    v0238 = qvalue(elt(env, 4)); /* t */
    stack[0] = qvalue(elt(env, 5)); /* !*sub2 */
    qvalue(elt(env, 5)) = v0238; /* !*sub2 */
    v0238 = v0239;
    fn = elt(env, 12); /* subs2 */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0242;
    env = stack[-13];
    v0239 = v0238;
    qvalue(elt(env, 5)) = stack[0]; /* !*sub2 */
    v0238 = v0239;
    v0238 = ncons(v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    stack[-2] = v0238;
    stack[-3] = v0238;
    goto v0243;

v0243:
    v0238 = stack[-4];
    v0238 = add1(v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    stack[-4] = v0238;
    v0239 = stack[-12];
    v0238 = stack[-4];
    v0238 = difference2(v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0238 = Lminusp(nil, v0238);
    env = stack[-13];
    if (v0238 == nil) goto v0244;
    v0238 = stack[-3];
    goto v0073;

v0244:
    stack[-1] = stack[-2];
    v0240 = stack[-11];
    v0239 = stack[-8];
    v0238 = stack[-4];
    fn = elt(env, 10); /* get!+mat!+entry */
    stack[0] = (*qfnn(fn))(qenv(fn), 3, v0240, v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0240 = stack[-10];
    v0239 = stack[-8];
    v0238 = stack[-4];
    fn = elt(env, 10); /* get!+mat!+entry */
    v0238 = (*qfnn(fn))(qenv(fn), 3, v0240, v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    fn = elt(env, 11); /* addsq */
    v0238 = (*qfn2(fn))(qenv(fn), stack[0], v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0239 = v0238;
    v0238 = qvalue(elt(env, 4)); /* t */
    stack[0] = qvalue(elt(env, 5)); /* !*sub2 */
    qvalue(elt(env, 5)) = v0238; /* !*sub2 */
    v0238 = v0239;
    fn = elt(env, 12); /* subs2 */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0245;
    env = stack[-13];
    v0239 = v0238;
    qvalue(elt(env, 5)) = stack[0]; /* !*sub2 */
    v0238 = v0239;
    v0238 = ncons(v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0238 = Lrplacd(nil, stack[-1], v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0238 = stack[-2];
    v0238 = qcdr(v0238);
    stack[-2] = v0238;
    goto v0243;

v0013:
    v0240 = stack[-11];
    v0239 = stack[-8];
    v0238 = stack[-4];
    fn = elt(env, 10); /* get!+mat!+entry */
    stack[0] = (*qfnn(fn))(qenv(fn), 3, v0240, v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0240 = stack[-10];
    v0239 = stack[-8];
    v0238 = stack[-4];
    fn = elt(env, 10); /* get!+mat!+entry */
    v0238 = (*qfnn(fn))(qenv(fn), 3, v0240, v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    fn = elt(env, 11); /* addsq */
    v0238 = (*qfn2(fn))(qenv(fn), stack[0], v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0239 = v0238;
    v0238 = qvalue(elt(env, 4)); /* t */
    stack[0] = qvalue(elt(env, 5)); /* !*sub2 */
    qvalue(elt(env, 5)) = v0238; /* !*sub2 */
    v0238 = v0239;
    fn = elt(env, 12); /* subs2 */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0246;
    env = stack[-13];
    v0239 = v0238;
    qvalue(elt(env, 5)) = stack[0]; /* !*sub2 */
    v0238 = v0239;
    v0238 = ncons(v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    stack[-2] = v0238;
    stack[-3] = v0238;
    goto v0166;

v0166:
    v0238 = stack[-4];
    v0238 = add1(v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    stack[-4] = v0238;
    v0239 = stack[-12];
    v0238 = stack[-4];
    v0238 = difference2(v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0238 = Lminusp(nil, v0238);
    env = stack[-13];
    if (v0238 == nil) goto v0179;
    v0238 = stack[-3];
    goto v0203;

v0179:
    stack[-1] = stack[-2];
    v0240 = stack[-11];
    v0239 = stack[-8];
    v0238 = stack[-4];
    fn = elt(env, 10); /* get!+mat!+entry */
    stack[0] = (*qfnn(fn))(qenv(fn), 3, v0240, v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0240 = stack[-10];
    v0239 = stack[-8];
    v0238 = stack[-4];
    fn = elt(env, 10); /* get!+mat!+entry */
    v0238 = (*qfnn(fn))(qenv(fn), 3, v0240, v0239, v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    fn = elt(env, 11); /* addsq */
    v0238 = (*qfn2(fn))(qenv(fn), stack[0], v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0239 = v0238;
    v0238 = qvalue(elt(env, 4)); /* t */
    stack[0] = qvalue(elt(env, 5)); /* !*sub2 */
    qvalue(elt(env, 5)) = v0238; /* !*sub2 */
    v0238 = v0239;
    fn = elt(env, 12); /* subs2 */
    v0238 = (*qfn1(fn))(qenv(fn), v0238);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-13];
    v0239 = v0238;
    qvalue(elt(env, 5)) = stack[0]; /* !*sub2 */
    v0238 = v0239;
    v0238 = ncons(v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0238 = Lrplacd(nil, stack[-1], v0238);
    nil = C_nil;
    if (exception_pending()) goto v0241;
    env = stack[-13];
    v0238 = stack[-2];
    v0238 = qcdr(v0238);
    stack[-2] = v0238;
    goto v0166;
/* error exit handlers */
v0247:
    env = stack[-13];
    qvalue(elt(env, 5)) = stack[0]; /* !*sub2 */
    popv(14);
    return nil;
v0246:
    env = stack[-13];
    qvalue(elt(env, 5)) = stack[0]; /* !*sub2 */
    popv(14);
    return nil;
v0245:
    env = stack[-13];
    qvalue(elt(env, 5)) = stack[0]; /* !*sub2 */
    popv(14);
    return nil;
v0242:
    env = stack[-13];
    qvalue(elt(env, 5)) = stack[0]; /* !*sub2 */
    popv(14);
    return nil;
v0241:
    popv(14);
    return nil;
}



/* Code for pasf_premf */

static Lisp_Object CC_pasf_premf(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0054, v0100;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pasf_premf");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0039;
    v0054 = v0000;
/* end of prologue */
    v0100 = v0054;
    v0054 = stack[0];
    fn = elt(env, 1); /* remf */
    v0100 = (*qfn2(fn))(qenv(fn), v0100, v0054);
    nil = C_nil;
    if (exception_pending()) goto v0207;
    env = stack[-1];
    v0054 = stack[0];
    {
        popv(2);
        fn = elt(env, 2); /* pasf_premf1 */
        return (*qfn2(fn))(qenv(fn), v0100, v0054);
    }
/* error exit handlers */
v0207:
    popv(2);
    return nil;
}



/* Code for vdp_make */

static Lisp_Object MS_CDECL CC_vdp_make(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0091, v0117, v0055;
    Lisp_Object v0026, v0039, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "vdp_make");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0039 = va_arg(aa, Lisp_Object);
    v0026 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for vdp_make");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0026,v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0039,v0026);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    v0091 = v0026;
    v0117 = v0039;
    v0055 = v0000;
/* end of prologue */
    stack[-2] = elt(env, 1); /* vdp */
    stack[-1] = v0117;
    stack[0] = v0055;
    v0117 = v0091;
    v0091 = qvalue(elt(env, 2)); /* nil */
    v0091 = list2(v0117, v0091);
    nil = C_nil;
    if (exception_pending()) goto v0143;
    {
        Lisp_Object v0191 = stack[-2];
        Lisp_Object v0176 = stack[-1];
        Lisp_Object v0175 = stack[0];
        popv(3);
        return list3star(v0191, v0176, v0175, v0091);
    }
/* error exit handlers */
v0143:
    popv(3);
    return nil;
}



/* Code for matrixelems */

static Lisp_Object CC_matrixelems(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0118, v0121;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for matrixelems");
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
    v0121 = nil;
    goto v0016;

v0016:
    v0118 = stack[0];
    if (v0118 == nil) goto v0059;
    v0118 = stack[0];
    v0118 = qcar(v0118);
    v0118 = qcdr(v0118);
    v0118 = qcdr(v0118);
    v0118 = cons(v0118, v0121);
    nil = C_nil;
    if (exception_pending()) goto v0143;
    env = stack[-1];
    v0121 = v0118;
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    stack[0] = v0118;
    goto v0016;

v0059:
    v0118 = v0121;
    {
        popv(2);
        fn = elt(env, 1); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0118);
    }
/* error exit handlers */
v0143:
    popv(2);
    return nil;
}



/* Code for transmat1 */

static Lisp_Object CC_transmat1(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0158, v0080, v0071, v0043;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for transmat1");
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
    stack[-6] = v0000;
/* end of prologue */
    v0158 = stack[-6];
    v0158 = qcar(v0158);
    fn = elt(env, 6); /* aeval */
    v0158 = (*qfn1(fn))(qenv(fn), v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    v0158 = qcdr(v0158);
    stack[0] = v0158;
    v0158 = (Lisp_Object)1; /* 0 */
    stack[-5] = v0158;
    v0158 = (Lisp_Object)1; /* 0 */
    stack[-4] = v0158;
    v0158 = stack[-6];
    v0158 = qcar(v0158);
    fn = elt(env, 6); /* aeval */
    v0158 = (*qfn1(fn))(qenv(fn), v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    fn = elt(env, 7); /* matlength */
    v0158 = (*qfn1(fn))(qenv(fn), v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    v0158 = qcdr(v0158);
    v0080 = v0158;
    stack[-1] = qcar(v0080);
    v0080 = elt(env, 1); /* spm */
    v0158 = cons(v0080, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    fn = elt(env, 8); /* mkempspmat */
    v0158 = (*qfn2(fn))(qenv(fn), stack[-1], v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    stack[-7] = v0158;
    v0158 = qvalue(elt(env, 2)); /* nil */
    v0158 = ncons(v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    v0158 = ncons(v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    stack[-2] = v0158;
    v0158 = stack[0];
    stack[-1] = v0158;
    goto v0087;

v0087:
    v0158 = stack[-1];
    if (v0158 == nil) goto v0001;
    v0158 = stack[-1];
    v0158 = qcar(v0158);
    stack[0] = v0158;
    v0158 = stack[-5];
    v0158 = add1(v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    stack[-5] = v0158;
    v0158 = stack[0];
    stack[0] = v0158;
    goto v0250;

v0250:
    v0158 = stack[0];
    if (v0158 == nil) goto v0206;
    v0158 = stack[0];
    v0158 = qcar(v0158);
    stack[-3] = v0158;
    v0158 = stack[-4];
    v0158 = add1(v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    stack[-4] = v0158;
    v0080 = stack[-3];
    v0158 = (Lisp_Object)1; /* 0 */
    if (v0080 == v0158) goto v0209;
    v0071 = stack[-4];
    v0080 = stack[-3];
    v0158 = stack[-2];
    v0158 = acons(v0071, v0080, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    stack[-2] = v0158;
    goto v0209;

v0209:
    v0158 = stack[0];
    v0158 = qcdr(v0158);
    stack[0] = v0158;
    goto v0250;

v0206:
    v0158 = stack[-2];
    v0158 = Lreverse(nil, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    stack[-2] = v0158;
    stack[0] = stack[-2];
    v0158 = qvalue(elt(env, 2)); /* nil */
    v0158 = ncons(v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    v0158 = ncons(v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    if (equal(stack[0], v0158)) goto v0251;
    v0080 = stack[-7];
    v0158 = stack[-5];
    v0043 = list2(v0080, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    v0071 = stack[-2];
    v0080 = stack[-7];
    v0158 = qvalue(elt(env, 2)); /* nil */
    fn = elt(env, 9); /* letmtr3 */
    v0158 = (*qfnn(fn))(qenv(fn), 4, v0043, v0071, v0080, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    goto v0251;

v0251:
    v0158 = (Lisp_Object)1; /* 0 */
    stack[-4] = v0158;
    v0158 = qvalue(elt(env, 2)); /* nil */
    v0158 = ncons(v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    v0158 = ncons(v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    stack[-2] = v0158;
    v0158 = stack[-1];
    v0158 = qcdr(v0158);
    stack[-1] = v0158;
    goto v0087;

v0001:
    v0158 = stack[-6];
    stack[-1] = qcar(v0158);
    stack[0] = elt(env, 3); /* avalue */
    v0080 = elt(env, 4); /* sparse */
    v0158 = stack[-7];
    v0158 = list2(v0080, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    v0158 = Lputprop(nil, 3, stack[-1], stack[0], v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    env = stack[-8];
    v0158 = stack[-6];
    v0071 = qcar(v0158);
    v0080 = elt(env, 5); /* rtype */
    v0158 = elt(env, 4); /* sparse */
    v0158 = Lputprop(nil, 3, v0071, v0080, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0249;
    v0158 = nil;
    { popv(9); return onevalue(v0158); }
/* error exit handlers */
v0249:
    popv(9);
    return nil;
}



/* Code for dipcontevmin */

static Lisp_Object CC_dipcontevmin(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0036, v0035, v0169;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dipcontevmin");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0039;
    stack[-1] = v0000;
/* end of prologue */
    v0169 = nil;
    goto v0006;

v0006:
    v0036 = stack[-1];
    if (v0036 == nil) goto v0052;
    v0036 = stack[0];
    if (v0036 == nil) goto v0052;
    v0036 = stack[-1];
    v0035 = qcar(v0036);
    v0036 = stack[0];
    v0036 = qcar(v0036);
    if (((int32_t)(v0035)) < ((int32_t)(v0036))) goto v0117;
    v0036 = stack[0];
    v0036 = qcar(v0036);
    goto v0207;

v0207:
    v0035 = v0169;
    v0036 = cons(v0036, v0035);
    nil = C_nil;
    if (exception_pending()) goto v0208;
    env = stack[-2];
    v0169 = v0036;
    v0036 = stack[-1];
    v0036 = qcdr(v0036);
    stack[-1] = v0036;
    v0036 = stack[0];
    v0036 = qcdr(v0036);
    stack[0] = v0036;
    goto v0006;

v0117:
    v0036 = stack[-1];
    v0036 = qcar(v0036);
    goto v0207;

v0052:
    v0036 = v0169;
    if (v0036 == nil) goto v0051;
    v0035 = (Lisp_Object)1; /* 0 */
    v0036 = v0169;
    v0036 = qcar(v0036);
    if (!(v0035 == v0036)) goto v0051;
    v0036 = v0169;
    v0036 = qcdr(v0036);
    v0169 = v0036;
    goto v0052;

v0051:
    v0036 = v0169;
        popv(3);
        return Lnreverse(nil, v0036);
/* error exit handlers */
v0208:
    popv(3);
    return nil;
}



/* Code for f2dip1 */

static Lisp_Object MS_CDECL CC_f2dip1(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0088, v0017, v0018, v0186, v0065;
    Lisp_Object fn;
    Lisp_Object v0026, v0039, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "f2dip1");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0039 = va_arg(aa, Lisp_Object);
    v0026 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for f2dip1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0026,v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0039,v0026);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0026;
    stack[-1] = v0039;
    stack[-2] = v0000;
/* end of prologue */
    v0088 = stack[-2];
    if (v0088 == nil) goto v0015;
    v0088 = stack[-2];
    if (!consp(v0088)) goto v0116;
    v0088 = stack[-2];
    v0088 = qcar(v0088);
    v0088 = (consp(v0088) ? nil : lisp_true);
    goto v0033;

v0033:
    if (v0088 == nil) goto v0202;
    v0088 = stack[0];
    v0088 = (is_number(v0088) ? lisp_true : nil);
    if (!(v0088 == nil)) goto v0189;
    v0088 = stack[0];
    fn = elt(env, 3); /* f2dip11 */
    v0088 = (*qfn1(fn))(qenv(fn), v0088);
    nil = C_nil;
    if (exception_pending()) goto v0167;
    env = stack[-4];
    goto v0189;

v0189:
    v0088 = stack[-2];
    fn = elt(env, 4); /* bcfd */
    v0088 = (*qfn1(fn))(qenv(fn), v0088);
    nil = C_nil;
    if (exception_pending()) goto v0167;
    env = stack[-4];
    fn = elt(env, 5); /* bcprod */
    v0088 = (*qfn2(fn))(qenv(fn), stack[0], v0088);
    nil = C_nil;
    if (exception_pending()) goto v0167;
    env = stack[-4];
    v0017 = qvalue(elt(env, 1)); /* nil */
    {
        Lisp_Object v0048 = stack[-1];
        popv(5);
        return list2star(v0048, v0088, v0017);
    }

v0202:
    v0088 = stack[-2];
    v0088 = qcar(v0088);
    v0088 = qcar(v0088);
    v0065 = qcar(v0088);
    v0088 = stack[-2];
    v0088 = qcar(v0088);
    v0088 = qcar(v0088);
    v0186 = qcdr(v0088);
    v0088 = stack[-2];
    v0088 = qcar(v0088);
    v0018 = qcdr(v0088);
    v0017 = stack[-1];
    v0088 = stack[0];
    fn = elt(env, 6); /* f2dip2 */
    stack[-3] = (*qfnn(fn))(qenv(fn), 5, v0065, v0186, v0018, v0017, v0088);
    nil = C_nil;
    if (exception_pending()) goto v0167;
    env = stack[-4];
    v0088 = stack[-2];
    v0018 = qcdr(v0088);
    v0017 = stack[-1];
    v0088 = stack[0];
    v0088 = CC_f2dip1(env, 3, v0018, v0017, v0088);
    nil = C_nil;
    if (exception_pending()) goto v0167;
    env = stack[-4];
    {
        Lisp_Object v0047 = stack[-3];
        popv(5);
        fn = elt(env, 7); /* dipsum */
        return (*qfn2(fn))(qenv(fn), v0047, v0088);
    }

v0116:
    v0088 = qvalue(elt(env, 2)); /* t */
    goto v0033;

v0015:
    v0088 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0088); }
/* error exit handlers */
v0167:
    popv(5);
    return nil;
}



/* Code for contposp */

static Lisp_Object CC_contposp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0031, v0156;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for contposp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0031 = v0000;
/* end of prologue */

v0197:
    v0156 = v0031;
    if (v0156 == nil) goto v0009;
    v0156 = v0031;
    v0156 = qcar(v0156);
    if (!consp(v0156)) goto v0105;
    v0031 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0031);

v0105:
    v0031 = qcdr(v0031);
    goto v0197;

v0009:
    v0031 = qvalue(elt(env, 1)); /* t */
    return onevalue(v0031);
}



/* Code for toolongassignp */

static Lisp_Object CC_toolongassignp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0040;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for toolongassignp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0040 = v0000;
/* end of prologue */
    v0040 = qcdr(v0040);
    v0040 = qcdr(v0040);
    v0040 = qcar(v0040);
    {
        fn = elt(env, 1); /* toolongexpp */
        return (*qfn1(fn))(qenv(fn), v0040);
    }
}



/* Code for indxsymp */

static Lisp_Object CC_indxsymp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0099, v0195;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for indxsymp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0039;
    stack[-1] = v0000;
/* end of prologue */

v0197:
    v0099 = stack[0];
    if (v0099 == nil) goto v0016;
    v0099 = stack[0];
    v0195 = qcar(v0099);
    v0099 = stack[-1];
    v0099 = Lapply1(nil, v0195, v0099);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-2];
    if (v0099 == nil) goto v0033;
    v0195 = stack[-1];
    v0099 = stack[0];
    v0099 = qcdr(v0099);
    stack[-1] = v0195;
    stack[0] = v0099;
    goto v0197;

v0033:
    v0099 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v0099); }

v0016:
    v0099 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v0099); }
/* error exit handlers */
v0022:
    popv(3);
    return nil;
}



/* Code for getphystypeexpt */

static Lisp_Object CC_getphystypeexpt(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0118, v0121;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for getphystypeexpt");
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
    v0118 = stack[0];
    fn = elt(env, 3); /* getphystypecar */
    v0118 = (*qfn1(fn))(qenv(fn), v0118);
    nil = C_nil;
    if (exception_pending()) goto v0143;
    env = stack[-1];
    v0121 = v0118;
    v0118 = v0121;
    if (v0118 == nil) goto v0005;
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    v0118 = qcar(v0118);
    if (!(is_number(v0118))) { popv(2); return onevalue(v0121); }
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    v0118 = qcar(v0118);
    v0118 = Levenp(nil, v0118);
    env = stack[-1];
    if (v0118 == nil) { popv(2); return onevalue(v0121); }
    v0118 = elt(env, 2); /* scalar */
    { popv(2); return onevalue(v0118); }

v0005:
    v0118 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0118); }
/* error exit handlers */
v0143:
    popv(2);
    return nil;
}



/* Code for calc_coeffmap_ */

static Lisp_Object MS_CDECL CC_calc_coeffmap_(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0087, v0024, v0025;
    Lisp_Object fn;
    Lisp_Object v0026, v0039, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "calc_coeffmap_");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0039 = va_arg(aa, Lisp_Object);
    v0026 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for calc_coeffmap_");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0026,v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0039,v0026);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0026;
    stack[-2] = v0039;
    v0087 = v0000;
/* end of prologue */
    v0024 = v0087;
    v0087 = stack[-1];
    fn = elt(env, 2); /* calc_map_ */
    v0087 = (*qfn2(fn))(qenv(fn), v0024, v0087);
    nil = C_nil;
    if (exception_pending()) goto v0145;
    env = stack[-4];
    v0025 = v0087;
    v0024 = v0025;
    v0087 = (Lisp_Object)1; /* 0 */
    if (v0024 == v0087) goto v0060;
    stack[-3] = elt(env, 1); /* times */
    stack[0] = v0025;
    v0024 = stack[-2];
    v0087 = stack[-1];
    fn = elt(env, 3); /* calc_coeff */
    v0087 = (*qfn2(fn))(qenv(fn), v0024, v0087);
    nil = C_nil;
    if (exception_pending()) goto v0145;
    {
        Lisp_Object v0107 = stack[-3];
        Lisp_Object v0034 = stack[0];
        popv(5);
        return list2star(v0107, v0034, v0087);
    }

v0060:
    v0087 = (Lisp_Object)1; /* 0 */
    { popv(5); return onevalue(v0087); }
/* error exit handlers */
v0145:
    popv(5);
    return nil;
}



/* Code for squashsqrt */

static Lisp_Object CC_squashsqrt(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0153, v0078, v0076;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for squashsqrt");
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

v0197:
    v0153 = qvalue(elt(env, 1)); /* sqrtflag */
    if (v0153 == nil) goto v0006;
    v0153 = stack[-1];
    if (!consp(v0153)) goto v0198;
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0153 = (consp(v0153) ? nil : lisp_true);
    goto v0040;

v0040:
    if (!(v0153 == nil)) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0078 = qcar(v0153);
    v0153 = elt(env, 3); /* sqrt */
    if (v0078 == v0153) goto v0024;
    v0153 = qvalue(elt(env, 4)); /* nil */
    goto v0143;

v0143:
    if (v0153 == nil) goto v0094;
    v0153 = stack[-1];
    v0153 = qcdr(v0153);
    stack[0] = CC_squashsqrt(env, v0153);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-3];
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0076 = qcar(v0153);
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0078 = qcdr(v0153);
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0153 = qcdr(v0153);
    fn = elt(env, 6); /* !*multfsqrt */
    v0153 = (*qfnn(fn))(qenv(fn), 3, v0076, v0078, v0153);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-3];
    {
        Lisp_Object v0128 = stack[0];
        popv(4);
        fn = elt(env, 7); /* addf */
        return (*qfn2(fn))(qenv(fn), v0128, v0153);
    }

v0094:
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0078 = qcar(v0153);
    v0153 = elt(env, 5); /* expt */
    if (v0078 == v0153) goto v0050;
    v0153 = qvalue(elt(env, 4)); /* nil */
    goto v0150;

v0150:
    if (v0153 == nil) goto v0254;
    v0153 = stack[-1];
    v0153 = qcdr(v0153);
    stack[0] = CC_squashsqrt(env, v0153);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-3];
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0076 = qcar(v0153);
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0078 = qcdr(v0153);
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0153 = qcdr(v0153);
    fn = elt(env, 8); /* !*multfexpt */
    v0153 = (*qfnn(fn))(qenv(fn), 3, v0076, v0078, v0153);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-3];
    {
        Lisp_Object v0127 = stack[0];
        popv(4);
        fn = elt(env, 7); /* addf */
        return (*qfn2(fn))(qenv(fn), v0127, v0153);
    }

v0254:
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0153 = qcdr(v0153);
    v0153 = CC_squashsqrt(env, v0153);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-3];
    v0078 = v0153;
    v0153 = v0078;
    if (v0153 == nil) goto v0071;
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    stack[-2] = qcar(v0153);
    stack[0] = v0078;
    v0153 = stack[-1];
    v0153 = qcdr(v0153);
    v0153 = CC_squashsqrt(env, v0153);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    {
        Lisp_Object v0255 = stack[-2];
        Lisp_Object v0256 = stack[0];
        popv(4);
        return acons(v0255, v0256, v0153);
    }

v0071:
    v0153 = stack[-1];
    v0153 = qcdr(v0153);
    stack[-1] = v0153;
    goto v0197;

v0050:
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0153 = qcdr(v0153);
    v0153 = qcdr(v0153);
    v0153 = qcar(v0153);
    fn = elt(env, 9); /* prefix!-rational!-numberp */
    v0153 = (*qfn1(fn))(qenv(fn), v0153);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-3];
    if (v0153 == nil) goto v0251;
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0078 = qcdr(v0153);
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0153 = qcdr(v0153);
    v0153 = qcdr(v0153);
    v0153 = qcar(v0153);
    v0153 = qcdr(v0153);
    v0153 = qcdr(v0153);
    v0153 = qcar(v0153);
    v0153 = (Lisp_Object)geq2(v0078, v0153);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    v0153 = v0153 ? lisp_true : nil;
    env = stack[-3];
    goto v0150;

v0251:
    v0153 = qvalue(elt(env, 4)); /* nil */
    goto v0150;

v0024:
    v0153 = stack[-1];
    v0153 = qcar(v0153);
    v0153 = qcar(v0153);
    v0078 = qcdr(v0153);
    v0153 = (Lisp_Object)17; /* 1 */
    v0153 = (Lisp_Object)greaterp2(v0078, v0153);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    v0153 = v0153 ? lisp_true : nil;
    env = stack[-3];
    goto v0143;

v0198:
    v0153 = qvalue(elt(env, 2)); /* t */
    goto v0040;

v0006:
    v0153 = qvalue(elt(env, 2)); /* t */
    goto v0040;
/* error exit handlers */
v0114:
    popv(4);
    return nil;
}



/* Code for sfto_subfwd */

static Lisp_Object CC_sfto_subfwd(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0018, v0186;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for sfto_subfwd");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0039;
    stack[-2] = v0000;
/* end of prologue */
    v0018 = stack[-2];
    if (!consp(v0018)) goto v0116;
    v0018 = stack[-2];
    v0018 = qcar(v0018);
    v0018 = (consp(v0018) ? nil : lisp_true);
    goto v0033;

v0033:
    if (!(v0018 == nil)) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v0018 = stack[-2];
    v0018 = qcar(v0018);
    v0018 = qcar(v0018);
    v0186 = qcar(v0018);
    v0018 = stack[-1];
    v0018 = Latsoc(nil, v0186, v0018);
    v0186 = v0018;
    if (v0186 == nil) goto v0145;
    v0186 = stack[-2];
    v0186 = qcar(v0186);
    v0186 = qcar(v0186);
    v0186 = qcdr(v0186);
    v0018 = qcdr(v0018);
    v0018 = quot2(v0186, v0018);
    nil = C_nil;
    if (exception_pending()) goto v0090;
    env = stack[-4];
    goto v0174;

v0174:
    v0186 = stack[-2];
    v0186 = qcar(v0186);
    v0186 = qcar(v0186);
    v0186 = qcar(v0186);
    fn = elt(env, 2); /* to */
    stack[-3] = (*qfn2(fn))(qenv(fn), v0186, v0018);
    nil = C_nil;
    if (exception_pending()) goto v0090;
    env = stack[-4];
    v0018 = stack[-2];
    v0018 = qcar(v0018);
    v0186 = qcdr(v0018);
    v0018 = stack[-1];
    stack[0] = CC_sfto_subfwd(env, v0186, v0018);
    nil = C_nil;
    if (exception_pending()) goto v0090;
    env = stack[-4];
    v0018 = stack[-2];
    v0186 = qcdr(v0018);
    v0018 = stack[-1];
    v0018 = CC_sfto_subfwd(env, v0186, v0018);
    nil = C_nil;
    if (exception_pending()) goto v0090;
    {
        Lisp_Object v0167 = stack[-3];
        Lisp_Object v0048 = stack[0];
        popv(5);
        return acons(v0167, v0048, v0018);
    }

v0145:
    v0018 = stack[-2];
    v0018 = qcar(v0018);
    v0018 = qcar(v0018);
    v0018 = qcdr(v0018);
    goto v0174;

v0116:
    v0018 = qvalue(elt(env, 1)); /* t */
    goto v0033;
/* error exit handlers */
v0090:
    popv(5);
    return nil;
}



/* Code for fnom */

static Lisp_Object CC_fnom(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0190;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fnom");
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
    v0190 = elt(env, 1); /* "<OMA>" */
    fn = elt(env, 13); /* printout */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = qvalue(elt(env, 2)); /* t */
    fn = elt(env, 14); /* indent!* */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = elt(env, 3); /* "<OMATTR>" */
    fn = elt(env, 13); /* printout */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = qvalue(elt(env, 2)); /* t */
    fn = elt(env, 14); /* indent!* */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = elt(env, 4); /* "<OMATP>" */
    fn = elt(env, 13); /* printout */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = qvalue(elt(env, 2)); /* t */
    fn = elt(env, 14); /* indent!* */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = elt(env, 5); /* "<OMS cd=""typmml"" name=""type""/>" */
    fn = elt(env, 13); /* printout */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = elt(env, 6); /* "<OMS cd=""typmml"" name=""" */
    fn = elt(env, 13); /* printout */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = elt(env, 7); /* "fn_type" */
    v0190 = Lprinc(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = elt(env, 8); /* """/>" */
    v0190 = Lprinc(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = qvalue(elt(env, 9)); /* nil */
    fn = elt(env, 14); /* indent!* */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = elt(env, 10); /* "</OMATP>" */
    fn = elt(env, 13); /* printout */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = stack[0];
    v0190 = qcar(v0190);
    fn = elt(env, 15); /* objectom */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = qvalue(elt(env, 9)); /* nil */
    fn = elt(env, 14); /* indent!* */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = elt(env, 11); /* "</OMATTR>" */
    fn = elt(env, 13); /* printout */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = stack[0];
    v0190 = qcdr(v0190);
    v0190 = qcdr(v0190);
    fn = elt(env, 16); /* multiom */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = qvalue(elt(env, 9)); /* nil */
    fn = elt(env, 14); /* indent!* */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    env = stack[-1];
    v0190 = elt(env, 12); /* "</OMA>" */
    fn = elt(env, 13); /* printout */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0087;
    v0190 = nil;
    { popv(2); return onevalue(v0190); }
/* error exit handlers */
v0087:
    popv(2);
    return nil;
}



/* Code for a2bc */

static Lisp_Object CC_a2bc(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0021, v0022;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for a2bc");
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
    v0021 = v0000;
/* end of prologue */
    v0022 = qvalue(elt(env, 1)); /* !*grmod!* */
    if (v0022 == nil) goto v0098;
    v0022 = v0021;
    if (!consp(v0022)) goto v0033;
    v0022 = v0021;
    v0022 = qcar(v0022);
    v0022 = (consp(v0022) ? nil : lisp_true);
    goto v0105;

v0105:
    if (v0022 == nil) goto v0059;
    {
        popv(1);
        fn = elt(env, 4); /* bcfd */
        return (*qfn1(fn))(qenv(fn), v0021);
    }

v0059:
    v0022 = elt(env, 3); /* " Invalid coefficient " */
    v0021 = list2(v0022, v0021);
    nil = C_nil;
    if (exception_pending()) goto v0144;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 5); /* rederr */
        return (*qfn1(fn))(qenv(fn), v0021);
    }

v0033:
    v0022 = qvalue(elt(env, 2)); /* t */
    goto v0105;

v0098:
    {
        popv(1);
        fn = elt(env, 6); /* simp!* */
        return (*qfn1(fn))(qenv(fn), v0021);
    }
/* error exit handlers */
v0144:
    popv(1);
    return nil;
}



/* Code for gfdiffer */

static Lisp_Object CC_gfdiffer(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0055, v0118, v0121;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for gfdiffer");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0118 = v0039;
    v0121 = v0000;
/* end of prologue */
    v0055 = v0121;
    v0055 = qcar(v0055);
    if (!consp(v0055)) goto v0120;
    v0055 = v0121;
    {
        fn = elt(env, 1); /* gbfdiff */
        return (*qfn2(fn))(qenv(fn), v0055, v0118);
    }

v0120:
    v0055 = v0121;
    {
        fn = elt(env, 2); /* gffdiff */
        return (*qfn2(fn))(qenv(fn), v0055, v0118);
    }
}



/* Code for fs!:minusp */

static Lisp_Object CC_fsTminusp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0144, v0189, v0190;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fs:minusp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0189 = v0000;
/* end of prologue */

v0009:
    v0144 = v0189;
    if (v0144 == nil) goto v0040;
    v0190 = v0189;
    v0144 = (Lisp_Object)49; /* 3 */
    v0144 = *(Lisp_Object *)((char *)v0190 + (CELL-TAG_VECTOR) + ((int32_t)v0144/(16/CELL)));
    if (v0144 == nil) goto v0059;
    v0144 = (Lisp_Object)49; /* 3 */
    v0144 = *(Lisp_Object *)((char *)v0189 + (CELL-TAG_VECTOR) + ((int32_t)v0144/(16/CELL)));
    v0189 = v0144;
    goto v0009;

v0059:
    v0144 = (Lisp_Object)1; /* 0 */
    v0144 = *(Lisp_Object *)((char *)v0189 + (CELL-TAG_VECTOR) + ((int32_t)v0144/(16/CELL)));
    v0144 = qcar(v0144);
    {
        fn = elt(env, 2); /* minusf */
        return (*qfn1(fn))(qenv(fn), v0144);
    }

v0040:
    v0144 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v0144);
}



/* Code for !*multf */

static Lisp_Object CC_Hmultf(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0324, v0325, v0326;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for *multf");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0039;
    stack[-3] = v0000;
/* end of prologue */
    v0324 = stack[-3];
    if (v0324 == nil) goto v0060;
    v0324 = stack[-2];
    v0324 = (v0324 == nil ? lisp_true : nil);
    goto v0116;

v0116:
    if (v0324 == nil) goto v0117;
    v0324 = qvalue(elt(env, 2)); /* nil */
    { popv(6); return onevalue(v0324); }

v0117:
    v0325 = stack[-3];
    v0324 = (Lisp_Object)17; /* 1 */
    if (v0325 == v0324) goto v0059;
    v0325 = stack[-2];
    v0324 = (Lisp_Object)17; /* 1 */
    if (v0325 == v0324) goto v0098;
    v0324 = stack[-3];
    if (!consp(v0324)) goto v0052;
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0324 = (consp(v0324) ? nil : lisp_true);
    goto v0051;

v0051:
    if (v0324 == nil) goto v0025;
    stack[0] = stack[-3];
    v0324 = stack[-2];
    fn = elt(env, 7); /* squashsqrt */
    v0324 = (*qfn1(fn))(qenv(fn), v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    {
        Lisp_Object v0328 = stack[0];
        popv(6);
        fn = elt(env, 8); /* multd */
        return (*qfn2(fn))(qenv(fn), v0328, v0324);
    }

v0025:
    v0324 = stack[-2];
    if (!consp(v0324)) goto v0035;
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = (consp(v0324) ? nil : lisp_true);
    goto v0036;

v0036:
    if (v0324 == nil) goto v0019;
    stack[0] = stack[-2];
    v0324 = stack[-3];
    fn = elt(env, 7); /* squashsqrt */
    v0324 = (*qfn1(fn))(qenv(fn), v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    {
        Lisp_Object v0329 = stack[0];
        popv(6);
        fn = elt(env, 8); /* multd */
        return (*qfn2(fn))(qenv(fn), v0329, v0324);
    }

v0019:
    v0324 = qvalue(elt(env, 3)); /* !*noncomp */
    if (v0324 == nil) goto v0120;
    v0325 = stack[-3];
    v0324 = stack[-2];
    {
        popv(6);
        fn = elt(env, 9); /* multf */
        return (*qfn2(fn))(qenv(fn), v0325, v0324);
    }

v0120:
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    stack[0] = v0324;
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    stack[-1] = v0324;
    v0325 = stack[0];
    v0324 = stack[-1];
    if (v0325 == v0324) goto v0330;
    v0325 = stack[0];
    v0324 = stack[-1];
    fn = elt(env, 10); /* ordop */
    v0324 = (*qfn2(fn))(qenv(fn), v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    if (v0324 == nil) goto v0155;
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0325 = qcdr(v0324);
    v0324 = stack[-2];
    v0324 = CC_Hmultf(env, v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    stack[0] = v0324;
    v0324 = stack[-3];
    v0325 = qcdr(v0324);
    v0324 = stack[-2];
    v0324 = CC_Hmultf(env, v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    stack[-1] = v0324;
    v0324 = stack[0];
    if (v0324 == nil) { Lisp_Object res = stack[-1]; popv(6); return onevalue(res); }
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    if (!consp(v0324)) goto v0213;
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    v0324 = qcar(v0324);
    v0324 = (consp(v0324) ? nil : lisp_true);
    goto v0212;

v0212:
    if (v0324 == nil) goto v0220;
    v0324 = qvalue(elt(env, 2)); /* nil */
    goto v0331;

v0331:
    if (v0324 == nil) goto v0332;
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0325 = qcar(v0324);
    v0324 = (Lisp_Object)17; /* 1 */
    v0324 = cons(v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0325 = ncons(v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0324 = stack[0];
    v0325 = CC_Hmultf(env, v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0324 = stack[-1];
    {
        popv(6);
        fn = elt(env, 11); /* addf */
        return (*qfn2(fn))(qenv(fn), v0325, v0324);
    }

v0332:
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0326 = qcar(v0324);
    v0325 = stack[0];
    v0324 = stack[-1];
    {
        popv(6);
        fn = elt(env, 12); /* makeupsf */
        return (*qfnn(fn))(qenv(fn), 3, v0326, v0325, v0324);
    }

v0220:
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0325 = qcar(v0324);
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    if (v0325 == v0324) goto v0221;
    v0324 = qvalue(elt(env, 2)); /* nil */
    goto v0331;

v0221:
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    if (!consp(v0324)) goto v0333;
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0325 = qcar(v0324);
    v0324 = elt(env, 4); /* (expt sqrt) */
    v0324 = Lmemq(nil, v0325, v0324);
    goto v0331;

v0333:
    v0324 = qvalue(elt(env, 2)); /* nil */
    goto v0331;

v0213:
    v0324 = qvalue(elt(env, 1)); /* t */
    goto v0212;

v0155:
    v0325 = stack[-3];
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    v0324 = CC_Hmultf(env, v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    stack[0] = v0324;
    v0325 = stack[-3];
    v0324 = stack[-2];
    v0324 = qcdr(v0324);
    v0324 = CC_Hmultf(env, v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    stack[-1] = v0324;
    v0324 = stack[0];
    if (v0324 == nil) { Lisp_Object res = stack[-1]; popv(6); return onevalue(res); }
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    if (!consp(v0324)) goto v0160;
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    v0324 = qcar(v0324);
    v0324 = (consp(v0324) ? nil : lisp_true);
    goto v0163;

v0163:
    if (v0324 == nil) goto v0043;
    v0324 = qvalue(elt(env, 2)); /* nil */
    goto v0028;

v0028:
    if (v0324 == nil) goto v0334;
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0325 = qcar(v0324);
    v0324 = (Lisp_Object)17; /* 1 */
    v0324 = cons(v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0324 = ncons(v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0325 = CC_Hmultf(env, stack[0], v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0324 = stack[-1];
    {
        popv(6);
        fn = elt(env, 11); /* addf */
        return (*qfn2(fn))(qenv(fn), v0325, v0324);
    }

v0334:
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0326 = qcar(v0324);
    v0325 = stack[0];
    v0324 = stack[-1];
    {
        popv(6);
        fn = elt(env, 12); /* makeupsf */
        return (*qfnn(fn))(qenv(fn), 3, v0326, v0325, v0324);
    }

v0043:
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0325 = qcar(v0324);
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    if (v0325 == v0324) goto v0080;
    v0324 = qvalue(elt(env, 2)); /* nil */
    goto v0028;

v0080:
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    if (!consp(v0324)) goto v0335;
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0325 = qcar(v0324);
    v0324 = elt(env, 4); /* (expt sqrt) */
    v0324 = Lmemq(nil, v0325, v0324);
    goto v0028;

v0335:
    v0324 = qvalue(elt(env, 2)); /* nil */
    goto v0028;

v0160:
    v0324 = qvalue(elt(env, 1)); /* t */
    goto v0163;

v0330:
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0325 = ncons(v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0324 = stack[-2];
    v0324 = qcdr(v0324);
    stack[-1] = CC_Hmultf(env, v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0324 = stack[-3];
    v0325 = qcdr(v0324);
    v0324 = stack[-2];
    v0324 = CC_Hmultf(env, v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    fn = elt(env, 11); /* addf */
    v0324 = (*qfn2(fn))(qenv(fn), stack[-1], v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    stack[-1] = v0324;
    v0325 = stack[0];
    v0324 = elt(env, 5); /* sqrt */
    if (!consp(v0325)) goto v0336;
    v0325 = qcar(v0325);
    if (!(v0325 == v0324)) goto v0336;
    v0324 = stack[-1];
    fn = elt(env, 7); /* squashsqrt */
    stack[-4] = (*qfn1(fn))(qenv(fn), v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    stack[-1] = stack[0];
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0325 = qcdr(v0324);
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    stack[0] = CC_Hmultf(env, v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0325 = qcdr(v0324);
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    v0324 = plus2(v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    fn = elt(env, 13); /* !*multfsqrt */
    v0324 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[0], v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    {
        Lisp_Object v0337 = stack[-4];
        popv(6);
        fn = elt(env, 11); /* addf */
        return (*qfn2(fn))(qenv(fn), v0337, v0324);
    }

v0336:
    v0325 = stack[0];
    v0324 = elt(env, 6); /* expt */
    if (!consp(v0325)) goto v0338;
    v0325 = qcar(v0325);
    if (!(v0325 == v0324)) goto v0338;
    v0324 = stack[0];
    v0324 = qcdr(v0324);
    v0324 = qcdr(v0324);
    v0324 = qcar(v0324);
    fn = elt(env, 14); /* prefix!-rational!-numberp */
    v0324 = (*qfn1(fn))(qenv(fn), v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    goto v0339;

v0339:
    if (v0324 == nil) goto v0340;
    v0324 = stack[-1];
    fn = elt(env, 7); /* squashsqrt */
    stack[-4] = (*qfn1(fn))(qenv(fn), v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    stack[-1] = stack[0];
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0325 = qcdr(v0324);
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    stack[0] = CC_Hmultf(env, v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0325 = qcdr(v0324);
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    v0324 = plus2(v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    fn = elt(env, 15); /* !*multfexpt */
    v0324 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[0], v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    {
        Lisp_Object v0341 = stack[-4];
        popv(6);
        fn = elt(env, 11); /* addf */
        return (*qfn2(fn))(qenv(fn), v0341, v0324);
    }

v0340:
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0325 = qcdr(v0324);
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    v0324 = plus2(v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    fn = elt(env, 16); /* mkspm */
    v0324 = (*qfn2(fn))(qenv(fn), stack[0], v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    stack[0] = v0324;
    v0324 = stack[0];
    if (v0324 == nil) goto v0342;
    v0324 = stack[-3];
    v0324 = qcar(v0324);
    v0325 = qcdr(v0324);
    v0324 = stack[-2];
    v0324 = qcar(v0324);
    v0324 = qcdr(v0324);
    v0324 = CC_Hmultf(env, v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    stack[-3] = v0324;
    v0324 = (v0324 == nil ? lisp_true : nil);
    goto v0343;

v0343:
    if (!(v0324 == nil)) { Lisp_Object res = stack[-1]; popv(6); return onevalue(res); }
    v0325 = stack[0];
    v0324 = (Lisp_Object)17; /* 1 */
    v0324 = cons(v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0325 = ncons(v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0324 = stack[-3];
    fn = elt(env, 9); /* multf */
    v0325 = (*qfn2(fn))(qenv(fn), v0325, v0324);
    nil = C_nil;
    if (exception_pending()) goto v0327;
    env = stack[-5];
    v0324 = stack[-1];
    {
        popv(6);
        fn = elt(env, 11); /* addf */
        return (*qfn2(fn))(qenv(fn), v0325, v0324);
    }

v0342:
    v0324 = qvalue(elt(env, 1)); /* t */
    goto v0343;

v0338:
    v0324 = qvalue(elt(env, 2)); /* nil */
    goto v0339;

v0035:
    v0324 = qvalue(elt(env, 1)); /* t */
    goto v0036;

v0052:
    v0324 = qvalue(elt(env, 1)); /* t */
    goto v0051;

v0098:
    v0324 = stack[-3];
    {
        popv(6);
        fn = elt(env, 7); /* squashsqrt */
        return (*qfn1(fn))(qenv(fn), v0324);
    }

v0059:
    v0324 = stack[-2];
    {
        popv(6);
        fn = elt(env, 7); /* squashsqrt */
        return (*qfn1(fn))(qenv(fn), v0324);
    }

v0060:
    v0324 = qvalue(elt(env, 1)); /* t */
    goto v0116;
/* error exit handlers */
v0327:
    popv(6);
    return nil;
}



/* Code for solvealgdepends */

static Lisp_Object CC_solvealgdepends(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0039)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0201, v0203;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for solvealgdepends");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0039,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0039);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0039;
    stack[-1] = v0000;
/* end of prologue */

v0119:
    v0203 = stack[-1];
    v0201 = stack[0];
    if (equal(v0203, v0201)) goto v0005;
    v0201 = stack[-1];
    if (!consp(v0201)) goto v0100;
    v0203 = stack[-1];
    v0201 = elt(env, 3); /* root_of */
    if (!consp(v0203)) goto v0235;
    v0203 = qcar(v0203);
    if (!(v0203 == v0201)) goto v0235;
    v0203 = stack[0];
    v0201 = stack[-1];
    v0201 = qcdr(v0201);
    v0201 = qcdr(v0201);
    v0201 = qcar(v0201);
    if (equal(v0203, v0201)) goto v0098;
    v0201 = stack[-1];
    v0201 = qcdr(v0201);
    v0201 = qcar(v0201);
    stack[-1] = v0201;
    goto v0119;

v0098:
    v0201 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v0201); }

v0235:
    v0201 = stack[-1];
    v0203 = qcar(v0201);
    v0201 = stack[0];
    v0201 = CC_solvealgdepends(env, v0203, v0201);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-2];
    v0203 = v0201;
    if (!(v0201 == nil)) { popv(3); return onevalue(v0203); }
    v0201 = stack[-1];
    v0203 = qcdr(v0201);
    v0201 = stack[0];
    v0201 = CC_solvealgdepends(env, v0203, v0201);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-2];
    v0203 = v0201;
    if (!(v0201 == nil)) { popv(3); return onevalue(v0203); }
    v0201 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v0201); }

v0100:
    v0201 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v0201); }

v0005:
    v0201 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v0201); }
/* error exit handlers */
v0196:
    popv(3);
    return nil;
}



/* Code for ra_intequiv */

static Lisp_Object CC_ra_intequiv(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0119;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ra_intequiv");
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
    v0119 = v0000;
/* end of prologue */
    stack[0] = elt(env, 1); /* ra_intequiv0 */
    v0119 = ncons(v0119);
    nil = C_nil;
    if (exception_pending()) goto v0033;
    env = stack[-1];
    {
        Lisp_Object v0116 = stack[0];
        popv(2);
        fn = elt(env, 2); /* ra_wrapper */
        return (*qfn2(fn))(qenv(fn), v0116, v0119);
    }
/* error exit handlers */
v0033:
    popv(2);
    return nil;
}



/* Code for sfto_yun!-updecf */

static Lisp_Object CC_sfto_yunKupdecf(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0254, v0345;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for sfto_yun-updecf");
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
    stack[-6] = v0000;
/* end of prologue */
    stack[-7] = qvalue(elt(env, 1)); /* !*gcd */
    qvalue(elt(env, 1)) = nil; /* !*gcd */
    stack[-1] = nil;
    v0254 = qvalue(elt(env, 2)); /* t */
    qvalue(elt(env, 1)) = v0254; /* !*gcd */
    v0345 = (Lisp_Object)17; /* 1 */
    v0254 = (Lisp_Object)17; /* 1 */
    v0254 = cons(v0345, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    stack[-2] = v0254;
    v0254 = stack[-6];
    v0254 = qcar(v0254);
    v0254 = qcar(v0254);
    v0254 = qcar(v0254);
    stack[-5] = v0254;
    stack[-3] = stack[-6];
    v0345 = stack[-6];
    v0254 = stack[-5];
    fn = elt(env, 3); /* diff */
    v0254 = (*qfn2(fn))(qenv(fn), v0345, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    stack[0] = v0254;
    fn = elt(env, 4); /* sfto_gcdf */
    v0254 = (*qfn2(fn))(qenv(fn), stack[-3], v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    stack[-3] = v0254;
    v0345 = stack[-6];
    v0254 = stack[-3];
    fn = elt(env, 5); /* quotf */
    v0254 = (*qfn2(fn))(qenv(fn), v0345, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    stack[-4] = v0254;
    v0345 = stack[0];
    v0254 = stack[-3];
    fn = elt(env, 5); /* quotf */
    stack[0] = (*qfn2(fn))(qenv(fn), v0345, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    v0345 = stack[-4];
    v0254 = stack[-5];
    fn = elt(env, 3); /* diff */
    v0254 = (*qfn2(fn))(qenv(fn), v0345, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    fn = elt(env, 6); /* negf */
    v0254 = (*qfn1(fn))(qenv(fn), v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    fn = elt(env, 7); /* addf */
    v0254 = (*qfn2(fn))(qenv(fn), stack[0], v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    stack[-3] = v0254;
    goto v0169;

v0169:
    v0254 = stack[-1];
    v0254 = (v0254 == nil ? lisp_true : nil);
    stack[-1] = v0254;
    v0345 = stack[-4];
    v0254 = stack[-3];
    fn = elt(env, 4); /* sfto_gcdf */
    v0254 = (*qfn2(fn))(qenv(fn), v0345, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    stack[-6] = v0254;
    v0254 = stack[-1];
    if (v0254 == nil) goto v0014;
    stack[0] = stack[-2];
    v0254 = stack[-2];
    v0345 = qcar(v0254);
    v0254 = stack[-6];
    fn = elt(env, 8); /* multf */
    v0254 = (*qfn2(fn))(qenv(fn), v0345, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    fn = elt(env, 9); /* setcar */
    v0254 = (*qfn2(fn))(qenv(fn), stack[0], v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    goto v0010;

v0010:
    v0345 = stack[-4];
    v0254 = stack[-6];
    fn = elt(env, 5); /* quotf */
    v0254 = (*qfn2(fn))(qenv(fn), v0345, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    stack[-4] = v0254;
    v0345 = stack[-3];
    v0254 = stack[-6];
    fn = elt(env, 5); /* quotf */
    stack[0] = (*qfn2(fn))(qenv(fn), v0345, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    v0345 = stack[-4];
    v0254 = stack[-5];
    fn = elt(env, 3); /* diff */
    v0254 = (*qfn2(fn))(qenv(fn), v0345, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    fn = elt(env, 6); /* negf */
    v0254 = (*qfn1(fn))(qenv(fn), v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    fn = elt(env, 7); /* addf */
    v0254 = (*qfn2(fn))(qenv(fn), stack[0], v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    stack[-3] = v0254;
    v0254 = stack[-4];
    if (!consp(v0254)) goto v0030;
    v0254 = stack[-4];
    v0254 = qcar(v0254);
    v0254 = (consp(v0254) ? nil : lisp_true);
    goto v0029;

v0029:
    if (v0254 == nil) goto v0169;
    v0254 = stack[-2];
    qvalue(elt(env, 1)) = stack[-7]; /* !*gcd */
    { popv(9); return onevalue(v0254); }

v0030:
    v0254 = qvalue(elt(env, 2)); /* t */
    goto v0029;

v0014:
    stack[0] = stack[-2];
    v0254 = stack[-2];
    v0345 = qcdr(v0254);
    v0254 = stack[-6];
    fn = elt(env, 8); /* multf */
    v0254 = (*qfn2(fn))(qenv(fn), v0345, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    fn = elt(env, 10); /* setcdr */
    v0254 = (*qfn2(fn))(qenv(fn), stack[0], v0254);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-8];
    goto v0010;
/* error exit handlers */
v0043:
    env = stack[-8];
    qvalue(elt(env, 1)) = stack[-7]; /* !*gcd */
    popv(9);
    return nil;
}



setup_type const u35_setup[] =
{
    {"sptransmat",              CC_sptransmat,  too_many_1,    wrong_no_1},
    {"greatertype",             too_few_2,      CC_greatertype,wrong_no_2},
    {"vdpcleanup",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_vdpcleanup},
    {"wedgef",                  CC_wedgef,      too_many_1,    wrong_no_1},
    {"bflessp",                 too_few_2,      CC_bflessp,    wrong_no_2},
    {"calc_den_tar",            too_few_2,      CC_calc_den_tar,wrong_no_2},
    {"log_freevars",            too_few_2,      CC_log_freevars,wrong_no_2},
    {"dfp-sub",                 too_few_2,      CC_dfpKsub,    wrong_no_2},
    {"lf=zero",                 CC_lfMzero,     too_many_1,    wrong_no_1},
    {"bfminus",                 CC_bfminus,     too_many_1,    wrong_no_1},
    {"ra_intequiv0",            CC_ra_intequiv0,too_many_1,    wrong_no_1},
    {"setqinsertlist",          CC_setqinsertlist,too_many_1,  wrong_no_1},
    {"freeof-dfl",              too_few_2,      CC_freeofKdfl, wrong_no_2},
    {"mri_ofsf2mriat",          too_few_2,      CC_mri_ofsf2mriat,wrong_no_2},
    {"intervalom",              CC_intervalom,  too_many_1,    wrong_no_1},
    {"remzzzz",                 too_few_2,      CC_remzzzz,    wrong_no_2},
    {"diplmon2sq",              too_few_2,      CC_diplmon2sq, wrong_no_2},
    {"multiply-by-power-of-ten",too_few_2,      CC_multiplyKbyKpowerKofKten,wrong_no_2},
    {"lengthreval",             CC_lengthreval, too_many_1,    wrong_no_1},
    {"makeqn-maybe",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_makeqnKmaybe},
    {"createmonomunit",         wrong_no_na,    wrong_no_nb,   (n_args *)CC_createmonomunit},
    {"rl_pnf",                  CC_rl_pnf,      too_many_1,    wrong_no_1},
    {"pickbasicset",            CC_pickbasicset,too_many_1,    wrong_no_1},
    {"mk+mat+plus+mat",         too_few_2,      CC_mkLmatLplusLmat,wrong_no_2},
    {"pasf_premf",              too_few_2,      CC_pasf_premf, wrong_no_2},
    {"vdp_make",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_vdp_make},
    {"matrixelems",             CC_matrixelems, too_many_1,    wrong_no_1},
    {"transmat1",               CC_transmat1,   too_many_1,    wrong_no_1},
    {"dipcontevmin",            too_few_2,      CC_dipcontevmin,wrong_no_2},
    {"f2dip1",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_f2dip1},
    {"contposp",                CC_contposp,    too_many_1,    wrong_no_1},
    {"toolongassignp",          CC_toolongassignp,too_many_1,  wrong_no_1},
    {"indxsymp",                too_few_2,      CC_indxsymp,   wrong_no_2},
    {"getphystypeexpt",         CC_getphystypeexpt,too_many_1, wrong_no_1},
    {"calc_coeffmap_",          wrong_no_na,    wrong_no_nb,   (n_args *)CC_calc_coeffmap_},
    {"squashsqrt",              CC_squashsqrt,  too_many_1,    wrong_no_1},
    {"sfto_subfwd",             too_few_2,      CC_sfto_subfwd,wrong_no_2},
    {"fnom",                    CC_fnom,        too_many_1,    wrong_no_1},
    {"a2bc",                    CC_a2bc,        too_many_1,    wrong_no_1},
    {"gfdiffer",                too_few_2,      CC_gfdiffer,   wrong_no_2},
    {"fs:minusp",               CC_fsTminusp,   too_many_1,    wrong_no_1},
    {"*multf",                  too_few_2,      CC_Hmultf,     wrong_no_2},
    {"solvealgdepends",         too_few_2,      CC_solvealgdepends,wrong_no_2},
    {"ra_intequiv",             CC_ra_intequiv, too_many_1,    wrong_no_1},
    {"sfto_yun-updecf",         CC_sfto_yunKupdecf,too_many_1, wrong_no_1},
    {NULL, (one_args *)"u35", (two_args *)"19391 8386604 4102081", 0}
};

/* end of generated code */

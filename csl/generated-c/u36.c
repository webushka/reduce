
/* $destdir/u36.c        Machine generated C code */

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


/* Code for makecoeffpairshom */

static Lisp_Object MS_CDECL CC_makecoeffpairshom(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0080, v0081, v0082, v0083;
    Lisp_Object fn;
    Lisp_Object v0002, v0019, v0020, v0038;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "makecoeffpairshom");
    va_start(aa, nargs);
    v0038 = va_arg(aa, Lisp_Object);
    v0020 = va_arg(aa, Lisp_Object);
    v0019 = va_arg(aa, Lisp_Object);
    v0002 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for makecoeffpairshom");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push4(v0002,v0019,v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0038,v0020,v0019,v0002);
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
    stack[-11] = v0002;
    stack[-12] = v0019;
    stack[-13] = v0020;
    stack[-14] = v0038;
/* end of prologue */
    v0080 = stack[-12];
    if (v0080 == nil) goto v0084;
    v0080 = stack[-13];
    v0080 = qcar(v0080);
    stack[-15] = v0080;
    goto v0085;

v0085:
    stack[0] = stack[-11];
    v0080 = stack[-14];
    v0081 = qcar(v0080);
    v0080 = stack[-15];
    fn = elt(env, 3); /* tayexp!-difference */
    v0080 = (*qfn2(fn))(qenv(fn), v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    fn = elt(env, 4); /* tayexp!-times2 */
    v0080 = (*qfn2(fn))(qenv(fn), stack[0], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    fn = elt(env, 5); /* tayexp!-minusp */
    v0080 = (*qfn1(fn))(qenv(fn), v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    if (v0080 == nil) goto v0087;
    v0080 = qvalue(elt(env, 2)); /* nil */
    { popv(17); return onevalue(v0080); }

v0087:
    v0080 = stack[-14];
    v0083 = qcdr(v0080);
    v0080 = stack[-13];
    v0082 = qcdr(v0080);
    v0080 = stack[-12];
    v0081 = qcdr(v0080);
    v0080 = stack[-11];
    v0080 = CC_makecoeffpairshom(env, 4, v0083, v0082, v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    stack[-7] = v0080;
    v0080 = stack[-7];
    if (v0080 == nil) goto v0088;
    v0080 = stack[-7];
    v0080 = qcar(v0080);
    stack[-3] = v0080;
    stack[-2] = stack[-15];
    v0080 = stack[-3];
    stack[-1] = qcar(v0080);
    v0080 = stack[-13];
    stack[0] = qcar(v0080);
    v0080 = stack[-12];
    v0081 = qcar(v0080);
    v0080 = stack[-15];
    fn = elt(env, 3); /* tayexp!-difference */
    v0080 = (*qfn2(fn))(qenv(fn), v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    fn = elt(env, 6); /* tayexp!-plus2 */
    v0081 = (*qfn2(fn))(qenv(fn), stack[0], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = stack[-3];
    v0080 = qcdr(v0080);
    v0080 = cons(v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = acons(stack[-2], stack[-1], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = ncons(v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    stack[-5] = v0080;
    stack[-6] = v0080;
    goto v0089;

v0089:
    v0080 = stack[-7];
    v0080 = qcdr(v0080);
    stack[-7] = v0080;
    v0080 = stack[-7];
    if (v0080 == nil) goto v0090;
    stack[-4] = stack[-5];
    v0080 = stack[-7];
    v0080 = qcar(v0080);
    stack[-3] = v0080;
    stack[-2] = stack[-15];
    v0080 = stack[-3];
    stack[-1] = qcar(v0080);
    v0080 = stack[-13];
    stack[0] = qcar(v0080);
    v0080 = stack[-12];
    v0081 = qcar(v0080);
    v0080 = stack[-15];
    fn = elt(env, 3); /* tayexp!-difference */
    v0080 = (*qfn2(fn))(qenv(fn), v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    fn = elt(env, 6); /* tayexp!-plus2 */
    v0081 = (*qfn2(fn))(qenv(fn), stack[0], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = stack[-3];
    v0080 = qcdr(v0080);
    v0080 = cons(v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = acons(stack[-2], stack[-1], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = ncons(v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = Lrplacd(nil, stack[-4], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = stack[-5];
    v0080 = qcdr(v0080);
    stack[-5] = v0080;
    goto v0089;

v0090:
    v0080 = stack[-6];
    goto v0091;

v0091:
    stack[-10] = v0080;
    v0080 = stack[-10];
    fn = elt(env, 7); /* lastpair */
    v0080 = (*qfn1(fn))(qenv(fn), v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    stack[-9] = v0080;
    v0081 = stack[-15];
    v0080 = stack[-11];
    fn = elt(env, 6); /* tayexp!-plus2 */
    v0080 = (*qfn2(fn))(qenv(fn), v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    stack[-15] = v0080;
    v0080 = stack[-9];
    if (!consp(v0080)) goto v0085;
    else goto v0092;

v0092:
    stack[0] = stack[-11];
    v0080 = stack[-14];
    v0081 = qcar(v0080);
    v0080 = stack[-15];
    fn = elt(env, 3); /* tayexp!-difference */
    v0080 = (*qfn2(fn))(qenv(fn), v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    fn = elt(env, 4); /* tayexp!-times2 */
    v0080 = (*qfn2(fn))(qenv(fn), stack[0], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    fn = elt(env, 5); /* tayexp!-minusp */
    v0080 = (*qfn1(fn))(qenv(fn), v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    if (!(v0080 == nil)) { Lisp_Object res = stack[-10]; popv(17); return onevalue(res); }
    stack[-8] = stack[-9];
    v0080 = stack[-14];
    v0083 = qcdr(v0080);
    v0080 = stack[-13];
    v0082 = qcdr(v0080);
    v0080 = stack[-12];
    v0081 = qcdr(v0080);
    v0080 = stack[-11];
    v0080 = CC_makecoeffpairshom(env, 4, v0083, v0082, v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    stack[-7] = v0080;
    v0080 = stack[-7];
    if (v0080 == nil) goto v0093;
    v0080 = stack[-7];
    v0080 = qcar(v0080);
    stack[-3] = v0080;
    stack[-2] = stack[-15];
    v0080 = stack[-3];
    stack[-1] = qcar(v0080);
    v0080 = stack[-13];
    stack[0] = qcar(v0080);
    v0080 = stack[-12];
    v0081 = qcar(v0080);
    v0080 = stack[-15];
    fn = elt(env, 3); /* tayexp!-difference */
    v0080 = (*qfn2(fn))(qenv(fn), v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    fn = elt(env, 6); /* tayexp!-plus2 */
    v0081 = (*qfn2(fn))(qenv(fn), stack[0], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = stack[-3];
    v0080 = qcdr(v0080);
    v0080 = cons(v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = acons(stack[-2], stack[-1], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = ncons(v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    stack[-5] = v0080;
    stack[-6] = v0080;
    goto v0094;

v0094:
    v0080 = stack[-7];
    v0080 = qcdr(v0080);
    stack[-7] = v0080;
    v0080 = stack[-7];
    if (v0080 == nil) goto v0095;
    stack[-4] = stack[-5];
    v0080 = stack[-7];
    v0080 = qcar(v0080);
    stack[-3] = v0080;
    stack[-2] = stack[-15];
    v0080 = stack[-3];
    stack[-1] = qcar(v0080);
    v0080 = stack[-13];
    stack[0] = qcar(v0080);
    v0080 = stack[-12];
    v0081 = qcar(v0080);
    v0080 = stack[-15];
    fn = elt(env, 3); /* tayexp!-difference */
    v0080 = (*qfn2(fn))(qenv(fn), v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    fn = elt(env, 6); /* tayexp!-plus2 */
    v0081 = (*qfn2(fn))(qenv(fn), stack[0], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = stack[-3];
    v0080 = qcdr(v0080);
    v0080 = cons(v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = acons(stack[-2], stack[-1], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = ncons(v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = Lrplacd(nil, stack[-4], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = stack[-5];
    v0080 = qcdr(v0080);
    stack[-5] = v0080;
    goto v0094;

v0095:
    v0080 = stack[-6];
    goto v0096;

v0096:
    v0080 = Lrplacd(nil, stack[-8], v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    v0080 = stack[-9];
    fn = elt(env, 7); /* lastpair */
    v0080 = (*qfn1(fn))(qenv(fn), v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    stack[-9] = v0080;
    v0081 = stack[-15];
    v0080 = stack[-11];
    fn = elt(env, 6); /* tayexp!-plus2 */
    v0080 = (*qfn2(fn))(qenv(fn), v0081, v0080);
    nil = C_nil;
    if (exception_pending()) goto v0086;
    env = stack[-16];
    stack[-15] = v0080;
    goto v0092;

v0093:
    v0080 = qvalue(elt(env, 2)); /* nil */
    goto v0096;

v0088:
    v0080 = qvalue(elt(env, 2)); /* nil */
    goto v0091;

v0084:
    v0080 = elt(env, 1); /* ((nil)) */
    { popv(17); return onevalue(v0080); }
/* error exit handlers */
v0086:
    popv(17);
    return nil;
}



/* Code for termorder1 */

static Lisp_Object CC_termorder1(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0075, v0100;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for termorder1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0020;
    stack[-1] = v0038;
/* end of prologue */

v0101:
    v0075 = stack[-1];
    if (v0075 == nil) goto v0102;
    v0075 = stack[-1];
    v0075 = (Lisp_Object)zerop(v0075);
    v0075 = v0075 ? lisp_true : nil;
    env = stack[-2];
    if (v0075 == nil) goto v0003;
    v0075 = stack[0];
    v0075 = (Lisp_Object)zerop(v0075);
    v0075 = v0075 ? lisp_true : nil;
    env = stack[-2];
    if (v0075 == nil) goto v0003;
    v0075 = (Lisp_Object)1; /* 0 */
    { popv(3); return onevalue(v0075); }

v0003:
    v0075 = stack[-1];
    v0075 = (Lisp_Object)zerop(v0075);
    v0075 = v0075 ? lisp_true : nil;
    env = stack[-2];
    if (v0075 == nil) goto v0103;
    v0075 = (Lisp_Object)-15; /* -1 */
    { popv(3); return onevalue(v0075); }

v0103:
    v0075 = stack[0];
    v0075 = (Lisp_Object)zerop(v0075);
    v0075 = v0075 ? lisp_true : nil;
    env = stack[-2];
    if (v0075 == nil) goto v0077;
    v0075 = (Lisp_Object)17; /* 1 */
    { popv(3); return onevalue(v0075); }

v0077:
    v0075 = stack[-1];
    v0100 = qcar(v0075);
    v0075 = stack[0];
    v0075 = qcar(v0075);
    v0075 = (Lisp_Object)lessp2(v0100, v0075);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    v0075 = v0075 ? lisp_true : nil;
    env = stack[-2];
    if (v0075 == nil) goto v0046;
    v0075 = (Lisp_Object)-15; /* -1 */
    { popv(3); return onevalue(v0075); }

v0046:
    v0075 = stack[-1];
    v0100 = qcar(v0075);
    v0075 = stack[0];
    v0075 = qcar(v0075);
    v0075 = (Lisp_Object)greaterp2(v0100, v0075);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    v0075 = v0075 ? lisp_true : nil;
    env = stack[-2];
    if (v0075 == nil) goto v0105;
    v0075 = (Lisp_Object)17; /* 1 */
    { popv(3); return onevalue(v0075); }

v0105:
    v0075 = stack[-1];
    v0075 = qcdr(v0075);
    stack[-1] = v0075;
    v0075 = stack[0];
    v0075 = qcdr(v0075);
    stack[0] = v0075;
    goto v0101;

v0102:
    v0075 = (Lisp_Object)1; /* 0 */
    { popv(3); return onevalue(v0075); }
/* error exit handlers */
v0104:
    popv(3);
    return nil;
}



/* Code for degree!-order */

static Lisp_Object CC_degreeKorder(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0089, v0107, v0087;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for degree-order");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0107 = v0020;
    v0087 = v0038;
/* end of prologue */
    v0089 = v0087;
    if (!consp(v0089)) goto v0108;
    v0089 = v0087;
    v0089 = qcar(v0089);
    v0089 = (consp(v0089) ? nil : lisp_true);
    goto v0102;

v0102:
    if (v0089 == nil) goto v0109;
    v0089 = qvalue(elt(env, 1)); /* t */
    return onevalue(v0089);

v0109:
    v0089 = v0107;
    if (!consp(v0089)) goto v0110;
    v0089 = v0107;
    v0089 = qcar(v0089);
    v0089 = (consp(v0089) ? nil : lisp_true);
    goto v0103;

v0103:
    if (v0089 == nil) goto v0111;
    v0089 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0089);

v0111:
    v0089 = v0087;
    v0089 = qcar(v0089);
    v0089 = qcar(v0089);
    v0089 = qcdr(v0089);
    v0107 = qcar(v0107);
    v0107 = qcar(v0107);
    v0107 = qcdr(v0107);
        return Llessp(nil, v0089, v0107);

v0110:
    v0089 = qvalue(elt(env, 1)); /* t */
    goto v0103;

v0108:
    v0089 = qvalue(elt(env, 1)); /* t */
    goto v0102;
}



/* Code for vectorrd */

static Lisp_Object MS_CDECL CC_vectorrd(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0112, v0113;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "vectorrd");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for vectorrd");
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
    fn = elt(env, 3); /* matrixrowrd */
    v0112 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[0];
    v0113 = elt(env, 2); /* mat */
    v0112 = list2(v0113, v0112);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 4); /* aeval */
        return (*qfn1(fn))(qenv(fn), v0112);
    }
/* error exit handlers */
v0114:
    popv(1);
    return nil;
}



/* Code for simpimpart */

static Lisp_Object CC_simpimpart(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0102, v0108;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for simpimpart");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0108 = v0038;
/* end of prologue */
    v0102 = qvalue(elt(env, 1)); /* nil */
    stack[0] = qvalue(elt(env, 2)); /* !*factor */
    qvalue(elt(env, 2)) = v0102; /* !*factor */
    v0102 = v0108;
    v0102 = qcar(v0102);
    fn = elt(env, 3); /* simp!* */
    v0102 = (*qfn1(fn))(qenv(fn), v0102);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-1];
    fn = elt(env, 4); /* impartsq */
    v0102 = (*qfn1(fn))(qenv(fn), v0102);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-1];
    qvalue(elt(env, 2)) = stack[0]; /* !*factor */
    { popv(2); return onevalue(v0102); }
/* error exit handlers */
v0115:
    env = stack[-1];
    qvalue(elt(env, 2)) = stack[0]; /* !*factor */
    popv(2);
    return nil;
}



/* Code for on!-double1 */

static Lisp_Object CC_onKdouble1(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0116;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for on-double1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0038;
/* end of prologue */

v0117:
    v0116 = stack[0];
    v0116 = Lconsp(nil, v0116);
    env = stack[-1];
    if (v0116 == nil) goto v0118;
    v0116 = stack[0];
    v0116 = qcar(v0116);
    fn = elt(env, 3); /* doublep */
    v0116 = (*qfn1(fn))(qenv(fn), v0116);
    nil = C_nil;
    if (exception_pending()) goto v0119;
    env = stack[-1];
    if (v0116 == nil) goto v0120;
    v0116 = lisp_true;
    qvalue(elt(env, 1)) = v0116; /* !*double */
    { popv(2); return onevalue(v0116); }

v0120:
    v0116 = stack[0];
    v0116 = qcar(v0116);
    v0116 = CC_onKdouble1(env, v0116);
    nil = C_nil;
    if (exception_pending()) goto v0119;
    env = stack[-1];
    v0116 = stack[0];
    v0116 = qcdr(v0116);
    stack[0] = v0116;
    goto v0117;

v0118:
    v0116 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v0116); }
/* error exit handlers */
v0119:
    popv(2);
    return nil;
}



/* Code for genexp */

static Lisp_Object CC_genexp(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0121;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for genexp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0038;
/* end of prologue */

v0122:
    v0121 = stack[0];
    if (!consp(v0121)) goto v0117;
    v0121 = stack[0];
    v0121 = qcar(v0121);
    v0121 = CC_genexp(env, v0121);
    nil = C_nil;
    if (exception_pending()) goto v0103;
    env = stack[-1];
    if (!(v0121 == nil)) { popv(2); return onevalue(v0121); }
    v0121 = stack[0];
    v0121 = qcdr(v0121);
    stack[0] = v0121;
    goto v0122;

v0117:
    v0121 = stack[0];
    {
        popv(2);
        fn = elt(env, 1); /* genp */
        return (*qfn1(fn))(qenv(fn), v0121);
    }
/* error exit handlers */
v0103:
    popv(2);
    return nil;
}



/* Code for xpartitop */

static Lisp_Object CC_xpartitop(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0101;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for xpartitop");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v0101 = v0038;
/* end of prologue */
    fn = elt(env, 1); /* simp!* */
    v0101 = (*qfn1(fn))(qenv(fn), v0101);
    nil = C_nil;
    if (exception_pending()) goto v0109;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 2); /* xpartitsq */
        return (*qfn1(fn))(qenv(fn), v0101);
    }
/* error exit handlers */
v0109:
    popv(1);
    return nil;
}



/* Code for simpunion */

static Lisp_Object CC_simpunion(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0132, v0067, v0133;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for simpunion");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0132 = v0038;
/* end of prologue */
    v0067 = elt(env, 1); /* union */
    fn = elt(env, 3); /* applysetop */
    v0132 = (*qfn2(fn))(qenv(fn), v0067, v0132);
    nil = C_nil;
    if (exception_pending()) goto v0134;
    env = stack[-1];
    v0133 = v0132;
    v0132 = v0133;
    v0067 = qcar(v0132);
    v0132 = elt(env, 1); /* union */
    if (v0067 == v0132) goto v0046;
    v0132 = v0133;
    v0067 = v0132;
    goto v0135;

v0135:
    v0132 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 4); /* mksp */
    v0067 = (*qfn2(fn))(qenv(fn), v0067, v0132);
    nil = C_nil;
    if (exception_pending()) goto v0134;
    env = stack[-1];
    v0132 = (Lisp_Object)17; /* 1 */
    v0132 = cons(v0067, v0132);
    nil = C_nil;
    if (exception_pending()) goto v0134;
    env = stack[-1];
    v0067 = ncons(v0132);
    nil = C_nil;
    if (exception_pending()) goto v0134;
    v0132 = (Lisp_Object)17; /* 1 */
    popv(2);
    return cons(v0067, v0132);

v0046:
    v0132 = qvalue(elt(env, 2)); /* empty_set */
    v0067 = v0133;
    v0067 = qcdr(v0067);
    v0132 = Ldelete(nil, v0132, v0067);
    nil = C_nil;
    if (exception_pending()) goto v0134;
    env = stack[-1];
    v0133 = v0132;
    v0132 = qcdr(v0132);
    if (v0132 == nil) goto v0072;
    stack[0] = elt(env, 1); /* union */
    v0132 = v0133;
    fn = elt(env, 5); /* ordn */
    v0132 = (*qfn1(fn))(qenv(fn), v0132);
    nil = C_nil;
    if (exception_pending()) goto v0134;
    env = stack[-1];
    v0132 = cons(stack[0], v0132);
    nil = C_nil;
    if (exception_pending()) goto v0134;
    env = stack[-1];
    goto v0136;

v0136:
    v0067 = v0132;
    goto v0135;

v0072:
    v0132 = v0133;
    v0132 = qcar(v0132);
    goto v0136;
/* error exit handlers */
v0134:
    popv(2);
    return nil;
}



/* Code for spp */

static Lisp_Object CC_spp(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0041, v0006;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for spp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v0041 = v0038;
/* end of prologue */
    v0006 = v0041;
    v0006 = Lconsp(nil, v0006);
    env = stack[0];
    if (v0006 == nil) goto v0117;
    v0041 = qcar(v0041);
    {
        popv(1);
        fn = elt(env, 2); /* kernelp */
        return (*qfn1(fn))(qenv(fn), v0041);
    }

v0117:
    v0041 = qvalue(elt(env, 1)); /* nil */
    { popv(1); return onevalue(v0041); }
}



/* Code for s_world_names */

static Lisp_Object CC_s_world_names(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0061;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for s_world_names");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    v0061 = v0038;
/* end of prologue */
    v0061 = qcar(v0061);
    stack[-3] = v0061;
    v0061 = stack[-3];
    if (v0061 == nil) goto v0138;
    v0061 = stack[-3];
    v0061 = qcar(v0061);
    v0061 = qcar(v0061);
    v0061 = ncons(v0061);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    env = stack[-4];
    stack[-1] = v0061;
    stack[-2] = v0061;
    goto v0084;

v0084:
    v0061 = stack[-3];
    v0061 = qcdr(v0061);
    stack[-3] = v0061;
    v0061 = stack[-3];
    if (v0061 == nil) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    stack[0] = stack[-1];
    v0061 = stack[-3];
    v0061 = qcar(v0061);
    v0061 = qcar(v0061);
    v0061 = ncons(v0061);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    env = stack[-4];
    v0061 = Lrplacd(nil, stack[0], v0061);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    env = stack[-4];
    v0061 = stack[-1];
    v0061 = qcdr(v0061);
    stack[-1] = v0061;
    goto v0084;

v0138:
    v0061 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0061); }
/* error exit handlers */
v0107:
    popv(5);
    return nil;
}



/* Code for createsinglevariablemonom */

static Lisp_Object CC_createsinglevariablemonom(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0141, v0142, v0099;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for createsinglevariablemonom");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0038;
/* end of prologue */
    v0141 = (Lisp_Object)17; /* 1 */
    v0141 = Lmkvect(nil, v0141);
    nil = C_nil;
    if (exception_pending()) goto v0061;
    env = stack[-4];
    stack[-3] = v0141;
    v0099 = stack[-3];
    v0142 = (Lisp_Object)1; /* 0 */
    v0141 = (Lisp_Object)17; /* 1 */
    *(Lisp_Object *)((char *)v0099 + (CELL-TAG_VECTOR) + ((int32_t)v0142/(16/CELL))) = v0141;
    stack[-1] = stack[-3];
    stack[0] = (Lisp_Object)17; /* 1 */
    v0099 = stack[-2];
    v0142 = qvalue(elt(env, 1)); /* nil */
    v0141 = qvalue(elt(env, 1)); /* nil */
    v0141 = list2star(v0099, v0142, v0141);
    nil = C_nil;
    if (exception_pending()) goto v0061;
    *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v0141;
    { Lisp_Object res = stack[-3]; popv(5); return onevalue(res); }
/* error exit handlers */
v0061:
    popv(5);
    return nil;
}



/* Code for component_action */

static Lisp_Object MS_CDECL CC_component_action(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0123, v0132, v0067;
    Lisp_Object fn;
    Lisp_Object v0019, v0020, v0038;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "component_action");
    va_start(aa, nargs);
    v0038 = va_arg(aa, Lisp_Object);
    v0020 = va_arg(aa, Lisp_Object);
    v0019 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for component_action");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0019,v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0038,v0020,v0019);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0019;
    stack[-3] = v0020;
    stack[0] = v0038;
/* end of prologue */
    v0132 = qvalue(elt(env, 1)); /* nil */
    v0123 = (Lisp_Object)17; /* 1 */
    v0123 = cons(v0132, v0123);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    stack[-4] = v0123;
    v0123 = stack[0];
    v0123 = qcdr(v0123);
    stack[-1] = v0123;
    goto v0114;

v0114:
    v0123 = stack[-1];
    if (v0123 == nil) { Lisp_Object res = stack[-4]; popv(6); return onevalue(res); }
    v0123 = stack[-1];
    v0123 = qcar(v0123);
    stack[0] = v0123;
    v0123 = stack[0];
    v0132 = qcar(v0123);
    v0123 = stack[-3];
    fn = elt(env, 2); /* ext_mult */
    v0132 = (*qfn2(fn))(qenv(fn), v0132, v0123);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    v0123 = stack[0];
    v0123 = qcdr(v0123);
    v0067 = v0132;
    v0132 = v0123;
    v0123 = v0067;
    v0123 = qcar(v0123);
    if (v0123 == nil) goto v0059;
    stack[0] = stack[-4];
    v0123 = v0067;
    fn = elt(env, 3); /* multsq */
    v0132 = (*qfn2(fn))(qenv(fn), v0123, v0132);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    v0123 = stack[-2];
    fn = elt(env, 3); /* multsq */
    v0123 = (*qfn2(fn))(qenv(fn), v0132, v0123);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    fn = elt(env, 4); /* addsq */
    v0123 = (*qfn2(fn))(qenv(fn), stack[0], v0123);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    stack[-4] = v0123;
    goto v0059;

v0059:
    v0123 = stack[-1];
    v0123 = qcdr(v0123);
    stack[-1] = v0123;
    goto v0114;
/* error exit handlers */
v0146:
    popv(6);
    return nil;
}



/* Code for rtypepart */

static Lisp_Object CC_rtypepart(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0138;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rtypepart");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v0138 = v0038;
/* end of prologue */
    fn = elt(env, 3); /* getrtypecar */
    v0138 = (*qfn1(fn))(qenv(fn), v0138);
    nil = C_nil;
    if (exception_pending()) goto v0003;
    env = stack[0];
    if (v0138 == nil) goto v0108;
    v0138 = elt(env, 1); /* yetunknowntype */
    { popv(1); return onevalue(v0138); }

v0108:
    v0138 = qvalue(elt(env, 2)); /* nil */
    { popv(1); return onevalue(v0138); }
/* error exit handlers */
v0003:
    popv(1);
    return nil;
}



/* Code for factor!-prim!-f */

static Lisp_Object CC_factorKprimKf(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0043, v0164, v0165;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for factor-prim-f");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0038;
/* end of prologue */
    stack[-3] = nil;
    stack[-1] = nil;
    v0043 = qvalue(elt(env, 1)); /* ncmp!* */
    if (v0043 == nil) goto v0108;
    stack[0] = (Lisp_Object)17; /* 1 */
    v0164 = stack[-2];
    v0043 = (Lisp_Object)17; /* 1 */
    v0043 = cons(v0164, v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    {
        Lisp_Object v0004 = stack[0];
        popv(5);
        return list2(v0004, v0043);
    }

v0108:
    v0043 = qvalue(elt(env, 2)); /* dmode!* */
    if (v0043 == nil) goto v0119;
    v0164 = qvalue(elt(env, 2)); /* dmode!* */
    v0043 = elt(env, 3); /* sqfrfactorfn */
    v0043 = get(v0164, v0043);
    env = stack[-4];
    stack[-1] = v0043;
    if (v0043 == nil) goto v0119;
    v0043 = qvalue(elt(env, 4)); /* !*factor */
    if (v0043 == nil) goto v0167;
    v0164 = stack[-1];
    v0043 = stack[-2];
    v0043 = Lapply1(nil, v0164, v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    stack[0] = v0043;
    goto v0116;

v0116:
    v0043 = stack[-1];
    if (v0043 == nil) goto v0168;
    v0165 = stack[-1];
    v0164 = qvalue(elt(env, 2)); /* dmode!* */
    v0043 = elt(env, 6); /* factorfn */
    v0043 = get(v0164, v0043);
    env = stack[-4];
    if (v0165 == v0043) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    else goto v0168;

v0168:
    v0043 = stack[0];
    v0043 = qcar(v0043);
    v0043 = ncons(v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    stack[-3] = v0043;
    v0043 = stack[0];
    v0043 = qcdr(v0043);
    stack[0] = v0043;
    goto v0169;

v0169:
    v0043 = stack[0];
    if (v0043 == nil) { Lisp_Object res = stack[-3]; popv(5); return onevalue(res); }
    v0043 = stack[0];
    v0043 = qcar(v0043);
    fn = elt(env, 7); /* factor!-prim!-sqfree!-f */
    v0164 = (*qfn1(fn))(qenv(fn), v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    v0043 = stack[-3];
    fn = elt(env, 8); /* fac!-merge */
    v0043 = (*qfn2(fn))(qenv(fn), v0164, v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    stack[-3] = v0043;
    v0043 = stack[0];
    v0043 = qcdr(v0043);
    stack[0] = v0043;
    goto v0169;

v0167:
    stack[0] = (Lisp_Object)17; /* 1 */
    v0164 = stack[-2];
    v0043 = (Lisp_Object)17; /* 1 */
    v0043 = cons(v0164, v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    v0043 = list2(stack[0], v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    stack[0] = v0043;
    goto v0116;

v0119:
    v0043 = qvalue(elt(env, 2)); /* dmode!* */
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
    if (v0043 == nil) goto v0170;
    v0043 = stack[-2];
    fn = elt(env, 9); /* lnc */
    v0164 = (*qfn1(fn))(qenv(fn), v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    stack[-3] = v0164;
    v0043 = (Lisp_Object)17; /* 1 */
    v0043 = Lneq(nil, v0164, v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    goto v0067;

v0067:
    if (v0043 == nil) goto v0123;
    stack[0] = stack[-3];
    v0043 = stack[-3];
    fn = elt(env, 10); /* !:recip */
    v0164 = (*qfn1(fn))(qenv(fn), v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    v0043 = stack[-2];
    fn = elt(env, 11); /* multd */
    v0043 = (*qfn2(fn))(qenv(fn), v0164, v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    fn = elt(env, 12); /* sqfrf */
    v0043 = (*qfn1(fn))(qenv(fn), v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    v0043 = cons(stack[0], v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    stack[0] = v0043;
    goto v0116;

v0123:
    v0043 = qvalue(elt(env, 2)); /* dmode!* */
    if (!symbolp(v0043)) v0043 = nil;
    else { v0043 = qfastgets(v0043);
           if (v0043 != nil) { v0043 = elt(v0043, 27); /* units */
#ifdef RECORD_GET
             if (v0043 != SPID_NOPROP)
                record_get(elt(fastget_names, 27), 1);
             else record_get(elt(fastget_names, 27), 0),
                v0043 = nil; }
           else record_get(elt(fastget_names, 27), 0); }
#else
             if (v0043 == SPID_NOPROP) v0043 = nil; }}
#endif
    stack[-3] = v0043;
    if (v0043 == nil) goto v0171;
    v0043 = stack[-2];
    fn = elt(env, 9); /* lnc */
    v0164 = (*qfn1(fn))(qenv(fn), v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    v0165 = v0164;
    v0043 = stack[-3];
    v0043 = Lassoc(nil, v0164, v0043);
    stack[-3] = v0043;
    if (v0043 == nil) goto v0171;
    stack[0] = v0165;
    v0043 = stack[-3];
    v0164 = qcdr(v0043);
    v0043 = stack[-2];
    fn = elt(env, 11); /* multd */
    v0043 = (*qfn2(fn))(qenv(fn), v0164, v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    fn = elt(env, 12); /* sqfrf */
    v0043 = (*qfn1(fn))(qenv(fn), v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    v0043 = cons(stack[0], v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    stack[0] = v0043;
    goto v0116;

v0171:
    stack[0] = (Lisp_Object)17; /* 1 */
    v0043 = stack[-2];
    fn = elt(env, 12); /* sqfrf */
    v0043 = (*qfn1(fn))(qenv(fn), v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    v0043 = cons(stack[0], v0043);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-4];
    stack[0] = v0043;
    goto v0116;

v0170:
    v0043 = qvalue(elt(env, 5)); /* nil */
    goto v0067;
/* error exit handlers */
v0166:
    popv(5);
    return nil;
}



/* Code for ofsf_updsignvar */

static Lisp_Object MS_CDECL CC_ofsf_updsignvar(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0134, v0172, v0173, v0146, v0174, v0175, v0064, v0176;
    Lisp_Object v0109, v0101, v0117, v0002, v0019, v0020, v0038;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 7, "ofsf_updsignvar");
    va_start(aa, nargs);
    v0038 = va_arg(aa, Lisp_Object);
    v0020 = va_arg(aa, Lisp_Object);
    v0019 = va_arg(aa, Lisp_Object);
    v0002 = va_arg(aa, Lisp_Object);
    v0117 = va_arg(aa, Lisp_Object);
    v0101 = va_arg(aa, Lisp_Object);
    v0109 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ofsf_updsignvar");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0173 = v0109;
    v0146 = v0101;
    v0174 = v0117;
    v0175 = v0002;
    v0064 = v0019;
    v0134 = v0020;
    v0176 = v0038;
/* end of prologue */
    v0172 = v0176;
    v0134 = Lmemq(nil, v0172, v0134);
    if (v0134 == nil) goto v0110;
    v0134 = elt(env, 1); /* equal */
    return onevalue(v0134);

v0110:
    v0134 = v0176;
    v0172 = v0064;
    v0134 = Lmemq(nil, v0134, v0172);
    if (v0134 == nil) goto v0077;
    v0134 = elt(env, 2); /* greaterp */
    return onevalue(v0134);

v0077:
    v0134 = v0176;
    v0172 = v0175;
    v0134 = Lmemq(nil, v0134, v0172);
    if (v0134 == nil) goto v0061;
    v0134 = elt(env, 3); /* lessp */
    return onevalue(v0134);

v0061:
    v0134 = v0176;
    v0172 = v0174;
    v0134 = Lmemq(nil, v0134, v0172);
    if (v0134 == nil) goto v0143;
    v0134 = elt(env, 4); /* geq */
    return onevalue(v0134);

v0143:
    v0134 = v0176;
    v0172 = v0146;
    v0134 = Lmemq(nil, v0134, v0172);
    if (v0134 == nil) goto v0104;
    v0134 = elt(env, 5); /* leq */
    return onevalue(v0134);

v0104:
    v0134 = v0176;
    v0172 = v0173;
    v0134 = Lmemq(nil, v0134, v0172);
    if (v0134 == nil) goto v0067;
    v0134 = elt(env, 6); /* neq */
    return onevalue(v0134);

v0067:
    v0134 = elt(env, 7); /* unknown */
    return onevalue(v0134);
}



/* Code for make!-modular!-symmetric */

static Lisp_Object CC_makeKmodularKsymmetric(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0133, v0178, v0134;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for make-modular-symmetric");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0038;
/* end of prologue */
    v0133 = stack[0];
    if (v0133 == nil) goto v0117;
    v0133 = stack[0];
    if (!consp(v0133)) goto v0138;
    v0133 = stack[0];
    v0133 = qcar(v0133);
    v0133 = (consp(v0133) ? nil : lisp_true);
    goto v0115;

v0115:
    if (v0133 == nil) goto v0061;
    v0178 = stack[0];
    v0133 = qvalue(elt(env, 3)); /* modulus!/2 */
    v0133 = (Lisp_Object)greaterp2(v0178, v0133);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    v0133 = v0133 ? lisp_true : nil;
    env = stack[-2];
    if (v0133 == nil) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v0178 = stack[0];
    v0133 = qvalue(elt(env, 4)); /* current!-modulus */
    v0133 = difference2(v0178, v0133);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-2];
    {
        popv(3);
        fn = elt(env, 5); /* !*n2f */
        return (*qfn1(fn))(qenv(fn), v0133);
    }

v0061:
    v0133 = stack[0];
    v0133 = qcar(v0133);
    v0133 = qcdr(v0133);
    stack[-1] = CC_makeKmodularKsymmetric(env, v0133);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-2];
    v0133 = stack[0];
    v0133 = qcdr(v0133);
    v0133 = CC_makeKmodularKsymmetric(env, v0133);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    v0178 = stack[-1];
    v0134 = v0178;
    if (v0134 == nil) { popv(3); return onevalue(v0133); }
    v0134 = stack[0];
    v0134 = qcar(v0134);
    v0134 = qcar(v0134);
    popv(3);
    return acons(v0134, v0178, v0133);

v0138:
    v0133 = qvalue(elt(env, 2)); /* t */
    goto v0115;

v0117:
    v0133 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0133); }
/* error exit handlers */
v0146:
    popv(3);
    return nil;
}



/* Code for lowupperlimitrd */

static Lisp_Object MS_CDECL CC_lowupperlimitrd(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0078, v0079;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "lowupperlimitrd");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lowupperlimitrd");
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
    stack[-2] = nil;
    fn = elt(env, 5); /* mathml */
    v0078 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0060;
    env = stack[-3];
    stack[0] = v0078;
    fn = elt(env, 6); /* lex */
    v0078 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0060;
    env = stack[-3];
    v0079 = qvalue(elt(env, 1)); /* char */
    v0078 = elt(env, 2); /* (!/ l o w l i m i t) */
    if (equal(v0079, v0078)) goto v0108;
    v0079 = elt(env, 3); /* "</lowlimit>" */
    v0078 = (Lisp_Object)33; /* 2 */
    fn = elt(env, 7); /* errorml */
    v0078 = (*qfn2(fn))(qenv(fn), v0079, v0078);
    nil = C_nil;
    if (exception_pending()) goto v0060;
    env = stack[-3];
    goto v0126;

v0126:
    stack[-1] = elt(env, 4); /* lowupperlimit */
    v0078 = stack[-2];
    v0078 = ncons(v0078);
    nil = C_nil;
    if (exception_pending()) goto v0060;
    {
        Lisp_Object v0046 = stack[-1];
        Lisp_Object v0091 = stack[0];
        popv(4);
        return list2star(v0046, v0091, v0078);
    }

v0108:
    fn = elt(env, 8); /* upperlimitrd */
    v0078 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0060;
    env = stack[-3];
    stack[-2] = v0078;
    goto v0126;
/* error exit handlers */
v0060:
    popv(4);
    return nil;
}



/* Code for plusrd */

static Lisp_Object MS_CDECL CC_plusrd(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0103, v0110;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "plusrd");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for plusrd");
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
    fn = elt(env, 2); /* mathml */
    v0103 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0139;
    env = stack[-1];
    v0110 = v0103;
    v0103 = v0110;
    if (v0103 == nil) goto v0102;
    stack[0] = v0110;
    v0103 = CC_plusrd(env, 0);
    nil = C_nil;
    if (exception_pending()) goto v0139;
    env = stack[-1];
    {
        Lisp_Object v0118 = stack[0];
        popv(2);
        fn = elt(env, 3); /* alg_plus */
        return (*qfn2(fn))(qenv(fn), v0118, v0103);
    }

v0102:
    v0103 = (Lisp_Object)1; /* 0 */
    { popv(2); return onevalue(v0103); }
/* error exit handlers */
v0139:
    popv(2);
    return nil;
}



/* Code for ldf!-simp */

static Lisp_Object CC_ldfKsimp(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0144, v0163;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ldf-simp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0163 = v0038;
/* end of prologue */
    v0144 = v0163;
    if (v0144 == nil) goto v0117;
    v0144 = v0163;
    v0144 = qcdr(v0144);
    if (v0144 == nil) goto v0103;
    v0144 = v0163;
    fn = elt(env, 3); /* prepf */
    v0144 = (*qfn1(fn))(qenv(fn), v0144);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-1];
    fn = elt(env, 4); /* simp */
    v0144 = (*qfn1(fn))(qenv(fn), v0144);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-1];
    v0144 = qcar(v0144);
    v0163 = v0144;
    v0144 = v0163;
    if (!consp(v0144)) goto v0089;
    v0144 = v0163;
    v0144 = qcar(v0144);
    v0144 = (consp(v0144) ? nil : lisp_true);
    goto v0091;

v0091:
    if (!(v0144 == nil)) goto v0059;
    stack[0] = v0163;
    v0144 = v0163;
    fn = elt(env, 5); /* comfac */
    v0144 = (*qfn1(fn))(qenv(fn), v0144);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-1];
    v0144 = qcdr(v0144);
    fn = elt(env, 6); /* quotf */
    v0144 = (*qfn2(fn))(qenv(fn), stack[0], v0144);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-1];
    v0163 = v0144;
    goto v0059;

v0059:
    v0144 = v0163;
    {
        popv(2);
        fn = elt(env, 7); /* absf */
        return (*qfn1(fn))(qenv(fn), v0144);
    }

v0089:
    v0144 = qvalue(elt(env, 2)); /* t */
    goto v0091;

v0103:
    v0144 = v0163;
    v0144 = qcar(v0144);
    v0144 = qcar(v0144);
    v0163 = qcar(v0144);
    v0144 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 8); /* to */
    v0163 = (*qfn2(fn))(qenv(fn), v0163, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-1];
    v0144 = (Lisp_Object)17; /* 1 */
    v0144 = cons(v0163, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-1];
    v0144 = ncons(v0144);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-1];
    fn = elt(env, 3); /* prepf */
    v0144 = (*qfn1(fn))(qenv(fn), v0144);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-1];
    fn = elt(env, 4); /* simp */
    v0144 = (*qfn1(fn))(qenv(fn), v0144);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    v0144 = qcar(v0144);
    { popv(2); return onevalue(v0144); }

v0117:
    v0144 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0144); }
/* error exit handlers */
v0125:
    popv(2);
    return nil;
}



/* Code for inszzz */

static Lisp_Object CC_inszzz(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0183, v0157;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for inszzz");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0020;
    stack[-2] = v0038;
/* end of prologue */
    stack[-3] = nil;
    goto v0109;

v0109:
    v0183 = stack[-1];
    if (v0183 == nil) goto v0003;
    v0183 = stack[-1];
    v0183 = qcar(v0183);
    v0157 = qcar(v0183);
    v0183 = stack[-2];
    v0183 = qcar(v0183);
    v0183 = (Lisp_Object)lessp2(v0157, v0183);
    nil = C_nil;
    if (exception_pending()) goto v0184;
    v0183 = v0183 ? lisp_true : nil;
    env = stack[-4];
    goto v0138;

v0138:
    if (v0183 == nil) goto v0046;
    stack[0] = stack[-3];
    v0157 = stack[-2];
    v0183 = stack[-1];
    v0183 = cons(v0157, v0183);
    nil = C_nil;
    if (exception_pending()) goto v0184;
    env = stack[-4];
    {
        Lisp_Object v0047 = stack[0];
        popv(5);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v0047, v0183);
    }

v0046:
    v0183 = stack[-1];
    v0183 = qcar(v0183);
    v0157 = qcar(v0183);
    v0183 = stack[-2];
    v0183 = qcar(v0183);
    if (equal(v0157, v0183)) goto v0185;
    v0183 = stack[-1];
    v0157 = qcar(v0183);
    v0183 = stack[-3];
    v0183 = cons(v0157, v0183);
    nil = C_nil;
    if (exception_pending()) goto v0184;
    env = stack[-4];
    stack[-3] = v0183;
    v0183 = stack[-1];
    v0183 = qcdr(v0183);
    stack[-1] = v0183;
    goto v0109;

v0185:
    v0183 = stack[-1];
    v0183 = qcar(v0183);
    stack[0] = qcdr(v0183);
    v0183 = stack[-1];
    v0183 = qcar(v0183);
    v0183 = qcdr(v0183);
    v0157 = qcar(v0183);
    v0183 = stack[-2];
    v0183 = qcdr(v0183);
    v0183 = qcar(v0183);
    fn = elt(env, 3); /* dm!-plus */
    v0183 = (*qfn2(fn))(qenv(fn), v0157, v0183);
    nil = C_nil;
    if (exception_pending()) goto v0184;
    env = stack[-4];
    v0183 = Lrplaca(nil, stack[0], v0183);
    nil = C_nil;
    if (exception_pending()) goto v0184;
    env = stack[-4];
    v0183 = stack[-1];
    v0183 = qcar(v0183);
    v0183 = qcdr(v0183);
    v0183 = qcar(v0183);
    fn = elt(env, 4); /* zeropp */
    v0183 = (*qfn1(fn))(qenv(fn), v0183);
    nil = C_nil;
    if (exception_pending()) goto v0184;
    env = stack[-4];
    if (v0183 == nil) goto v0160;
    v0157 = stack[-3];
    v0183 = stack[-1];
    v0183 = qcdr(v0183);
    {
        popv(5);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v0157, v0183);
    }

v0160:
    v0157 = stack[-3];
    v0183 = stack[-1];
    {
        popv(5);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v0157, v0183);
    }

v0003:
    v0183 = qvalue(elt(env, 1)); /* t */
    goto v0138;
/* error exit handlers */
v0184:
    popv(5);
    return nil;
}



/* Code for suspend */

static Lisp_Object MS_CDECL CC_suspend(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0186, v0074, v0129, v0075;
    Lisp_Object fn;
    Lisp_Object v0084, v0109, v0101, v0117, v0002;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 5, "suspend");
    va_start(aa, nargs);
    v0002 = va_arg(aa, Lisp_Object);
    v0117 = va_arg(aa, Lisp_Object);
    v0101 = va_arg(aa, Lisp_Object);
    v0109 = va_arg(aa, Lisp_Object);
    v0084 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for suspend");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push5(v0084,v0109,v0101,v0117,v0002);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop5(v0002,v0117,v0101,v0109,v0084);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-7] = v0084;
    v0074 = v0109;
    v0129 = v0101;
    v0075 = v0117;
    v0186 = v0002;
/* end of prologue */
    stack[-8] = qvalue(elt(env, 1)); /* op */
    qvalue(elt(env, 1)) = nil; /* op */
    stack[-6] = qvalue(elt(env, 2)); /* r */
    qvalue(elt(env, 2)) = nil; /* r */
    stack[-5] = qvalue(elt(env, 3)); /* p */
    qvalue(elt(env, 3)) = nil; /* p */
    qvalue(elt(env, 1)) = v0186; /* op */
    v0186 = v0075;
    qvalue(elt(env, 2)) = v0186; /* r */
    v0186 = v0129;
    qvalue(elt(env, 3)) = v0186; /* p */
    v0186 = qvalue(elt(env, 2)); /* r */
    stack[-4] = qcar(v0186);
    v0186 = qvalue(elt(env, 3)); /* p */
    stack[-3] = qcar(v0186);
    stack[-2] = v0074;
    stack[-1] = qvalue(elt(env, 1)); /* op */
    v0186 = qvalue(elt(env, 2)); /* r */
    stack[0] = qcdr(v0186);
    v0074 = qvalue(elt(env, 1)); /* op */
    v0186 = qvalue(elt(env, 3)); /* p */
    v0186 = qcdr(v0186);
    v0186 = cons(v0074, v0186);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-9];
    v0186 = ncons(v0186);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-9];
    v0074 = acons(stack[-1], stack[0], v0186);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-9];
    v0186 = stack[-7];
    v0186 = cons(v0074, v0186);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-9];
    fn = elt(env, 4); /* amatch */
    v0186 = (*qfnn(fn))(qenv(fn), 4, stack[-4], stack[-3], stack[-2], v0186);
    nil = C_nil;
    if (exception_pending()) goto v0125;
    env = stack[-9];
    qvalue(elt(env, 3)) = stack[-5]; /* p */
    qvalue(elt(env, 2)) = stack[-6]; /* r */
    qvalue(elt(env, 1)) = stack[-8]; /* op */
    { popv(10); return onevalue(v0186); }
/* error exit handlers */
v0125:
    env = stack[-9];
    qvalue(elt(env, 3)) = stack[-5]; /* p */
    qvalue(elt(env, 2)) = stack[-6]; /* r */
    qvalue(elt(env, 1)) = stack[-8]; /* op */
    popv(10);
    return nil;
}



/* Code for copy_mat */

static Lisp_Object CC_copy_mat(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0077, v0140;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for copy_mat");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0038;
/* end of prologue */
    stack[-1] = nil;
    goto v0101;

v0101:
    v0077 = stack[0];
    v0077 = Lconsp(nil, v0077);
    env = stack[-2];
    if (v0077 == nil) goto v0135;
    v0077 = stack[0];
    v0077 = qcar(v0077);
    v0140 = CC_copy_mat(env, v0077);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-2];
    v0077 = stack[-1];
    v0077 = cons(v0140, v0077);
    nil = C_nil;
    if (exception_pending()) goto v0141;
    env = stack[-2];
    stack[-1] = v0077;
    v0077 = stack[0];
    v0077 = qcdr(v0077);
    stack[0] = v0077;
    goto v0101;

v0135:
    v0140 = stack[-1];
    v0077 = stack[0];
    {
        popv(3);
        fn = elt(env, 1); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v0140, v0077);
    }
/* error exit handlers */
v0141:
    popv(3);
    return nil;
}



/* Code for mkupf */

static Lisp_Object CC_mkupf(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0188, v0179, v0090;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mkupf");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0188 = v0038;
/* end of prologue */
    v0179 = v0188;
    v0188 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 3); /* mksq */
    v0188 = (*qfn2(fn))(qenv(fn), v0179, v0188);
    nil = C_nil;
    if (exception_pending()) goto v0189;
    env = stack[-1];
    stack[0] = v0188;
    v0188 = stack[0];
    v0188 = qcar(v0188);
    if (v0188 == nil) goto v0006;
    v0188 = stack[0];
    v0188 = qcar(v0188);
    if (!consp(v0188)) goto v0124;
    v0188 = stack[0];
    v0188 = qcar(v0188);
    v0188 = qcar(v0188);
    v0188 = (consp(v0188) ? nil : lisp_true);
    goto v0110;

v0110:
    if (v0188 == nil) goto v0107;
    v0179 = (Lisp_Object)17; /* 1 */
    v0188 = stack[0];
    v0188 = cons(v0179, v0188);
    nil = C_nil;
    if (exception_pending()) goto v0189;
    popv(2);
    return ncons(v0188);

v0107:
    v0188 = stack[0];
    v0179 = qcdr(v0188);
    v0188 = (Lisp_Object)17; /* 1 */
    if (v0179 == v0188) goto v0129;
    v0188 = qvalue(elt(env, 1)); /* nil */
    goto v0046;

v0046:
    if (v0188 == nil) goto v0190;
    v0188 = stack[0];
    v0188 = qcar(v0188);
    v0188 = qcar(v0188);
    v0188 = qcar(v0188);
    v0090 = qcar(v0188);
    v0179 = (Lisp_Object)17; /* 1 */
    v0188 = (Lisp_Object)17; /* 1 */
    v0188 = list2star(v0090, v0179, v0188);
    nil = C_nil;
    if (exception_pending()) goto v0189;
    popv(2);
    return ncons(v0188);

v0190:
    v0188 = stack[0];
    {
        popv(2);
        fn = elt(env, 4); /* partitsq!* */
        return (*qfn1(fn))(qenv(fn), v0188);
    }

v0129:
    v0188 = stack[0];
    v0188 = qcar(v0188);
    v0188 = qcar(v0188);
    v0179 = qcdr(v0188);
    v0188 = (Lisp_Object)17; /* 1 */
    if (v0179 == v0188) goto v0186;
    v0188 = qvalue(elt(env, 1)); /* nil */
    goto v0046;

v0186:
    v0188 = stack[0];
    v0188 = qcar(v0188);
    v0188 = qcdr(v0188);
    if (v0188 == nil) goto v0123;
    v0188 = qvalue(elt(env, 1)); /* nil */
    goto v0046;

v0123:
    v0188 = stack[0];
    v0188 = qcar(v0188);
    v0188 = qcar(v0188);
    v0188 = qcar(v0188);
    v0188 = qcar(v0188);
    fn = elt(env, 5); /* sfp */
    v0188 = (*qfn1(fn))(qenv(fn), v0188);
    nil = C_nil;
    if (exception_pending()) goto v0189;
    env = stack[-1];
    v0188 = (v0188 == nil ? lisp_true : nil);
    goto v0046;

v0124:
    v0188 = qvalue(elt(env, 2)); /* t */
    goto v0110;

v0006:
    v0188 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0188); }
/* error exit handlers */
v0189:
    popv(2);
    return nil;
}



/* Code for getupper */

static Lisp_Object CC_getupper(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0115, v0138;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for getupper");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0115 = v0038;
/* end of prologue */
    v0138 = qvalue(elt(env, 1)); /* metricu!* */
    v0115 = Latsoc(nil, v0115, v0138);
    v0115 = qcdr(v0115);
    return onevalue(v0115);
}



/* Code for s_noparents */

static Lisp_Object CC_s_noparents(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0076, v0077;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for s_noparents");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0038;
/* end of prologue */
    stack[-1] = nil;
    goto v0101;

v0101:
    v0076 = stack[0];
    if (v0076 == nil) goto v0102;
    v0076 = stack[0];
    v0076 = qcar(v0076);
    fn = elt(env, 1); /* has_parents */
    v0076 = (*qfn1(fn))(qenv(fn), v0076);
    nil = C_nil;
    if (exception_pending()) goto v0137;
    env = stack[-2];
    if (v0076 == nil) goto v0110;
    v0076 = stack[0];
    v0076 = qcdr(v0076);
    stack[0] = v0076;
    goto v0101;

v0110:
    v0076 = stack[0];
    v0077 = qcar(v0076);
    v0076 = stack[-1];
    v0076 = cons(v0077, v0076);
    nil = C_nil;
    if (exception_pending()) goto v0137;
    env = stack[-2];
    stack[-1] = v0076;
    v0076 = stack[0];
    v0076 = qcdr(v0076);
    stack[0] = v0076;
    goto v0101;

v0102:
    v0076 = stack[-1];
    {
        popv(3);
        fn = elt(env, 2); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0076);
    }
/* error exit handlers */
v0137:
    popv(3);
    return nil;
}



/* Code for xremf */

static Lisp_Object MS_CDECL CC_xremf(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0227, v0228, v0229;
    Lisp_Object fn;
    Lisp_Object v0019, v0020, v0038;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "xremf");
    va_start(aa, nargs);
    v0038 = va_arg(aa, Lisp_Object);
    v0020 = va_arg(aa, Lisp_Object);
    v0019 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for xremf");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0019,v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0038,v0020,v0019);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-5] = v0019;
    stack[-6] = v0020;
    stack[-7] = v0038;
/* end of prologue */
    stack[-1] = nil;
    v0227 = (Lisp_Object)1; /* 0 */
    stack[-8] = v0227;
    v0227 = stack[-6];
    if (!consp(v0227)) goto v0103;
    v0227 = stack[-6];
    v0227 = qcar(v0227);
    v0227 = (consp(v0227) ? nil : lisp_true);
    goto v0106;

v0106:
    if (v0227 == nil) goto v0113;
    v0228 = stack[-7];
    v0227 = stack[-6];
    fn = elt(env, 3); /* qremd */
    v0227 = (*qfn2(fn))(qenv(fn), v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    v0227 = qcdr(v0227);
    popv(10);
    return ncons(v0227);

v0113:
    v0227 = stack[-7];
    fn = elt(env, 4); /* termsf */
    v0227 = (*qfn1(fn))(qenv(fn), v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[0] = v0227;
    goto v0091;

v0091:
    v0228 = stack[-5];
    v0227 = (Lisp_Object)1; /* 0 */
    v0227 = (Lisp_Object)lesseq2(v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    v0227 = v0227 ? lisp_true : nil;
    env = stack[-9];
    if (v0227 == nil) goto v0060;
    v0227 = qvalue(elt(env, 2)); /* nil */
    { popv(10); return onevalue(v0227); }

v0060:
    v0227 = stack[-7];
    if (!consp(v0227)) goto v0186;
    v0227 = stack[-7];
    v0227 = qcar(v0227);
    v0227 = (consp(v0227) ? nil : lisp_true);
    goto v0167;

v0167:
    if (v0227 == nil) goto v0172;
    v0228 = stack[-1];
    v0227 = stack[-7];
    fn = elt(env, 5); /* addf */
    v0227 = (*qfn2(fn))(qenv(fn), v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    popv(10);
    return ncons(v0227);

v0172:
    v0227 = stack[-7];
    v0227 = qcar(v0227);
    v0227 = qcar(v0227);
    v0228 = qcar(v0227);
    v0227 = stack[-6];
    v0227 = qcar(v0227);
    v0227 = qcar(v0227);
    v0227 = qcar(v0227);
    if (v0228 == v0227) goto v0231;
    v0227 = stack[-7];
    v0227 = qcar(v0227);
    v0227 = qcar(v0227);
    v0228 = qcar(v0227);
    v0227 = stack[-6];
    v0227 = qcar(v0227);
    v0227 = qcar(v0227);
    v0227 = qcar(v0227);
    fn = elt(env, 6); /* ordop */
    v0227 = (*qfn2(fn))(qenv(fn), v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    if (v0227 == nil) goto v0232;
    v0228 = stack[-5];
    v0227 = stack[-8];
    v0227 = plus2(v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-5] = v0227;
    v0227 = stack[-7];
    v0227 = qcar(v0227);
    v0229 = qcdr(v0227);
    v0228 = stack[-6];
    v0227 = stack[-5];
    v0227 = CC_xremf(env, 3, v0229, v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-3] = v0227;
    v0227 = stack[-3];
    if (v0227 == nil) goto v0233;
    v0227 = stack[-7];
    v0227 = qcar(v0227);
    v0228 = qcar(v0227);
    v0227 = (Lisp_Object)17; /* 1 */
    v0227 = cons(v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    v0228 = ncons(v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    v0227 = stack[-3];
    v0227 = qcar(v0227);
    fn = elt(env, 7); /* multf */
    v0227 = (*qfn2(fn))(qenv(fn), v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    fn = elt(env, 5); /* addf */
    v0227 = (*qfn2(fn))(qenv(fn), stack[-1], v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-1] = v0227;
    v0227 = stack[-1];
    fn = elt(env, 4); /* termsf */
    v0227 = (*qfn1(fn))(qenv(fn), v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-8] = v0227;
    v0228 = stack[-5];
    v0227 = stack[-8];
    v0227 = difference2(v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-5] = v0227;
    v0227 = stack[-7];
    v0227 = qcdr(v0227);
    stack[-7] = v0227;
    goto v0091;

v0233:
    v0227 = qvalue(elt(env, 2)); /* nil */
    { popv(10); return onevalue(v0227); }

v0232:
    v0228 = stack[-1];
    v0227 = stack[-7];
    fn = elt(env, 5); /* addf */
    v0227 = (*qfn2(fn))(qenv(fn), v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    popv(10);
    return ncons(v0227);

v0231:
    v0227 = stack[-7];
    v0227 = qcar(v0227);
    v0227 = qcar(v0227);
    v0228 = qcdr(v0227);
    v0227 = stack[-6];
    v0227 = qcar(v0227);
    v0227 = qcar(v0227);
    v0227 = qcdr(v0227);
    v0228 = difference2(v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-4] = v0228;
    v0227 = (Lisp_Object)1; /* 0 */
    v0227 = (Lisp_Object)lessp2(v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    v0227 = v0227 ? lisp_true : nil;
    env = stack[-9];
    if (v0227 == nil) goto v0234;
    v0228 = stack[-1];
    v0227 = stack[-7];
    fn = elt(env, 5); /* addf */
    v0227 = (*qfn2(fn))(qenv(fn), v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    popv(10);
    return ncons(v0227);

v0234:
    v0227 = stack[-7];
    v0227 = qcar(v0227);
    v0228 = qcdr(v0227);
    v0227 = stack[-6];
    v0227 = qcar(v0227);
    v0227 = qcdr(v0227);
    fn = elt(env, 8); /* qremf */
    v0227 = (*qfn2(fn))(qenv(fn), v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-3] = v0227;
    v0227 = stack[-7];
    v0227 = qcar(v0227);
    v0228 = qcar(v0227);
    v0227 = (Lisp_Object)17; /* 1 */
    v0227 = cons(v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    v0228 = ncons(v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    v0227 = stack[-3];
    v0227 = qcdr(v0227);
    fn = elt(env, 7); /* multf */
    v0227 = (*qfn2(fn))(qenv(fn), v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-2] = v0227;
    v0228 = stack[-5];
    v0227 = stack[-8];
    v0227 = plus2(v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-5] = v0227;
    v0228 = stack[-1];
    v0227 = stack[-2];
    fn = elt(env, 5); /* addf */
    v0227 = (*qfn2(fn))(qenv(fn), v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-1] = v0227;
    v0227 = stack[-1];
    fn = elt(env, 4); /* termsf */
    v0227 = (*qfn1(fn))(qenv(fn), v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-8] = v0227;
    v0228 = stack[-5];
    v0227 = stack[-8];
    v0228 = difference2(v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    v0227 = stack[0];
    v0227 = plus2(v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-5] = v0227;
    v0227 = stack[-3];
    v0227 = qcar(v0227);
    if (v0227 == nil) goto v0235;
    stack[0] = stack[-7];
    v0228 = stack[-4];
    v0227 = (Lisp_Object)1; /* 0 */
    if (v0228 == v0227) goto v0236;
    v0227 = stack[-7];
    v0227 = qcar(v0227);
    v0227 = qcar(v0227);
    v0228 = qcar(v0227);
    v0227 = stack[-4];
    fn = elt(env, 9); /* to */
    v0228 = (*qfn2(fn))(qenv(fn), v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    v0227 = (Lisp_Object)17; /* 1 */
    v0227 = cons(v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    v0228 = ncons(v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    v0227 = stack[-6];
    fn = elt(env, 7); /* multf */
    v0227 = (*qfn2(fn))(qenv(fn), v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-4] = v0227;
    goto v0094;

v0094:
    v0227 = stack[-3];
    v0227 = qcar(v0227);
    fn = elt(env, 10); /* negf */
    v0227 = (*qfn1(fn))(qenv(fn), v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    fn = elt(env, 7); /* multf */
    v0227 = (*qfn2(fn))(qenv(fn), stack[-4], v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    fn = elt(env, 5); /* addf */
    stack[0] = (*qfn2(fn))(qenv(fn), stack[0], v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    v0227 = stack[-2];
    fn = elt(env, 10); /* negf */
    v0227 = (*qfn1(fn))(qenv(fn), v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    fn = elt(env, 5); /* addf */
    v0227 = (*qfn2(fn))(qenv(fn), stack[0], v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    goto v0237;

v0237:
    stack[-7] = v0227;
    v0227 = stack[-7];
    fn = elt(env, 4); /* termsf */
    v0227 = (*qfn1(fn))(qenv(fn), v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[0] = v0227;
    v0228 = stack[-5];
    v0227 = stack[0];
    v0227 = difference2(v0228, v0227);
    nil = C_nil;
    if (exception_pending()) goto v0230;
    env = stack[-9];
    stack[-5] = v0227;
    goto v0091;

v0236:
    v0227 = stack[-6];
    stack[-4] = v0227;
    goto v0094;

v0235:
    v0227 = stack[-7];
    v0227 = qcdr(v0227);
    goto v0237;

v0186:
    v0227 = qvalue(elt(env, 1)); /* t */
    goto v0167;

v0103:
    v0227 = qvalue(elt(env, 1)); /* t */
    goto v0106;
/* error exit handlers */
v0230:
    popv(10);
    return nil;
}



/* Code for cali!=min */

static Lisp_Object MS_CDECL CC_caliMmin(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0105, v0185, v0167;
    Lisp_Object fn;
    Lisp_Object v0019, v0020, v0038;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "cali=min");
    va_start(aa, nargs);
    v0038 = va_arg(aa, Lisp_Object);
    v0020 = va_arg(aa, Lisp_Object);
    v0019 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for cali=min");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0019,v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0038,v0020,v0019);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0019;
    stack[-1] = v0020;
    stack[-2] = v0038;
/* end of prologue */

v0109:
    v0105 = stack[-1];
    if (v0105 == nil) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v0167 = stack[-2];
    v0105 = stack[-1];
    v0185 = qcar(v0105);
    v0105 = stack[0];
    fn = elt(env, 1); /* listtest */
    v0105 = (*qfnn(fn))(qenv(fn), 3, v0167, v0185, v0105);
    nil = C_nil;
    if (exception_pending()) goto v0075;
    env = stack[-3];
    if (!(v0105 == nil)) goto v0003;
    v0105 = stack[-1];
    v0167 = qcdr(v0105);
    v0105 = stack[-1];
    v0185 = qcar(v0105);
    v0105 = stack[0];
    fn = elt(env, 1); /* listtest */
    v0105 = (*qfnn(fn))(qenv(fn), 3, v0167, v0185, v0105);
    nil = C_nil;
    if (exception_pending()) goto v0075;
    env = stack[-3];
    if (!(v0105 == nil)) goto v0003;
    v0105 = stack[-1];
    v0185 = qcar(v0105);
    v0105 = stack[-2];
    v0105 = cons(v0185, v0105);
    nil = C_nil;
    if (exception_pending()) goto v0075;
    env = stack[-3];
    stack[-2] = v0105;
    v0105 = stack[-1];
    v0105 = qcdr(v0105);
    stack[-1] = v0105;
    goto v0109;

v0003:
    v0105 = stack[-1];
    v0105 = qcdr(v0105);
    stack[-1] = v0105;
    goto v0109;
/* error exit handlers */
v0075:
    popv(4);
    return nil;
}



/* Code for pst_subpst */

static Lisp_Object CC_pst_subpst(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0003, v0041;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pst_subpst");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0041 = v0020;
    v0003 = v0038;
/* end of prologue */
    stack[0] = qcdr(v0003);
    v0003 = v0041;
    v0003 = sub1(v0003);
    nil = C_nil;
    if (exception_pending()) goto v0112;
    v0003 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v0003/(16/CELL)));
    { popv(1); return onevalue(v0003); }
/* error exit handlers */
v0112:
    popv(1);
    return nil;
}



/* Code for lpos */

static Lisp_Object CC_lpos(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0085, v0116, v0126, v0119;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lpos");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0126 = v0020;
    v0119 = v0038;
/* end of prologue */
    v0116 = v0119;
    v0085 = v0126;
    v0085 = qcar(v0085);
    if (v0116 == v0085) goto v0101;
    v0085 = v0119;
    v0116 = v0126;
    v0116 = qcdr(v0116);
    v0085 = CC_lpos(env, v0085, v0116);
    errexit();
    return add1(v0085);

v0101:
    v0085 = (Lisp_Object)17; /* 1 */
    return onevalue(v0085);
}



/* Code for bfrsq */

static Lisp_Object CC_bfrsq(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0167, v0186;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for bfrsq");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v0186 = v0038;
/* end of prologue */
    v0167 = v0186;
    v0167 = qcar(v0167);
    v0186 = qcdr(v0186);
    stack[-1] = v0186;
    v0186 = v0167;
    if (!consp(v0186)) goto v0121;
    v0186 = v0167;
    fn = elt(env, 1); /* csl_timbf */
    stack[0] = (*qfn2(fn))(qenv(fn), v0186, v0167);
    nil = C_nil;
    if (exception_pending()) goto v0075;
    env = stack[-2];
    v0186 = stack[-1];
    v0167 = stack[-1];
    fn = elt(env, 1); /* csl_timbf */
    v0167 = (*qfn2(fn))(qenv(fn), v0186, v0167);
    nil = C_nil;
    if (exception_pending()) goto v0075;
    env = stack[-2];
    {
        Lisp_Object v0100 = stack[0];
        popv(3);
        fn = elt(env, 2); /* plubf */
        return (*qfn2(fn))(qenv(fn), v0100, v0167);
    }

v0121:
    v0186 = v0167;
    stack[0] = times2(v0186, v0167);
    nil = C_nil;
    if (exception_pending()) goto v0075;
    env = stack[-2];
    v0186 = stack[-1];
    v0167 = stack[-1];
    v0167 = times2(v0186, v0167);
    nil = C_nil;
    if (exception_pending()) goto v0075;
    {
        Lisp_Object v0072 = stack[0];
        popv(3);
        return plus2(v0072, v0167);
    }
/* error exit handlers */
v0075:
    popv(3);
    return nil;
}



/* Code for read!-comment1 */

static Lisp_Object CC_readKcomment1(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0130, v0097;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for read-comment1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v0130 = v0038;
/* end of prologue */
    stack[-1] = qvalue(elt(env, 1)); /* !*lower */
    qvalue(elt(env, 1)) = nil; /* !*lower */
    stack[0] = qvalue(elt(env, 2)); /* !*raise */
    qvalue(elt(env, 2)) = nil; /* !*raise */
    v0130 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 4)) = v0130; /* named!-character!* */
    goto v0109;

v0109:
    v0130 = qvalue(elt(env, 4)); /* named!-character!* */
    if (!(v0130 == nil)) goto v0128;
    v0130 = qvalue(elt(env, 5)); /* crchar!* */
    fn = elt(env, 9); /* id2string */
    v0130 = (*qfn1(fn))(qenv(fn), v0130);
    nil = C_nil;
    if (exception_pending()) goto v0143;
    env = stack[-2];
    fn = elt(env, 10); /* string!-length */
    v0097 = (*qfn1(fn))(qenv(fn), v0130);
    nil = C_nil;
    if (exception_pending()) goto v0143;
    env = stack[-2];
    v0130 = (Lisp_Object)17; /* 1 */
    if (v0097 == v0130) goto v0116;
    v0130 = qvalue(elt(env, 6)); /* t */
    goto v0112;

v0112:
    if (!(v0130 == nil)) goto v0128;
    v0130 = elt(env, 8); /* !  */
    qvalue(elt(env, 5)) = v0130; /* crchar!* */
    fn = elt(env, 11); /* condterpri */
    v0130 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0143;
    env = stack[-2];
    v0130 = nil;
    qvalue(elt(env, 2)) = stack[0]; /* !*raise */
    qvalue(elt(env, 1)) = stack[-1]; /* !*lower */
    { popv(3); return onevalue(v0130); }

v0128:
    v0130 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 4)) = v0130; /* named!-character!* */
    fn = elt(env, 12); /* readch1 */
    v0130 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0143;
    env = stack[-2];
    qvalue(elt(env, 5)) = v0130; /* crchar!* */
    goto v0109;

v0116:
    v0130 = qvalue(elt(env, 5)); /* crchar!* */
    fn = elt(env, 13); /* delcp */
    v0130 = (*qfn1(fn))(qenv(fn), v0130);
    nil = C_nil;
    if (exception_pending()) goto v0143;
    env = stack[-2];
    if (v0130 == nil) goto v0076;
    v0097 = qvalue(elt(env, 5)); /* crchar!* */
    v0130 = qvalue(elt(env, 7)); /* !$eol!$ */
    v0130 = (v0097 == v0130 ? lisp_true : nil);
    goto v0112;

v0076:
    v0130 = qvalue(elt(env, 6)); /* t */
    goto v0112;
/* error exit handlers */
v0143:
    env = stack[-2];
    qvalue(elt(env, 2)) = stack[0]; /* !*raise */
    qvalue(elt(env, 1)) = stack[-1]; /* !*lower */
    popv(3);
    return nil;
}



/* Code for ofsf_evalatp */

static Lisp_Object CC_ofsf_evalatp(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0239, v0182, v0240;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ofsf_evalatp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0020;
    v0240 = v0038;
/* end of prologue */
    v0182 = v0240;
    v0239 = elt(env, 1); /* equal */
    if (v0182 == v0239) goto v0101;
    v0182 = v0240;
    v0239 = elt(env, 2); /* neq */
    if (v0182 == v0239) goto v0112;
    v0182 = v0240;
    v0239 = elt(env, 3); /* leq */
    if (v0182 == v0239) goto v0085;
    v0182 = v0240;
    v0239 = elt(env, 4); /* geq */
    if (v0182 == v0239) goto v0059;
    v0182 = v0240;
    v0239 = elt(env, 5); /* lessp */
    if (v0182 == v0239) goto v0143;
    v0182 = v0240;
    v0239 = elt(env, 6); /* greaterp */
    if (v0182 == v0239) goto v0104;
    v0239 = elt(env, 7); /* "ofsf_evalatp: unknown operator " */
    v0182 = v0240;
    v0239 = list2(v0239, v0182);
    nil = C_nil;
    if (exception_pending()) goto v0159;
    env = stack[-1];
    {
        popv(2);
        fn = elt(env, 8); /* rederr */
        return (*qfn1(fn))(qenv(fn), v0239);
    }

v0104:
    v0239 = stack[0];
    fn = elt(env, 9); /* minusf */
    v0239 = (*qfn1(fn))(qenv(fn), v0239);
    nil = C_nil;
    if (exception_pending()) goto v0159;
    if (!(v0239 == nil)) goto v0133;
    v0239 = stack[0];
    v0239 = (v0239 == nil ? lisp_true : nil);
    goto v0133;

v0133:
    v0239 = (v0239 == nil ? lisp_true : nil);
    { popv(2); return onevalue(v0239); }

v0143:
    v0239 = stack[0];
    {
        popv(2);
        fn = elt(env, 9); /* minusf */
        return (*qfn1(fn))(qenv(fn), v0239);
    }

v0059:
    v0239 = stack[0];
    fn = elt(env, 9); /* minusf */
    v0239 = (*qfn1(fn))(qenv(fn), v0239);
    nil = C_nil;
    if (exception_pending()) goto v0159;
    v0239 = (v0239 == nil ? lisp_true : nil);
    { popv(2); return onevalue(v0239); }

v0085:
    v0239 = stack[0];
    fn = elt(env, 9); /* minusf */
    v0239 = (*qfn1(fn))(qenv(fn), v0239);
    nil = C_nil;
    if (exception_pending()) goto v0159;
    if (!(v0239 == nil)) { popv(2); return onevalue(v0239); }
    v0239 = stack[0];
    v0239 = (v0239 == nil ? lisp_true : nil);
    { popv(2); return onevalue(v0239); }

v0112:
    v0239 = stack[0];
    v0239 = (v0239 == nil ? lisp_true : nil);
    v0239 = (v0239 == nil ? lisp_true : nil);
    { popv(2); return onevalue(v0239); }

v0101:
    v0239 = stack[0];
    v0239 = (v0239 == nil ? lisp_true : nil);
    { popv(2); return onevalue(v0239); }
/* error exit handlers */
v0159:
    popv(2);
    return nil;
}



/* Code for rl_onp */

static Lisp_Object CC_rl_onp(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0006;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rl_onp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0038;
/* end of prologue */
    v0006 = elt(env, 1); /* !* */
    stack[-1] = Lexplode(nil, v0006);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-2];
    v0006 = stack[0];
    v0006 = Lexplode(nil, v0006);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-2];
    v0006 = Lappend(nil, stack[-1], v0006);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-2];
    v0006 = Lcompress(nil, v0006);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-2];
    v0006 = Lintern(nil, v0006);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-2];
    {
        popv(3);
        fn = elt(env, 2); /* eval */
        return (*qfn1(fn))(qenv(fn), v0006);
    }
/* error exit handlers */
v0114:
    popv(3);
    return nil;
}



/* Code for rl_multsurep */

static Lisp_Object CC_rl_multsurep(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0114, v0120;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rl_multsurep");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0114 = v0020;
    v0120 = v0038;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* rl_multsurep!* */
    v0114 = list2(v0120, v0114);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-1];
    {
        Lisp_Object v0103 = stack[0];
        popv(2);
        fn = elt(env, 2); /* apply */
        return (*qfn2(fn))(qenv(fn), v0103, v0114);
    }
/* error exit handlers */
v0106:
    popv(2);
    return nil;
}



/* Code for matrixrd */

static Lisp_Object MS_CDECL CC_matrixrd(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0176, v0062;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "matrixrd");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for matrixrd");
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
    push2(nil, nil);
/* end of prologue */
    v0176 = (Lisp_Object)1; /* 0 */
    stack[-1] = v0176;
    v0176 = nil;
    stack[0] = v0176;
    goto v0112;

v0112:
    v0062 = stack[-1];
    v0176 = (Lisp_Object)1; /* 0 */
    if (v0062 == v0176) goto v0003;
    v0062 = elt(env, 6); /* mat */
    v0176 = stack[0];
    v0176 = cons(v0062, v0176);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    env = stack[-2];
    {
        popv(3);
        fn = elt(env, 7); /* aeval */
        return (*qfn1(fn))(qenv(fn), v0176);
    }

v0003:
    fn = elt(env, 8); /* lex */
    v0176 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    env = stack[-2];
    v0062 = qvalue(elt(env, 2)); /* char */
    v0176 = elt(env, 3); /* (m a t r i x r o w) */
    if (equal(v0062, v0176)) goto v0135;
    v0176 = (Lisp_Object)17; /* 1 */
    stack[-1] = v0176;
    goto v0112;

v0135:
    fn = elt(env, 9); /* matrixrowrd */
    v0176 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    env = stack[-2];
    v0062 = v0176;
    v0176 = stack[0];
    if (v0176 == nil) goto v0087;
    v0176 = v0062;
    v0176 = ncons(v0176);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    env = stack[-2];
    v0176 = Lappend(nil, stack[0], v0176);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    env = stack[-2];
    stack[0] = v0176;
    goto v0167;

v0167:
    v0062 = qvalue(elt(env, 2)); /* char */
    v0176 = elt(env, 4); /* (!/ m a t r i x r o w) */
    if (equal(v0062, v0176)) goto v0112;
    v0062 = elt(env, 5); /* "</matrixrow>" */
    v0176 = (Lisp_Object)33; /* 2 */
    fn = elt(env, 10); /* errorml */
    v0176 = (*qfn2(fn))(qenv(fn), v0062, v0176);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    env = stack[-2];
    goto v0112;

v0087:
    v0176 = v0062;
    v0176 = ncons(v0176);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    env = stack[-2];
    stack[0] = v0176;
    goto v0167;
/* error exit handlers */
v0170:
    popv(3);
    return nil;
}



/* Code for compl */

static Lisp_Object CC_compl(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0099, v0078, v0079;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for compl");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0020;
    stack[-1] = v0038;
/* end of prologue */
    v0079 = nil;
    goto v0109;

v0109:
    v0099 = stack[-1];
    if (v0099 == nil) goto v0108;
    v0099 = stack[-1];
    v0078 = qcar(v0099);
    v0099 = stack[0];
    v0099 = Lmember(nil, v0078, v0099);
    if (v0099 == nil) goto v0126;
    v0099 = stack[-1];
    v0099 = qcdr(v0099);
    stack[-1] = v0099;
    goto v0109;

v0126:
    v0099 = stack[-1];
    v0099 = qcar(v0099);
    v0078 = v0079;
    v0099 = cons(v0099, v0078);
    nil = C_nil;
    if (exception_pending()) goto v0061;
    env = stack[-2];
    v0079 = v0099;
    v0099 = stack[-1];
    v0099 = qcdr(v0099);
    stack[-1] = v0099;
    goto v0109;

v0108:
    v0099 = v0079;
    {
        popv(3);
        fn = elt(env, 1); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0099);
    }
/* error exit handlers */
v0061:
    popv(3);
    return nil;
}



/* Code for spcol_dim */

static Lisp_Object CC_spcol_dim(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0085;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for spcol_dim");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0038;
/* end of prologue */
    v0085 = qvalue(elt(env, 1)); /* !*fast_la */
    if (v0085 == nil) goto v0115;
    v0085 = qvalue(elt(env, 2)); /* nil */
    goto v0128;

v0128:
    if (v0085 == nil) goto v0109;
    v0085 = elt(env, 3); /* "Error in spcol_dim: input should be a matrix." 
*/
    fn = elt(env, 4); /* rederr */
    v0085 = (*qfn1(fn))(qenv(fn), v0085);
    nil = C_nil;
    if (exception_pending()) goto v0126;
    env = stack[-1];
    goto v0109;

v0109:
    v0085 = stack[0];
    fn = elt(env, 5); /* spmatlength */
    v0085 = (*qfn1(fn))(qenv(fn), v0085);
    nil = C_nil;
    if (exception_pending()) goto v0126;
    v0085 = qcdr(v0085);
    v0085 = qcdr(v0085);
    v0085 = qcar(v0085);
    { popv(2); return onevalue(v0085); }

v0115:
    v0085 = stack[0];
    fn = elt(env, 6); /* matrixp */
    v0085 = (*qfn1(fn))(qenv(fn), v0085);
    nil = C_nil;
    if (exception_pending()) goto v0126;
    env = stack[-1];
    v0085 = (v0085 == nil ? lisp_true : nil);
    goto v0128;
/* error exit handlers */
v0126:
    popv(2);
    return nil;
}



/* Code for mkbc */

static Lisp_Object CC_mkbc(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0161, v0187;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mkbc");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0020;
    stack[-1] = v0038;
/* end of prologue */

v0101:
    v0161 = stack[-1];
    v0161 = (is_number(v0161) ? lisp_true : nil);
    if (!(v0161 == nil)) goto v0084;
    v0161 = stack[-1];
    fn = elt(env, 3); /* f2dip11 */
    v0161 = (*qfn1(fn))(qenv(fn), v0161);
    nil = C_nil;
    if (exception_pending()) goto v0066;
    env = stack[-3];
    goto v0084;

v0084:
    v0161 = stack[0];
    v0161 = (is_number(v0161) ? lisp_true : nil);
    if (!(v0161 == nil)) goto v0041;
    v0161 = stack[0];
    fn = elt(env, 3); /* f2dip11 */
    v0161 = (*qfn1(fn))(qenv(fn), v0161);
    nil = C_nil;
    if (exception_pending()) goto v0066;
    env = stack[-3];
    goto v0041;

v0041:
    v0161 = qvalue(elt(env, 1)); /* !*grmod!* */
    if (v0161 == nil) goto v0137;
    v0161 = stack[0];
    v0161 = Lmodular_reciprocal(nil, v0161);
    nil = C_nil;
    if (exception_pending()) goto v0066;
    env = stack[-3];
    v0161 = times2(stack[-1], v0161);
    nil = C_nil;
    if (exception_pending()) goto v0066;
    env = stack[-3];
    {
        popv(4);
        fn = elt(env, 4); /* bcfi */
        return (*qfn1(fn))(qenv(fn), v0161);
    }

v0137:
    v0187 = stack[0];
    v0161 = (Lisp_Object)17; /* 1 */
    if (v0187 == v0161) goto v0091;
    v0161 = stack[0];
    fn = elt(env, 5); /* minusf */
    v0161 = (*qfn1(fn))(qenv(fn), v0161);
    nil = C_nil;
    if (exception_pending()) goto v0066;
    env = stack[-3];
    if (v0161 == nil) goto v0133;
    v0161 = stack[-1];
    fn = elt(env, 6); /* negf */
    v0161 = (*qfn1(fn))(qenv(fn), v0161);
    nil = C_nil;
    if (exception_pending()) goto v0066;
    env = stack[-3];
    stack[-1] = v0161;
    v0161 = stack[0];
    fn = elt(env, 6); /* negf */
    v0161 = (*qfn1(fn))(qenv(fn), v0161);
    nil = C_nil;
    if (exception_pending()) goto v0066;
    env = stack[-3];
    stack[0] = v0161;
    goto v0101;

v0133:
    v0187 = stack[-1];
    v0161 = stack[0];
    fn = elt(env, 7); /* gcdf */
    v0161 = (*qfn2(fn))(qenv(fn), v0187, v0161);
    nil = C_nil;
    if (exception_pending()) goto v0066;
    env = stack[-3];
    stack[-2] = v0161;
    v0187 = stack[-1];
    v0161 = stack[-2];
    fn = elt(env, 8); /* quotfx */
    stack[-1] = (*qfn2(fn))(qenv(fn), v0187, v0161);
    nil = C_nil;
    if (exception_pending()) goto v0066;
    env = stack[-3];
    v0187 = stack[0];
    v0161 = stack[-2];
    fn = elt(env, 8); /* quotfx */
    v0161 = (*qfn2(fn))(qenv(fn), v0187, v0161);
    nil = C_nil;
    if (exception_pending()) goto v0066;
    {
        Lisp_Object v0243 = stack[-1];
        popv(4);
        return cons(v0243, v0161);
    }

v0091:
    v0187 = stack[-1];
    v0161 = (Lisp_Object)17; /* 1 */
    if (v0187 == v0161) goto v0060;
    v0187 = stack[-1];
    v0161 = stack[0];
    popv(4);
    return cons(v0187, v0161);

v0060:
    v0161 = elt(env, 2); /* (1 . 1) */
    { popv(4); return onevalue(v0161); }
/* error exit handlers */
v0066:
    popv(4);
    return nil;
}



/* Code for applysetop */

static Lisp_Object CC_applysetop(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0259, v0028, v0260;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for applysetop");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    v0028 = v0020;
    stack[-6] = v0038;
/* end of prologue */
    stack[-5] = nil;
    v0259 = (Lisp_Object)1; /* 0 */
    stack[-7] = v0259;
    v0259 = v0028;
    stack[-4] = v0259;
    v0259 = stack[-4];
    if (v0259 == nil) goto v0114;
    v0259 = stack[-4];
    v0259 = qcar(v0259);
    stack[0] = v0259;
    v0259 = stack[0];
    fn = elt(env, 6); /* reval */
    v0028 = (*qfn1(fn))(qenv(fn), v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    stack[0] = v0028;
    v0259 = elt(env, 2); /* list */
    if (!consp(v0028)) goto v0116;
    v0028 = qcar(v0028);
    if (!(v0028 == v0259)) goto v0116;
    v0259 = stack[0];
    v0259 = qcdr(v0259);
    fn = elt(env, 7); /* delete!-dups */
    v0259 = (*qfn1(fn))(qenv(fn), v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    stack[0] = v0259;
    v0028 = stack[-7];
    v0259 = (Lisp_Object)1; /* 0 */
    if (v0028 == v0259) goto v0059;
    v0260 = stack[-6];
    v0028 = stack[-7];
    v0259 = stack[0];
    v0259 = Lapply2(nil, 3, v0260, v0028, v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    goto v0136;

v0136:
    stack[-7] = v0259;
    v0259 = stack[0];
    fn = elt(env, 8); /* make!-set */
    v0259 = (*qfn1(fn))(qenv(fn), v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    goto v0135;

v0135:
    v0259 = ncons(v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    stack[-2] = v0259;
    stack[-3] = v0259;
    goto v0041;

v0041:
    v0259 = stack[-4];
    v0259 = qcdr(v0259);
    stack[-4] = v0259;
    v0259 = stack[-4];
    if (v0259 == nil) goto v0261;
    stack[-1] = stack[-2];
    v0259 = stack[-4];
    v0259 = qcar(v0259);
    stack[0] = v0259;
    v0259 = stack[0];
    fn = elt(env, 6); /* reval */
    v0028 = (*qfn1(fn))(qenv(fn), v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    stack[0] = v0028;
    v0259 = elt(env, 2); /* list */
    if (!consp(v0028)) goto v0051;
    v0028 = qcar(v0028);
    if (!(v0028 == v0259)) goto v0051;
    v0259 = stack[0];
    v0259 = qcdr(v0259);
    fn = elt(env, 7); /* delete!-dups */
    v0259 = (*qfn1(fn))(qenv(fn), v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    stack[0] = v0259;
    v0028 = stack[-7];
    v0259 = (Lisp_Object)1; /* 0 */
    if (v0028 == v0259) goto v0262;
    v0260 = stack[-6];
    v0028 = stack[-7];
    v0259 = stack[0];
    v0259 = Lapply2(nil, 3, v0260, v0028, v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    goto v0168;

v0168:
    stack[-7] = v0259;
    v0259 = stack[0];
    fn = elt(env, 8); /* make!-set */
    v0259 = (*qfn1(fn))(qenv(fn), v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    goto v0263;

v0263:
    v0259 = ncons(v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    v0259 = Lrplacd(nil, stack[-1], v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    v0259 = stack[-2];
    v0259 = qcdr(v0259);
    stack[-2] = v0259;
    goto v0041;

v0262:
    v0259 = stack[0];
    goto v0168;

v0051:
    v0259 = stack[0];
    if (symbolp(v0259)) goto v0264;
    v0259 = stack[0];
    v0259 = Lconsp(nil, v0259);
    env = stack[-8];
    if (v0259 == nil) goto v0209;
    v0259 = stack[0];
    v0028 = qcar(v0259);
    v0259 = elt(env, 3); /* setvalued */
    v0259 = Lflagp(nil, v0028, v0259);
    env = stack[-8];
    if (!(v0259 == nil)) goto v0264;

v0209:
    v0028 = stack[0];
    v0259 = elt(env, 4); /* "set" */
    fn = elt(env, 9); /* typerr */
    v0259 = (*qfn2(fn))(qenv(fn), v0028, v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    goto v0263;

v0264:
    v0028 = stack[0];
    v0259 = stack[-5];
    v0259 = Lmember(nil, v0028, v0259);
    if (!(v0259 == nil)) goto v0147;
    v0028 = stack[0];
    v0259 = stack[-5];
    v0259 = cons(v0028, v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    stack[-5] = v0259;
    goto v0147;

v0147:
    v0259 = stack[0];
    goto v0263;

v0261:
    v0259 = stack[-3];
    goto v0003;

v0003:
    v0260 = v0259;
    v0259 = stack[-5];
    if (v0259 == nil) goto v0205;
    stack[0] = stack[-6];
    v0028 = stack[-6];
    v0259 = elt(env, 5); /* setdiff */
    if (v0028 == v0259) goto v0265;
    v0028 = stack[-7];
    v0259 = (Lisp_Object)1; /* 0 */
    if (v0028 == v0259) goto v0026;
    v0259 = stack[-7];
    fn = elt(env, 8); /* make!-set */
    v0028 = (*qfn1(fn))(qenv(fn), v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    v0259 = stack[-5];
    v0259 = cons(v0028, v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    goto v0266;

v0266:
    {
        Lisp_Object v0267 = stack[0];
        popv(9);
        return cons(v0267, v0259);
    }

v0026:
    v0259 = stack[-5];
    goto v0266;

v0265:
    v0259 = v0260;
    goto v0266;

v0205:
    v0259 = stack[-7];
    fn = elt(env, 8); /* make!-set */
    v0259 = (*qfn1(fn))(qenv(fn), v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    {
        popv(9);
        fn = elt(env, 10); /* aeval */
        return (*qfn1(fn))(qenv(fn), v0259);
    }

v0059:
    v0259 = stack[0];
    goto v0136;

v0116:
    v0259 = stack[0];
    if (symbolp(v0259)) goto v0241;
    v0259 = stack[0];
    v0259 = Lconsp(nil, v0259);
    env = stack[-8];
    if (v0259 == nil) goto v0190;
    v0259 = stack[0];
    v0028 = qcar(v0259);
    v0259 = elt(env, 3); /* setvalued */
    v0259 = Lflagp(nil, v0028, v0259);
    env = stack[-8];
    if (!(v0259 == nil)) goto v0241;

v0190:
    v0028 = stack[0];
    v0259 = elt(env, 4); /* "set" */
    fn = elt(env, 9); /* typerr */
    v0259 = (*qfn2(fn))(qenv(fn), v0028, v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    goto v0135;

v0241:
    v0028 = stack[0];
    v0259 = stack[-5];
    v0259 = Lmember(nil, v0028, v0259);
    if (!(v0259 == nil)) goto v0063;
    v0028 = stack[0];
    v0259 = stack[-5];
    v0259 = cons(v0028, v0259);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-8];
    stack[-5] = v0259;
    goto v0063;

v0063:
    v0259 = stack[0];
    goto v0135;

v0114:
    v0259 = qvalue(elt(env, 1)); /* nil */
    goto v0003;
/* error exit handlers */
v0203:
    popv(9);
    return nil;
}



/* Code for aceq */

static Lisp_Object CC_aceq(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0059, v0061, v0060, v0046;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for aceq");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0061 = v0020;
    v0060 = v0038;
/* end of prologue */

v0109:
    v0059 = v0060;
    if (v0059 == nil) goto v0108;
    v0059 = v0061;
    if (v0059 == nil) goto v0041;
    v0059 = v0060;
    v0046 = qcar(v0059);
    v0059 = v0061;
    v0059 = Lmember(nil, v0046, v0059);
    if (v0059 == nil) goto v0078;
    v0059 = v0060;
    v0059 = qcdr(v0059);
    stack[0] = v0059;
    v0059 = v0060;
    v0059 = qcar(v0059);
    v0059 = Ldelete(nil, v0059, v0061);
    nil = C_nil;
    if (exception_pending()) goto v0089;
    env = stack[-1];
    v0061 = v0059;
    v0059 = stack[0];
    v0060 = v0059;
    goto v0109;

v0078:
    v0059 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0059); }

v0041:
    v0059 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0059); }

v0108:
    v0059 = v0061;
    v0059 = (v0059 == nil ? lisp_true : nil);
    { popv(2); return onevalue(v0059); }
/* error exit handlers */
v0089:
    popv(2);
    return nil;
}



/* Code for calc_atlas */

static Lisp_Object CC_calc_atlas(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0110, v0124, v0139, v0118;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for calc_atlas");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0110 = v0020;
    v0124 = v0038;
/* end of prologue */
    v0139 = v0124;
    v0118 = qcar(v0139);
    v0139 = v0124;
    v0139 = qcdr(v0139);
    v0139 = qcdr(v0139);
    v0139 = qcar(v0139);
    v0124 = qcdr(v0124);
    v0124 = qcar(v0124);
    {
        fn = elt(env, 1); /* calc_map_2d */
        return (*qfnn(fn))(qenv(fn), 4, v0118, v0139, v0124, v0110);
    }
}



/* Code for formsetq0 */

static Lisp_Object MS_CDECL CC_formsetq0(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0326, v0327, v0328, v0329;
    Lisp_Object fn;
    Lisp_Object v0019, v0020, v0038;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "formsetq0");
    va_start(aa, nargs);
    v0038 = va_arg(aa, Lisp_Object);
    v0020 = va_arg(aa, Lisp_Object);
    v0019 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for formsetq0");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0019,v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0038,v0020,v0019);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-3] = v0019;
    stack[-4] = v0020;
    stack[0] = v0038;
/* end of prologue */
    stack[-1] = nil;
    v0326 = stack[0];
    v0326 = qcdr(v0326);
    stack[0] = v0326;
    v0326 = qcar(v0326);
    stack[-2] = v0326;
    if (!(symbolp(v0326))) goto v0116;
    v0327 = stack[-2];
    v0326 = stack[-4];
    v0326 = Latsoc(nil, v0327, v0326);
    stack[-1] = v0326;
    goto v0116;

v0116:
    v0326 = stack[0];
    v0326 = qcdr(v0326);
    v0327 = qcar(v0326);
    v0326 = elt(env, 1); /* quote */
    if (!consp(v0327)) goto v0099;
    v0327 = qcar(v0327);
    if (!(v0327 == v0326)) goto v0099;
    v0326 = elt(env, 2); /* symbolic */
    stack[-3] = v0326;
    goto v0099;

v0099:
    v0326 = stack[0];
    v0326 = qcdr(v0326);
    v0329 = qcar(v0326);
    v0328 = stack[-4];
    v0327 = elt(env, 2); /* symbolic */
    v0326 = stack[-3];
    fn = elt(env, 24); /* convertmode */
    v0326 = (*qfnn(fn))(qenv(fn), 4, v0329, v0328, v0327, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    stack[-5] = v0326;
    v0326 = stack[-2];
    if (!consp(v0326)) goto v0225;
    v0326 = qvalue(elt(env, 3)); /* !*savedef */
    if (v0326 == nil) goto v0072;
    v0326 = stack[-2];
    v0327 = qcar(v0326);
    v0326 = elt(env, 4); /* inline */
    v0326 = get(v0327, v0326);
    env = stack[-6];
    if (!(v0326 == nil)) goto v0073;
    v0326 = stack[-2];
    v0327 = qcar(v0326);
    v0326 = elt(env, 5); /* smacro */
    v0326 = get(v0327, v0326);
    env = stack[-6];
    if (!(v0326 == nil)) goto v0073;

v0072:
    v0326 = qvalue(elt(env, 7)); /* t */
    goto v0186;

v0186:
    if (v0326 == nil) goto v0185;
    v0326 = stack[-2];
    v0326 = qcar(v0326);
    if (symbolp(v0326)) goto v0047;
    v0327 = stack[-2];
    v0326 = elt(env, 9); /* "assignment" */
    {
        popv(7);
        fn = elt(env, 25); /* typerr */
        return (*qfn2(fn))(qenv(fn), v0327, v0326);
    }

v0047:
    v0327 = stack[-2];
    v0326 = stack[-3];
    fn = elt(env, 26); /* macrochk */
    v0326 = (*qfn2(fn))(qenv(fn), v0327, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    stack[-2] = v0326;
    if (!consp(v0326)) goto v0223;
    v0326 = stack[-2];
    v0326 = qcar(v0326);
    fn = elt(env, 27); /* arrayp */
    v0326 = (*qfn1(fn))(qenv(fn), v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    goto v0158;

v0158:
    if (v0326 == nil) goto v0157;
    stack[0] = elt(env, 10); /* setel */
    v0328 = stack[-2];
    v0327 = stack[-4];
    v0326 = stack[-3];
    fn = elt(env, 28); /* intargfn */
    v0327 = (*qfnn(fn))(qenv(fn), 3, v0328, v0327, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    v0326 = stack[-5];
    {
        Lisp_Object v0331 = stack[0];
        popv(7);
        return list3(v0331, v0327, v0326);
    }

v0157:
    v0326 = stack[-2];
    if (!consp(v0326)) goto v0332;
    v0326 = stack[-2];
    v0326 = qcdr(v0326);
    if (v0326 == nil) goto v0333;
    v0326 = stack[-2];
    v0326 = qcar(v0326);
    if (!symbolp(v0326)) v0327 = nil;
    else { v0327 = qfastgets(v0326);
           if (v0327 != nil) { v0327 = elt(v0327, 2); /* rtype */
#ifdef RECORD_GET
             if (v0327 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v0327 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v0327 == SPID_NOPROP) v0327 = nil; }}
#endif
    v0326 = elt(env, 11); /* vector */
    if (v0327 == v0326) goto v0045;
    v0326 = stack[-2];
    v0326 = qcdr(v0326);
    v0326 = qcar(v0326);
    v0326 = Lsimple_vectorp(nil, v0326);
    env = stack[-6];
    if (!(v0326 == nil)) goto v0057;
    v0326 = stack[-2];
    v0326 = qcdr(v0326);
    v0327 = qcar(v0326);
    v0326 = elt(env, 12); /* vecfn */
    v0326 = Lflagpcar(nil, v0327, v0326);
    env = stack[-6];
    goto v0057;

v0057:
    if (v0326 == nil) goto v0250;
    v0328 = stack[0];
    v0327 = stack[-4];
    v0326 = stack[-3];
    {
        popv(7);
        fn = elt(env, 29); /* putvect */
        return (*qfnn(fn))(qenv(fn), 3, v0328, v0327, v0326);
    }

v0250:
    v0327 = stack[-2];
    v0326 = elt(env, 13); /* part */
    if (!consp(v0327)) goto v0334;
    v0327 = qcar(v0327);
    if (!(v0327 == v0326)) goto v0334;
    stack[-1] = elt(env, 14); /* list */
    v0326 = elt(env, 15); /* setpart!* */
    stack[0] = Lmkquote(nil, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    v0326 = stack[-2];
    v0328 = qcdr(v0326);
    v0327 = stack[-4];
    v0326 = stack[-3];
    fn = elt(env, 30); /* formlis */
    v0326 = (*qfnn(fn))(qenv(fn), 3, v0328, v0327, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    v0327 = list2star(stack[-1], stack[0], v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    v0326 = stack[-5];
    {
        popv(7);
        fn = elt(env, 31); /* aconc */
        return (*qfn2(fn))(qenv(fn), v0327, v0326);
    }

v0334:
    v0326 = stack[-2];
    if (!consp(v0326)) goto v0033;
    v0326 = stack[-2];
    v0327 = qcar(v0326);
    v0326 = elt(env, 16); /* setqfn */
    v0326 = get(v0327, v0326);
    env = stack[-6];
    stack[-1] = v0326;
    goto v0335;

v0335:
    if (v0326 == nil) goto v0012;
    v0326 = stack[-2];
    v0327 = qcdr(v0326);
    v0326 = stack[0];
    v0326 = qcdr(v0326);
    v0327 = Lappend(nil, v0327, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    v0326 = qvalue(elt(env, 8)); /* nil */
    fn = elt(env, 32); /* applsmacro */
    v0328 = (*qfnn(fn))(qenv(fn), 3, stack[-1], v0327, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    v0327 = stack[-4];
    v0326 = stack[-3];
    {
        popv(7);
        fn = elt(env, 33); /* form1 */
        return (*qfnn(fn))(qenv(fn), 3, v0328, v0327, v0326);
    }

v0012:
    v0327 = stack[-3];
    v0326 = elt(env, 2); /* symbolic */
    if (v0327 == v0326) goto v0336;
    v0326 = qvalue(elt(env, 8)); /* nil */
    goto v0337;

v0337:
    if (v0326 == nil) goto v0338;
    stack[0] = elt(env, 19); /* rsetf */
    v0328 = stack[-2];
    v0327 = stack[-4];
    v0326 = stack[-3];
    fn = elt(env, 33); /* form1 */
    v0327 = (*qfnn(fn))(qenv(fn), 3, v0328, v0327, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    v0326 = stack[-5];
    {
        Lisp_Object v0339 = stack[0];
        popv(7);
        return list3(v0339, v0327, v0326);
    }

v0338:
    stack[0] = elt(env, 20); /* setk */
    v0328 = stack[-2];
    v0327 = stack[-4];
    v0326 = elt(env, 21); /* algebraic */
    fn = elt(env, 33); /* form1 */
    v0327 = (*qfnn(fn))(qenv(fn), 3, v0328, v0327, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    v0326 = stack[-5];
    {
        Lisp_Object v0340 = stack[0];
        popv(7);
        return list3(v0340, v0327, v0326);
    }

v0336:
    v0326 = qvalue(elt(env, 17)); /* !*rlisp88 */
    if (!(v0326 == nil)) goto v0337;
    v0327 = stack[-2];
    v0326 = elt(env, 18); /* structfetch */
    v0326 = Leqcar(nil, v0327, v0326);
    env = stack[-6];
    goto v0337;

v0033:
    v0326 = qvalue(elt(env, 8)); /* nil */
    goto v0335;

v0045:
    v0326 = qvalue(elt(env, 7)); /* t */
    goto v0057;

v0333:
    v0326 = qvalue(elt(env, 8)); /* nil */
    goto v0057;

v0332:
    v0326 = qvalue(elt(env, 8)); /* nil */
    goto v0057;

v0223:
    v0326 = qvalue(elt(env, 8)); /* nil */
    goto v0158;

v0185:
    v0326 = stack[-2];
    if (symbolp(v0326)) goto v0341;
    v0327 = stack[-2];
    v0326 = elt(env, 9); /* "assignment" */
    {
        popv(7);
        fn = elt(env, 25); /* typerr */
        return (*qfn2(fn))(qenv(fn), v0327, v0326);
    }

v0341:
    v0327 = stack[-2];
    v0326 = elt(env, 22); /* reserved */
    v0326 = Lflagp(nil, v0327, v0326);
    env = stack[-6];
    if (v0326 == nil) goto v0342;
    v0327 = stack[-2];
    v0326 = stack[-4];
    v0326 = Latsoc(nil, v0327, v0326);
    v0326 = (v0326 == nil ? lisp_true : nil);
    goto v0343;

v0343:
    if (v0326 == nil) goto v0344;
    v0326 = stack[-2];
    {
        popv(7);
        fn = elt(env, 34); /* rsverr */
        return (*qfn1(fn))(qenv(fn), v0326);
    }

v0344:
    v0326 = stack[-2];
    if (!symbolp(v0326)) v0326 = nil;
    else { v0326 = qfastgets(v0326);
           if (v0326 != nil) { v0326 = elt(v0326, 17); /* share */
#ifdef RECORD_GET
             if (v0326 == SPID_NOPROP)
                record_get(elt(fastget_names, 17), 0),
                v0326 = nil;
             else record_get(elt(fastget_names, 17), 1),
                v0326 = lisp_true; }
           else record_get(elt(fastget_names, 17), 0); }
#else
             if (v0326 == SPID_NOPROP) v0326 = nil; else v0326 = lisp_true; }}
#endif
    if (v0326 == nil) goto v0345;
    v0327 = stack[-2];
    v0326 = stack[-4];
    fn = elt(env, 35); /* symbid */
    v0327 = (*qfn2(fn))(qenv(fn), v0327, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    v0326 = stack[-5];
    {
        popv(7);
        fn = elt(env, 36); /* mksetshare */
        return (*qfn2(fn))(qenv(fn), v0327, v0326);
    }

v0345:
    v0327 = stack[-3];
    v0326 = elt(env, 2); /* symbolic */
    if (v0327 == v0326) goto v0346;
    v0326 = stack[-1];
    if (!(v0326 == nil)) goto v0347;
    v0327 = stack[-5];
    v0326 = elt(env, 1); /* quote */
    v0326 = Leqcar(nil, v0327, v0326);
    env = stack[-6];
    goto v0347;

v0347:
    if (v0326 == nil) goto v0348;
    v0327 = stack[-2];
    v0326 = stack[-4];
    fn = elt(env, 35); /* symbid */
    v0327 = (*qfn2(fn))(qenv(fn), v0327, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    v0326 = stack[-5];
    {
        popv(7);
        fn = elt(env, 37); /* mksetq */
        return (*qfn2(fn))(qenv(fn), v0327, v0326);
    }

v0348:
    v0326 = stack[0];
    v0326 = qcdr(v0326);
    v0326 = qcar(v0326);
    v0326 = Lsimple_vectorp(nil, v0326);
    env = stack[-6];
    if (!(v0326 == nil)) goto v0349;
    v0326 = stack[0];
    v0326 = qcdr(v0326);
    v0327 = qcar(v0326);
    v0326 = elt(env, 12); /* vecfn */
    v0326 = Lflagpcar(nil, v0327, v0326);
    env = stack[-6];
    if (!(v0326 == nil)) goto v0349;
    stack[0] = elt(env, 20); /* setk */
    v0326 = stack[-2];
    v0327 = Lmkquote(nil, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    v0326 = stack[-5];
    {
        Lisp_Object v0350 = stack[0];
        popv(7);
        return list3(v0350, v0327, v0326);
    }

v0349:
    stack[-1] = elt(env, 23); /* setv */
    v0326 = stack[-2];
    v0327 = Lmkquote(nil, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    v0326 = stack[0];
    v0326 = qcdr(v0326);
    v0326 = qcar(v0326);
    {
        Lisp_Object v0351 = stack[-1];
        popv(7);
        return list3(v0351, v0327, v0326);
    }

v0346:
    v0326 = qvalue(elt(env, 7)); /* t */
    goto v0347;

v0342:
    v0326 = qvalue(elt(env, 8)); /* nil */
    goto v0343;

v0073:
    v0326 = Lposn(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    v0326 = (Lisp_Object)zerop(v0326);
    v0326 = v0326 ? lisp_true : nil;
    env = stack[-6];
    if (!(v0326 == nil)) goto v0226;
    v0326 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    goto v0226;

v0226:
    v0326 = elt(env, 6); /* "+++ Assign via inline or smacro: " */
    v0326 = Lprinc(nil, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    v0326 = stack[-2];
    v0326 = Lprint(nil, v0326);
    nil = C_nil;
    if (exception_pending()) goto v0330;
    env = stack[-6];
    goto v0072;

v0225:
    v0326 = qvalue(elt(env, 8)); /* nil */
    goto v0186;
/* error exit handlers */
v0330:
    popv(7);
    return nil;
}



/* Code for reduce */

static Lisp_Object CC_reduce(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0143, v0105, v0185;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for reduce");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0020;
    v0143 = v0038;
/* end of prologue */
    stack[0] = v0143;
    v0143 = qvalue(elt(env, 1)); /* !*yyy */
    if (v0143 == nil) goto v0108;
    v0105 = stack[0];
    v0143 = stack[-1];
    fn = elt(env, 3); /* reduce!-ratios */
    v0143 = (*qfn2(fn))(qenv(fn), v0105, v0143);
    nil = C_nil;
    if (exception_pending()) goto v0129;
    env = stack[-3];
    stack[0] = v0143;
    goto v0108;

v0108:
    v0143 = stack[-1];
    fn = elt(env, 4); /* set!-weights */
    v0143 = (*qfn1(fn))(qenv(fn), v0143);
    nil = C_nil;
    if (exception_pending()) goto v0129;
    env = stack[-3];
    stack[-2] = v0143;
    v0143 = qvalue(elt(env, 2)); /* !*xxx */
    if (v0143 == nil) goto v0124;
    v0185 = stack[0];
    v0105 = stack[-1];
    v0143 = stack[-2];
    fn = elt(env, 5); /* reduce!-columns */
    v0143 = (*qfnn(fn))(qenv(fn), 3, v0185, v0105, v0143);
    nil = C_nil;
    if (exception_pending()) goto v0129;
    env = stack[-3];
    stack[0] = v0143;
    goto v0124;

v0124:
    v0143 = qvalue(elt(env, 2)); /* !*xxx */
    if (v0143 == nil) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v0185 = stack[0];
    v0105 = stack[-1];
    v0143 = stack[-2];
    fn = elt(env, 6); /* reduce!-weights */
    v0143 = (*qfnn(fn))(qenv(fn), 3, v0185, v0105, v0143);
    nil = C_nil;
    if (exception_pending()) goto v0129;
    stack[0] = v0143;
    { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
/* error exit handlers */
v0129:
    popv(4);
    return nil;
}



/* Code for fs!:minusp!: */

static Lisp_Object CC_fsTminuspT(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0101;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fs:minusp:");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0101 = v0038;
/* end of prologue */
    v0101 = qcdr(v0101);
    {
        fn = elt(env, 1); /* fs!:minusp */
        return (*qfn1(fn))(qenv(fn), v0101);
    }
}



/* Code for appn */

static Lisp_Object CC_appn(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0089, v0107;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for appn");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0020;
    stack[-1] = v0038;
/* end of prologue */
    stack[-2] = nil;
    goto v0041;

v0041:
    v0107 = stack[0];
    v0089 = (Lisp_Object)17; /* 1 */
    if (v0107 == v0089) goto v0102;
    v0107 = stack[-1];
    v0089 = stack[-2];
    v0089 = cons(v0107, v0089);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-3];
    stack[-2] = v0089;
    v0089 = stack[0];
    v0089 = sub1(v0089);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-3];
    stack[0] = v0089;
    goto v0041;

v0102:
    v0089 = stack[-1];
    v0107 = v0089;
    goto v0108;

v0108:
    v0089 = stack[-2];
    if (v0089 == nil) { popv(4); return onevalue(v0107); }
    v0089 = stack[-2];
    v0089 = qcar(v0089);
    v0089 = Lappend(nil, v0089, v0107);
    nil = C_nil;
    if (exception_pending()) goto v0131;
    env = stack[-3];
    v0107 = v0089;
    v0089 = stack[-2];
    v0089 = qcdr(v0089);
    stack[-2] = v0089;
    goto v0108;
/* error exit handlers */
v0131:
    popv(4);
    return nil;
}



/* Code for polynomread */

static Lisp_Object CC_polynomread(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0158, v0353, v0224;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for polynomread");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0038;
/* end of prologue */
    v0158 = stack[0];
    if (v0158 == nil) goto v0117;
    v0158 = stack[0];
    if (!consp(v0158)) goto v0003;
    v0158 = stack[0];
    v0158 = qcar(v0158);
    v0158 = (consp(v0158) ? nil : lisp_true);
    goto v0138;

v0138:
    if (v0158 == nil) goto v0185;
    v0353 = stack[0];
    v0158 = (Lisp_Object)33; /* 2 */
    v0353 = Cremainder(v0353, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    v0158 = (Lisp_Object)17; /* 1 */
    v0158 = Leqn(nil, v0353, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    if (v0158 == nil) goto v0130;
    fn = elt(env, 5); /* createmonomunit */
    v0353 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    v0158 = qvalue(elt(env, 1)); /* nil */
    v0224 = qvalue(elt(env, 1)); /* nil */
    popv(3);
    return list2star(v0353, v0158, v0224);

v0130:
    v0158 = qvalue(elt(env, 1)); /* nil */
    popv(3);
    return ncons(v0158);

v0185:
    v0158 = stack[0];
    v0158 = qcar(v0158);
    v0158 = qcar(v0158);
    v0353 = qcar(v0158);
    v0158 = qvalue(elt(env, 3)); /* fluidbibasisvariables */
    v0158 = Lmember(nil, v0353, v0158);
    if (v0158 == nil) goto v0070;
    v0158 = stack[0];
    v0158 = qcar(v0158);
    v0158 = qcdr(v0158);
    v0224 = CC_polynomread(env, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    v0158 = stack[0];
    v0158 = qcar(v0158);
    v0158 = qcar(v0158);
    v0353 = qcar(v0158);
    v0158 = qvalue(elt(env, 4)); /* fluidbibasissinglevariablemonomialsa 
*/
    v0158 = Lassoc(nil, v0353, v0158);
    v0158 = qcdr(v0158);
    fn = elt(env, 6); /* polynommultiplybymonom */
    stack[-1] = (*qfn2(fn))(qenv(fn), v0224, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    v0158 = stack[0];
    v0158 = qcdr(v0158);
    v0158 = CC_polynomread(env, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    {
        Lisp_Object v0354 = stack[-1];
        popv(3);
        fn = elt(env, 7); /* polynomadd */
        return (*qfn2(fn))(qenv(fn), v0354, v0158);
    }

v0070:
    v0158 = stack[0];
    v0158 = qcar(v0158);
    v0158 = qcdr(v0158);
    stack[-1] = CC_polynomread(env, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    fn = elt(env, 5); /* createmonomunit */
    v0158 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    fn = elt(env, 6); /* polynommultiplybymonom */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[-1], v0158);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    v0158 = stack[0];
    v0158 = qcdr(v0158);
    v0158 = CC_polynomread(env, v0158);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    fn = elt(env, 7); /* polynomadd */
    v0158 = (*qfn2(fn))(qenv(fn), stack[-1], v0158);
    nil = C_nil;
    if (exception_pending()) goto v0048;
    env = stack[-2];
    v0158 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0158); }

v0003:
    v0158 = qvalue(elt(env, 2)); /* t */
    goto v0138;

v0117:
    v0158 = qvalue(elt(env, 1)); /* nil */
    popv(3);
    return ncons(v0158);
/* error exit handlers */
v0048:
    popv(3);
    return nil;
}



/* Code for ext_mult */

static Lisp_Object CC_ext_mult(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0067, v0133, v0178;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ext_mult");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0067 = v0020;
    v0133 = v0038;
/* end of prologue */
    v0133 = qcdr(v0133);
    v0067 = qcdr(v0067);
    fn = elt(env, 3); /* merge_lists */
    v0067 = (*qfn2(fn))(qenv(fn), v0133, v0067);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    env = stack[-1];
    stack[0] = v0067;
    v0067 = stack[0];
    if (v0067 == nil) goto v0121;
    v0067 = stack[0];
    v0067 = qcdr(v0067);
    if (v0067 == nil) goto v0177;
    v0133 = elt(env, 2); /* ext */
    v0067 = stack[0];
    v0067 = qcdr(v0067);
    v0067 = cons(v0133, v0067);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    env = stack[-1];
    fn = elt(env, 4); /* !*a2k */
    v0133 = (*qfn1(fn))(qenv(fn), v0067);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    env = stack[-1];
    v0067 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 5); /* to */
    v0133 = (*qfn2(fn))(qenv(fn), v0133, v0067);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    env = stack[-1];
    v0067 = stack[0];
    v0067 = qcar(v0067);
    v0133 = cons(v0133, v0067);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    env = stack[-1];
    v0178 = qvalue(elt(env, 1)); /* nil */
    v0067 = (Lisp_Object)17; /* 1 */
    popv(2);
    return acons(v0133, v0178, v0067);

v0177:
    v0133 = (Lisp_Object)17; /* 1 */
    v0067 = (Lisp_Object)17; /* 1 */
    popv(2);
    return cons(v0133, v0067);

v0121:
    v0133 = qvalue(elt(env, 1)); /* nil */
    v0067 = (Lisp_Object)17; /* 1 */
    popv(2);
    return cons(v0133, v0067);
/* error exit handlers */
v0172:
    popv(2);
    return nil;
}



/* Code for checkdifference */

static Lisp_Object CC_checkdifference(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0085, v0116, v0126, v0119;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for checkdifference");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0126 = v0020;
    v0119 = v0038;
/* end of prologue */
    v0116 = v0126;
    v0085 = (Lisp_Object)1; /* 0 */
    if (v0116 == v0085) return onevalue(v0119);
    v0085 = elt(env, 1); /* difference */
    v0116 = v0119;
    return list3(v0085, v0116, v0126);
}



/* Code for giintgcd */

static Lisp_Object CC_giintgcd(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0178, v0134, v0172, v0173;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for giintgcd");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0134 = v0020;
    v0172 = v0038;
/* end of prologue */

v0115:
    v0173 = v0134;
    v0178 = (Lisp_Object)17; /* 1 */
    if (v0173 == v0178) goto v0108;
    v0178 = v0172;
    if (v0178 == nil) { popv(2); return onevalue(v0134); }
    v0178 = v0172;
    if (!consp(v0178)) goto v0135;
    v0173 = v0172;
    v0178 = elt(env, 1); /* !:gi!: */
    if (!consp(v0173)) goto v0075;
    v0173 = qcar(v0173);
    if (!(v0173 == v0178)) goto v0075;
    v0178 = v0172;
    v0178 = qcdr(v0178);
    stack[0] = qcar(v0178);
    v0178 = v0172;
    v0178 = qcdr(v0178);
    v0178 = qcdr(v0178);
    v0178 = Lgcd(nil, v0178, v0134);
    nil = C_nil;
    if (exception_pending()) goto v0174;
    {
        Lisp_Object v0175 = stack[0];
        popv(2);
        return Lgcd(nil, v0175, v0178);
    }

v0075:
    v0178 = v0172;
    v0178 = qcar(v0178);
    v0178 = qcdr(v0178);
    stack[0] = v0178;
    v0178 = v0172;
    v0178 = qcdr(v0178);
    v0178 = CC_giintgcd(env, v0178, v0134);
    nil = C_nil;
    if (exception_pending()) goto v0174;
    env = stack[-1];
    v0134 = v0178;
    v0178 = stack[0];
    v0172 = v0178;
    goto v0115;

v0135:
    v0178 = v0172;
        popv(2);
        return Lgcd(nil, v0178, v0134);

v0108:
    v0178 = (Lisp_Object)17; /* 1 */
    { popv(2); return onevalue(v0178); }
/* error exit handlers */
v0174:
    popv(2);
    return nil;
}



/* Code for maxfrom */

static Lisp_Object CC_maxfrom(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0006, v0112;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for maxfrom");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0038,v0020);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0006 = v0020;
    v0112 = v0038;
/* end of prologue */
    stack[0] = v0112;
    v0112 = add1(v0006);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-1];
    v0006 = (Lisp_Object)1; /* 0 */
    {
        Lisp_Object v0120 = stack[0];
        popv(2);
        fn = elt(env, 1); /* maxfrom1 */
        return (*qfnn(fn))(qenv(fn), 3, v0120, v0112, v0006);
    }
/* error exit handlers */
v0114:
    popv(2);
    return nil;
}



/* Code for mk!+equation */

static Lisp_Object CC_mkLequation(Lisp_Object env,
                         Lisp_Object v0038, Lisp_Object v0020)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0112, v0113, v0114;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mk+equation");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0112 = v0020;
    v0113 = v0038;
/* end of prologue */
    v0114 = elt(env, 1); /* equal */
    return list3(v0114, v0113, v0112);
}



/* Code for sfto_qsubhor1 */

static Lisp_Object MS_CDECL CC_sfto_qsubhor1(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0159, v0160;
    Lisp_Object fn;
    Lisp_Object v0019, v0020, v0038;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "sfto_qsubhor1");
    va_start(aa, nargs);
    v0038 = va_arg(aa, Lisp_Object);
    v0020 = va_arg(aa, Lisp_Object);
    v0019 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for sfto_qsubhor1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0019,v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0038,v0020,v0019);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-1] = v0019;
    v0159 = v0020;
    stack[0] = v0038;
/* end of prologue */
    v0160 = stack[0];
    fn = elt(env, 2); /* sfto_mvartest */
    v0159 = (*qfn2(fn))(qenv(fn), v0160, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-6];
    if (v0159 == nil) goto v0135;
    v0159 = stack[-1];
    v0159 = qcar(v0159);
    stack[-4] = v0159;
    v0159 = stack[-1];
    v0159 = qcdr(v0159);
    stack[-3] = v0159;
    v0159 = (Lisp_Object)17; /* 1 */
    stack[-2] = v0159;
    v0159 = stack[0];
    fn = elt(env, 3); /* coeffs */
    v0159 = (*qfn1(fn))(qenv(fn), v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-6];
    v0160 = v0159;
    v0159 = v0160;
    v0159 = qcar(v0159);
    stack[-5] = v0159;
    v0159 = v0160;
    v0159 = qcdr(v0159);
    stack[-1] = v0159;
    goto v0060;

v0060:
    v0159 = stack[-1];
    if (v0159 == nil) goto v0241;
    v0159 = stack[-1];
    v0159 = qcar(v0159);
    stack[0] = v0159;
    v0160 = stack[-2];
    v0159 = stack[-3];
    v0159 = times2(v0160, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-6];
    stack[-2] = v0159;
    v0160 = stack[0];
    v0159 = stack[-2];
    fn = elt(env, 4); /* multf */
    stack[0] = (*qfn2(fn))(qenv(fn), v0160, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-6];
    v0160 = stack[-5];
    v0159 = stack[-4];
    fn = elt(env, 4); /* multf */
    v0159 = (*qfn2(fn))(qenv(fn), v0160, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-6];
    fn = elt(env, 5); /* addf */
    v0159 = (*qfn2(fn))(qenv(fn), stack[0], v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-6];
    stack[-5] = v0159;
    v0159 = stack[-1];
    v0159 = qcdr(v0159);
    stack[-1] = v0159;
    goto v0060;

v0241:
    v0159 = stack[-5];
    fn = elt(env, 6); /* sfto_dprpartksf */
    v0160 = (*qfn1(fn))(qenv(fn), v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    v0159 = (Lisp_Object)17; /* 1 */
    popv(7);
    return cons(v0160, v0159);

v0135:
    v0160 = stack[0];
    v0159 = (Lisp_Object)17; /* 1 */
    popv(7);
    return cons(v0160, v0159);
/* error exit handlers */
v0161:
    popv(7);
    return nil;
}



/* Code for upperlimitrd */

static Lisp_Object MS_CDECL CC_upperlimitrd(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0085, v0116;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "upperlimitrd");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for upperlimitrd");
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
    fn = elt(env, 4); /* mathml */
    v0085 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0119;
    env = stack[-1];
    stack[0] = v0085;
    fn = elt(env, 5); /* lex */
    v0085 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0119;
    env = stack[-1];
    v0116 = qvalue(elt(env, 1)); /* char */
    v0085 = elt(env, 2); /* (!/ u p l i m i t) */
    if (equal(v0116, v0085)) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v0116 = elt(env, 3); /* "</uplimit>" */
    v0085 = (Lisp_Object)33; /* 2 */
    fn = elt(env, 6); /* errorml */
    v0085 = (*qfn2(fn))(qenv(fn), v0116, v0085);
    nil = C_nil;
    if (exception_pending()) goto v0119;
    v0085 = nil;
    { popv(2); return onevalue(v0085); }
/* error exit handlers */
v0119:
    popv(2);
    return nil;
}



/* Code for prlist */

static Lisp_Object CC_prlist(Lisp_Object env,
                         Lisp_Object v0038)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0076, v0077;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for prlist");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0038);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0038;
/* end of prologue */
    v0077 = nil;
    goto v0101;

v0101:
    v0076 = stack[0];
    if (v0076 == nil) goto v0102;
    v0076 = stack[0];
    v0076 = qcar(v0076);
    v0076 = Lconsp(nil, v0076);
    env = stack[-1];
    if (v0076 == nil) goto v0116;
    v0076 = stack[0];
    v0076 = qcar(v0076);
    v0076 = cons(v0076, v0077);
    nil = C_nil;
    if (exception_pending()) goto v0111;
    env = stack[-1];
    v0077 = v0076;
    v0076 = stack[0];
    v0076 = qcdr(v0076);
    stack[0] = v0076;
    goto v0101;

v0116:
    v0076 = stack[0];
    v0076 = qcdr(v0076);
    stack[0] = v0076;
    goto v0101;

v0102:
    v0076 = v0077;
    {
        popv(2);
        fn = elt(env, 1); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0076);
    }
/* error exit handlers */
v0111:
    popv(2);
    return nil;
}



/* Code for assgnpri */

static Lisp_Object MS_CDECL CC_assgnpri(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0361, v0204, v0205;
    Lisp_Object fn;
    Lisp_Object v0019, v0020, v0038;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "assgnpri");
    va_start(aa, nargs);
    v0038 = va_arg(aa, Lisp_Object);
    v0020 = va_arg(aa, Lisp_Object);
    v0019 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for assgnpri");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0019,v0020,v0038);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0038,v0020,v0019);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0019;
    stack[-2] = v0020;
    stack[-3] = v0038;
/* end of prologue */
    stack[-4] = nil;
    v0361 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 2)) = v0361; /* overflowed!* */
    qvalue(elt(env, 3)) = v0361; /* testing!-width!* */
    v0361 = stack[-3];
    if (!(v0361 == nil)) goto v0128;
    v0361 = (Lisp_Object)1; /* 0 */
    stack[-3] = v0361;
    goto v0128;

v0128:
    v0361 = qvalue(elt(env, 4)); /* !*nero */
    if (v0361 == nil) goto v0112;
    v0204 = stack[-3];
    v0361 = (Lisp_Object)1; /* 0 */
    if (!(v0204 == v0361)) goto v0112;
    v0361 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0361); }

v0112:
    v0361 = qvalue(elt(env, 5)); /* !*tex */
    if (v0361 == nil) goto v0076;
    v0205 = stack[-3];
    v0204 = stack[-2];
    v0361 = stack[-1];
    {
        popv(6);
        fn = elt(env, 22); /* texpri */
        return (*qfnn(fn))(qenv(fn), 3, v0205, v0204, v0361);
    }

v0076:
    v0361 = elt(env, 6); /* vecp */
    fn = elt(env, 23); /* getd */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    if (v0361 == nil) goto v0104;
    v0361 = stack[-3];
    fn = elt(env, 6); /* vecp */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    if (v0361 == nil) goto v0104;
    v0204 = stack[-3];
    v0361 = elt(env, 7); /* mat */
    {
        popv(6);
        fn = elt(env, 24); /* vecpri */
        return (*qfn2(fn))(qenv(fn), v0204, v0361);
    }

v0104:
    v0204 = elt(env, 8); /* csl */
    v0361 = qvalue(elt(env, 9)); /* lispsystem!* */
    v0361 = Lmemq(nil, v0204, v0361);
    if (v0361 == nil) goto v0075;
    v0361 = elt(env, 10); /* math!-display */
    fn = elt(env, 23); /* getd */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    if (v0361 == nil) goto v0075;
    v0361 = (Lisp_Object)1; /* 0 */
    fn = elt(env, 10); /* math!-display */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    if (v0361 == nil) goto v0075;
    v0204 = qvalue(elt(env, 11)); /* outputhandler!* */
    v0361 = elt(env, 12); /* fancy!-output */
    if (v0204 == v0361) goto v0176;
    v0361 = qvalue(elt(env, 1)); /* nil */
    goto v0064;

v0064:
    if (v0361 == nil) goto v0075;
    v0361 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 25); /* fmp!-switch */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    v0361 = qvalue(elt(env, 13)); /* t */
    stack[-4] = v0361;
    goto v0075;

v0075:
    v0361 = stack[-3];
    fn = elt(env, 26); /* getrtype */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    v0205 = v0361;
    if (v0361 == nil) goto v0333;
    v0204 = v0205;
    v0361 = elt(env, 14); /* sprifn */
    v0361 = Lflagp(nil, v0204, v0361);
    env = stack[-5];
    if (v0361 == nil) goto v0224;
    v0361 = qvalue(elt(env, 11)); /* outputhandler!* */
    v0361 = (v0361 == nil ? lisp_true : nil);
    goto v0066;

v0066:
    if (v0361 == nil) goto v0333;
    v0361 = stack[-2];
    if (v0361 == nil) goto v0156;
    v0205 = elt(env, 16); /* setq */
    v0361 = stack[-2];
    v0204 = qcar(v0361);
    v0361 = stack[-3];
    v0361 = list3(v0205, v0204, v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    fn = elt(env, 27); /* maprin */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    goto v0231;

v0231:
    v0361 = stack[-4];
    if (v0361 == nil) goto v0335;
    v0361 = qvalue(elt(env, 13)); /* t */
    fn = elt(env, 25); /* fmp!-switch */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    goto v0335;

v0335:
    v0361 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0361); }

v0156:
    v0204 = v0205;
    v0361 = elt(env, 15); /* tag */
    v0361 = get(v0204, v0361);
    env = stack[-5];
    if (!symbolp(v0361)) v0204 = nil;
    else { v0204 = qfastgets(v0361);
           if (v0204 != nil) { v0204 = elt(v0204, 57); /* prifn */
#ifdef RECORD_GET
             if (v0204 != SPID_NOPROP)
                record_get(elt(fastget_names, 57), 1);
             else record_get(elt(fastget_names, 57), 0),
                v0204 = nil; }
           else record_get(elt(fastget_names, 57), 0); }
#else
             if (v0204 == SPID_NOPROP) v0204 = nil; }}
#endif
    v0361 = stack[-3];
    v0361 = Lapply1(nil, v0204, v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    goto v0231;

v0333:
    v0204 = stack[-1];
    v0361 = elt(env, 17); /* (first only) */
    v0361 = Lmemq(nil, v0204, v0361);
    if (v0361 == nil) goto v0053;
    v0361 = qvalue(elt(env, 13)); /* t */
    fn = elt(env, 28); /* terpri!* */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    goto v0053;

v0053:
    v0361 = stack[-2];
    fn = elt(env, 29); /* evalvars */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    stack[-2] = v0361;
    v0361 = qvalue(elt(env, 18)); /* !*fort */
    if (v0361 == nil) goto v0362;
    v0205 = stack[-3];
    v0204 = stack[-2];
    v0361 = stack[-1];
    fn = elt(env, 30); /* fvarpri */
    v0361 = (*qfnn(fn))(qenv(fn), 3, v0205, v0204, v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    v0361 = stack[-4];
    if (v0361 == nil) goto v0147;
    v0361 = qvalue(elt(env, 13)); /* t */
    fn = elt(env, 25); /* fmp!-switch */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    goto v0147;

v0147:
    v0361 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0361); }

v0362:
    v0361 = stack[-2];
    if (v0361 == nil) goto v0250;
    stack[0] = elt(env, 16); /* setq */
    v0204 = stack[-2];
    v0361 = stack[-3];
    fn = elt(env, 31); /* aconc */
    v0361 = (*qfn2(fn))(qenv(fn), v0204, v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    v0361 = cons(stack[0], v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    goto v0253;

v0253:
    fn = elt(env, 27); /* maprin */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    v0361 = stack[-1];
    if (v0361 == nil) goto v0035;
    v0204 = stack[-1];
    v0361 = elt(env, 19); /* first */
    v0361 = (v0204 == v0361 ? lisp_true : nil);
    goto v0034;

v0034:
    if (v0361 == nil) goto v0037;
    v0361 = stack[-4];
    if (v0361 == nil) goto v0315;
    v0361 = qvalue(elt(env, 13)); /* t */
    fn = elt(env, 25); /* fmp!-switch */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    goto v0315;

v0315:
    v0361 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0361); }

v0037:
    v0361 = qvalue(elt(env, 20)); /* !*nat */
    if (!(v0361 == nil)) goto v0036;
    v0361 = elt(env, 21); /* "$" */
    fn = elt(env, 32); /* prin2!* */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    goto v0036;

v0036:
    v0361 = qvalue(elt(env, 20)); /* !*nat */
    v0361 = (v0361 == nil ? lisp_true : nil);
    fn = elt(env, 28); /* terpri!* */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    goto v0231;

v0035:
    v0361 = qvalue(elt(env, 13)); /* t */
    goto v0034;

v0250:
    v0361 = stack[-3];
    goto v0253;

v0224:
    v0361 = qvalue(elt(env, 1)); /* nil */
    goto v0066;

v0176:
    v0361 = stack[-3];
    fn = elt(env, 33); /* would!-be!-huge */
    v0361 = (*qfn1(fn))(qenv(fn), v0361);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-5];
    goto v0064;
/* error exit handlers */
v0028:
    popv(6);
    return nil;
}



setup_type const u36_setup[] =
{
    {"makecoeffpairshom",       wrong_no_na,    wrong_no_nb,   (n_args *)CC_makecoeffpairshom},
    {"termorder1",              too_few_2,      CC_termorder1, wrong_no_2},
    {"degree-order",            too_few_2,      CC_degreeKorder,wrong_no_2},
    {"vectorrd",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_vectorrd},
    {"simpimpart",              CC_simpimpart,  too_many_1,    wrong_no_1},
    {"on-double1",              CC_onKdouble1,  too_many_1,    wrong_no_1},
    {"genexp",                  CC_genexp,      too_many_1,    wrong_no_1},
    {"xpartitop",               CC_xpartitop,   too_many_1,    wrong_no_1},
    {"simpunion",               CC_simpunion,   too_many_1,    wrong_no_1},
    {"spp",                     CC_spp,         too_many_1,    wrong_no_1},
    {"s_world_names",           CC_s_world_names,too_many_1,   wrong_no_1},
    {"createsinglevariablemonom",CC_createsinglevariablemonom,too_many_1,wrong_no_1},
    {"component_action",        wrong_no_na,    wrong_no_nb,   (n_args *)CC_component_action},
    {"rtypepart",               CC_rtypepart,   too_many_1,    wrong_no_1},
    {"factor-prim-f",           CC_factorKprimKf,too_many_1,   wrong_no_1},
    {"ofsf_updsignvar",         wrong_no_na,    wrong_no_nb,   (n_args *)CC_ofsf_updsignvar},
    {"make-modular-symmetric",  CC_makeKmodularKsymmetric,too_many_1,wrong_no_1},
    {"lowupperlimitrd",         wrong_no_na,    wrong_no_nb,   (n_args *)CC_lowupperlimitrd},
    {"plusrd",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_plusrd},
    {"ldf-simp",                CC_ldfKsimp,    too_many_1,    wrong_no_1},
    {"inszzz",                  too_few_2,      CC_inszzz,     wrong_no_2},
    {"suspend",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_suspend},
    {"copy_mat",                CC_copy_mat,    too_many_1,    wrong_no_1},
    {"mkupf",                   CC_mkupf,       too_many_1,    wrong_no_1},
    {"getupper",                CC_getupper,    too_many_1,    wrong_no_1},
    {"s_noparents",             CC_s_noparents, too_many_1,    wrong_no_1},
    {"xremf",                   wrong_no_na,    wrong_no_nb,   (n_args *)CC_xremf},
    {"cali=min",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_caliMmin},
    {"pst_subpst",              too_few_2,      CC_pst_subpst, wrong_no_2},
    {"lpos",                    too_few_2,      CC_lpos,       wrong_no_2},
    {"bfrsq",                   CC_bfrsq,       too_many_1,    wrong_no_1},
    {"read-comment1",           CC_readKcomment1,too_many_1,   wrong_no_1},
    {"ofsf_evalatp",            too_few_2,      CC_ofsf_evalatp,wrong_no_2},
    {"rl_onp",                  CC_rl_onp,      too_many_1,    wrong_no_1},
    {"rl_multsurep",            too_few_2,      CC_rl_multsurep,wrong_no_2},
    {"matrixrd",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_matrixrd},
    {"compl",                   too_few_2,      CC_compl,      wrong_no_2},
    {"spcol_dim",               CC_spcol_dim,   too_many_1,    wrong_no_1},
    {"mkbc",                    too_few_2,      CC_mkbc,       wrong_no_2},
    {"applysetop",              too_few_2,      CC_applysetop, wrong_no_2},
    {"aceq",                    too_few_2,      CC_aceq,       wrong_no_2},
    {"calc_atlas",              too_few_2,      CC_calc_atlas, wrong_no_2},
    {"formsetq0",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_formsetq0},
    {"reduce",                  too_few_2,      CC_reduce,     wrong_no_2},
    {"fs:minusp:",              CC_fsTminuspT,  too_many_1,    wrong_no_1},
    {"appn",                    too_few_2,      CC_appn,       wrong_no_2},
    {"polynomread",             CC_polynomread, too_many_1,    wrong_no_1},
    {"ext_mult",                too_few_2,      CC_ext_mult,   wrong_no_2},
    {"checkdifference",         too_few_2,      CC_checkdifference,wrong_no_2},
    {"giintgcd",                too_few_2,      CC_giintgcd,   wrong_no_2},
    {"maxfrom",                 too_few_2,      CC_maxfrom,    wrong_no_2},
    {"mk+equation",             too_few_2,      CC_mkLequation,wrong_no_2},
    {"sfto_qsubhor1",           wrong_no_na,    wrong_no_nb,   (n_args *)CC_sfto_qsubhor1},
    {"upperlimitrd",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_upperlimitrd},
    {"prlist",                  CC_prlist,      too_many_1,    wrong_no_1},
    {"assgnpri",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_assgnpri},
    {NULL, (one_args *)"u36", (two_args *)"8669 6203632 7446359", 0}
};

/* end of generated code */

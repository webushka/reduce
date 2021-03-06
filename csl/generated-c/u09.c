
/* $destdir/u09.c        Machine generated C code */

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


/* Code for general!-times!-term!-mod!-p */

static Lisp_Object CC_generalKtimesKtermKmodKp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0045, v0046, v0047;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for general-times-term-mod-p");
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
    v0045 = stack[-1];
    if (v0045 == nil) goto v0048;
    v0045 = stack[-1];
    if (!consp(v0045)) goto v0049;
    v0045 = stack[-1];
    v0045 = qcar(v0045);
    v0045 = (consp(v0045) ? nil : lisp_true);
    goto v0050;

v0050:
    if (v0045 == nil) goto v0051;
    v0045 = stack[-2];
    v0046 = qcdr(v0045);
    v0045 = stack[-1];
    fn = elt(env, 3); /* gen!-mult!-by!-const!-mod!-p */
    v0046 = (*qfn2(fn))(qenv(fn), v0046, v0045);
    nil = C_nil;
    if (exception_pending()) goto v0052;
    env = stack[-4];
    v0045 = qvalue(elt(env, 1)); /* nil */
    v0047 = v0046;
    if (v0047 == nil) { popv(5); return onevalue(v0045); }
    v0047 = stack[-2];
    v0047 = qcar(v0047);
    popv(5);
    return acons(v0047, v0046, v0045);

v0051:
    v0045 = stack[-2];
    v0045 = qcar(v0045);
    v0046 = qcar(v0045);
    v0045 = stack[-1];
    v0045 = qcar(v0045);
    v0045 = qcar(v0045);
    v0045 = qcar(v0045);
    if (equal(v0046, v0045)) goto v0053;
    v0045 = stack[-2];
    v0045 = qcar(v0045);
    v0046 = qcar(v0045);
    v0045 = stack[-1];
    v0045 = qcar(v0045);
    v0045 = qcar(v0045);
    v0045 = qcar(v0045);
    fn = elt(env, 4); /* ordop */
    v0045 = (*qfn2(fn))(qenv(fn), v0046, v0045);
    nil = C_nil;
    if (exception_pending()) goto v0052;
    env = stack[-4];
    if (v0045 == nil) goto v0054;
    v0045 = stack[-2];
    v0046 = qcdr(v0045);
    v0045 = stack[-1];
    fn = elt(env, 5); /* general!-times!-mod!-p */
    v0046 = (*qfn2(fn))(qenv(fn), v0046, v0045);
    nil = C_nil;
    if (exception_pending()) goto v0052;
    env = stack[-4];
    v0045 = qvalue(elt(env, 1)); /* nil */
    v0047 = v0046;
    if (v0047 == nil) { popv(5); return onevalue(v0045); }
    v0047 = stack[-2];
    v0047 = qcar(v0047);
    popv(5);
    return acons(v0047, v0046, v0045);

v0054:
    v0046 = stack[-2];
    v0045 = stack[-1];
    v0045 = qcar(v0045);
    v0045 = qcdr(v0045);
    stack[0] = CC_generalKtimesKtermKmodKp(env, v0046, v0045);
    nil = C_nil;
    if (exception_pending()) goto v0052;
    env = stack[-4];
    v0046 = stack[-2];
    v0045 = stack[-1];
    v0045 = qcdr(v0045);
    v0045 = CC_generalKtimesKtermKmodKp(env, v0046, v0045);
    nil = C_nil;
    if (exception_pending()) goto v0052;
    v0046 = stack[0];
    v0047 = v0046;
    if (v0047 == nil) { popv(5); return onevalue(v0045); }
    v0047 = stack[-1];
    v0047 = qcar(v0047);
    v0047 = qcar(v0047);
    popv(5);
    return acons(v0047, v0046, v0045);

v0053:
    v0045 = stack[-2];
    v0046 = qcdr(v0045);
    v0045 = stack[-1];
    v0045 = qcar(v0045);
    v0045 = qcdr(v0045);
    fn = elt(env, 5); /* general!-times!-mod!-p */
    stack[0] = (*qfn2(fn))(qenv(fn), v0046, v0045);
    nil = C_nil;
    if (exception_pending()) goto v0052;
    env = stack[-4];
    v0046 = stack[-2];
    v0045 = stack[-1];
    v0045 = qcdr(v0045);
    v0045 = CC_generalKtimesKtermKmodKp(env, v0046, v0045);
    nil = C_nil;
    if (exception_pending()) goto v0052;
    env = stack[-4];
    stack[-3] = stack[0];
    stack[0] = v0045;
    v0045 = stack[-3];
    if (v0045 == nil) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    v0045 = stack[-2];
    v0045 = qcar(v0045);
    v0047 = qcar(v0045);
    v0045 = stack[-2];
    v0045 = qcar(v0045);
    v0046 = qcdr(v0045);
    v0045 = stack[-1];
    v0045 = qcar(v0045);
    v0045 = qcar(v0045);
    v0045 = qcdr(v0045);
    v0045 = (Lisp_Object)(int32_t)((int32_t)v0046 + (int32_t)v0045 - TAG_FIXNUM);
    fn = elt(env, 6); /* mksp */
    v0047 = (*qfn2(fn))(qenv(fn), v0047, v0045);
    nil = C_nil;
    if (exception_pending()) goto v0052;
    v0046 = stack[-3];
    v0045 = stack[0];
    popv(5);
    return acons(v0047, v0046, v0045);

v0049:
    v0045 = qvalue(elt(env, 2)); /* t */
    goto v0050;

v0048:
    v0045 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0045); }
/* error exit handlers */
v0052:
    popv(5);
    return nil;
}



/* Code for mconv */

static Lisp_Object CC_mconv(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0055;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mconv");
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
    v0055 = qvalue(elt(env, 1)); /* dmode!* */
    fn = elt(env, 2); /* dmconv0 */
    v0055 = (*qfn1(fn))(qenv(fn), v0055);
    nil = C_nil;
    if (exception_pending()) goto v0056;
    env = stack[-1];
    v0055 = stack[0];
    {
        popv(2);
        fn = elt(env, 3); /* mconv1 */
        return (*qfn1(fn))(qenv(fn), v0055);
    }
/* error exit handlers */
v0056:
    popv(2);
    return nil;
}



/* Code for hevenp */

static Lisp_Object CC_hevenp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0057, v0058;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for hevenp");
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
    v0058 = v0000;
/* end of prologue */
    v0057 = v0058;
    if (v0057 == nil) goto v0059;
    v0057 = v0058;
    v0057 = qcdr(v0057);
    v0057 = CC_hevenp(env, v0057);
    errexit();
    v0057 = (v0057 == nil ? lisp_true : nil);
    return onevalue(v0057);

v0059:
    v0057 = qvalue(elt(env, 1)); /* t */
    return onevalue(v0057);
}



/* Code for anforml */

static Lisp_Object CC_anforml(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0070, v0071;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for anforml");
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

v0055:
    v0070 = stack[0];
    if (!consp(v0070)) goto v0048;
    v0070 = stack[0];
    v0070 = qcar(v0070);
    fn = elt(env, 6); /* anform */
    v0070 = (*qfn1(fn))(qenv(fn), v0070);
    nil = C_nil;
    if (exception_pending()) goto v0072;
    env = stack[-1];
    v0070 = stack[0];
    v0070 = qcdr(v0070);
    stack[0] = v0070;
    goto v0055;

v0048:
    v0070 = stack[0];
    if (v0070 == nil) goto v0073;
    v0070 = qvalue(elt(env, 2)); /* !*globals */
    if (v0070 == nil) goto v0073;
    v0070 = stack[0];
    if (v0070 == nil) goto v0073;
    v0071 = stack[0];
    v0070 = lisp_true;
    if (v0071 == v0070) goto v0074;
    v0070 = stack[0];
    if (symbolp(v0070)) goto v0037;
    v0070 = qvalue(elt(env, 1)); /* nil */
    goto v0075;

v0075:
    if (v0070 == nil) goto v0073;
    v0071 = stack[0];
    v0070 = elt(env, 4); /* glb2rf */
    v0070 = Lflagp(nil, v0071, v0070);
    env = stack[-1];
    if (!(v0070 == nil)) goto v0073;
    v0070 = stack[0];
    v0071 = ncons(v0070);
    nil = C_nil;
    if (exception_pending()) goto v0072;
    env = stack[-1];
    v0070 = elt(env, 4); /* glb2rf */
    v0070 = Lflag(nil, v0071, v0070);
    nil = C_nil;
    if (exception_pending()) goto v0072;
    env = stack[-1];
    v0071 = stack[0];
    v0070 = qvalue(elt(env, 5)); /* globs!* */
    v0070 = cons(v0071, v0070);
    nil = C_nil;
    if (exception_pending()) goto v0072;
    env = stack[-1];
    qvalue(elt(env, 5)) = v0070; /* globs!* */
    goto v0073;

v0073:
    v0070 = nil;
    { popv(2); return onevalue(v0070); }

v0037:
    v0071 = stack[0];
    v0070 = qvalue(elt(env, 3)); /* locls!* */
    v0070 = Lassoc(nil, v0071, v0070);
    v0070 = (v0070 == nil ? lisp_true : nil);
    goto v0075;

v0074:
    v0070 = qvalue(elt(env, 1)); /* nil */
    goto v0075;
/* error exit handlers */
v0072:
    popv(2);
    return nil;
}



/* Code for !*sqprint */

static Lisp_Object CC_Hsqprint(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0055;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for *sqprint");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0055 = v0000;
/* end of prologue */
    v0055 = qcdr(v0055);
    v0055 = qcar(v0055);
    {
        fn = elt(env, 1); /* sqprint */
        return (*qfn1(fn))(qenv(fn), v0055);
    }
}



/* Code for ibalp_istotal */

static Lisp_Object CC_ibalp_istotal(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0076, v0077;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ibalp_istotal");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0076 = v0000;
/* end of prologue */

v0078:
    v0077 = v0076;
    if (v0077 == nil) goto v0059;
    v0077 = v0076;
    v0077 = qcar(v0077);
    v0077 = qcdr(v0077);
    v0077 = qcdr(v0077);
    v0077 = qcar(v0077);
    if (v0077 == nil) goto v0050;
    v0076 = qcdr(v0076);
    goto v0078;

v0050:
    v0076 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0076);

v0059:
    v0076 = qvalue(elt(env, 1)); /* t */
    return onevalue(v0076);
}



/* Code for equal!: */

static Lisp_Object CC_equalT(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0039, v0082;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for equal:");
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
    v0039 = stack[-1];
    v0039 = qcdr(v0039);
    v0039 = qcar(v0039);
    v0039 = (Lisp_Object)zerop(v0039);
    v0039 = v0039 ? lisp_true : nil;
    env = stack[-3];
    if (v0039 == nil) goto v0056;
    v0039 = stack[0];
    v0039 = qcdr(v0039);
    v0039 = qcar(v0039);
    v0039 = (Lisp_Object)zerop(v0039);
    v0039 = v0039 ? lisp_true : nil;
    env = stack[-3];
    goto v0083;

v0083:
    if (!(v0039 == nil)) { popv(4); return onevalue(v0039); }
    v0039 = stack[-1];
    fn = elt(env, 2); /* normbf */
    v0039 = (*qfn1(fn))(qenv(fn), v0039);
    nil = C_nil;
    if (exception_pending()) goto v0067;
    env = stack[-3];
    stack[-1] = v0039;
    v0039 = qcdr(v0039);
    stack[-2] = qcdr(v0039);
    v0039 = stack[0];
    fn = elt(env, 2); /* normbf */
    v0039 = (*qfn1(fn))(qenv(fn), v0039);
    nil = C_nil;
    if (exception_pending()) goto v0067;
    env = stack[-3];
    stack[0] = v0039;
    v0039 = qcdr(v0039);
    v0039 = qcdr(v0039);
    if (equal(stack[-2], v0039)) goto v0084;
    v0039 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v0039); }

v0084:
    v0039 = stack[-1];
    v0039 = qcdr(v0039);
    v0082 = qcar(v0039);
    v0039 = stack[0];
    v0039 = qcdr(v0039);
    v0039 = qcar(v0039);
    v0039 = (equal(v0082, v0039) ? lisp_true : nil);
    { popv(4); return onevalue(v0039); }

v0056:
    v0039 = qvalue(elt(env, 1)); /* nil */
    goto v0083;
/* error exit handlers */
v0067:
    popv(4);
    return nil;
}



/* Code for difff */

static Lisp_Object CC_difff(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0101, v0019, v0102;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for difff");
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
    v0101 = stack[-2];
    if (!consp(v0101)) goto v0103;
    v0101 = stack[-2];
    v0101 = qcar(v0101);
    if (!consp(v0101)) goto v0104;
    v0101 = stack[-2];
    v0101 = qcar(v0101);
    v0019 = qcar(v0101);
    v0101 = (Lisp_Object)17; /* 1 */
    v0101 = cons(v0019, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0105;
    env = stack[-4];
    v0019 = ncons(v0101);
    nil = C_nil;
    if (exception_pending()) goto v0105;
    env = stack[-4];
    v0101 = (Lisp_Object)17; /* 1 */
    stack[0] = cons(v0019, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0105;
    env = stack[-4];
    v0101 = stack[-2];
    v0101 = qcar(v0101);
    v0019 = qcdr(v0101);
    v0101 = stack[-1];
    v0101 = CC_difff(env, v0019, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0105;
    env = stack[-4];
    fn = elt(env, 3); /* multsq */
    stack[-3] = (*qfn2(fn))(qenv(fn), stack[0], v0101);
    nil = C_nil;
    if (exception_pending()) goto v0105;
    env = stack[-4];
    v0101 = stack[-2];
    v0101 = qcar(v0101);
    v0019 = qcar(v0101);
    v0101 = stack[-1];
    fn = elt(env, 4); /* diffp */
    stack[0] = (*qfn2(fn))(qenv(fn), v0019, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0105;
    env = stack[-4];
    v0101 = stack[-2];
    v0101 = qcar(v0101);
    v0019 = qcdr(v0101);
    v0101 = (Lisp_Object)17; /* 1 */
    v0101 = cons(v0019, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0105;
    env = stack[-4];
    fn = elt(env, 3); /* multsq */
    v0101 = (*qfn2(fn))(qenv(fn), stack[0], v0101);
    nil = C_nil;
    if (exception_pending()) goto v0105;
    env = stack[-4];
    fn = elt(env, 5); /* addsq */
    stack[0] = (*qfn2(fn))(qenv(fn), stack[-3], v0101);
    nil = C_nil;
    if (exception_pending()) goto v0105;
    env = stack[-4];
    v0101 = stack[-2];
    v0019 = qcdr(v0101);
    v0101 = stack[-1];
    v0101 = CC_difff(env, v0019, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0105;
    env = stack[-4];
    {
        Lisp_Object v0106 = stack[0];
        popv(5);
        fn = elt(env, 5); /* addsq */
        return (*qfn2(fn))(qenv(fn), v0106, v0101);
    }

v0104:
    v0101 = stack[-2];
    v0019 = qcar(v0101);
    v0101 = elt(env, 2); /* domain!-diff!-fn */
    v0101 = get(v0019, v0101);
    env = stack[-4];
    v0019 = v0101;
    v0101 = v0019;
    if (v0101 == nil) goto v0107;
    v0102 = v0019;
    v0019 = stack[-2];
    v0101 = stack[-1];
        popv(5);
        return Lapply2(nil, 3, v0102, v0019, v0101);

v0107:
    v0019 = qvalue(elt(env, 1)); /* nil */
    v0101 = (Lisp_Object)17; /* 1 */
    popv(5);
    return cons(v0019, v0101);

v0103:
    v0019 = qvalue(elt(env, 1)); /* nil */
    v0101 = (Lisp_Object)17; /* 1 */
    popv(5);
    return cons(v0019, v0101);
/* error exit handlers */
v0105:
    popv(5);
    return nil;
}



/* Code for c!:extmult */

static Lisp_Object CC_cTextmult(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0118, v0017;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for c:extmult");
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
    v0118 = stack[-2];
    if (v0118 == nil) goto v0103;
    v0118 = stack[-1];
    v0118 = (v0118 == nil ? lisp_true : nil);
    goto v0056;

v0056:
    if (v0118 == nil) goto v0119;
    v0118 = qvalue(elt(env, 2)); /* nil */
    { popv(5); return onevalue(v0118); }

v0119:
    v0017 = stack[-1];
    v0118 = (Lisp_Object)17; /* 1 */
    if (v0017 == v0118) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v0118 = stack[-2];
    v0118 = qcar(v0118);
    v0118 = qcar(v0118);
    v0017 = qcar(v0118);
    v0118 = stack[-1];
    v0118 = qcar(v0118);
    v0118 = qcar(v0118);
    fn = elt(env, 3); /* c!:ordexn */
    v0118 = (*qfn2(fn))(qenv(fn), v0017, v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    v0017 = v0118;
    v0118 = v0017;
    if (v0118 == nil) goto v0121;
    v0118 = v0017;
    stack[0] = qcdr(v0118);
    v0118 = v0017;
    v0118 = qcar(v0118);
    if (v0118 == nil) goto v0122;
    v0118 = stack[-2];
    v0118 = qcar(v0118);
    v0017 = qcdr(v0118);
    v0118 = stack[-1];
    v0118 = qcar(v0118);
    v0118 = qcdr(v0118);
    fn = elt(env, 4); /* c!:subs2multf */
    v0118 = (*qfn2(fn))(qenv(fn), v0017, v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    fn = elt(env, 5); /* negf */
    v0118 = (*qfn1(fn))(qenv(fn), v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    goto v0123;

v0123:
    v0118 = cons(stack[0], v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    stack[-3] = ncons(v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    v0118 = stack[-2];
    v0118 = qcar(v0118);
    v0017 = ncons(v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    v0118 = stack[-1];
    v0118 = qcdr(v0118);
    stack[0] = CC_cTextmult(env, v0017, v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    v0118 = stack[-2];
    v0017 = qcdr(v0118);
    v0118 = stack[-1];
    v0118 = CC_cTextmult(env, v0017, v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    fn = elt(env, 6); /* c!:extadd */
    v0118 = (*qfn2(fn))(qenv(fn), stack[0], v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    {
        Lisp_Object v0124 = stack[-3];
        popv(5);
        fn = elt(env, 6); /* c!:extadd */
        return (*qfn2(fn))(qenv(fn), v0124, v0118);
    }

v0122:
    v0118 = stack[-2];
    v0118 = qcar(v0118);
    v0017 = qcdr(v0118);
    v0118 = stack[-1];
    v0118 = qcar(v0118);
    v0118 = qcdr(v0118);
    fn = elt(env, 4); /* c!:subs2multf */
    v0118 = (*qfn2(fn))(qenv(fn), v0017, v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    goto v0123;

v0121:
    v0118 = stack[-2];
    v0118 = qcar(v0118);
    v0017 = ncons(v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    v0118 = stack[-1];
    v0118 = qcdr(v0118);
    stack[0] = CC_cTextmult(env, v0017, v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    v0118 = stack[-2];
    v0017 = qcdr(v0118);
    v0118 = stack[-1];
    v0118 = CC_cTextmult(env, v0017, v0118);
    nil = C_nil;
    if (exception_pending()) goto v0120;
    env = stack[-4];
    {
        Lisp_Object v0125 = stack[0];
        popv(5);
        fn = elt(env, 6); /* c!:extadd */
        return (*qfn2(fn))(qenv(fn), v0125, v0118);
    }

v0103:
    v0118 = qvalue(elt(env, 1)); /* t */
    goto v0056;
/* error exit handlers */
v0120:
    popv(5);
    return nil;
}



/* Code for symtabget */

static Lisp_Object CC_symtabget(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0107, v0128, v0038, v0037;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for symtabget");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0038 = v0001;
    v0128 = v0000;
/* end of prologue */
    v0107 = v0038;
    if (v0107 == nil) goto v0059;
    v0107 = v0128;
    if (!(v0107 == nil)) goto v0103;
    v0107 = qvalue(elt(env, 1)); /* !*symboltable!* */
    v0107 = qcar(v0107);
    goto v0103;

v0103:
    v0128 = v0107;
    goto v0059;

v0059:
    v0107 = v0128;
    if (v0107 == nil) goto v0129;
    v0107 = v0038;
    v0037 = elt(env, 2); /* (!*type!* !*params!* !*decs!*) */
    v0107 = Lmemq(nil, v0107, v0037);
    if (v0107 == nil) goto v0130;
    v0107 = v0128;
    v0128 = v0038;
    return get(v0107, v0128);

v0130:
    v0107 = v0038;
    if (!symbolp(v0128)) v0128 = nil;
    else { v0128 = qfastgets(v0128);
           if (v0128 != nil) { v0128 = elt(v0128, 58); /* !*decs!* */
#ifdef RECORD_GET
             if (v0128 != SPID_NOPROP)
                record_get(elt(fastget_names, 58), 1);
             else record_get(elt(fastget_names, 58), 0),
                v0128 = nil; }
           else record_get(elt(fastget_names, 58), 0); }
#else
             if (v0128 == SPID_NOPROP) v0128 = nil; }}
#endif
    v0107 = Lassoc(nil, v0107, v0128);
    return onevalue(v0107);

v0129:
    v0107 = qvalue(elt(env, 1)); /* !*symboltable!* */
    return onevalue(v0107);
}



/* Code for getphystype */

static Lisp_Object CC_getphystype(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0133, v0022;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for getphystype");
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
    v0133 = stack[0];
    fn = elt(env, 8); /* physopp */
    v0133 = (*qfn1(fn))(qenv(fn), v0133);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-2];
    if (v0133 == nil) goto v0056;
    v0133 = stack[0];
    fn = elt(env, 9); /* scalopp */
    v0133 = (*qfn1(fn))(qenv(fn), v0133);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-2];
    if (v0133 == nil) goto v0057;
    v0133 = elt(env, 1); /* scalar */
    { popv(3); return onevalue(v0133); }

v0057:
    v0133 = stack[0];
    fn = elt(env, 10); /* vecopp */
    v0133 = (*qfn1(fn))(qenv(fn), v0133);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-2];
    if (v0133 == nil) goto v0073;
    v0133 = elt(env, 2); /* vector */
    { popv(3); return onevalue(v0133); }

v0073:
    v0133 = stack[0];
    fn = elt(env, 11); /* tensopp */
    v0133 = (*qfn1(fn))(qenv(fn), v0133);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-2];
    if (v0133 == nil) goto v0134;
    v0133 = elt(env, 3); /* tensor */
    { popv(3); return onevalue(v0133); }

v0134:
    v0133 = stack[0];
    fn = elt(env, 12); /* po!:statep */
    v0133 = (*qfn1(fn))(qenv(fn), v0133);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-2];
    if (v0133 == nil) goto v0040;
    v0133 = elt(env, 4); /* state */
    { popv(3); return onevalue(v0133); }

v0040:
    v0133 = qvalue(elt(env, 5)); /* nil */
    { popv(3); return onevalue(v0133); }

v0056:
    v0133 = stack[0];
    if (!consp(v0133)) goto v0127;
    v0133 = stack[0];
    v0133 = qcar(v0133);
    if (!symbolp(v0133)) v0022 = nil;
    else { v0022 = qfastgets(v0133);
           if (v0022 != nil) { v0022 = elt(v0022, 18); /* phystype */
#ifdef RECORD_GET
             if (v0022 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v0022 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v0022 == SPID_NOPROP) v0022 = nil; }}
#endif
    v0133 = v0022;
    if (!(v0022 == nil)) { popv(3); return onevalue(v0133); }
    v0133 = stack[0];
    v0022 = qcar(v0133);
    v0133 = elt(env, 6); /* phystypefn */
    v0022 = get(v0022, v0133);
    env = stack[-2];
    v0133 = v0022;
    if (v0022 == nil) goto v0135;
    v0022 = v0133;
    v0133 = stack[0];
    v0133 = qcdr(v0133);
        popv(3);
        return Lapply1(nil, v0022, v0133);

v0135:
    v0133 = stack[0];
    fn = elt(env, 13); /* collectphystype */
    v0022 = (*qfn1(fn))(qenv(fn), v0133);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-2];
    v0133 = v0022;
    if (v0022 == nil) goto v0136;
    v0022 = v0133;
    v0022 = qcdr(v0022);
    if (v0022 == nil) goto v0137;
    v0022 = elt(env, 4); /* state */
    v0133 = Lmember(nil, v0022, v0133);
    if (v0133 == nil) goto v0060;
    v0133 = elt(env, 4); /* state */
    { popv(3); return onevalue(v0133); }

v0060:
    stack[-1] = elt(env, 0); /* getphystype */
    v0022 = elt(env, 7); /* "PHYSOP type conflict in" */
    v0133 = stack[0];
    v0133 = list2(v0022, v0133);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-2];
    {
        Lisp_Object v0091 = stack[-1];
        popv(3);
        fn = elt(env, 14); /* rederr2 */
        return (*qfn2(fn))(qenv(fn), v0091, v0133);
    }

v0137:
    v0133 = qcar(v0133);
    { popv(3); return onevalue(v0133); }

v0136:
    v0133 = qvalue(elt(env, 5)); /* nil */
    { popv(3); return onevalue(v0133); }

v0127:
    v0133 = qvalue(elt(env, 5)); /* nil */
    { popv(3); return onevalue(v0133); }
/* error exit handlers */
v0114:
    popv(3);
    return nil;
}



/* Code for contrsp2 */

static Lisp_Object MS_CDECL CC_contrsp2(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0074, v0138;
    Lisp_Object v0131, v0001, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "contrsp2");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0001 = va_arg(aa, Lisp_Object);
    v0131 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for contrsp2");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0131,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0001,v0131);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0131;
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */
    stack[-3] = (Lisp_Object)33; /* 2 */
    v0074 = stack[-2];
    v0074 = Llength(nil, v0074);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-4];
    if (stack[-3] == v0074) goto v0119;
    v0074 = nil;
    { popv(5); return onevalue(v0074); }

v0119:
    v0138 = stack[0];
    v0074 = stack[-2];
    v0074 = qcar(v0074);
    if (equal(v0138, v0074)) goto v0042;
    v0138 = stack[0];
    v0074 = stack[-2];
    v0074 = qcdr(v0074);
    v0074 = qcar(v0074);
    if (equal(v0138, v0074)) goto v0128;
    v0074 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0074); }

v0128:
    v0074 = stack[-2];
    v0138 = qcar(v0074);
    v0074 = stack[-1];
    popv(5);
    return cons(v0138, v0074);

v0042:
    v0074 = stack[-2];
    v0074 = qcdr(v0074);
    v0138 = qcar(v0074);
    v0074 = stack[-1];
    popv(5);
    return cons(v0138, v0074);
/* error exit handlers */
v0036:
    popv(5);
    return nil;
}



/* Code for mo!=deglist */

static Lisp_Object CC_moMdeglist(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0146, v0147;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mo=deglist");
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
    v0146 = stack[-4];
    if (v0146 == nil) goto v0059;
    v0146 = stack[-4];
    v0147 = qcar(v0146);
    v0146 = qvalue(elt(env, 3)); /* cali!=degrees */
    v0146 = Lassoc(nil, v0147, v0146);
    stack[-5] = v0146;
    v0146 = qvalue(elt(env, 1)); /* cali!=basering */
    fn = elt(env, 4); /* ring_degrees */
    v0146 = (*qfn1(fn))(qenv(fn), v0146);
    nil = C_nil;
    if (exception_pending()) goto v0109;
    env = stack[-6];
    stack[-3] = v0146;
    v0146 = stack[-3];
    if (v0146 == nil) goto v0095;
    v0146 = stack[-3];
    v0146 = qcar(v0146);
    v0147 = stack[-4];
    v0147 = qcdr(v0147);
    fn = elt(env, 5); /* mo!=sprod */
    v0146 = (*qfn2(fn))(qenv(fn), v0147, v0146);
    nil = C_nil;
    if (exception_pending()) goto v0109;
    env = stack[-6];
    v0146 = ncons(v0146);
    nil = C_nil;
    if (exception_pending()) goto v0109;
    env = stack[-6];
    stack[-1] = v0146;
    stack[-2] = v0146;
    goto v0137;

v0137:
    v0146 = stack[-3];
    v0146 = qcdr(v0146);
    stack[-3] = v0146;
    v0146 = stack[-3];
    if (v0146 == nil) goto v0112;
    stack[0] = stack[-1];
    v0146 = stack[-3];
    v0146 = qcar(v0146);
    v0147 = stack[-4];
    v0147 = qcdr(v0147);
    fn = elt(env, 5); /* mo!=sprod */
    v0146 = (*qfn2(fn))(qenv(fn), v0147, v0146);
    nil = C_nil;
    if (exception_pending()) goto v0109;
    env = stack[-6];
    v0146 = ncons(v0146);
    nil = C_nil;
    if (exception_pending()) goto v0109;
    env = stack[-6];
    v0146 = Lrplacd(nil, stack[0], v0146);
    nil = C_nil;
    if (exception_pending()) goto v0109;
    env = stack[-6];
    v0146 = stack[-1];
    v0146 = qcdr(v0146);
    stack[-1] = v0146;
    goto v0137;

v0112:
    v0146 = stack[-2];
    v0147 = v0146;
    goto v0035;

v0035:
    v0146 = stack[-5];
    if (v0146 == nil) goto v0108;
    v0146 = stack[-5];
    v0146 = qcdr(v0146);
    v0146 = qcdr(v0146);
    goto v0085;

v0085:
    {
        popv(7);
        fn = elt(env, 6); /* mo!=sum */
        return (*qfn2(fn))(qenv(fn), v0147, v0146);
    }

v0108:
    v0146 = qvalue(elt(env, 2)); /* nil */
    goto v0085;

v0095:
    v0146 = qvalue(elt(env, 2)); /* nil */
    v0147 = v0146;
    goto v0035;

v0059:
    v0146 = qvalue(elt(env, 1)); /* cali!=basering */
    fn = elt(env, 4); /* ring_degrees */
    v0146 = (*qfn1(fn))(qenv(fn), v0146);
    nil = C_nil;
    if (exception_pending()) goto v0109;
    env = stack[-6];
    stack[-3] = v0146;
    v0146 = stack[-3];
    if (v0146 == nil) goto v0148;
    v0146 = (Lisp_Object)1; /* 0 */
    v0146 = ncons(v0146);
    nil = C_nil;
    if (exception_pending()) goto v0109;
    env = stack[-6];
    stack[-1] = v0146;
    stack[-2] = v0146;
    goto v0050;

v0050:
    v0146 = stack[-3];
    v0146 = qcdr(v0146);
    stack[-3] = v0146;
    v0146 = stack[-3];
    if (v0146 == nil) { Lisp_Object res = stack[-2]; popv(7); return onevalue(res); }
    stack[0] = stack[-1];
    v0146 = (Lisp_Object)1; /* 0 */
    v0146 = ncons(v0146);
    nil = C_nil;
    if (exception_pending()) goto v0109;
    env = stack[-6];
    v0146 = Lrplacd(nil, stack[0], v0146);
    nil = C_nil;
    if (exception_pending()) goto v0109;
    env = stack[-6];
    v0146 = stack[-1];
    v0146 = qcdr(v0146);
    stack[-1] = v0146;
    goto v0050;

v0148:
    v0146 = qvalue(elt(env, 2)); /* nil */
    { popv(7); return onevalue(v0146); }
/* error exit handlers */
v0109:
    popv(7);
    return nil;
}



/* Code for pneg */

static Lisp_Object CC_pneg(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0138, v0035;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pneg");
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
    v0138 = v0000;
/* end of prologue */
    stack[-4] = v0138;
    v0138 = stack[-4];
    if (v0138 == nil) goto v0044;
    v0138 = stack[-4];
    v0138 = qcar(v0138);
    v0035 = v0138;
    v0138 = v0035;
    stack[0] = qcar(v0138);
    v0138 = v0035;
    v0138 = qcdr(v0138);
    fn = elt(env, 2); /* cneg */
    v0138 = (*qfn1(fn))(qenv(fn), v0138);
    nil = C_nil;
    if (exception_pending()) goto v0053;
    env = stack[-5];
    v0138 = cons(stack[0], v0138);
    nil = C_nil;
    if (exception_pending()) goto v0053;
    env = stack[-5];
    v0138 = ncons(v0138);
    nil = C_nil;
    if (exception_pending()) goto v0053;
    env = stack[-5];
    stack[-2] = v0138;
    stack[-3] = v0138;
    goto v0083;

v0083:
    v0138 = stack[-4];
    v0138 = qcdr(v0138);
    stack[-4] = v0138;
    v0138 = stack[-4];
    if (v0138 == nil) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    stack[-1] = stack[-2];
    v0138 = stack[-4];
    v0138 = qcar(v0138);
    v0035 = v0138;
    v0138 = v0035;
    stack[0] = qcar(v0138);
    v0138 = v0035;
    v0138 = qcdr(v0138);
    fn = elt(env, 2); /* cneg */
    v0138 = (*qfn1(fn))(qenv(fn), v0138);
    nil = C_nil;
    if (exception_pending()) goto v0053;
    env = stack[-5];
    v0138 = cons(stack[0], v0138);
    nil = C_nil;
    if (exception_pending()) goto v0053;
    env = stack[-5];
    v0138 = ncons(v0138);
    nil = C_nil;
    if (exception_pending()) goto v0053;
    env = stack[-5];
    v0138 = Lrplacd(nil, stack[-1], v0138);
    nil = C_nil;
    if (exception_pending()) goto v0053;
    env = stack[-5];
    v0138 = stack[-2];
    v0138 = qcdr(v0138);
    stack[-2] = v0138;
    goto v0083;

v0044:
    v0138 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0138); }
/* error exit handlers */
v0053:
    popv(6);
    return nil;
}



/* Code for gionep!: */

static Lisp_Object CC_gionepT(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0100, v0042, v0043;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for gionep:");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0043 = v0000;
/* end of prologue */
    v0100 = v0043;
    v0100 = qcdr(v0100);
    v0042 = qcar(v0100);
    v0100 = (Lisp_Object)17; /* 1 */
    if (v0042 == v0100) goto v0058;
    v0100 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v0100);

v0058:
    v0100 = v0043;
    v0100 = qcdr(v0100);
    v0042 = qcdr(v0100);
    v0100 = (Lisp_Object)1; /* 0 */
    v0100 = (v0042 == v0100 ? lisp_true : nil);
    return onevalue(v0100);
}



/* Code for lto_catsoc */

static Lisp_Object CC_lto_catsoc(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0073, v0119;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lto_catsoc");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0073 = v0001;
    v0119 = v0000;
/* end of prologue */
    v0073 = Latsoc(nil, v0119, v0073);
    v0119 = v0073;
    v0073 = v0119;
    if (v0073 == nil) goto v0058;
    v0073 = v0119;
    v0073 = qcdr(v0073);
    return onevalue(v0073);

v0058:
    v0073 = nil;
    return onevalue(v0073);
}



/* Code for comfac */

static Lisp_Object CC_comfac(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0159, v0160;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for comfac");
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
    v0159 = qvalue(elt(env, 1)); /* dmode!* */
    if (!symbolp(v0159)) v0159 = nil;
    else { v0159 = qfastgets(v0159);
           if (v0159 != nil) { v0159 = elt(v0159, 3); /* field */
#ifdef RECORD_GET
             if (v0159 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v0159 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v0159 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v0159 == SPID_NOPROP) v0159 = nil; else v0159 = lisp_true; }}
#endif
    if (v0159 == nil) goto v0077;
    v0159 = stack[-2];
    fn = elt(env, 4); /* lnc */
    v0160 = (*qfn1(fn))(qenv(fn), v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-4];
    stack[-3] = v0160;
    v0159 = (Lisp_Object)17; /* 1 */
    v0159 = Lneq(nil, v0160, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-4];
    goto v0050;

v0050:
    if (v0159 == nil) goto v0056;
    v0159 = stack[-3];
    fn = elt(env, 5); /* !:recip */
    v0160 = (*qfn1(fn))(qenv(fn), v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-4];
    v0159 = stack[-2];
    fn = elt(env, 6); /* multd */
    v0159 = (*qfn2(fn))(qenv(fn), v0160, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-4];
    stack[-2] = v0159;
    goto v0056;

v0056:
    v0159 = stack[-2];
    v0159 = qcdr(v0159);
    if (v0159 == nil) goto v0130;
    v0159 = stack[-2];
    v0159 = qcar(v0159);
    v0159 = qcdr(v0159);
    stack[-3] = v0159;
    v0159 = stack[-2];
    v0159 = qcar(v0159);
    v0159 = qcar(v0159);
    v0159 = qcar(v0159);
    stack[-1] = v0159;
    goto v0055;

v0055:
    v0159 = stack[-2];
    v0159 = qcdr(v0159);
    stack[-2] = v0159;
    v0160 = stack[-2];
    v0159 = stack[-1];
    fn = elt(env, 7); /* degr */
    v0160 = (*qfn2(fn))(qenv(fn), v0160, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-4];
    v0159 = (Lisp_Object)1; /* 0 */
    if (v0160 == v0159) goto v0064;
    v0159 = stack[-2];
    v0159 = qcdr(v0159);
    if (v0159 == nil) goto v0162;
    v0159 = stack[-2];
    v0159 = qcar(v0159);
    v0160 = qcdr(v0159);
    v0159 = stack[-3];
    fn = elt(env, 8); /* gcdf */
    v0159 = (*qfn2(fn))(qenv(fn), v0160, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-4];
    stack[-3] = v0159;
    goto v0055;

v0162:
    v0159 = stack[-2];
    v0159 = qcar(v0159);
    stack[0] = qcar(v0159);
    v0160 = stack[-3];
    v0159 = stack[-2];
    v0159 = qcar(v0159);
    v0159 = qcdr(v0159);
    fn = elt(env, 8); /* gcdf */
    v0159 = (*qfn2(fn))(qenv(fn), v0160, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    {
        Lisp_Object v0163 = stack[0];
        popv(5);
        return cons(v0163, v0159);
    }

v0064:
    stack[0] = qvalue(elt(env, 2)); /* nil */
    v0159 = stack[-2];
    if (!consp(v0159)) goto v0164;
    v0159 = stack[-2];
    v0159 = qcar(v0159);
    v0159 = (consp(v0159) ? nil : lisp_true);
    goto v0024;

v0024:
    if (v0159 == nil) goto v0165;
    v0159 = qvalue(elt(env, 3)); /* t */
    goto v0030;

v0030:
    if (v0159 == nil) goto v0166;
    v0160 = stack[-3];
    v0159 = stack[-2];
    fn = elt(env, 8); /* gcdf */
    v0159 = (*qfn2(fn))(qenv(fn), v0160, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    goto v0167;

v0167:
    {
        Lisp_Object v0168 = stack[0];
        popv(5);
        return cons(v0168, v0159);
    }

v0166:
    v0159 = (Lisp_Object)17; /* 1 */
    goto v0167;

v0165:
    v0159 = stack[-1];
    fn = elt(env, 9); /* noncomp */
    v0159 = (*qfn1(fn))(qenv(fn), v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-4];
    if (v0159 == nil) goto v0090;
    v0159 = stack[-2];
    v0159 = qcar(v0159);
    v0159 = qcar(v0159);
    v0159 = qcar(v0159);
    fn = elt(env, 9); /* noncomp */
    v0159 = (*qfn1(fn))(qenv(fn), v0159);
    nil = C_nil;
    if (exception_pending()) goto v0161;
    env = stack[-4];
    goto v0097;

v0097:
    v0159 = (v0159 == nil ? lisp_true : nil);
    goto v0030;

v0090:
    v0159 = qvalue(elt(env, 2)); /* nil */
    goto v0097;

v0164:
    v0159 = qvalue(elt(env, 3)); /* t */
    goto v0024;

v0130:
    v0159 = stack[-2];
    v0159 = qcar(v0159);
    { popv(5); return onevalue(v0159); }

v0077:
    v0159 = qvalue(elt(env, 2)); /* nil */
    goto v0050;
/* error exit handlers */
v0161:
    popv(5);
    return nil;
}



/* Code for setdiff */

static Lisp_Object CC_setdiff(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0042, v0043;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for setdiff");
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
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    v0042 = v0000;
/* end of prologue */

v0048:
    v0043 = stack[0];
    if (v0043 == nil) { popv(2); return onevalue(v0042); }
    v0043 = v0042;
    if (v0043 == nil) goto v0050;
    v0043 = stack[0];
    v0043 = qcar(v0043);
    v0042 = Ldelete(nil, v0043, v0042);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    env = stack[-1];
    v0043 = stack[0];
    v0043 = qcdr(v0043);
    stack[0] = v0043;
    goto v0048;

v0050:
    v0042 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0042); }
/* error exit handlers */
v0041:
    popv(2);
    return nil;
}



/* Code for preptayexp */

static Lisp_Object CC_preptayexp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0050, v0049;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for preptayexp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0049 = v0000;
/* end of prologue */
    v0050 = v0049;
    if (!consp(v0050)) return onevalue(v0049);
    v0050 = v0049;
    {
        fn = elt(env, 1); /* rnprep!: */
        return (*qfn1(fn))(qenv(fn), v0050);
    }
}



/* Code for cl_simplat */

static Lisp_Object CC_cl_simplat(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0040, v0075, v0158;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for cl_simplat");
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
    v0075 = v0001;
    v0158 = v0000;
/* end of prologue */
    v0040 = qvalue(elt(env, 1)); /* !*rlidentify */
    if (v0040 == nil) goto v0103;
    v0040 = v0158;
    fn = elt(env, 3); /* rl_simplat1 */
    v0075 = (*qfn2(fn))(qenv(fn), v0040, v0075);
    nil = C_nil;
    if (exception_pending()) goto v0127;
    env = stack[0];
    v0040 = elt(env, 2); /* cl_identifyat */
    {
        popv(1);
        fn = elt(env, 4); /* cl_apply2ats */
        return (*qfn2(fn))(qenv(fn), v0075, v0040);
    }

v0103:
    v0040 = v0158;
    {
        popv(1);
        fn = elt(env, 3); /* rl_simplat1 */
        return (*qfn2(fn))(qenv(fn), v0040, v0075);
    }
/* error exit handlers */
v0127:
    popv(1);
    return nil;
}



/* Code for ibalp_litlp */

static Lisp_Object CC_ibalp_litlp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0151;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ibalp_litlp");
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

v0078:
    v0151 = stack[0];
    if (v0151 == nil) goto v0059;
    v0151 = stack[0];
    v0151 = qcar(v0151);
    fn = elt(env, 3); /* ibalp_litp */
    v0151 = (*qfn1(fn))(qenv(fn), v0151);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    env = stack[-1];
    if (v0151 == nil) goto v0050;
    v0151 = stack[0];
    v0151 = qcdr(v0151);
    stack[0] = v0151;
    goto v0078;

v0050:
    v0151 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v0151); }

v0059:
    v0151 = qvalue(elt(env, 1)); /* t */
    { popv(2); return onevalue(v0151); }
/* error exit handlers */
v0076:
    popv(2);
    return nil;
}



/* Code for initbrsea */

static Lisp_Object MS_CDECL CC_initbrsea(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0094, v0092, v0113;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "initbrsea");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for initbrsea");
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
    v0094 = (Lisp_Object)3201; /* 200 */
    stack[-2] = v0094;
    v0094 = qvalue(elt(env, 1)); /* rowmin */
    stack[-1] = v0094;
    goto v0129;

v0129:
    v0092 = qvalue(elt(env, 2)); /* rowmax */
    v0094 = stack[-1];
    v0094 = difference2(v0092, v0094);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-3];
    v0094 = Lminusp(nil, v0094);
    env = stack[-3];
    if (v0094 == nil) goto v0040;
    fn = elt(env, 8); /* redcodmat */
    v0094 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-3];
    v0094 = qvalue(elt(env, 6)); /* codhisto */
    if (v0094 == nil) goto v0060;
    v0094 = (Lisp_Object)1; /* 0 */
    stack[0] = v0094;
    goto v0137;

v0137:
    v0092 = (Lisp_Object)3201; /* 200 */
    v0094 = stack[0];
    v0094 = difference2(v0092, v0094);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-3];
    v0094 = Lminusp(nil, v0094);
    env = stack[-3];
    if (!(v0094 == nil)) goto v0051;
    v0113 = qvalue(elt(env, 6)); /* codhisto */
    v0092 = stack[0];
    v0094 = qvalue(elt(env, 3)); /* nil */
    *(Lisp_Object *)((char *)v0113 + (CELL-TAG_VECTOR) + ((int32_t)v0092/(16/CELL))) = v0094;
    v0094 = stack[0];
    v0094 = add1(v0094);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-3];
    stack[0] = v0094;
    goto v0137;

v0051:
    v0094 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 7)) = v0094; /* headhisto */
    v0094 = (Lisp_Object)1; /* 0 */
    stack[0] = v0094;
    goto v0141;

v0141:
    v0092 = qvalue(elt(env, 2)); /* rowmax */
    v0094 = stack[0];
    v0094 = difference2(v0092, v0094);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-3];
    v0094 = Lminusp(nil, v0094);
    env = stack[-3];
    if (v0094 == nil) goto v0096;
    v0094 = nil;
    { popv(4); return onevalue(v0094); }

v0096:
    v0094 = stack[0];
    fn = elt(env, 9); /* inshisto */
    v0094 = (*qfn1(fn))(qenv(fn), v0094);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-3];
    v0094 = stack[0];
    v0094 = add1(v0094);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-3];
    stack[0] = v0094;
    goto v0141;

v0060:
    v0094 = stack[-2];
    v0094 = Lmkvect(nil, v0094);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-3];
    qvalue(elt(env, 6)) = v0094; /* codhisto */
    goto v0051;

v0040:
    stack[0] = qvalue(elt(env, 4)); /* codmat */
    v0092 = qvalue(elt(env, 5)); /* maxvar */
    v0094 = stack[-1];
    v0094 = plus2(v0092, v0094);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-3];
    v0092 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v0094/(16/CELL)));
    v0094 = (Lisp_Object)1; /* 0 */
    v0094 = *(Lisp_Object *)((char *)v0092 + (CELL-TAG_VECTOR) + ((int32_t)v0094/(16/CELL)));
    if (v0094 == nil) goto v0076;
    v0094 = stack[-1];
    fn = elt(env, 10); /* initwght */
    v0094 = (*qfn1(fn))(qenv(fn), v0094);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-3];
    goto v0076;

v0076:
    v0094 = stack[-1];
    v0094 = add1(v0094);
    nil = C_nil;
    if (exception_pending()) goto v0166;
    env = stack[-3];
    stack[-1] = v0094;
    goto v0129;
/* error exit handlers */
v0166:
    popv(4);
    return nil;
}



/* Code for !:difference */

static Lisp_Object CC_Tdifference(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0066, v0067, v0140, v0123;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for :difference");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0140 = v0001;
    v0123 = v0000;
/* end of prologue */
    v0066 = v0123;
    if (v0066 == nil) goto v0048;
    v0066 = v0140;
    if (v0066 == nil) return onevalue(v0123);
    v0067 = v0123;
    v0066 = v0140;
    if (equal(v0067, v0066)) goto v0057;
    v0066 = v0123;
    if (!consp(v0066)) goto v0100;
    v0066 = qvalue(elt(env, 1)); /* nil */
    goto v0099;

v0099:
    if (v0066 == nil) goto v0135;
    v0066 = v0123;
    v0067 = v0140;
    return difference2(v0066, v0067);

v0135:
    v0067 = v0123;
    v0066 = elt(env, 2); /* difference */
    {
        fn = elt(env, 3); /* dcombine */
        return (*qfnn(fn))(qenv(fn), 3, v0067, v0140, v0066);
    }

v0100:
    v0066 = v0140;
    v0066 = (consp(v0066) ? nil : lisp_true);
    goto v0099;

v0057:
    v0066 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v0066);

v0048:
    v0066 = v0140;
    {
        fn = elt(env, 4); /* !:minus */
        return (*qfn1(fn))(qenv(fn), v0066);
    }
}



/* Code for opnum!* */

static Lisp_Object CC_opnumH(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0036, v0032, v0053;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for opnum*");
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
    v0032 = v0000;
/* end of prologue */
    stack[-1] = nil;
    v0036 = v0032;
    if (symbolp(v0036)) goto v0056;
    stack[0] = v0032;
    v0036 = v0032;
    fn = elt(env, 3); /* collectindices */
    v0036 = (*qfn1(fn))(qenv(fn), v0036);
    nil = C_nil;
    if (exception_pending()) goto v0157;
    env = stack[-2];
    fn = elt(env, 4); /* removeindices */
    v0036 = (*qfn2(fn))(qenv(fn), stack[0], v0036);
    nil = C_nil;
    if (exception_pending()) goto v0157;
    env = stack[-2];
    v0032 = v0036;
    goto v0056;

v0056:
    v0036 = v0032;
    if (symbolp(v0036)) goto v0151;
    v0036 = v0032;
    v0036 = qcar(v0036);
    v0032 = qcdr(v0032);
    stack[-1] = v0032;
    goto v0158;

v0158:
    v0032 = v0036;
    v0036 = elt(env, 2); /* opnum */
    v0036 = get(v0032, v0036);
    env = stack[-2];
    v0053 = v0036;
    v0032 = stack[-1];
    v0036 = v0053;
    v0036 = Lassoc(nil, v0032, v0036);
    v0032 = v0036;
    if (v0036 == nil) goto v0067;
    v0036 = v0032;
    v0036 = qcdr(v0036);
    { popv(3); return onevalue(v0036); }

v0067:
    v0036 = qvalue(elt(env, 1)); /* nil */
    v0032 = v0053;
    v0036 = Lassoc(nil, v0036, v0032);
    v0036 = qcdr(v0036);
    { popv(3); return onevalue(v0036); }

v0151:
    v0036 = v0032;
    goto v0158;
/* error exit handlers */
v0157:
    popv(3);
    return nil;
}



/* Code for errorset2 */

static Lisp_Object CC_errorset2(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0148, v0150, v0073;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for errorset2");
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
    v0150 = v0000;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* !*protfg */
    qvalue(elt(env, 1)) = nil; /* !*protfg */
    v0148 = qvalue(elt(env, 2)); /* t */
    qvalue(elt(env, 1)) = v0148; /* !*protfg */
    v0073 = v0150;
    v0150 = qvalue(elt(env, 3)); /* nil */
    v0148 = qvalue(elt(env, 3)); /* nil */
    fn = elt(env, 4); /* errorset */
    v0148 = (*qfnn(fn))(qenv(fn), 3, v0073, v0150, v0148);
    nil = C_nil;
    if (exception_pending()) goto v0104;
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*protfg */
    { popv(2); return onevalue(v0148); }
/* error exit handlers */
v0104:
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*protfg */
    popv(2);
    return nil;
}



/* Code for mv!-pow!-!+ */

static Lisp_Object CC_mvKpowKL(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0081, v0084;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mv-pow-+");
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
    goto v0055;

v0055:
    v0081 = stack[-1];
    if (v0081 == nil) goto v0103;
    v0081 = stack[-1];
    v0084 = qcar(v0081);
    v0081 = stack[0];
    v0081 = qcar(v0081);
    v0084 = plus2(v0084, v0081);
    nil = C_nil;
    if (exception_pending()) goto v0069;
    env = stack[-3];
    v0081 = stack[-2];
    v0081 = cons(v0084, v0081);
    nil = C_nil;
    if (exception_pending()) goto v0069;
    env = stack[-3];
    stack[-2] = v0081;
    v0081 = stack[-1];
    v0081 = qcdr(v0081);
    stack[-1] = v0081;
    v0081 = stack[0];
    v0081 = qcdr(v0081);
    stack[0] = v0081;
    goto v0055;

v0103:
    v0081 = stack[-2];
    {
        popv(4);
        fn = elt(env, 1); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0081);
    }
/* error exit handlers */
v0069:
    popv(4);
    return nil;
}



/* Code for conv!:bf2i */

static Lisp_Object CC_convTbf2i(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0057, v0058;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for conv:bf2i");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0057 = v0000;
/* end of prologue */
    v0058 = v0057;
    v0058 = qcdr(v0058);
    v0058 = qcar(v0058);
    v0057 = qcdr(v0057);
    v0057 = qcdr(v0057);
    {
        fn = elt(env, 1); /* ashift */
        return (*qfn2(fn))(qenv(fn), v0058, v0057);
    }
}



/* Code for wulessp!* */

static Lisp_Object CC_wulesspH(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0081, v0084;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for wulessp*");
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
    v0084 = stack[-1];
    v0081 = stack[0];
    fn = elt(env, 3); /* wulessp */
    v0081 = (*qfn2(fn))(qenv(fn), v0084, v0081);
    nil = C_nil;
    if (exception_pending()) goto v0145;
    env = stack[-2];
    if (v0081 == nil) goto v0073;
    v0081 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v0081); }

v0073:
    v0084 = stack[0];
    v0081 = stack[-1];
    fn = elt(env, 3); /* wulessp */
    v0081 = (*qfn2(fn))(qenv(fn), v0084, v0081);
    nil = C_nil;
    if (exception_pending()) goto v0145;
    env = stack[-2];
    if (v0081 == nil) goto v0043;
    v0081 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v0081); }

v0043:
    v0084 = stack[-1];
    v0081 = stack[0];
    {
        popv(3);
        fn = elt(env, 4); /* totallessp */
        return (*qfn2(fn))(qenv(fn), v0084, v0081);
    }
/* error exit handlers */
v0145:
    popv(3);
    return nil;
}



/* Code for qqe_ofsf_prepat */

static Lisp_Object CC_qqe_ofsf_prepat(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0058;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for qqe_ofsf_prepat");
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
    v0058 = stack[0];
    fn = elt(env, 1); /* qqe_op */
    v0058 = (*qfn1(fn))(qenv(fn), v0058);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-1];
    fn = elt(env, 2); /* qqe_rqopp */
    v0058 = (*qfn1(fn))(qenv(fn), v0058);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-1];
    if (v0058 == nil) goto v0044;
    v0058 = stack[0];
    {
        popv(2);
        fn = elt(env, 3); /* qqe_prepat */
        return (*qfn1(fn))(qenv(fn), v0058);
    }

v0044:
    v0058 = stack[0];
    {
        popv(2);
        fn = elt(env, 4); /* ofsf_prepat */
        return (*qfn1(fn))(qenv(fn), v0058);
    }
/* error exit handlers */
v0148:
    popv(2);
    return nil;
}



/* Code for ibalp_vequal */

static Lisp_Object CC_ibalp_vequal(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0049, v0057;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ibalp_vequal");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0049 = v0001;
    v0057 = v0000;
/* end of prologue */
    v0057 = qcar(v0057);
    v0049 = qcar(v0049);
    v0049 = (v0057 == v0049 ? lisp_true : nil);
    return onevalue(v0049);
}



/* Code for quotk */

static Lisp_Object CC_quotk(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0157, v0172, v0064;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for quotk");
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
    v0157 = stack[-1];
    v0157 = qcar(v0157);
    v0172 = qcdr(v0157);
    v0157 = stack[0];
    fn = elt(env, 2); /* quotf1 */
    v0157 = (*qfn2(fn))(qenv(fn), v0172, v0157);
    nil = C_nil;
    if (exception_pending()) goto v0034;
    env = stack[-3];
    stack[-2] = v0157;
    v0157 = stack[-2];
    if (v0157 == nil) goto v0053;
    v0157 = stack[-1];
    v0157 = qcdr(v0157);
    if (v0157 == nil) goto v0099;
    v0157 = stack[-1];
    v0172 = qcdr(v0157);
    v0157 = stack[0];
    fn = elt(env, 2); /* quotf1 */
    v0157 = (*qfn2(fn))(qenv(fn), v0172, v0157);
    nil = C_nil;
    if (exception_pending()) goto v0034;
    env = stack[-3];
    v0172 = v0157;
    v0157 = v0172;
    if (v0157 == nil) goto v0136;
    v0157 = stack[-1];
    v0157 = qcar(v0157);
    v0064 = qcar(v0157);
    v0157 = stack[-2];
    popv(4);
    return acons(v0064, v0157, v0172);

v0136:
    v0157 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v0157); }

v0099:
    v0157 = stack[-1];
    v0157 = qcar(v0157);
    v0172 = qcar(v0157);
    v0157 = stack[-2];
    v0157 = cons(v0172, v0157);
    nil = C_nil;
    if (exception_pending()) goto v0034;
    popv(4);
    return ncons(v0157);

v0053:
    v0157 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v0157); }
/* error exit handlers */
v0034:
    popv(4);
    return nil;
}



/* Code for testred */

static Lisp_Object CC_testred(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0175, v0087, v0088;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for testred");
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
    stack[-1] = qvalue(elt(env, 1)); /* codmat */
    v0087 = qvalue(elt(env, 2)); /* maxvar */
    v0175 = stack[0];
    v0175 = plus2(v0087, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0102;
    env = stack[-2];
    v0087 = *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)v0175/(16/CELL)));
    v0175 = (Lisp_Object)1; /* 0 */
    v0175 = *(Lisp_Object *)((char *)v0087 + (CELL-TAG_VECTOR) + ((int32_t)v0175/(16/CELL)));
    if (v0175 == nil) goto v0048;
    stack[-1] = qvalue(elt(env, 1)); /* codmat */
    v0087 = qvalue(elt(env, 2)); /* maxvar */
    v0175 = stack[0];
    v0175 = plus2(v0087, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0102;
    env = stack[-2];
    v0087 = *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)v0175/(16/CELL)));
    v0175 = (Lisp_Object)17; /* 1 */
    v0175 = *(Lisp_Object *)((char *)v0087 + (CELL-TAG_VECTOR) + ((int32_t)v0175/(16/CELL)));
    v0175 = qcar(v0175);
    v0087 = qcar(v0175);
    v0175 = (Lisp_Object)33; /* 2 */
    v0175 = (Lisp_Object)lessp2(v0087, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0102;
    v0175 = v0175 ? lisp_true : nil;
    env = stack[-2];
    if (v0175 == nil) goto v0048;
    stack[-1] = qvalue(elt(env, 1)); /* codmat */
    v0087 = qvalue(elt(env, 2)); /* maxvar */
    v0175 = stack[0];
    v0175 = plus2(v0087, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0102;
    env = stack[-2];
    v0088 = *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)v0175/(16/CELL)));
    v0087 = (Lisp_Object)1; /* 0 */
    v0175 = qvalue(elt(env, 3)); /* nil */
    *(Lisp_Object *)((char *)v0088 + (CELL-TAG_VECTOR) + ((int32_t)v0087/(16/CELL))) = v0175;
    stack[-1] = qvalue(elt(env, 1)); /* codmat */
    v0087 = qvalue(elt(env, 2)); /* maxvar */
    v0175 = stack[0];
    v0175 = plus2(v0087, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0102;
    env = stack[-2];
    v0087 = *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)v0175/(16/CELL)));
    v0175 = (Lisp_Object)65; /* 4 */
    v0175 = *(Lisp_Object *)((char *)v0087 + (CELL-TAG_VECTOR) + ((int32_t)v0175/(16/CELL)));
    stack[-1] = v0175;
    goto v0025;

v0025:
    v0175 = stack[-1];
    if (v0175 == nil) goto v0115;
    v0175 = stack[-1];
    v0175 = qcar(v0175);
    stack[0] = v0175;
    v0175 = stack[0];
    v0087 = qcar(v0175);
    v0175 = stack[0];
    v0175 = qcdr(v0175);
    v0175 = qcar(v0175);
    fn = elt(env, 4); /* downwght1 */
    v0175 = (*qfn2(fn))(qenv(fn), v0087, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0102;
    env = stack[-2];
    v0175 = stack[0];
    v0175 = qcar(v0175);
    v0175 = CC_testred(env, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0102;
    env = stack[-2];
    v0175 = stack[-1];
    v0175 = qcdr(v0175);
    stack[-1] = v0175;
    goto v0025;

v0115:
    v0175 = qvalue(elt(env, 3)); /* nil */
    { popv(3); return onevalue(v0175); }

v0048:
    v0175 = nil;
    { popv(3); return onevalue(v0175); }
/* error exit handlers */
v0102:
    popv(3);
    return nil;
}



/* Code for xdegree */

static Lisp_Object CC_xdegree(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0057, v0058;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for xdegree");
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
    v0057 = v0000;
/* end of prologue */
    fn = elt(env, 1); /* deg!*form */
    v0057 = (*qfn1(fn))(qenv(fn), v0057);
    errexit();
    v0058 = v0057;
    v0057 = v0058;
    if (!(v0057 == nil)) return onevalue(v0058);
    v0057 = (Lisp_Object)1; /* 0 */
    return onevalue(v0057);
}



/* Code for kernp */

static Lisp_Object CC_kernp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0064, v0033, v0095;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for kernp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0033 = v0000;
/* end of prologue */
    v0064 = v0033;
    v0095 = qcdr(v0064);
    v0064 = (Lisp_Object)17; /* 1 */
    if (v0095 == v0064) goto v0059;
    v0064 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0064);

v0059:
    v0064 = v0033;
    v0064 = qcar(v0064);
    v0033 = v0064;
    v0095 = v0064;
    v0064 = v0095;
    if (!consp(v0064)) goto v0151;
    v0064 = v0095;
    v0064 = qcar(v0064);
    v0064 = (consp(v0064) ? nil : lisp_true);
    goto v0152;

v0152:
    if (v0064 == nil) goto v0129;
    v0064 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0064);

v0129:
    v0064 = v0033;
    v0064 = qcdr(v0064);
    if (v0064 == nil) goto v0069;
    v0064 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0064);

v0069:
    v0064 = v0033;
    v0064 = qcar(v0064);
    v0095 = qcdr(v0064);
    v0064 = (Lisp_Object)17; /* 1 */
    if (v0095 == v0064) goto v0038;
    v0064 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0064);

v0038:
    v0064 = v0033;
    v0064 = qcar(v0064);
    v0064 = qcar(v0064);
    v0033 = qcdr(v0064);
    v0064 = (Lisp_Object)17; /* 1 */
    v0064 = (v0033 == v0064 ? lisp_true : nil);
    return onevalue(v0064);

v0151:
    v0064 = qvalue(elt(env, 1)); /* t */
    goto v0152;
}



/* Code for crprcd */

static Lisp_Object CC_crprcd(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0119, v0104;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for crprcd");
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
    v0119 = stack[0];
    v0119 = qcdr(v0119);
    v0119 = qcar(v0119);
    fn = elt(env, 1); /* convprec!* */
    stack[-1] = (*qfn1(fn))(qenv(fn), v0119);
    nil = C_nil;
    if (exception_pending()) goto v0134;
    env = stack[-2];
    v0119 = stack[0];
    v0119 = qcdr(v0119);
    v0119 = qcdr(v0119);
    fn = elt(env, 1); /* convprec!* */
    v0119 = (*qfn1(fn))(qenv(fn), v0119);
    nil = C_nil;
    if (exception_pending()) goto v0134;
    v0104 = stack[-1];
    popv(3);
    return cons(v0104, v0119);
/* error exit handlers */
v0134:
    popv(3);
    return nil;
}



/* Code for exptf1 */

static Lisp_Object CC_exptf1(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0135, v0079;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for exptf1");
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
    v0079 = stack[0];
    v0135 = (Lisp_Object)1; /* 0 */
    if (v0079 == v0135) goto v0048;
    v0135 = stack[-1];
    stack[-2] = v0135;
    goto v0042;

v0042:
    v0135 = stack[0];
    v0079 = sub1(v0135);
    nil = C_nil;
    if (exception_pending()) goto v0037;
    env = stack[-3];
    stack[0] = v0079;
    v0135 = (Lisp_Object)1; /* 0 */
    v0135 = (Lisp_Object)greaterp2(v0079, v0135);
    nil = C_nil;
    if (exception_pending()) goto v0037;
    v0135 = v0135 ? lisp_true : nil;
    env = stack[-3];
    if (v0135 == nil) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v0079 = stack[-1];
    v0135 = stack[-2];
    fn = elt(env, 2); /* multf */
    v0135 = (*qfn2(fn))(qenv(fn), v0079, v0135);
    nil = C_nil;
    if (exception_pending()) goto v0037;
    env = stack[-3];
    stack[-2] = v0135;
    goto v0042;

v0048:
    v0135 = (Lisp_Object)17; /* 1 */
    { popv(4); return onevalue(v0135); }
/* error exit handlers */
v0037:
    popv(4);
    return nil;
}



/* Code for ofsf_ordatp */

static Lisp_Object CC_ofsf_ordatp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0068, v0065, v0080, v0126, v0135, v0079;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ofsf_ordatp");
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
    v0135 = v0001;
    v0079 = v0000;
/* end of prologue */
    v0068 = v0079;
    v0068 = qcdr(v0068);
    v0068 = qcar(v0068);
    v0126 = v0068;
    v0068 = v0135;
    v0068 = qcdr(v0068);
    v0068 = qcar(v0068);
    v0080 = v0068;
    v0065 = v0126;
    v0068 = v0080;
    if (equal(v0065, v0068)) goto v0075;
    v0068 = v0126;
    v0065 = v0080;
    fn = elt(env, 1); /* ordp */
    v0068 = (*qfn2(fn))(qenv(fn), v0068, v0065);
    errexit();
    v0068 = (v0068 == nil ? lisp_true : nil);
    return onevalue(v0068);

v0075:
    v0068 = v0079;
    v0068 = qcar(v0068);
    v0065 = v0135;
    v0065 = qcar(v0065);
    {
        fn = elt(env, 2); /* ofsf_ordrelp */
        return (*qfn2(fn))(qenv(fn), v0068, v0065);
    }
}



/* Code for rmplus */

static Lisp_Object CC_rmplus(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0119, v0104, v0152;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rmplus");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0104 = v0000;
/* end of prologue */
    v0119 = v0104;
    v0152 = elt(env, 1); /* plus */
    if (!consp(v0119)) goto v0129;
    v0119 = qcar(v0119);
    if (!(v0119 == v0152)) goto v0129;
    v0119 = v0104;
    v0119 = qcdr(v0119);
    return onevalue(v0119);

v0129:
    v0119 = v0104;
    return ncons(v0119);
}



/* Code for ordpa */

static Lisp_Object CC_ordpa(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0170, v0115, v0026, v0177;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ordpa");
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
    v0115 = v0001;
    v0026 = v0000;
/* end of prologue */

v0048:
    v0170 = v0026;
    if (v0170 == nil) goto v0056;
    v0170 = v0115;
    if (v0170 == nil) goto v0049;
    v0170 = v0026;
    v0170 = Lsimple_vectorp(nil, v0170);
    env = stack[0];
    if (v0170 == nil) goto v0150;
    v0170 = v0115;
    v0170 = Lsimple_vectorp(nil, v0170);
    env = stack[0];
    if (v0170 == nil) goto v0158;
    v0170 = v0026;
    {
        popv(1);
        fn = elt(env, 3); /* ordpv */
        return (*qfn2(fn))(qenv(fn), v0170, v0115);
    }

v0158:
    v0170 = v0115;
    v0170 = (consp(v0170) ? nil : lisp_true);
    { popv(1); return onevalue(v0170); }

v0150:
    v0170 = v0026;
    if (!consp(v0170)) goto v0117;
    v0170 = v0115;
    if (!consp(v0170)) goto v0031;
    v0170 = v0026;
    v0177 = qcar(v0170);
    v0170 = v0115;
    v0170 = qcar(v0170);
    if (equal(v0177, v0170)) goto v0060;
    v0170 = v0026;
    v0170 = qcar(v0170);
    v0026 = v0170;
    v0170 = v0115;
    v0170 = qcar(v0170);
    v0115 = v0170;
    goto v0048;

v0060:
    v0170 = v0026;
    v0170 = qcdr(v0170);
    v0026 = v0170;
    v0170 = v0115;
    v0170 = qcdr(v0170);
    v0115 = v0170;
    goto v0048;

v0031:
    v0170 = qvalue(elt(env, 1)); /* t */
    { popv(1); return onevalue(v0170); }

v0117:
    v0170 = v0115;
    if (!consp(v0170)) goto v0065;
    v0170 = qvalue(elt(env, 2)); /* nil */
    { popv(1); return onevalue(v0170); }

v0065:
    v0170 = v0026;
    if (is_number(v0170)) goto v0107;
    v0170 = v0115;
    if (symbolp(v0170)) goto v0172;
    v0170 = v0115;
    v0170 = (is_number(v0170) ? lisp_true : nil);
    { popv(1); return onevalue(v0170); }

v0172:
    v0170 = v0026;
        popv(1);
        return Lorderp(nil, v0170, v0115);

v0107:
    v0170 = v0115;
    if (is_number(v0170)) goto v0067;
    v0170 = qvalue(elt(env, 2)); /* nil */
    { popv(1); return onevalue(v0170); }

v0067:
    v0170 = v0026;
    v0170 = (Lisp_Object)lessp2(v0170, v0115);
    nil = C_nil;
    if (exception_pending()) goto v0178;
    v0170 = v0170 ? lisp_true : nil;
    v0170 = (v0170 == nil ? lisp_true : nil);
    { popv(1); return onevalue(v0170); }

v0049:
    v0170 = qvalue(elt(env, 1)); /* t */
    { popv(1); return onevalue(v0170); }

v0056:
    v0170 = v0115;
    v0170 = (v0170 == nil ? lisp_true : nil);
    { popv(1); return onevalue(v0170); }
/* error exit handlers */
v0178:
    popv(1);
    return nil;
}



/* Code for rl_simp */

static Lisp_Object CC_rl_simp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0048;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rl_simp");
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
    v0048 = v0000;
/* end of prologue */
    fn = elt(env, 1); /* rl_simp1 */
    v0048 = (*qfn1(fn))(qenv(fn), v0048);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 2); /* rl_csimpl */
        return (*qfn1(fn))(qenv(fn), v0048);
    }
/* error exit handlers */
v0055:
    popv(1);
    return nil;
}



/* Code for wuorderp */

static Lisp_Object CC_wuorderp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0178, v0179, v0093, v0094, v0092, v0113;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for wuorderp");
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
    v0092 = v0001;
    v0113 = v0000;
/* end of prologue */
    v0093 = nil;
    v0179 = v0113;
    v0178 = v0092;
    if (v0179 == v0178) goto v0103;
    v0178 = qvalue(elt(env, 2)); /* wukord!* */
    v0094 = v0178;
    goto v0152;

v0152:
    v0178 = v0094;
    if (v0178 == nil) goto v0104;
    v0178 = v0093;
    if (!(v0178 == nil)) goto v0104;
    v0179 = v0113;
    v0178 = v0094;
    v0178 = qcar(v0178);
    if (v0179 == v0178) goto v0079;
    v0179 = v0092;
    v0178 = v0094;
    v0178 = qcar(v0178);
    if (v0179 == v0178) goto v0033;
    v0178 = v0094;
    v0178 = qcdr(v0178);
    v0094 = v0178;
    goto v0152;

v0033:
    v0179 = v0113;
    v0178 = v0094;
    v0178 = qcdr(v0178);
    v0178 = Lmemq(nil, v0179, v0178);
    if (v0178 == nil) goto v0030;
    v0178 = elt(env, 4); /* no */
    goto v0157;

v0157:
    v0093 = v0178;
    goto v0152;

v0030:
    v0178 = elt(env, 3); /* yes */
    goto v0157;

v0079:
    v0179 = v0092;
    v0178 = v0094;
    v0178 = qcdr(v0178);
    v0178 = Lmemq(nil, v0179, v0178);
    if (v0178 == nil) goto v0067;
    v0178 = elt(env, 3); /* yes */
    goto v0080;

v0080:
    v0093 = v0178;
    goto v0152;

v0067:
    v0178 = elt(env, 4); /* no */
    goto v0080;

v0104:
    v0178 = v0093;
    if (v0178 == nil) goto v0142;
    v0178 = v0093;
    v0179 = elt(env, 3); /* yes */
    v0178 = (v0178 == v0179 ? lisp_true : nil);
    return onevalue(v0178);

v0142:
    v0178 = v0113;
    v0179 = v0092;
    v0178 = Lorderp(nil, v0178, v0179);
    errexit();
    v0178 = (v0178 == nil ? lisp_true : nil);
    return onevalue(v0178);

v0103:
    v0178 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v0178);
}



/* Code for matrix!+p */

static Lisp_Object CC_matrixLp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0051, v0066;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for matrix+p");
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
    v0051 = stack[0];
    v0066 = Llength(nil, v0051);
    nil = C_nil;
    if (exception_pending()) goto v0138;
    env = stack[-4];
    v0051 = (Lisp_Object)17; /* 1 */
    v0051 = (Lisp_Object)lessp2(v0066, v0051);
    nil = C_nil;
    if (exception_pending()) goto v0138;
    v0051 = v0051 ? lisp_true : nil;
    env = stack[-4];
    if (v0051 == nil) goto v0056;
    v0051 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0051); }

v0056:
    v0051 = stack[0];
    v0051 = qcar(v0051);
    v0051 = Llength(nil, v0051);
    nil = C_nil;
    if (exception_pending()) goto v0138;
    env = stack[-4];
    stack[-3] = v0051;
    v0051 = qvalue(elt(env, 2)); /* t */
    stack[-2] = v0051;
    v0051 = stack[0];
    v0051 = qcdr(v0051);
    stack[-1] = v0051;
    goto v0100;

v0100:
    v0051 = stack[-1];
    if (v0051 == nil) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v0051 = stack[-1];
    v0051 = qcar(v0051);
    stack[0] = stack[-3];
    v0051 = Llength(nil, v0051);
    nil = C_nil;
    if (exception_pending()) goto v0138;
    env = stack[-4];
    if (equal(stack[0], v0051)) goto v0145;
    v0051 = qvalue(elt(env, 1)); /* nil */
    stack[-2] = v0051;
    goto v0145;

v0145:
    v0051 = stack[-1];
    v0051 = qcdr(v0051);
    stack[-1] = v0051;
    goto v0100;
/* error exit handlers */
v0138:
    popv(5);
    return nil;
}



/* Code for ibalp_simpat */

static Lisp_Object CC_ibalp_simpat(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0104;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ibalp_simpat");
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
    v0104 = stack[-1];
    stack[-2] = qcar(v0104);
    v0104 = stack[-1];
    v0104 = qcdr(v0104);
    v0104 = qcar(v0104);
    fn = elt(env, 1); /* ibalp_simpterm */
    stack[0] = (*qfn1(fn))(qenv(fn), v0104);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    env = stack[-3];
    v0104 = stack[-1];
    v0104 = qcdr(v0104);
    v0104 = qcdr(v0104);
    v0104 = qcar(v0104);
    fn = elt(env, 1); /* ibalp_simpterm */
    v0104 = (*qfn1(fn))(qenv(fn), v0104);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    env = stack[-3];
    {
        Lisp_Object v0077 = stack[-2];
        Lisp_Object v0099 = stack[0];
        popv(4);
        fn = elt(env, 2); /* ibalp_mk2 */
        return (*qfnn(fn))(qenv(fn), 3, v0077, v0099, v0104);
    }
/* error exit handlers */
v0076:
    popv(4);
    return nil;
}



/* Code for objectom */

static Lisp_Object CC_objectom(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0126, v0135, v0079;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for objectom");
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
    v0135 = v0000;
/* end of prologue */
    v0126 = v0135;
    v0126 = Lconsp(nil, v0126);
    env = stack[-1];
    if (v0126 == nil) goto v0069;
    v0126 = v0135;
    v0079 = qcar(v0126);
    v0126 = qvalue(elt(env, 1)); /* ir2mml!* */
    v0126 = Lassoc(nil, v0079, v0126);
    v0079 = v0126;
    if (v0126 == nil) goto v0081;
    v0126 = v0079;
    v0126 = qcdr(v0126);
    v0126 = qcdr(v0126);
    v0126 = qcdr(v0126);
    stack[0] = qcar(v0126);
    v0126 = v0135;
    v0126 = ncons(v0126);
    nil = C_nil;
    if (exception_pending()) goto v0128;
    env = stack[-1];
    fn = elt(env, 3); /* apply */
    v0126 = (*qfn2(fn))(qenv(fn), stack[0], v0126);
    nil = C_nil;
    if (exception_pending()) goto v0128;
    goto v0055;

v0055:
    v0126 = nil;
    { popv(2); return onevalue(v0126); }

v0081:
    v0126 = v0135;
    fn = elt(env, 4); /* fnom */
    v0126 = (*qfn1(fn))(qenv(fn), v0126);
    nil = C_nil;
    if (exception_pending()) goto v0128;
    goto v0055;

v0069:
    v0126 = v0135;
    fn = elt(env, 5); /* basicom */
    v0126 = (*qfn1(fn))(qenv(fn), v0126);
    nil = C_nil;
    if (exception_pending()) goto v0128;
    goto v0055;
/* error exit handlers */
v0128:
    popv(2);
    return nil;
}



/* Code for ident */

static Lisp_Object CC_ident(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object v0149;
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ident");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0149 = v0000;
/* end of prologue */
    return onevalue(v0149);
}



/* Code for dim!<deg */

static Lisp_Object CC_dimRdeg(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0100, v0042;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dim<deg");
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
    v0100 = v0000;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* dimex!* */
    fn = elt(env, 4); /* deg!*farg */
    v0100 = (*qfn1(fn))(qenv(fn), v0100);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-1];
    fn = elt(env, 5); /* negf */
    v0100 = (*qfn1(fn))(qenv(fn), v0100);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-1];
    fn = elt(env, 6); /* addf */
    v0100 = (*qfn2(fn))(qenv(fn), stack[0], v0100);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-1];
    v0042 = v0100;
    v0100 = v0042;
    if (!(is_number(v0100))) goto v0076;
    v0100 = v0042;
    v0100 = Lminusp(nil, v0100);
    env = stack[-1];
    if (v0100 == nil) goto v0076;
    v0100 = qvalue(elt(env, 2)); /* t */
    { popv(2); return onevalue(v0100); }

v0076:
    v0100 = qvalue(elt(env, 3)); /* nil */
    { popv(2); return onevalue(v0100); }
/* error exit handlers */
v0169:
    popv(2);
    return nil;
}



/* Code for id2bytelist */

static Lisp_Object CC_id2bytelist(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0048;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for id2bytelist");
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
    v0048 = v0000;
/* end of prologue */
    fn = elt(env, 1); /* id2string */
    v0048 = (*qfn1(fn))(qenv(fn), v0048);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 2); /* string2bytelist */
        return (*qfn1(fn))(qenv(fn), v0048);
    }
/* error exit handlers */
v0055:
    popv(1);
    return nil;
}



/* Code for assert_analyze */

static Lisp_Object MS_CDECL CC_assert_analyze(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0190, v0191;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "assert_analyze");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for assert_analyze");
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
    push5(nil, nil, nil, nil, nil);
/* end of prologue */
    v0190 = (Lisp_Object)1; /* 0 */
    stack[0] = v0190;
    v0190 = (Lisp_Object)1; /* 0 */
    stack[-4] = v0190;
    v0190 = (Lisp_Object)1; /* 0 */
    stack[-2] = v0190;
    v0191 = qvalue(elt(env, 1)); /* assertstatistics!* */
    v0190 = elt(env, 2); /* lambda_wrlijy187crc */
    fn = elt(env, 8); /* sort */
    v0190 = (*qfn2(fn))(qenv(fn), v0191, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    qvalue(elt(env, 1)) = v0190; /* assertstatistics!* */
    v0190 = qvalue(elt(env, 1)); /* assertstatistics!* */
    stack[-3] = v0190;
    goto v0152;

v0152:
    v0190 = stack[-3];
    if (v0190 == nil) goto v0104;
    v0190 = stack[-3];
    v0190 = qcar(v0190);
    stack[-1] = v0190;
    v0191 = stack[0];
    v0190 = stack[-1];
    v0190 = qcdr(v0190);
    v0190 = qcar(v0190);
    v0190 = plus2(v0191, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    stack[0] = v0190;
    v0191 = stack[-4];
    v0190 = stack[-1];
    v0190 = qcdr(v0190);
    v0190 = qcdr(v0190);
    v0190 = qcar(v0190);
    v0190 = plus2(v0191, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    stack[-4] = v0190;
    v0191 = stack[-2];
    v0190 = stack[-1];
    v0190 = qcdr(v0190);
    v0190 = qcdr(v0190);
    v0190 = qcdr(v0190);
    v0190 = qcar(v0190);
    v0190 = plus2(v0191, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    stack[-2] = v0190;
    v0190 = stack[-3];
    v0190 = qcdr(v0190);
    stack[-3] = v0190;
    goto v0152;

v0104:
    v0190 = elt(env, 4); /* (function !#calls !#bad! calls !#assertion! violations) 
*/
    stack[-3] = v0190;
    stack[-1] = elt(env, 5); /* sum */
    v0191 = stack[-4];
    v0190 = stack[-2];
    v0190 = list2(v0191, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = list2star(stack[-1], stack[0], v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    stack[-4] = qvalue(elt(env, 3)); /* nil */
    stack[-2] = qvalue(elt(env, 3)); /* nil */
    stack[-1] = qvalue(elt(env, 3)); /* nil */
    stack[0] = v0190;
    v0191 = qvalue(elt(env, 3)); /* nil */
    v0190 = qvalue(elt(env, 1)); /* assertstatistics!* */
    v0190 = cons(v0191, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = list2star(stack[-1], stack[0], v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = Lnreverse(nil, v0190);
    env = stack[-5];
    v0190 = cons(stack[-2], v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = list2star(stack[-4], stack[-3], v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    qvalue(elt(env, 1)) = v0190; /* assertstatistics!* */
    v0190 = qvalue(elt(env, 1)); /* assertstatistics!* */
    stack[-2] = v0190;
    goto v0029;

v0029:
    v0190 = stack[-2];
    if (v0190 == nil) goto v0166;
    v0190 = stack[-2];
    v0190 = qcar(v0190);
    stack[-1] = v0190;
    v0190 = stack[-1];
    if (v0190 == nil) goto v0193;
    v0190 = stack[-1];
    v0190 = qcar(v0190);
    v0190 = Lprinc(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = stack[-1];
    v0190 = qcar(v0190);
    v0190 = Lexplodec(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    stack[0] = Llength(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = stack[-1];
    v0190 = qcdr(v0190);
    v0190 = qcar(v0190);
    v0190 = Lexplodec(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = Llength(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = plus2(stack[0], v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    stack[0] = v0190;
    goto v0163;

v0163:
    v0191 = (Lisp_Object)369; /* 23 */
    v0190 = stack[0];
    v0190 = difference2(v0191, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = Lminusp(nil, v0190);
    env = stack[-5];
    if (v0190 == nil) goto v0194;
    v0190 = stack[-1];
    v0190 = qcdr(v0190);
    v0190 = qcar(v0190);
    v0190 = Lprinc(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = stack[-1];
    v0190 = qcdr(v0190);
    v0190 = qcdr(v0190);
    v0190 = qcar(v0190);
    v0190 = Lexplodec(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = Llength(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    stack[0] = v0190;
    goto v0195;

v0195:
    v0191 = (Lisp_Object)369; /* 23 */
    v0190 = stack[0];
    v0190 = difference2(v0191, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = Lminusp(nil, v0190);
    env = stack[-5];
    if (v0190 == nil) goto v0008;
    v0190 = stack[-1];
    v0190 = qcdr(v0190);
    v0190 = qcdr(v0190);
    v0190 = qcar(v0190);
    v0190 = Lprinc(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = stack[-1];
    v0190 = qcdr(v0190);
    v0190 = qcdr(v0190);
    v0190 = qcdr(v0190);
    v0190 = qcar(v0190);
    v0190 = Lexplodec(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = Llength(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    stack[0] = v0190;
    goto v0196;

v0196:
    v0191 = (Lisp_Object)369; /* 23 */
    v0190 = stack[0];
    v0190 = difference2(v0191, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = Lminusp(nil, v0190);
    env = stack[-5];
    if (v0190 == nil) goto v0197;
    v0190 = stack[-1];
    v0190 = qcdr(v0190);
    v0190 = qcdr(v0190);
    v0190 = qcdr(v0190);
    v0190 = qcar(v0190);
    fn = elt(env, 9); /* prin2t */
    v0190 = (*qfn1(fn))(qenv(fn), v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    goto v0088;

v0088:
    v0190 = stack[-2];
    v0190 = qcdr(v0190);
    stack[-2] = v0190;
    goto v0029;

v0197:
    v0190 = elt(env, 6); /* " " */
    v0190 = Lprinc(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = stack[0];
    v0190 = add1(v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    stack[0] = v0190;
    goto v0196;

v0008:
    v0190 = elt(env, 6); /* " " */
    v0190 = Lprinc(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = stack[0];
    v0190 = add1(v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    stack[0] = v0190;
    goto v0195;

v0194:
    v0190 = elt(env, 6); /* " " */
    v0190 = Lprinc(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = stack[0];
    v0190 = add1(v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    stack[0] = v0190;
    goto v0163;

v0193:
    v0190 = (Lisp_Object)17; /* 1 */
    stack[0] = v0190;
    goto v0198;

v0198:
    v0191 = (Lisp_Object)1153; /* 72 */
    v0190 = stack[0];
    v0190 = difference2(v0191, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = Lminusp(nil, v0190);
    env = stack[-5];
    if (v0190 == nil) goto v0199;
    v0190 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    goto v0088;

v0199:
    v0190 = elt(env, 7); /* "-" */
    v0190 = Lprinc(nil, v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    v0190 = stack[0];
    v0190 = add1(v0190);
    nil = C_nil;
    if (exception_pending()) goto v0192;
    env = stack[-5];
    stack[0] = v0190;
    goto v0198;

v0166:
    v0190 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 1)) = v0190; /* assertstatistics!* */
    v0190 = nil;
    { popv(6); return onevalue(v0190); }
/* error exit handlers */
v0192:
    popv(6);
    return nil;
}



/* Code for lambda_wrlijy187crc */

static Lisp_Object CC_lambda_wrlijy187crc(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0049, v0057;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lambda_wrlijy187crc");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0057 = v0001;
    v0049 = v0000;
/* end of prologue */
    v0057 = qcar(v0057);
    v0049 = qcar(v0049);
    {
        fn = elt(env, 1); /* ordp */
        return (*qfn2(fn))(qenv(fn), v0057, v0049);
    }
}



/* Code for maprint */

static Lisp_Object CC_maprint(Lisp_Object env,
                         Lisp_Object v0001, Lisp_Object v0131)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0209, v0210, v0211;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for maprint");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0131,v0001);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0001,v0131);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    v0209 = v0131;
    stack[-3] = v0001;
/* end of prologue */
    stack[-4] = qvalue(elt(env, 1)); /* p!*!* */
    qvalue(elt(env, 1)) = nil; /* p!*!* */
    qvalue(elt(env, 1)) = v0209; /* p!*!* */
    stack[0] = nil;
    v0209 = qvalue(elt(env, 1)); /* p!*!* */
    stack[-2] = v0209;
    v0209 = stack[-3];
    if (v0209 == nil) goto v0129;
    v0209 = stack[-3];
    if (!consp(v0209)) goto v0119;
    v0209 = stack[-3];
    v0209 = qcar(v0209);
    if (!consp(v0209)) goto v0144;
    v0209 = stack[-3];
    v0210 = qcar(v0209);
    v0209 = stack[-2];
    v0209 = CC_maprint(env, v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    goto v0058;

v0058:
    v0209 = elt(env, 5); /* "(" */
    fn = elt(env, 12); /* prin2!* */
    v0209 = (*qfn1(fn))(qenv(fn), v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    v0209 = qvalue(elt(env, 2)); /* nil */
    qvalue(elt(env, 10)) = v0209; /* obrkp!* */
    v0209 = qvalue(elt(env, 8)); /* orig!* */
    stack[0] = v0209;
    v0210 = qvalue(elt(env, 9)); /* posn!* */
    v0209 = (Lisp_Object)289; /* 18 */
    v0209 = (Lisp_Object)lessp2(v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    v0209 = v0209 ? lisp_true : nil;
    env = stack[-5];
    if (v0209 == nil) goto v0213;
    v0209 = qvalue(elt(env, 9)); /* posn!* */
    goto v0003;

v0003:
    qvalue(elt(env, 8)) = v0209; /* orig!* */
    v0209 = stack[-3];
    v0209 = qcdr(v0209);
    if (v0209 == nil) goto v0183;
    v0211 = elt(env, 11); /* !*comma!* */
    v0210 = (Lisp_Object)1; /* 0 */
    v0209 = stack[-3];
    v0209 = qcdr(v0209);
    fn = elt(env, 13); /* inprint */
    v0209 = (*qfnn(fn))(qenv(fn), 3, v0211, v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    goto v0183;

v0183:
    v0209 = qvalue(elt(env, 3)); /* t */
    qvalue(elt(env, 10)) = v0209; /* obrkp!* */
    v0209 = stack[0];
    qvalue(elt(env, 8)) = v0209; /* orig!* */
    v0209 = elt(env, 6); /* ")" */
    fn = elt(env, 12); /* prin2!* */
    v0209 = (*qfn1(fn))(qenv(fn), v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    v0209 = stack[-3];
    goto v0055;

v0055:
    qvalue(elt(env, 1)) = stack[-4]; /* p!*!* */
    { popv(6); return onevalue(v0209); }

v0213:
    v0210 = qvalue(elt(env, 8)); /* orig!* */
    v0209 = (Lisp_Object)49; /* 3 */
    v0209 = plus2(v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    goto v0003;

v0144:
    v0209 = stack[-3];
    v0209 = qcar(v0209);
    if (!symbolp(v0209)) v0209 = nil;
    else { v0209 = qfastgets(v0209);
           if (v0209 != nil) { v0209 = elt(v0209, 60); /* pprifn */
#ifdef RECORD_GET
             if (v0209 != SPID_NOPROP)
                record_get(elt(fastget_names, 60), 1);
             else record_get(elt(fastget_names, 60), 0),
                v0209 = nil; }
           else record_get(elt(fastget_names, 60), 0); }
#else
             if (v0209 == SPID_NOPROP) v0209 = nil; }}
#endif
    stack[-1] = v0209;
    if (v0209 == nil) goto v0112;
    v0211 = stack[-1];
    v0210 = stack[-3];
    v0209 = stack[-2];
    v0210 = Lapply2(nil, 3, v0211, v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    v0209 = elt(env, 7); /* failed */
    if (!(v0210 == v0209)) goto v0189;

v0112:
    v0209 = stack[-3];
    v0209 = qcar(v0209);
    if (!symbolp(v0209)) v0209 = nil;
    else { v0209 = qfastgets(v0209);
           if (v0209 != nil) { v0209 = elt(v0209, 57); /* prifn */
#ifdef RECORD_GET
             if (v0209 != SPID_NOPROP)
                record_get(elt(fastget_names, 57), 1);
             else record_get(elt(fastget_names, 57), 0),
                v0209 = nil; }
           else record_get(elt(fastget_names, 57), 0); }
#else
             if (v0209 == SPID_NOPROP) v0209 = nil; }}
#endif
    stack[-1] = v0209;
    if (v0209 == nil) goto v0072;
    v0210 = stack[-1];
    v0209 = stack[-3];
    v0210 = Lapply1(nil, v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    v0209 = elt(env, 7); /* failed */
    if (!(v0210 == v0209)) goto v0189;

v0072:
    v0209 = stack[-3];
    v0209 = qcar(v0209);
    if (!symbolp(v0209)) v0209 = nil;
    else { v0209 = qfastgets(v0209);
           if (v0209 != nil) { v0209 = elt(v0209, 23); /* infix */
#ifdef RECORD_GET
             if (v0209 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v0209 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v0209 == SPID_NOPROP) v0209 = nil; }}
#endif
    stack[-1] = v0209;
    if (v0209 == nil) goto v0187;
    v0210 = stack[-1];
    v0209 = stack[-2];
    v0209 = (Lisp_Object)greaterp2(v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    v0209 = v0209 ? lisp_true : nil;
    env = stack[-5];
    v0209 = (v0209 == nil ? lisp_true : nil);
    stack[-2] = v0209;
    v0209 = stack[-2];
    if (v0209 == nil) goto v0214;
    v0209 = qvalue(elt(env, 8)); /* orig!* */
    stack[0] = v0209;
    v0209 = elt(env, 5); /* "(" */
    fn = elt(env, 12); /* prin2!* */
    v0209 = (*qfn1(fn))(qenv(fn), v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    v0210 = qvalue(elt(env, 9)); /* posn!* */
    v0209 = (Lisp_Object)289; /* 18 */
    v0209 = (Lisp_Object)lessp2(v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    v0209 = v0209 ? lisp_true : nil;
    env = stack[-5];
    if (v0209 == nil) goto v0009;
    v0209 = qvalue(elt(env, 9)); /* posn!* */
    goto v0160;

v0160:
    qvalue(elt(env, 8)) = v0209; /* orig!* */
    goto v0214;

v0214:
    v0209 = stack[-3];
    v0211 = qcar(v0209);
    v0210 = stack[-1];
    v0209 = stack[-3];
    v0209 = qcdr(v0209);
    fn = elt(env, 13); /* inprint */
    v0209 = (*qfnn(fn))(qenv(fn), 3, v0211, v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    v0209 = stack[-2];
    if (v0209 == nil) goto v0215;
    v0209 = elt(env, 6); /* ")" */
    fn = elt(env, 12); /* prin2!* */
    v0209 = (*qfn1(fn))(qenv(fn), v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    v0209 = stack[0];
    qvalue(elt(env, 8)) = v0209; /* orig!* */
    goto v0215;

v0215:
    v0209 = stack[-3];
    goto v0055;

v0009:
    v0210 = qvalue(elt(env, 8)); /* orig!* */
    v0209 = (Lisp_Object)49; /* 3 */
    v0209 = plus2(v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    goto v0160;

v0187:
    v0209 = stack[-3];
    v0209 = qcar(v0209);
    fn = elt(env, 12); /* prin2!* */
    v0209 = (*qfn1(fn))(qenv(fn), v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    goto v0058;

v0189:
    v0209 = stack[-3];
    goto v0055;

v0119:
    v0209 = stack[-3];
    v0209 = Lsimple_vectorp(nil, v0209);
    env = stack[-5];
    if (v0209 == nil) goto v0077;
    v0210 = stack[-3];
    v0209 = qvalue(elt(env, 1)); /* p!*!* */
    fn = elt(env, 14); /* vec!-maprin */
    v0209 = (*qfn2(fn))(qenv(fn), v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    goto v0134;

v0134:
    v0209 = stack[-3];
    goto v0055;

v0077:
    v0209 = stack[-3];
    if (is_number(v0209)) goto v0037;
    v0209 = qvalue(elt(env, 3)); /* t */
    goto v0130;

v0130:
    if (v0209 == nil) goto v0172;
    v0209 = stack[-3];
    fn = elt(env, 12); /* prin2!* */
    v0209 = (*qfn1(fn))(qenv(fn), v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    goto v0134;

v0172:
    v0209 = elt(env, 5); /* "(" */
    fn = elt(env, 12); /* prin2!* */
    v0209 = (*qfn1(fn))(qenv(fn), v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    v0209 = stack[-3];
    fn = elt(env, 12); /* prin2!* */
    v0209 = (*qfn1(fn))(qenv(fn), v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    v0209 = elt(env, 6); /* ")" */
    fn = elt(env, 12); /* prin2!* */
    v0209 = (*qfn1(fn))(qenv(fn), v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    env = stack[-5];
    goto v0134;

v0037:
    v0210 = stack[-3];
    v0209 = (Lisp_Object)1; /* 0 */
    v0209 = (Lisp_Object)lessp2(v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    v0209 = v0209 ? lisp_true : nil;
    env = stack[-5];
    if (v0209 == nil) goto v0107;
    v0210 = stack[-2];
    v0209 = elt(env, 4); /* minus */
    if (!symbolp(v0209)) v0209 = nil;
    else { v0209 = qfastgets(v0209);
           if (v0209 != nil) { v0209 = elt(v0209, 23); /* infix */
#ifdef RECORD_GET
             if (v0209 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v0209 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v0209 == SPID_NOPROP) v0209 = nil; }}
#endif
    v0209 = (Lisp_Object)lesseq2(v0210, v0209);
    nil = C_nil;
    if (exception_pending()) goto v0212;
    v0209 = v0209 ? lisp_true : nil;
    env = stack[-5];
    goto v0130;

v0107:
    v0209 = qvalue(elt(env, 3)); /* t */
    goto v0130;

v0129:
    v0209 = qvalue(elt(env, 2)); /* nil */
    goto v0055;
/* error exit handlers */
v0212:
    env = stack[-5];
    qvalue(elt(env, 1)) = stack[-4]; /* p!*!* */
    popv(6);
    return nil;
}



/* Code for !*i2gi */

static Lisp_Object CC_Hi2gi(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0049, v0057, v0058;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for *i2gi");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0049 = v0000;
/* end of prologue */
    v0058 = elt(env, 1); /* !:gi!: */
    v0057 = v0049;
    v0049 = (Lisp_Object)1; /* 0 */
    return list2star(v0058, v0057, v0049);
}



/* Code for exptf */

static Lisp_Object CC_exptf(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0172, v0064, v0033;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for exptf");
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
    v0064 = stack[0];
    v0172 = (Lisp_Object)1; /* 0 */
    v0172 = (Lisp_Object)lessp2(v0064, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0034;
    v0172 = v0172 ? lisp_true : nil;
    env = stack[-2];
    if (v0172 == nil) goto v0055;
    v0033 = elt(env, 1); /* "exptf" */
    v0064 = stack[-1];
    v0172 = stack[0];
    v0172 = list3(v0033, v0064, v0172);
    nil = C_nil;
    if (exception_pending()) goto v0034;
    env = stack[-2];
    {
        popv(3);
        fn = elt(env, 4); /* errach */
        return (*qfn1(fn))(qenv(fn), v0172);
    }

v0055:
    v0172 = stack[-1];
    if (!consp(v0172)) goto v0169;
    v0172 = stack[-1];
    v0172 = qcar(v0172);
    v0172 = (consp(v0172) ? nil : lisp_true);
    goto v0043;

v0043:
    if (v0172 == nil) goto v0100;
    v0064 = stack[-1];
    v0172 = stack[0];
    {
        popv(3);
        fn = elt(env, 5); /* !:expt */
        return (*qfn2(fn))(qenv(fn), v0064, v0172);
    }

v0100:
    v0172 = qvalue(elt(env, 3)); /* !*exp */
    if (!(v0172 == nil)) goto v0051;
    v0172 = stack[-1];
    fn = elt(env, 6); /* kernlp */
    v0172 = (*qfn1(fn))(qenv(fn), v0172);
    nil = C_nil;
    if (exception_pending()) goto v0034;
    env = stack[-2];
    if (!(v0172 == nil)) goto v0051;
    v0064 = stack[-1];
    v0172 = stack[0];
    {
        popv(3);
        fn = elt(env, 7); /* mksfpf */
        return (*qfn2(fn))(qenv(fn), v0064, v0172);
    }

v0051:
    v0064 = stack[-1];
    v0172 = stack[0];
    {
        popv(3);
        fn = elt(env, 8); /* exptf1 */
        return (*qfn2(fn))(qenv(fn), v0064, v0172);
    }

v0169:
    v0172 = qvalue(elt(env, 2)); /* t */
    goto v0043;
/* error exit handlers */
v0034:
    popv(3);
    return nil;
}



/* Code for rread1 */

static Lisp_Object MS_CDECL CC_rread1(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0015, v0120, v0124;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "rread1");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rread1");
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
    fn = elt(env, 15); /* ptoken */
    v0015 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-2];
    stack[-1] = v0015;
    v0120 = qvalue(elt(env, 1)); /* ttype!* */
    v0015 = (Lisp_Object)49; /* 3 */
    if (v0120 == v0015) goto v0036;
    v0015 = stack[-1];
    if (symbolp(v0015)) goto v0073;
    v0120 = stack[-1];
    v0015 = elt(env, 4); /* !:dn!: */
    if (!consp(v0120)) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v0120 = qcar(v0120);
    if (!(v0120 == v0015)) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v0124 = stack[-1];
    v0120 = qvalue(elt(env, 5)); /* nil */
    v0015 = elt(env, 6); /* symbolic */
    {
        popv(3);
        fn = elt(env, 16); /* dnform */
        return (*qfnn(fn))(qenv(fn), 3, v0124, v0120, v0015);
    }

v0073:
    v0015 = qvalue(elt(env, 2)); /* !*quotenewnam */
    if (v0015 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v0120 = stack[-1];
    v0015 = elt(env, 3); /* quotenewnam */
    v0015 = get(v0120, v0015);
    stack[0] = v0015;
    if (v0015 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    else { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }

v0036:
    v0120 = stack[-1];
    v0015 = elt(env, 7); /* !( */
    if (v0120 == v0015) goto v0132;
    v0120 = stack[-1];
    v0015 = elt(env, 8); /* !+ */
    if (v0120 == v0015) goto v0116;
    v0120 = stack[-1];
    v0015 = elt(env, 10); /* !- */
    v0015 = (v0120 == v0015 ? lisp_true : nil);
    goto v0034;

v0034:
    if (v0015 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    fn = elt(env, 15); /* ptoken */
    v0015 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-2];
    stack[0] = v0015;
    v0120 = stack[0];
    v0015 = elt(env, 4); /* !:dn!: */
    if (!consp(v0120)) goto v0096;
    v0120 = qcar(v0120);
    if (!(v0120 == v0015)) goto v0096;
    v0124 = stack[0];
    v0120 = qvalue(elt(env, 5)); /* nil */
    v0015 = elt(env, 6); /* symbolic */
    fn = elt(env, 16); /* dnform */
    v0015 = (*qfnn(fn))(qenv(fn), 3, v0124, v0120, v0015);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    env = stack[-2];
    stack[0] = v0015;
    goto v0096;

v0096:
    v0015 = stack[0];
    if (is_number(v0015)) goto v0019;
    v0015 = elt(env, 11); /* " " */
    qvalue(elt(env, 12)) = v0015; /* nxtsym!* */
    v0120 = elt(env, 13); /* "Syntax error: improper number" */
    v0015 = qvalue(elt(env, 5)); /* nil */
    fn = elt(env, 17); /* symerr */
    v0015 = (*qfn2(fn))(qenv(fn), v0120, v0015);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }

v0019:
    v0120 = stack[-1];
    v0015 = elt(env, 10); /* !- */
    if (!(v0120 == v0015)) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v0120 = elt(env, 14); /* minus */
    v0015 = stack[0];
    v0015 = Lapply1(nil, v0120, v0015);
    nil = C_nil;
    if (exception_pending()) goto v0153;
    stack[0] = v0015;
    { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }

v0116:
    v0015 = qvalue(elt(env, 9)); /* t */
    goto v0034;

v0132:
    {
        popv(3);
        fn = elt(env, 18); /* rrdls */
        return (*qfnn(fn))(qenv(fn), 0);
    }
/* error exit handlers */
v0153:
    popv(3);
    return nil;
}



/* Code for polynommultiplybymonom */

static Lisp_Object CC_polynommultiplybymonom(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0079, v0107;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for polynommultiplybymonom");
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
    v0107 = v0000;
/* end of prologue */
    v0079 = v0107;
    if (v0079 == nil) goto v0048;
    v0079 = v0107;
    fn = elt(env, 2); /* polynomclone */
    v0079 = (*qfn1(fn))(qenv(fn), v0079);
    nil = C_nil;
    if (exception_pending()) goto v0037;
    env = stack[-2];
    stack[-1] = v0079;
    v0107 = stack[0];
    v0079 = (Lisp_Object)17; /* 1 */
    v0079 = *(Lisp_Object *)((char *)v0107 + (CELL-TAG_VECTOR) + ((int32_t)v0079/(16/CELL)));
    stack[0] = v0079;
    goto v0099;

v0099:
    v0079 = stack[0];
    v0079 = qcar(v0079);
    if (v0079 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v0107 = stack[-1];
    v0079 = stack[0];
    v0079 = qcar(v0079);
    fn = elt(env, 3); /* polynommultiplybyvariable */
    v0079 = (*qfn2(fn))(qenv(fn), v0107, v0079);
    nil = C_nil;
    if (exception_pending()) goto v0037;
    env = stack[-2];
    v0079 = stack[0];
    v0079 = qcdr(v0079);
    stack[0] = v0079;
    goto v0099;

v0048:
    v0079 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0079); }
/* error exit handlers */
v0037:
    popv(3);
    return nil;
}



/* Code for removeg */

static Lisp_Object CC_removeg(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0222, v0223, v0007, v0206;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for removeg");
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
    v0222 = stack[-1];
    v0223 = qcdr(v0222);
    v0222 = stack[0];
    v0222 = qcdr(v0222);
    v0222 = qcdr(v0222);
    v0222 = qcdr(v0222);
    v0222 = qcar(v0222);
    fn = elt(env, 8); /* finde */
    v0222 = (*qfn2(fn))(qenv(fn), v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    env = stack[-3];
    stack[-2] = v0222;
    v0222 = stack[-2];
    v0223 = qcar(v0222);
    v0222 = stack[0];
    if (!(v0223 == v0222)) goto v0119;
    v0222 = stack[-2];
    v0223 = qcdr(v0222);
    v0222 = stack[0];
    v0222 = qcdr(v0222);
    v0222 = qcdr(v0222);
    v0222 = qcdr(v0222);
    v0222 = qcar(v0222);
    fn = elt(env, 8); /* finde */
    v0222 = (*qfn2(fn))(qenv(fn), v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    env = stack[-3];
    stack[-2] = v0222;
    goto v0119;

v0119:
    v0222 = stack[-2];
    if (!(v0222 == nil)) goto v0080;
    v0206 = elt(env, 1); /* "Free edge" */
    v0222 = stack[0];
    v0222 = qcdr(v0222);
    v0222 = qcdr(v0222);
    v0222 = qcdr(v0222);
    v0007 = qcar(v0222);
    v0223 = elt(env, 2); /* "in vertex" */
    v0222 = stack[0];
    v0222 = list4(v0206, v0007, v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    env = stack[-3];
    fn = elt(env, 9); /* cerror */
    v0222 = (*qfn1(fn))(qenv(fn), v0222);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    env = stack[-3];
    goto v0080;

v0080:
    v0222 = stack[-2];
    v0222 = qcar(v0222);
    stack[-2] = v0222;
    v0222 = stack[-2];
    v0222 = qcdr(v0222);
    v0223 = qcar(v0222);
    v0222 = stack[-2];
    v0222 = qcdr(v0222);
    v0222 = qcdr(v0222);
    v0222 = qcar(v0222);
    if (v0223 == v0222) goto v0095;
    v0222 = stack[-2];
    v0222 = qcdr(v0222);
    v0223 = qcar(v0222);
    v0222 = stack[-2];
    v0222 = qcdr(v0222);
    v0222 = qcdr(v0222);
    v0222 = qcdr(v0222);
    v0222 = qcar(v0222);
    if (v0223 == v0222) goto v0189;
    v0222 = stack[-2];
    v0222 = qcdr(v0222);
    v0222 = qcdr(v0222);
    v0223 = qcar(v0222);
    v0222 = stack[-2];
    v0222 = qcdr(v0222);
    v0222 = qcdr(v0222);
    v0222 = qcdr(v0222);
    v0222 = qcar(v0222);
    v0222 = (v0223 == v0222 ? lisp_true : nil);
    goto v0033;

v0033:
    if (v0222 == nil) goto v0109;
    v0223 = qvalue(elt(env, 4)); /* nil */
    v0222 = (Lisp_Object)17; /* 1 */
    v0222 = cons(v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    env = stack[-3];
    v0222 = ncons(v0222);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    popv(4);
    return ncons(v0222);

v0109:
    v0222 = stack[-2];
    v0223 = qcar(v0222);
    v0222 = elt(env, 5); /* qg */
    if (v0223 == v0222) goto v0118;
    v0222 = stack[-2];
    v0223 = qcar(v0222);
    v0222 = elt(env, 6); /* g3 */
    if (v0223 == v0222) goto v0224;
    v0223 = elt(env, 7); /* "Invalid type of vertex" */
    v0222 = stack[0];
    v0222 = list2(v0223, v0222);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    env = stack[-3];
    fn = elt(env, 9); /* cerror */
    v0222 = (*qfn1(fn))(qenv(fn), v0222);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    v0222 = nil;
    { popv(4); return onevalue(v0222); }

v0224:
    v0007 = stack[-1];
    v0223 = stack[0];
    v0222 = stack[-2];
    {
        popv(4);
        fn = elt(env, 10); /* removeg2 */
        return (*qfnn(fn))(qenv(fn), 3, v0007, v0223, v0222);
    }

v0118:
    v0007 = stack[-1];
    v0223 = stack[0];
    v0222 = stack[-2];
    {
        popv(4);
        fn = elt(env, 11); /* removeg1 */
        return (*qfnn(fn))(qenv(fn), 3, v0007, v0223, v0222);
    }

v0189:
    v0222 = qvalue(elt(env, 3)); /* t */
    goto v0033;

v0095:
    v0222 = qvalue(elt(env, 3)); /* t */
    goto v0033;
/* error exit handlers */
v0215:
    popv(4);
    return nil;
}



/* Code for freevarinexptchk */

static Lisp_Object CC_freevarinexptchk(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0145;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for freevarinexptchk");
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

v0078:
    v0145 = stack[0];
    if (!consp(v0145)) goto v0056;
    v0145 = stack[0];
    v0145 = qcar(v0145);
    v0145 = (consp(v0145) ? nil : lisp_true);
    goto v0083;

v0083:
    if (v0145 == nil) goto v0059;
    v0145 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v0145); }

v0059:
    v0145 = stack[0];
    v0145 = qcar(v0145);
    v0145 = qcar(v0145);
    v0145 = qcdr(v0145);
    if (is_number(v0145)) goto v0077;
    v0145 = qvalue(elt(env, 1)); /* t */
    { popv(2); return onevalue(v0145); }

v0077:
    v0145 = stack[0];
    v0145 = qcar(v0145);
    v0145 = qcdr(v0145);
    v0145 = CC_freevarinexptchk(env, v0145);
    nil = C_nil;
    if (exception_pending()) goto v0068;
    env = stack[-1];
    if (!(v0145 == nil)) { popv(2); return onevalue(v0145); }
    v0145 = stack[0];
    v0145 = qcdr(v0145);
    stack[0] = v0145;
    goto v0078;

v0056:
    v0145 = qvalue(elt(env, 1)); /* t */
    goto v0083;
/* error exit handlers */
v0068:
    popv(2);
    return nil;
}



/* Code for searchtm */

static Lisp_Object CC_searchtm(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0041, v0040;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for searchtm");
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
    v0040 = v0000;
/* end of prologue */
    v0041 = v0040;
    if (!consp(v0041)) goto v0056;
    v0041 = v0040;
    v0041 = qcar(v0041);
    v0041 = (consp(v0041) ? nil : lisp_true);
    goto v0083;

v0083:
    if (v0041 == nil) goto v0104;
    v0041 = qvalue(elt(env, 2)); /* nil */
    { popv(1); return onevalue(v0041); }

v0104:
    v0041 = v0040;
    v0041 = qcar(v0041);
    stack[0] = qcar(v0041);
    v0041 = v0040;
    v0041 = qcdr(v0041);
    fn = elt(env, 3); /* searchpl */
    v0041 = (*qfn1(fn))(qenv(fn), v0041);
    nil = C_nil;
    if (exception_pending()) goto v0158;
    {
        Lisp_Object v0127 = stack[0];
        popv(1);
        return cons(v0127, v0041);
    }

v0056:
    v0041 = qvalue(elt(env, 1)); /* t */
    goto v0083;
/* error exit handlers */
v0158:
    popv(1);
    return nil;
}



/* Code for bcone!? */

static Lisp_Object CC_bconeW(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0145, v0069, v0068;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for bcone?");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0068 = v0000;
/* end of prologue */
    v0145 = qvalue(elt(env, 1)); /* !*grmod!* */
    if (v0145 == nil) goto v0104;
    v0069 = v0068;
    v0145 = (Lisp_Object)17; /* 1 */
        return Leqn(nil, v0069, v0145);

v0104:
    v0145 = v0068;
    v0069 = qcdr(v0145);
    v0145 = (Lisp_Object)17; /* 1 */
    if (v0069 == v0145) goto v0042;
    v0145 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0145);

v0042:
    v0145 = v0068;
    v0069 = qcar(v0145);
    v0145 = (Lisp_Object)17; /* 1 */
    v0145 = (v0069 == v0145 ? lisp_true : nil);
    return onevalue(v0145);
}



/* Code for ncmpchk */

static Lisp_Object CC_ncmpchk(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0077, v0099;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ncmpchk");
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
    v0099 = stack[-1];
    v0077 = stack[0];
    fn = elt(env, 2); /* noncommuting */
    v0077 = (*qfn2(fn))(qenv(fn), v0099, v0077);
    nil = C_nil;
    if (exception_pending()) goto v0043;
    env = stack[-2];
    if (v0077 == nil) goto v0048;
    v0099 = stack[-1];
    v0077 = stack[0];
    {
        popv(3);
        fn = elt(env, 3); /* physop!-ordop */
        return (*qfn2(fn))(qenv(fn), v0099, v0077);
    }

v0048:
    v0077 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v0077); }
/* error exit handlers */
v0043:
    popv(3);
    return nil;
}



/* Code for contrsp */

static Lisp_Object CC_contrsp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0084, v0117, v0130;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for contrsp");
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
    v0084 = stack[-1];
    v0084 = qcdr(v0084);
    v0130 = qcar(v0084);
    v0084 = stack[-1];
    v0084 = qcdr(v0084);
    v0084 = qcdr(v0084);
    v0117 = qcar(v0084);
    v0084 = stack[0];
    fn = elt(env, 1); /* contrsp2 */
    v0084 = (*qfnn(fn))(qenv(fn), 3, v0130, v0117, v0084);
    nil = C_nil;
    if (exception_pending()) goto v0068;
    env = stack[-2];
    if (!(v0084 == nil)) { popv(3); return onevalue(v0084); }
    v0084 = stack[-1];
    v0084 = qcdr(v0084);
    v0084 = qcdr(v0084);
    v0130 = qcar(v0084);
    v0084 = stack[-1];
    v0084 = qcdr(v0084);
    v0117 = qcar(v0084);
    v0084 = stack[0];
    {
        popv(3);
        fn = elt(env, 1); /* contrsp2 */
        return (*qfnn(fn))(qenv(fn), 3, v0130, v0117, v0084);
    }
/* error exit handlers */
v0068:
    popv(3);
    return nil;
}



/* Code for take!-realpart */

static Lisp_Object CC_takeKrealpart(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0099, v0100;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for take-realpart");
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
    v0099 = stack[0];
    v0099 = qcar(v0099);
    fn = elt(env, 1); /* repartf */
    v0100 = (*qfn1(fn))(qenv(fn), v0099);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-2];
    v0099 = (Lisp_Object)17; /* 1 */
    stack[-1] = cons(v0100, v0099);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-2];
    v0100 = (Lisp_Object)17; /* 1 */
    v0099 = stack[0];
    v0099 = qcdr(v0099);
    v0099 = cons(v0100, v0099);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-2];
    {
        Lisp_Object v0041 = stack[-1];
        popv(3);
        fn = elt(env, 2); /* multsq */
        return (*qfn2(fn))(qenv(fn), v0041, v0099);
    }
/* error exit handlers */
v0169:
    popv(3);
    return nil;
}



/* Code for cali_bc_fi */

static Lisp_Object CC_cali_bc_fi(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0148, v0150, v0073;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for cali_bc_fi");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0073 = v0000;
/* end of prologue */
    v0150 = v0073;
    v0148 = (Lisp_Object)1; /* 0 */
    if (!(v0150 == v0148)) return onevalue(v0073);
    v0148 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v0148);
}



/* Code for oprin */

static Lisp_Object CC_oprin(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0035, v0085;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for oprin");
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
    v0035 = stack[0];
    if (!symbolp(v0035)) v0035 = nil;
    else { v0035 = qfastgets(v0035);
           if (v0035 != nil) { v0035 = elt(v0035, 37); /* prtch */
#ifdef RECORD_GET
             if (v0035 != SPID_NOPROP)
                record_get(elt(fastget_names, 37), 1);
             else record_get(elt(fastget_names, 37), 0),
                v0035 = nil; }
           else record_get(elt(fastget_names, 37), 0); }
#else
             if (v0035 == SPID_NOPROP) v0035 = nil; }}
#endif
    stack[-1] = v0035;
    v0035 = stack[-1];
    if (v0035 == nil) goto v0083;
    v0035 = qvalue(elt(env, 2)); /* !*fort */
    if (v0035 == nil) goto v0148;
    v0035 = stack[-1];
    {
        popv(3);
        fn = elt(env, 9); /* prin2!* */
        return (*qfn1(fn))(qenv(fn), v0035);
    }

v0148:
    v0035 = qvalue(elt(env, 3)); /* !*list */
    if (v0035 == nil) goto v0152;
    v0035 = qvalue(elt(env, 4)); /* obrkp!* */
    if (v0035 == nil) goto v0152;
    v0085 = stack[0];
    v0035 = elt(env, 5); /* (plus minus) */
    v0035 = Lmemq(nil, v0085, v0035);
    if (v0035 == nil) goto v0152;
    v0035 = qvalue(elt(env, 6)); /* testing!-width!* */
    if (v0035 == nil) goto v0068;
    v0035 = qvalue(elt(env, 7)); /* t */
    qvalue(elt(env, 8)) = v0035; /* overflowed!* */
    { popv(3); return onevalue(v0035); }

v0068:
    v0035 = qvalue(elt(env, 7)); /* t */
    fn = elt(env, 10); /* terpri!* */
    v0035 = (*qfn1(fn))(qenv(fn), v0035);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-2];
    v0035 = stack[-1];
    {
        popv(3);
        fn = elt(env, 9); /* prin2!* */
        return (*qfn1(fn))(qenv(fn), v0035);
    }

v0152:
    v0035 = stack[0];
    if (!symbolp(v0035)) v0035 = nil;
    else { v0035 = qfastgets(v0035);
           if (v0035 != nil) { v0035 = elt(v0035, 61); /* spaced */
#ifdef RECORD_GET
             if (v0035 == SPID_NOPROP)
                record_get(elt(fastget_names, 61), 0),
                v0035 = nil;
             else record_get(elt(fastget_names, 61), 1),
                v0035 = lisp_true; }
           else record_get(elt(fastget_names, 61), 0); }
#else
             if (v0035 == SPID_NOPROP) v0035 = nil; else v0035 = lisp_true; }}
#endif
    if (v0035 == nil) goto v0140;
    v0035 = elt(env, 1); /* " " */
    fn = elt(env, 9); /* prin2!* */
    v0035 = (*qfn1(fn))(qenv(fn), v0035);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-2];
    v0035 = stack[-1];
    fn = elt(env, 9); /* prin2!* */
    v0035 = (*qfn1(fn))(qenv(fn), v0035);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-2];
    v0035 = elt(env, 1); /* " " */
    {
        popv(3);
        fn = elt(env, 9); /* prin2!* */
        return (*qfn1(fn))(qenv(fn), v0035);
    }

v0140:
    v0035 = stack[-1];
    {
        popv(3);
        fn = elt(env, 9); /* prin2!* */
        return (*qfn1(fn))(qenv(fn), v0035);
    }

v0083:
    v0035 = elt(env, 1); /* " " */
    fn = elt(env, 9); /* prin2!* */
    v0035 = (*qfn1(fn))(qenv(fn), v0035);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-2];
    v0035 = stack[0];
    fn = elt(env, 9); /* prin2!* */
    v0035 = (*qfn1(fn))(qenv(fn), v0035);
    nil = C_nil;
    if (exception_pending()) goto v0036;
    env = stack[-2];
    v0035 = elt(env, 1); /* " " */
    {
        popv(3);
        fn = elt(env, 9); /* prin2!* */
        return (*qfn1(fn))(qenv(fn), v0035);
    }
/* error exit handlers */
v0036:
    popv(3);
    return nil;
}



/* Code for th_match0 */

static Lisp_Object CC_th_match0(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0040, v0075, v0158;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for th_match0");
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
    v0158 = v0000;
/* end of prologue */
    v0040 = v0158;
    v0075 = qcar(v0040);
    v0040 = stack[0];
    v0040 = qcar(v0040);
    if (equal(v0075, v0040)) goto v0129;
    v0040 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0040); }

v0129:
    v0040 = v0158;
    v0040 = qcdr(v0040);
    v0040 = qcar(v0040);
    stack[-1] = Llength(nil, v0040);
    nil = C_nil;
    if (exception_pending()) goto v0084;
    env = stack[-2];
    v0040 = stack[0];
    v0040 = qcdr(v0040);
    v0040 = qcar(v0040);
    v0040 = Llength(nil, v0040);
    nil = C_nil;
    if (exception_pending()) goto v0084;
    v0040 = (equal(stack[-1], v0040) ? lisp_true : nil);
    { popv(3); return onevalue(v0040); }
/* error exit handlers */
v0084:
    popv(3);
    return nil;
}



/* Code for sfto_qsub1 */

static Lisp_Object CC_sfto_qsub1(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0230, v0231, v0186;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for sfto_qsub1");
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
    v0230 = stack[-2];
    if (!consp(v0230)) goto v0058;
    v0230 = stack[-2];
    v0230 = qcar(v0230);
    v0230 = (consp(v0230) ? nil : lisp_true);
    goto v0057;

v0057:
    if (v0230 == nil) goto v0171;
    v0231 = stack[-2];
    v0230 = (Lisp_Object)17; /* 1 */
    popv(5);
    return cons(v0231, v0230);

v0171:
    v0230 = stack[-2];
    v0230 = qcar(v0230);
    v0230 = qcar(v0230);
    v0230 = qcar(v0230);
    stack[0] = v0230;
    goto v0084;

v0084:
    v0230 = stack[-1];
    if (v0230 == nil) goto v0081;
    v0230 = stack[-1];
    v0230 = qcar(v0230);
    v0231 = qcar(v0230);
    v0230 = stack[0];
    if (equal(v0231, v0230)) goto v0053;
    v0230 = stack[-1];
    v0230 = qcar(v0230);
    v0231 = qcar(v0230);
    v0230 = stack[0];
    fn = elt(env, 3); /* ordop */
    v0230 = (*qfn2(fn))(qenv(fn), v0231, v0230);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-4];
    goto v0135;

v0135:
    if (v0230 == nil) goto v0081;
    v0230 = stack[-1];
    v0230 = qcdr(v0230);
    stack[-1] = v0230;
    goto v0084;

v0081:
    v0230 = stack[-1];
    if (v0230 == nil) goto v0174;
    v0230 = stack[-2];
    v0231 = qcdr(v0230);
    v0230 = stack[-1];
    v0230 = CC_sfto_qsub1(env, v0231, v0230);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-4];
    stack[-3] = v0230;
    v0230 = stack[-1];
    v0230 = qcar(v0230);
    v0231 = qcar(v0230);
    v0230 = stack[0];
    if (v0231 == v0230) goto v0143;
    v0230 = stack[-2];
    v0230 = qcar(v0230);
    v0231 = qcdr(v0230);
    v0230 = stack[-1];
    v0230 = CC_sfto_qsub1(env, v0231, v0230);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-4];
    stack[0] = v0230;
    v0230 = stack[-2];
    v0230 = qcar(v0230);
    v0230 = qcar(v0230);
    v0231 = qcar(v0230);
    v0230 = stack[-2];
    v0230 = qcar(v0230);
    v0230 = qcar(v0230);
    v0230 = qcdr(v0230);
    fn = elt(env, 4); /* to */
    v0231 = (*qfn2(fn))(qenv(fn), v0231, v0230);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-4];
    v0230 = (Lisp_Object)17; /* 1 */
    v0186 = cons(v0231, v0230);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-4];
    v0231 = qvalue(elt(env, 2)); /* nil */
    v0230 = (Lisp_Object)17; /* 1 */
    v0230 = acons(v0186, v0231, v0230);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-4];
    v0231 = stack[0];
    fn = elt(env, 5); /* multsq */
    v0231 = (*qfn2(fn))(qenv(fn), v0231, v0230);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-4];
    v0230 = stack[-3];
    {
        popv(5);
        fn = elt(env, 6); /* addsq */
        return (*qfn2(fn))(qenv(fn), v0231, v0230);
    }

v0143:
    v0230 = stack[-2];
    v0230 = qcar(v0230);
    v0231 = qcdr(v0230);
    v0230 = stack[-1];
    v0230 = qcdr(v0230);
    v0230 = CC_sfto_qsub1(env, v0231, v0230);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-4];
    stack[0] = v0230;
    v0230 = stack[-1];
    v0230 = qcar(v0230);
    v0231 = qcdr(v0230);
    v0230 = stack[-2];
    v0230 = qcar(v0230);
    v0230 = qcar(v0230);
    v0230 = qcdr(v0230);
    fn = elt(env, 7); /* exptsq */
    v0230 = (*qfn2(fn))(qenv(fn), v0231, v0230);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-4];
    v0231 = stack[0];
    fn = elt(env, 5); /* multsq */
    v0231 = (*qfn2(fn))(qenv(fn), v0231, v0230);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-4];
    v0230 = stack[-3];
    {
        popv(5);
        fn = elt(env, 6); /* addsq */
        return (*qfn2(fn))(qenv(fn), v0231, v0230);
    }

v0174:
    v0231 = stack[-2];
    v0230 = (Lisp_Object)17; /* 1 */
    popv(5);
    return cons(v0231, v0230);

v0053:
    v0230 = qvalue(elt(env, 2)); /* nil */
    goto v0135;

v0058:
    v0230 = qvalue(elt(env, 1)); /* t */
    goto v0057;
/* error exit handlers */
v0232:
    popv(5);
    return nil;
}



/* Code for remflagss */

static Lisp_Object CC_remflagss(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0099, v0100, v0042, v0043;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for remflagss");
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
    v0099 = v0001;
    v0042 = v0000;
/* end of prologue */
    v0043 = v0099;
    goto v0055;

v0055:
    v0099 = v0043;
    if (v0099 == nil) goto v0171;
    v0099 = v0043;
    v0099 = qcar(v0099);
    v0100 = v0042;
    v0099 = Lremflag(nil, v0100, v0099);
    env = stack[0];
    v0099 = v0043;
    v0099 = qcdr(v0099);
    v0043 = v0099;
    goto v0055;

v0171:
    v0099 = qvalue(elt(env, 1)); /* nil */
    { popv(1); return onevalue(v0099); }
}



/* Code for ofsf_posvarpat */

static Lisp_Object CC_ofsf_posvarpat(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0065, v0080, v0126;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ofsf_posvarpat");
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
    stack[0] = v0001;
    v0126 = v0000;
/* end of prologue */
    v0065 = v0126;
    if (!consp(v0065)) goto v0056;
    v0065 = v0126;
    v0065 = qcar(v0065);
    goto v0083;

v0083:
    stack[-1] = v0065;
    v0080 = stack[-1];
    v0065 = elt(env, 1); /* (greaterp geq) */
    v0065 = Lmemq(nil, v0080, v0065);
    if (v0065 == nil) goto v0150;
    v0065 = v0126;
    v0065 = qcdr(v0065);
    v0065 = qcar(v0065);
    fn = elt(env, 3); /* sfto_varp */
    v0080 = (*qfn1(fn))(qenv(fn), v0065);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    v0065 = stack[0];
    if (v0080 == v0065) { Lisp_Object res = stack[-1]; popv(2); return onevalue(res); }
    v0065 = nil;
    { popv(2); return onevalue(v0065); }

v0150:
    v0065 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v0065); }

v0056:
    v0065 = v0126;
    goto v0083;
/* error exit handlers */
v0107:
    popv(2);
    return nil;
}



/* Code for processcarpartitie1 */

static Lisp_Object MS_CDECL CC_processcarpartitie1(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0038, v0037, v0039;
    Lisp_Object fn;
    Lisp_Object v0059, v0149, v0131, v0001, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 5, "processcarpartitie1");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0001 = va_arg(aa, Lisp_Object);
    v0131 = va_arg(aa, Lisp_Object);
    v0149 = va_arg(aa, Lisp_Object);
    v0059 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for processcarpartitie1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push5(v0059,v0149,v0131,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop5(v0000,v0001,v0131,v0149,v0059);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-3] = v0059;
    stack[-4] = v0149;
    stack[-5] = v0131;
    v0038 = v0001;
    stack[-6] = v0000;
/* end of prologue */

v0103:
    v0037 = v0038;
    if (v0037 == nil) { Lisp_Object res = stack[-3]; popv(9); return onevalue(res); }
    v0037 = v0038;
    v0037 = qcdr(v0037);
    stack[-7] = v0037;
    stack[-2] = stack[-5];
    stack[-1] = stack[-6];
    stack[0] = v0038;
    v0037 = stack[-4];
    v0039 = qcar(v0037);
    v0037 = qcar(v0038);
    v0038 = stack[-4];
    v0038 = qcdr(v0038);
    v0037 = list2star(v0039, v0037, v0038);
    nil = C_nil;
    if (exception_pending()) goto v0138;
    env = stack[-8];
    v0038 = stack[-3];
    fn = elt(env, 1); /* processpartitie1 */
    v0038 = (*qfnn(fn))(qenv(fn), 5, stack[-2], stack[-1], stack[0], v0037, v0038);
    nil = C_nil;
    if (exception_pending()) goto v0138;
    env = stack[-8];
    stack[-3] = v0038;
    v0038 = stack[-7];
    goto v0103;
/* error exit handlers */
v0138:
    popv(9);
    return nil;
}



/* Code for ofsf_smwcpknowl */

static Lisp_Object CC_ofsf_smwcpknowl(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0049, v0057;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ofsf_smwcpknowl");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0057 = v0000;
/* end of prologue */
    v0049 = qvalue(elt(env, 1)); /* !*rlsusi */
    if (v0049 == nil) goto v0103;
    v0049 = v0057;
    {
        fn = elt(env, 2); /* cl_susicpknowl */
        return (*qfn1(fn))(qenv(fn), v0049);
    }

v0103:
    v0049 = v0057;
    {
        fn = elt(env, 3); /* ofsf_smcpknowl */
        return (*qfn1(fn))(qenv(fn), v0049);
    }
}



setup_type const u09_setup[] =
{
    {"general-times-term-mod-p",too_few_2,      CC_generalKtimesKtermKmodKp,wrong_no_2},
    {"mconv",                   CC_mconv,       too_many_1,    wrong_no_1},
    {"hevenp",                  CC_hevenp,      too_many_1,    wrong_no_1},
    {"anforml",                 CC_anforml,     too_many_1,    wrong_no_1},
    {"*sqprint",                CC_Hsqprint,    too_many_1,    wrong_no_1},
    {"ibalp_istotal",           CC_ibalp_istotal,too_many_1,   wrong_no_1},
    {"equal:",                  too_few_2,      CC_equalT,     wrong_no_2},
    {"difff",                   too_few_2,      CC_difff,      wrong_no_2},
    {"c:extmult",               too_few_2,      CC_cTextmult,  wrong_no_2},
    {"symtabget",               too_few_2,      CC_symtabget,  wrong_no_2},
    {"getphystype",             CC_getphystype, too_many_1,    wrong_no_1},
    {"contrsp2",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_contrsp2},
    {"mo=deglist",              CC_moMdeglist,  too_many_1,    wrong_no_1},
    {"pneg",                    CC_pneg,        too_many_1,    wrong_no_1},
    {"gionep:",                 CC_gionepT,     too_many_1,    wrong_no_1},
    {"lto_catsoc",              too_few_2,      CC_lto_catsoc, wrong_no_2},
    {"comfac",                  CC_comfac,      too_many_1,    wrong_no_1},
    {"setdiff",                 too_few_2,      CC_setdiff,    wrong_no_2},
    {"preptayexp",              CC_preptayexp,  too_many_1,    wrong_no_1},
    {"cl_simplat",              too_few_2,      CC_cl_simplat, wrong_no_2},
    {"ibalp_litlp",             CC_ibalp_litlp, too_many_1,    wrong_no_1},
    {"initbrsea",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_initbrsea},
    {":difference",             too_few_2,      CC_Tdifference,wrong_no_2},
    {"opnum*",                  CC_opnumH,      too_many_1,    wrong_no_1},
    {"errorset2",               CC_errorset2,   too_many_1,    wrong_no_1},
    {"mv-pow-+",                too_few_2,      CC_mvKpowKL,   wrong_no_2},
    {"conv:bf2i",               CC_convTbf2i,   too_many_1,    wrong_no_1},
    {"wulessp*",                too_few_2,      CC_wulesspH,   wrong_no_2},
    {"qqe_ofsf_prepat",         CC_qqe_ofsf_prepat,too_many_1, wrong_no_1},
    {"ibalp_vequal",            too_few_2,      CC_ibalp_vequal,wrong_no_2},
    {"quotk",                   too_few_2,      CC_quotk,      wrong_no_2},
    {"testred",                 CC_testred,     too_many_1,    wrong_no_1},
    {"xdegree",                 CC_xdegree,     too_many_1,    wrong_no_1},
    {"kernp",                   CC_kernp,       too_many_1,    wrong_no_1},
    {"crprcd",                  CC_crprcd,      too_many_1,    wrong_no_1},
    {"exptf1",                  too_few_2,      CC_exptf1,     wrong_no_2},
    {"ofsf_ordatp",             too_few_2,      CC_ofsf_ordatp,wrong_no_2},
    {"rmplus",                  CC_rmplus,      too_many_1,    wrong_no_1},
    {"ordpa",                   too_few_2,      CC_ordpa,      wrong_no_2},
    {"rl_simp",                 CC_rl_simp,     too_many_1,    wrong_no_1},
    {"wuorderp",                too_few_2,      CC_wuorderp,   wrong_no_2},
    {"matrix+p",                CC_matrixLp,    too_many_1,    wrong_no_1},
    {"ibalp_simpat",            CC_ibalp_simpat,too_many_1,    wrong_no_1},
    {"objectom",                CC_objectom,    too_many_1,    wrong_no_1},
    {"ident",                   CC_ident,       too_many_1,    wrong_no_1},
    {"dim<deg",                 CC_dimRdeg,     too_many_1,    wrong_no_1},
    {"id2bytelist",             CC_id2bytelist, too_many_1,    wrong_no_1},
    {"assert_analyze",          wrong_no_na,    wrong_no_nb,   (n_args *)CC_assert_analyze},
    {"lambda_wrlijy187crc",     too_few_2,      CC_lambda_wrlijy187crc,wrong_no_2},
    {"maprint",                 too_few_2,      CC_maprint,    wrong_no_2},
    {"*i2gi",                   CC_Hi2gi,       too_many_1,    wrong_no_1},
    {"exptf",                   too_few_2,      CC_exptf,      wrong_no_2},
    {"rread1",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_rread1},
    {"polynommultiplybymonom",  too_few_2,      CC_polynommultiplybymonom,wrong_no_2},
    {"removeg",                 too_few_2,      CC_removeg,    wrong_no_2},
    {"freevarinexptchk",        CC_freevarinexptchk,too_many_1,wrong_no_1},
    {"searchtm",                CC_searchtm,    too_many_1,    wrong_no_1},
    {"bcone?",                  CC_bconeW,      too_many_1,    wrong_no_1},
    {"ncmpchk",                 too_few_2,      CC_ncmpchk,    wrong_no_2},
    {"contrsp",                 too_few_2,      CC_contrsp,    wrong_no_2},
    {"take-realpart",           CC_takeKrealpart,too_many_1,   wrong_no_1},
    {"cali_bc_fi",              CC_cali_bc_fi,  too_many_1,    wrong_no_1},
    {"oprin",                   CC_oprin,       too_many_1,    wrong_no_1},
    {"th_match0",               too_few_2,      CC_th_match0,  wrong_no_2},
    {"sfto_qsub1",              too_few_2,      CC_sfto_qsub1, wrong_no_2},
    {"remflagss",               too_few_2,      CC_remflagss,  wrong_no_2},
    {"ofsf_posvarpat",          too_few_2,      CC_ofsf_posvarpat,wrong_no_2},
    {"processcarpartitie1",     wrong_no_na,    wrong_no_nb,   (n_args *)CC_processcarpartitie1},
    {"ofsf_smwcpknowl",         CC_ofsf_smwcpknowl,too_many_1, wrong_no_1},
    {NULL, (one_args *)"u09", (two_args *)"21007 1596176 8152517", 0}
};

/* end of generated code */

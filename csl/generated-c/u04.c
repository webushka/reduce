
/* $destdir/u04.c        Machine generated C code */

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


/* Code for pv_renorm */

static Lisp_Object CC_pv_renorm(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0023, v0024;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pv_renorm");
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
    v0023 = stack[0];
    if (!(v0023 == nil)) goto v0025;
    v0023 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0023); }

v0025:
    v0023 = stack[0];
    if (v0023 == nil) goto v0026;
    v0023 = stack[0];
    v0023 = qcar(v0023);
    v0024 = qcar(v0023);
    v0023 = (Lisp_Object)1; /* 0 */
    if (!(v0024 == v0023)) goto v0026;
    v0023 = stack[0];
    v0023 = qcdr(v0023);
    stack[0] = v0023;
    goto v0025;

v0026:
    v0023 = stack[0];
    if (v0023 == nil) goto v0027;
    v0023 = stack[0];
    v0023 = qcar(v0023);
    v0024 = qcar(v0023);
    v0023 = (Lisp_Object)1; /* 0 */
    v0023 = (Lisp_Object)lessp2(v0024, v0023);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    v0023 = v0023 ? lisp_true : nil;
    env = stack[-4];
    if (v0023 == nil) goto v0029;
    v0023 = stack[0];
    fn = elt(env, 2); /* pv_neg */
    v0023 = (*qfn1(fn))(qenv(fn), v0023);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-4];
    stack[0] = v0023;
    goto v0029;

v0029:
    v0023 = stack[0];
    v0023 = qcar(v0023);
    v0023 = qcar(v0023);
    stack[-2] = v0023;
    v0023 = stack[0];
    v0023 = qcdr(v0023);
    stack[-3] = v0023;
    goto v0030;

v0030:
    v0023 = stack[-3];
    if (v0023 == nil) goto v0031;
    v0024 = stack[-2];
    v0023 = (Lisp_Object)17; /* 1 */
    if (v0024 == v0023) goto v0031;
    v0024 = stack[-2];
    v0023 = stack[-3];
    v0023 = qcar(v0023);
    v0023 = qcar(v0023);
    fn = elt(env, 3); /* gcdf!* */
    v0023 = (*qfn2(fn))(qenv(fn), v0024, v0023);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-4];
    stack[-2] = v0023;
    v0023 = stack[-3];
    v0023 = qcdr(v0023);
    stack[-3] = v0023;
    goto v0030;

v0031:
    v0023 = qvalue(elt(env, 1)); /* nil */
    stack[-3] = v0023;
    v0023 = stack[0];
    stack[-1] = v0023;
    goto v0032;

v0032:
    v0023 = stack[-1];
    if (v0023 == nil) goto v0033;
    v0023 = stack[-1];
    v0023 = qcar(v0023);
    stack[0] = v0023;
    v0023 = stack[0];
    v0024 = qcar(v0023);
    v0023 = (Lisp_Object)1; /* 0 */
    if (v0024 == v0023) goto v0034;
    v0024 = stack[-2];
    v0023 = (Lisp_Object)17; /* 1 */
    if (v0024 == v0023) goto v0035;
    v0023 = stack[0];
    v0024 = qcar(v0023);
    v0023 = stack[-2];
    v0024 = quot2(v0024, v0023);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-4];
    v0023 = stack[0];
    v0023 = qcdr(v0023);
    v0023 = cons(v0024, v0023);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-4];
    v0024 = v0023;
    goto v0036;

v0036:
    v0023 = stack[-3];
    v0023 = cons(v0024, v0023);
    nil = C_nil;
    if (exception_pending()) goto v0028;
    env = stack[-4];
    stack[-3] = v0023;
    goto v0034;

v0034:
    v0023 = stack[-1];
    v0023 = qcdr(v0023);
    stack[-1] = v0023;
    goto v0032;

v0035:
    v0023 = stack[0];
    v0024 = v0023;
    goto v0036;

v0033:
    v0023 = stack[-3];
        popv(5);
        return Lnreverse(nil, v0023);

v0027:
    v0023 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0023); }
/* error exit handlers */
v0028:
    popv(5);
    return nil;
}



/* Code for general!-modular!-number */

static Lisp_Object CC_generalKmodularKnumber(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0040, v0041;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for general-modular-number");
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
    v0041 = stack[0];
    v0040 = qvalue(elt(env, 1)); /* current!-modulus */
    v0040 = Cremainder(v0041, v0040);
    nil = C_nil;
    if (exception_pending()) goto v0042;
    env = stack[-1];
    stack[0] = v0040;
    v0041 = stack[0];
    v0040 = (Lisp_Object)1; /* 0 */
    v0040 = (Lisp_Object)lessp2(v0041, v0040);
    nil = C_nil;
    if (exception_pending()) goto v0042;
    v0040 = v0040 ? lisp_true : nil;
    env = stack[-1];
    if (v0040 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v0041 = stack[0];
    v0040 = qvalue(elt(env, 1)); /* current!-modulus */
    v0040 = plus2(v0041, v0040);
    nil = C_nil;
    if (exception_pending()) goto v0042;
    stack[0] = v0040;
    { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
/* error exit handlers */
v0042:
    popv(2);
    return nil;
}



/* Code for flatten!-sorted!-tree */

static Lisp_Object CC_flattenKsortedKtree(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0048, v0027, v0049;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for flatten-sorted-tree");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v0048 = v0043;
    v0027 = v0000;
/* end of prologue */

v0050:
    v0049 = v0027;
    if (v0049 == nil) { popv(3); return onevalue(v0048); }
    v0049 = v0027;
    v0049 = qcar(v0049);
    stack[-1] = v0049;
    v0049 = v0027;
    v0049 = qcdr(v0049);
    stack[0] = qcar(v0049);
    v0027 = qcdr(v0027);
    v0027 = qcdr(v0027);
    v0048 = CC_flattenKsortedKtree(env, v0027, v0048);
    nil = C_nil;
    if (exception_pending()) goto v0051;
    env = stack[-2];
    v0048 = cons(stack[0], v0048);
    nil = C_nil;
    if (exception_pending()) goto v0051;
    env = stack[-2];
    v0027 = stack[-1];
    goto v0050;
/* error exit handlers */
v0051:
    popv(3);
    return nil;
}



/* Code for xcomment */

static Lisp_Object CC_xcomment(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0044, v0045, v0054;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for xcomment");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0054 = v0043;
    v0045 = v0000;
/* end of prologue */
    v0044 = v0054;
    if (v0044 == nil) { popv(2); return onevalue(v0045); }
    stack[0] = elt(env, 1); /* comment */
    v0044 = v0054;
    v0044 = Lnreverse(nil, v0044);
    env = stack[-1];
    fn = elt(env, 2); /* aconc */
    v0044 = (*qfn2(fn))(qenv(fn), v0044, v0045);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    env = stack[-1];
    v0044 = cons(stack[0], v0044);
    nil = C_nil;
    if (exception_pending()) goto v0055;
    v0045 = v0044;
    { popv(2); return onevalue(v0045); }
/* error exit handlers */
v0055:
    popv(2);
    return nil;
}



/* Code for sfto_reorder */

static Lisp_Object CC_sfto_reorder(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0052;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for sfto_reorder");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v0052 = v0043;
    stack[0] = v0000;
/* end of prologue */
    v0052 = ncons(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0056;
    env = stack[-2];
    fn = elt(env, 1); /* setkorder */
    v0052 = (*qfn1(fn))(qenv(fn), v0052);
    nil = C_nil;
    if (exception_pending()) goto v0056;
    env = stack[-2];
    stack[-1] = v0052;
    v0052 = stack[0];
    fn = elt(env, 2); /* reorder */
    v0052 = (*qfn1(fn))(qenv(fn), v0052);
    nil = C_nil;
    if (exception_pending()) goto v0056;
    env = stack[-2];
    stack[0] = v0052;
    v0052 = stack[-1];
    fn = elt(env, 1); /* setkorder */
    v0052 = (*qfn1(fn))(qenv(fn), v0052);
    nil = C_nil;
    if (exception_pending()) goto v0056;
    { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
/* error exit handlers */
v0056:
    popv(3);
    return nil;
}



/* Code for treesizep1 */

static Lisp_Object CC_treesizep1(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0042, v0048;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for treesizep1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0043;
    stack[-1] = v0000;
/* end of prologue */

v0058:
    v0042 = stack[-1];
    if (!consp(v0042)) goto v0059;
    v0042 = stack[-1];
    v0048 = qcar(v0042);
    v0042 = stack[0];
    v0048 = CC_treesizep1(env, v0048, v0042);
    nil = C_nil;
    if (exception_pending()) goto v0060;
    env = stack[-2];
    stack[0] = v0048;
    v0042 = (Lisp_Object)1; /* 0 */
    v0042 = (Lisp_Object)greaterp2(v0048, v0042);
    nil = C_nil;
    if (exception_pending()) goto v0060;
    v0042 = v0042 ? lisp_true : nil;
    env = stack[-2];
    if (v0042 == nil) goto v0040;
    v0042 = stack[-1];
    v0042 = qcdr(v0042);
    stack[-1] = v0042;
    goto v0058;

v0040:
    v0042 = (Lisp_Object)1; /* 0 */
    { popv(3); return onevalue(v0042); }

v0059:
    v0042 = stack[0];
    popv(3);
    return sub1(v0042);
/* error exit handlers */
v0060:
    popv(3);
    return nil;
}



/* Code for rl_smupdknowl */

static Lisp_Object MS_CDECL CC_rl_smupdknowl(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0045, v0054, v0057, v0055;
    Lisp_Object fn;
    Lisp_Object v0047, v0063, v0043, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "rl_smupdknowl");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0043 = va_arg(aa, Lisp_Object);
    v0063 = va_arg(aa, Lisp_Object);
    v0047 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rl_smupdknowl");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push4(v0047,v0063,v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0000,v0043,v0063,v0047);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0045 = v0047;
    v0054 = v0063;
    v0057 = v0043;
    v0055 = v0000;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* rl_smupdknowl!* */
    v0045 = list4(v0055, v0057, v0054, v0045);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-1];
    {
        Lisp_Object v0021 = stack[0];
        popv(2);
        fn = elt(env, 2); /* apply */
        return (*qfn2(fn))(qenv(fn), v0021, v0045);
    }
/* error exit handlers */
v0022:
    popv(2);
    return nil;
}



/* Code for maxdeg */

static Lisp_Object CC_maxdeg(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0046, v0042;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for maxdeg");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0043;
    stack[-1] = v0000;
/* end of prologue */

v0050:
    v0046 = stack[-1];
    if (v0046 == nil) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v0046 = stack[-1];
    v0046 = qcar(v0046);
    v0042 = qcdr(v0046);
    v0046 = stack[0];
    v0046 = qcdr(v0046);
    v0046 = (Lisp_Object)greaterp2(v0042, v0046);
    nil = C_nil;
    if (exception_pending()) goto v0049;
    v0046 = v0046 ? lisp_true : nil;
    env = stack[-2];
    if (v0046 == nil) goto v0022;
    v0046 = stack[-1];
    v0046 = qcdr(v0046);
    v0042 = v0046;
    v0046 = stack[-1];
    v0046 = qcar(v0046);
    stack[0] = v0046;
    v0046 = v0042;
    stack[-1] = v0046;
    goto v0050;

v0022:
    v0046 = stack[-1];
    v0046 = qcdr(v0046);
    stack[-1] = v0046;
    goto v0050;
/* error exit handlers */
v0049:
    popv(3);
    return nil;
}



/* Code for tayexp!-plus2 */

static Lisp_Object CC_tayexpKplus2(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0072, v0073, v0074;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for tayexp-plus2");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0043;
    v0073 = v0000;
/* end of prologue */
    v0072 = v0073;
    if (!consp(v0072)) goto v0075;
    v0072 = qvalue(elt(env, 1)); /* nil */
    goto v0059;

v0059:
    if (v0072 == nil) goto v0044;
    v0072 = stack[0];
    popv(3);
    return plus2(v0073, v0072);

v0044:
    v0072 = v0073;
    if (!consp(v0072)) goto v0040;
    v0072 = stack[0];
    if (!consp(v0072)) goto v0076;
    v0072 = stack[0];
    fn = elt(env, 2); /* rnplus!: */
    v0072 = (*qfn2(fn))(qenv(fn), v0073, v0072);
    nil = C_nil;
    if (exception_pending()) goto v0077;
    goto v0057;

v0057:
    v0074 = v0072;
    v0072 = v0074;
    v0072 = qcdr(v0072);
    v0073 = qcdr(v0072);
    v0072 = (Lisp_Object)17; /* 1 */
    if (!(v0073 == v0072)) { popv(3); return onevalue(v0074); }
    v0072 = v0074;
    v0072 = qcdr(v0072);
    v0072 = qcar(v0072);
    { popv(3); return onevalue(v0072); }

v0076:
    stack[-1] = v0073;
    v0072 = stack[0];
    fn = elt(env, 3); /* !*i2rn */
    v0072 = (*qfn1(fn))(qenv(fn), v0072);
    nil = C_nil;
    if (exception_pending()) goto v0077;
    env = stack[-2];
    fn = elt(env, 2); /* rnplus!: */
    v0072 = (*qfn2(fn))(qenv(fn), stack[-1], v0072);
    nil = C_nil;
    if (exception_pending()) goto v0077;
    goto v0057;

v0040:
    v0072 = v0073;
    fn = elt(env, 3); /* !*i2rn */
    v0073 = (*qfn1(fn))(qenv(fn), v0072);
    nil = C_nil;
    if (exception_pending()) goto v0077;
    env = stack[-2];
    v0072 = stack[0];
    fn = elt(env, 2); /* rnplus!: */
    v0072 = (*qfn2(fn))(qenv(fn), v0073, v0072);
    nil = C_nil;
    if (exception_pending()) goto v0077;
    goto v0057;

v0075:
    v0072 = stack[0];
    v0072 = (consp(v0072) ? nil : lisp_true);
    goto v0059;
/* error exit handlers */
v0077:
    popv(3);
    return nil;
}



/* Code for get!+col!+nr */

static Lisp_Object CC_getLcolLnr(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0071;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for get+col+nr");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0071 = v0000;
/* end of prologue */
    v0071 = qcar(v0071);
        return Llength(nil, v0071);
}



/* Code for rl_simplat1 */

static Lisp_Object CC_rl_simplat1(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0078, v0079;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rl_simplat1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0078 = v0043;
    v0079 = v0000;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* rl_simplat1!* */
    v0078 = list2(v0079, v0078);
    nil = C_nil;
    if (exception_pending()) goto v0053;
    env = stack[-1];
    {
        Lisp_Object v0038 = stack[0];
        popv(2);
        fn = elt(env, 2); /* apply */
        return (*qfn2(fn))(qenv(fn), v0038, v0078);
    }
/* error exit handlers */
v0053:
    popv(2);
    return nil;
}



/* Code for ibalp_varlt */

static Lisp_Object CC_ibalp_varlt(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0003, v0009;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ibalp_varlt");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0003 = v0000;
/* end of prologue */
    v0009 = v0003;
    v0003 = qvalue(elt(env, 1)); /* nil */
    {
        fn = elt(env, 2); /* ibalp_varlt1 */
        return (*qfn2(fn))(qenv(fn), v0009, v0003);
    }
}



/* Code for vevcompless!? */

static Lisp_Object CC_vevcomplessW(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0078, v0079;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for vevcompless?");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0079 = v0043;
    v0078 = v0000;
/* end of prologue */
    stack[0] = (Lisp_Object)17; /* 1 */
    fn = elt(env, 1); /* evcomp */
    v0078 = (*qfn2(fn))(qenv(fn), v0079, v0078);
    nil = C_nil;
    if (exception_pending()) goto v0053;
    v0078 = (stack[0] == v0078 ? lisp_true : nil);
    { popv(1); return onevalue(v0078); }
/* error exit handlers */
v0053:
    popv(1);
    return nil;
}



/* Code for mkwedge */

static Lisp_Object CC_mkwedge(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0052, v0026, v0025;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mkwedge");
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
    v0052 = v0000;
/* end of prologue */
    v0025 = v0052;
    v0026 = (Lisp_Object)17; /* 1 */
    v0052 = (Lisp_Object)17; /* 1 */
    v0052 = list2star(v0025, v0026, v0052);
    errexit();
    return ncons(v0052);
}



/* Code for scprint */

static Lisp_Object CC_scprint(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0087, v0088;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for scprint");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0043;
    v0088 = v0000;
/* end of prologue */
    v0087 = qvalue(elt(env, 1)); /* !*utf8 */
    if (v0087 == nil) goto v0071;
    v0087 = stack[-2];
    {
        popv(5);
        fn = elt(env, 4); /* utf8_scprint */
        return (*qfn2(fn))(qenv(fn), v0088, v0087);
    }

v0071:
    v0087 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 2)) = v0087; /* posn!* */
    v0087 = v0088;
    stack[-1] = v0087;
    goto v0039;

v0039:
    v0087 = stack[-1];
    if (v0087 == nil) goto v0038;
    v0087 = stack[-1];
    v0087 = qcar(v0087);
    stack[0] = v0087;
    v0087 = stack[0];
    v0087 = qcar(v0087);
    v0088 = qcdr(v0087);
    v0087 = stack[-2];
    if (!(equal(v0088, v0087))) goto v0046;
    v0087 = stack[0];
    v0087 = qcar(v0087);
    v0087 = qcar(v0087);
    v0088 = qcar(v0087);
    v0087 = qvalue(elt(env, 2)); /* posn!* */
    v0088 = difference2(v0088, v0087);
    nil = C_nil;
    if (exception_pending()) goto v0089;
    env = stack[-4];
    stack[-3] = v0088;
    v0087 = (Lisp_Object)1; /* 0 */
    v0087 = (Lisp_Object)lessp2(v0088, v0087);
    nil = C_nil;
    if (exception_pending()) goto v0089;
    v0087 = v0087 ? lisp_true : nil;
    env = stack[-4];
    if (!(v0087 == nil)) goto v0090;
    v0087 = stack[-3];
    v0087 = Lxtab(nil, v0087);
    nil = C_nil;
    if (exception_pending()) goto v0089;
    env = stack[-4];
    goto v0090;

v0090:
    v0087 = stack[0];
    v0087 = qcdr(v0087);
    v0087 = Lprinc(nil, v0087);
    nil = C_nil;
    if (exception_pending()) goto v0089;
    env = stack[-4];
    v0087 = stack[0];
    v0087 = qcar(v0087);
    v0087 = qcar(v0087);
    v0087 = qcdr(v0087);
    qvalue(elt(env, 2)) = v0087; /* posn!* */
    goto v0046;

v0046:
    v0087 = stack[-1];
    v0087 = qcdr(v0087);
    stack[-1] = v0087;
    goto v0039;

v0038:
    v0087 = nil;
    { popv(5); return onevalue(v0087); }
/* error exit handlers */
v0089:
    popv(5);
    return nil;
}



/* Code for fprin2 */

static Lisp_Object CC_fprin2(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0026, v0025;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fprin2");
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
    v0025 = v0000;
/* end of prologue */
    v0026 = qvalue(elt(env, 1)); /* nil */
    stack[0] = qvalue(elt(env, 2)); /* !*lower */
    qvalue(elt(env, 2)) = v0026; /* !*lower */
    v0026 = qvalue(elt(env, 3)); /* !*fortupper */
    if (v0026 == nil) goto v0009;
    v0026 = v0025;
    fn = elt(env, 4); /* prin2!-upcase */
    v0026 = (*qfn1(fn))(qenv(fn), v0026);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-1];
    goto v0058;

v0058:
    qvalue(elt(env, 2)) = stack[0]; /* !*lower */
    { popv(2); return onevalue(v0026); }

v0009:
    v0026 = v0025;
    fn = elt(env, 5); /* prin2!-downcase */
    v0026 = (*qfn1(fn))(qenv(fn), v0026);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-1];
    goto v0058;
/* error exit handlers */
v0078:
    env = stack[-1];
    qvalue(elt(env, 2)) = stack[0]; /* !*lower */
    popv(2);
    return nil;
}



/* Code for widestring2list */

static Lisp_Object CC_widestring2list(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0138, v0139;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for widestring2list");
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
    v0138 = v0000;
/* end of prologue */
    stack[-2] = nil;
    fn = elt(env, 2); /* string2list */
    v0138 = (*qfn1(fn))(qenv(fn), v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[-3] = v0138;
    goto v0059;

v0059:
    v0138 = stack[-3];
    if (v0138 == nil) goto v0080;
    v0138 = stack[-3];
    v0138 = qcar(v0138);
    stack[0] = v0138;
    v0138 = stack[-3];
    v0138 = qcdr(v0138);
    stack[-3] = v0138;
    v0139 = stack[0];
    v0138 = (Lisp_Object)2049; /* 128 */
    fn = elt(env, 3); /* land */
    v0139 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = (Lisp_Object)1; /* 0 */
    if (v0139 == v0138) goto v0141;
    v0139 = stack[0];
    v0138 = (Lisp_Object)3585; /* 224 */
    fn = elt(env, 3); /* land */
    v0139 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = (Lisp_Object)3073; /* 192 */
    if (v0139 == v0138) goto v0051;
    v0139 = stack[0];
    v0138 = (Lisp_Object)3841; /* 240 */
    fn = elt(env, 3); /* land */
    v0139 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = (Lisp_Object)3585; /* 224 */
    if (v0139 == v0138) goto v0142;
    v0139 = stack[0];
    v0138 = (Lisp_Object)3969; /* 248 */
    fn = elt(env, 3); /* land */
    v0139 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = (Lisp_Object)3841; /* 240 */
    if (v0139 == v0138) goto v0143;
    v0139 = (Lisp_Object)1; /* 0 */
    v0138 = elt(env, 1); /* "Improper byte in utf-8 string" */
    fn = elt(env, 4); /* error */
    v0138 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    goto v0141;

v0141:
    v0139 = stack[0];
    v0138 = stack[-2];
    v0138 = cons(v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[-2] = v0138;
    goto v0059;

v0143:
    v0138 = stack[-3];
    fn = elt(env, 5); /* moan!-if!-truncated */
    v0138 = (*qfn1(fn))(qenv(fn), v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[-1] = v0138;
    v0138 = stack[-3];
    v0138 = qcdr(v0138);
    stack[-3] = v0138;
    v0139 = stack[0];
    v0138 = (Lisp_Object)113; /* 7 */
    fn = elt(env, 3); /* land */
    v0139 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = (Lisp_Object)289; /* 18 */
    fn = elt(env, 6); /* lshift */
    stack[0] = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0139 = stack[-1];
    v0138 = (Lisp_Object)1009; /* 63 */
    fn = elt(env, 3); /* land */
    v0139 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = (Lisp_Object)193; /* 12 */
    fn = elt(env, 6); /* lshift */
    v0138 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = plus2(stack[0], v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[0] = v0138;
    v0138 = stack[-3];
    fn = elt(env, 5); /* moan!-if!-truncated */
    v0138 = (*qfn1(fn))(qenv(fn), v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[-1] = v0138;
    v0138 = stack[-3];
    v0138 = qcdr(v0138);
    stack[-3] = v0138;
    v0139 = stack[-1];
    v0138 = (Lisp_Object)1009; /* 63 */
    fn = elt(env, 3); /* land */
    v0139 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = (Lisp_Object)97; /* 6 */
    fn = elt(env, 6); /* lshift */
    v0138 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = plus2(stack[0], v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[0] = v0138;
    v0138 = stack[-3];
    fn = elt(env, 5); /* moan!-if!-truncated */
    v0138 = (*qfn1(fn))(qenv(fn), v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[-1] = v0138;
    v0138 = stack[-3];
    v0138 = qcdr(v0138);
    stack[-3] = v0138;
    v0139 = stack[-1];
    v0138 = (Lisp_Object)1009; /* 63 */
    fn = elt(env, 3); /* land */
    v0138 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = plus2(stack[0], v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[0] = v0138;
    goto v0141;

v0142:
    v0138 = stack[-3];
    fn = elt(env, 5); /* moan!-if!-truncated */
    v0138 = (*qfn1(fn))(qenv(fn), v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[-1] = v0138;
    v0138 = stack[-3];
    v0138 = qcdr(v0138);
    stack[-3] = v0138;
    v0139 = stack[0];
    v0138 = (Lisp_Object)241; /* 15 */
    fn = elt(env, 3); /* land */
    v0139 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = (Lisp_Object)193; /* 12 */
    fn = elt(env, 6); /* lshift */
    stack[0] = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0139 = stack[-1];
    v0138 = (Lisp_Object)1009; /* 63 */
    fn = elt(env, 3); /* land */
    v0139 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = (Lisp_Object)97; /* 6 */
    fn = elt(env, 6); /* lshift */
    v0138 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = plus2(stack[0], v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[0] = v0138;
    v0138 = stack[-3];
    fn = elt(env, 5); /* moan!-if!-truncated */
    v0138 = (*qfn1(fn))(qenv(fn), v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[-1] = v0138;
    v0138 = stack[-3];
    v0138 = qcdr(v0138);
    stack[-3] = v0138;
    v0139 = stack[-1];
    v0138 = (Lisp_Object)1009; /* 63 */
    fn = elt(env, 3); /* land */
    v0138 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = plus2(stack[0], v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[0] = v0138;
    goto v0141;

v0051:
    v0138 = stack[-3];
    fn = elt(env, 5); /* moan!-if!-truncated */
    v0138 = (*qfn1(fn))(qenv(fn), v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[-1] = v0138;
    v0138 = stack[-3];
    v0138 = qcdr(v0138);
    stack[-3] = v0138;
    v0139 = stack[0];
    v0138 = (Lisp_Object)497; /* 31 */
    fn = elt(env, 3); /* land */
    v0139 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = (Lisp_Object)97; /* 6 */
    fn = elt(env, 6); /* lshift */
    stack[0] = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0139 = stack[-1];
    v0138 = (Lisp_Object)1009; /* 63 */
    fn = elt(env, 3); /* land */
    v0138 = (*qfn2(fn))(qenv(fn), v0139, v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    v0138 = plus2(stack[0], v0138);
    nil = C_nil;
    if (exception_pending()) goto v0140;
    env = stack[-4];
    stack[0] = v0138;
    goto v0141;

v0080:
    v0138 = stack[-2];
        popv(5);
        return Lnreverse(nil, v0138);
/* error exit handlers */
v0140:
    popv(5);
    return nil;
}



/* Code for getrtype */

static Lisp_Object CC_getrtype(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0143, v0152, v0153;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for getrtype");
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

v0154:
    v0143 = stack[0];
    if (v0143 == nil) goto v0059;
    v0143 = stack[0];
    if (!consp(v0143)) goto v0061;
    v0143 = stack[0];
    v0143 = qcar(v0143);
    if (symbolp(v0143)) goto v0155;
    v0143 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0143); }

v0155:
    v0143 = stack[0];
    v0143 = qcar(v0143);
    v0152 = CC_getrtype(env, v0143);
    nil = C_nil;
    if (exception_pending()) goto v0156;
    env = stack[-1];
    v0143 = elt(env, 3); /* array */
    if (v0152 == v0143) goto v0121;
    v0143 = qvalue(elt(env, 1)); /* nil */
    goto v0131;

v0131:
    if (v0143 == nil) goto v0157;
    v0143 = stack[0];
    fn = elt(env, 7); /* getelv */
    v0143 = (*qfn1(fn))(qenv(fn), v0143);
    nil = C_nil;
    if (exception_pending()) goto v0156;
    env = stack[-1];
    stack[0] = v0143;
    goto v0154;

v0157:
    v0143 = stack[0];
    v0143 = qcar(v0143);
    if (!symbolp(v0143)) v0143 = nil;
    else { v0143 = qfastgets(v0143);
           if (v0143 != nil) { v0143 = elt(v0143, 4); /* avalue */
#ifdef RECORD_GET
             if (v0143 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v0143 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v0143 == SPID_NOPROP) v0143 = nil; }}
#endif
    v0152 = v0143;
    if (v0143 == nil) goto v0158;
    v0143 = v0152;
    v0143 = qcar(v0143);
    if (!symbolp(v0143)) v0143 = nil;
    else { v0143 = qfastgets(v0143);
           if (v0143 != nil) { v0143 = elt(v0143, 19); /* rtypefn */
#ifdef RECORD_GET
             if (v0143 != SPID_NOPROP)
                record_get(elt(fastget_names, 19), 1);
             else record_get(elt(fastget_names, 19), 0),
                v0143 = nil; }
           else record_get(elt(fastget_names, 19), 0); }
#else
             if (v0143 == SPID_NOPROP) v0143 = nil; }}
#endif
    v0152 = v0143;
    if (v0143 == nil) goto v0158;
    v0143 = stack[0];
    v0143 = qcdr(v0143);
        popv(2);
        return Lapply1(nil, v0152, v0143);

v0158:
    v0143 = stack[0];
    v0152 = qcar(v0143);
    v0143 = elt(env, 5); /* sub */
    if (v0152 == v0143) goto v0159;
    v0143 = stack[0];
    {
        popv(2);
        fn = elt(env, 8); /* getrtype2 */
        return (*qfn1(fn))(qenv(fn), v0143);
    }

v0159:
    v0143 = elt(env, 6); /* yetunknowntype */
    { popv(2); return onevalue(v0143); }

v0121:
    v0152 = qvalue(elt(env, 4)); /* frlis!* */
    v0143 = stack[0];
    v0143 = qcdr(v0143);
    fn = elt(env, 9); /* smemqlp */
    v0143 = (*qfn2(fn))(qenv(fn), v0152, v0143);
    nil = C_nil;
    if (exception_pending()) goto v0156;
    env = stack[-1];
    v0143 = (v0143 == nil ? lisp_true : nil);
    goto v0131;

v0061:
    v0143 = stack[0];
    if (symbolp(v0143)) goto v0078;
    v0143 = stack[0];
    if (is_number(v0143)) goto v0054;
    v0143 = stack[0];
    {
        popv(2);
        fn = elt(env, 10); /* getrtype1 */
        return (*qfn1(fn))(qenv(fn), v0143);
    }

v0054:
    v0143 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0143); }

v0078:
    v0143 = stack[0];
    if (!symbolp(v0143)) v0143 = nil;
    else { v0143 = qfastgets(v0143);
           if (v0143 != nil) { v0143 = elt(v0143, 17); /* share */
#ifdef RECORD_GET
             if (v0143 == SPID_NOPROP)
                record_get(elt(fastget_names, 17), 0),
                v0143 = nil;
             else record_get(elt(fastget_names, 17), 1),
                v0143 = lisp_true; }
           else record_get(elt(fastget_names, 17), 0); }
#else
             if (v0143 == SPID_NOPROP) v0143 = nil; else v0143 = lisp_true; }}
#endif
    if (v0143 == nil) goto v0022;
    v0143 = stack[0];
    fn = elt(env, 11); /* eval */
    v0153 = (*qfn1(fn))(qenv(fn), v0143);
    nil = C_nil;
    if (exception_pending()) goto v0156;
    env = stack[-1];
    v0152 = v0153;
    v0143 = stack[0];
    if (v0153 == v0143) goto v0042;
    v0143 = v0152;
    stack[0] = v0143;
    goto v0154;

v0042:
    v0143 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0143); }

v0022:
    v0143 = stack[0];
    if (!symbolp(v0143)) v0143 = nil;
    else { v0143 = qfastgets(v0143);
           if (v0143 != nil) { v0143 = elt(v0143, 4); /* avalue */
#ifdef RECORD_GET
             if (v0143 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v0143 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v0143 == SPID_NOPROP) v0143 = nil; }}
#endif
    v0152 = v0143;
    if (v0143 == nil) goto v0160;
    v0143 = v0152;
    v0153 = qcar(v0143);
    v0143 = elt(env, 2); /* (scalar generic) */
    v0143 = Lmemq(nil, v0153, v0143);
    if (!(v0143 == nil)) goto v0160;

v0070:
    v0143 = v0152;
    v0143 = qcar(v0143);
    if (!symbolp(v0143)) v0143 = nil;
    else { v0143 = qfastgets(v0143);
           if (v0143 != nil) { v0143 = elt(v0143, 19); /* rtypefn */
#ifdef RECORD_GET
             if (v0143 != SPID_NOPROP)
                record_get(elt(fastget_names, 19), 1);
             else record_get(elt(fastget_names, 19), 0),
                v0143 = nil; }
           else record_get(elt(fastget_names, 19), 0); }
#else
             if (v0143 == SPID_NOPROP) v0143 = nil; }}
#endif
    v0153 = v0143;
    if (v0143 == nil) goto v0133;
    v0143 = v0153;
    v0152 = qvalue(elt(env, 1)); /* nil */
        popv(2);
        return Lapply1(nil, v0143, v0152);

v0133:
    v0143 = v0152;
    v0143 = qcar(v0143);
    { popv(2); return onevalue(v0143); }

v0160:
    v0143 = stack[0];
    if (!symbolp(v0143)) v0143 = nil;
    else { v0143 = qfastgets(v0143);
           if (v0143 != nil) { v0143 = elt(v0143, 2); /* rtype */
#ifdef RECORD_GET
             if (v0143 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v0143 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v0143 == SPID_NOPROP) v0143 = nil; }}
#endif
    v0152 = v0143;
    if (v0143 == nil) goto v0161;
    v0143 = v0152;
    v0143 = ncons(v0143);
    nil = C_nil;
    if (exception_pending()) goto v0156;
    env = stack[-1];
    v0152 = v0143;
    if (!(v0143 == nil)) goto v0070;

v0161:
    v0143 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0143); }

v0059:
    v0143 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0143); }
/* error exit handlers */
v0156:
    popv(2);
    return nil;
}



/* Code for prepsqx */

static Lisp_Object CC_prepsqx(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0080, v0052;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for prepsqx");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0052 = v0000;
/* end of prologue */
    v0080 = qvalue(elt(env, 1)); /* !*intstr */
    if (v0080 == nil) goto v0075;
    v0080 = v0052;
    {
        fn = elt(env, 2); /* prepsq!* */
        return (*qfn1(fn))(qenv(fn), v0080);
    }

v0075:
    v0080 = v0052;
    {
        fn = elt(env, 3); /* prepsq */
        return (*qfn1(fn))(qenv(fn), v0080);
    }
}



/* Code for mo!=sum */

static Lisp_Object CC_moMsum(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0137, v0081, v0163;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mo=sum");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0043;
    stack[-1] = v0000;
/* end of prologue */
    v0163 = nil;
    goto v0059;

v0059:
    v0137 = stack[-1];
    if (v0137 == nil) goto v0060;
    v0137 = stack[0];
    if (v0137 == nil) goto v0060;
    v0137 = stack[-1];
    v0081 = qcar(v0137);
    v0137 = stack[0];
    v0137 = qcar(v0137);
    v0137 = (Lisp_Object)(int32_t)((int32_t)v0081 + (int32_t)v0137 - TAG_FIXNUM);
    v0081 = v0163;
    v0137 = cons(v0137, v0081);
    nil = C_nil;
    if (exception_pending()) goto v0067;
    env = stack[-2];
    v0163 = v0137;
    v0137 = stack[-1];
    v0137 = qcdr(v0137);
    stack[-1] = v0137;
    v0137 = stack[0];
    v0137 = qcdr(v0137);
    stack[0] = v0137;
    goto v0059;

v0060:
    v0137 = v0163;
    v0081 = Lnreverse(nil, v0137);
    v0137 = stack[-1];
    if (v0137 == nil) goto v0160;
    v0137 = stack[-1];
    goto v0029;

v0029:
        popv(3);
        return Lappend(nil, v0081, v0137);

v0160:
    v0137 = stack[0];
    goto v0029;
/* error exit handlers */
v0067:
    popv(3);
    return nil;
}



/* Code for lcm */

static Lisp_Object CC_lcm(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0068, v0065, v0031, v0030;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lcm");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v0031 = v0043;
    v0030 = v0000;
/* end of prologue */
    v0068 = v0030;
    if (v0068 == nil) goto v0075;
    v0068 = v0031;
    v0068 = (v0068 == nil ? lisp_true : nil);
    goto v0059;

v0059:
    if (v0068 == nil) goto v0086;
    v0068 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v0068); }

v0086:
    v0065 = v0030;
    v0068 = (Lisp_Object)17; /* 1 */
    if (v0065 == v0068) { popv(3); return onevalue(v0031); }
    v0065 = v0031;
    v0068 = (Lisp_Object)17; /* 1 */
    if (v0065 == v0068) { popv(3); return onevalue(v0030); }
    stack[-1] = v0030;
    stack[0] = v0031;
    v0068 = v0030;
    v0065 = v0031;
    fn = elt(env, 3); /* gcdf */
    v0068 = (*qfn2(fn))(qenv(fn), v0068, v0065);
    nil = C_nil;
    if (exception_pending()) goto v0082;
    env = stack[-2];
    fn = elt(env, 4); /* quotf!-fail */
    v0068 = (*qfn2(fn))(qenv(fn), stack[0], v0068);
    nil = C_nil;
    if (exception_pending()) goto v0082;
    env = stack[-2];
    {
        Lisp_Object v0165 = stack[-1];
        popv(3);
        fn = elt(env, 5); /* multf */
        return (*qfn2(fn))(qenv(fn), v0165, v0068);
    }

v0075:
    v0068 = qvalue(elt(env, 1)); /* t */
    goto v0059;
/* error exit handlers */
v0082:
    popv(3);
    return nil;
}



/* Code for simpexpon */

static Lisp_Object CC_simpexpon(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0003, v0009;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for simpexpon");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0003 = v0000;
/* end of prologue */
    v0009 = v0003;
    v0003 = elt(env, 1); /* simp!* */
    {
        fn = elt(env, 2); /* simpexpon1 */
        return (*qfn2(fn))(qenv(fn), v0009, v0003);
    }
}



/* Code for readch1 */

static Lisp_Object MS_CDECL CC_readch1(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0200, v0201, v0202;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "readch1");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for readch1");
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
    stack[0] = nil;
    v0200 = qvalue(elt(env, 1)); /* peekchar!* */
    if (v0200 == nil) goto v0059;
    v0200 = qvalue(elt(env, 1)); /* peekchar!* */
    v0200 = qcar(v0200);
    stack[-1] = v0200;
    v0200 = qvalue(elt(env, 1)); /* peekchar!* */
    v0200 = qcdr(v0200);
    qvalue(elt(env, 1)) = v0200; /* peekchar!* */
    v0201 = stack[-1];
    v0200 = qvalue(elt(env, 2)); /* !$eof!$ */
    if (v0201 == v0200) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v0200 = qvalue(elt(env, 4)); /* !*psl */
    if (v0200 == nil) goto v0042;
    v0200 = qvalue(elt(env, 5)); /* !*raise */
    if (v0200 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v0200 = stack[-1];
    fn = elt(env, 21); /* red!-char!-downcase */
    v0200 = (*qfn1(fn))(qenv(fn), v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    stack[-1] = v0200;
    { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }

v0042:
    v0200 = qvalue(elt(env, 6)); /* !*lower */
    if (v0200 == nil) goto v0085;
    v0200 = stack[-1];
    fn = elt(env, 22); /* char!-downcase */
    v0200 = (*qfn1(fn))(qenv(fn), v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    stack[-1] = v0200;
    { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }

v0085:
    v0200 = qvalue(elt(env, 5)); /* !*raise */
    if (v0200 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v0200 = stack[-1];
    fn = elt(env, 23); /* char!-upcase */
    v0200 = (*qfn1(fn))(qenv(fn), v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    stack[-1] = v0200;
    { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }

v0059:
    fn = elt(env, 24); /* terminalp */
    v0200 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    if (v0200 == nil) goto v0163;
    v0200 = qvalue(elt(env, 9)); /* crbuf1!* */
    if (v0200 == nil) goto v0135;
    v0200 = qvalue(elt(env, 9)); /* crbuf1!* */
    v0200 = qcar(v0200);
    stack[-1] = v0200;
    v0200 = qvalue(elt(env, 9)); /* crbuf1!* */
    v0200 = qcdr(v0200);
    qvalue(elt(env, 9)) = v0200; /* crbuf1!* */
    goto v0089;

v0089:
    v0201 = stack[-1];
    v0200 = qvalue(elt(env, 10)); /* crbuf!* */
    v0200 = cons(v0201, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    qvalue(elt(env, 10)) = v0200; /* crbuf!* */
    v0200 = qvalue(elt(env, 1)); /* peekchar!* */
    if (v0200 == nil) goto v0157;
    v0201 = stack[-1];
    v0200 = qvalue(elt(env, 2)); /* !$eof!$ */
    if (v0201 == v0200) goto v0023;
    v0200 = stack[-1];
    fn = elt(env, 25); /* id2string */
    v0200 = (*qfn1(fn))(qenv(fn), v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    fn = elt(env, 26); /* string!-length */
    v0201 = (*qfn1(fn))(qenv(fn), v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    v0200 = (Lisp_Object)17; /* 1 */
    if (v0201 == v0200) goto v0204;
    v0200 = qvalue(elt(env, 3)); /* nil */
    goto v0129;

v0129:
    if (v0200 == nil) goto v0205;
    v0201 = stack[-1];
    v0200 = qvalue(elt(env, 1)); /* peekchar!* */
    v0200 = cons(v0201, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    qvalue(elt(env, 1)) = v0200; /* peekchar!* */
    goto v0059;

v0205:
    v0200 = stack[0];
    v0200 = qcar(v0200);
    qvalue(elt(env, 5)) = v0200; /* !*raise */
    v0200 = stack[0];
    v0200 = qcdr(v0200);
    qvalue(elt(env, 6)) = v0200; /* !*lower */
    v0201 = stack[-1];
    v0200 = elt(env, 12); /* !; */
    if (v0201 == v0200) goto v0206;
    v0200 = qvalue(elt(env, 13)); /* t */
    goto v0207;

v0207:
    if (v0200 == nil) goto v0118;
    v0201 = stack[-1];
    v0200 = qvalue(elt(env, 1)); /* peekchar!* */
    v0200 = cons(v0201, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    v0200 = Lnreverse(nil, v0200);
    env = stack[-2];
    v0200 = qcdr(v0200);
    qvalue(elt(env, 1)) = v0200; /* peekchar!* */
    v0200 = elt(env, 11); /* !# */
    { popv(3); return onevalue(v0200); }

v0118:
    v0200 = qvalue(elt(env, 1)); /* peekchar!* */
    v0200 = Lreverse(nil, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    v0200 = qcdr(v0200);
    stack[-1] = v0200;
    fn = elt(env, 27); /* list2string */
    v0200 = (*qfn1(fn))(qenv(fn), v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    v0200 = Lintern(nil, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    v0201 = v0200;
    v0200 = elt(env, 14); /* unicode_character */
    v0200 = get(v0201, v0200);
    env = stack[-2];
    v0201 = v0200;
    if (v0200 == nil) goto v0208;
    v0200 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 1)) = v0200; /* peekchar!* */
    v0200 = qvalue(elt(env, 13)); /* t */
    qvalue(elt(env, 15)) = v0200; /* named!-character!* */
    v0200 = v0201;
    {
        popv(3);
        fn = elt(env, 28); /* int2wideid */
        return (*qfn1(fn))(qenv(fn), v0200);
    }

v0208:
    v0200 = (Lisp_Object)1; /* 0 */
    v0202 = v0200;
    v0201 = stack[-1];
    v0200 = elt(env, 16); /* u */
    if (!consp(v0201)) goto v0209;
    v0201 = qcar(v0201);
    if (!(v0201 == v0200)) goto v0209;
    v0200 = qvalue(elt(env, 13)); /* t */
    goto v0210;

v0210:
    if (v0200 == nil) goto v0211;
    v0200 = stack[-1];
    v0200 = qcdr(v0200);
    stack[-1] = v0200;
    goto v0009;

v0009:
    v0200 = stack[-1];
    if (v0200 == nil) goto v0061;
    v0200 = stack[-1];
    v0200 = qcar(v0200);
    v0200 = Ldigitp(nil, v0200);
    env = stack[-2];
    if (v0200 == nil) goto v0212;
    v0200 = (Lisp_Object)161; /* 10 */
    v0201 = v0202;
    v0202 = times2(v0200, v0201);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    v0200 = stack[-1];
    v0201 = qcar(v0200);
    v0200 = elt(env, 20); /* hexdigit */
    v0200 = get(v0201, v0200);
    env = stack[-2];
    v0200 = plus2(v0202, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    v0202 = v0200;
    v0200 = stack[-1];
    v0200 = qcdr(v0200);
    stack[-1] = v0200;
    goto v0009;

v0212:
    v0201 = elt(env, 12); /* !; */
    v0200 = qvalue(elt(env, 1)); /* peekchar!* */
    v0200 = cons(v0201, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    v0200 = Lreverse(nil, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    v0200 = qcdr(v0200);
    qvalue(elt(env, 1)) = v0200; /* peekchar!* */
    v0200 = elt(env, 11); /* !# */
    { popv(3); return onevalue(v0200); }

v0061:
    v0200 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 1)) = v0200; /* peekchar!* */
    v0200 = qvalue(elt(env, 13)); /* t */
    qvalue(elt(env, 15)) = v0200; /* named!-character!* */
    v0200 = v0202;
    {
        popv(3);
        fn = elt(env, 28); /* int2wideid */
        return (*qfn1(fn))(qenv(fn), v0200);
    }

v0211:
    v0201 = stack[-1];
    v0200 = elt(env, 18); /* x */
    if (!consp(v0201)) goto v0213;
    v0201 = qcar(v0201);
    if (!(v0201 == v0200)) goto v0213;
    v0200 = qvalue(elt(env, 13)); /* t */
    goto v0214;

v0214:
    if (v0200 == nil) goto v0075;
    v0200 = stack[-1];
    v0200 = qcdr(v0200);
    stack[-1] = v0200;
    goto v0075;

v0075:
    v0200 = stack[-1];
    if (v0200 == nil) goto v0061;
    v0200 = stack[-1];
    v0201 = qcar(v0200);
    v0200 = elt(env, 20); /* hexdigit */
    v0200 = get(v0201, v0200);
    env = stack[-2];
    stack[0] = v0200;
    v0200 = stack[0];
    if (v0200 == nil) goto v0212;
    v0200 = (Lisp_Object)257; /* 16 */
    v0201 = v0202;
    v0201 = times2(v0200, v0201);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    v0200 = stack[0];
    v0200 = plus2(v0201, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    v0202 = v0200;
    v0200 = stack[-1];
    v0200 = qcdr(v0200);
    stack[-1] = v0200;
    goto v0075;

v0213:
    v0201 = stack[-1];
    v0200 = elt(env, 19); /* !X */
    v0200 = Leqcar(nil, v0201, v0200);
    env = stack[-2];
    goto v0214;

v0209:
    v0201 = stack[-1];
    v0200 = elt(env, 17); /* !U */
    v0200 = Leqcar(nil, v0201, v0200);
    env = stack[-2];
    goto v0210;

v0206:
    v0200 = qvalue(elt(env, 1)); /* peekchar!* */
    v0200 = qcdr(v0200);
    v0200 = (v0200 == nil ? lisp_true : nil);
    goto v0207;

v0204:
    v0200 = stack[-1];
    v0200 = Lalpha_char_p(nil, v0200);
    env = stack[-2];
    if (!(v0200 == nil)) goto v0129;
    v0200 = stack[-1];
    v0200 = Ldigitp(nil, v0200);
    env = stack[-2];
    goto v0129;

v0023:
    v0200 = qvalue(elt(env, 3)); /* nil */
    goto v0129;

v0157:
    v0201 = stack[-1];
    v0200 = elt(env, 11); /* !# */
    if (!(v0201 == v0200)) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v0201 = qvalue(elt(env, 5)); /* !*raise */
    v0200 = qvalue(elt(env, 6)); /* !*lower */
    v0200 = cons(v0201, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    stack[0] = v0200;
    v0200 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 6)) = v0200; /* !*lower */
    qvalue(elt(env, 5)) = v0200; /* !*raise */
    v0201 = stack[-1];
    v0200 = qvalue(elt(env, 1)); /* peekchar!* */
    v0200 = cons(v0201, v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    qvalue(elt(env, 1)) = v0200; /* peekchar!* */
    goto v0059;

v0135:
    v0200 = Lreadch(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    stack[-1] = v0200;
    goto v0089;

v0163:
    v0200 = Lreadch(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    stack[-1] = v0200;
    v0201 = stack[-1];
    v0200 = qvalue(elt(env, 7)); /* !$eol!$ */
    if (!(v0201 == v0200)) goto v0089;
    v0200 = qvalue(elt(env, 8)); /* curline!* */
    v0200 = add1(v0200);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-2];
    qvalue(elt(env, 8)) = v0200; /* curline!* */
    goto v0089;
/* error exit handlers */
v0203:
    popv(3);
    return nil;
}



/* Code for prin2t */

static Lisp_Object CC_prin2t(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0050;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for prin2t");
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
    v0050 = stack[0];
    v0050 = Lprinc(nil, v0050);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-1];
    v0050 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
/* error exit handlers */
v0059:
    popv(2);
    return nil;
}



/* Code for reordsq */

static Lisp_Object CC_reordsq(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0052;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for reordsq");
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
    v0052 = stack[0];
    v0052 = qcar(v0052);
    fn = elt(env, 1); /* reorder */
    stack[-1] = (*qfn1(fn))(qenv(fn), v0052);
    nil = C_nil;
    if (exception_pending()) goto v0056;
    env = stack[-2];
    v0052 = stack[0];
    v0052 = qcdr(v0052);
    fn = elt(env, 1); /* reorder */
    v0052 = (*qfn1(fn))(qenv(fn), v0052);
    nil = C_nil;
    if (exception_pending()) goto v0056;
    {
        Lisp_Object v0078 = stack[-1];
        popv(3);
        return cons(v0078, v0052);
    }
/* error exit handlers */
v0056:
    popv(3);
    return nil;
}



/* Code for praddf */

static Lisp_Object CC_praddf(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0055, v0037;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for praddf");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0043;
    stack[-1] = v0000;
/* end of prologue */
    v0055 = stack[-1];
    v0037 = qcar(v0055);
    v0055 = stack[0];
    v0055 = qcar(v0055);
    fn = elt(env, 1); /* addf */
    stack[-2] = (*qfn2(fn))(qenv(fn), v0037, v0055);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    env = stack[-3];
    v0055 = stack[-1];
    v0037 = qcdr(v0055);
    v0055 = stack[0];
    v0055 = qcdr(v0055);
    fn = elt(env, 1); /* addf */
    v0055 = (*qfn2(fn))(qenv(fn), v0037, v0055);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    {
        Lisp_Object v0046 = stack[-2];
        popv(4);
        return cons(v0046, v0055);
    }
/* error exit handlers */
v0041:
    popv(4);
    return nil;
}



/* Code for quotf1 */

static Lisp_Object CC_quotf1(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0241, v0242;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for quotf1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-6] = v0043;
    stack[-7] = v0000;
/* end of prologue */
    v0241 = stack[-7];
    if (v0241 == nil) goto v0058;
    v0242 = stack[-7];
    v0241 = stack[-6];
    if (equal(v0242, v0241)) goto v0075;
    v0242 = stack[-6];
    v0241 = (Lisp_Object)17; /* 1 */
    if (v0242 == v0241) { Lisp_Object res = stack[-7]; popv(10); return onevalue(res); }
    v0241 = stack[-6];
    if (!consp(v0241)) goto v0040;
    v0241 = stack[-6];
    v0241 = qcar(v0241);
    v0241 = (consp(v0241) ? nil : lisp_true);
    goto v0021;

v0021:
    if (v0241 == nil) goto v0037;
    v0242 = stack[-7];
    v0241 = stack[-6];
    {
        popv(10);
        fn = elt(env, 4); /* quotfd */
        return (*qfn2(fn))(qenv(fn), v0242, v0241);
    }

v0037:
    v0241 = stack[-7];
    if (!consp(v0241)) goto v0019;
    v0241 = stack[-7];
    v0241 = qcar(v0241);
    v0241 = (consp(v0241) ? nil : lisp_true);
    goto v0160;

v0160:
    if (v0241 == nil) goto v0083;
    v0241 = qvalue(elt(env, 1)); /* nil */
    { popv(10); return onevalue(v0241); }

v0083:
    v0241 = stack[-7];
    v0241 = qcar(v0241);
    v0241 = qcar(v0241);
    v0242 = qcar(v0241);
    v0241 = stack[-6];
    v0241 = qcar(v0241);
    v0241 = qcar(v0241);
    v0241 = qcar(v0241);
    if (v0242 == v0241) goto v0031;
    v0241 = stack[-7];
    v0241 = qcar(v0241);
    v0241 = qcar(v0241);
    v0242 = qcar(v0241);
    v0241 = stack[-6];
    v0241 = qcar(v0241);
    v0241 = qcar(v0241);
    v0241 = qcar(v0241);
    fn = elt(env, 5); /* ordop */
    v0241 = (*qfn2(fn))(qenv(fn), v0242, v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    if (v0241 == nil) goto v0168;
    v0242 = stack[-7];
    v0241 = stack[-6];
    {
        popv(10);
        fn = elt(env, 6); /* quotk */
        return (*qfn2(fn))(qenv(fn), v0242, v0241);
    }

v0168:
    v0241 = qvalue(elt(env, 1)); /* nil */
    { popv(10); return onevalue(v0241); }

v0031:
    stack[-3] = nil;
    stack[-2] = nil;
    stack[-1] = nil;
    goto v0016;

v0016:
    v0241 = stack[-7];
    fn = elt(env, 7); /* rank */
    v0241 = (*qfn1(fn))(qenv(fn), v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    stack[-4] = v0241;
    if (symbolp(v0241)) goto v0014;
    v0241 = stack[-6];
    fn = elt(env, 7); /* rank */
    v0241 = (*qfn1(fn))(qenv(fn), v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    stack[0] = v0241;
    if (symbolp(v0241)) goto v0014;
    v0242 = stack[-4];
    v0241 = stack[0];
    v0241 = (Lisp_Object)lessp2(v0242, v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    v0241 = v0241 ? lisp_true : nil;
    env = stack[-9];
    if (!(v0241 == nil)) goto v0014;
    v0241 = stack[-7];
    fn = elt(env, 8); /* lt!* */
    v0241 = (*qfn1(fn))(qenv(fn), v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    stack[-4] = v0241;
    v0241 = stack[-6];
    fn = elt(env, 8); /* lt!* */
    v0241 = (*qfn1(fn))(qenv(fn), v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    stack[0] = v0241;
    v0241 = stack[-6];
    v0241 = qcar(v0241);
    v0241 = qcar(v0241);
    v0241 = qcar(v0241);
    stack[-8] = v0241;
    v0241 = stack[-4];
    v0242 = qcdr(v0241);
    v0241 = stack[0];
    v0241 = qcdr(v0241);
    v0241 = CC_quotf1(env, v0242, v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    stack[-5] = v0241;
    v0241 = stack[-5];
    if (v0241 == nil) goto v0244;
    v0241 = stack[-4];
    v0241 = qcar(v0241);
    v0242 = qcdr(v0241);
    v0241 = stack[0];
    v0241 = qcar(v0241);
    v0241 = qcdr(v0241);
    v0241 = difference2(v0242, v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    stack[0] = v0241;
    v0242 = stack[0];
    v0241 = (Lisp_Object)1; /* 0 */
    if (v0242 == v0241) goto v0156;
    v0242 = stack[-8];
    v0241 = stack[0];
    fn = elt(env, 9); /* to */
    v0241 = (*qfn2(fn))(qenv(fn), v0242, v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    stack[-3] = v0241;
    goto v0156;

v0156:
    v0241 = stack[-5];
    fn = elt(env, 10); /* negf */
    v0242 = (*qfn1(fn))(qenv(fn), v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    v0241 = stack[-6];
    v0241 = qcdr(v0241);
    fn = elt(env, 11); /* multf */
    v0241 = (*qfn2(fn))(qenv(fn), v0242, v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    stack[-4] = v0241;
    v0241 = stack[-7];
    stack[-7] = qcdr(v0241);
    v0242 = stack[0];
    v0241 = (Lisp_Object)1; /* 0 */
    if (v0242 == v0241) goto v0245;
    v0242 = stack[-3];
    v0241 = (Lisp_Object)17; /* 1 */
    v0241 = cons(v0242, v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    v0242 = ncons(v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    v0241 = stack[-4];
    fn = elt(env, 11); /* multf */
    v0241 = (*qfn2(fn))(qenv(fn), v0242, v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    goto v0207;

v0207:
    fn = elt(env, 12); /* addf */
    v0241 = (*qfn2(fn))(qenv(fn), stack[-7], v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    stack[-7] = v0241;
    v0241 = stack[-7];
    if (v0241 == nil) goto v0184;
    v0241 = stack[-7];
    if (!consp(v0241)) goto v0246;
    v0241 = stack[-7];
    v0241 = qcar(v0241);
    v0241 = (consp(v0241) ? nil : lisp_true);
    goto v0247;

v0247:
    if (v0241 == nil) goto v0248;
    v0241 = qvalue(elt(env, 2)); /* t */
    goto v0185;

v0185:
    if (v0241 == nil) goto v0184;
    v0241 = qvalue(elt(env, 1)); /* nil */
    { popv(10); return onevalue(v0241); }

v0184:
    v0242 = stack[0];
    v0241 = (Lisp_Object)1; /* 0 */
    if (v0242 == v0241) goto v0142;
    stack[0] = stack[-2];
    v0242 = stack[-3];
    v0241 = stack[-5];
    v0241 = cons(v0242, v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    fn = elt(env, 13); /* aconc!* */
    v0241 = (*qfn2(fn))(qenv(fn), stack[0], v0241);
    nil = C_nil;
    if (exception_pending()) goto v0243;
    env = stack[-9];
    stack[-2] = v0241;
    v0241 = stack[-7];
    if (!(v0241 == nil)) goto v0016;
    v0241 = stack[-1];
    if (v0241 == nil) { Lisp_Object res = stack[-2]; popv(10); return onevalue(res); }
    v0242 = stack[-2];
    v0241 = stack[-1];
    {
        popv(10);
        fn = elt(env, 14); /* rnconc */
        return (*qfn2(fn))(qenv(fn), v0242, v0241);
    }

v0142:
    v0241 = stack[-7];
    if (v0241 == nil) goto v0249;
    v0241 = qvalue(elt(env, 3)); /* !*mcd */
    if (v0241 == nil) goto v0250;
    v0241 = qvalue(elt(env, 1)); /* nil */
    { popv(10); return onevalue(v0241); }

v0250:
    v0241 = stack[-5];
    stack[-1] = v0241;
    goto v0016;

v0249:
    v0242 = stack[-2];
    v0241 = stack[-5];
    {
        popv(10);
        fn = elt(env, 14); /* rnconc */
        return (*qfn2(fn))(qenv(fn), v0242, v0241);
    }

v0248:
    v0241 = stack[-7];
    v0241 = qcar(v0241);
    v0241 = qcar(v0241);
    v0242 = qcar(v0241);
    v0241 = stack[-8];
    v0241 = (v0242 == v0241 ? lisp_true : nil);
    v0241 = (v0241 == nil ? lisp_true : nil);
    goto v0185;

v0246:
    v0241 = qvalue(elt(env, 2)); /* t */
    goto v0247;

v0245:
    v0241 = stack[-4];
    goto v0207;

v0244:
    v0241 = qvalue(elt(env, 1)); /* nil */
    { popv(10); return onevalue(v0241); }

v0014:
    v0241 = qvalue(elt(env, 1)); /* nil */
    { popv(10); return onevalue(v0241); }

v0019:
    v0241 = qvalue(elt(env, 2)); /* t */
    goto v0160;

v0040:
    v0241 = qvalue(elt(env, 2)); /* t */
    goto v0021;

v0075:
    v0241 = (Lisp_Object)17; /* 1 */
    { popv(10); return onevalue(v0241); }

v0058:
    v0241 = qvalue(elt(env, 1)); /* nil */
    { popv(10); return onevalue(v0241); }
/* error exit handlers */
v0243:
    popv(10);
    return nil;
}



/* Code for tmsf!* */

static Lisp_Object CC_tmsfH(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0039, v0062;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for tmsf*");
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
    v0039 = stack[0];
    if (!(is_number(v0039))) goto v0079;
    v0039 = stack[0];
    v0039 = Ltruncate(nil, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0045;
    env = stack[-1];
    v0062 = Labsval(nil, v0039);
    nil = C_nil;
    if (exception_pending()) goto v0045;
    env = stack[-1];
    v0039 = (Lisp_Object)17; /* 1 */
    if (!(v0062 == v0039)) goto v0079;
    v0039 = (Lisp_Object)1; /* 0 */
    { popv(2); return onevalue(v0039); }

v0079:
    v0039 = stack[0];
    {
        popv(2);
        fn = elt(env, 1); /* tmsf */
        return (*qfn1(fn))(qenv(fn), v0039);
    }
/* error exit handlers */
v0045:
    popv(2);
    return nil;
}



/* Code for rl_susibin */

static Lisp_Object CC_rl_susibin(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0078, v0079;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rl_susibin");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0078 = v0043;
    v0079 = v0000;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* rl_susibin!* */
    v0078 = list2(v0079, v0078);
    nil = C_nil;
    if (exception_pending()) goto v0053;
    env = stack[-1];
    {
        Lisp_Object v0038 = stack[0];
        popv(2);
        fn = elt(env, 2); /* apply */
        return (*qfn2(fn))(qenv(fn), v0038, v0078);
    }
/* error exit handlers */
v0053:
    popv(2);
    return nil;
}



/* Code for ibalp_getupl */

static Lisp_Object CC_ibalp_getupl(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0165, v0251;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ibalp_getupl");
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
    v0165 = v0000;
/* end of prologue */
    stack[-2] = nil;
    stack[-1] = v0165;
    goto v0059;

v0059:
    v0165 = stack[-1];
    if (v0165 == nil) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v0165 = stack[-1];
    v0165 = qcar(v0165);
    stack[0] = v0165;
    v0165 = stack[0];
    v0165 = qcdr(v0165);
    v0165 = qcdr(v0165);
    v0165 = qcdr(v0165);
    v0165 = qcdr(v0165);
    v0165 = qcar(v0165);
    if (v0165 == nil) goto v0060;
    v0165 = qvalue(elt(env, 1)); /* nil */
    goto v0062;

v0062:
    if (v0165 == nil) goto v0086;
    v0251 = stack[0];
    v0165 = stack[-2];
    v0165 = cons(v0251, v0165);
    nil = C_nil;
    if (exception_pending()) goto v0134;
    env = stack[-3];
    stack[-2] = v0165;
    goto v0086;

v0086:
    v0165 = stack[-1];
    v0165 = qcdr(v0165);
    stack[-1] = v0165;
    goto v0059;

v0060:
    v0165 = stack[0];
    v0165 = qcdr(v0165);
    v0165 = qcdr(v0165);
    v0251 = qcar(v0165);
    v0165 = stack[0];
    v0165 = qcdr(v0165);
    v0165 = qcdr(v0165);
    v0165 = qcdr(v0165);
    v0165 = qcar(v0165);
    v0251 = plus2(v0251, v0165);
    nil = C_nil;
    if (exception_pending()) goto v0134;
    env = stack[-3];
    v0165 = (Lisp_Object)17; /* 1 */
    v0165 = Leqn(nil, v0251, v0165);
    nil = C_nil;
    if (exception_pending()) goto v0134;
    env = stack[-3];
    goto v0062;
/* error exit handlers */
v0134:
    popv(4);
    return nil;
}



/* Code for isvalid */

static Lisp_Object CC_isvalid(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0253, v0164;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for isvalid");
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
    v0253 = stack[0];
    v0253 = Lcompress(nil, v0253);
    nil = C_nil;
    if (exception_pending()) goto v0065;
    env = stack[-2];
    v0164 = Lsymbolp(nil, v0253);
    env = stack[-2];
    v0253 = qvalue(elt(env, 1)); /* t */
    if (equal(v0164, v0253)) goto v0039;
    v0253 = stack[0];
        popv(3);
        return Lcompress(nil, v0253);

v0039:
    v0253 = stack[0];
    fn = elt(env, 6); /* compress!* */
    v0164 = (*qfn1(fn))(qenv(fn), v0253);
    nil = C_nil;
    if (exception_pending()) goto v0065;
    env = stack[-2];
    v0253 = qvalue(elt(env, 2)); /* functions!* */
    v0253 = Lassoc(nil, v0164, v0253);
    if (v0253 == nil) goto v0046;
    v0253 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v0253); }

v0046:
    stack[-1] = elt(env, 3); /* !/ */
    v0253 = stack[0];
    v0253 = Lreverse(nil, v0253);
    nil = C_nil;
    if (exception_pending()) goto v0065;
    env = stack[-2];
    v0253 = cons(stack[-1], v0253);
    nil = C_nil;
    if (exception_pending()) goto v0065;
    env = stack[-2];
    v0253 = Lreverse(nil, v0253);
    nil = C_nil;
    if (exception_pending()) goto v0065;
    env = stack[-2];
    stack[0] = v0253;
    v0253 = stack[0];
    fn = elt(env, 6); /* compress!* */
    v0164 = (*qfn1(fn))(qenv(fn), v0253);
    nil = C_nil;
    if (exception_pending()) goto v0065;
    env = stack[-2];
    v0253 = qvalue(elt(env, 2)); /* functions!* */
    v0253 = Lassoc(nil, v0164, v0253);
    if (v0253 == nil) goto v0254;
    v0253 = stack[0];
    qvalue(elt(env, 4)) = v0253; /* char */
    v0253 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v0253); }

v0254:
    v0253 = qvalue(elt(env, 5)); /* nil */
    { popv(3); return onevalue(v0253); }
/* error exit handlers */
v0065:
    popv(3);
    return nil;
}



/* Code for revlis */

static Lisp_Object CC_revlis(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0254;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for revlis");
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
    v0254 = v0000;
/* end of prologue */
    stack[-3] = v0254;
    v0254 = stack[-3];
    if (v0254 == nil) goto v0009;
    v0254 = stack[-3];
    v0254 = qcar(v0254);
    fn = elt(env, 2); /* reval */
    v0254 = (*qfn1(fn))(qenv(fn), v0254);
    nil = C_nil;
    if (exception_pending()) goto v0136;
    env = stack[-4];
    v0254 = ncons(v0254);
    nil = C_nil;
    if (exception_pending()) goto v0136;
    env = stack[-4];
    stack[-1] = v0254;
    stack[-2] = v0254;
    goto v0071;

v0071:
    v0254 = stack[-3];
    v0254 = qcdr(v0254);
    stack[-3] = v0254;
    v0254 = stack[-3];
    if (v0254 == nil) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    stack[0] = stack[-1];
    v0254 = stack[-3];
    v0254 = qcar(v0254);
    fn = elt(env, 2); /* reval */
    v0254 = (*qfn1(fn))(qenv(fn), v0254);
    nil = C_nil;
    if (exception_pending()) goto v0136;
    env = stack[-4];
    v0254 = ncons(v0254);
    nil = C_nil;
    if (exception_pending()) goto v0136;
    env = stack[-4];
    v0254 = Lrplacd(nil, stack[0], v0254);
    nil = C_nil;
    if (exception_pending()) goto v0136;
    env = stack[-4];
    v0254 = stack[-1];
    v0254 = qcdr(v0254);
    stack[-1] = v0254;
    goto v0071;

v0009:
    v0254 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0254); }
/* error exit handlers */
v0136:
    popv(5);
    return nil;
}



/* Code for getrtype1 */

static Lisp_Object CC_getrtype1(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object v0047;
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for getrtype1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0047 = v0000;
/* end of prologue */
    v0047 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v0047);
}



/* Code for tensopp */

static Lisp_Object CC_tensopp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0070, v0240, v0160;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for tensopp");
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
    v0160 = v0000;
/* end of prologue */
    v0070 = v0160;
    if (symbolp(v0070)) goto v0080;
    v0070 = qvalue(elt(env, 1)); /* nil */
    goto v0050;

v0050:
    if (!(v0070 == nil)) return onevalue(v0070);
    v0070 = v0160;
    if (!consp(v0070)) goto v0090;
    v0070 = v0160;
    v0070 = qcar(v0070);
    if (!symbolp(v0070)) v0240 = nil;
    else { v0240 = qfastgets(v0070);
           if (v0240 != nil) { v0240 = elt(v0240, 18); /* phystype */
#ifdef RECORD_GET
             if (v0240 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v0240 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v0240 == SPID_NOPROP) v0240 = nil; }}
#endif
    v0070 = elt(env, 2); /* tensor */
    if (v0240 == v0070) goto v0055;
    v0070 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v0070);

v0055:
    v0070 = v0160;
    v0070 = qcdr(v0070);
    v0070 = qcar(v0070);
    fn = elt(env, 3); /* isanindex */
    v0070 = (*qfn1(fn))(qenv(fn), v0070);
    errexit();
    v0070 = (v0070 == nil ? lisp_true : nil);
    return onevalue(v0070);

v0090:
    v0070 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v0070);

v0080:
    v0070 = v0160;
    if (!symbolp(v0070)) v0240 = nil;
    else { v0240 = qfastgets(v0070);
           if (v0240 != nil) { v0240 = elt(v0240, 18); /* phystype */
#ifdef RECORD_GET
             if (v0240 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v0240 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v0240 == SPID_NOPROP) v0240 = nil; }}
#endif
    v0070 = elt(env, 2); /* tensor */
    v0070 = (v0240 == v0070 ? lisp_true : nil);
    goto v0050;
}



/* Code for getroad */

static Lisp_Object CC_getroad(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0060, v0252, v0051, v0029;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for getroad");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0051 = v0043;
    v0029 = v0000;
/* end of prologue */

v0058:
    v0060 = v0051;
    if (v0060 == nil) goto v0059;
    v0060 = v0029;
    v0252 = qcdr(v0060);
    v0060 = v0051;
    v0060 = qcar(v0060);
    v0060 = qcdr(v0060);
    if (equal(v0252, v0060)) goto v0044;
    v0060 = v0051;
    v0060 = qcdr(v0060);
    v0051 = v0060;
    goto v0058;

v0044:
    v0060 = v0029;
    v0060 = qcar(v0060);
    v0252 = v0051;
    v0252 = qcar(v0252);
    v0252 = qcar(v0252);
    fn = elt(env, 1); /* qassoc */
    v0060 = (*qfn2(fn))(qenv(fn), v0060, v0252);
    errexit();
    v0060 = qcdr(v0060);
    return onevalue(v0060);

v0059:
    v0060 = (Lisp_Object)17; /* 1 */
    return onevalue(v0060);
}



/* Code for mo!=degcomp */

static Lisp_Object CC_moMdegcomp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0051, v0029, v0254, v0076;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mo=degcomp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0029 = v0043;
    v0254 = v0000;
/* end of prologue */

v0058:
    v0051 = v0254;
    if (v0051 == nil) goto v0059;
    v0051 = v0254;
    v0076 = qcar(v0051);
    v0051 = v0029;
    v0051 = qcar(v0051);
    if (equal(v0076, v0051)) goto v0061;
    v0051 = v0254;
    v0051 = qcar(v0051);
    v0029 = qcar(v0029);
    if (((int32_t)(v0051)) < ((int32_t)(v0029))) goto v0054;
    v0051 = (Lisp_Object)17; /* 1 */
    return onevalue(v0051);

v0054:
    v0051 = (Lisp_Object)-15; /* -1 */
    return onevalue(v0051);

v0061:
    v0051 = v0254;
    v0051 = qcdr(v0051);
    v0254 = v0051;
    v0051 = v0029;
    v0051 = qcdr(v0051);
    v0029 = v0051;
    goto v0058;

v0059:
    v0051 = (Lisp_Object)1; /* 0 */
    return onevalue(v0051);
}



/* Code for dquot */

static Lisp_Object CC_dquot(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0069, v0070, v0240;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dquot");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0043;
    stack[-1] = v0000;
/* end of prologue */
    stack[-2] = nil;
    goto v0003;

v0003:
    v0069 = stack[-1];
    v0070 = qcar(v0069);
    v0069 = stack[0];
    v0069 = qcar(v0069);
    v0069 = difference2(v0070, v0069);
    nil = C_nil;
    if (exception_pending()) goto v0137;
    env = stack[-3];
    v0240 = v0069;
    v0070 = v0240;
    v0069 = (Lisp_Object)1; /* 0 */
    if (((int32_t)(v0070)) < ((int32_t)(v0069))) goto v0053;
    v0070 = v0240;
    v0069 = stack[-2];
    v0069 = cons(v0070, v0069);
    nil = C_nil;
    if (exception_pending()) goto v0137;
    env = stack[-3];
    stack[-2] = v0069;
    v0069 = stack[0];
    v0069 = qcdr(v0069);
    stack[0] = v0069;
    v0069 = stack[-1];
    v0069 = qcdr(v0069);
    stack[-1] = v0069;
    v0069 = stack[0];
    if (!(v0069 == nil)) goto v0003;
    v0069 = stack[-2];
        popv(4);
        return Lnreverse(nil, v0069);

v0053:
    v0069 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v0069); }
/* error exit handlers */
v0137:
    popv(4);
    return nil;
}



/* Code for pv_add */

static Lisp_Object CC_pv_add(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0126, v0124, v0004;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pv_add");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0043;
    stack[-1] = v0000;
/* end of prologue */
    v0126 = stack[-1];
    if (v0126 == nil) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v0126 = stack[0];
    if (v0126 == nil) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    stack[-2] = nil;
    goto v0053;

v0053:
    v0126 = stack[-1];
    if (!(v0126 == nil)) goto v0039;
    v0126 = stack[0];
    if (!(v0126 == nil)) goto v0039;
    v0126 = stack[-2];
        popv(4);
        return Lnreverse(nil, v0126);

v0039:
    v0126 = stack[-1];
    if (v0126 == nil) goto v0041;
    v0126 = stack[0];
    if (v0126 == nil) goto v0041;
    v0126 = stack[-1];
    v0126 = qcar(v0126);
    v0124 = qcdr(v0126);
    v0126 = stack[0];
    v0126 = qcar(v0126);
    v0126 = qcdr(v0126);
    if (!(equal(v0124, v0126))) goto v0041;
    v0126 = stack[-1];
    v0126 = qcar(v0126);
    v0124 = qcar(v0126);
    v0126 = stack[0];
    v0126 = qcar(v0126);
    v0126 = qcar(v0126);
    v0126 = plus2(v0124, v0126);
    nil = C_nil;
    if (exception_pending()) goto v0159;
    env = stack[-3];
    v0004 = v0126;
    v0124 = v0004;
    v0126 = (Lisp_Object)1; /* 0 */
    if (v0124 == v0126) goto v0030;
    v0126 = stack[-1];
    v0126 = qcar(v0126);
    v0124 = qcdr(v0126);
    v0126 = stack[-2];
    v0126 = acons(v0004, v0124, v0126);
    nil = C_nil;
    if (exception_pending()) goto v0159;
    env = stack[-3];
    stack[-2] = v0126;
    goto v0030;

v0030:
    v0126 = stack[-1];
    v0126 = qcdr(v0126);
    stack[-1] = v0126;
    v0126 = stack[0];
    v0126 = qcdr(v0126);
    stack[0] = v0126;
    goto v0053;

v0041:
    v0126 = stack[-1];
    if (v0126 == nil) goto v0014;
    v0126 = stack[0];
    if (!(v0126 == nil)) goto v0014;

v0013:
    v0126 = stack[-1];
    v0124 = qcar(v0126);
    v0126 = stack[-2];
    v0126 = cons(v0124, v0126);
    nil = C_nil;
    if (exception_pending()) goto v0159;
    env = stack[-3];
    stack[-2] = v0126;
    v0126 = stack[-1];
    v0126 = qcdr(v0126);
    stack[-1] = v0126;
    goto v0053;

v0014:
    v0126 = stack[-1];
    if (v0126 == nil) goto v0257;
    v0126 = stack[0];
    if (v0126 == nil) goto v0257;
    v0126 = stack[-1];
    v0126 = qcar(v0126);
    v0124 = qcdr(v0126);
    v0126 = stack[0];
    v0126 = qcar(v0126);
    v0126 = qcdr(v0126);
    v0126 = (Lisp_Object)greaterp2(v0124, v0126);
    nil = C_nil;
    if (exception_pending()) goto v0159;
    v0126 = v0126 ? lisp_true : nil;
    env = stack[-3];
    if (!(v0126 == nil)) goto v0013;

v0257:
    v0126 = stack[0];
    v0124 = qcar(v0126);
    v0126 = stack[-2];
    v0126 = cons(v0124, v0126);
    nil = C_nil;
    if (exception_pending()) goto v0159;
    env = stack[-3];
    stack[-2] = v0126;
    v0126 = stack[0];
    v0126 = qcdr(v0126);
    stack[0] = v0126;
    goto v0053;
/* error exit handlers */
v0159:
    popv(4);
    return nil;
}



/* Code for arzerop!: */

static Lisp_Object CC_arzeropT(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0058;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for arzerop:");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0058 = v0000;
/* end of prologue */
    v0058 = qcdr(v0058);
    v0058 = (v0058 == nil ? lisp_true : nil);
    return onevalue(v0058);
}



/* Code for eolcheck */

static Lisp_Object MS_CDECL CC_eolcheck(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0027, v0049;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "eolcheck");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for eolcheck");
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
    v0027 = qvalue(elt(env, 1)); /* !*eoldelimp */
    if (!(v0027 == nil)) goto v0025;
    v0027 = qvalue(elt(env, 2)); /* nil */
    { popv(1); return onevalue(v0027); }

v0025:
    v0049 = qvalue(elt(env, 3)); /* nxtsym!* */
    v0027 = qvalue(elt(env, 4)); /* !$eol!$ */
    if (v0049 == v0027) goto v0054;
    v0027 = nil;
    { popv(1); return onevalue(v0027); }

v0054:
    v0049 = qvalue(elt(env, 5)); /* cursym!* */
    v0027 = elt(env, 6); /* end */
    if (v0049 == v0027) goto v0044;
    fn = elt(env, 8); /* token */
    v0027 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0060;
    env = stack[0];
    goto v0062;

v0062:
    qvalue(elt(env, 3)) = v0027; /* nxtsym!* */
    goto v0025;

v0044:
    v0027 = elt(env, 7); /* !; */
    goto v0062;
/* error exit handlers */
v0060:
    popv(1);
    return nil;
}



/* Code for polynomclone */

static Lisp_Object CC_polynomclone(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0022, v0021;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for polynomclone");
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
    v0022 = v0000;
/* end of prologue */
    stack[-1] = nil;
    stack[0] = v0022;
    goto v0075;

v0075:
    v0022 = stack[0];
    if (v0022 == nil) goto v0059;
    v0022 = stack[0];
    v0022 = qcar(v0022);
    fn = elt(env, 2); /* monomclone */
    v0021 = (*qfn1(fn))(qenv(fn), v0022);
    nil = C_nil;
    if (exception_pending()) goto v0046;
    env = stack[-2];
    v0022 = stack[-1];
    v0022 = cons(v0021, v0022);
    nil = C_nil;
    if (exception_pending()) goto v0046;
    env = stack[-2];
    stack[-1] = v0022;
    v0022 = stack[0];
    v0022 = qcdr(v0022);
    stack[0] = v0022;
    goto v0075;

v0059:
    v0022 = stack[-1];
        popv(3);
        return Lreverse(nil, v0022);
/* error exit handlers */
v0046:
    popv(3);
    return nil;
}



/* Code for ofsf_clnegrel */

static Lisp_Object CC_ofsf_clnegrel(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0080, v0052;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ofsf_clnegrel");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0080 = v0043;
    v0052 = v0000;
/* end of prologue */
    if (!(v0080 == nil)) return onevalue(v0052);
    v0080 = v0052;
    {
        fn = elt(env, 1); /* ofsf_lnegrel */
        return (*qfn1(fn))(qenv(fn), v0080);
    }
}



/* Code for gcdf */

static Lisp_Object CC_gcdf(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0132, v0130;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for gcdf");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0043;
    stack[-3] = v0000;
/* end of prologue */
    stack[-4] = qvalue(elt(env, 1)); /* !*exp */
    qvalue(elt(env, 1)) = nil; /* !*exp */
    stack[-1] = qvalue(elt(env, 2)); /* !*rounded */
    qvalue(elt(env, 2)) = nil; /* !*rounded */
    v0132 = qvalue(elt(env, 3)); /* !*mcd */
    stack[0] = v0132;
    v0132 = qvalue(elt(env, 4)); /* t */
    qvalue(elt(env, 1)) = v0132; /* !*exp */
    v0132 = stack[-3];
    if (!consp(v0132)) goto v0086;
    v0132 = stack[-3];
    v0132 = qcar(v0132);
    v0132 = (consp(v0132) ? nil : lisp_true);
    goto v0079;

v0079:
    if (v0132 == nil) goto v0037;
    v0132 = qvalue(elt(env, 4)); /* t */
    goto v0026;

v0026:
    if (v0132 == nil) goto v0089;
    v0132 = qvalue(elt(env, 7)); /* !*combineexpt */
    if (v0132 == nil) goto v0066;
    v0132 = qvalue(elt(env, 4)); /* t */
    qvalue(elt(env, 3)) = v0132; /* !*mcd */
    goto v0066;

v0066:
    v0130 = stack[-3];
    v0132 = stack[-2];
    fn = elt(env, 8); /* gcdf1 */
    v0132 = (*qfn2(fn))(qenv(fn), v0130, v0132);
    nil = C_nil;
    if (exception_pending()) goto v0151;
    env = stack[-5];
    goto v0009;

v0009:
    stack[-3] = v0132;
    v0132 = stack[0];
    qvalue(elt(env, 3)) = v0132; /* !*mcd */
    v0132 = stack[-3];
    fn = elt(env, 9); /* minusf */
    v0132 = (*qfn1(fn))(qenv(fn), v0132);
    nil = C_nil;
    if (exception_pending()) goto v0151;
    env = stack[-5];
    if (v0132 == nil) goto v0157;
    v0132 = stack[-3];
    fn = elt(env, 10); /* negf */
    v0132 = (*qfn1(fn))(qenv(fn), v0132);
    nil = C_nil;
    if (exception_pending()) goto v0151;
    env = stack[-5];
    goto v0071;

v0071:
    qvalue(elt(env, 2)) = stack[-1]; /* !*rounded */
    qvalue(elt(env, 1)) = stack[-4]; /* !*exp */
    { popv(6); return onevalue(v0132); }

v0157:
    v0132 = stack[-3];
    goto v0071;

v0089:
    v0130 = stack[-3];
    v0132 = stack[-2];
    fn = elt(env, 11); /* ezgcdf */
    v0132 = (*qfn2(fn))(qenv(fn), v0130, v0132);
    nil = C_nil;
    if (exception_pending()) goto v0151;
    env = stack[-5];
    goto v0009;

v0037:
    v0132 = stack[-2];
    if (!consp(v0132)) goto v0027;
    v0132 = stack[-2];
    v0132 = qcar(v0132);
    v0132 = (consp(v0132) ? nil : lisp_true);
    goto v0048;

v0048:
    if (v0132 == nil) goto v0090;
    v0132 = qvalue(elt(env, 4)); /* t */
    goto v0026;

v0090:
    v0132 = qvalue(elt(env, 5)); /* !*ezgcd */
    if (v0132 == nil) goto v0240;
    v0132 = qvalue(elt(env, 6)); /* dmode!* */
    if (!(v0132 == nil)) goto v0026;
    v0132 = stack[-3];
    fn = elt(env, 12); /* free!-powerp */
    v0132 = (*qfn1(fn))(qenv(fn), v0132);
    nil = C_nil;
    if (exception_pending()) goto v0151;
    env = stack[-5];
    if (!(v0132 == nil)) goto v0026;
    v0132 = stack[-2];
    fn = elt(env, 12); /* free!-powerp */
    v0132 = (*qfn1(fn))(qenv(fn), v0132);
    nil = C_nil;
    if (exception_pending()) goto v0151;
    env = stack[-5];
    goto v0026;

v0240:
    v0132 = qvalue(elt(env, 4)); /* t */
    goto v0026;

v0027:
    v0132 = qvalue(elt(env, 4)); /* t */
    goto v0048;

v0086:
    v0132 = qvalue(elt(env, 4)); /* t */
    goto v0079;
/* error exit handlers */
v0151:
    env = stack[-5];
    qvalue(elt(env, 2)) = stack[-1]; /* !*rounded */
    qvalue(elt(env, 1)) = stack[-4]; /* !*exp */
    popv(6);
    return nil;
}



/* Code for free!-powerp */

static Lisp_Object CC_freeKpowerp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0051;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for free-powerp");
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

v0154:
    v0051 = stack[0];
    if (!consp(v0051)) goto v0059;
    v0051 = stack[0];
    v0051 = qcar(v0051);
    v0051 = (consp(v0051) ? nil : lisp_true);
    goto v0071;

v0071:
    if (v0051 == nil) goto v0091;
    v0051 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v0051); }

v0091:
    v0051 = stack[0];
    v0051 = qcar(v0051);
    v0051 = qcar(v0051);
    v0051 = qcdr(v0051);
    v0051 = integerp(v0051);
    if (v0051 == nil) goto v0079;
    v0051 = stack[0];
    v0051 = qcar(v0051);
    v0051 = qcdr(v0051);
    v0051 = CC_freeKpowerp(env, v0051);
    nil = C_nil;
    if (exception_pending()) goto v0254;
    env = stack[-1];
    if (!(v0051 == nil)) { popv(2); return onevalue(v0051); }
    v0051 = stack[0];
    v0051 = qcdr(v0051);
    stack[0] = v0051;
    goto v0154;

v0079:
    v0051 = qvalue(elt(env, 1)); /* t */
    { popv(2); return onevalue(v0051); }

v0059:
    v0051 = qvalue(elt(env, 1)); /* t */
    goto v0071;
/* error exit handlers */
v0254:
    popv(2);
    return nil;
}



/* Code for remove!-free!-vars */

static Lisp_Object CC_removeKfreeKvars(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0118, v0119, v0117;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for remove-free-vars");
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
    v0118 = stack[0];
    if (!consp(v0118)) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v0118 = stack[0];
    v0119 = qcar(v0118);
    v0118 = elt(env, 1); /* !~ */
    if (v0119 == v0118) goto v0061;
    v0118 = stack[0];
    {
        popv(3);
        fn = elt(env, 7); /* remove!-free!-vars!-l */
        return (*qfn1(fn))(qenv(fn), v0118);
    }

v0061:
    v0118 = qvalue(elt(env, 2)); /* !*!*noremove!*!* */
    if (v0118 == nil) goto v0044;
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    v0119 = qcar(v0118);
    v0118 = qvalue(elt(env, 3)); /* frasc!* */
    v0118 = Latsoc(nil, v0119, v0118);
    v0117 = v0118;
    if (!(v0118 == nil)) goto v0055;
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    v0119 = qcar(v0118);
    v0118 = elt(env, 1); /* !~ */
    if (!consp(v0119)) goto v0165;
    v0119 = qcar(v0119);
    if (!(v0119 == v0118)) goto v0165;
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    v0118 = qcar(v0118);
    v0118 = qcdr(v0118);
    v0118 = qcar(v0118);
    v0119 = qvalue(elt(env, 3)); /* frasc!* */
    v0118 = Latsoc(nil, v0118, v0119);
    v0117 = v0118;
    goto v0254;

v0254:
    if (v0118 == nil) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    else goto v0055;

v0055:
    v0118 = v0117;
    v0118 = qcdr(v0118);
    { popv(3); return onevalue(v0118); }

v0165:
    v0118 = qvalue(elt(env, 4)); /* nil */
    goto v0254;

v0044:
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    if (!consp(v0118)) goto v0135;
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    v0118 = qcar(v0118);
    stack[-1] = v0118;
    if (is_number(v0118)) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v0118 = stack[-1];
    if (symbolp(v0118)) goto v0012;
    v0119 = stack[-1];
    v0118 = elt(env, 1); /* !~ */
    if (!consp(v0119)) goto v0150;
    v0119 = qcar(v0119);
    if (!(v0119 == v0118)) goto v0150;
    v0118 = stack[-1];
    v0118 = qcdr(v0118);
    v0118 = qcar(v0118);
    stack[-1] = v0118;
    goto v0261;

v0261:
    if (!(v0118 == nil)) goto v0012;
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    v0118 = qcar(v0118);
    v0118 = qcar(v0118);
    if (symbolp(v0118)) goto v0123;
    v0119 = stack[0];
    v0118 = elt(env, 5); /* "free variable" */
    {
        popv(3);
        fn = elt(env, 8); /* typerr */
        return (*qfn2(fn))(qenv(fn), v0119, v0118);
    }

v0123:
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    v0118 = qcar(v0118);
    v0118 = qcar(v0118);
    fn = elt(env, 9); /* get!-free!-form */
    v0118 = (*qfn1(fn))(qenv(fn), v0118);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-2];
    v0119 = ncons(v0118);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-2];
    v0118 = qvalue(elt(env, 6)); /* frlis!* */
    fn = elt(env, 10); /* union */
    v0118 = (*qfn2(fn))(qenv(fn), v0119, v0118);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-2];
    qvalue(elt(env, 6)) = v0118; /* frlis!* */
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    v0118 = qcar(v0118);
    stack[-1] = qcar(v0118);
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    v0118 = qcar(v0118);
    v0118 = qcdr(v0118);
    fn = elt(env, 7); /* remove!-free!-vars!-l */
    v0118 = (*qfn1(fn))(qenv(fn), v0118);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    {
        Lisp_Object v0263 = stack[-1];
        popv(3);
        return cons(v0263, v0118);
    }

v0012:
    v0118 = stack[0];
    v0118 = qcdr(v0118);
    v0118 = qcar(v0118);
    fn = elt(env, 9); /* get!-free!-form */
    v0118 = (*qfn1(fn))(qenv(fn), v0118);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-2];
    v0119 = ncons(v0118);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-2];
    v0118 = qvalue(elt(env, 6)); /* frlis!* */
    fn = elt(env, 10); /* union */
    v0118 = (*qfn2(fn))(qenv(fn), v0119, v0118);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-2];
    qvalue(elt(env, 6)) = v0118; /* frlis!* */
    { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }

v0150:
    v0118 = qvalue(elt(env, 4)); /* nil */
    goto v0261;

v0135:
    v0119 = stack[0];
    v0118 = elt(env, 5); /* "free variable" */
    {
        popv(3);
        fn = elt(env, 8); /* typerr */
        return (*qfn2(fn))(qenv(fn), v0119, v0118);
    }
/* error exit handlers */
v0262:
    popv(3);
    return nil;
}



/* Code for stable!-sortip */

static Lisp_Object CC_stableKsortip(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0109, v0271, v0272;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for stable-sortip");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0043;
    stack[-3] = v0000;
/* end of prologue */
    v0109 = stack[-3];
    if (v0109 == nil) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    v0109 = stack[-3];
    stack[-4] = v0109;
    v0109 = stack[-3];
    v0109 = qcdr(v0109);
    stack[-1] = v0109;
    v0109 = stack[-1];
    if (v0109 == nil) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    v0109 = stack[-1];
    v0109 = qcdr(v0109);
    stack[-3] = v0109;
    v0109 = stack[-3];
    if (v0109 == nil) goto v0046;
    v0109 = stack[-4];
    stack[-3] = v0109;
    goto v0251;

v0251:
    v0109 = stack[-1];
    if (v0109 == nil) goto v0165;
    v0272 = stack[-2];
    v0109 = stack[-1];
    v0271 = qcar(v0109);
    v0109 = stack[-3];
    v0109 = qcar(v0109);
    v0109 = Lapply2(nil, 3, v0272, v0271, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-5];
    if (!(v0109 == nil)) goto v0165;
    v0109 = stack[-1];
    stack[-3] = v0109;
    v0109 = stack[-1];
    v0109 = qcdr(v0109);
    stack[-1] = v0109;
    goto v0251;

v0165:
    v0109 = stack[-1];
    if (v0109 == nil) { Lisp_Object res = stack[-4]; popv(6); return onevalue(res); }
    v0109 = stack[-4];
    stack[-1] = v0109;
    v0109 = stack[-1];
    v0109 = qcdr(v0109);
    v0109 = qcdr(v0109);
    stack[-3] = v0109;
    goto v0155;

v0155:
    v0109 = stack[-3];
    if (v0109 == nil) goto v0130;
    v0109 = stack[-3];
    v0109 = qcdr(v0109);
    if (v0109 == nil) goto v0130;
    v0109 = stack[-1];
    v0109 = qcdr(v0109);
    stack[-1] = v0109;
    v0109 = stack[-3];
    v0109 = qcdr(v0109);
    v0109 = qcdr(v0109);
    stack[-3] = v0109;
    goto v0155;

v0130:
    v0109 = stack[-1];
    stack[-3] = v0109;
    v0109 = stack[-1];
    v0109 = qcdr(v0109);
    stack[-1] = v0109;
    v0271 = stack[-3];
    v0109 = qvalue(elt(env, 1)); /* nil */
    v0109 = Lrplacd(nil, v0271, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-5];
    v0271 = stack[-4];
    v0109 = stack[-2];
    v0109 = CC_stableKsortip(env, v0271, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-5];
    stack[-4] = v0109;
    v0271 = stack[-1];
    v0109 = stack[-2];
    v0109 = CC_stableKsortip(env, v0271, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-5];
    stack[-1] = v0109;
    v0109 = qvalue(elt(env, 1)); /* nil */
    v0109 = ncons(v0109);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-5];
    stack[0] = v0109;
    stack[-3] = v0109;
    goto v0007;

v0007:
    v0109 = stack[-4];
    if (v0109 == nil) goto v0158;
    v0109 = stack[-1];
    if (v0109 == nil) goto v0158;
    v0272 = stack[-2];
    v0109 = stack[-1];
    v0271 = qcar(v0109);
    v0109 = stack[-4];
    v0109 = qcar(v0109);
    v0109 = Lapply2(nil, 3, v0272, v0271, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-5];
    if (v0109 == nil) goto v0273;
    v0271 = stack[0];
    v0109 = stack[-1];
    v0109 = Lrplacd(nil, v0271, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-5];
    v0109 = stack[-1];
    stack[0] = v0109;
    v0109 = stack[-1];
    v0109 = qcdr(v0109);
    stack[-1] = v0109;
    goto v0007;

v0273:
    v0271 = stack[0];
    v0109 = stack[-4];
    v0109 = Lrplacd(nil, v0271, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-5];
    v0109 = stack[-4];
    stack[0] = v0109;
    v0109 = stack[-4];
    v0109 = qcdr(v0109);
    stack[-4] = v0109;
    goto v0007;

v0158:
    v0109 = stack[-4];
    if (v0109 == nil) goto v0274;
    v0109 = stack[-4];
    stack[-1] = v0109;
    goto v0274;

v0274:
    v0271 = stack[0];
    v0109 = stack[-1];
    v0109 = Lrplacd(nil, v0271, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    v0109 = stack[-3];
    v0109 = qcdr(v0109);
    { popv(6); return onevalue(v0109); }

v0046:
    v0272 = stack[-2];
    v0109 = stack[-1];
    v0271 = qcar(v0109);
    v0109 = stack[-4];
    v0109 = qcar(v0109);
    v0109 = Lapply2(nil, 3, v0272, v0271, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-5];
    if (v0109 == nil) { Lisp_Object res = stack[-4]; popv(6); return onevalue(res); }
    v0109 = stack[-4];
    v0109 = qcar(v0109);
    stack[-3] = v0109;
    v0271 = stack[-4];
    v0109 = stack[-1];
    v0109 = qcar(v0109);
    v0109 = Lrplaca(nil, v0271, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-5];
    v0271 = stack[-1];
    v0109 = stack[-3];
    v0109 = Lrplaca(nil, v0271, v0109);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    { Lisp_Object res = stack[-4]; popv(6); return onevalue(res); }
/* error exit handlers */
v0247:
    popv(6);
    return nil;
}



/* Code for invsq */

static Lisp_Object CC_invsq(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0021, v0040, v0041;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for invsq");
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
    v0021 = stack[0];
    v0021 = qcar(v0021);
    if (!(v0021 == nil)) goto v0058;
    v0041 = elt(env, 1); /* poly */
    v0040 = (Lisp_Object)49; /* 3 */
    v0021 = elt(env, 2); /* "Zero divisor" */
    fn = elt(env, 4); /* rerror */
    v0021 = (*qfnn(fn))(qenv(fn), 3, v0041, v0040, v0021);
    nil = C_nil;
    if (exception_pending()) goto v0042;
    env = stack[-1];
    goto v0058;

v0058:
    v0021 = stack[0];
    fn = elt(env, 5); /* revpr */
    v0021 = (*qfn1(fn))(qenv(fn), v0021);
    nil = C_nil;
    if (exception_pending()) goto v0042;
    env = stack[-1];
    stack[0] = v0021;
    v0021 = qvalue(elt(env, 3)); /* !*rationalize */
    if (v0021 == nil) goto v0062;
    v0021 = stack[0];
    fn = elt(env, 6); /* gcdchk */
    v0021 = (*qfn1(fn))(qenv(fn), v0021);
    nil = C_nil;
    if (exception_pending()) goto v0042;
    env = stack[-1];
    stack[0] = v0021;
    goto v0062;

v0062:
    v0021 = stack[0];
    {
        popv(2);
        fn = elt(env, 7); /* canonsq */
        return (*qfn1(fn))(qenv(fn), v0021);
    }
/* error exit handlers */
v0042:
    popv(2);
    return nil;
}



/* Code for tayexp!-minusp */

static Lisp_Object CC_tayexpKminusp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0080, v0052;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for tayexp-minusp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0052 = v0000;
/* end of prologue */
    v0080 = v0052;
    if (!consp(v0080)) goto v0091;
    v0080 = v0052;
    {
        fn = elt(env, 1); /* rnminusp!: */
        return (*qfn1(fn))(qenv(fn), v0080);
    }

v0091:
    v0080 = v0052;
        return Lminusp(nil, v0080);
}



/* Code for subs2 */

static Lisp_Object CC_subs2(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0088, v0135, v0072;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for subs2");
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
    v0135 = v0000;
/* end of prologue */
    stack[-3] = nil;
    stack[-2] = nil;
    stack[-1] = nil;
    v0088 = qvalue(elt(env, 1)); /* subfg!* */
    if (v0088 == nil) { popv(5); return onevalue(v0135); }
    v0088 = qvalue(elt(env, 2)); /* !*sub2 */
    if (!(v0088 == nil)) goto v0052;
    v0088 = qvalue(elt(env, 3)); /* powlis1!* */
    if (!(v0088 == nil)) goto v0052;

v0075:
    v0088 = v0135;
    fn = elt(env, 9); /* exptchksq */
    v0088 = (*qfn1(fn))(qenv(fn), v0088);
    nil = C_nil;
    if (exception_pending()) goto v0077;
    env = stack[-4];
    v0135 = v0088;
    v0088 = elt(env, 4); /* slash */
    if (!symbolp(v0088)) v0088 = nil;
    else { v0088 = qfastgets(v0088);
           if (v0088 != nil) { v0088 = elt(v0088, 9); /* opmtch */
#ifdef RECORD_GET
             if (v0088 != SPID_NOPROP)
                record_get(elt(fastget_names, 9), 1);
             else record_get(elt(fastget_names, 9), 0),
                v0088 = nil; }
           else record_get(elt(fastget_names, 9), 0); }
#else
             if (v0088 == SPID_NOPROP) v0088 = nil; }}
#endif
    stack[0] = v0088;
    v0088 = qvalue(elt(env, 5)); /* !*match */
    if (!(v0088 == nil)) goto v0049;
    v0088 = stack[0];
    if (!(v0088 == nil)) goto v0049;
    v0088 = qvalue(elt(env, 6)); /* t */
    goto v0022;

v0022:
    if (!(v0088 == nil)) { popv(5); return onevalue(v0135); }
    v0088 = qvalue(elt(env, 7)); /* !*exp */
    if (!(v0088 == nil)) goto v0054;
    v0088 = qvalue(elt(env, 6)); /* t */
    stack[-3] = v0088;
    v0088 = qvalue(elt(env, 6)); /* t */
    qvalue(elt(env, 7)) = v0088; /* !*exp */
    v0088 = v0135;
    stack[-2] = v0088;
    v0088 = v0135;
    fn = elt(env, 10); /* resimp */
    v0088 = (*qfn1(fn))(qenv(fn), v0088);
    nil = C_nil;
    if (exception_pending()) goto v0077;
    env = stack[-4];
    v0135 = v0088;
    stack[-1] = v0088;
    goto v0054;

v0054:
    v0088 = v0135;
    fn = elt(env, 11); /* subs3q */
    v0088 = (*qfn1(fn))(qenv(fn), v0088);
    nil = C_nil;
    if (exception_pending()) goto v0077;
    env = stack[-4];
    v0135 = v0088;
    v0088 = stack[-3];
    if (v0088 == nil) goto v0137;
    v0088 = qvalue(elt(env, 8)); /* nil */
    qvalue(elt(env, 7)) = v0088; /* !*exp */
    v0072 = v0135;
    v0088 = stack[-1];
    if (!(equal(v0072, v0088))) goto v0137;
    v0088 = stack[-2];
    v0135 = v0088;
    goto v0137;

v0137:
    v0088 = stack[0];
    if (v0088 == nil) { popv(5); return onevalue(v0135); }
    v0088 = v0135;
    fn = elt(env, 12); /* subs4q */
    v0088 = (*qfn1(fn))(qenv(fn), v0088);
    nil = C_nil;
    if (exception_pending()) goto v0077;
    v0135 = v0088;
    { popv(5); return onevalue(v0135); }

v0049:
    v0088 = v0135;
    v0088 = qcar(v0088);
    v0088 = (v0088 == nil ? lisp_true : nil);
    goto v0022;

v0052:
    v0088 = v0135;
    fn = elt(env, 13); /* subs2q */
    v0088 = (*qfn1(fn))(qenv(fn), v0088);
    nil = C_nil;
    if (exception_pending()) goto v0077;
    env = stack[-4];
    v0135 = v0088;
    goto v0075;
/* error exit handlers */
v0077:
    popv(5);
    return nil;
}



/* Code for mri_floorp */

static Lisp_Object CC_mri_floorp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0055, v0037, v0022;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mri_floorp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0037 = v0000;
/* end of prologue */

v0154:
    v0055 = v0037;
    if (v0055 == nil) goto v0091;
    v0055 = v0037;
    v0022 = qcar(v0055);
    v0055 = elt(env, 2); /* floor */
    if (!consp(v0022)) goto v0062;
    v0022 = qcar(v0022);
    if (!(v0022 == v0055)) goto v0062;
    v0055 = qvalue(elt(env, 3)); /* t */
    return onevalue(v0055);

v0062:
    v0055 = v0037;
    v0055 = qcdr(v0055);
    v0037 = v0055;
    goto v0154;

v0091:
    v0055 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v0055);
}



/* Code for kernord!-sort */

static Lisp_Object CC_kernordKsort(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0254, v0076;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for kernord-sort");
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
    goto v0059;

v0059:
    v0254 = stack[-1];
    if (v0254 == nil) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v0254 = stack[-1];
    v0076 = qcdr(v0254);
    v0254 = stack[-1];
    v0254 = qcar(v0254);
    fn = elt(env, 2); /* maxdeg */
    v0254 = (*qfn2(fn))(qenv(fn), v0076, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0136;
    env = stack[-3];
    stack[-2] = v0254;
    v0254 = stack[-2];
    v0076 = qcar(v0254);
    v0254 = stack[-1];
    fn = elt(env, 3); /* delallasc */
    v0254 = (*qfn2(fn))(qenv(fn), v0076, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0136;
    env = stack[-3];
    stack[-1] = v0254;
    v0254 = stack[-2];
    v0076 = qcar(v0254);
    v0254 = stack[0];
    v0254 = cons(v0076, v0254);
    nil = C_nil;
    if (exception_pending()) goto v0136;
    env = stack[-3];
    stack[0] = v0254;
    goto v0059;
/* error exit handlers */
v0136:
    popv(4);
    return nil;
}



/* Code for ev_comp */

static Lisp_Object CC_ev_comp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0078, v0079;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ev_comp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0078 = v0043;
    v0079 = v0000;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* dip_sortevcomp!* */
    v0078 = list2(v0079, v0078);
    nil = C_nil;
    if (exception_pending()) goto v0053;
    env = stack[-1];
    {
        Lisp_Object v0038 = stack[0];
        popv(2);
        fn = elt(env, 2); /* apply */
        return (*qfn2(fn))(qenv(fn), v0038, v0078);
    }
/* error exit handlers */
v0053:
    popv(2);
    return nil;
}



/* Code for fullcopy */

static Lisp_Object CC_fullcopy(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0205, v0014;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fullcopy");
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
    stack[-5] = v0000;
/* end of prologue */
    stack[0] = nil;
    goto v0058;

v0058:
    v0205 = stack[-5];
    v0205 = Lconsp(nil, v0205);
    env = stack[-7];
    if (v0205 == nil) goto v0075;
    v0205 = stack[-5];
    v0205 = qcar(v0205);
    v0014 = CC_fullcopy(env, v0205);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-7];
    v0205 = stack[0];
    v0205 = cons(v0014, v0205);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-7];
    stack[0] = v0205;
    v0205 = stack[-5];
    v0205 = qcdr(v0205);
    stack[-5] = v0205;
    goto v0058;

v0075:
    v0205 = stack[-5];
    v0205 = Lsimple_vectorp(nil, v0205);
    env = stack[-7];
    if (v0205 == nil) goto v0015;
    stack[-6] = stack[0];
    v0205 = stack[-5];
    v0205 = Lupbv(nil, v0205);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-7];
    stack[-3] = v0205;
    v0205 = stack[-3];
    v0205 = Lmkvect(nil, v0205);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-7];
    stack[-4] = v0205;
    v0205 = (Lisp_Object)1; /* 0 */
    stack[-2] = v0205;
    goto v0020;

v0020:
    v0014 = stack[-3];
    v0205 = stack[-2];
    v0205 = difference2(v0014, v0205);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-7];
    v0205 = Lminusp(nil, v0205);
    env = stack[-7];
    if (v0205 == nil) goto v0065;
    v0205 = stack[-4];
    {
        Lisp_Object v0131 = stack[-6];
        popv(8);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v0131, v0205);
    }

v0065:
    stack[-1] = stack[-4];
    stack[0] = stack[-2];
    v0014 = stack[-5];
    v0205 = stack[-2];
    v0205 = *(Lisp_Object *)((char *)v0014 + (CELL-TAG_VECTOR) + ((int32_t)v0205/(16/CELL)));
    v0205 = CC_fullcopy(env, v0205);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-7];
    *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v0205;
    v0205 = stack[-2];
    v0205 = add1(v0205);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-7];
    stack[-2] = v0205;
    goto v0020;

v0015:
    v0014 = stack[0];
    v0205 = stack[-5];
    {
        popv(8);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v0014, v0205);
    }
/* error exit handlers */
v0148:
    popv(8);
    return nil;
}



/* Code for simpminus */

static Lisp_Object CC_simpminus(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0061, v0080;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for simpminus");
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
    v0061 = v0000;
/* end of prologue */
    v0080 = v0061;
    v0061 = elt(env, 1); /* minus */
    fn = elt(env, 2); /* carx */
    v0061 = (*qfn2(fn))(qenv(fn), v0080, v0061);
    nil = C_nil;
    if (exception_pending()) goto v0052;
    env = stack[0];
    fn = elt(env, 3); /* simp */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0052;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 4); /* negsq */
        return (*qfn1(fn))(qenv(fn), v0061);
    }
/* error exit handlers */
v0052:
    popv(1);
    return nil;
}



/* Code for xdiv */

static Lisp_Object CC_xdiv(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0029, v0254;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for xdiv");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0043;
    stack[-1] = v0000;
/* end of prologue */
    stack[-2] = stack[-1];
    v0029 = (Lisp_Object)17; /* 1 */
    v0029 = ncons(v0029);
    nil = C_nil;
    if (exception_pending()) goto v0090;
    env = stack[-3];
    if (equal(stack[-2], v0029)) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v0254 = stack[-1];
    v0029 = stack[0];
    fn = elt(env, 1); /* sublistp */
    v0029 = (*qfn2(fn))(qenv(fn), v0254, v0029);
    nil = C_nil;
    if (exception_pending()) goto v0090;
    env = stack[-3];
    if (v0029 == nil) goto v0056;
    v0254 = stack[0];
    v0029 = stack[-1];
    fn = elt(env, 2); /* listdiff */
    v0029 = (*qfn2(fn))(qenv(fn), v0254, v0029);
    nil = C_nil;
    if (exception_pending()) goto v0090;
    stack[0] = v0029;
    if (!(v0029 == nil)) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v0029 = (Lisp_Object)17; /* 1 */
    popv(4);
    return ncons(v0029);

v0056:
    v0029 = nil;
    { popv(4); return onevalue(v0029); }
/* error exit handlers */
v0090:
    popv(4);
    return nil;
}



/* Code for update!-pline */

static Lisp_Object MS_CDECL CC_updateKpline(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0152, v0153, v0028;
    Lisp_Object v0063, v0043, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "update-pline");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0043 = va_arg(aa, Lisp_Object);
    v0063 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for update-pline");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0063,v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0043,v0063);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    v0028 = v0063;
    stack[-4] = v0043;
    stack[-5] = v0000;
/* end of prologue */
    v0153 = stack[-5];
    v0152 = (Lisp_Object)1; /* 0 */
    if (v0153 == v0152) goto v0079;
    v0152 = qvalue(elt(env, 1)); /* nil */
    goto v0075;

v0075:
    if (!(v0152 == nil)) { popv(8); return onevalue(v0028); }
    v0152 = v0028;
    stack[-6] = v0152;
    v0152 = stack[-6];
    if (v0152 == nil) goto v0051;
    v0152 = stack[-6];
    v0152 = qcar(v0152);
    stack[0] = v0152;
    v0152 = stack[0];
    v0152 = qcar(v0152);
    v0152 = qcar(v0152);
    v0153 = qcar(v0152);
    v0152 = stack[-5];
    v0028 = (Lisp_Object)(int32_t)((int32_t)v0153 + (int32_t)v0152 - TAG_FIXNUM);
    v0152 = stack[0];
    v0152 = qcar(v0152);
    v0152 = qcar(v0152);
    v0153 = qcdr(v0152);
    v0152 = stack[-5];
    v0152 = (Lisp_Object)(int32_t)((int32_t)v0153 + (int32_t)v0152 - TAG_FIXNUM);
    v0028 = cons(v0028, v0152);
    nil = C_nil;
    if (exception_pending()) goto v0278;
    env = stack[-7];
    v0152 = stack[0];
    v0152 = qcar(v0152);
    v0153 = qcdr(v0152);
    v0152 = stack[-4];
    v0153 = (Lisp_Object)(int32_t)((int32_t)v0153 + (int32_t)v0152 - TAG_FIXNUM);
    v0152 = stack[0];
    v0152 = qcdr(v0152);
    v0152 = acons(v0028, v0153, v0152);
    nil = C_nil;
    if (exception_pending()) goto v0278;
    env = stack[-7];
    v0152 = ncons(v0152);
    nil = C_nil;
    if (exception_pending()) goto v0278;
    env = stack[-7];
    stack[-2] = v0152;
    stack[-3] = v0152;
    goto v0027;

v0027:
    v0152 = stack[-6];
    v0152 = qcdr(v0152);
    stack[-6] = v0152;
    v0152 = stack[-6];
    if (v0152 == nil) { Lisp_Object res = stack[-3]; popv(8); return onevalue(res); }
    stack[-1] = stack[-2];
    v0152 = stack[-6];
    v0152 = qcar(v0152);
    stack[0] = v0152;
    v0152 = stack[0];
    v0152 = qcar(v0152);
    v0152 = qcar(v0152);
    v0153 = qcar(v0152);
    v0152 = stack[-5];
    v0028 = (Lisp_Object)(int32_t)((int32_t)v0153 + (int32_t)v0152 - TAG_FIXNUM);
    v0152 = stack[0];
    v0152 = qcar(v0152);
    v0152 = qcar(v0152);
    v0153 = qcdr(v0152);
    v0152 = stack[-5];
    v0152 = (Lisp_Object)(int32_t)((int32_t)v0153 + (int32_t)v0152 - TAG_FIXNUM);
    v0028 = cons(v0028, v0152);
    nil = C_nil;
    if (exception_pending()) goto v0278;
    env = stack[-7];
    v0152 = stack[0];
    v0152 = qcar(v0152);
    v0153 = qcdr(v0152);
    v0152 = stack[-4];
    v0153 = (Lisp_Object)(int32_t)((int32_t)v0153 + (int32_t)v0152 - TAG_FIXNUM);
    v0152 = stack[0];
    v0152 = qcdr(v0152);
    v0152 = acons(v0028, v0153, v0152);
    nil = C_nil;
    if (exception_pending()) goto v0278;
    env = stack[-7];
    v0152 = ncons(v0152);
    nil = C_nil;
    if (exception_pending()) goto v0278;
    env = stack[-7];
    v0152 = Lrplacd(nil, stack[-1], v0152);
    nil = C_nil;
    if (exception_pending()) goto v0278;
    env = stack[-7];
    v0152 = stack[-2];
    v0152 = qcdr(v0152);
    stack[-2] = v0152;
    goto v0027;

v0051:
    v0152 = qvalue(elt(env, 1)); /* nil */
    { popv(8); return onevalue(v0152); }

v0079:
    v0153 = stack[-4];
    v0152 = (Lisp_Object)1; /* 0 */
    v0152 = (v0153 == v0152 ? lisp_true : nil);
    goto v0075;
/* error exit handlers */
v0278:
    popv(8);
    return nil;
}



/* Code for rd!:minusp */

static Lisp_Object CC_rdTminusp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0026, v0025;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rd:minusp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0025 = v0000;
/* end of prologue */
    v0026 = v0025;
    v0026 = qcdr(v0026);
    if (!consp(v0026)) goto v0091;
    v0026 = v0025;
    {
        fn = elt(env, 1); /* minusp!: */
        return (*qfn1(fn))(qenv(fn), v0026);
    }

v0091:
    v0026 = v0025;
    v0026 = qcdr(v0026);
        return Lminusp(nil, v0026);
}



/* Code for prin2!-downcase */

static Lisp_Object CC_prin2Kdowncase(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0021, v0040;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for prin2-downcase");
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
    v0021 = v0000;
/* end of prologue */
    v0021 = Lexplodec(nil, v0021);
    nil = C_nil;
    if (exception_pending()) goto v0046;
    env = stack[-1];
    stack[0] = v0021;
    goto v0058;

v0058:
    v0021 = stack[0];
    if (v0021 == nil) goto v0003;
    v0021 = stack[0];
    v0021 = qcar(v0021);
    v0040 = v0021;
    v0021 = v0040;
    v0021 = Lalpha_char_p(nil, v0021);
    env = stack[-1];
    if (v0021 == nil) goto v0045;
    v0021 = v0040;
    fn = elt(env, 2); /* red!-char!-downcase */
    v0021 = (*qfn1(fn))(qenv(fn), v0021);
    nil = C_nil;
    if (exception_pending()) goto v0046;
    env = stack[-1];
    v0021 = Lprinc(nil, v0021);
    nil = C_nil;
    if (exception_pending()) goto v0046;
    env = stack[-1];
    goto v0078;

v0078:
    v0021 = stack[0];
    v0021 = qcdr(v0021);
    stack[0] = v0021;
    goto v0058;

v0045:
    v0021 = v0040;
    v0021 = Lprinc(nil, v0021);
    nil = C_nil;
    if (exception_pending()) goto v0046;
    env = stack[-1];
    goto v0078;

v0003:
    v0021 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v0021); }
/* error exit handlers */
v0046:
    popv(2);
    return nil;
}



/* Code for expdrmacro */

static Lisp_Object CC_expdrmacro(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0160, v0019, v0020;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for expdrmacro");
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
    v0160 = stack[0];
    fn = elt(env, 7); /* getrmacro */
    v0160 = (*qfn1(fn))(qenv(fn), v0160);
    nil = C_nil;
    if (exception_pending()) goto v0081;
    env = stack[-1];
    v0020 = v0160;
    if (v0160 == nil) goto v0009;
    v0019 = stack[0];
    v0160 = elt(env, 2); /* noexpand */
    v0160 = Lflagp(nil, v0019, v0160);
    env = stack[-1];
    goto v0003;

v0003:
    if (v0160 == nil) goto v0059;
    v0160 = qvalue(elt(env, 3)); /* nil */
    { popv(2); return onevalue(v0160); }

v0059:
    v0160 = qvalue(elt(env, 4)); /* !*cref */
    if (v0160 == nil) { popv(2); return onevalue(v0020); }
    v0019 = stack[0];
    v0160 = elt(env, 5); /* expand */
    v0160 = Lflagp(nil, v0019, v0160);
    env = stack[-1];
    if (v0160 == nil) goto v0041;
    v0160 = qvalue(elt(env, 3)); /* nil */
    goto v0040;

v0040:
    if (v0160 == nil) { popv(2); return onevalue(v0020); }
    v0160 = qvalue(elt(env, 3)); /* nil */
    { popv(2); return onevalue(v0160); }

v0041:
    v0160 = qvalue(elt(env, 6)); /* !*force */
    v0160 = (v0160 == nil ? lisp_true : nil);
    goto v0040;

v0009:
    v0160 = qvalue(elt(env, 1)); /* t */
    goto v0003;
/* error exit handlers */
v0081:
    popv(2);
    return nil;
}



/* Code for fs!:plus */

static Lisp_Object CC_fsTplus(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0271, v0272, v0227;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fs:plus");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0043;
    stack[-2] = v0000;
/* end of prologue */

v0154:
    v0271 = stack[-1];
    if (v0271 == nil) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v0271 = stack[-2];
    if (v0271 == nil) { Lisp_Object res = stack[-1]; popv(5); return onevalue(res); }
    v0272 = stack[-2];
    v0271 = (Lisp_Object)17; /* 1 */
    v0227 = *(Lisp_Object *)((char *)v0272 + (CELL-TAG_VECTOR) + ((int32_t)v0271/(16/CELL)));
    v0272 = stack[-1];
    v0271 = (Lisp_Object)17; /* 1 */
    v0271 = *(Lisp_Object *)((char *)v0272 + (CELL-TAG_VECTOR) + ((int32_t)v0271/(16/CELL)));
    if (equal(v0227, v0271)) goto v0085;
    v0271 = qvalue(elt(env, 1)); /* nil */
    goto v0025;

v0025:
    if (v0271 == nil) goto v0023;
    v0272 = stack[-2];
    v0271 = (Lisp_Object)1; /* 0 */
    v0227 = *(Lisp_Object *)((char *)v0272 + (CELL-TAG_VECTOR) + ((int32_t)v0271/(16/CELL)));
    v0272 = stack[-1];
    v0271 = (Lisp_Object)1; /* 0 */
    v0271 = *(Lisp_Object *)((char *)v0272 + (CELL-TAG_VECTOR) + ((int32_t)v0271/(16/CELL)));
    fn = elt(env, 2); /* addsq */
    v0271 = (*qfn2(fn))(qenv(fn), v0227, v0271);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-4];
    v0272 = v0271;
    v0272 = qcar(v0272);
    if (v0272 == nil) goto v0157;
    v0227 = stack[-2];
    v0272 = (Lisp_Object)1; /* 0 */
    *(Lisp_Object *)((char *)v0227 + (CELL-TAG_VECTOR) + ((int32_t)v0272/(16/CELL))) = v0271;
    stack[-3] = stack[-2];
    stack[0] = (Lisp_Object)49; /* 3 */
    v0272 = stack[-2];
    v0271 = (Lisp_Object)49; /* 3 */
    v0227 = *(Lisp_Object *)((char *)v0272 + (CELL-TAG_VECTOR) + ((int32_t)v0271/(16/CELL)));
    v0272 = stack[-1];
    v0271 = (Lisp_Object)49; /* 3 */
    v0271 = *(Lisp_Object *)((char *)v0272 + (CELL-TAG_VECTOR) + ((int32_t)v0271/(16/CELL)));
    v0271 = CC_fsTplus(env, v0227, v0271);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    *(Lisp_Object *)((char *)stack[-3] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v0271;
    { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }

v0157:
    v0272 = stack[-2];
    v0271 = (Lisp_Object)49; /* 3 */
    v0227 = *(Lisp_Object *)((char *)v0272 + (CELL-TAG_VECTOR) + ((int32_t)v0271/(16/CELL)));
    v0272 = stack[-1];
    v0271 = (Lisp_Object)49; /* 3 */
    v0271 = *(Lisp_Object *)((char *)v0272 + (CELL-TAG_VECTOR) + ((int32_t)v0271/(16/CELL)));
    stack[-2] = v0227;
    stack[-1] = v0271;
    goto v0154;

v0023:
    v0272 = stack[-2];
    v0271 = stack[-1];
    fn = elt(env, 3); /* fs!:angle!-order */
    v0271 = (*qfn2(fn))(qenv(fn), v0272, v0271);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-4];
    if (v0271 == nil) goto v0236;
    stack[-3] = stack[-2];
    stack[0] = (Lisp_Object)49; /* 3 */
    v0272 = stack[-2];
    v0271 = (Lisp_Object)49; /* 3 */
    v0272 = *(Lisp_Object *)((char *)v0272 + (CELL-TAG_VECTOR) + ((int32_t)v0271/(16/CELL)));
    v0271 = stack[-1];
    v0271 = CC_fsTplus(env, v0272, v0271);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    *(Lisp_Object *)((char *)stack[-3] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v0271;
    { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }

v0236:
    stack[-3] = stack[-1];
    stack[0] = (Lisp_Object)49; /* 3 */
    v0272 = stack[-1];
    v0271 = (Lisp_Object)49; /* 3 */
    v0272 = *(Lisp_Object *)((char *)v0272 + (CELL-TAG_VECTOR) + ((int32_t)v0271/(16/CELL)));
    v0271 = stack[-2];
    v0271 = CC_fsTplus(env, v0272, v0271);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    *(Lisp_Object *)((char *)stack[-3] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v0271;
    { Lisp_Object res = stack[-1]; popv(5); return onevalue(res); }

v0085:
    v0272 = stack[-2];
    v0271 = (Lisp_Object)33; /* 2 */
    v0227 = *(Lisp_Object *)((char *)v0272 + (CELL-TAG_VECTOR) + ((int32_t)v0271/(16/CELL)));
    v0272 = stack[-1];
    v0271 = (Lisp_Object)33; /* 2 */
    v0271 = *(Lisp_Object *)((char *)v0272 + (CELL-TAG_VECTOR) + ((int32_t)v0271/(16/CELL)));
    fn = elt(env, 4); /* angles!-equal */
    v0271 = (*qfn2(fn))(qenv(fn), v0227, v0271);
    nil = C_nil;
    if (exception_pending()) goto v0247;
    env = stack[-4];
    goto v0025;
/* error exit handlers */
v0247:
    popv(5);
    return nil;
}



/* Code for mo_sum */

static Lisp_Object CC_mo_sum(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0043)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0062, v0044;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mo_sum");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0043,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0043);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v0062 = v0043;
    v0044 = v0000;
/* end of prologue */
    v0044 = qcar(v0044);
    v0062 = qcar(v0062);
    fn = elt(env, 1); /* mo!=sum */
    v0062 = (*qfn2(fn))(qenv(fn), v0044, v0062);
    nil = C_nil;
    if (exception_pending()) goto v0057;
    env = stack[-2];
    stack[-1] = v0062;
    v0062 = stack[-1];
    fn = elt(env, 2); /* mo!=shorten */
    stack[0] = (*qfn1(fn))(qenv(fn), v0062);
    nil = C_nil;
    if (exception_pending()) goto v0057;
    env = stack[-2];
    v0062 = stack[-1];
    fn = elt(env, 3); /* mo!=deglist */
    v0062 = (*qfn1(fn))(qenv(fn), v0062);
    nil = C_nil;
    if (exception_pending()) goto v0057;
    {
        Lisp_Object v0055 = stack[0];
        popv(3);
        return cons(v0055, v0062);
    }
/* error exit handlers */
v0057:
    popv(3);
    return nil;
}



setup_type const u04_setup[] =
{
    {"pv_renorm",               CC_pv_renorm,   too_many_1,    wrong_no_1},
    {"general-modular-number",  CC_generalKmodularKnumber,too_many_1,wrong_no_1},
    {"flatten-sorted-tree",     too_few_2,      CC_flattenKsortedKtree,wrong_no_2},
    {"xcomment",                too_few_2,      CC_xcomment,   wrong_no_2},
    {"sfto_reorder",            too_few_2,      CC_sfto_reorder,wrong_no_2},
    {"treesizep1",              too_few_2,      CC_treesizep1, wrong_no_2},
    {"rl_smupdknowl",           wrong_no_na,    wrong_no_nb,   (n_args *)CC_rl_smupdknowl},
    {"maxdeg",                  too_few_2,      CC_maxdeg,     wrong_no_2},
    {"tayexp-plus2",            too_few_2,      CC_tayexpKplus2,wrong_no_2},
    {"get+col+nr",              CC_getLcolLnr,  too_many_1,    wrong_no_1},
    {"rl_simplat1",             too_few_2,      CC_rl_simplat1,wrong_no_2},
    {"ibalp_varlt",             CC_ibalp_varlt, too_many_1,    wrong_no_1},
    {"vevcompless?",            too_few_2,      CC_vevcomplessW,wrong_no_2},
    {"mkwedge",                 CC_mkwedge,     too_many_1,    wrong_no_1},
    {"scprint",                 too_few_2,      CC_scprint,    wrong_no_2},
    {"fprin2",                  CC_fprin2,      too_many_1,    wrong_no_1},
    {"widestring2list",         CC_widestring2list,too_many_1, wrong_no_1},
    {"getrtype",                CC_getrtype,    too_many_1,    wrong_no_1},
    {"prepsqx",                 CC_prepsqx,     too_many_1,    wrong_no_1},
    {"mo=sum",                  too_few_2,      CC_moMsum,     wrong_no_2},
    {"lcm",                     too_few_2,      CC_lcm,        wrong_no_2},
    {"simpexpon",               CC_simpexpon,   too_many_1,    wrong_no_1},
    {"readch1",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_readch1},
    {"prin2t",                  CC_prin2t,      too_many_1,    wrong_no_1},
    {"reordsq",                 CC_reordsq,     too_many_1,    wrong_no_1},
    {"praddf",                  too_few_2,      CC_praddf,     wrong_no_2},
    {"quotf1",                  too_few_2,      CC_quotf1,     wrong_no_2},
    {"tmsf*",                   CC_tmsfH,       too_many_1,    wrong_no_1},
    {"rl_susibin",              too_few_2,      CC_rl_susibin, wrong_no_2},
    {"ibalp_getupl",            CC_ibalp_getupl,too_many_1,    wrong_no_1},
    {"isvalid",                 CC_isvalid,     too_many_1,    wrong_no_1},
    {"revlis",                  CC_revlis,      too_many_1,    wrong_no_1},
    {"getrtype1",               CC_getrtype1,   too_many_1,    wrong_no_1},
    {"tensopp",                 CC_tensopp,     too_many_1,    wrong_no_1},
    {"getroad",                 too_few_2,      CC_getroad,    wrong_no_2},
    {"mo=degcomp",              too_few_2,      CC_moMdegcomp, wrong_no_2},
    {"dquot",                   too_few_2,      CC_dquot,      wrong_no_2},
    {"pv_add",                  too_few_2,      CC_pv_add,     wrong_no_2},
    {"arzerop:",                CC_arzeropT,    too_many_1,    wrong_no_1},
    {"eolcheck",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_eolcheck},
    {"polynomclone",            CC_polynomclone,too_many_1,    wrong_no_1},
    {"ofsf_clnegrel",           too_few_2,      CC_ofsf_clnegrel,wrong_no_2},
    {"gcdf",                    too_few_2,      CC_gcdf,       wrong_no_2},
    {"free-powerp",             CC_freeKpowerp, too_many_1,    wrong_no_1},
    {"remove-free-vars",        CC_removeKfreeKvars,too_many_1,wrong_no_1},
    {"stable-sortip",           too_few_2,      CC_stableKsortip,wrong_no_2},
    {"invsq",                   CC_invsq,       too_many_1,    wrong_no_1},
    {"tayexp-minusp",           CC_tayexpKminusp,too_many_1,   wrong_no_1},
    {"subs2",                   CC_subs2,       too_many_1,    wrong_no_1},
    {"mri_floorp",              CC_mri_floorp,  too_many_1,    wrong_no_1},
    {"kernord-sort",            CC_kernordKsort,too_many_1,    wrong_no_1},
    {"ev_comp",                 too_few_2,      CC_ev_comp,    wrong_no_2},
    {"fullcopy",                CC_fullcopy,    too_many_1,    wrong_no_1},
    {"simpminus",               CC_simpminus,   too_many_1,    wrong_no_1},
    {"xdiv",                    too_few_2,      CC_xdiv,       wrong_no_2},
    {"update-pline",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_updateKpline},
    {"rd:minusp",               CC_rdTminusp,   too_many_1,    wrong_no_1},
    {"prin2-downcase",          CC_prin2Kdowncase,too_many_1,  wrong_no_1},
    {"expdrmacro",              CC_expdrmacro,  too_many_1,    wrong_no_1},
    {"fs:plus",                 too_few_2,      CC_fsTplus,    wrong_no_2},
    {"mo_sum",                  too_few_2,      CC_mo_sum,     wrong_no_2},
    {NULL, (one_args *)"u04", (two_args *)"484 3654660 1404449", 0}
};

/* end of generated code */

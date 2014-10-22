
/* $destdir\u40.c        Machine generated C code */

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
    
#define CHAR_EOF pack_char(0, 0x001fffff)
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
#ifdef DEBUG
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
extern Lisp_Object gchook, resources, callstack, procstack, procmem, trap_time;
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


/* Code for xremf */

static Lisp_Object MS_CDECL CC_xremf(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0073, v0074, v0075;
    Lisp_Object fn;
    Lisp_Object v0003, v0016, v0011;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "xremf");
    va_start(aa, nargs);
    v0011 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for xremf");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0003,v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0011,v0016,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-5] = v0003;
    stack[-6] = v0016;
    stack[-7] = v0011;
/* end of prologue */
    stack[-1] = nil;
    v0073 = (Lisp_Object)1; /* 0 */
    stack[-8] = v0073;
    v0073 = stack[-6];
    if (!consp(v0073)) goto v0076;
    v0073 = stack[-6];
    v0073 = qcar(v0073);
    v0073 = (consp(v0073) ? nil : lisp_true);
    goto v0077;

v0077:
    if (v0073 == nil) goto v0078;
    v0074 = stack[-7];
    v0073 = stack[-6];
    fn = elt(env, 3); /* qremd */
    v0073 = (*qfn2(fn))(qenv(fn), v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    v0073 = qcdr(v0073);
    popv(10);
    return ncons(v0073);

v0078:
    v0073 = stack[-7];
    fn = elt(env, 4); /* termsf */
    v0073 = (*qfn1(fn))(qenv(fn), v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[0] = v0073;
    goto v0080;

v0080:
    v0074 = stack[-5];
    v0073 = (Lisp_Object)1; /* 0 */
    v0073 = (Lisp_Object)lesseq2(v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    v0073 = v0073 ? lisp_true : nil;
    env = stack[-9];
    if (v0073 == nil) goto v0081;
    v0073 = qvalue(elt(env, 2)); /* nil */
    { popv(10); return onevalue(v0073); }

v0081:
    v0073 = stack[-7];
    if (!consp(v0073)) goto v0082;
    v0073 = stack[-7];
    v0073 = qcar(v0073);
    v0073 = (consp(v0073) ? nil : lisp_true);
    goto v0083;

v0083:
    if (v0073 == nil) goto v0084;
    v0074 = stack[-1];
    v0073 = stack[-7];
    fn = elt(env, 5); /* addf */
    v0073 = (*qfn2(fn))(qenv(fn), v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    popv(10);
    return ncons(v0073);

v0084:
    v0073 = stack[-7];
    v0073 = qcar(v0073);
    v0073 = qcar(v0073);
    v0074 = qcar(v0073);
    v0073 = stack[-6];
    v0073 = qcar(v0073);
    v0073 = qcar(v0073);
    v0073 = qcar(v0073);
    if (v0074 == v0073) goto v0085;
    v0073 = stack[-7];
    v0073 = qcar(v0073);
    v0073 = qcar(v0073);
    v0074 = qcar(v0073);
    v0073 = stack[-6];
    v0073 = qcar(v0073);
    v0073 = qcar(v0073);
    v0073 = qcar(v0073);
    fn = elt(env, 6); /* ordop */
    v0073 = (*qfn2(fn))(qenv(fn), v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    if (v0073 == nil) goto v0086;
    v0074 = stack[-5];
    v0073 = stack[-8];
    v0073 = plus2(v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-5] = v0073;
    v0073 = stack[-7];
    v0073 = qcar(v0073);
    v0075 = qcdr(v0073);
    v0074 = stack[-6];
    v0073 = stack[-5];
    v0073 = CC_xremf(env, 3, v0075, v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-3] = v0073;
    v0073 = stack[-3];
    if (v0073 == nil) goto v0087;
    v0073 = stack[-7];
    v0073 = qcar(v0073);
    v0074 = qcar(v0073);
    v0073 = (Lisp_Object)17; /* 1 */
    v0073 = cons(v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    v0074 = ncons(v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    v0073 = stack[-3];
    v0073 = qcar(v0073);
    fn = elt(env, 7); /* multf */
    v0073 = (*qfn2(fn))(qenv(fn), v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    fn = elt(env, 5); /* addf */
    v0073 = (*qfn2(fn))(qenv(fn), stack[-1], v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-1] = v0073;
    v0073 = stack[-1];
    fn = elt(env, 4); /* termsf */
    v0073 = (*qfn1(fn))(qenv(fn), v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-8] = v0073;
    v0074 = stack[-5];
    v0073 = stack[-8];
    v0073 = difference2(v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-5] = v0073;
    v0073 = stack[-7];
    v0073 = qcdr(v0073);
    stack[-7] = v0073;
    goto v0080;

v0087:
    v0073 = qvalue(elt(env, 2)); /* nil */
    { popv(10); return onevalue(v0073); }

v0086:
    v0074 = stack[-1];
    v0073 = stack[-7];
    fn = elt(env, 5); /* addf */
    v0073 = (*qfn2(fn))(qenv(fn), v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    popv(10);
    return ncons(v0073);

v0085:
    v0073 = stack[-7];
    v0073 = qcar(v0073);
    v0073 = qcar(v0073);
    v0074 = qcdr(v0073);
    v0073 = stack[-6];
    v0073 = qcar(v0073);
    v0073 = qcar(v0073);
    v0073 = qcdr(v0073);
    v0074 = difference2(v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-4] = v0074;
    v0073 = (Lisp_Object)1; /* 0 */
    v0073 = (Lisp_Object)lessp2(v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    v0073 = v0073 ? lisp_true : nil;
    env = stack[-9];
    if (v0073 == nil) goto v0088;
    v0074 = stack[-1];
    v0073 = stack[-7];
    fn = elt(env, 5); /* addf */
    v0073 = (*qfn2(fn))(qenv(fn), v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    popv(10);
    return ncons(v0073);

v0088:
    v0073 = stack[-7];
    v0073 = qcar(v0073);
    v0074 = qcdr(v0073);
    v0073 = stack[-6];
    v0073 = qcar(v0073);
    v0073 = qcdr(v0073);
    fn = elt(env, 8); /* qremf */
    v0073 = (*qfn2(fn))(qenv(fn), v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-3] = v0073;
    v0073 = stack[-7];
    v0073 = qcar(v0073);
    v0074 = qcar(v0073);
    v0073 = (Lisp_Object)17; /* 1 */
    v0073 = cons(v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    v0074 = ncons(v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    v0073 = stack[-3];
    v0073 = qcdr(v0073);
    fn = elt(env, 7); /* multf */
    v0073 = (*qfn2(fn))(qenv(fn), v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-2] = v0073;
    v0074 = stack[-5];
    v0073 = stack[-8];
    v0073 = plus2(v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-5] = v0073;
    v0074 = stack[-1];
    v0073 = stack[-2];
    fn = elt(env, 5); /* addf */
    v0073 = (*qfn2(fn))(qenv(fn), v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-1] = v0073;
    v0073 = stack[-1];
    fn = elt(env, 4); /* termsf */
    v0073 = (*qfn1(fn))(qenv(fn), v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-8] = v0073;
    v0074 = stack[-5];
    v0073 = stack[-8];
    v0074 = difference2(v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    v0073 = stack[0];
    v0073 = plus2(v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-5] = v0073;
    v0073 = stack[-3];
    v0073 = qcar(v0073);
    if (v0073 == nil) goto v0089;
    stack[0] = stack[-7];
    v0074 = stack[-4];
    v0073 = (Lisp_Object)1; /* 0 */
    if (v0074 == v0073) goto v0090;
    v0073 = stack[-7];
    v0073 = qcar(v0073);
    v0073 = qcar(v0073);
    v0074 = qcar(v0073);
    v0073 = stack[-4];
    fn = elt(env, 9); /* to */
    v0074 = (*qfn2(fn))(qenv(fn), v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    v0073 = (Lisp_Object)17; /* 1 */
    v0073 = cons(v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    v0074 = ncons(v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    v0073 = stack[-6];
    fn = elt(env, 7); /* multf */
    v0073 = (*qfn2(fn))(qenv(fn), v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-4] = v0073;
    goto v0091;

v0091:
    v0073 = stack[-3];
    v0073 = qcar(v0073);
    fn = elt(env, 10); /* negf */
    v0073 = (*qfn1(fn))(qenv(fn), v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    fn = elt(env, 7); /* multf */
    v0073 = (*qfn2(fn))(qenv(fn), stack[-4], v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    fn = elt(env, 5); /* addf */
    stack[0] = (*qfn2(fn))(qenv(fn), stack[0], v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    v0073 = stack[-2];
    fn = elt(env, 10); /* negf */
    v0073 = (*qfn1(fn))(qenv(fn), v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    fn = elt(env, 5); /* addf */
    v0073 = (*qfn2(fn))(qenv(fn), stack[0], v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    goto v0092;

v0092:
    stack[-7] = v0073;
    v0073 = stack[-7];
    fn = elt(env, 4); /* termsf */
    v0073 = (*qfn1(fn))(qenv(fn), v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[0] = v0073;
    v0074 = stack[-5];
    v0073 = stack[0];
    v0073 = difference2(v0074, v0073);
    nil = C_nil;
    if (exception_pending()) goto v0079;
    env = stack[-9];
    stack[-5] = v0073;
    goto v0080;

v0090:
    v0073 = stack[-6];
    stack[-4] = v0073;
    goto v0091;

v0089:
    v0073 = stack[-7];
    v0073 = qcdr(v0073);
    goto v0092;

v0082:
    v0073 = qvalue(elt(env, 1)); /* t */
    goto v0083;

v0076:
    v0073 = qvalue(elt(env, 1)); /* t */
    goto v0077;
/* error exit handlers */
v0079:
    popv(10);
    return nil;
}



/* Code for fs!:minusp!: */

static Lisp_Object CC_fsTminuspT(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0025;
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
    v0025 = v0011;
/* end of prologue */
    v0025 = qcdr(v0025);
    {
        fn = elt(env, 1); /* fs!:minusp */
        return (*qfn1(fn))(qenv(fn), v0025);
    }
}



/* Code for mo_deletecomp */

static Lisp_Object CC_mo_deletecomp(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0098, v0081;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mo_deletecomp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0011);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0098 = v0011;
/* end of prologue */
    v0081 = v0098;
    v0081 = qcar(v0081);
    if (v0081 == nil) { popv(2); return onevalue(v0098); }
    v0081 = v0098;
    v0081 = qcar(v0081);
    v0081 = qcdr(v0081);
    if (v0081 == nil) goto v0099;
    v0081 = (Lisp_Object)1; /* 0 */
    v0098 = qcar(v0098);
    v0098 = qcdr(v0098);
    v0098 = cons(v0081, v0098);
    nil = C_nil;
    if (exception_pending()) goto v0080;
    env = stack[-1];
    stack[0] = v0098;
    fn = elt(env, 2); /* mo!=deglist */
    v0098 = (*qfn1(fn))(qenv(fn), v0098);
    nil = C_nil;
    if (exception_pending()) goto v0080;
    {
        Lisp_Object v0100 = stack[0];
        popv(2);
        return cons(v0100, v0098);
    }

v0099:
    stack[0] = qvalue(elt(env, 1)); /* nil */
    v0098 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 2); /* mo!=deglist */
    v0098 = (*qfn1(fn))(qenv(fn), v0098);
    nil = C_nil;
    if (exception_pending()) goto v0080;
    {
        Lisp_Object v0101 = stack[0];
        popv(2);
        return cons(v0101, v0098);
    }
/* error exit handlers */
v0080:
    popv(2);
    return nil;
}



/* Code for flattens1 */

static Lisp_Object CC_flattens1(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0103;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for flattens1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0011);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0011;
/* end of prologue */

v0002:
    v0103 = stack[0];
    if (!consp(v0103)) goto v0008;
    v0103 = stack[0];
    v0103 = qcdr(v0103);
    if (v0103 == nil) goto v0104;
    v0103 = stack[0];
    v0103 = qcar(v0103);
    stack[-1] = CC_flattens1(env, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-2];
    v0103 = stack[0];
    v0103 = qcdr(v0103);
    v0103 = CC_flattens1(env, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    {
        Lisp_Object v0105 = stack[-1];
        popv(3);
        return Lappend(nil, v0105, v0103);
    }

v0104:
    v0103 = stack[0];
    v0103 = qcar(v0103);
    stack[0] = v0103;
    goto v0002;

v0008:
    v0103 = stack[0];
    popv(3);
    return ncons(v0103);
/* error exit handlers */
v0095:
    popv(3);
    return nil;
}



/* Code for algmodep */

static Lisp_Object CC_algmodep(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0108, v0072;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for algmodep");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0072 = v0011;
/* end of prologue */
    v0108 = v0072;
    if (!consp(v0108)) goto v0109;
    v0108 = v0072;
    v0108 = qcar(v0108);
    v0072 = elt(env, 1); /* (aeval aeval!*) */
    v0108 = Lmemq(nil, v0108, v0072);
    return onevalue(v0108);

v0109:
    v0108 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0108);
}



/* Code for cl_bnfsimpl */

static Lisp_Object CC_cl_bnfsimpl(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0108, v0072, v0077;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for cl_bnfsimpl");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0072 = v0016;
    v0077 = v0011;
/* end of prologue */
    v0108 = qvalue(elt(env, 1)); /* !*rlbnfsac */
    if (v0108 == nil) return onevalue(v0077);
    v0108 = v0077;
    {
        fn = elt(env, 2); /* cl_sac */
        return (*qfn2(fn))(qenv(fn), v0108, v0072);
    }
}



/* Code for vdp_sugar */

static Lisp_Object CC_vdp_sugar(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0112, v0113;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for vdp_sugar");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0011);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0011;
/* end of prologue */
    v0112 = stack[0];
    fn = elt(env, 3); /* vdp_zero!? */
    v0112 = (*qfn1(fn))(qenv(fn), v0112);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    env = stack[-1];
    if (!(v0112 == nil)) goto v0002;
    v0112 = qvalue(elt(env, 1)); /* !*cgbsugar */
    if (v0112 == nil) goto v0002;
    v0113 = stack[0];
    v0112 = elt(env, 2); /* sugar */
    fn = elt(env, 4); /* vdp_getprop */
    v0112 = (*qfn2(fn))(qenv(fn), v0113, v0112);
    nil = C_nil;
    if (exception_pending()) goto v0114;
    if (!(v0112 == nil)) { popv(2); return onevalue(v0112); }
    v0112 = (Lisp_Object)1; /* 0 */
    { popv(2); return onevalue(v0112); }

v0002:
    v0112 = (Lisp_Object)1; /* 0 */
    { popv(2); return onevalue(v0112); }
/* error exit handlers */
v0114:
    popv(2);
    return nil;
}



/* Code for operator_fn */

static Lisp_Object CC_operator_fn(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0121, v0122;
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
        push(v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0011);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0011;
/* end of prologue */
    v0121 = stack[0];
    v0122 = qcar(v0121);
    v0121 = elt(env, 1); /* ((arcsinh . sinh) (arcsech . sech) (arccosh . cosh) (arccsch csch) (arctanh . tanh) (arccoth . coth)) 
*/
    v0121 = Latsoc(nil, v0122, v0121);
    stack[-1] = v0121;
    v0121 = stack[-1];
    if (v0121 == nil) goto v0102;
    v0121 = elt(env, 2); /* "<apply><inverse/>" */
    fn = elt(env, 8); /* printout */
    v0121 = (*qfn1(fn))(qenv(fn), v0121);
    nil = C_nil;
    if (exception_pending()) goto v0083;
    env = stack[-2];
    v0121 = stack[-1];
    v0121 = qcdr(v0121);
    v0121 = Lprinc(nil, v0121);
    nil = C_nil;
    if (exception_pending()) goto v0083;
    env = stack[-2];
    goto v0095;

v0095:
    v0122 = qvalue(elt(env, 6)); /* indent */
    v0121 = (Lisp_Object)49; /* 3 */
    v0121 = plus2(v0122, v0121);
    nil = C_nil;
    if (exception_pending()) goto v0083;
    env = stack[-2];
    qvalue(elt(env, 6)) = v0121; /* indent */
    v0121 = stack[0];
    v0121 = qcdr(v0121);
    fn = elt(env, 9); /* multi_args */
    v0121 = (*qfn1(fn))(qenv(fn), v0121);
    nil = C_nil;
    if (exception_pending()) goto v0083;
    env = stack[-2];
    v0122 = qvalue(elt(env, 6)); /* indent */
    v0121 = (Lisp_Object)49; /* 3 */
    v0121 = difference2(v0122, v0121);
    nil = C_nil;
    if (exception_pending()) goto v0083;
    env = stack[-2];
    qvalue(elt(env, 6)) = v0121; /* indent */
    v0121 = elt(env, 7); /* "</apply>" */
    fn = elt(env, 8); /* printout */
    v0121 = (*qfn1(fn))(qenv(fn), v0121);
    nil = C_nil;
    if (exception_pending()) goto v0083;
    v0121 = nil;
    { popv(3); return onevalue(v0121); }

v0102:
    v0121 = elt(env, 4); /* "<apply><fn><ci>" */
    fn = elt(env, 8); /* printout */
    v0121 = (*qfn1(fn))(qenv(fn), v0121);
    nil = C_nil;
    if (exception_pending()) goto v0083;
    env = stack[-2];
    v0121 = stack[0];
    v0121 = qcar(v0121);
    v0121 = Lprinc(nil, v0121);
    nil = C_nil;
    if (exception_pending()) goto v0083;
    env = stack[-2];
    v0121 = elt(env, 5); /* "</ci></fn>" */
    v0121 = Lprinc(nil, v0121);
    nil = C_nil;
    if (exception_pending()) goto v0083;
    env = stack[-2];
    goto v0095;
/* error exit handlers */
v0083:
    popv(3);
    return nil;
}



/* Code for simpsqrtsq */

static Lisp_Object CC_simpsqrtsq(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0106;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for simpsqrtsq");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0011);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0011;
/* end of prologue */
    v0106 = stack[0];
    v0106 = qcar(v0106);
    fn = elt(env, 1); /* simpsqrt2 */
    stack[-1] = (*qfn1(fn))(qenv(fn), v0106);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    env = stack[-2];
    v0106 = stack[0];
    v0106 = qcdr(v0106);
    fn = elt(env, 1); /* simpsqrt2 */
    v0106 = (*qfn1(fn))(qenv(fn), v0106);
    nil = C_nil;
    if (exception_pending()) goto v0078;
    {
        Lisp_Object v0123 = stack[-1];
        popv(3);
        return cons(v0123, v0106);
    }
/* error exit handlers */
v0078:
    popv(3);
    return nil;
}



/* Code for rewrite */

static Lisp_Object MS_CDECL CC_rewrite(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0151, v0152, v0153, v0154;
    Lisp_Object fn;
    Lisp_Object v0142, v0003, v0016, v0011;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "rewrite");
    va_start(aa, nargs);
    v0011 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    v0142 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rewrite");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push4(v0142,v0003,v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0011,v0016,v0003,v0142);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-9] = v0142;
    stack[-10] = v0003;
    stack[-11] = v0016;
    stack[-12] = v0011;
/* end of prologue */
    v0151 = (Lisp_Object)17; /* 1 */
    stack[-13] = v0151;
    v0151 = (Lisp_Object)17; /* 1 */
    stack[-2] = v0151;
    v0151 = stack[-12];
    v0151 = qcdr(v0151);
    v0151 = qcdr(v0151);
    v0151 = qcar(v0151);
    v0152 = v0151;
    v0152 = qcdr(v0152);
    v0152 = qcar(v0152);
    v0151 = qcdr(v0151);
    v0151 = qcdr(v0151);
    v0151 = qcar(v0151);
    if (equal(v0152, v0151)) goto v0104;
    v0151 = stack[-11];
    stack[-1] = v0151;
    goto v0113;

v0113:
    v0151 = (Lisp_Object)17; /* 1 */
    stack[0] = v0151;
    goto v0067;

v0067:
    v0152 = stack[-1];
    v0151 = stack[0];
    v0151 = difference2(v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    v0151 = Lminusp(nil, v0151);
    env = stack[-14];
    if (v0151 == nil) goto v0156;
    v0151 = stack[-11];
    v0152 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    v0151 = stack[-12];
    v0151 = qcdr(v0151);
    v0151 = qcdr(v0151);
    v0151 = qcar(v0151);
    v0151 = qcdr(v0151);
    v0151 = qcar(v0151);
    if (!(equal(v0152, v0151))) { Lisp_Object res = stack[-12]; popv(15); return onevalue(res); }
    stack[0] = stack[-12];
    v0151 = stack[-11];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    v0154 = list2(stack[0], v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    v0153 = qvalue(elt(env, 1)); /* nil */
    v0152 = stack[-12];
    v0151 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 2); /* letmtr3 */
    v0151 = (*qfnn(fn))(qenv(fn), 4, v0154, v0153, v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    { Lisp_Object res = stack[-12]; popv(15); return onevalue(res); }

v0156:
    v0152 = stack[-12];
    v0151 = stack[0];
    fn = elt(env, 3); /* findrow */
    v0151 = (*qfn2(fn))(qenv(fn), v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    v0152 = v0151;
    v0151 = v0152;
    if (v0151 == nil) goto v0090;
    v0151 = v0152;
    v0151 = qcdr(v0151);
    stack[-7] = v0151;
    v0151 = stack[0];
    stack[-3] = v0151;
    v0152 = stack[-13];
    v0151 = stack[-10];
    if (!(equal(v0152, v0151))) goto v0157;
    v0151 = stack[-13];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-13] = v0151;
    goto v0157;

v0157:
    v0152 = stack[-3];
    v0151 = stack[-13];
    if (equal(v0152, v0151)) goto v0158;
    v0151 = stack[-13];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-13] = v0151;
    v0151 = stack[-2];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-2] = v0151;
    goto v0159;

v0159:
    v0151 = stack[0];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[0] = v0151;
    goto v0067;

v0158:
    v0151 = (Lisp_Object)17; /* 1 */
    stack[-4] = v0151;
    v0151 = (Lisp_Object)17; /* 1 */
    stack[-8] = v0151;
    v0151 = qvalue(elt(env, 1)); /* nil */
    stack[-5] = v0151;
    goto v0160;

v0160:
    v0151 = stack[-7];
    if (v0151 == nil) goto v0026;
    stack[-3] = stack[-4];
    v0151 = stack[-11];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    if (equal(stack[-3], v0151)) goto v0026;
    v0151 = stack[-7];
    v0151 = qcar(v0151);
    v0152 = v0151;
    v0151 = v0152;
    v0151 = qcar(v0151);
    stack[-6] = v0151;
    v0151 = v0152;
    v0151 = qcdr(v0151);
    stack[-3] = v0151;
    v0152 = stack[-4];
    v0151 = stack[-9];
    if (!(equal(v0152, v0151))) goto v0161;
    v0151 = stack[-8];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-8] = v0151;
    goto v0161;

v0161:
    v0152 = stack[-6];
    v0151 = stack[-8];
    if (equal(v0152, v0151)) goto v0052;
    v0151 = stack[-8];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-8] = v0151;
    v0151 = stack[-4];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-4] = v0151;
    goto v0160;

v0052:
    v0153 = stack[-4];
    v0152 = stack[-3];
    v0151 = stack[-5];
    v0151 = acons(v0153, v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-5] = v0151;
    v0151 = stack[-4];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-4] = v0151;
    v0151 = stack[-7];
    v0151 = qcdr(v0151);
    stack[-7] = v0151;
    v0151 = stack[-8];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-8] = v0151;
    goto v0160;

v0026:
    v0152 = stack[-12];
    v0151 = stack[-2];
    stack[-4] = list2(v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    v0151 = qvalue(elt(env, 1)); /* nil */
    stack[-3] = ncons(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    v0151 = stack[-5];
    v0151 = Lreverse(nil, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    v0153 = cons(stack[-3], v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    v0152 = stack[-12];
    v0151 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 2); /* letmtr3 */
    v0151 = (*qfnn(fn))(qenv(fn), 4, stack[-4], v0153, v0152, v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    v0151 = stack[-2];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-2] = v0151;
    v0151 = stack[-13];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-13] = v0151;
    goto v0159;

v0090:
    v0151 = stack[-13];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-13] = v0151;
    goto v0159;

v0104:
    v0151 = stack[-11];
    v0151 = add1(v0151);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-14];
    stack[-1] = v0151;
    goto v0113;
/* error exit handlers */
v0155:
    popv(15);
    return nil;
}



/* Code for dipcontenti */

static Lisp_Object CC_dipcontenti(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0163, v0148, v0149, v0164;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dipcontenti");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0164 = v0011;
/* end of prologue */
    v0163 = v0164;
    if (v0163 == nil) goto v0002;
    v0163 = v0164;
    v0163 = qcdr(v0163);
    v0163 = qcdr(v0163);
    v0149 = v0163;
    v0163 = v0149;
    if (v0163 == nil) goto v0072;
    v0163 = v0164;
    v0163 = qcdr(v0163);
    v0148 = qcar(v0163);
    v0163 = qvalue(elt(env, 1)); /* !*groebrm */
    if (v0163 == nil) goto v0067;
    v0163 = v0164;
    v0163 = qcar(v0163);
    goto v0081;

v0081:
    {
        fn = elt(env, 3); /* dipcontenti1 */
        return (*qfnn(fn))(qenv(fn), 3, v0148, v0163, v0149);
    }

v0067:
    v0163 = qvalue(elt(env, 2)); /* nil */
    goto v0081;

v0072:
    v0163 = v0164;
    v0163 = qcdr(v0163);
    v0148 = qcar(v0163);
    v0163 = qvalue(elt(env, 1)); /* !*groebrm */
    if (v0163 == nil) goto v0095;
    v0163 = v0164;
    v0163 = qcar(v0163);
    goto v0110;

v0110:
    return cons(v0148, v0163);

v0095:
    v0163 = qvalue(elt(env, 2)); /* nil */
    goto v0110;

v0002:
    v0163 = (Lisp_Object)17; /* 1 */
    return onevalue(v0163);
}



/* Code for find_triangles1 */

static Lisp_Object CC_find_triangles1(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0114, v0165, v0096, v0103, v0166, v0097;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for find_triangles1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0114 = v0016;
    v0165 = v0011;
/* end of prologue */
    v0097 = qvalue(elt(env, 1)); /* nil */
    v0096 = v0165;
    v0166 = qcar(v0096);
    v0103 = qvalue(elt(env, 1)); /* nil */
    v0096 = v0165;
    v0096 = qcdr(v0096);
    v0096 = qcar(v0096);
    v0165 = qcdr(v0165);
    v0165 = qcdr(v0165);
    v0165 = qcar(v0165);
    {
        fn = elt(env, 2); /* select_triangles */
        return (*qfnn(fn))(qenv(fn), 6, v0097, v0166, v0103, v0096, v0165, v0114);
    }
}



/* Code for mv!-compact */

static Lisp_Object MS_CDECL CC_mvKcompact(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0180, v0161, v0181;
    Lisp_Object fn;
    Lisp_Object v0003, v0016, v0011;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "mv-compact");
    va_start(aa, nargs);
    v0011 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mv-compact");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0003,v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0011,v0016,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0003;
    stack[-2] = v0016;
    stack[-3] = v0011;
/* end of prologue */

v0182:
    v0180 = stack[-3];
    if (v0180 == nil) goto v0139;
    v0161 = stack[-3];
    v0180 = stack[-2];
    fn = elt(env, 2); /* mv!-pow!-chk */
    v0180 = (*qfn2(fn))(qenv(fn), v0161, v0180);
    nil = C_nil;
    if (exception_pending()) goto v0183;
    env = stack[-5];
    stack[-4] = v0180;
    if (v0180 == nil) goto v0083;
    stack[0] = stack[-3];
    v0161 = stack[-4];
    v0180 = stack[-2];
    fn = elt(env, 3); /* mv!-pow!-mv!-!+ */
    v0180 = (*qfn2(fn))(qenv(fn), v0161, v0180);
    nil = C_nil;
    if (exception_pending()) goto v0183;
    env = stack[-5];
    fn = elt(env, 4); /* mv!-compact2 */
    v0180 = (*qfn2(fn))(qenv(fn), stack[0], v0180);
    nil = C_nil;
    if (exception_pending()) goto v0183;
    env = stack[-5];
    stack[0] = v0180;
    if (v0180 == nil) goto v0083;
    v0181 = stack[0];
    v0161 = stack[-2];
    v0180 = stack[-1];
    stack[-3] = v0181;
    stack[-2] = v0161;
    stack[-1] = v0180;
    goto v0182;

v0083:
    v0161 = stack[-3];
    v0180 = stack[-2];
    v0180 = qcdr(v0180);
    fn = elt(env, 2); /* mv!-pow!-chk */
    v0180 = (*qfn2(fn))(qenv(fn), v0161, v0180);
    nil = C_nil;
    if (exception_pending()) goto v0183;
    env = stack[-5];
    stack[-4] = v0180;
    if (v0180 == nil) goto v0184;
    v0161 = stack[-4];
    v0180 = stack[-2];
    v0180 = qcar(v0180);
    v0180 = qcar(v0180);
    fn = elt(env, 5); /* mv!-pow!-!+ */
    v0161 = (*qfn2(fn))(qenv(fn), v0161, v0180);
    nil = C_nil;
    if (exception_pending()) goto v0183;
    env = stack[-5];
    stack[0] = v0161;
    v0180 = stack[-1];
    fn = elt(env, 6); /* mv!-pow!-assoc */
    v0180 = (*qfn2(fn))(qenv(fn), v0161, v0180);
    nil = C_nil;
    if (exception_pending()) goto v0183;
    env = stack[-5];
    if (v0180 == nil) goto v0185;
    v0180 = qvalue(elt(env, 1)); /* nil */
    goto v0186;

v0186:
    if (v0180 == nil) goto v0184;
    v0181 = stack[0];
    v0161 = stack[-2];
    v0180 = stack[-1];
    stack[-3] = v0181;
    stack[-2] = v0161;
    stack[-1] = v0180;
    goto v0182;

v0184:
    v0180 = stack[-3];
    stack[0] = qcdr(v0180);
    v0180 = stack[-3];
    v0161 = qcar(v0180);
    v0180 = stack[-1];
    v0180 = cons(v0161, v0180);
    nil = C_nil;
    if (exception_pending()) goto v0183;
    env = stack[-5];
    stack[-3] = stack[0];
    stack[-1] = v0180;
    goto v0182;

v0185:
    v0181 = stack[0];
    v0161 = (Lisp_Object)1; /* 0 */
    v0180 = stack[-3];
    stack[0] = acons(v0181, v0161, v0180);
    nil = C_nil;
    if (exception_pending()) goto v0183;
    env = stack[-5];
    v0161 = stack[-4];
    v0180 = stack[-2];
    fn = elt(env, 3); /* mv!-pow!-mv!-!+ */
    v0180 = (*qfn2(fn))(qenv(fn), v0161, v0180);
    nil = C_nil;
    if (exception_pending()) goto v0183;
    env = stack[-5];
    fn = elt(env, 4); /* mv!-compact2 */
    v0180 = (*qfn2(fn))(qenv(fn), stack[0], v0180);
    nil = C_nil;
    if (exception_pending()) goto v0183;
    env = stack[-5];
    stack[0] = v0180;
    goto v0186;

v0139:
    v0180 = stack[-1];
    {
        popv(6);
        fn = elt(env, 7); /* mv!-reverse */
        return (*qfn1(fn))(qenv(fn), v0180);
    }
/* error exit handlers */
v0183:
    popv(6);
    return nil;
}



/* Code for !*g2lex */

static Lisp_Object CC_Hg2lex(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0118, v0094;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for *g2lex");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0011);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v0118 = v0011;
/* end of prologue */
    v0094 = nil;
    stack[-1] = v0118;
    goto v0029;

v0029:
    v0118 = stack[-1];
    if (v0118 == nil) { popv(3); return onevalue(v0094); }
    v0118 = stack[-1];
    v0118 = qcar(v0118);
    stack[0] = v0094;
    v0094 = v0118;
    v0094 = qcar(v0094);
    v0094 = qcdr(v0094);
    v0118 = qcdr(v0118);
    v0118 = cons(v0094, v0118);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-2];
    v0118 = ncons(v0118);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-2];
    fn = elt(env, 2); /* psum */
    v0118 = (*qfn2(fn))(qenv(fn), stack[0], v0118);
    nil = C_nil;
    if (exception_pending()) goto v0098;
    env = stack[-2];
    v0094 = v0118;
    v0118 = stack[-1];
    v0118 = qcdr(v0118);
    stack[-1] = v0118;
    goto v0029;
/* error exit handlers */
v0098:
    popv(3);
    return nil;
}



/* Code for balance_mod */

static Lisp_Object CC_balance_mod(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0166, v0097;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for balance_mod");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0011,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0011;
/* end of prologue */
    v0097 = stack[-1];
    v0166 = stack[-1];
    v0097 = plus2(v0097, v0166);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-2];
    v0166 = stack[0];
    v0166 = (Lisp_Object)greaterp2(v0097, v0166);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    v0166 = v0166 ? lisp_true : nil;
    if (v0166 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v0097 = stack[-1];
    v0166 = stack[0];
    popv(3);
    return difference2(v0097, v0166);
/* error exit handlers */
v0150:
    popv(3);
    return nil;
}



/* Code for mktag */

static Lisp_Object MS_CDECL CC_mktag(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0063, v0190, v0191;
    Lisp_Object fn;
    Lisp_Object v0003, v0016, v0011;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "mktag");
    va_start(aa, nargs);
    v0011 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mktag");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0003,v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0011,v0016,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0003;
    stack[-2] = v0016;
    v0063 = v0011;
/* end of prologue */
    v0190 = v0063;
    if (v0190 == nil) goto v0040;
    v0190 = v0063;
    if (!consp(v0190)) goto v0139;
    v0190 = v0063;
    v0191 = qcar(v0190);
    v0190 = elt(env, 2); /* texprec */
    v0190 = get(v0191, v0190);
    env = stack[-4];
    if (!(v0190 == nil)) goto v0076;
    v0190 = (Lisp_Object)15985; /* 999 */
    goto v0076;

v0076:
    stack[-3] = v0190;
    v0190 = v0063;
    v0191 = qcar(v0190);
    v0190 = qcdr(v0063);
    v0063 = stack[-3];
    fn = elt(env, 5); /* makefunc */
    v0063 = (*qfnn(fn))(qenv(fn), 3, v0191, v0190, v0063);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    env = stack[-4];
    stack[0] = v0063;
    v0063 = stack[-1];
    if (v0063 == nil) goto v0149;
    v0190 = stack[-2];
    v0063 = stack[-3];
    if (!(equal(v0190, v0063))) goto v0149;

v0173:
    v0190 = elt(env, 3); /* !\!( */
    v0063 = stack[0];
    stack[0] = cons(v0190, v0063);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    env = stack[-4];
    v0063 = elt(env, 4); /* !\!) */
    v0063 = ncons(v0063);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    env = stack[-4];
    v0063 = Lnconc(nil, stack[0], v0063);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    stack[0] = v0063;
    { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }

v0149:
    v0190 = stack[-3];
    v0063 = stack[-2];
    v0063 = (Lisp_Object)lessp2(v0190, v0063);
    nil = C_nil;
    if (exception_pending()) goto v0170;
    v0063 = v0063 ? lisp_true : nil;
    env = stack[-4];
    if (v0063 == nil) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    else goto v0173;

v0139:
    {
        popv(5);
        fn = elt(env, 6); /* texexplode */
        return (*qfn1(fn))(qenv(fn), v0063);
    }

v0040:
    v0063 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0063); }
/* error exit handlers */
v0170:
    popv(5);
    return nil;
}



/* Code for pasf_leqp */

static Lisp_Object CC_pasf_leqp(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0193, v0175, v0063, v0190;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pasf_leqp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0011,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v0175 = v0016;
    v0063 = v0011;
/* end of prologue */
    v0193 = v0063;
    if (!(v0193 == nil)) goto v0040;
    v0193 = (Lisp_Object)1; /* 0 */
    v0063 = v0193;
    goto v0040;

v0040:
    v0193 = v0175;
    if (!(v0193 == nil)) goto v0102;
    v0193 = (Lisp_Object)1; /* 0 */
    v0175 = v0193;
    goto v0102;

v0102:
    v0190 = v0063;
    v0193 = elt(env, 1); /* minf */
    if (v0190 == v0193) goto v0110;
    v0190 = v0175;
    v0193 = elt(env, 3); /* pinf */
    if (v0190 == v0193) goto v0150;
    v0190 = v0063;
    v0193 = elt(env, 3); /* pinf */
    if (v0190 == v0193) goto v0194;
    v0190 = v0175;
    v0193 = elt(env, 1); /* minf */
    if (v0190 == v0193) goto v0195;
    v0193 = v0063;
    v0193 = (Lisp_Object)lesseq2(v0193, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    v0193 = v0193 ? lisp_true : nil;
    env = stack[0];
    goto v0076;

v0076:
    if (v0193 == nil) goto v0072;
    v0193 = qvalue(elt(env, 2)); /* t */
    { popv(1); return onevalue(v0193); }

v0072:
    v0193 = nil;
    { popv(1); return onevalue(v0193); }

v0195:
    v0193 = qvalue(elt(env, 4)); /* nil */
    goto v0076;

v0194:
    v0193 = qvalue(elt(env, 4)); /* nil */
    goto v0076;

v0150:
    v0193 = qvalue(elt(env, 2)); /* t */
    goto v0076;

v0110:
    v0193 = qvalue(elt(env, 2)); /* t */
    goto v0076;
/* error exit handlers */
v0191:
    popv(1);
    return nil;
}



/* Code for ev_mtest!? */

static Lisp_Object CC_ev_mtestW(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0117, v0118, v0094, v0093, v0192;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ev_mtest?");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0094 = v0016;
    v0093 = v0011;
/* end of prologue */
    v0117 = qvalue(elt(env, 1)); /* t */
    v0192 = v0117;
    goto v0012;

v0012:
    v0117 = v0093;
    if (v0117 == nil) return onevalue(v0192);
    v0117 = v0192;
    if (v0117 == nil) return onevalue(v0192);
    v0117 = v0093;
    v0118 = qcar(v0117);
    v0117 = v0094;
    v0117 = qcar(v0117);
    if (((int32_t)(v0118)) < ((int32_t)(v0117))) goto v0077;
    v0117 = v0093;
    v0117 = qcdr(v0117);
    v0093 = v0117;
    v0117 = v0094;
    v0117 = qcdr(v0117);
    v0094 = v0117;
    goto v0012;

v0077:
    v0117 = qvalue(elt(env, 2)); /* nil */
    v0192 = v0117;
    v0093 = v0117;
    goto v0012;
}



/* Code for ps!:mkpow */

static Lisp_Object MS_CDECL CC_psTmkpow(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0176, v0156, v0169, v0186;
    Lisp_Object v0003, v0016, v0011;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "ps:mkpow");
    va_start(aa, nargs);
    v0011 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ps:mkpow");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0003,v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0011,v0016,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v0003;
    v0169 = v0016;
    v0186 = v0011;
/* end of prologue */
    v0156 = v0169;
    v0176 = (Lisp_Object)1; /* 0 */
    if (v0156 == v0176) goto v0040;
    v0156 = v0169;
    v0176 = (Lisp_Object)17; /* 1 */
    if (v0156 == v0176) goto v0077;
    v0176 = elt(env, 1); /* expt */
    v0156 = v0186;
    v0176 = list3(v0176, v0156, v0169);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    env = stack[-1];
    goto v0072;

v0072:
    v0156 = stack[0];
    if (v0156 == nil) goto v0163;
    v0169 = elt(env, 2); /* quotient */
    v0156 = (Lisp_Object)17; /* 1 */
    v0176 = list3(v0169, v0156, v0176);
    nil = C_nil;
    if (exception_pending()) goto v0196;
    popv(2);
    return ncons(v0176);

v0163:
    popv(2);
    return ncons(v0176);

v0077:
    v0176 = v0186;
    goto v0072;

v0040:
    v0176 = (Lisp_Object)17; /* 1 */
    popv(2);
    return ncons(v0176);
/* error exit handlers */
v0196:
    popv(2);
    return nil;
}



/* Code for findhr */

static Lisp_Object MS_CDECL CC_findhr(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0147, v0197, v0159;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "findhr");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for findhr");
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
    stack[-1] = nil;
    goto v0107;

v0107:
    v0197 = qvalue(elt(env, 1)); /* headhisto */
    v0147 = (Lisp_Object)1; /* 0 */
    v0147 = (Lisp_Object)greaterp2(v0197, v0147);
    nil = C_nil;
    if (exception_pending()) goto v0173;
    v0147 = v0147 ? lisp_true : nil;
    env = stack[-2];
    if (v0147 == nil) goto v0025;
    v0197 = qvalue(elt(env, 2)); /* codhisto */
    v0147 = qvalue(elt(env, 1)); /* headhisto */
    v0147 = *(Lisp_Object *)((char *)v0197 + (CELL-TAG_VECTOR) + ((int32_t)v0147/(16/CELL)));
    stack[-1] = v0147;
    if (!(v0147 == nil)) goto v0025;
    v0147 = qvalue(elt(env, 1)); /* headhisto */
    v0147 = sub1(v0147);
    nil = C_nil;
    if (exception_pending()) goto v0173;
    env = stack[-2];
    qvalue(elt(env, 1)) = v0147; /* headhisto */
    goto v0107;

v0025:
    v0147 = stack[-1];
    if (v0147 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v0147 = stack[-1];
    v0147 = ncons(v0147);
    nil = C_nil;
    if (exception_pending()) goto v0173;
    env = stack[-2];
    qvalue(elt(env, 4)) = v0147; /* psi */
    v0147 = (Lisp_Object)17; /* 1 */
    qvalue(elt(env, 5)) = v0147; /* npsi */
    stack[0] = qvalue(elt(env, 6)); /* codmat */
    v0197 = qvalue(elt(env, 7)); /* maxvar */
    v0147 = stack[-1];
    v0147 = plus2(v0197, v0147);
    nil = C_nil;
    if (exception_pending()) goto v0173;
    env = stack[-2];
    v0159 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v0147/(16/CELL)));
    v0197 = (Lisp_Object)1; /* 0 */
    v0147 = qvalue(elt(env, 3)); /* nil */
    *(Lisp_Object *)((char *)v0159 + (CELL-TAG_VECTOR) + ((int32_t)v0197/(16/CELL))) = v0147;
    v0197 = stack[-1];
    v0147 = qvalue(elt(env, 8)); /* rcoccup */
    v0147 = cons(v0197, v0147);
    nil = C_nil;
    if (exception_pending()) goto v0173;
    env = stack[-2];
    qvalue(elt(env, 8)) = v0147; /* rcoccup */
    { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
/* error exit handlers */
v0173:
    popv(3);
    return nil;
}



/* Code for nestzerop!: */

static Lisp_Object CC_nestzeropT(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0123, v0108;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for nestzerop:");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0011);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0108 = v0011;
/* end of prologue */
    v0123 = v0108;
    v0123 = integerp(v0123);
    if (v0123 == nil) goto v0139;
    v0123 = v0108;
    fn = elt(env, 1); /* simp */
    v0123 = (*qfn1(fn))(qenv(fn), v0123);
    errexit();
    goto v0142;

v0142:
    v0123 = qcar(v0123);
    v0123 = (v0123 == nil ? lisp_true : nil);
    return onevalue(v0123);

v0139:
    v0123 = v0108;
    v0123 = qcdr(v0123);
    v0123 = qcdr(v0123);
    v0123 = qcdr(v0123);
    goto v0142;
}



/* Code for xreadlist */

static Lisp_Object MS_CDECL CC_xreadlist(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0202, v0143;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "xreadlist");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for xreadlist");
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
    stack[-2] = nil;
    stack[-1] = nil;
    stack[0] = nil;
    fn = elt(env, 10); /* scan */
    v0143 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-4];
    v0202 = elt(env, 1); /* !*rcbkt!* */
    if (!(v0143 == v0202)) goto v0008;
    fn = elt(env, 10); /* scan */
    v0202 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-4];
    v0202 = elt(env, 2); /* list */
    popv(5);
    return ncons(v0202);

v0008:
    v0202 = stack[-1];
    if (v0202 == nil) goto v0104;
    v0202 = elt(env, 3); /* group */
    fn = elt(env, 11); /* xread1 */
    v0202 = (*qfn1(fn))(qenv(fn), v0202);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-4];
    v0202 = ncons(v0202);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-4];
    fn = elt(env, 12); /* nconc2 */
    v0202 = (*qfn2(fn))(qenv(fn), stack[0], v0202);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-4];
    stack[0] = v0202;
    goto v0110;

v0110:
    v0202 = qvalue(elt(env, 4)); /* cursym!* */
    stack[-3] = v0202;
    v0143 = stack[-3];
    v0202 = elt(env, 5); /* !*semicol!* */
    if (v0143 == v0202) goto v0162;
    fn = elt(env, 10); /* scan */
    v0143 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-4];
    v0202 = elt(env, 1); /* !*rcbkt!* */
    if (v0143 == v0202) goto v0204;
    v0202 = qvalue(elt(env, 7)); /* nil */
    goto v0196;

v0196:
    if (v0202 == nil) goto v0085;
    v0143 = elt(env, 9); /* "Syntax error: invalid comma in list" */
    v0202 = qvalue(elt(env, 7)); /* nil */
    fn = elt(env, 13); /* symerr */
    v0202 = (*qfn2(fn))(qenv(fn), v0143, v0202);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-4];
    goto v0085;

v0085:
    v0143 = stack[-3];
    v0202 = elt(env, 1); /* !*rcbkt!* */
    if (v0143 == v0202) goto v0061;
    v0202 = stack[-2];
    if (!(v0202 == nil)) goto v0008;
    v0202 = stack[-3];
    stack[-2] = v0202;
    goto v0008;

v0061:
    v0143 = elt(env, 2); /* list */
    v0202 = stack[-1];
    popv(5);
    return cons(v0143, v0202);

v0204:
    v0143 = stack[-3];
    v0202 = elt(env, 8); /* !*comma!* */
    v0202 = (v0143 == v0202 ? lisp_true : nil);
    goto v0196;

v0162:
    v0143 = elt(env, 6); /* "Syntax error: semicolon in list" */
    v0202 = qvalue(elt(env, 7)); /* nil */
    fn = elt(env, 13); /* symerr */
    v0202 = (*qfn2(fn))(qenv(fn), v0143, v0202);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-4];
    goto v0085;

v0104:
    stack[0] = stack[-1];
    v0202 = elt(env, 3); /* group */
    fn = elt(env, 11); /* xread1 */
    v0202 = (*qfn1(fn))(qenv(fn), v0202);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-4];
    fn = elt(env, 14); /* aconc */
    v0202 = (*qfn2(fn))(qenv(fn), stack[0], v0202);
    nil = C_nil;
    if (exception_pending()) goto v0203;
    env = stack[-4];
    stack[0] = v0202;
    stack[-1] = v0202;
    goto v0110;
/* error exit handlers */
v0203:
    popv(5);
    return nil;
}



/* Code for multiply!-by!-power!-of!-ten */

static Lisp_Object CC_multiplyKbyKpowerKofKten(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0187, v0193;
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
        push2(v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0011,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0011;
/* end of prologue */
    v0193 = stack[0];
    v0187 = (Lisp_Object)1; /* 0 */
    v0187 = (Lisp_Object)lessp2(v0193, v0187);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    v0187 = v0187 ? lisp_true : nil;
    env = stack[-3];
    if (v0187 == nil) goto v0078;
    v0187 = elt(env, 0); /* multiply!-by!-power!-of!-ten */
    {
        popv(4);
        fn = elt(env, 4); /* bflerrmsg */
        return (*qfn1(fn))(qenv(fn), v0187);
    }

v0078:
    v0187 = qvalue(elt(env, 1)); /* bften!* */
    stack[-2] = v0187;
    goto v0114;

v0114:
    v0193 = stack[0];
    v0187 = (Lisp_Object)1; /* 0 */
    v0187 = (Lisp_Object)greaterp2(v0193, v0187);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    v0187 = v0187 ? lisp_true : nil;
    env = stack[-3];
    if (v0187 == nil) goto v0173;
    v0187 = stack[0];
    v0187 = Levenp(nil, v0187);
    env = stack[-3];
    if (!(v0187 == nil)) goto v0068;
    v0193 = stack[-1];
    v0187 = stack[-2];
    fn = elt(env, 5); /* times!: */
    v0187 = (*qfn2(fn))(qenv(fn), v0193, v0187);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-3];
    fn = elt(env, 6); /* normbf */
    v0187 = (*qfn1(fn))(qenv(fn), v0187);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-3];
    stack[-1] = v0187;
    goto v0068;

v0068:
    v0193 = stack[0];
    v0187 = (Lisp_Object)-15; /* -1 */
    fn = elt(env, 7); /* lshift */
    v0187 = (*qfn2(fn))(qenv(fn), v0193, v0187);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-3];
    stack[0] = v0187;
    v0193 = stack[-2];
    v0187 = stack[-2];
    fn = elt(env, 5); /* times!: */
    v0193 = (*qfn2(fn))(qenv(fn), v0193, v0187);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-3];
    v0187 = qvalue(elt(env, 3)); /* !:bprec!: */
    fn = elt(env, 8); /* cut!:mt */
    v0187 = (*qfn2(fn))(qenv(fn), v0193, v0187);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-3];
    fn = elt(env, 6); /* normbf */
    v0187 = (*qfn1(fn))(qenv(fn), v0187);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-3];
    stack[-2] = v0187;
    goto v0114;

v0173:
    v0193 = stack[-1];
    v0187 = qvalue(elt(env, 3)); /* !:bprec!: */
    fn = elt(env, 8); /* cut!:mt */
    v0187 = (*qfn2(fn))(qenv(fn), v0193, v0187);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-3];
    {
        popv(4);
        fn = elt(env, 6); /* normbf */
        return (*qfn1(fn))(qenv(fn), v0187);
    }
/* error exit handlers */
v0191:
    popv(4);
    return nil;
}



/* Code for !*kp2q */

static Lisp_Object CC_Hkp2q(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0068, v0069;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for *kp2q");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0011,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0011;
/* end of prologue */
    v0069 = stack[0];
    v0068 = (Lisp_Object)1; /* 0 */
    v0068 = (Lisp_Object)greaterp2(v0069, v0068);
    nil = C_nil;
    if (exception_pending()) goto v0205;
    v0068 = v0068 ? lisp_true : nil;
    env = stack[-2];
    if (v0068 == nil) goto v0040;
    v0069 = stack[-1];
    v0068 = stack[0];
    {
        popv(3);
        fn = elt(env, 2); /* mksq */
        return (*qfn2(fn))(qenv(fn), v0069, v0068);
    }

v0040:
    v0068 = stack[0];
    v0068 = (Lisp_Object)zerop(v0068);
    v0068 = v0068 ? lisp_true : nil;
    env = stack[-2];
    if (v0068 == nil) goto v0117;
    v0069 = (Lisp_Object)17; /* 1 */
    v0068 = (Lisp_Object)17; /* 1 */
    popv(3);
    return cons(v0069, v0068);

v0117:
    v0068 = stack[0];
    v0068 = negate(v0068);
    nil = C_nil;
    if (exception_pending()) goto v0205;
    env = stack[-2];
    fn = elt(env, 2); /* mksq */
    v0068 = (*qfn2(fn))(qenv(fn), stack[-1], v0068);
    nil = C_nil;
    if (exception_pending()) goto v0205;
    env = stack[-2];
    stack[-1] = v0068;
    v0068 = qcar(v0068);
    if (v0068 == nil) goto v0095;
    v0068 = stack[-1];
    {
        popv(3);
        fn = elt(env, 3); /* revpr */
        return (*qfn1(fn))(qenv(fn), v0068);
    }

v0095:
    v0068 = elt(env, 1); /* "Zero divisor" */
    {
        popv(3);
        fn = elt(env, 4); /* rederr */
        return (*qfn1(fn))(qenv(fn), v0068);
    }
/* error exit handlers */
v0205:
    popv(3);
    return nil;
}



/* Code for toolongassignp */

static Lisp_Object CC_toolongassignp(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0008;
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
    v0008 = v0011;
/* end of prologue */
    v0008 = qcdr(v0008);
    v0008 = qcdr(v0008);
    v0008 = qcar(v0008);
    {
        fn = elt(env, 1); /* toolongexpp */
        return (*qfn1(fn))(qenv(fn), v0008);
    }
}



/* Code for lndepends */

static Lisp_Object CC_lndepends(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0103, v0166;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lndepends");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0011,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0011;
/* end of prologue */

v0182:
    v0103 = stack[-1];
    if (v0103 == nil) goto v0025;
    v0103 = stack[-1];
    v0166 = qcar(v0103);
    v0103 = stack[0];
    fn = elt(env, 2); /* ndepends */
    v0103 = (*qfn2(fn))(qenv(fn), v0166, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0105;
    env = stack[-2];
    if (!(v0103 == nil)) { popv(3); return onevalue(v0103); }
    v0103 = stack[-1];
    v0166 = qcdr(v0103);
    v0103 = stack[0];
    stack[-1] = v0166;
    stack[0] = v0103;
    goto v0182;

v0025:
    v0103 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0103); }
/* error exit handlers */
v0105:
    popv(3);
    return nil;
}



/* Code for s_noparents */

static Lisp_Object CC_s_noparents(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0166, v0097;
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
        push(v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0011);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0011;
/* end of prologue */
    stack[-1] = nil;
    goto v0025;

v0025:
    v0166 = stack[0];
    if (v0166 == nil) goto v0029;
    v0166 = stack[0];
    v0166 = qcar(v0166);
    fn = elt(env, 1); /* has_parents */
    v0166 = (*qfn1(fn))(qenv(fn), v0166);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-2];
    if (v0166 == nil) goto v0110;
    v0166 = stack[0];
    v0166 = qcdr(v0166);
    stack[0] = v0166;
    goto v0025;

v0110:
    v0166 = stack[0];
    v0097 = qcar(v0166);
    v0166 = stack[-1];
    v0166 = cons(v0097, v0166);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-2];
    stack[-1] = v0166;
    v0166 = stack[0];
    v0166 = qcdr(v0166);
    stack[0] = v0166;
    goto v0025;

v0029:
    v0166 = stack[-1];
    {
        popv(3);
        fn = elt(env, 2); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0166);
    }
/* error exit handlers */
v0150:
    popv(3);
    return nil;
}



/* Code for fs!:zerop!: */

static Lisp_Object CC_fsTzeropT(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0149, v0164, v0176;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fs:zerop:");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0176 = v0011;
/* end of prologue */
    v0149 = v0176;
    if (v0149 == nil) goto v0002;
    v0149 = v0176;
    if (is_number(v0149)) goto v0076;
    v0149 = v0176;
    v0149 = qcdr(v0149);
    v0149 = (v0149 == nil ? lisp_true : nil);
    goto v0099;

v0099:
    if (v0149 == nil) goto v0103;
    v0149 = qvalue(elt(env, 1)); /* t */
    return onevalue(v0149);

v0103:
    v0149 = v0176;
    v0164 = qcdr(v0149);
    v0149 = (Lisp_Object)49; /* 3 */
    v0149 = *(Lisp_Object *)((char *)v0164 + (CELL-TAG_VECTOR) + ((int32_t)v0149/(16/CELL)));
    if (v0149 == nil) goto v0118;
    v0149 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0149);

v0118:
    v0149 = v0176;
    v0164 = qcdr(v0149);
    v0149 = (Lisp_Object)1; /* 0 */
    v0149 = *(Lisp_Object *)((char *)v0164 + (CELL-TAG_VECTOR) + ((int32_t)v0149/(16/CELL)));
    v0164 = v0149;
    v0149 = v0164;
    if (is_number(v0149)) goto v0205;
    v0149 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0149);

v0205:
    v0149 = v0164;
        return Lzerop(nil, v0149);

v0076:
    v0149 = qvalue(elt(env, 2)); /* nil */
    goto v0099;

v0002:
    v0149 = qvalue(elt(env, 1)); /* t */
    return onevalue(v0149);
}



/* Code for derivative!-mod!-p */

static Lisp_Object CC_derivativeKmodKp(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0081, v0130, v0080;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for derivative-mod-p");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0080 = v0011;
/* end of prologue */
    v0081 = v0080;
    if (!consp(v0081)) goto v0029;
    v0081 = v0080;
    v0081 = qcar(v0081);
    v0081 = (consp(v0081) ? nil : lisp_true);
    goto v0008;

v0008:
    if (v0081 == nil) goto v0072;
    v0081 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0081);

v0072:
    v0081 = v0080;
    v0081 = qcar(v0081);
    v0081 = qcar(v0081);
    v0130 = qcdr(v0081);
    v0081 = (Lisp_Object)17; /* 1 */
    if (v0130 == v0081) goto v0123;
    v0081 = v0080;
    v0130 = v0080;
    v0130 = qcar(v0130);
    v0130 = qcar(v0130);
    v0130 = qcar(v0130);
    {
        fn = elt(env, 3); /* derivative!-mod!-p!-1 */
        return (*qfn2(fn))(qenv(fn), v0081, v0130);
    }

v0123:
    v0081 = v0080;
    v0081 = qcar(v0081);
    v0081 = qcdr(v0081);
    return onevalue(v0081);

v0029:
    v0081 = qvalue(elt(env, 1)); /* t */
    goto v0008;
}



/* Code for ofsf_decdeg2 */

static Lisp_Object MS_CDECL CC_ofsf_decdeg2(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0218, v0091, v0219;
    Lisp_Object fn;
    Lisp_Object v0003, v0016, v0011;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "ofsf_decdeg2");
    va_start(aa, nargs);
    v0011 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ofsf_decdeg2");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0003,v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0011,v0016,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-4] = v0003;
    stack[-5] = v0016;
    stack[-3] = v0011;
/* end of prologue */
    stack[-2] = qvalue(elt(env, 1)); /* !*gcd */
    qvalue(elt(env, 1)) = nil; /* !*gcd */
    stack[-1] = nil;
    v0218 = (Lisp_Object)1; /* 0 */
    stack[0] = v0218;
    v0218 = qvalue(elt(env, 2)); /* t */
    qvalue(elt(env, 1)) = v0218; /* !*gcd */
    v0218 = qvalue(elt(env, 3)); /* !*rlbrkcxk */
    if (v0218 == nil) goto v0099;
    v0091 = stack[-3];
    v0218 = stack[-5];
    fn = elt(env, 6); /* ofsf_cxkdgcd */
    v0218 = (*qfn2(fn))(qenv(fn), v0091, v0218);
    nil = C_nil;
    if (exception_pending()) goto v0220;
    env = stack[-7];
    stack[0] = v0218;
    goto v0099;

v0099:
    v0218 = stack[-3];
    fn = elt(env, 7); /* cl_atl1 */
    v0218 = (*qfn1(fn))(qenv(fn), v0218);
    nil = C_nil;
    if (exception_pending()) goto v0220;
    env = stack[-7];
    stack[-3] = v0218;
    goto v0096;

v0096:
    v0218 = stack[-3];
    if (v0218 == nil) goto v0027;
    v0091 = stack[0];
    v0218 = (Lisp_Object)17; /* 1 */
    v0218 = Leqn(nil, v0091, v0218);
    nil = C_nil;
    if (exception_pending()) goto v0220;
    env = stack[-7];
    if (!(v0218 == nil)) goto v0027;
    v0218 = stack[-3];
    v0218 = qcar(v0218);
    v0091 = v0218;
    v0218 = stack[-3];
    v0218 = qcdr(v0218);
    stack[-3] = v0218;
    v0218 = v0091;
    stack[-6] = v0218;
    v0219 = stack[-6];
    v0091 = stack[-5];
    v0218 = stack[-4];
    fn = elt(env, 8); /* ofsf_ignshift */
    v0218 = (*qfnn(fn))(qenv(fn), 3, v0219, v0091, v0218);
    nil = C_nil;
    if (exception_pending()) goto v0220;
    env = stack[-7];
    v0219 = v0218;
    v0091 = v0219;
    v0218 = elt(env, 5); /* odd */
    if (v0091 == v0218) goto v0197;
    v0218 = qvalue(elt(env, 4)); /* nil */
    goto v0147;

v0147:
    if (v0218 == nil) goto v0196;
    v0218 = elt(env, 5); /* odd */
    stack[-1] = v0218;
    goto v0221;

v0221:
    v0091 = stack[0];
    v0218 = (Lisp_Object)1; /* 0 */
    v0218 = (Lisp_Object)greaterp2(v0091, v0218);
    nil = C_nil;
    if (exception_pending()) goto v0220;
    v0218 = v0218 ? lisp_true : nil;
    env = stack[-7];
    if (v0218 == nil) goto v0096;
    v0091 = stack[-1];
    v0218 = elt(env, 5); /* odd */
    if (!(v0091 == v0218)) goto v0096;
    v0218 = qvalue(elt(env, 2)); /* t */
    stack[-1] = v0218;
    goto v0222;

v0222:
    v0091 = stack[0];
    v0218 = (Lisp_Object)33; /* 2 */
    fn = elt(env, 9); /* quotf */
    v0218 = (*qfn2(fn))(qenv(fn), v0091, v0218);
    nil = C_nil;
    if (exception_pending()) goto v0220;
    env = stack[-7];
    v0219 = v0218;
    if (v0218 == nil) goto v0096;
    v0218 = v0219;
    stack[0] = v0218;
    goto v0222;

v0196:
    v0218 = v0219;
    if (!(v0218 == nil)) goto v0221;
    v0218 = stack[-6];
    v0218 = qcdr(v0218);
    v0091 = qcar(v0218);
    v0218 = stack[-5];
    fn = elt(env, 10); /* sfto_reorder */
    v0218 = (*qfn2(fn))(qenv(fn), v0091, v0218);
    nil = C_nil;
    if (exception_pending()) goto v0220;
    env = stack[-7];
    stack[-6] = v0218;
    goto v0085;

v0085:
    v0218 = stack[-6];
    if (!consp(v0218)) goto v0223;
    v0218 = stack[-6];
    v0218 = qcar(v0218);
    v0218 = (consp(v0218) ? nil : lisp_true);
    goto v0224;

v0224:
    if (v0218 == nil) goto v0225;
    v0218 = qvalue(elt(env, 4)); /* nil */
    goto v0200;

v0200:
    if (v0218 == nil) goto v0221;
    v0091 = stack[0];
    v0218 = stack[-6];
    v0218 = qcar(v0218);
    v0218 = qcar(v0218);
    v0218 = qcdr(v0218);
    fn = elt(env, 11); /* gcdf */
    v0218 = (*qfn2(fn))(qenv(fn), v0091, v0218);
    nil = C_nil;
    if (exception_pending()) goto v0220;
    env = stack[-7];
    stack[0] = v0218;
    v0218 = stack[-6];
    v0218 = qcdr(v0218);
    stack[-6] = v0218;
    goto v0085;

v0225:
    v0218 = stack[-6];
    v0218 = qcar(v0218);
    v0218 = qcar(v0218);
    v0091 = qcar(v0218);
    v0218 = stack[-5];
    if (v0091 == v0218) goto v0177;
    v0218 = qvalue(elt(env, 4)); /* nil */
    goto v0200;

v0177:
    v0091 = stack[0];
    v0218 = (Lisp_Object)17; /* 1 */
    v0218 = Lneq(nil, v0091, v0218);
    nil = C_nil;
    if (exception_pending()) goto v0220;
    env = stack[-7];
    goto v0200;

v0223:
    v0218 = qvalue(elt(env, 2)); /* t */
    goto v0224;

v0197:
    v0218 = stack[-1];
    v0218 = (v0218 == nil ? lisp_true : nil);
    goto v0147;

v0027:
    v0091 = stack[0];
    v0218 = (Lisp_Object)1; /* 0 */
    if (v0091 == v0218) goto v0226;
    v0218 = stack[0];
    goto v0119;

v0119:
    qvalue(elt(env, 1)) = stack[-2]; /* !*gcd */
    { popv(8); return onevalue(v0218); }

v0226:
    v0218 = (Lisp_Object)17; /* 1 */
    goto v0119;
/* error exit handlers */
v0220:
    env = stack[-7];
    qvalue(elt(env, 1)) = stack[-2]; /* !*gcd */
    popv(8);
    return nil;
}



/* Code for ofsf_smwrmknowl */

static Lisp_Object CC_ofsf_smwrmknowl(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0112, v0113, v0104;
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
    v0113 = v0016;
    v0104 = v0011;
/* end of prologue */
    v0112 = qvalue(elt(env, 1)); /* !*rlsusi */
    if (v0112 == nil) goto v0108;
    v0112 = v0104;
    {
        fn = elt(env, 2); /* ofsf_susirmknowl */
        return (*qfn2(fn))(qenv(fn), v0112, v0113);
    }

v0108:
    v0112 = v0104;
    {
        fn = elt(env, 3); /* ofsf_smrmknowl */
        return (*qfn2(fn))(qenv(fn), v0112, v0113);
    }
}



/* Code for ofsf_smeqtable */

static Lisp_Object CC_ofsf_smeqtable(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0118, v0094, v0093, v0192, v0098, v0081;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ofsf_smeqtable");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0192 = v0016;
    v0098 = v0011;
/* end of prologue */
    v0118 = elt(env, 1); /* ((equal (equal . equal) (neq . false) (geq . equal) (leq . equal) (greaterp . false) (lessp . false)) (neq (neq . neq) (geq . greaterp) (leq . lessp) (greaterp . greaterp) 
(lessp . lessp)) (geq (geq . geq) (leq . equal) (greaterp . greaterp) (lessp . false)) (leq (leq . leq) (greaterp . false) (lessp . lessp)) (greaterp (greaterp . greaterp) (lessp . false)) (lessp (les
sp . lessp))) */
    v0081 = v0118;
    v0093 = v0192;
    v0094 = v0098;
    v0118 = v0081;
    v0118 = Latsoc(nil, v0094, v0118);
    v0118 = Latsoc(nil, v0093, v0118);
    if (!(v0118 == nil)) goto v0029;
    v0118 = v0098;
    v0094 = v0192;
    v0093 = v0081;
    v0094 = Latsoc(nil, v0094, v0093);
    v0118 = Latsoc(nil, v0118, v0094);
    goto v0029;

v0029:
    v0118 = qcdr(v0118);
    return onevalue(v0118);
}



/* Code for pasf_coeflst */

static Lisp_Object CC_pasf_coeflst(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0188, v0174, v0187;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pasf_coeflst");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0011,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0016;
    stack[-2] = v0011;
/* end of prologue */
    stack[0] = nil;
    v0188 = stack[-1];
    v0188 = ncons(v0188);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-4];
    fn = elt(env, 3); /* setkorder */
    v0188 = (*qfn1(fn))(qenv(fn), v0188);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-4];
    stack[-3] = v0188;
    v0188 = stack[-2];
    fn = elt(env, 4); /* reorder */
    v0188 = (*qfn1(fn))(qenv(fn), v0188);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-4];
    stack[-2] = v0188;
    goto v0099;

v0099:
    v0188 = stack[-2];
    if (!consp(v0188)) goto v0112;
    v0188 = stack[-2];
    v0188 = qcar(v0188);
    v0188 = (consp(v0188) ? nil : lisp_true);
    goto v0102;

v0102:
    if (v0188 == nil) goto v0095;
    v0188 = qvalue(elt(env, 2)); /* nil */
    goto v0077;

v0077:
    if (v0188 == nil) goto v0106;
    v0188 = stack[-2];
    v0188 = qcar(v0188);
    v0187 = qcdr(v0188);
    v0188 = stack[-2];
    v0188 = qcar(v0188);
    v0188 = qcar(v0188);
    v0174 = qcdr(v0188);
    v0188 = stack[0];
    v0188 = acons(v0187, v0174, v0188);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-4];
    stack[0] = v0188;
    v0188 = stack[-2];
    v0188 = qcdr(v0188);
    stack[-2] = v0188;
    goto v0099;

v0106:
    v0188 = stack[-3];
    fn = elt(env, 3); /* setkorder */
    v0188 = (*qfn1(fn))(qenv(fn), v0188);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-4];
    v0188 = stack[-2];
    fn = elt(env, 5); /* negf */
    v0187 = (*qfn1(fn))(qenv(fn), v0188);
    nil = C_nil;
    if (exception_pending()) goto v0191;
    env = stack[-4];
    v0174 = (Lisp_Object)1; /* 0 */
    v0188 = stack[0];
    v0188 = acons(v0187, v0174, v0188);
    nil = C_nil;
    if (exception_pending()) goto v0191;
        popv(5);
        return Lnreverse(nil, v0188);

v0095:
    v0188 = stack[-2];
    v0188 = qcar(v0188);
    v0188 = qcar(v0188);
    v0174 = qcar(v0188);
    v0188 = stack[-1];
    v0188 = (v0174 == v0188 ? lisp_true : nil);
    goto v0077;

v0112:
    v0188 = qvalue(elt(env, 1)); /* t */
    goto v0102;
/* error exit handlers */
v0191:
    popv(5);
    return nil;
}



/* Code for quotfexf!*1 */

static Lisp_Object CC_quotfexfH1(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0084, v0204, v0194;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for quotfexf*1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0011,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0011;
/* end of prologue */
    v0084 = stack[-1];
    if (v0084 == nil) goto v0025;
    v0204 = stack[-1];
    v0084 = stack[0];
    fn = elt(env, 6); /* quotf */
    v0084 = (*qfn2(fn))(qenv(fn), v0204, v0084);
    nil = C_nil;
    if (exception_pending()) goto v0187;
    env = stack[-2];
    v0204 = v0084;
    v0084 = v0204;
    if (!(v0084 == nil)) { popv(3); return onevalue(v0204); }
    v0204 = stack[-1];
    v0084 = stack[0];
    v0084 = cons(v0204, v0084);
    nil = C_nil;
    if (exception_pending()) goto v0187;
    env = stack[-2];
    fn = elt(env, 7); /* rationalizesq */
    v0084 = (*qfn1(fn))(qenv(fn), v0084);
    nil = C_nil;
    if (exception_pending()) goto v0187;
    env = stack[-2];
    v0194 = v0084;
    v0084 = v0194;
    v0204 = qcdr(v0084);
    v0084 = (Lisp_Object)17; /* 1 */
    if (v0204 == v0084) goto v0117;
    v0084 = qvalue(elt(env, 2)); /* t */
    stack[0] = qvalue(elt(env, 3)); /* !*rationalize */
    qvalue(elt(env, 3)) = v0084; /* !*rationalize */
    v0084 = v0194;
    fn = elt(env, 7); /* rationalizesq */
    v0084 = (*qfn1(fn))(qenv(fn), v0084);
    nil = C_nil;
    if (exception_pending()) goto v0193;
    env = stack[-2];
    qvalue(elt(env, 3)) = stack[0]; /* !*rationalize */
    v0194 = v0084;
    v0204 = qcdr(v0084);
    v0084 = (Lisp_Object)17; /* 1 */
    if (v0204 == v0084) goto v0116;
    v0194 = elt(env, 4); /* matrix */
    v0204 = (Lisp_Object)177; /* 11 */
    v0084 = elt(env, 5); /* "Catastrophic division failure" */
    {
        popv(3);
        fn = elt(env, 8); /* rerror */
        return (*qfnn(fn))(qenv(fn), 3, v0194, v0204, v0084);
    }

v0116:
    v0084 = v0194;
    v0084 = qcar(v0084);
    { popv(3); return onevalue(v0084); }

v0117:
    v0084 = v0194;
    v0084 = qcar(v0084);
    { popv(3); return onevalue(v0084); }

v0025:
    v0084 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0084); }
/* error exit handlers */
v0193:
    env = stack[-2];
    qvalue(elt(env, 3)) = stack[0]; /* !*rationalize */
    popv(3);
    return nil;
v0187:
    popv(3);
    return nil;
}



/* Code for ldf!-dep!-var */

static Lisp_Object CC_ldfKdepKvar(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0068, v0069;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ldf-dep-var");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0011);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    v0068 = v0011;
/* end of prologue */
    stack[-2] = nil;
    stack[-1] = v0068;
    goto v0029;

v0029:
    v0068 = stack[-1];
    if (v0068 == nil) goto v0008;
    v0068 = stack[-1];
    v0068 = qcar(v0068);
    stack[0] = v0068;
    v0068 = stack[0];
    fn = elt(env, 3); /* ldt!-tvar */
    v0069 = (*qfn1(fn))(qenv(fn), v0068);
    nil = C_nil;
    if (exception_pending()) goto v0067;
    env = stack[-3];
    v0068 = qvalue(elt(env, 2)); /* depl!* */
    v0068 = Lassoc(nil, v0069, v0068);
    if (v0068 == nil) goto v0072;
    v0068 = stack[0];
    fn = elt(env, 3); /* ldt!-tvar */
    v0069 = (*qfn1(fn))(qenv(fn), v0068);
    nil = C_nil;
    if (exception_pending()) goto v0067;
    env = stack[-3];
    v0068 = qvalue(elt(env, 2)); /* depl!* */
    v0068 = Lassoc(nil, v0069, v0068);
    v0069 = qcdr(v0068);
    v0068 = stack[-2];
    v0068 = Lappend(nil, v0069, v0068);
    nil = C_nil;
    if (exception_pending()) goto v0067;
    env = stack[-3];
    stack[-2] = v0068;
    goto v0072;

v0072:
    v0068 = stack[-1];
    v0068 = qcdr(v0068);
    stack[-1] = v0068;
    goto v0029;

v0008:
    v0068 = stack[-2];
    {
        popv(4);
        fn = elt(env, 4); /* makeset */
        return (*qfn1(fn))(qenv(fn), v0068);
    }
/* error exit handlers */
v0067:
    popv(4);
    return nil;
}



/* Code for sc_rowscalarproduct */

static Lisp_Object CC_sc_rowscalarproduct(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0176, v0156, v0169;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for sc_rowscalarproduct");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0011,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0016;
    stack[-3] = v0011;
/* end of prologue */
    v0176 = (Lisp_Object)1; /* 0 */
    fn = elt(env, 2); /* sc_simp */
    v0176 = (*qfn1(fn))(qenv(fn), v0176);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-5];
    stack[0] = v0176;
    v0176 = (Lisp_Object)17; /* 1 */
    stack[-4] = v0176;
    goto v0108;

v0108:
    v0176 = stack[-3];
    fn = elt(env, 3); /* fast!-column!-dim */
    v0156 = (*qfn1(fn))(qenv(fn), v0176);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-5];
    v0176 = stack[-4];
    v0176 = difference2(v0156, v0176);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-5];
    v0176 = Lminusp(nil, v0176);
    env = stack[-5];
    if (!(v0176 == nil)) { Lisp_Object res = stack[0]; popv(6); return onevalue(res); }
    stack[-1] = stack[0];
    v0169 = stack[-3];
    v0156 = (Lisp_Object)17; /* 1 */
    v0176 = stack[-4];
    fn = elt(env, 4); /* sc_getmat */
    stack[0] = (*qfnn(fn))(qenv(fn), 3, v0169, v0156, v0176);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-5];
    v0169 = stack[-2];
    v0156 = (Lisp_Object)17; /* 1 */
    v0176 = stack[-4];
    fn = elt(env, 4); /* sc_getmat */
    v0176 = (*qfnn(fn))(qenv(fn), 3, v0169, v0156, v0176);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-5];
    fn = elt(env, 5); /* sc_multsq */
    v0176 = (*qfn2(fn))(qenv(fn), stack[0], v0176);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-5];
    fn = elt(env, 6); /* sc_addsq */
    v0176 = (*qfn2(fn))(qenv(fn), stack[-1], v0176);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-5];
    stack[0] = v0176;
    v0176 = stack[-4];
    v0176 = add1(v0176);
    nil = C_nil;
    if (exception_pending()) goto v0197;
    env = stack[-5];
    stack[-4] = v0176;
    goto v0108;
/* error exit handlers */
v0197:
    popv(6);
    return nil;
}



/* Code for dim!<!=deg */

static Lisp_Object CC_dimRMdeg(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0070, v0071;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dim<=deg");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0011);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0070 = v0011;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* dimex!* */
    fn = elt(env, 4); /* deg!*form */
    v0070 = (*qfn1(fn))(qenv(fn), v0070);
    nil = C_nil;
    if (exception_pending()) goto v0118;
    env = stack[-1];
    fn = elt(env, 5); /* negf */
    v0070 = (*qfn1(fn))(qenv(fn), v0070);
    nil = C_nil;
    if (exception_pending()) goto v0118;
    env = stack[-1];
    fn = elt(env, 6); /* addf */
    v0070 = (*qfn2(fn))(qenv(fn), stack[0], v0070);
    nil = C_nil;
    if (exception_pending()) goto v0118;
    env = stack[-1];
    v0071 = v0070;
    v0070 = v0071;
    if (v0070 == nil) goto v0099;
    v0070 = v0071;
    v0070 = integerp(v0070);
    if (v0070 == nil) goto v0110;
    v0070 = (Lisp_Object)1; /* 0 */
        popv(2);
        return Lleq(nil, v0071, v0070);

v0110:
    v0070 = qvalue(elt(env, 3)); /* nil */
    { popv(2); return onevalue(v0070); }

v0099:
    v0070 = qvalue(elt(env, 2)); /* t */
    { popv(2); return onevalue(v0070); }
/* error exit handlers */
v0118:
    popv(2);
    return nil;
}



/* Code for listpri */

static Lisp_Object CC_listpri(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0188, v0174;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for listpri");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0011);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v0011;
/* end of prologue */
    v0188 = stack[-2];
    stack[0] = v0188;
    v0188 = stack[-2];
    v0188 = qcdr(v0188);
    stack[-2] = v0188;
    v0188 = elt(env, 1); /* !*lcbkt!* */
    if (!symbolp(v0188)) v0188 = nil;
    else { v0188 = qfastgets(v0188);
           if (v0188 != nil) { v0188 = elt(v0188, 37); /* prtch */
#ifdef RECORD_GET
             if (v0188 != SPID_NOPROP)
                record_get(elt(fastget_names, 37), 1);
             else record_get(elt(fastget_names, 37), 0),
                v0188 = nil; }
           else record_get(elt(fastget_names, 37), 0); }
#else
             if (v0188 == SPID_NOPROP) v0188 = nil; }}
#endif
    fn = elt(env, 7); /* prin2!* */
    v0188 = (*qfn1(fn))(qenv(fn), v0188);
    nil = C_nil;
    if (exception_pending()) goto v0190;
    env = stack[-4];
    v0188 = qvalue(elt(env, 2)); /* orig!* */
    stack[-3] = v0188;
    v0174 = qvalue(elt(env, 3)); /* posn!* */
    v0188 = (Lisp_Object)289; /* 18 */
    v0188 = (Lisp_Object)lessp2(v0174, v0188);
    nil = C_nil;
    if (exception_pending()) goto v0190;
    v0188 = v0188 ? lisp_true : nil;
    env = stack[-4];
    if (v0188 == nil) goto v0103;
    v0188 = qvalue(elt(env, 3)); /* posn!* */
    goto v0078;

v0078:
    qvalue(elt(env, 2)) = v0188; /* orig!* */
    v0188 = stack[-2];
    if (v0188 == nil) goto v0029;
    v0174 = stack[-2];
    v0188 = (Lisp_Object)641; /* 40 */
    fn = elt(env, 8); /* treesizep */
    v0188 = (*qfn2(fn))(qenv(fn), v0174, v0188);
    nil = C_nil;
    if (exception_pending()) goto v0190;
    env = stack[-4];
    stack[-1] = v0188;
    goto v0068;

v0068:
    v0188 = stack[-2];
    v0188 = qcar(v0188);
    fn = elt(env, 9); /* negnumberchk */
    v0174 = (*qfn1(fn))(qenv(fn), v0188);
    nil = C_nil;
    if (exception_pending()) goto v0190;
    env = stack[-4];
    v0188 = (Lisp_Object)1; /* 0 */
    fn = elt(env, 10); /* maprint */
    v0188 = (*qfn2(fn))(qenv(fn), v0174, v0188);
    nil = C_nil;
    if (exception_pending()) goto v0190;
    env = stack[-4];
    v0188 = stack[-2];
    v0188 = qcdr(v0188);
    stack[-2] = v0188;
    v0188 = stack[-2];
    if (v0188 == nil) goto v0029;
    v0188 = elt(env, 4); /* !*comma!* */
    fn = elt(env, 11); /* oprin */
    v0188 = (*qfn1(fn))(qenv(fn), v0188);
    nil = C_nil;
    if (exception_pending()) goto v0190;
    env = stack[-4];
    v0188 = stack[-1];
    if (v0188 == nil) goto v0068;
    v0188 = qvalue(elt(env, 5)); /* t */
    fn = elt(env, 12); /* terpri!* */
    v0188 = (*qfn1(fn))(qenv(fn), v0188);
    nil = C_nil;
    if (exception_pending()) goto v0190;
    env = stack[-4];
    goto v0068;

v0029:
    v0188 = elt(env, 6); /* !*rcbkt!* */
    if (!symbolp(v0188)) v0188 = nil;
    else { v0188 = qfastgets(v0188);
           if (v0188 != nil) { v0188 = elt(v0188, 37); /* prtch */
#ifdef RECORD_GET
             if (v0188 != SPID_NOPROP)
                record_get(elt(fastget_names, 37), 1);
             else record_get(elt(fastget_names, 37), 0),
                v0188 = nil; }
           else record_get(elt(fastget_names, 37), 0); }
#else
             if (v0188 == SPID_NOPROP) v0188 = nil; }}
#endif
    fn = elt(env, 7); /* prin2!* */
    v0188 = (*qfn1(fn))(qenv(fn), v0188);
    nil = C_nil;
    if (exception_pending()) goto v0190;
    env = stack[-4];
    v0188 = stack[-3];
    qvalue(elt(env, 2)) = v0188; /* orig!* */
    { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }

v0103:
    v0174 = qvalue(elt(env, 2)); /* orig!* */
    v0188 = (Lisp_Object)49; /* 3 */
    v0188 = plus2(v0174, v0188);
    nil = C_nil;
    if (exception_pending()) goto v0190;
    env = stack[-4];
    goto v0078;
/* error exit handlers */
v0190:
    popv(5);
    return nil;
}



/* Code for decimal2internal */

static Lisp_Object CC_decimal2internal(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0162, v0163, v0148;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for decimal2internal");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0011,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0011;
/* end of prologue */
    v0163 = stack[0];
    v0162 = (Lisp_Object)1; /* 0 */
    v0162 = (Lisp_Object)geq2(v0163, v0162);
    nil = C_nil;
    if (exception_pending()) goto v0156;
    v0162 = v0162 ? lisp_true : nil;
    env = stack[-3];
    if (v0162 == nil) goto v0100;
    stack[-2] = elt(env, 1); /* !:rd!: */
    v0163 = (Lisp_Object)161; /* 10 */
    v0162 = stack[0];
    v0162 = Lexpt(nil, v0163, v0162);
    nil = C_nil;
    if (exception_pending()) goto v0156;
    env = stack[-3];
    v0163 = times2(stack[-1], v0162);
    nil = C_nil;
    if (exception_pending()) goto v0156;
    v0162 = (Lisp_Object)1; /* 0 */
    {
        Lisp_Object v0169 = stack[-2];
        popv(4);
        return list2star(v0169, v0163, v0162);
    }

v0100:
    v0148 = elt(env, 1); /* !:rd!: */
    v0163 = stack[-1];
    v0162 = (Lisp_Object)1; /* 0 */
    stack[-1] = list2star(v0148, v0163, v0162);
    nil = C_nil;
    if (exception_pending()) goto v0156;
    env = stack[-3];
    v0162 = stack[0];
    v0162 = negate(v0162);
    nil = C_nil;
    if (exception_pending()) goto v0156;
    env = stack[-3];
    {
        Lisp_Object v0186 = stack[-1];
        popv(4);
        fn = elt(env, 2); /* divide!-by!-power!-of!-ten */
        return (*qfn2(fn))(qenv(fn), v0186, v0162);
    }
/* error exit handlers */
v0156:
    popv(4);
    return nil;
}



/* Code for natnump */

static Lisp_Object CC_natnump(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0108, v0072;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for natnump");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0072 = v0011;
/* end of prologue */
    v0108 = v0072;
    v0108 = integerp(v0108);
    if (v0108 == nil) goto v0002;
    v0108 = (Lisp_Object)1; /* 0 */
        return Lgeq(nil, v0072, v0108);

v0002:
    v0108 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v0108);
}



/* Code for strand!-alg!-top */

static Lisp_Object MS_CDECL CC_strandKalgKtop(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0098, v0081, v0130;
    Lisp_Object fn;
    Lisp_Object v0003, v0016, v0011;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "strand-alg-top");
    va_start(aa, nargs);
    v0011 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for strand-alg-top");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0003,v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0011,v0016,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0003;
    stack[-1] = v0016;
    stack[-2] = v0011;
/* end of prologue */
    v0081 = stack[-2];
    v0098 = stack[0];
    fn = elt(env, 2); /* deletez1 */
    v0098 = (*qfn2(fn))(qenv(fn), v0081, v0098);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-3];
    stack[-2] = v0098;
    v0130 = stack[0];
    v0081 = stack[-1];
    v0098 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 3); /* color!-strand */
    v0098 = (*qfnn(fn))(qenv(fn), 3, v0130, v0081, v0098);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-3];
    stack[0] = v0098;
    v0081 = stack[-2];
    v0098 = stack[0];
    fn = elt(env, 4); /* contract!-strand */
    v0098 = (*qfn2(fn))(qenv(fn), v0081, v0098);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-3];
    stack[-2] = v0098;
    v0130 = stack[-2];
    v0081 = stack[0];
    v0098 = qvalue(elt(env, 1)); /* nil */
    {
        popv(4);
        fn = elt(env, 5); /* dstr!-to!-alg */
        return (*qfnn(fn))(qenv(fn), 3, v0130, v0081, v0098);
    }
/* error exit handlers */
v0115:
    popv(4);
    return nil;
}



/* Code for negex */

static Lisp_Object CC_negex(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0166, v0097;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for negex");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push(v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0011);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0011;
/* end of prologue */
    stack[-2] = nil;
    goto v0025;

v0025:
    v0166 = stack[-1];
    if (v0166 == nil) goto v0029;
    v0166 = stack[-1];
    v0166 = qcar(v0166);
    stack[0] = qcar(v0166);
    v0166 = stack[-1];
    v0166 = qcar(v0166);
    v0166 = qcdr(v0166);
    fn = elt(env, 1); /* negf */
    v0097 = (*qfn1(fn))(qenv(fn), v0166);
    nil = C_nil;
    if (exception_pending()) goto v0070;
    env = stack[-3];
    v0166 = stack[-2];
    v0166 = acons(stack[0], v0097, v0166);
    nil = C_nil;
    if (exception_pending()) goto v0070;
    env = stack[-3];
    stack[-2] = v0166;
    v0166 = stack[-1];
    v0166 = qcdr(v0166);
    stack[-1] = v0166;
    goto v0025;

v0029:
    v0166 = stack[-2];
    {
        popv(4);
        fn = elt(env, 2); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0166);
    }
/* error exit handlers */
v0070:
    popv(4);
    return nil;
}



/* Code for add!-factor */

static Lisp_Object CC_addKfactor(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0156, v0169, v0186;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for add-factor");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0011,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0011;
/* end of prologue */
    v0156 = stack[0];
    v0156 = Lconsp(nil, v0156);
    env = stack[-2];
    if (v0156 == nil) goto v0097;
    v0169 = stack[-1];
    v0156 = stack[0];
    v0156 = qcar(v0156);
    v0156 = qcar(v0156);
    v0156 = (Lisp_Object)greaterp2(v0169, v0156);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    v0156 = v0156 ? lisp_true : nil;
    env = stack[-2];
    if (v0156 == nil) goto v0112;
    v0156 = qvalue(elt(env, 1)); /* nil */
    goto v0002;

v0002:
    v0169 = v0156;
    v0156 = v0169;
    if (v0156 == nil) goto v0205;
    stack[-1] = v0169;
    v0156 = v0169;
    v0156 = qcdr(v0156);
    v0156 = add1(v0156);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-2];
    v0156 = Lrplacd(nil, stack[-1], v0156);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }

v0205:
    v0186 = stack[-1];
    v0169 = (Lisp_Object)17; /* 1 */
    v0156 = stack[0];
    popv(3);
    return acons(v0186, v0169, v0156);

v0112:
    v0169 = stack[-1];
    v0156 = stack[0];
    v0156 = Lassoc(nil, v0169, v0156);
    goto v0002;

v0097:
    v0156 = qvalue(elt(env, 1)); /* nil */
    goto v0002;
/* error exit handlers */
v0146:
    popv(3);
    return nil;
}



/* Code for xquotient!-mod!-p */

static Lisp_Object MS_CDECL CC_xquotientKmodKp(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0234, v0235, v0134;
    Lisp_Object fn;
    Lisp_Object v0003, v0016, v0011;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "xquotient-mod-p");
    va_start(aa, nargs);
    v0011 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for xquotient-mod-p");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0003,v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0011,v0016,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0003;
    stack[-1] = v0016;
    stack[-2] = v0011;
/* end of prologue */
    v0234 = stack[-2];
    if (v0234 == nil) goto v0040;
    v0234 = stack[-2];
    if (!consp(v0234)) goto v0123;
    v0234 = stack[-2];
    v0234 = qcar(v0234);
    v0234 = (consp(v0234) ? nil : lisp_true);
    goto v0078;

v0078:
    if (v0234 == nil) goto v0097;
    v0234 = qvalue(elt(env, 2)); /* t */
    goto v0107;

v0107:
    if (v0234 == nil) goto v0149;
    v0234 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 3)) = v0234; /* exact!-quotient!-flag */
    { popv(5); return onevalue(v0234); }

v0149:
    v0234 = stack[-2];
    v0234 = qcar(v0234);
    v0234 = qcar(v0234);
    v0235 = qcdr(v0234);
    v0234 = stack[-1];
    v0234 = qcar(v0234);
    v0234 = qcar(v0234);
    v0234 = qcdr(v0234);
    if (equal(v0235, v0234)) goto v0204;
    v0234 = stack[-2];
    v0234 = qcar(v0234);
    v0234 = qcar(v0234);
    v0134 = qcar(v0234);
    v0234 = stack[-2];
    v0234 = qcar(v0234);
    v0234 = qcar(v0234);
    v0235 = qcdr(v0234);
    v0234 = stack[-1];
    v0234 = qcar(v0234);
    v0234 = qcar(v0234);
    v0234 = qcdr(v0234);
    v0234 = (Lisp_Object)(int32_t)((int32_t)v0235 - (int32_t)v0234 + TAG_FIXNUM);
    fn = elt(env, 4); /* mksp */
    stack[-3] = (*qfn2(fn))(qenv(fn), v0134, v0234);
    nil = C_nil;
    if (exception_pending()) goto v0132;
    env = stack[-4];
    v0234 = stack[-2];
    v0234 = qcar(v0234);
    v0235 = qcdr(v0234);
    v0234 = stack[-1];
    v0234 = qcar(v0234);
    v0234 = qcdr(v0234);
    fn = elt(env, 5); /* quotient!-mod!-p */
    v0234 = (*qfn2(fn))(qenv(fn), v0235, v0234);
    nil = C_nil;
    if (exception_pending()) goto v0132;
    env = stack[-4];
    v0234 = cons(stack[-3], v0234);
    nil = C_nil;
    if (exception_pending()) goto v0132;
    env = stack[-4];
    stack[-3] = v0234;
    v0234 = stack[-2];
    stack[-2] = qcdr(v0234);
    v0234 = stack[-3];
    fn = elt(env, 6); /* negate!-term */
    v0235 = (*qfn1(fn))(qenv(fn), v0234);
    nil = C_nil;
    if (exception_pending()) goto v0132;
    env = stack[-4];
    v0234 = stack[-1];
    v0234 = qcdr(v0234);
    fn = elt(env, 7); /* times!-term!-mod!-p */
    v0234 = (*qfn2(fn))(qenv(fn), v0235, v0234);
    nil = C_nil;
    if (exception_pending()) goto v0132;
    env = stack[-4];
    fn = elt(env, 8); /* plus!-mod!-p */
    v0234 = (*qfn2(fn))(qenv(fn), stack[-2], v0234);
    nil = C_nil;
    if (exception_pending()) goto v0132;
    env = stack[-4];
    stack[-2] = v0234;
    v0134 = stack[-2];
    v0235 = stack[-1];
    v0234 = stack[0];
    v0234 = CC_xquotientKmodKp(env, 3, v0134, v0235, v0234);
    nil = C_nil;
    if (exception_pending()) goto v0132;
    {
        Lisp_Object v0236 = stack[-3];
        popv(5);
        return cons(v0236, v0234);
    }

v0204:
    v0234 = stack[-2];
    v0234 = qcar(v0234);
    v0235 = qcdr(v0234);
    v0234 = stack[-1];
    v0234 = qcar(v0234);
    v0234 = qcdr(v0234);
    fn = elt(env, 5); /* quotient!-mod!-p */
    v0234 = (*qfn2(fn))(qenv(fn), v0235, v0234);
    nil = C_nil;
    if (exception_pending()) goto v0132;
    env = stack[-4];
    stack[0] = v0234;
    v0234 = stack[0];
    if (v0234 == nil) goto v0201;
    v0235 = stack[0];
    v0234 = stack[-1];
    fn = elt(env, 9); /* times!-mod!-p */
    v0234 = (*qfn2(fn))(qenv(fn), v0235, v0234);
    nil = C_nil;
    if (exception_pending()) goto v0132;
    env = stack[-4];
    fn = elt(env, 10); /* difference!-mod!-p */
    v0234 = (*qfn2(fn))(qenv(fn), stack[-2], v0234);
    nil = C_nil;
    if (exception_pending()) goto v0132;
    env = stack[-4];
    goto v0158;

v0158:
    if (v0234 == nil) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    v0234 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 3)) = v0234; /* exact!-quotient!-flag */
    { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }

v0201:
    v0234 = qvalue(elt(env, 2)); /* t */
    goto v0158;

v0097:
    v0234 = stack[-2];
    v0234 = qcar(v0234);
    v0234 = qcar(v0234);
    v0235 = qcar(v0234);
    v0234 = stack[0];
    if (equal(v0235, v0234)) goto v0130;
    v0234 = qvalue(elt(env, 2)); /* t */
    goto v0107;

v0130:
    v0234 = stack[-2];
    v0234 = qcar(v0234);
    v0234 = qcar(v0234);
    v0235 = qcdr(v0234);
    v0234 = stack[-1];
    v0234 = qcar(v0234);
    v0234 = qcar(v0234);
    v0234 = qcdr(v0234);
    v0234 = ((intptr_t)v0235 < (intptr_t)v0234) ? lisp_true : nil;
    goto v0107;

v0123:
    v0234 = qvalue(elt(env, 2)); /* t */
    goto v0078;

v0040:
    v0234 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0234); }
/* error exit handlers */
v0132:
    popv(5);
    return nil;
}



/* Code for domainp_list */

static Lisp_Object CC_domainp_list(Lisp_Object env,
                         Lisp_Object v0011)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0166, v0097;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for domainp_list");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0166 = v0011;
/* end of prologue */

v0182:
    v0097 = v0166;
    if (v0097 == nil) goto v0002;
    v0097 = v0166;
    v0097 = qcar(v0097);
    if (!consp(v0097)) goto v0109;
    v0097 = v0166;
    v0097 = qcar(v0097);
    v0097 = qcar(v0097);
    v0097 = (consp(v0097) ? nil : lisp_true);
    goto v0099;

v0099:
    if (v0097 == nil) goto v0165;
    v0166 = qcdr(v0166);
    goto v0182;

v0165:
    v0166 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v0166);

v0109:
    v0097 = qvalue(elt(env, 1)); /* t */
    goto v0099;

v0002:
    v0166 = qvalue(elt(env, 1)); /* t */
    return onevalue(v0166);
}



/* Code for find!-null!-space */

static Lisp_Object CC_findKnullKspace(Lisp_Object env,
                         Lisp_Object v0011, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0116, v0068, v0069, v0121;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for find-null-space");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0011,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0016;
    stack[-2] = v0011;
/* end of prologue */
    stack[-3] = qvalue(elt(env, 1)); /* null!-space!-basis */
    qvalue(elt(env, 1)) = nil; /* null!-space!-basis */
    v0116 = (Lisp_Object)17; /* 1 */
    stack[0] = v0116;
    goto v0099;

v0099:
    v0068 = stack[-1];
    v0116 = stack[0];
    v0116 = (Lisp_Object)(int32_t)((int32_t)v0068 - (int32_t)v0116 + TAG_FIXNUM);
    v0116 = ((intptr_t)(v0116) < 0 ? lisp_true : nil);
    if (v0116 == nil) goto v0112;
    v0069 = qvalue(elt(env, 1)); /* null!-space!-basis */
    v0068 = stack[-2];
    v0116 = stack[-1];
    fn = elt(env, 3); /* tidy!-up!-null!-vectors */
    v0116 = (*qfnn(fn))(qenv(fn), 3, v0069, v0068, v0116);
    nil = C_nil;
    if (exception_pending()) goto v0082;
    env = stack[-4];
    qvalue(elt(env, 1)) = stack[-3]; /* null!-space!-basis */
    { popv(5); return onevalue(v0116); }

v0112:
    v0121 = stack[0];
    v0069 = qvalue(elt(env, 1)); /* null!-space!-basis */
    v0068 = stack[-2];
    v0116 = stack[-1];
    fn = elt(env, 4); /* clear!-column */
    v0116 = (*qfnn(fn))(qenv(fn), 4, v0121, v0069, v0068, v0116);
    nil = C_nil;
    if (exception_pending()) goto v0082;
    env = stack[-4];
    qvalue(elt(env, 1)) = v0116; /* null!-space!-basis */
    v0116 = stack[0];
    v0116 = (Lisp_Object)((int32_t)(v0116) + 0x10);
    stack[0] = v0116;
    goto v0099;
/* error exit handlers */
v0082:
    env = stack[-4];
    qvalue(elt(env, 1)) = stack[-3]; /* null!-space!-basis */
    popv(5);
    return nil;
}



/* Code for ofsf_irl2atl */

static Lisp_Object MS_CDECL CC_ofsf_irl2atl(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0146, v0147, v0197;
    Lisp_Object fn;
    Lisp_Object v0003, v0016, v0011;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "ofsf_irl2atl");
    va_start(aa, nargs);
    v0011 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ofsf_irl2atl");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0003,v0016,v0011);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0011,v0016,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-3] = v0003;
    v0146 = v0016;
    stack[-4] = v0011;
/* end of prologue */
    stack[-5] = v0146;
    goto v0012;

v0012:
    v0146 = stack[-5];
    if (v0146 == nil) goto v0106;
    v0146 = stack[-5];
    v0146 = qcar(v0146);
    v0197 = stack[-4];
    v0147 = v0146;
    v0146 = stack[-3];
    fn = elt(env, 2); /* ofsf_ir2atl */
    v0146 = (*qfnn(fn))(qenv(fn), 3, v0197, v0147, v0146);
    nil = C_nil;
    if (exception_pending()) goto v0204;
    env = stack[-6];
    stack[-2] = v0146;
    v0146 = stack[-2];
    fn = elt(env, 3); /* lastpair */
    v0146 = (*qfn1(fn))(qenv(fn), v0146);
    nil = C_nil;
    if (exception_pending()) goto v0204;
    env = stack[-6];
    stack[-1] = v0146;
    v0146 = stack[-5];
    v0146 = qcdr(v0146);
    stack[-5] = v0146;
    v0146 = stack[-1];
    if (!consp(v0146)) goto v0012;
    else goto v0139;

v0139:
    v0146 = stack[-5];
    if (v0146 == nil) { Lisp_Object res = stack[-2]; popv(7); return onevalue(res); }
    stack[0] = stack[-1];
    v0146 = stack[-5];
    v0146 = qcar(v0146);
    v0197 = stack[-4];
    v0147 = v0146;
    v0146 = stack[-3];
    fn = elt(env, 2); /* ofsf_ir2atl */
    v0146 = (*qfnn(fn))(qenv(fn), 3, v0197, v0147, v0146);
    nil = C_nil;
    if (exception_pending()) goto v0204;
    env = stack[-6];
    v0146 = Lrplacd(nil, stack[0], v0146);
    nil = C_nil;
    if (exception_pending()) goto v0204;
    env = stack[-6];
    v0146 = stack[-1];
    fn = elt(env, 3); /* lastpair */
    v0146 = (*qfn1(fn))(qenv(fn), v0146);
    nil = C_nil;
    if (exception_pending()) goto v0204;
    env = stack[-6];
    stack[-1] = v0146;
    v0146 = stack[-5];
    v0146 = qcdr(v0146);
    stack[-5] = v0146;
    goto v0139;

v0106:
    v0146 = qvalue(elt(env, 1)); /* nil */
    { popv(7); return onevalue(v0146); }
/* error exit handlers */
v0204:
    popv(7);
    return nil;
}



setup_type const u40_setup[] =
{
    {"xremf",                   wrong_no_na,    wrong_no_nb,   (n_args *)CC_xremf},
    {"fs:minusp:",              CC_fsTminuspT,  too_many_1,    wrong_no_1},
    {"mo_deletecomp",           CC_mo_deletecomp,too_many_1,   wrong_no_1},
    {"flattens1",               CC_flattens1,   too_many_1,    wrong_no_1},
    {"algmodep",                CC_algmodep,    too_many_1,    wrong_no_1},
    {"cl_bnfsimpl",             too_few_2,      CC_cl_bnfsimpl,wrong_no_2},
    {"vdp_sugar",               CC_vdp_sugar,   too_many_1,    wrong_no_1},
    {"operator_fn",             CC_operator_fn, too_many_1,    wrong_no_1},
    {"simpsqrtsq",              CC_simpsqrtsq,  too_many_1,    wrong_no_1},
    {"rewrite",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_rewrite},
    {"dipcontenti",             CC_dipcontenti, too_many_1,    wrong_no_1},
    {"find_triangles1",         too_few_2,      CC_find_triangles1,wrong_no_2},
    {"mv-compact",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_mvKcompact},
    {"*g2lex",                  CC_Hg2lex,      too_many_1,    wrong_no_1},
    {"balance_mod",             too_few_2,      CC_balance_mod,wrong_no_2},
    {"mktag",                   wrong_no_na,    wrong_no_nb,   (n_args *)CC_mktag},
    {"pasf_leqp",               too_few_2,      CC_pasf_leqp,  wrong_no_2},
    {"ev_mtest?",               too_few_2,      CC_ev_mtestW,  wrong_no_2},
    {"ps:mkpow",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_psTmkpow},
    {"findhr",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_findhr},
    {"nestzerop:",              CC_nestzeropT,  too_many_1,    wrong_no_1},
    {"xreadlist",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_xreadlist},
    {"multiply-by-power-of-ten",too_few_2,      CC_multiplyKbyKpowerKofKten,wrong_no_2},
    {"*kp2q",                   too_few_2,      CC_Hkp2q,      wrong_no_2},
    {"toolongassignp",          CC_toolongassignp,too_many_1,  wrong_no_1},
    {"lndepends",               too_few_2,      CC_lndepends,  wrong_no_2},
    {"s_noparents",             CC_s_noparents, too_many_1,    wrong_no_1},
    {"fs:zerop:",               CC_fsTzeropT,   too_many_1,    wrong_no_1},
    {"derivative-mod-p",        CC_derivativeKmodKp,too_many_1,wrong_no_1},
    {"ofsf_decdeg2",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_ofsf_decdeg2},
    {"ofsf_smwrmknowl",         too_few_2,      CC_ofsf_smwrmknowl,wrong_no_2},
    {"ofsf_smeqtable",          too_few_2,      CC_ofsf_smeqtable,wrong_no_2},
    {"pasf_coeflst",            too_few_2,      CC_pasf_coeflst,wrong_no_2},
    {"quotfexf*1",              too_few_2,      CC_quotfexfH1, wrong_no_2},
    {"ldf-dep-var",             CC_ldfKdepKvar, too_many_1,    wrong_no_1},
    {"sc_rowscalarproduct",     too_few_2,      CC_sc_rowscalarproduct,wrong_no_2},
    {"dim<=deg",                CC_dimRMdeg,    too_many_1,    wrong_no_1},
    {"listpri",                 CC_listpri,     too_many_1,    wrong_no_1},
    {"decimal2internal",        too_few_2,      CC_decimal2internal,wrong_no_2},
    {"natnump",                 CC_natnump,     too_many_1,    wrong_no_1},
    {"strand-alg-top",          wrong_no_na,    wrong_no_nb,   (n_args *)CC_strandKalgKtop},
    {"negex",                   CC_negex,       too_many_1,    wrong_no_1},
    {"add-factor",              too_few_2,      CC_addKfactor, wrong_no_2},
    {"xquotient-mod-p",         wrong_no_na,    wrong_no_nb,   (n_args *)CC_xquotientKmodKp},
    {"domainp_list",            CC_domainp_list,too_many_1,    wrong_no_1},
    {"find-null-space",         too_few_2,      CC_findKnullKspace,wrong_no_2},
    {"ofsf_irl2atl",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_ofsf_irl2atl},
    {NULL, (one_args *)"u40", (two_args *)"9055 857544 1311985", 0}
};

/* end of generated code */

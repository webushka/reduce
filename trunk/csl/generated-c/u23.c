
/* $destdir\u23.c        Machine generated C code */

/* Signature: 00000000 21-Apr-2014 */

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
extern Lisp_Object used_space, avail_space, eof_symbol;
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
extern sem_t kara_sem1a, kara_sem1b, kara_sem1c,
             kara_sem2a, kara_sem2b, kara_sem2c;
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


/* Code for repeats */

static Lisp_Object CC_repeats(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0006, v0007, v0008;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for repeats");
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
    v0008 = nil;
    goto v0009;

v0009:
    v0006 = stack[0];
    if (v0006 == nil) goto v0010;
    v0006 = stack[0];
    v0007 = qcar(v0006);
    v0006 = stack[0];
    v0006 = qcdr(v0006);
    v0006 = Lmember(nil, v0007, v0006);
    if (v0006 == nil) goto v0011;
    v0006 = stack[0];
    v0006 = qcar(v0006);
    v0007 = v0008;
    v0006 = cons(v0006, v0007);
    nil = C_nil;
    if (exception_pending()) goto v0012;
    env = stack[-1];
    v0008 = v0006;
    v0006 = stack[0];
    v0006 = qcdr(v0006);
    stack[0] = v0006;
    goto v0009;

v0011:
    v0006 = stack[0];
    v0006 = qcdr(v0006);
    stack[0] = v0006;
    goto v0009;

v0010:
    v0006 = v0008;
    {
        popv(2);
        fn = elt(env, 1); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0006);
    }
/* error exit handlers */
v0012:
    popv(2);
    return nil;
}



/* Code for st_sorttree */

static Lisp_Object MS_CDECL CC_st_sorttree(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0017, v0018, v0019;
    Lisp_Object fn;
    Lisp_Object v0003, v0016, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "st_sorttree");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for st_sorttree");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0003,v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0016,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0017 = v0003;
    v0018 = v0016;
    v0019 = v0000;
/* end of prologue */
    fn = elt(env, 1); /* st_sorttree1 */
    v0017 = (*qfnn(fn))(qenv(fn), 3, v0019, v0018, v0017);
    errexit();
    v0017 = qcdr(v0017);
    return onevalue(v0017);
}



/* Code for quotfail!-in!-vector */

static Lisp_Object MS_CDECL CC_quotfailKinKvector(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0077, v0078, v0079, v0080, v0081, v0082, v0083, v0084;
    Lisp_Object fn;
    Lisp_Object v0028, v0003, v0016, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "quotfail-in-vector");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    v0028 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for quotfail-in-vector");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push4(v0028,v0003,v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0000,v0016,v0003,v0028);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0028;
    stack[-2] = v0003;
    v0079 = v0016;
    stack[-3] = v0000;
/* end of prologue */
    v0078 = v0079;
    v0077 = (Lisp_Object)1; /* 0 */
    if (((int32_t)(v0078)) < ((int32_t)(v0077))) { popv(6); return onevalue(v0079); }
    v0078 = stack[-1];
    v0077 = (Lisp_Object)1; /* 0 */
    if (((int32_t)(v0078)) < ((int32_t)(v0077))) goto v0018;
    v0078 = v0079;
    v0077 = stack[-1];
    if (((int32_t)(v0078)) < ((int32_t)(v0077))) goto v0085;
    v0078 = v0079;
    v0077 = stack[-1];
    v0077 = (Lisp_Object)(int32_t)((int32_t)v0078 - (int32_t)v0077 + TAG_FIXNUM);
    stack[-4] = v0077;
    v0077 = stack[-4];
    stack[0] = v0077;
    goto v0086;

v0086:
    v0077 = stack[0];
    v0077 = ((intptr_t)(v0077) < 0 ? lisp_true : nil);
    if (v0077 == nil) goto v0087;
    v0077 = (Lisp_Object)1; /* 0 */
    stack[0] = v0077;
    goto v0088;

v0088:
    v0077 = stack[-1];
    v0078 = (Lisp_Object)((int32_t)(v0077) - 0x10);
    v0077 = stack[0];
    v0077 = (Lisp_Object)(int32_t)((int32_t)v0078 - (int32_t)v0077 + TAG_FIXNUM);
    v0077 = ((intptr_t)(v0077) < 0 ? lisp_true : nil);
    if (v0077 == nil) goto v0089;
    v0077 = (Lisp_Object)1; /* 0 */
    v0082 = v0077;
    goto v0090;

v0090:
    v0078 = stack[-4];
    v0077 = v0082;
    v0077 = (Lisp_Object)(int32_t)((int32_t)v0078 - (int32_t)v0077 + TAG_FIXNUM);
    v0077 = ((intptr_t)(v0077) < 0 ? lisp_true : nil);
    if (!(v0077 == nil)) { Lisp_Object res = stack[-4]; popv(6); return onevalue(res); }
    v0081 = stack[-3];
    v0080 = v0082;
    v0079 = stack[-3];
    v0078 = stack[-1];
    v0077 = v0082;
    v0077 = (Lisp_Object)(int32_t)((int32_t)v0078 + (int32_t)v0077 - TAG_FIXNUM);
    v0077 = *(Lisp_Object *)((char *)v0079 + (CELL-TAG_VECTOR) + ((int32_t)v0077/(16/CELL)));
    *(Lisp_Object *)((char *)v0081 + (CELL-TAG_VECTOR) + ((int32_t)v0080/(16/CELL))) = v0077;
    v0077 = v0082;
    v0077 = (Lisp_Object)((int32_t)(v0077) + 0x10);
    v0082 = v0077;
    goto v0090;

v0089:
    v0078 = stack[-3];
    v0077 = stack[0];
    v0078 = *(Lisp_Object *)((char *)v0078 + (CELL-TAG_VECTOR) + ((int32_t)v0077/(16/CELL)));
    v0077 = (Lisp_Object)1; /* 0 */
    if (v0078 == v0077) goto v0091;
    v0077 = elt(env, 4); /* "Quotient not exact in QUOTFAIL!-IN!-VECTOR" 
*/
    fn = elt(env, 5); /* errorf */
    v0077 = (*qfn1(fn))(qenv(fn), v0077);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    env = stack[-5];
    goto v0091;

v0091:
    v0077 = stack[0];
    v0077 = (Lisp_Object)((int32_t)(v0077) + 0x10);
    stack[0] = v0077;
    goto v0088;

v0087:
    v0079 = stack[-3];
    v0078 = stack[-1];
    v0077 = stack[0];
    v0077 = (Lisp_Object)(int32_t)((int32_t)v0078 + (int32_t)v0077 - TAG_FIXNUM);
    v0079 = *(Lisp_Object *)((char *)v0079 + (CELL-TAG_VECTOR) + ((int32_t)v0077/(16/CELL)));
    v0078 = stack[-2];
    v0077 = stack[-1];
    v0077 = *(Lisp_Object *)((char *)v0078 + (CELL-TAG_VECTOR) + ((int32_t)v0077/(16/CELL)));
    v0077 = Lmodular_quotient(nil, v0079, v0077);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    env = stack[-5];
    v0084 = v0077;
    v0077 = (Lisp_Object)1; /* 0 */
    v0083 = v0077;
    goto v0093;

v0093:
    v0077 = stack[-1];
    v0078 = (Lisp_Object)((int32_t)(v0077) - 0x10);
    v0077 = v0083;
    v0077 = (Lisp_Object)(int32_t)((int32_t)v0078 - (int32_t)v0077 + TAG_FIXNUM);
    v0077 = ((intptr_t)(v0077) < 0 ? lisp_true : nil);
    if (v0077 == nil) goto v0094;
    v0079 = stack[-3];
    v0078 = stack[-1];
    v0077 = stack[0];
    v0077 = (Lisp_Object)(int32_t)((int32_t)v0078 + (int32_t)v0077 - TAG_FIXNUM);
    v0078 = v0084;
    *(Lisp_Object *)((char *)v0079 + (CELL-TAG_VECTOR) + ((int32_t)v0077/(16/CELL))) = v0078;
    v0077 = stack[0];
    v0077 = (Lisp_Object)((int32_t)(v0077) - 0x10);
    stack[0] = v0077;
    goto v0086;

v0094:
    v0082 = stack[-3];
    v0078 = stack[0];
    v0077 = v0083;
    v0081 = (Lisp_Object)(int32_t)((int32_t)v0078 + (int32_t)v0077 - TAG_FIXNUM);
    v0079 = stack[-3];
    v0078 = stack[0];
    v0077 = v0083;
    v0077 = (Lisp_Object)(int32_t)((int32_t)v0078 + (int32_t)v0077 - TAG_FIXNUM);
    v0080 = *(Lisp_Object *)((char *)v0079 + (CELL-TAG_VECTOR) + ((int32_t)v0077/(16/CELL)));
    v0079 = v0084;
    v0078 = stack[-2];
    v0077 = v0083;
    v0077 = *(Lisp_Object *)((char *)v0078 + (CELL-TAG_VECTOR) + ((int32_t)v0077/(16/CELL)));
    v0077 = Lmodular_times(nil, v0079, v0077);
    env = stack[-5];
    {   int32_t w = int_of_fixnum(v0080) - int_of_fixnum(v0077);
        if (w < 0) w += current_modulus;
        v0077 = fixnum_of_int(w);
    }
    *(Lisp_Object *)((char *)v0082 + (CELL-TAG_VECTOR) + ((int32_t)v0081/(16/CELL))) = v0077;
    v0077 = v0083;
    v0077 = (Lisp_Object)((int32_t)(v0077) + 0x10);
    v0083 = v0077;
    goto v0093;

v0085:
    v0077 = elt(env, 2); /* "Bad degrees in QUOTFAIL-IN-VECTOR" */
    {
        popv(6);
        fn = elt(env, 5); /* errorf */
        return (*qfn1(fn))(qenv(fn), v0077);
    }

v0018:
    v0077 = elt(env, 1); /* "Attempt to divide by zero" */
    {
        popv(6);
        fn = elt(env, 5); /* errorf */
        return (*qfn1(fn))(qenv(fn), v0077);
    }
/* error exit handlers */
v0092:
    popv(6);
    return nil;
}



/* Code for open */

static Lisp_Object CC_open(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0108, v0109, v0110, v0111;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for open");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0110 = v0016;
    v0111 = v0000;
/* end of prologue */
    v0109 = v0110;
    v0108 = elt(env, 1); /* input */
    if (v0109 == v0108) goto v0076;
    v0109 = v0110;
    v0108 = elt(env, 2); /* output */
    if (v0109 == v0108) goto v0001;
    v0109 = v0110;
    v0108 = elt(env, 3); /* append */
    if (v0109 == v0108) goto v0112;
    v0108 = elt(env, 4); /* "bad direction ~A in open" */
    v0109 = v0110;
    {
        popv(2);
        fn = elt(env, 5); /* error */
        return (*qfn2(fn))(qenv(fn), v0108, v0109);
    }

v0112:
    stack[0] = v0111;
    v0109 = (Lisp_Object)33; /* 2 */
    v0108 = (Lisp_Object)641; /* 40 */
    v0108 = plus2(v0109, v0108);
    nil = C_nil;
    if (exception_pending()) goto v0070;
    env = stack[-1];
    {
        Lisp_Object v0068 = stack[0];
        popv(2);
        fn = elt(env, 6); /* internal!-open */
        return (*qfn2(fn))(qenv(fn), v0068, v0108);
    }

v0001:
    stack[0] = v0111;
    v0109 = (Lisp_Object)33; /* 2 */
    v0108 = (Lisp_Object)833; /* 52 */
    v0108 = plus2(v0109, v0108);
    nil = C_nil;
    if (exception_pending()) goto v0070;
    env = stack[-1];
    {
        Lisp_Object v0063 = stack[0];
        popv(2);
        fn = elt(env, 6); /* internal!-open */
        return (*qfn2(fn))(qenv(fn), v0063, v0108);
    }

v0076:
    v0109 = v0111;
    v0108 = (Lisp_Object)1041; /* 65 */
    {
        popv(2);
        fn = elt(env, 6); /* internal!-open */
        return (*qfn2(fn))(qenv(fn), v0109, v0108);
    }
/* error exit handlers */
v0070:
    popv(2);
    return nil;
}



/* Code for simpiden */

static Lisp_Object CC_simpiden(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0175, v0176, v0177;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for simpiden");
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
    stack[0] = v0000;
/* end of prologue */
    stack[-5] = nil;
    stack[-4] = nil;
    v0175 = stack[0];
    v0175 = qcar(v0175);
    stack[-7] = v0175;
    v0175 = stack[0];
    v0175 = qcdr(v0175);
    stack[0] = v0175;
    v0176 = stack[-7];
    v0175 = elt(env, 1); /* !:rn!: */
    v0175 = get(v0176, v0175);
    env = stack[-8];
    if (!(v0175 == nil)) goto v0178;
    v0176 = stack[-7];
    v0175 = elt(env, 2); /* !:rd!: */
    v0175 = get(v0176, v0175);
    env = stack[-8];
    if (!(v0175 == nil)) goto v0178;

v0076:
    v0175 = stack[0];
    if (v0175 == nil) goto v0179;
    v0175 = stack[0];
    v0176 = qcar(v0175);
    v0175 = elt(env, 3); /* list */
    if (!consp(v0176)) goto v0180;
    v0176 = qcar(v0176);
    if (!(v0176 == v0175)) goto v0180;
    v0175 = stack[0];
    v0175 = qcdr(v0175);
    v0175 = (v0175 == nil ? lisp_true : nil);
    goto v0086;

v0086:
    if (v0175 == nil) goto v0179;
    stack[-1] = stack[-7];
    v0175 = stack[0];
    v0175 = qcar(v0175);
    fn = elt(env, 14); /* aeval */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    v0176 = list2(stack[-1], v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    v0175 = (Lisp_Object)17; /* 1 */
    {
        popv(9);
        fn = elt(env, 15); /* mksq */
        return (*qfn2(fn))(qenv(fn), v0176, v0175);
    }

v0179:
    v0175 = stack[0];
    stack[-3] = v0175;
    v0175 = stack[-3];
    if (v0175 == nil) goto v0182;
    v0175 = stack[-3];
    v0175 = qcar(v0175);
    fn = elt(env, 14); /* aeval */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    v0175 = ncons(v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[-1] = v0175;
    stack[-2] = v0175;
    goto v0064;

v0064:
    v0175 = stack[-3];
    v0175 = qcdr(v0175);
    stack[-3] = v0175;
    v0175 = stack[-3];
    if (v0175 == nil) goto v0183;
    stack[0] = stack[-1];
    v0175 = stack[-3];
    v0175 = qcar(v0175);
    fn = elt(env, 14); /* aeval */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    v0175 = ncons(v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    v0175 = Lrplacd(nil, stack[0], v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    v0175 = stack[-1];
    v0175 = qcdr(v0175);
    stack[-1] = v0175;
    goto v0064;

v0183:
    v0175 = stack[-2];
    goto v0066;

v0066:
    stack[-6] = v0175;
    v0175 = stack[-6];
    stack[-3] = v0175;
    v0175 = stack[-3];
    if (v0175 == nil) goto v0184;
    v0175 = stack[-3];
    v0175 = qcar(v0175);
    v0177 = v0175;
    v0176 = v0177;
    v0175 = elt(env, 5); /* !*sq */
    if (!consp(v0176)) goto v0049;
    v0176 = qcar(v0176);
    if (!(v0176 == v0175)) goto v0049;
    v0175 = v0177;
    v0175 = qcdr(v0175);
    v0175 = qcar(v0175);
    fn = elt(env, 16); /* prepsqxx */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    goto v0056;

v0056:
    v0175 = ncons(v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[-1] = v0175;
    stack[-2] = v0175;
    goto v0185;

v0185:
    v0175 = stack[-3];
    v0175 = qcdr(v0175);
    stack[-3] = v0175;
    v0175 = stack[-3];
    if (v0175 == nil) goto v0039;
    stack[0] = stack[-1];
    v0175 = stack[-3];
    v0175 = qcar(v0175);
    v0177 = v0175;
    v0176 = v0177;
    v0175 = elt(env, 5); /* !*sq */
    if (!consp(v0176)) goto v0186;
    v0176 = qcar(v0176);
    if (!(v0176 == v0175)) goto v0186;
    v0175 = v0177;
    v0175 = qcdr(v0175);
    v0175 = qcar(v0175);
    fn = elt(env, 16); /* prepsqxx */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    goto v0187;

v0187:
    v0175 = ncons(v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    v0175 = Lrplacd(nil, stack[0], v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    v0175 = stack[-1];
    v0175 = qcdr(v0175);
    stack[-1] = v0175;
    goto v0185;

v0186:
    v0175 = v0177;
    if (is_number(v0175)) goto v0188;
    v0175 = v0177;
    goto v0187;

v0188:
    v0175 = v0177;
    goto v0187;

v0039:
    v0175 = stack[-2];
    goto v0189;

v0189:
    stack[0] = v0175;
    v0175 = stack[0];
    if (v0175 == nil) goto v0020;
    v0175 = stack[0];
    v0176 = qcar(v0175);
    v0175 = (Lisp_Object)1; /* 0 */
    if (v0176 == v0175) goto v0190;
    v0175 = qvalue(elt(env, 4)); /* nil */
    goto v0032;

v0032:
    if (v0175 == nil) goto v0020;
    v0176 = qvalue(elt(env, 4)); /* nil */
    v0175 = (Lisp_Object)17; /* 1 */
    popv(9);
    return cons(v0176, v0175);

v0020:
    v0176 = stack[-7];
    v0175 = stack[0];
    v0175 = cons(v0176, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[0] = v0175;
    v0175 = stack[-7];
    if (!symbolp(v0175)) v0175 = nil;
    else { v0175 = qfastgets(v0175);
           if (v0175 != nil) { v0175 = elt(v0175, 0); /* noncom */
#ifdef RECORD_GET
             if (v0175 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v0175 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v0175 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v0175 == SPID_NOPROP) v0175 = nil; else v0175 = lisp_true; }}
#endif
    if (v0175 == nil) goto v0081;
    v0175 = qvalue(elt(env, 6)); /* t */
    qvalue(elt(env, 9)) = v0175; /* ncmp!* */
    goto v0081;

v0081:
    v0175 = qvalue(elt(env, 10)); /* subfg!* */
    if (v0175 == nil) goto v0191;
    v0176 = stack[-7];
    v0175 = elt(env, 11); /* linear */
    v0175 = Lflagp(nil, v0176, v0175);
    env = stack[-8];
    if (v0175 == nil) goto v0192;
    v0175 = stack[0];
    fn = elt(env, 17); /* formlnr */
    v0176 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[-4] = v0176;
    v0175 = stack[0];
    v0175 = Lneq(nil, v0176, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    goto v0193;

v0193:
    if (v0175 == nil) goto v0194;
    v0175 = stack[-4];
    {
        popv(9);
        fn = elt(env, 18); /* simp */
        return (*qfn1(fn))(qenv(fn), v0175);
    }

v0194:
    v0175 = stack[0];
    fn = elt(env, 19); /* opmtch */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[-4] = v0175;
    if (v0175 == nil) goto v0191;
    v0175 = stack[-4];
    {
        popv(9);
        fn = elt(env, 18); /* simp */
        return (*qfn1(fn))(qenv(fn), v0175);
    }

v0191:
    v0175 = stack[-7];
    if (!symbolp(v0175)) v0175 = nil;
    else { v0175 = qfastgets(v0175);
           if (v0175 != nil) { v0175 = elt(v0175, 43); /* symmetric */
#ifdef RECORD_GET
             if (v0175 == SPID_NOPROP)
                record_get(elt(fastget_names, 43), 0),
                v0175 = nil;
             else record_get(elt(fastget_names, 43), 1),
                v0175 = lisp_true; }
           else record_get(elt(fastget_names, 43), 0); }
#else
             if (v0175 == SPID_NOPROP) v0175 = nil; else v0175 = lisp_true; }}
#endif
    if (v0175 == nil) goto v0195;
    stack[-1] = stack[-7];
    v0175 = stack[0];
    v0175 = qcdr(v0175);
    fn = elt(env, 20); /* ordn */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    v0175 = cons(stack[-1], v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[0] = v0175;
    goto v0196;

v0196:
    v0176 = stack[-7];
    v0175 = elt(env, 13); /* even */
    v0175 = Lflagp(nil, v0176, v0175);
    env = stack[-8];
    if (v0175 == nil) goto v0197;
    v0175 = qvalue(elt(env, 6)); /* t */
    goto v0198;

v0198:
    if (v0175 == nil) goto v0199;
    v0175 = stack[-6];
    if (v0175 == nil) goto v0200;
    v0175 = stack[-6];
    v0175 = qcar(v0175);
    fn = elt(env, 18); /* simp */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[-6] = v0175;
    v0175 = qcar(v0175);
    fn = elt(env, 21); /* minusf */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    goto v0201;

v0201:
    if (v0175 == nil) goto v0202;
    v0176 = stack[-7];
    v0175 = elt(env, 13); /* even */
    v0175 = Lflagp(nil, v0176, v0175);
    env = stack[-8];
    if (!(v0175 == nil)) goto v0203;
    v0175 = stack[-5];
    v0175 = (v0175 == nil ? lisp_true : nil);
    stack[-5] = v0175;
    goto v0203;

v0203:
    stack[-1] = stack[-7];
    v0175 = stack[-6];
    fn = elt(env, 22); /* negsq */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    fn = elt(env, 16); /* prepsqxx */
    v0176 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    v0175 = stack[0];
    v0175 = qcdr(v0175);
    v0175 = qcdr(v0175);
    v0175 = list2star(stack[-1], v0176, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[0] = v0175;
    v0175 = stack[0];
    fn = elt(env, 19); /* opmtch */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[-4] = v0175;
    if (v0175 == nil) goto v0202;
    v0175 = stack[-5];
    if (v0175 == nil) goto v0204;
    v0175 = stack[-4];
    fn = elt(env, 18); /* simp */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    {
        popv(9);
        fn = elt(env, 22); /* negsq */
        return (*qfn1(fn))(qenv(fn), v0175);
    }

v0204:
    v0175 = stack[-4];
    {
        popv(9);
        fn = elt(env, 18); /* simp */
        return (*qfn1(fn))(qenv(fn), v0175);
    }

v0202:
    v0176 = stack[0];
    v0175 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 15); /* mksq */
    v0175 = (*qfn2(fn))(qenv(fn), v0176, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[0] = v0175;
    v0175 = stack[-5];
    if (v0175 == nil) { Lisp_Object res = stack[0]; popv(9); return onevalue(res); }
    v0175 = stack[0];
    {
        popv(9);
        fn = elt(env, 22); /* negsq */
        return (*qfn1(fn))(qenv(fn), v0175);
    }

v0200:
    v0175 = qvalue(elt(env, 4)); /* nil */
    goto v0201;

v0199:
    v0175 = qvalue(elt(env, 4)); /* nil */
    goto v0201;

v0197:
    v0176 = stack[-7];
    v0175 = elt(env, 7); /* odd */
    v0175 = Lflagp(nil, v0176, v0175);
    env = stack[-8];
    goto v0198;

v0195:
    v0176 = stack[-7];
    v0175 = elt(env, 12); /* antisymmetric */
    v0175 = Lflagp(nil, v0176, v0175);
    env = stack[-8];
    if (v0175 == nil) goto v0196;
    v0175 = stack[0];
    v0175 = qcdr(v0175);
    fn = elt(env, 23); /* repeats */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    if (v0175 == nil) goto v0205;
    v0176 = qvalue(elt(env, 4)); /* nil */
    v0175 = (Lisp_Object)17; /* 1 */
    popv(9);
    return cons(v0176, v0175);

v0205:
    v0175 = stack[0];
    v0175 = qcdr(v0175);
    fn = elt(env, 20); /* ordn */
    v0176 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[-4] = v0176;
    v0175 = stack[0];
    v0175 = qcdr(v0175);
    fn = elt(env, 24); /* permp */
    v0175 = (*qfn2(fn))(qenv(fn), v0176, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    if (!(v0175 == nil)) goto v0206;
    v0175 = qvalue(elt(env, 6)); /* t */
    stack[-5] = v0175;
    goto v0206;

v0206:
    v0175 = stack[0];
    v0176 = qcar(v0175);
    v0175 = stack[-4];
    v0175 = cons(v0176, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[-7] = v0175;
    v0176 = stack[-4];
    v0175 = stack[0];
    v0175 = qcdr(v0175);
    if (equal(v0176, v0175)) goto v0207;
    v0175 = stack[-7];
    fn = elt(env, 19); /* opmtch */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[-4] = v0175;
    goto v0208;

v0208:
    if (v0175 == nil) goto v0209;
    v0175 = stack[-5];
    if (v0175 == nil) goto v0210;
    v0175 = stack[-4];
    fn = elt(env, 18); /* simp */
    v0175 = (*qfn1(fn))(qenv(fn), v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    {
        popv(9);
        fn = elt(env, 22); /* negsq */
        return (*qfn1(fn))(qenv(fn), v0175);
    }

v0210:
    v0175 = stack[-4];
    {
        popv(9);
        fn = elt(env, 18); /* simp */
        return (*qfn1(fn))(qenv(fn), v0175);
    }

v0209:
    v0175 = stack[-7];
    stack[0] = v0175;
    goto v0196;

v0207:
    v0175 = qvalue(elt(env, 4)); /* nil */
    goto v0208;

v0192:
    v0175 = qvalue(elt(env, 4)); /* nil */
    goto v0193;

v0190:
    v0176 = stack[-7];
    v0175 = elt(env, 7); /* odd */
    v0175 = Lflagp(nil, v0176, v0175);
    env = stack[-8];
    if (v0175 == nil) goto v0022;
    v0176 = stack[-7];
    v0175 = elt(env, 8); /* nonzero */
    v0175 = Lflagp(nil, v0176, v0175);
    env = stack[-8];
    v0175 = (v0175 == nil ? lisp_true : nil);
    goto v0032;

v0022:
    v0175 = qvalue(elt(env, 4)); /* nil */
    goto v0032;

v0049:
    v0175 = v0177;
    if (is_number(v0175)) goto v0053;
    v0175 = v0177;
    goto v0056;

v0053:
    v0175 = v0177;
    goto v0056;

v0184:
    v0175 = qvalue(elt(env, 4)); /* nil */
    goto v0189;

v0182:
    v0175 = qvalue(elt(env, 4)); /* nil */
    goto v0066;

v0180:
    v0175 = qvalue(elt(env, 4)); /* nil */
    goto v0086;

v0178:
    v0176 = stack[-7];
    v0175 = stack[0];
    fn = elt(env, 25); /* valuechk */
    v0175 = (*qfn2(fn))(qenv(fn), v0176, v0175);
    nil = C_nil;
    if (exception_pending()) goto v0181;
    env = stack[-8];
    stack[-6] = v0175;
    if (v0175 == nil) goto v0076;
    else { Lisp_Object res = stack[-6]; popv(9); return onevalue(res); }
/* error exit handlers */
v0181:
    popv(9);
    return nil;
}



/* Code for wusort */

static Lisp_Object CC_wusort(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0211, v0212;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for wusort");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0211 = v0000;
/* end of prologue */
    v0212 = v0211;
    v0211 = elt(env, 1); /* wulessp!* */
    {
        fn = elt(env, 2); /* sort */
        return (*qfn2(fn))(qenv(fn), v0212, v0211);
    }
}



/* Code for simpcv */

static Lisp_Object CC_simpcv(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0219, v0220;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for simpcv");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0000;
/* end of prologue */
    v0219 = stack[-1];
    v0220 = Llength(nil, v0219);
    nil = C_nil;
    if (exception_pending()) goto v0108;
    env = stack[-2];
    v0219 = (Lisp_Object)49; /* 3 */
    if (v0220 == v0219) goto v0106;
    v0220 = elt(env, 1); /* "Invalid number of edges in vertex" */
    v0219 = stack[-1];
    v0219 = list2(v0220, v0219);
    nil = C_nil;
    if (exception_pending()) goto v0108;
    env = stack[-2];
    {
        popv(3);
        fn = elt(env, 4); /* cerror */
        return (*qfn1(fn))(qenv(fn), v0219);
    }

v0106:
    v0220 = elt(env, 2); /* simpcgraph */
    v0219 = qvalue(elt(env, 3)); /* mul!* */
    v0219 = Lmemq(nil, v0220, v0219);
    if (!(v0219 == nil)) goto v0171;
    v0220 = qvalue(elt(env, 3)); /* mul!* */
    v0219 = elt(env, 2); /* simpcgraph */
    fn = elt(env, 5); /* aconc!* */
    v0219 = (*qfn2(fn))(qenv(fn), v0220, v0219);
    nil = C_nil;
    if (exception_pending()) goto v0108;
    env = stack[-2];
    qvalue(elt(env, 3)) = v0219; /* mul!* */
    goto v0171;

v0171:
    v0220 = stack[0];
    v0219 = stack[-1];
    v0220 = cons(v0220, v0219);
    nil = C_nil;
    if (exception_pending()) goto v0108;
    env = stack[-2];
    v0219 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 6); /* to */
    v0220 = (*qfn2(fn))(qenv(fn), v0220, v0219);
    nil = C_nil;
    if (exception_pending()) goto v0108;
    env = stack[-2];
    v0219 = (Lisp_Object)17; /* 1 */
    v0219 = cons(v0220, v0219);
    nil = C_nil;
    if (exception_pending()) goto v0108;
    env = stack[-2];
    v0220 = ncons(v0219);
    nil = C_nil;
    if (exception_pending()) goto v0108;
    v0219 = (Lisp_Object)17; /* 1 */
    popv(3);
    return cons(v0220, v0219);
/* error exit handlers */
v0108:
    popv(3);
    return nil;
}



/* Code for dvfsf_simplat1 */

static Lisp_Object CC_dvfsf_simplat1(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0097, v0224, v0041;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dvfsf_simplat1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0016;
    stack[-2] = v0000;
/* end of prologue */
    v0097 = stack[-2];
    fn = elt(env, 4); /* dvfsf_op */
    v0097 = (*qfn1(fn))(qenv(fn), v0097);
    nil = C_nil;
    if (exception_pending()) goto v0099;
    env = stack[-4];
    v0041 = v0097;
    v0224 = v0041;
    v0097 = elt(env, 1); /* equal */
    if (v0224 == v0097) goto v0014;
    v0224 = v0041;
    v0097 = elt(env, 3); /* neq */
    v0097 = (v0224 == v0097 ? lisp_true : nil);
    goto v0013;

v0013:
    if (v0097 == nil) goto v0225;
    stack[0] = v0041;
    v0097 = stack[-2];
    fn = elt(env, 5); /* dvfsf_arg2l */
    v0224 = (*qfn1(fn))(qenv(fn), v0097);
    nil = C_nil;
    if (exception_pending()) goto v0099;
    env = stack[-4];
    v0097 = stack[-1];
    {
        Lisp_Object v0180 = stack[0];
        popv(5);
        fn = elt(env, 6); /* dvfsf_safield */
        return (*qfnn(fn))(qenv(fn), 3, v0180, v0224, v0097);
    }

v0225:
    stack[-3] = v0041;
    v0097 = stack[-2];
    fn = elt(env, 5); /* dvfsf_arg2l */
    stack[0] = (*qfn1(fn))(qenv(fn), v0097);
    nil = C_nil;
    if (exception_pending()) goto v0099;
    env = stack[-4];
    v0097 = stack[-2];
    fn = elt(env, 7); /* dvfsf_arg2r */
    v0224 = (*qfn1(fn))(qenv(fn), v0097);
    nil = C_nil;
    if (exception_pending()) goto v0099;
    env = stack[-4];
    v0097 = stack[-1];
    {
        Lisp_Object v0216 = stack[-3];
        Lisp_Object v0217 = stack[0];
        popv(5);
        fn = elt(env, 8); /* dvfsf_saval */
        return (*qfnn(fn))(qenv(fn), 4, v0216, v0217, v0224, v0097);
    }

v0014:
    v0097 = qvalue(elt(env, 2)); /* t */
    goto v0013;
/* error exit handlers */
v0099:
    popv(5);
    return nil;
}



/* Code for diff!-k!-times!-mod!-p */

static Lisp_Object MS_CDECL CC_diffKkKtimesKmodKp(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0237, v0238, v0239;
    Lisp_Object fn;
    Lisp_Object v0003, v0016, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "diff-k-times-mod-p");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for diff-k-times-mod-p");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0003,v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0016,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0003;
    stack[-2] = v0016;
    stack[-3] = v0000;
/* end of prologue */
    v0237 = stack[-3];
    if (!consp(v0237)) goto v0211;
    v0237 = stack[-3];
    v0237 = qcar(v0237);
    v0237 = (consp(v0237) ? nil : lisp_true);
    goto v0191;

v0191:
    if (v0237 == nil) goto v0218;
    v0237 = qvalue(elt(env, 2)); /* nil */
    { popv(6); return onevalue(v0237); }

v0218:
    v0237 = stack[-3];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0238 = qcar(v0237);
    v0237 = stack[-1];
    if (equal(v0238, v0237)) goto v0102;
    v0237 = stack[-3];
    v0237 = qcar(v0237);
    stack[-4] = qcar(v0237);
    v0237 = stack[-3];
    v0237 = qcar(v0237);
    v0239 = qcdr(v0237);
    v0238 = stack[-2];
    v0237 = stack[-1];
    stack[0] = CC_diffKkKtimesKmodKp(env, 3, v0239, v0238, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0240;
    env = stack[-5];
    v0237 = stack[-3];
    v0239 = qcdr(v0237);
    v0238 = stack[-2];
    v0237 = stack[-1];
    v0237 = CC_diffKkKtimesKmodKp(env, 3, v0239, v0238, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0240;
    env = stack[-5];
    {
        Lisp_Object v0241 = stack[-4];
        Lisp_Object v0242 = stack[0];
        popv(6);
        fn = elt(env, 3); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v0241, v0242, v0237);
    }

v0102:
    v0237 = stack[-3];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0238 = qcdr(v0237);
    v0237 = stack[-2];
    v0237 = (Lisp_Object)lessp2(v0238, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0240;
    v0237 = v0237 ? lisp_true : nil;
    env = stack[-5];
    if (v0237 == nil) goto v0072;
    v0237 = qvalue(elt(env, 2)); /* nil */
    { popv(6); return onevalue(v0237); }

v0072:
    v0237 = stack[-3];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0238 = qcdr(v0237);
    v0237 = stack[-2];
    if (equal(v0238, v0237)) goto v0179;
    stack[0] = stack[-1];
    v0237 = stack[-3];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0238 = qcdr(v0237);
    v0237 = stack[-2];
    v0237 = difference2(v0238, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0240;
    env = stack[-5];
    fn = elt(env, 4); /* mksp */
    stack[-4] = (*qfn2(fn))(qenv(fn), stack[0], v0237);
    nil = C_nil;
    if (exception_pending()) goto v0240;
    env = stack[-5];
    v0237 = stack[-3];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0238 = qcdr(v0237);
    v0237 = stack[-2];
    fn = elt(env, 5); /* binomial!-coefft!-mod!-p */
    v0238 = (*qfn2(fn))(qenv(fn), v0238, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0240;
    env = stack[-5];
    v0237 = stack[-3];
    v0237 = qcar(v0237);
    v0237 = qcdr(v0237);
    fn = elt(env, 6); /* times!-mod!-p */
    stack[0] = (*qfn2(fn))(qenv(fn), v0238, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0240;
    env = stack[-5];
    v0237 = stack[-3];
    v0239 = qcdr(v0237);
    v0238 = stack[-2];
    v0237 = stack[-1];
    v0237 = CC_diffKkKtimesKmodKp(env, 3, v0239, v0238, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0240;
    env = stack[-5];
    {
        Lisp_Object v0243 = stack[-4];
        Lisp_Object v0244 = stack[0];
        popv(6);
        fn = elt(env, 3); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v0243, v0244, v0237);
    }

v0179:
    v0237 = stack[-3];
    v0237 = qcar(v0237);
    v0237 = qcdr(v0237);
    { popv(6); return onevalue(v0237); }

v0211:
    v0237 = qvalue(elt(env, 1)); /* t */
    goto v0191;
/* error exit handlers */
v0240:
    popv(6);
    return nil;
}



/* Code for matrixrowom */

static Lisp_Object CC_matrixrowom(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0173;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for matrixrowom");
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
    v0173 = stack[0];
    if (v0173 == nil) goto v0009;
    v0173 = elt(env, 1); /* "<OMA>" */
    fn = elt(env, 6); /* printout */
    v0173 = (*qfn1(fn))(qenv(fn), v0173);
    nil = C_nil;
    if (exception_pending()) goto v0085;
    env = stack[-1];
    v0173 = qvalue(elt(env, 2)); /* t */
    fn = elt(env, 7); /* indent!* */
    v0173 = (*qfn1(fn))(qenv(fn), v0173);
    nil = C_nil;
    if (exception_pending()) goto v0085;
    env = stack[-1];
    v0173 = elt(env, 3); /* "<OMS cd=""linalg1"" name=""matrixrow""/>" 
*/
    fn = elt(env, 6); /* printout */
    v0173 = (*qfn1(fn))(qenv(fn), v0173);
    nil = C_nil;
    if (exception_pending()) goto v0085;
    env = stack[-1];
    v0173 = stack[0];
    v0173 = qcar(v0173);
    fn = elt(env, 8); /* multiom */
    v0173 = (*qfn1(fn))(qenv(fn), v0173);
    nil = C_nil;
    if (exception_pending()) goto v0085;
    env = stack[-1];
    v0173 = qvalue(elt(env, 4)); /* nil */
    fn = elt(env, 7); /* indent!* */
    v0173 = (*qfn1(fn))(qenv(fn), v0173);
    nil = C_nil;
    if (exception_pending()) goto v0085;
    env = stack[-1];
    v0173 = elt(env, 5); /* "</OMA>" */
    fn = elt(env, 6); /* printout */
    v0173 = (*qfn1(fn))(qenv(fn), v0173);
    nil = C_nil;
    if (exception_pending()) goto v0085;
    env = stack[-1];
    v0173 = stack[0];
    v0173 = qcdr(v0173);
    v0173 = CC_matrixrowom(env, v0173);
    nil = C_nil;
    if (exception_pending()) goto v0085;
    goto v0009;

v0009:
    v0173 = nil;
    { popv(2); return onevalue(v0173); }
/* error exit handlers */
v0085:
    popv(2);
    return nil;
}



/* Code for rootextractsq */

static Lisp_Object CC_rootextractsq(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0173, v0174;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rootextractsq");
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
    v0174 = v0000;
/* end of prologue */
    v0173 = v0174;
    v0173 = qcar(v0173);
    if (v0173 == nil) { popv(3); return onevalue(v0174); }
    v0173 = v0174;
    fn = elt(env, 1); /* subs2q */
    v0173 = (*qfn1(fn))(qenv(fn), v0173);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-2];
    stack[-1] = v0173;
    v0173 = stack[-1];
    v0173 = qcar(v0173);
    fn = elt(env, 2); /* rootextractf */
    stack[0] = (*qfn1(fn))(qenv(fn), v0173);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-2];
    v0173 = stack[-1];
    v0173 = qcdr(v0173);
    fn = elt(env, 2); /* rootextractf */
    v0173 = (*qfn1(fn))(qenv(fn), v0173);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    {
        Lisp_Object v0223 = stack[0];
        popv(3);
        return cons(v0223, v0173);
    }
/* error exit handlers */
v0106:
    popv(3);
    return nil;
}



/* Code for dip2vdp */

static Lisp_Object CC_dip2vdp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0171, v0245;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dip2vdp");
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
    v0245 = v0000;
/* end of prologue */
    v0171 = qvalue(elt(env, 1)); /* !*groebsubs */
    if (v0171 == nil) goto v0191;
    v0171 = v0245;
    fn = elt(env, 4); /* dipsubs2 */
    v0171 = (*qfn1(fn))(qenv(fn), v0171);
    nil = C_nil;
    if (exception_pending()) goto v0216;
    env = stack[-3];
    goto v0028;

v0028:
    v0245 = v0171;
    v0171 = v0245;
    if (v0171 == nil) goto v0246;
    stack[-2] = elt(env, 2); /* vdp */
    v0171 = v0245;
    stack[-1] = qcar(v0171);
    v0171 = v0245;
    v0171 = qcdr(v0171);
    stack[0] = qcar(v0171);
    v0171 = qvalue(elt(env, 3)); /* nil */
    v0171 = list2(v0245, v0171);
    nil = C_nil;
    if (exception_pending()) goto v0216;
    {
        Lisp_Object v0217 = stack[-2];
        Lisp_Object v0087 = stack[-1];
        Lisp_Object v0215 = stack[0];
        popv(4);
        return list3star(v0217, v0087, v0215, v0171);
    }

v0246:
    stack[-2] = elt(env, 2); /* vdp */
    stack[-1] = qvalue(elt(env, 3)); /* nil */
    v0171 = (Lisp_Object)1; /* 0 */
    fn = elt(env, 5); /* a2bc */
    stack[0] = (*qfn1(fn))(qenv(fn), v0171);
    nil = C_nil;
    if (exception_pending()) goto v0216;
    env = stack[-3];
    v0245 = qvalue(elt(env, 3)); /* nil */
    v0171 = qvalue(elt(env, 3)); /* nil */
    v0171 = list2(v0245, v0171);
    nil = C_nil;
    if (exception_pending()) goto v0216;
    {
        Lisp_Object v0213 = stack[-2];
        Lisp_Object v0219 = stack[-1];
        Lisp_Object v0220 = stack[0];
        popv(4);
        return list3star(v0213, v0219, v0220, v0171);
    }

v0191:
    v0171 = v0245;
    goto v0028;
/* error exit handlers */
v0216:
    popv(4);
    return nil;
}



/* Code for aconc */

static Lisp_Object CC_aconc(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0015, v0013;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for aconc");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0015 = v0016;
    v0013 = v0000;
/* end of prologue */
    stack[0] = v0013;
    v0015 = ncons(v0015);
    nil = C_nil;
    if (exception_pending()) goto v0076;
    {
        Lisp_Object v0017 = stack[0];
        popv(1);
        return Lnconc(nil, v0017, v0015);
    }
/* error exit handlers */
v0076:
    popv(1);
    return nil;
}



/* Code for physopordchk!* */

static Lisp_Object CC_physopordchkH(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0057, v0058;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for physopordchk*");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0000;
/* end of prologue */

v0250:
    v0057 = stack[-1];
    v0057 = qcar(v0057);
    stack[-4] = v0057;
    v0057 = stack[-1];
    v0057 = qcdr(v0057);
    stack[-1] = v0057;
    v0057 = stack[-1];
    if (v0057 == nil) goto v0014;
    v0057 = stack[-4];
    v0058 = ncons(v0057);
    nil = C_nil;
    if (exception_pending()) goto v0251;
    env = stack[-5];
    v0057 = stack[0];
    v0057 = CC_physopordchkH(env, v0058, v0057);
    nil = C_nil;
    if (exception_pending()) goto v0251;
    env = stack[-5];
    if (v0057 == nil) goto v0252;
    v0058 = stack[-1];
    v0057 = stack[0];
    stack[-1] = v0058;
    stack[0] = v0057;
    goto v0250;

v0252:
    v0057 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0057); }

v0014:
    v0057 = stack[0];
    v0057 = qcdr(v0057);
    if (v0057 == nil) goto v0085;
    v0057 = stack[0];
    stack[-3] = v0057;
    v0057 = stack[-3];
    if (v0057 == nil) goto v0096;
    v0057 = stack[-3];
    v0057 = qcar(v0057);
    v0058 = stack[-4];
    fn = elt(env, 3); /* ncmpchk */
    v0057 = (*qfn2(fn))(qenv(fn), v0058, v0057);
    nil = C_nil;
    if (exception_pending()) goto v0251;
    env = stack[-5];
    v0057 = ncons(v0057);
    nil = C_nil;
    if (exception_pending()) goto v0251;
    env = stack[-5];
    stack[-1] = v0057;
    stack[-2] = v0057;
    goto v0221;

v0221:
    v0057 = stack[-3];
    v0057 = qcdr(v0057);
    stack[-3] = v0057;
    v0057 = stack[-3];
    if (v0057 == nil) goto v0109;
    stack[0] = stack[-1];
    v0057 = stack[-3];
    v0057 = qcar(v0057);
    v0058 = stack[-4];
    fn = elt(env, 3); /* ncmpchk */
    v0057 = (*qfn2(fn))(qenv(fn), v0058, v0057);
    nil = C_nil;
    if (exception_pending()) goto v0251;
    env = stack[-5];
    v0057 = ncons(v0057);
    nil = C_nil;
    if (exception_pending()) goto v0251;
    env = stack[-5];
    v0057 = Lrplacd(nil, stack[0], v0057);
    nil = C_nil;
    if (exception_pending()) goto v0251;
    env = stack[-5];
    v0057 = stack[-1];
    v0057 = qcdr(v0057);
    stack[-1] = v0057;
    goto v0221;

v0109:
    v0057 = stack[-2];
    goto v0232;

v0232:
    v0058 = qvalue(elt(env, 1)); /* nil */
    v0057 = Lmember(nil, v0058, v0057);
    if (v0057 == nil) goto v0253;
    v0057 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0057); }

v0253:
    v0057 = qvalue(elt(env, 2)); /* t */
    { popv(6); return onevalue(v0057); }

v0096:
    v0057 = qvalue(elt(env, 1)); /* nil */
    goto v0232;

v0085:
    v0058 = stack[-4];
    v0057 = stack[0];
    v0057 = qcar(v0057);
    fn = elt(env, 3); /* ncmpchk */
    v0057 = (*qfn2(fn))(qenv(fn), v0058, v0057);
    nil = C_nil;
    if (exception_pending()) goto v0251;
    env = stack[-5];
    if (v0057 == nil) goto v0074;
    v0057 = stack[-4];
    fn = elt(env, 4); /* invp */
    v0058 = (*qfn1(fn))(qenv(fn), v0057);
    nil = C_nil;
    if (exception_pending()) goto v0251;
    v0057 = stack[0];
    v0057 = qcar(v0057);
    v0057 = (equal(v0058, v0057) ? lisp_true : nil);
    v0057 = (v0057 == nil ? lisp_true : nil);
    { popv(6); return onevalue(v0057); }

v0074:
    v0057 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0057); }
/* error exit handlers */
v0251:
    popv(6);
    return nil;
}



/* Code for assert_error */

static Lisp_Object MS_CDECL CC_assert_error(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0262, v0263, v0059;
    Lisp_Object fn;
    Lisp_Object v0009, v0119, v0028, v0003, v0016, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 6, "assert_error");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    v0028 = va_arg(aa, Lisp_Object);
    v0119 = va_arg(aa, Lisp_Object);
    v0009 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for assert_error");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push6(v0009,v0119,v0028,v0003,v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop6(v0000,v0016,v0003,v0028,v0119,v0009);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0009;
    v0262 = v0119;
    stack[-2] = v0028;
    stack[-3] = v0003;
    stack[-4] = v0016;
    stack[-5] = v0000;
/* end of prologue */
    stack[-6] = qvalue(elt(env, 1)); /* !*lower */
    qvalue(elt(env, 1)) = nil; /* !*lower */
    v0262 = qvalue(elt(env, 2)); /* !*assertstatistics */
    if (v0262 == nil) goto v0104;
    v0263 = stack[-5];
    v0262 = qvalue(elt(env, 3)); /* assertstatistics!* */
    v0262 = Latsoc(nil, v0263, v0262);
    v0262 = qcdr(v0262);
    v0263 = v0262;
    v0262 = v0263;
    v0262 = qcdr(v0262);
    stack[0] = qcdr(v0262);
    v0262 = v0263;
    v0262 = qcdr(v0262);
    v0262 = qcdr(v0262);
    v0262 = qcar(v0262);
    v0262 = add1(v0262);
    nil = C_nil;
    if (exception_pending()) goto v0185;
    env = stack[-7];
    fn = elt(env, 9); /* setcar */
    v0262 = (*qfn2(fn))(qenv(fn), stack[0], v0262);
    nil = C_nil;
    if (exception_pending()) goto v0185;
    env = stack[-7];
    goto v0104;

v0104:
    v0263 = stack[-2];
    v0262 = (Lisp_Object)1; /* 0 */
    v0262 = Leqn(nil, v0263, v0262);
    nil = C_nil;
    if (exception_pending()) goto v0185;
    env = stack[-7];
    if (v0262 == nil) goto v0095;
    stack[0] = elt(env, 4); /* "declaration" */
    v0059 = stack[-5];
    v0263 = stack[-4];
    v0262 = stack[-3];
    fn = elt(env, 10); /* assert_format */
    v0059 = (*qfnn(fn))(qenv(fn), 3, v0059, v0263, v0262);
    nil = C_nil;
    if (exception_pending()) goto v0185;
    env = stack[-7];
    v0263 = elt(env, 5); /* "violated by result" */
    v0262 = stack[-1];
    v0262 = list4(stack[0], v0059, v0263, v0262);
    nil = C_nil;
    if (exception_pending()) goto v0185;
    env = stack[-7];
    goto v0007;

v0007:
    v0263 = v0262;
    v0262 = qvalue(elt(env, 8)); /* !*assertbreak */
    if (v0262 == nil) goto v0046;
    v0262 = v0263;
    fn = elt(env, 11); /* rederr */
    v0262 = (*qfn1(fn))(qenv(fn), v0262);
    nil = C_nil;
    if (exception_pending()) goto v0185;
    env = stack[-7];
    goto v0264;

v0264:
    v0262 = nil;
    qvalue(elt(env, 1)) = stack[-6]; /* !*lower */
    { popv(8); return onevalue(v0262); }

v0046:
    v0262 = v0263;
    fn = elt(env, 12); /* lprim */
    v0262 = (*qfn1(fn))(qenv(fn), v0262);
    nil = C_nil;
    if (exception_pending()) goto v0185;
    env = stack[-7];
    goto v0264;

v0095:
    stack[0] = elt(env, 4); /* "declaration" */
    v0059 = stack[-5];
    v0263 = stack[-4];
    v0262 = stack[-3];
    fn = elt(env, 10); /* assert_format */
    stack[-4] = (*qfnn(fn))(qenv(fn), 3, v0059, v0263, v0262);
    nil = C_nil;
    if (exception_pending()) goto v0185;
    env = stack[-7];
    stack[-3] = elt(env, 6); /* "violated by" */
    v0263 = elt(env, 7); /* arg */
    v0262 = stack[-2];
    fn = elt(env, 13); /* mkid */
    v0263 = (*qfn2(fn))(qenv(fn), v0263, v0262);
    nil = C_nil;
    if (exception_pending()) goto v0185;
    env = stack[-7];
    v0262 = stack[-1];
    v0262 = list2(v0263, v0262);
    nil = C_nil;
    if (exception_pending()) goto v0185;
    env = stack[-7];
    v0262 = list3star(stack[0], stack[-4], stack[-3], v0262);
    nil = C_nil;
    if (exception_pending()) goto v0185;
    env = stack[-7];
    goto v0007;
/* error exit handlers */
v0185:
    env = stack[-7];
    qvalue(elt(env, 1)) = stack[-6]; /* !*lower */
    popv(8);
    return nil;
}



/* Code for numlist_ordp */

static Lisp_Object CC_numlist_ordp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0014, v0076, v0017;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for numlist_ordp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0014 = v0016;
    v0076 = v0000;
/* end of prologue */
    v0017 = v0076;
    v0076 = v0014;
    v0014 = elt(env, 1); /* lambda_n4e0tk_3 */
    {
        fn = elt(env, 2); /* cons_ordp */
        return (*qfnn(fn))(qenv(fn), 3, v0017, v0076, v0014);
    }
}



/* Code for lambda_n4e0tk_3 */

static Lisp_Object CC_lambda_n4e0tk_3(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0212, v0015;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lambda_n4e0tk_3");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0212 = v0016;
    v0015 = v0000;
/* end of prologue */
        return Lleq(nil, v0015, v0212);
}



/* Code for hasarg */

static Lisp_Object CC_hasarg(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0214, v0265, v0096;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for hasarg");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0000;
/* end of prologue */
    v0265 = stack[-1];
    v0214 = qvalue(elt(env, 1)); /* haveargs!* */
    v0214 = cons(v0265, v0214);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    env = stack[-2];
    qvalue(elt(env, 1)) = v0214; /* haveargs!* */
    v0265 = stack[0];
    v0214 = qvalue(elt(env, 2)); /* maxarg!* */
    v0214 = (Lisp_Object)greaterp2(v0265, v0214);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    v0214 = v0214 ? lisp_true : nil;
    env = stack[-2];
    if (v0214 == nil) goto v0007;
    v0214 = (Lisp_Object)1; /* 0 */
    fn = elt(env, 8); /* qerline */
    v0214 = (*qfn1(fn))(qenv(fn), v0214);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    env = stack[-2];
    v0214 = elt(env, 3); /* "**** " */
    v0214 = Lprinc(nil, v0214);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    env = stack[-2];
    v0214 = stack[-1];
    v0214 = Lprin(nil, v0214);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    env = stack[-2];
    v0214 = elt(env, 4); /* " has " */
    v0214 = Lprinc(nil, v0214);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    env = stack[-2];
    v0214 = stack[0];
    v0214 = Lprinc(nil, v0214);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    env = stack[-2];
    v0214 = elt(env, 5); /* " arguments" */
    v0214 = Lprinc(nil, v0214);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    env = stack[-2];
    v0214 = (Lisp_Object)1; /* 0 */
    fn = elt(env, 9); /* newline */
    v0214 = (*qfn1(fn))(qenv(fn), v0214);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    env = stack[-2];
    goto v0007;

v0007:
    v0265 = stack[-1];
    v0214 = elt(env, 6); /* bldmsg */
    if (v0265 == v0214) goto v0006;
    v0265 = stack[-1];
    v0096 = elt(env, 7); /* number!-of!-args */
    v0214 = stack[0];
        popv(3);
        return Lputprop(nil, 3, v0265, v0096, v0214);

v0006:
    v0214 = nil;
    { popv(3); return onevalue(v0214); }
/* error exit handlers */
v0041:
    popv(3);
    return nil;
}



/* Code for cl_f2ml */

static Lisp_Object CC_cl_f2ml(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0280, v0281, v0282;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for cl_f2ml");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-3] = v0016;
    stack[0] = v0000;
/* end of prologue */

v0250:
    v0280 = stack[0];
    if (!consp(v0280)) goto v0010;
    v0280 = stack[0];
    v0280 = qcar(v0280);
    goto v0261;

v0261:
    v0282 = v0280;
    v0281 = stack[0];
    v0280 = elt(env, 1); /* true */
    if (v0281 == v0280) goto v0218;
    v0281 = stack[0];
    v0280 = elt(env, 3); /* false */
    v0280 = (v0281 == v0280 ? lisp_true : nil);
    goto v0004;

v0004:
    if (v0280 == nil) goto v0214;
    v0280 = qvalue(elt(env, 4)); /* nil */
    { popv(6); return onevalue(v0280); }

v0214:
    v0281 = v0282;
    v0280 = elt(env, 5); /* or */
    if (v0281 == v0280) goto v0221;
    v0281 = v0282;
    v0280 = elt(env, 6); /* and */
    v0280 = (v0281 == v0280 ? lisp_true : nil);
    goto v0112;

v0112:
    if (v0280 == nil) goto v0108;
    v0280 = qvalue(elt(env, 2)); /* t */
    goto v0044;

v0044:
    if (v0280 == nil) goto v0064;
    v0280 = qvalue(elt(env, 2)); /* t */
    goto v0179;

v0179:
    if (v0280 == nil) goto v0283;
    v0280 = stack[0];
    v0280 = qcdr(v0280);
    stack[-4] = v0280;
    v0280 = stack[-4];
    if (v0280 == nil) goto v0284;
    v0280 = stack[-4];
    v0280 = qcar(v0280);
    v0281 = v0280;
    v0280 = stack[-3];
    v0280 = CC_cl_f2ml(env, v0281, v0280);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    v0280 = ncons(v0280);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    stack[-1] = v0280;
    stack[-2] = v0280;
    goto v0285;

v0285:
    v0280 = stack[-4];
    v0280 = qcdr(v0280);
    stack[-4] = v0280;
    v0280 = stack[-4];
    if (v0280 == nil) goto v0239;
    stack[0] = stack[-1];
    v0280 = stack[-4];
    v0280 = qcar(v0280);
    v0281 = v0280;
    v0280 = stack[-3];
    v0280 = CC_cl_f2ml(env, v0281, v0280);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    v0280 = ncons(v0280);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    v0280 = Lrplacd(nil, stack[0], v0280);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    v0280 = stack[-1];
    v0280 = qcdr(v0280);
    stack[-1] = v0280;
    goto v0285;

v0239:
    v0280 = stack[-2];
    v0281 = v0280;
    goto v0060;

v0060:
    v0280 = elt(env, 11); /* plus2 */
    {
        popv(6);
        fn = elt(env, 16); /* lto_almerge */
        return (*qfn2(fn))(qenv(fn), v0281, v0280);
    }

v0284:
    v0280 = qvalue(elt(env, 4)); /* nil */
    v0281 = v0280;
    goto v0060;

v0283:
    v0281 = v0282;
    v0280 = elt(env, 12); /* ex */
    if (v0281 == v0280) goto v0186;
    v0281 = v0282;
    v0280 = elt(env, 13); /* all */
    v0280 = (v0281 == v0280 ? lisp_true : nil);
    goto v0286;

v0286:
    if (v0280 == nil) goto v0287;
    v0280 = stack[0];
    v0280 = qcdr(v0280);
    v0280 = qcdr(v0280);
    v0281 = qcar(v0280);
    v0280 = stack[-3];
    stack[0] = v0281;
    stack[-3] = v0280;
    goto v0250;

v0287:
    v0281 = v0282;
    v0280 = elt(env, 14); /* bex */
    if (v0281 == v0280) goto v0288;
    v0281 = v0282;
    v0280 = elt(env, 15); /* ball */
    v0280 = (v0281 == v0280 ? lisp_true : nil);
    goto v0027;

v0027:
    if (v0280 == nil) goto v0289;
    v0280 = stack[0];
    v0280 = qcdr(v0280);
    v0280 = qcdr(v0280);
    v0281 = qcar(v0280);
    v0280 = stack[-3];
    stack[-1] = CC_cl_f2ml(env, v0281, v0280);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    v0280 = stack[0];
    v0280 = qcdr(v0280);
    v0280 = qcdr(v0280);
    v0280 = qcdr(v0280);
    v0281 = qcar(v0280);
    v0280 = stack[-3];
    v0280 = CC_cl_f2ml(env, v0281, v0280);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    v0281 = list2(stack[-1], v0280);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    v0280 = elt(env, 11); /* plus2 */
    {
        popv(6);
        fn = elt(env, 16); /* lto_almerge */
        return (*qfn2(fn))(qenv(fn), v0281, v0280);
    }

v0289:
    stack[-1] = stack[-3];
    v0280 = stack[0];
    v0280 = ncons(v0280);
    nil = C_nil;
    if (exception_pending()) goto v0146;
    env = stack[-5];
    {
        Lisp_Object v0290 = stack[-1];
        popv(6);
        fn = elt(env, 17); /* apply */
        return (*qfn2(fn))(qenv(fn), v0290, v0280);
    }

v0288:
    v0280 = qvalue(elt(env, 2)); /* t */
    goto v0027;

v0186:
    v0280 = qvalue(elt(env, 2)); /* t */
    goto v0286;

v0064:
    v0281 = v0282;
    v0280 = elt(env, 8); /* impl */
    if (v0281 == v0280) goto v0065;
    v0281 = v0282;
    v0280 = elt(env, 9); /* repl */
    if (v0281 == v0280) goto v0234;
    v0281 = v0282;
    v0280 = elt(env, 10); /* equiv */
    v0280 = (v0281 == v0280 ? lisp_true : nil);
    goto v0179;

v0234:
    v0280 = qvalue(elt(env, 2)); /* t */
    goto v0179;

v0065:
    v0280 = qvalue(elt(env, 2)); /* t */
    goto v0179;

v0108:
    v0281 = v0282;
    v0280 = elt(env, 7); /* not */
    v0280 = (v0281 == v0280 ? lisp_true : nil);
    goto v0044;

v0221:
    v0280 = qvalue(elt(env, 2)); /* t */
    goto v0112;

v0218:
    v0280 = qvalue(elt(env, 2)); /* t */
    goto v0004;

v0010:
    v0280 = stack[0];
    goto v0261;
/* error exit handlers */
v0146:
    popv(6);
    return nil;
}



/* Code for sfto_pdecf */

static Lisp_Object CC_sfto_pdecf(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0099, v0180;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for sfto_pdecf");
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
    stack[0] = v0000;
/* end of prologue */
    v0099 = stack[0];
    if (!consp(v0099)) goto v0013;
    v0099 = stack[0];
    v0099 = qcar(v0099);
    v0099 = (consp(v0099) ? nil : lisp_true);
    goto v0015;

v0015:
    if (v0099 == nil) goto v0010;
    v0180 = (Lisp_Object)17; /* 1 */
    v0099 = (Lisp_Object)17; /* 1 */
    popv(4);
    return cons(v0180, v0099);

v0010:
    v0099 = stack[0];
    fn = elt(env, 2); /* sfto_ucontentf */
    v0099 = (*qfn1(fn))(qenv(fn), v0099);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    env = stack[-3];
    stack[-1] = v0099;
    v0099 = stack[-1];
    v0099 = CC_sfto_pdecf(env, v0099);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    env = stack[-3];
    stack[-2] = v0099;
    v0180 = stack[0];
    v0099 = stack[-1];
    fn = elt(env, 3); /* quotf */
    v0099 = (*qfn2(fn))(qenv(fn), v0180, v0099);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    env = stack[-3];
    fn = elt(env, 4); /* sfto_updecf */
    v0099 = (*qfn1(fn))(qenv(fn), v0099);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    env = stack[-3];
    stack[-1] = v0099;
    v0099 = stack[-2];
    v0180 = qcar(v0099);
    v0099 = stack[-1];
    v0099 = qcar(v0099);
    fn = elt(env, 5); /* multf */
    stack[0] = (*qfn2(fn))(qenv(fn), v0180, v0099);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    env = stack[-3];
    v0099 = stack[-2];
    v0180 = qcdr(v0099);
    v0099 = stack[-1];
    v0099 = qcdr(v0099);
    fn = elt(env, 5); /* multf */
    v0099 = (*qfn2(fn))(qenv(fn), v0180, v0099);
    nil = C_nil;
    if (exception_pending()) goto v0215;
    {
        Lisp_Object v0213 = stack[0];
        popv(4);
        return cons(v0213, v0099);
    }

v0013:
    v0099 = qvalue(elt(env, 1)); /* t */
    goto v0015;
/* error exit handlers */
v0215:
    popv(4);
    return nil;
}



/* Code for rndifference!: */

static Lisp_Object CC_rndifferenceT(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0259, v0044;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rndifference:");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0000;
/* end of prologue */
    v0259 = stack[-1];
    v0259 = qcdr(v0259);
    v0044 = qcar(v0259);
    v0259 = stack[0];
    v0259 = qcdr(v0259);
    v0259 = qcdr(v0259);
    stack[-2] = times2(v0044, v0259);
    nil = C_nil;
    if (exception_pending()) goto v0112;
    env = stack[-3];
    v0259 = stack[-1];
    v0259 = qcdr(v0259);
    v0044 = qcdr(v0259);
    v0259 = stack[0];
    v0259 = qcdr(v0259);
    v0259 = qcar(v0259);
    v0259 = times2(v0044, v0259);
    nil = C_nil;
    if (exception_pending()) goto v0112;
    env = stack[-3];
    stack[-2] = difference2(stack[-2], v0259);
    nil = C_nil;
    if (exception_pending()) goto v0112;
    env = stack[-3];
    v0259 = stack[-1];
    v0259 = qcdr(v0259);
    v0044 = qcdr(v0259);
    v0259 = stack[0];
    v0259 = qcdr(v0259);
    v0259 = qcdr(v0259);
    v0259 = times2(v0044, v0259);
    nil = C_nil;
    if (exception_pending()) goto v0112;
    env = stack[-3];
    {
        Lisp_Object v0221 = stack[-2];
        popv(4);
        fn = elt(env, 1); /* mkrn */
        return (*qfn2(fn))(qenv(fn), v0221, v0259);
    }
/* error exit handlers */
v0112:
    popv(4);
    return nil;
}



/* Code for offexpchk */

static Lisp_Object CC_offexpchk(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0073;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for offexpchk");
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
    v0073 = qvalue(elt(env, 1)); /* !*really_off_exp */
    if (!(v0073 == nil)) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v0073 = qvalue(elt(env, 2)); /* frlis!* */
    if (v0073 == nil) goto v0191;
    v0073 = stack[0];
    v0073 = qcar(v0073);
    fn = elt(env, 3); /* freevarinexptchk */
    v0073 = (*qfn1(fn))(qenv(fn), v0073);
    nil = C_nil;
    if (exception_pending()) goto v0103;
    env = stack[-2];
    if (!(v0073 == nil)) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }

v0191:
    v0073 = stack[0];
    v0073 = qcdr(v0073);
    fn = elt(env, 3); /* freevarinexptchk */
    v0073 = (*qfn1(fn))(qenv(fn), v0073);
    nil = C_nil;
    if (exception_pending()) goto v0103;
    env = stack[-2];
    if (!(v0073 == nil)) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v0073 = stack[0];
    v0073 = qcar(v0073);
    fn = elt(env, 4); /* mkprod */
    stack[-1] = (*qfn1(fn))(qenv(fn), v0073);
    nil = C_nil;
    if (exception_pending()) goto v0103;
    env = stack[-2];
    v0073 = stack[0];
    v0073 = qcdr(v0073);
    fn = elt(env, 4); /* mkprod */
    v0073 = (*qfn1(fn))(qenv(fn), v0073);
    nil = C_nil;
    if (exception_pending()) goto v0103;
    env = stack[-2];
    {
        Lisp_Object v0178 = stack[-1];
        popv(3);
        fn = elt(env, 5); /* canprod */
        return (*qfn2(fn))(qenv(fn), v0178, v0073);
    }
/* error exit handlers */
v0103:
    popv(3);
    return nil;
}



/* Code for fctrf1 */

static Lisp_Object CC_fctrf1(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0090, v0297;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fctrf1");
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
    stack[-1] = nil;
    v0090 = stack[-3];
    if (!consp(v0090)) goto v0013;
    v0090 = stack[-3];
    v0090 = qcar(v0090);
    v0090 = (consp(v0090) ? nil : lisp_true);
    goto v0015;

v0015:
    if (v0090 == nil) goto v0010;
    v0090 = stack[-3];
    popv(6);
    return ncons(v0090);

v0010:
    v0090 = qvalue(elt(env, 2)); /* dmode!* */
    if (!symbolp(v0090)) v0090 = nil;
    else { v0090 = qfastgets(v0090);
           if (v0090 != nil) { v0090 = elt(v0090, 3); /* field */
#ifdef RECORD_GET
             if (v0090 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v0090 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v0090 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v0090 == SPID_NOPROP) v0090 = nil; else v0090 = lisp_true; }}
#endif
    if (v0090 == nil) goto v0222;
    v0090 = stack[-3];
    fn = elt(env, 5); /* lnc */
    v0297 = (*qfn1(fn))(qenv(fn), v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    stack[-1] = v0297;
    v0090 = (Lisp_Object)17; /* 1 */
    v0090 = Lneq(nil, v0297, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    goto v0105;

v0105:
    if (v0090 == nil) goto v0174;
    v0090 = stack[-1];
    fn = elt(env, 6); /* !:recip */
    v0297 = (*qfn1(fn))(qenv(fn), v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    v0090 = stack[-3];
    fn = elt(env, 7); /* multd */
    v0090 = (*qfn2(fn))(qenv(fn), v0297, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    stack[-3] = v0090;
    goto v0074;

v0074:
    v0090 = stack[-3];
    fn = elt(env, 8); /* comfac */
    v0090 = (*qfn1(fn))(qenv(fn), v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    stack[-4] = v0090;
    stack[0] = stack[-3];
    v0090 = stack[-4];
    fn = elt(env, 9); /* comfac!-to!-poly */
    v0090 = (*qfn1(fn))(qenv(fn), v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    fn = elt(env, 10); /* quotf */
    v0090 = (*qfn2(fn))(qenv(fn), stack[0], v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    stack[-3] = v0090;
    v0090 = stack[-4];
    v0090 = qcdr(v0090);
    v0090 = CC_fctrf1(env, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    stack[-2] = v0090;
    v0090 = stack[-4];
    v0090 = qcar(v0090);
    if (v0090 == nil) goto v0234;
    v0090 = stack[-2];
    stack[0] = qcar(v0090);
    v0090 = stack[-4];
    v0090 = qcar(v0090);
    v0297 = qcar(v0090);
    v0090 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 11); /* to */
    v0297 = (*qfn2(fn))(qenv(fn), v0297, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    v0090 = (Lisp_Object)17; /* 1 */
    v0090 = cons(v0297, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    v0297 = ncons(v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    v0090 = stack[-4];
    v0090 = qcar(v0090);
    v0090 = qcdr(v0090);
    v0297 = cons(v0297, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    v0090 = stack[-2];
    v0090 = qcdr(v0090);
    v0090 = list2star(stack[0], v0297, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    stack[-2] = v0090;
    goto v0234;

v0234:
    v0090 = stack[-1];
    if (v0090 == nil) goto v0049;
    v0297 = stack[-1];
    v0090 = (Lisp_Object)17; /* 1 */
    if (v0297 == v0090) goto v0049;
    v0297 = stack[-1];
    v0090 = stack[-2];
    v0090 = qcar(v0090);
    fn = elt(env, 7); /* multd */
    v0297 = (*qfn2(fn))(qenv(fn), v0297, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    v0090 = stack[-2];
    v0090 = qcdr(v0090);
    v0090 = cons(v0297, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    stack[-2] = v0090;
    goto v0049;

v0049:
    v0090 = stack[-3];
    if (!consp(v0090)) goto v0156;
    v0090 = stack[-3];
    v0090 = qcar(v0090);
    v0090 = (consp(v0090) ? nil : lisp_true);
    goto v0155;

v0155:
    if (v0090 == nil) goto v0040;
    v0297 = stack[-3];
    v0090 = stack[-2];
    v0090 = qcar(v0090);
    fn = elt(env, 12); /* multf */
    v0297 = (*qfn2(fn))(qenv(fn), v0297, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    v0090 = stack[-2];
    v0090 = qcdr(v0090);
    popv(6);
    return cons(v0297, v0090);

v0040:
    v0090 = stack[-3];
    fn = elt(env, 13); /* minusf */
    v0090 = (*qfn1(fn))(qenv(fn), v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    if (v0090 == nil) goto v0288;
    v0090 = stack[-3];
    fn = elt(env, 14); /* negf */
    v0090 = (*qfn1(fn))(qenv(fn), v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    stack[-3] = v0090;
    v0090 = stack[-2];
    v0090 = qcar(v0090);
    fn = elt(env, 14); /* negf */
    v0297 = (*qfn1(fn))(qenv(fn), v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    v0090 = stack[-2];
    v0090 = qcdr(v0090);
    v0090 = cons(v0297, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    stack[-2] = v0090;
    goto v0288;

v0288:
    v0090 = stack[-3];
    fn = elt(env, 15); /* factor!-prim!-f */
    v0297 = (*qfn1(fn))(qenv(fn), v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    v0090 = stack[-2];
    {
        popv(6);
        fn = elt(env, 16); /* fac!-merge */
        return (*qfn2(fn))(qenv(fn), v0297, v0090);
    }

v0156:
    v0090 = qvalue(elt(env, 1)); /* t */
    goto v0155;

v0174:
    v0090 = qvalue(elt(env, 2)); /* dmode!* */
    if (v0090 == nil) goto v0074;
    v0297 = qvalue(elt(env, 2)); /* dmode!* */
    v0090 = elt(env, 4); /* unitsfn */
    v0090 = get(v0297, v0090);
    env = stack[-5];
    stack[-2] = v0090;
    if (v0090 == nil) goto v0074;
    stack[-1] = stack[-2];
    v0297 = (Lisp_Object)17; /* 1 */
    v0090 = stack[-3];
    stack[0] = cons(v0297, v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    v0090 = stack[-3];
    fn = elt(env, 5); /* lnc */
    v0090 = (*qfn1(fn))(qenv(fn), v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    v0090 = Lapply2(nil, 3, stack[-1], stack[0], v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    stack[-4] = v0090;
    v0090 = stack[-4];
    v0090 = qcdr(v0090);
    stack[-3] = v0090;
    v0090 = stack[-4];
    v0090 = qcar(v0090);
    fn = elt(env, 6); /* !:recip */
    v0090 = (*qfn1(fn))(qenv(fn), v0090);
    nil = C_nil;
    if (exception_pending()) goto v0150;
    env = stack[-5];
    stack[-1] = v0090;
    goto v0074;

v0222:
    v0090 = qvalue(elt(env, 3)); /* nil */
    goto v0105;

v0013:
    v0090 = qvalue(elt(env, 1)); /* t */
    goto v0015;
/* error exit handlers */
v0150:
    popv(6);
    return nil;
}



/* Code for mml2ir */

static Lisp_Object MS_CDECL CC_mml2ir(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0215, v0213, v0219;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "mml2ir");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mml2ir");
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
    v0215 = qvalue(elt(env, 1)); /* nil */
    stack[-1] = v0215;
    v0215 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 2)) = v0215; /* mmlatts */
    v0215 = (Lisp_Object)17; /* 1 */
    v0215 = Lsmkvect(nil, v0215);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-2];
    stack[0] = v0215;
    v0219 = stack[0];
    v0213 = (Lisp_Object)1; /* 0 */
    v0215 = (Lisp_Object)513; /* 32 */
    v0215 = Lsputv(nil, 3, v0219, v0213, v0215);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-2];
    v0215 = stack[0];
    v0215 = Lintern(nil, v0215);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-2];
    qvalue(elt(env, 3)) = v0215; /* space */
    v0215 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 4)) = v0215; /* count */
    v0215 = Lreadch(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-2];
    qvalue(elt(env, 5)) = v0215; /* ch */
    v0215 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 6)) = v0215; /* temp2 */
    fn = elt(env, 12); /* lex */
    v0215 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-2];
    v0213 = qvalue(elt(env, 7)); /* char */
    v0215 = elt(env, 8); /* (m a t h) */
    if (equal(v0213, v0215)) goto v0106;
    v0213 = elt(env, 9); /* "<math>" */
    v0215 = (Lisp_Object)33; /* 2 */
    fn = elt(env, 13); /* errorml */
    v0215 = (*qfn2(fn))(qenv(fn), v0213, v0215);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-2];
    goto v0105;

v0105:
    fn = elt(env, 12); /* lex */
    v0215 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-2];
    v0213 = qvalue(elt(env, 7)); /* char */
    v0215 = elt(env, 10); /* (!/ m a t h) */
    if (equal(v0213, v0215)) goto v0100;
    v0213 = elt(env, 11); /* "</math>" */
    v0215 = (Lisp_Object)305; /* 19 */
    fn = elt(env, 13); /* errorml */
    v0215 = (*qfn2(fn))(qenv(fn), v0213, v0215);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }

v0100:
    v0215 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }

v0106:
    fn = elt(env, 14); /* mathml */
    v0215 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0095;
    env = stack[-2];
    stack[-1] = v0215;
    goto v0105;
/* error exit handlers */
v0095:
    popv(3);
    return nil;
}



/* Code for evalvars */

static Lisp_Object CC_evalvars(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0054, v0231;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for evalvars");
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
    goto v0009;

v0009:
    v0054 = stack[-1];
    if (v0054 == nil) goto v0010;
    v0054 = stack[-1];
    v0054 = qcar(v0054);
    if (!consp(v0054)) goto v0018;
    v0054 = stack[-1];
    v0054 = qcar(v0054);
    v0231 = qcar(v0054);
    v0054 = elt(env, 2); /* intfn */
    v0054 = Lflagp(nil, v0231, v0054);
    env = stack[-3];
    goto v0017;

v0017:
    if (v0054 == nil) goto v0179;
    v0054 = stack[-1];
    v0231 = qcar(v0054);
    v0054 = stack[-2];
    v0054 = cons(v0231, v0054);
    nil = C_nil;
    if (exception_pending()) goto v0255;
    env = stack[-3];
    stack[-2] = v0054;
    v0054 = stack[-1];
    v0054 = qcdr(v0054);
    stack[-1] = v0054;
    goto v0009;

v0179:
    v0054 = stack[-1];
    v0054 = qcar(v0054);
    v0054 = qcar(v0054);
    if (!symbolp(v0054)) v0231 = nil;
    else { v0231 = qfastgets(v0054);
           if (v0231 != nil) { v0231 = elt(v0231, 2); /* rtype */
#ifdef RECORD_GET
             if (v0231 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v0231 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v0231 == SPID_NOPROP) v0231 = nil; }}
#endif
    v0054 = elt(env, 3); /* setelemfn */
    v0054 = get(v0231, v0054);
    env = stack[-3];
    if (v0054 == nil) goto v0095;
    v0054 = stack[-1];
    v0054 = qcar(v0054);
    stack[0] = qcar(v0054);
    v0054 = stack[-1];
    v0054 = qcar(v0054);
    v0054 = qcdr(v0054);
    fn = elt(env, 4); /* revlis_without_mode */
    v0231 = (*qfn1(fn))(qenv(fn), v0054);
    nil = C_nil;
    if (exception_pending()) goto v0255;
    env = stack[-3];
    v0054 = stack[-2];
    v0054 = acons(stack[0], v0231, v0054);
    nil = C_nil;
    if (exception_pending()) goto v0255;
    env = stack[-3];
    stack[-2] = v0054;
    v0054 = stack[-1];
    v0054 = qcdr(v0054);
    stack[-1] = v0054;
    goto v0009;

v0095:
    v0054 = stack[-1];
    v0054 = qcar(v0054);
    stack[0] = qcar(v0054);
    v0054 = stack[-1];
    v0054 = qcar(v0054);
    v0054 = qcdr(v0054);
    fn = elt(env, 5); /* revlis */
    v0231 = (*qfn1(fn))(qenv(fn), v0054);
    nil = C_nil;
    if (exception_pending()) goto v0255;
    env = stack[-3];
    v0054 = stack[-2];
    v0054 = acons(stack[0], v0231, v0054);
    nil = C_nil;
    if (exception_pending()) goto v0255;
    env = stack[-3];
    stack[-2] = v0054;
    v0054 = stack[-1];
    v0054 = qcdr(v0054);
    stack[-1] = v0054;
    goto v0009;

v0018:
    v0054 = qvalue(elt(env, 1)); /* t */
    goto v0017;

v0010:
    v0054 = stack[-2];
    {
        popv(4);
        fn = elt(env, 6); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0054);
    }
/* error exit handlers */
v0255:
    popv(4);
    return nil;
}



/* Code for dm!-minus */

static Lisp_Object CC_dmKminus(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0014, v0076;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dm-minus");
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
    v0014 = v0000;
/* end of prologue */
    fn = elt(env, 1); /* !:minus */
    v0014 = (*qfn1(fn))(qenv(fn), v0014);
    errexit();
    v0076 = v0014;
    v0014 = v0076;
    if (!(v0014 == nil)) return onevalue(v0076);
    v0014 = (Lisp_Object)1; /* 0 */
    return onevalue(v0014);
}



/* Code for formc!* */

static Lisp_Object MS_CDECL CC_formcH(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0246, v0107, v0004, v0218;
    Lisp_Object fn;
    Lisp_Object v0003, v0016, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "formc*");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for formc*");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0003,v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0016,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0107 = v0003;
    v0004 = v0016;
    v0218 = v0000;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* !*!*a2sfn */
    qvalue(elt(env, 1)) = nil; /* !*!*a2sfn */
    v0246 = elt(env, 2); /* revalx */
    qvalue(elt(env, 1)) = v0246; /* !*!*a2sfn */
    v0246 = v0218;
    fn = elt(env, 3); /* formc */
    v0246 = (*qfnn(fn))(qenv(fn), 3, v0246, v0004, v0107);
    nil = C_nil;
    if (exception_pending()) goto v0075;
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*!*a2sfn */
    { popv(2); return onevalue(v0246); }
/* error exit handlers */
v0075:
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*!*a2sfn */
    popv(2);
    return nil;
}



/* Code for prop!-simp1 */

static Lisp_Object MS_CDECL CC_propKsimp1(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0300, v0253, v0230;
    Lisp_Object fn;
    Lisp_Object v0119, v0028, v0003, v0016, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 5, "prop-simp1");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    v0028 = va_arg(aa, Lisp_Object);
    v0119 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for prop-simp1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push5(v0119,v0028,v0003,v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop5(v0000,v0016,v0003,v0028,v0119);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-4] = v0119;
    stack[0] = v0028;
    stack[-5] = v0003;
    stack[-2] = v0016;
    stack[-6] = v0000;
/* end of prologue */

v0250:
    v0300 = stack[-2];
    if (v0300 == nil) goto v0107;
    v0253 = stack[-6];
    v0300 = stack[-2];
    v0300 = qcar(v0300);
    fn = elt(env, 1); /* prop!-simp2 */
    v0300 = (*qfn2(fn))(qenv(fn), v0253, v0300);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-8];
    stack[-3] = v0300;
    v0300 = stack[-3];
    if (v0300 == nil) goto v0179;
    v0300 = stack[-3];
    stack[-6] = qcdr(v0300);
    v0300 = stack[-2];
    stack[-2] = qcdr(v0300);
    stack[-1] = stack[-5];
    v0300 = stack[0];
    stack[0] = add1(v0300);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-8];
    v0300 = stack[-3];
    stack[-7] = qcar(v0300);
    stack[-3] = (Lisp_Object)-15; /* -1 */
    v0300 = stack[-5];
    v0300 = Llength(nil, v0300);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-8];
    v0300 = Lexpt(nil, stack[-3], v0300);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-8];
    v0300 = times2(stack[-4], v0300);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-8];
    v0300 = times2(stack[-7], v0300);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-8];
    stack[-5] = stack[-1];
    stack[-4] = v0300;
    goto v0250;

v0179:
    stack[-3] = stack[-6];
    v0300 = stack[-2];
    stack[-1] = qcdr(v0300);
    v0300 = stack[-2];
    v0253 = qcar(v0300);
    v0300 = stack[-5];
    v0230 = cons(v0253, v0300);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-8];
    v0253 = stack[0];
    v0300 = stack[-4];
    stack[-6] = stack[-3];
    stack[-2] = stack[-1];
    stack[-5] = v0230;
    stack[0] = v0253;
    stack[-4] = v0300;
    goto v0250;

v0107:
    v0253 = stack[0];
    v0300 = stack[-4];
    stack[0] = list2(v0253, v0300);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-8];
    stack[-1] = stack[-6];
    v0300 = stack[-5];
    v0300 = Lreverse(nil, v0300);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    {
        Lisp_Object v0060 = stack[0];
        Lisp_Object v0047 = stack[-1];
        popv(9);
        return list2star(v0060, v0047, v0300);
    }
/* error exit handlers */
v0059:
    popv(9);
    return nil;
}



/* Code for sqhorner!* */

static Lisp_Object CC_sqhornerH(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0002, v0260;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for sqhorner*");
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
    v0002 = qvalue(elt(env, 1)); /* !*horner */
    if (v0002 == nil) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v0260 = qvalue(elt(env, 2)); /* ordl!* */
    v0002 = qvalue(elt(env, 3)); /* kord!* */
    v0002 = Lappend(nil, v0260, v0002);
    nil = C_nil;
    if (exception_pending()) goto v0103;
    env = stack[-3];
    stack[-2] = qvalue(elt(env, 3)); /* kord!* */
    qvalue(elt(env, 3)) = v0002; /* kord!* */
    v0002 = stack[-1];
    v0002 = qcar(v0002);
    fn = elt(env, 4); /* reorder */
    stack[0] = (*qfn1(fn))(qenv(fn), v0002);
    nil = C_nil;
    if (exception_pending()) goto v0178;
    env = stack[-3];
    v0002 = stack[-1];
    v0002 = qcdr(v0002);
    fn = elt(env, 4); /* reorder */
    v0002 = (*qfn1(fn))(qenv(fn), v0002);
    nil = C_nil;
    if (exception_pending()) goto v0178;
    env = stack[-3];
    fn = elt(env, 5); /* hornerf */
    v0002 = (*qfn1(fn))(qenv(fn), v0002);
    nil = C_nil;
    if (exception_pending()) goto v0178;
    env = stack[-3];
    v0002 = cons(stack[0], v0002);
    nil = C_nil;
    if (exception_pending()) goto v0178;
    env = stack[-3];
    fn = elt(env, 6); /* hornersq */
    v0002 = (*qfn1(fn))(qenv(fn), v0002);
    nil = C_nil;
    if (exception_pending()) goto v0178;
    env = stack[-3];
    qvalue(elt(env, 3)) = stack[-2]; /* kord!* */
    { popv(4); return onevalue(v0002); }
/* error exit handlers */
v0178:
    env = stack[-3];
    qvalue(elt(env, 3)) = stack[-2]; /* kord!* */
    popv(4);
    return nil;
v0103:
    popv(4);
    return nil;
}



/* Code for formsetq0 */

static Lisp_Object MS_CDECL CC_formsetq0(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0355, v0356, v0357, v0358;
    Lisp_Object fn;
    Lisp_Object v0003, v0016, v0000;
    va_list aa;
    va_start(aa, nargs);
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "formsetq0");
    va_start(aa, nargs);
    v0000 = va_arg(aa, Lisp_Object);
    v0016 = va_arg(aa, Lisp_Object);
    v0003 = va_arg(aa, Lisp_Object);
    va_end(aa);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for formsetq0");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0003,v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0016,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-3] = v0003;
    stack[-4] = v0016;
    stack[0] = v0000;
/* end of prologue */
    stack[-1] = nil;
    v0355 = stack[0];
    v0355 = qcdr(v0355);
    stack[0] = v0355;
    v0355 = qcar(v0355);
    stack[-2] = v0355;
    if (!(symbolp(v0355))) goto v0105;
    v0356 = stack[-2];
    v0355 = stack[-4];
    v0355 = Latsoc(nil, v0356, v0355);
    stack[-1] = v0355;
    goto v0105;

v0105:
    v0355 = stack[0];
    v0355 = qcdr(v0355);
    v0356 = qcar(v0355);
    v0355 = elt(env, 1); /* quote */
    if (!consp(v0356)) goto v0006;
    v0356 = qcar(v0356);
    if (!(v0356 == v0355)) goto v0006;
    v0355 = elt(env, 2); /* symbolic */
    stack[-3] = v0355;
    goto v0006;

v0006:
    v0355 = stack[0];
    v0355 = qcdr(v0355);
    v0358 = qcar(v0355);
    v0357 = stack[-4];
    v0356 = elt(env, 2); /* symbolic */
    v0355 = stack[-3];
    fn = elt(env, 24); /* convertmode */
    v0355 = (*qfnn(fn))(qenv(fn), 4, v0358, v0357, v0356, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    stack[-5] = v0355;
    v0355 = stack[-2];
    if (!consp(v0355)) goto v0249;
    v0355 = qvalue(elt(env, 3)); /* !*savedef */
    if (v0355 == nil) goto v0172;
    v0355 = stack[-2];
    v0356 = qcar(v0355);
    v0355 = elt(env, 4); /* inline */
    v0355 = get(v0356, v0355);
    env = stack[-6];
    if (!(v0355 == nil)) goto v0171;
    v0355 = stack[-2];
    v0356 = qcar(v0355);
    v0355 = elt(env, 5); /* smacro */
    v0355 = get(v0356, v0355);
    env = stack[-6];
    if (!(v0355 == nil)) goto v0171;

v0172:
    v0355 = qvalue(elt(env, 7)); /* t */
    goto v0265;

v0265:
    if (v0355 == nil) goto v0235;
    v0355 = stack[-2];
    v0355 = qcar(v0355);
    if (symbolp(v0355)) goto v0262;
    v0356 = stack[-2];
    v0355 = elt(env, 9); /* "assignment" */
    {
        popv(7);
        fn = elt(env, 25); /* typerr */
        return (*qfn2(fn))(qenv(fn), v0356, v0355);
    }

v0262:
    v0356 = stack[-2];
    v0355 = stack[-3];
    fn = elt(env, 26); /* macrochk */
    v0355 = (*qfn2(fn))(qenv(fn), v0356, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    stack[-2] = v0355;
    if (!consp(v0355)) goto v0185;
    v0355 = stack[-2];
    v0355 = qcar(v0355);
    fn = elt(env, 27); /* arrayp */
    v0355 = (*qfn1(fn))(qenv(fn), v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    goto v0046;

v0046:
    if (v0355 == nil) goto v0228;
    stack[0] = elt(env, 10); /* setel */
    v0357 = stack[-2];
    v0356 = stack[-4];
    v0355 = stack[-3];
    fn = elt(env, 28); /* intargfn */
    v0356 = (*qfnn(fn))(qenv(fn), 3, v0357, v0356, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    v0355 = stack[-5];
    {
        Lisp_Object v0360 = stack[0];
        popv(7);
        return list3(v0360, v0356, v0355);
    }

v0228:
    v0355 = stack[-2];
    if (!consp(v0355)) goto v0091;
    v0355 = stack[-2];
    v0355 = qcdr(v0355);
    if (v0355 == nil) goto v0241;
    v0355 = stack[-2];
    v0355 = qcar(v0355);
    if (!symbolp(v0355)) v0356 = nil;
    else { v0356 = qfastgets(v0355);
           if (v0356 != nil) { v0356 = elt(v0356, 2); /* rtype */
#ifdef RECORD_GET
             if (v0356 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v0356 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v0356 == SPID_NOPROP) v0356 = nil; }}
#endif
    v0355 = elt(env, 11); /* vector */
    if (v0356 == v0355) goto v0294;
    v0355 = stack[-2];
    v0355 = qcdr(v0355);
    v0355 = qcar(v0355);
    v0355 = Lsimple_vectorp(nil, v0355);
    env = stack[-6];
    if (!(v0355 == nil)) goto v0052;
    v0355 = stack[-2];
    v0355 = qcdr(v0355);
    v0356 = qcar(v0355);
    v0355 = elt(env, 12); /* vecfn */
    v0355 = Lflagpcar(nil, v0356, v0355);
    env = stack[-6];
    goto v0052;

v0052:
    if (v0355 == nil) goto v0361;
    v0357 = stack[0];
    v0356 = stack[-4];
    v0355 = stack[-3];
    {
        popv(7);
        fn = elt(env, 29); /* putvect */
        return (*qfnn(fn))(qenv(fn), 3, v0357, v0356, v0355);
    }

v0361:
    v0356 = stack[-2];
    v0355 = elt(env, 13); /* part */
    if (!consp(v0356)) goto v0031;
    v0356 = qcar(v0356);
    if (!(v0356 == v0355)) goto v0031;
    stack[-1] = elt(env, 14); /* list */
    v0355 = elt(env, 15); /* setpart!* */
    stack[0] = Lmkquote(nil, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    v0355 = stack[-2];
    v0357 = qcdr(v0355);
    v0356 = stack[-4];
    v0355 = stack[-3];
    fn = elt(env, 30); /* formlis */
    v0355 = (*qfnn(fn))(qenv(fn), 3, v0357, v0356, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    v0356 = list2star(stack[-1], stack[0], v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    v0355 = stack[-5];
    {
        popv(7);
        fn = elt(env, 31); /* aconc */
        return (*qfn2(fn))(qenv(fn), v0356, v0355);
    }

v0031:
    v0355 = stack[-2];
    if (!consp(v0355)) goto v0080;
    v0355 = stack[-2];
    v0356 = qcar(v0355);
    v0355 = elt(env, 16); /* setqfn */
    v0355 = get(v0356, v0355);
    env = stack[-6];
    stack[-1] = v0355;
    goto v0362;

v0362:
    if (v0355 == nil) goto v0363;
    v0355 = stack[-2];
    v0356 = qcdr(v0355);
    v0355 = stack[0];
    v0355 = qcdr(v0355);
    v0356 = Lappend(nil, v0356, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    v0355 = qvalue(elt(env, 8)); /* nil */
    fn = elt(env, 32); /* applsmacro */
    v0357 = (*qfnn(fn))(qenv(fn), 3, stack[-1], v0356, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    v0356 = stack[-4];
    v0355 = stack[-3];
    {
        popv(7);
        fn = elt(env, 33); /* form1 */
        return (*qfnn(fn))(qenv(fn), 3, v0357, v0356, v0355);
    }

v0363:
    v0356 = stack[-3];
    v0355 = elt(env, 2); /* symbolic */
    if (v0356 == v0355) goto v0364;
    v0355 = qvalue(elt(env, 8)); /* nil */
    goto v0365;

v0365:
    if (v0355 == nil) goto v0137;
    stack[0] = elt(env, 19); /* rsetf */
    v0357 = stack[-2];
    v0356 = stack[-4];
    v0355 = stack[-3];
    fn = elt(env, 33); /* form1 */
    v0356 = (*qfnn(fn))(qenv(fn), 3, v0357, v0356, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    v0355 = stack[-5];
    {
        Lisp_Object v0366 = stack[0];
        popv(7);
        return list3(v0366, v0356, v0355);
    }

v0137:
    stack[0] = elt(env, 20); /* setk */
    v0357 = stack[-2];
    v0356 = stack[-4];
    v0355 = elt(env, 21); /* algebraic */
    fn = elt(env, 33); /* form1 */
    v0356 = (*qfnn(fn))(qenv(fn), 3, v0357, v0356, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    v0355 = stack[-5];
    {
        Lisp_Object v0367 = stack[0];
        popv(7);
        return list3(v0367, v0356, v0355);
    }

v0364:
    v0355 = qvalue(elt(env, 17)); /* !*rlisp88 */
    if (!(v0355 == nil)) goto v0365;
    v0356 = stack[-2];
    v0355 = elt(env, 18); /* structfetch */
    v0355 = Leqcar(nil, v0356, v0355);
    env = stack[-6];
    goto v0365;

v0080:
    v0355 = qvalue(elt(env, 8)); /* nil */
    goto v0362;

v0294:
    v0355 = qvalue(elt(env, 7)); /* t */
    goto v0052;

v0241:
    v0355 = qvalue(elt(env, 8)); /* nil */
    goto v0052;

v0091:
    v0355 = qvalue(elt(env, 8)); /* nil */
    goto v0052;

v0185:
    v0355 = qvalue(elt(env, 8)); /* nil */
    goto v0046;

v0235:
    v0355 = stack[-2];
    if (symbolp(v0355)) goto v0130;
    v0356 = stack[-2];
    v0355 = elt(env, 9); /* "assignment" */
    {
        popv(7);
        fn = elt(env, 25); /* typerr */
        return (*qfn2(fn))(qenv(fn), v0356, v0355);
    }

v0130:
    v0356 = stack[-2];
    v0355 = elt(env, 22); /* reserved */
    v0355 = Lflagp(nil, v0356, v0355);
    env = stack[-6];
    if (v0355 == nil) goto v0210;
    v0356 = stack[-2];
    v0355 = stack[-4];
    v0355 = Latsoc(nil, v0356, v0355);
    v0355 = (v0355 == nil ? lisp_true : nil);
    goto v0368;

v0368:
    if (v0355 == nil) goto v0369;
    v0355 = stack[-2];
    {
        popv(7);
        fn = elt(env, 34); /* rsverr */
        return (*qfn1(fn))(qenv(fn), v0355);
    }

v0369:
    v0355 = stack[-2];
    if (!symbolp(v0355)) v0355 = nil;
    else { v0355 = qfastgets(v0355);
           if (v0355 != nil) { v0355 = elt(v0355, 17); /* share */
#ifdef RECORD_GET
             if (v0355 == SPID_NOPROP)
                record_get(elt(fastget_names, 17), 0),
                v0355 = nil;
             else record_get(elt(fastget_names, 17), 1),
                v0355 = lisp_true; }
           else record_get(elt(fastget_names, 17), 0); }
#else
             if (v0355 == SPID_NOPROP) v0355 = nil; else v0355 = lisp_true; }}
#endif
    if (v0355 == nil) goto v0370;
    v0356 = stack[-2];
    v0355 = stack[-4];
    fn = elt(env, 35); /* symbid */
    v0356 = (*qfn2(fn))(qenv(fn), v0356, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    v0355 = stack[-5];
    {
        popv(7);
        fn = elt(env, 36); /* mksetshare */
        return (*qfn2(fn))(qenv(fn), v0356, v0355);
    }

v0370:
    v0356 = stack[-3];
    v0355 = elt(env, 2); /* symbolic */
    if (v0356 == v0355) goto v0371;
    v0355 = stack[-1];
    if (!(v0355 == nil)) goto v0372;
    v0356 = stack[-5];
    v0355 = elt(env, 1); /* quote */
    v0355 = Leqcar(nil, v0356, v0355);
    env = stack[-6];
    goto v0372;

v0372:
    if (v0355 == nil) goto v0373;
    v0356 = stack[-2];
    v0355 = stack[-4];
    fn = elt(env, 35); /* symbid */
    v0356 = (*qfn2(fn))(qenv(fn), v0356, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    v0355 = stack[-5];
    {
        popv(7);
        fn = elt(env, 37); /* mksetq */
        return (*qfn2(fn))(qenv(fn), v0356, v0355);
    }

v0373:
    v0355 = stack[0];
    v0355 = qcdr(v0355);
    v0355 = qcar(v0355);
    v0355 = Lsimple_vectorp(nil, v0355);
    env = stack[-6];
    if (!(v0355 == nil)) goto v0374;
    v0355 = stack[0];
    v0355 = qcdr(v0355);
    v0356 = qcar(v0355);
    v0355 = elt(env, 12); /* vecfn */
    v0355 = Lflagpcar(nil, v0356, v0355);
    env = stack[-6];
    if (!(v0355 == nil)) goto v0374;
    stack[0] = elt(env, 20); /* setk */
    v0355 = stack[-2];
    v0356 = Lmkquote(nil, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    v0355 = stack[-5];
    {
        Lisp_Object v0375 = stack[0];
        popv(7);
        return list3(v0375, v0356, v0355);
    }

v0374:
    stack[-1] = elt(env, 23); /* setv */
    v0355 = stack[-2];
    v0356 = Lmkquote(nil, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    v0355 = stack[0];
    v0355 = qcdr(v0355);
    v0355 = qcar(v0355);
    {
        Lisp_Object v0181 = stack[-1];
        popv(7);
        return list3(v0181, v0356, v0355);
    }

v0371:
    v0355 = qvalue(elt(env, 7)); /* t */
    goto v0372;

v0210:
    v0355 = qvalue(elt(env, 8)); /* nil */
    goto v0368;

v0171:
    v0355 = Lposn(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    v0355 = (Lisp_Object)zerop(v0355);
    v0355 = v0355 ? lisp_true : nil;
    env = stack[-6];
    if (!(v0355 == nil)) goto v0168;
    v0355 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    goto v0168;

v0168:
    v0355 = elt(env, 6); /* "+++ Assign via inline or smacro: " */
    v0355 = Lprinc(nil, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    v0355 = stack[-2];
    v0355 = Lprint(nil, v0355);
    nil = C_nil;
    if (exception_pending()) goto v0359;
    env = stack[-6];
    goto v0172;

v0249:
    v0355 = qvalue(elt(env, 8)); /* nil */
    goto v0265;
/* error exit handlers */
v0359:
    popv(7);
    return nil;
}



/* Code for cgp_number */

static Lisp_Object CC_cgp_number(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0211, v0212;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for cgp_number");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0211 = v0000;
/* end of prologue */
    v0212 = v0211;
    v0211 = (Lisp_Object)81; /* 5 */
    {
        fn = elt(env, 1); /* nth */
        return (*qfn2(fn))(qenv(fn), v0212, v0211);
    }
}



/* Code for om2ir */

static Lisp_Object MS_CDECL CC_om2ir(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0220, v0067, v0095;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "om2ir");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for om2ir");
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
    v0220 = qvalue(elt(env, 1)); /* nil */
    stack[-1] = v0220;
    v0220 = elt(env, 2); /* (safe_atts char ch atts count temp space temp2) 
*/
    fn = elt(env, 12); /* fluid */
    v0220 = (*qfn1(fn))(qenv(fn), v0220);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-2];
    v0220 = (Lisp_Object)17; /* 1 */
    v0220 = Lsmkvect(nil, v0220);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-2];
    stack[0] = v0220;
    v0095 = stack[0];
    v0067 = (Lisp_Object)1; /* 0 */
    v0220 = (Lisp_Object)513; /* 32 */
    v0220 = Lsputv(nil, 3, v0095, v0067, v0220);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-2];
    v0220 = stack[0];
    v0220 = Lintern(nil, v0220);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-2];
    qvalue(elt(env, 3)) = v0220; /* space */
    v0220 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 4)) = v0220; /* count */
    v0220 = Lreadch(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-2];
    qvalue(elt(env, 5)) = v0220; /* ch */
    v0220 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 6)) = v0220; /* temp2 */
    fn = elt(env, 13); /* lex */
    v0220 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-2];
    v0067 = qvalue(elt(env, 7)); /* char */
    v0220 = elt(env, 8); /* (o m o b j) */
    if (equal(v0067, v0220)) goto v0223;
    v0067 = elt(env, 9); /* "<omobj>" */
    v0220 = (Lisp_Object)33; /* 2 */
    fn = elt(env, 14); /* errorml */
    v0220 = (*qfn2(fn))(qenv(fn), v0067, v0220);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-2];
    goto v0106;

v0106:
    fn = elt(env, 13); /* lex */
    v0220 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-2];
    v0067 = qvalue(elt(env, 7)); /* char */
    v0220 = elt(env, 10); /* (!/ o m o b j) */
    if (equal(v0067, v0220)) goto v0112;
    v0067 = elt(env, 11); /* "</omobj>" */
    v0220 = (Lisp_Object)305; /* 19 */
    fn = elt(env, 14); /* errorml */
    v0220 = (*qfn2(fn))(qenv(fn), v0067, v0220);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }

v0112:
    v0220 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }

v0223:
    fn = elt(env, 13); /* lex */
    v0220 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-2];
    fn = elt(env, 15); /* omobj */
    v0220 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v0110;
    env = stack[-2];
    stack[-1] = v0220;
    goto v0106;
/* error exit handlers */
v0110:
    popv(3);
    return nil;
}



/* Code for dipequal */

static Lisp_Object CC_dipequal(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0265, v0096;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dipequal");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0000;
/* end of prologue */

v0009:
    v0265 = stack[-1];
    if (v0265 == nil) goto v0010;
    v0265 = stack[0];
    if (v0265 == nil) goto v0013;
    v0265 = stack[-1];
    v0265 = qcdr(v0265);
    v0096 = qcar(v0265);
    v0265 = stack[0];
    v0265 = qcdr(v0265);
    v0265 = qcar(v0265);
    if (equal(v0096, v0265)) goto v0178;
    v0265 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0265); }

v0178:
    v0265 = stack[-1];
    v0096 = qcar(v0265);
    v0265 = stack[0];
    v0265 = qcar(v0265);
    fn = elt(env, 2); /* evequal */
    v0265 = (*qfn2(fn))(qenv(fn), v0096, v0265);
    nil = C_nil;
    if (exception_pending()) goto v0041;
    env = stack[-2];
    if (v0265 == nil) goto v0101;
    v0265 = stack[-1];
    v0265 = qcdr(v0265);
    v0265 = qcdr(v0265);
    stack[-1] = v0265;
    v0265 = stack[0];
    v0265 = qcdr(v0265);
    v0265 = qcdr(v0265);
    stack[0] = v0265;
    goto v0009;

v0101:
    v0265 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0265); }

v0013:
    v0265 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0265); }

v0010:
    v0265 = stack[0];
    v0265 = (v0265 == nil ? lisp_true : nil);
    { popv(3); return onevalue(v0265); }
/* error exit handlers */
v0041:
    popv(3);
    return nil;
}



/* Code for partitexdf */

static Lisp_Object CC_partitexdf(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0115;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for partitexdf");
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
    v0115 = v0000;
/* end of prologue */
    v0115 = qcar(v0115);
    fn = elt(env, 1); /* partitop */
    v0115 = (*qfn1(fn))(qenv(fn), v0115);
    nil = C_nil;
    if (exception_pending()) goto v0261;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 2); /* exdfpf */
        return (*qfn1(fn))(qenv(fn), v0115);
    }
/* error exit handlers */
v0261:
    popv(1);
    return nil;
}



/* Code for collectphystype */

static Lisp_Object CC_collectphystype(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0265;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for collectphystype");
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
    v0265 = stack[0];
    fn = elt(env, 2); /* physopp */
    v0265 = (*qfn1(fn))(qenv(fn), v0265);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    env = stack[-4];
    if (v0265 == nil) goto v0009;
    v0265 = stack[0];
    fn = elt(env, 3); /* getphystype */
    v0265 = (*qfn1(fn))(qenv(fn), v0265);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    popv(5);
    return ncons(v0265);

v0009:
    v0265 = stack[0];
    if (!consp(v0265)) goto v0212;
    v0265 = stack[0];
    stack[-3] = v0265;
    v0265 = stack[-3];
    if (v0265 == nil) goto v0174;
    v0265 = stack[-3];
    v0265 = qcar(v0265);
    fn = elt(env, 3); /* getphystype */
    v0265 = (*qfn1(fn))(qenv(fn), v0265);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    env = stack[-4];
    v0265 = ncons(v0265);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    env = stack[-4];
    stack[-1] = v0265;
    stack[-2] = v0265;
    goto v0005;

v0005:
    v0265 = stack[-3];
    v0265 = qcdr(v0265);
    stack[-3] = v0265;
    v0265 = stack[-3];
    if (v0265 == nil) goto v0007;
    stack[0] = stack[-1];
    v0265 = stack[-3];
    v0265 = qcar(v0265);
    fn = elt(env, 3); /* getphystype */
    v0265 = (*qfn1(fn))(qenv(fn), v0265);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    env = stack[-4];
    v0265 = ncons(v0265);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    env = stack[-4];
    v0265 = Lrplacd(nil, stack[0], v0265);
    nil = C_nil;
    if (exception_pending()) goto v0172;
    env = stack[-4];
    v0265 = stack[-1];
    v0265 = qcdr(v0265);
    stack[-1] = v0265;
    goto v0005;

v0007:
    v0265 = stack[-2];
    goto v0218;

v0218:
    {
        popv(5);
        fn = elt(env, 4); /* deletemult!* */
        return (*qfn1(fn))(qenv(fn), v0265);
    }

v0174:
    v0265 = qvalue(elt(env, 1)); /* nil */
    goto v0218;

v0212:
    v0265 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0265); }
/* error exit handlers */
v0172:
    popv(5);
    return nil;
}



/* Code for can_be_proved */

static Lisp_Object CC_can_be_proved(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0085, v0105;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for can_be_proved");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0000;
/* end of prologue */

v0009:
    v0085 = stack[-1];
    if (v0085 == nil) goto v0010;
    v0085 = stack[-1];
    v0105 = qcar(v0085);
    v0085 = stack[0];
    fn = elt(env, 3); /* can_be_p */
    v0085 = (*qfn2(fn))(qenv(fn), v0105, v0085);
    nil = C_nil;
    if (exception_pending()) goto v0001;
    env = stack[-2];
    if (v0085 == nil) goto v0074;
    v0085 = stack[-1];
    v0085 = qcdr(v0085);
    stack[-1] = v0085;
    goto v0009;

v0074:
    v0085 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v0085); }

v0010:
    v0085 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v0085); }
/* error exit handlers */
v0001:
    popv(3);
    return nil;
}



/* Code for subs3t */

static Lisp_Object CC_subs3t(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0400, v0401, v0402, v0403;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for subs3t");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    v0401 = v0016;
    stack[-4] = v0000;
/* end of prologue */
    stack[-5] = nil;
    v0400 = stack[-4];
    stack[0] = qcar(v0400);
    v0400 = stack[-4];
    v0400 = qcdr(v0400);
    if (!consp(v0400)) goto v0106;
    v0400 = stack[-4];
    v0400 = qcdr(v0400);
    v0400 = qcar(v0400);
    v0400 = (consp(v0400) ? nil : lisp_true);
    goto v0105;

v0105:
    if (v0400 == nil) goto v0071;
    v0400 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 7); /* sizchk */
    v0400 = (*qfn2(fn))(qenv(fn), v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    goto v0107;

v0107:
    fn = elt(env, 8); /* mtchk */
    v0400 = (*qfn2(fn))(qenv(fn), stack[0], v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    stack[-3] = v0400;
    v0400 = stack[-3];
    if (v0400 == nil) goto v0405;
    v0400 = stack[-3];
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    if (v0400 == nil) goto v0212;
    v0400 = stack[-4];
    v0402 = qcdr(v0400);
    v0401 = stack[-3];
    v0400 = qvalue(elt(env, 2)); /* nil */
    fn = elt(env, 9); /* subs3f1 */
    v0400 = (*qfnn(fn))(qenv(fn), 3, v0402, v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    stack[-2] = v0400;
    v0400 = qvalue(elt(env, 3)); /* mchfg!* */
    if (v0400 == nil) goto v0405;
    v0400 = stack[-4];
    v0401 = qcar(v0400);
    v0400 = (Lisp_Object)17; /* 1 */
    v0400 = cons(v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0401 = ncons(v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0400 = (Lisp_Object)17; /* 1 */
    v0401 = cons(v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0400 = stack[-2];
    {
        popv(7);
        fn = elt(env, 10); /* multsq */
        return (*qfn2(fn))(qenv(fn), v0401, v0400);
    }

v0405:
    v0400 = stack[-4];
    v0401 = ncons(v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    v0400 = (Lisp_Object)17; /* 1 */
    popv(7);
    return cons(v0401, v0400);

v0212:
    v0400 = stack[-3];
    v0400 = qcar(v0400);
    v0400 = qcdr(v0400);
    v0400 = qcdr(v0400);
    stack[-3] = v0400;
    v0400 = stack[-3];
    v0400 = qcdr(v0400);
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    stack[-1] = v0400;
    v0400 = qvalue(elt(env, 2)); /* nil */
    qvalue(elt(env, 3)) = v0400; /* mchfg!* */
    v0400 = stack[-4];
    v0402 = qcdr(v0400);
    v0401 = qvalue(elt(env, 4)); /* !*match */
    v0400 = qvalue(elt(env, 2)); /* nil */
    fn = elt(env, 9); /* subs3f1 */
    v0400 = (*qfnn(fn))(qenv(fn), 3, v0402, v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    stack[-2] = v0400;
    v0400 = qvalue(elt(env, 1)); /* t */
    qvalue(elt(env, 3)) = v0400; /* mchfg!* */
    v0400 = stack[-1];
    v0401 = qcar(v0400);
    v0400 = stack[-4];
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    if (equal(v0401, v0400)) goto v0056;
    v0400 = stack[-1];
    v0400 = qcar(v0400);
    fn = elt(env, 11); /* simp */
    stack[0] = (*qfn1(fn))(qenv(fn), v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0400 = stack[-4];
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    fn = elt(env, 11); /* simp */
    v0400 = (*qfn1(fn))(qenv(fn), v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    if (equal(stack[0], v0400)) goto v0323;
    v0403 = elt(env, 0); /* subs3t */
    v0402 = stack[-4];
    v0401 = stack[-3];
    v0400 = stack[-1];
    v0400 = list4(v0403, v0402, v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    fn = elt(env, 12); /* errach */
    v0400 = (*qfn1(fn))(qenv(fn), v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    goto v0323;

v0323:
    v0400 = stack[-1];
    v0401 = qcdr(v0400);
    v0400 = stack[-4];
    v0400 = qcar(v0400);
    v0400 = qcdr(v0400);
    if (equal(v0401, v0400)) goto v0406;
    v0400 = stack[-4];
    v0400 = qcar(v0400);
    stack[0] = qcar(v0400);
    v0400 = stack[-4];
    v0400 = qcar(v0400);
    v0401 = qcdr(v0400);
    v0400 = stack[-1];
    v0400 = qcdr(v0400);
    v0400 = difference2(v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    fn = elt(env, 13); /* to */
    v0401 = (*qfn2(fn))(qenv(fn), stack[0], v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0400 = (Lisp_Object)17; /* 1 */
    v0400 = cons(v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0401 = ncons(v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0400 = (Lisp_Object)17; /* 1 */
    v0401 = cons(v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0400 = stack[-2];
    fn = elt(env, 10); /* multsq */
    v0400 = (*qfn2(fn))(qenv(fn), v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    stack[-2] = v0400;
    goto v0406;

v0406:
    v0400 = stack[-3];
    fn = elt(env, 14); /* simpcar */
    v0401 = (*qfn1(fn))(qenv(fn), v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0400 = stack[-2];
    fn = elt(env, 10); /* multsq */
    v0400 = (*qfn2(fn))(qenv(fn), v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    stack[-2] = v0400;
    v0400 = stack[-3];
    v0400 = qcdr(v0400);
    v0400 = qcar(v0400);
    v0400 = qcdr(v0400);
    stack[-3] = v0400;
    v0400 = stack[-3];
    if (v0400 == nil) { Lisp_Object res = stack[-2]; popv(7); return onevalue(res); }
    v0400 = (Lisp_Object)17; /* 1 */
    stack[-1] = v0400;
    goto v0013;

v0013:
    v0400 = stack[-3];
    if (v0400 == nil) goto v0014;
    v0400 = stack[-3];
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    if (!consp(v0400)) goto v0027;
    v0400 = stack[-3];
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    fn = elt(env, 15); /* sfp */
    v0400 = (*qfn1(fn))(qenv(fn), v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    goto v0271;

v0271:
    if (v0400 == nil) goto v0030;
    v0400 = stack[-3];
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    goto v0032;

v0032:
    stack[0] = v0400;
    v0400 = stack[0];
    fn = elt(env, 16); /* noncomp */
    v0400 = (*qfn1(fn))(qenv(fn), v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    if (!(v0400 == nil)) goto v0266;
    v0400 = qvalue(elt(env, 6)); /* !*mcd */
    if (!(v0400 == nil)) goto v0143;

v0266:
    v0400 = qvalue(elt(env, 1)); /* t */
    stack[-5] = v0400;
    goto v0143;

v0143:
    v0400 = stack[-5];
    if (v0400 == nil) goto v0407;
    v0400 = stack[-3];
    v0400 = qcar(v0400);
    v0400 = qcdr(v0400);
    v0400 = negate(v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    goto v0408;

v0408:
    fn = elt(env, 17); /* mksp */
    v0401 = (*qfn2(fn))(qenv(fn), stack[0], v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0400 = (Lisp_Object)17; /* 1 */
    v0400 = cons(v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0400 = ncons(v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    fn = elt(env, 18); /* multf */
    v0400 = (*qfn2(fn))(qenv(fn), stack[-1], v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    stack[-1] = v0400;
    v0400 = stack[-3];
    v0400 = qcdr(v0400);
    stack[-3] = v0400;
    goto v0013;

v0407:
    v0400 = stack[-3];
    v0400 = qcar(v0400);
    v0400 = qcdr(v0400);
    goto v0408;

v0030:
    v0400 = qvalue(elt(env, 2)); /* nil */
    stack[-4] = qvalue(elt(env, 5)); /* subfg!* */
    qvalue(elt(env, 5)) = v0400; /* subfg!* */
    v0400 = stack[-3];
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    fn = elt(env, 11); /* simp */
    v0400 = (*qfn1(fn))(qenv(fn), v0400);
    nil = C_nil;
    if (exception_pending()) goto v0409;
    env = stack[-6];
    stack[0] = v0400;
    v0400 = stack[0];
    fn = elt(env, 19); /* kernp */
    v0400 = (*qfn1(fn))(qenv(fn), v0400);
    nil = C_nil;
    if (exception_pending()) goto v0409;
    env = stack[-6];
    if (v0400 == nil) goto v0079;
    v0400 = stack[0];
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    v0401 = qcar(v0400);
    stack[0] = v0401;
    v0400 = stack[-3];
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    if (!consp(v0401)) goto v0079;
    v0401 = qcar(v0401);
    if (!(v0401 == v0400)) goto v0079;
    v0400 = stack[0];
    goto v0149;

v0149:
    qvalue(elt(env, 5)) = stack[-4]; /* subfg!* */
    goto v0032;

v0079:
    v0400 = stack[-3];
    v0400 = qcar(v0400);
    v0400 = qcar(v0400);
    fn = elt(env, 20); /* revop1 */
    v0400 = (*qfn1(fn))(qenv(fn), v0400);
    nil = C_nil;
    if (exception_pending()) goto v0409;
    env = stack[-6];
    goto v0149;

v0027:
    v0400 = qvalue(elt(env, 1)); /* t */
    goto v0271;

v0014:
    v0400 = stack[-5];
    if (v0400 == nil) goto v0141;
    v0401 = stack[-1];
    v0400 = stack[-2];
    v0400 = qcar(v0400);
    fn = elt(env, 18); /* multf */
    v0401 = (*qfn2(fn))(qenv(fn), v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    v0400 = stack[-2];
    v0400 = qcdr(v0400);
    popv(7);
    return cons(v0401, v0400);

v0141:
    v0400 = stack[-2];
    stack[0] = qcar(v0400);
    v0401 = stack[-1];
    v0400 = stack[-2];
    v0400 = qcdr(v0400);
    fn = elt(env, 18); /* multf */
    v0400 = (*qfn2(fn))(qenv(fn), v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    {
        Lisp_Object v0410 = stack[0];
        popv(7);
        return cons(v0410, v0400);
    }

v0056:
    v0401 = stack[-1];
    v0400 = stack[-4];
    v0400 = qcar(v0400);
    if (equal(v0401, v0400)) goto v0406;
    v0400 = stack[-4];
    v0400 = qcar(v0400);
    stack[0] = qcar(v0400);
    v0400 = stack[-4];
    v0400 = qcar(v0400);
    v0401 = qcdr(v0400);
    v0400 = stack[-1];
    v0400 = qcdr(v0400);
    v0400 = difference2(v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    fn = elt(env, 13); /* to */
    v0401 = (*qfn2(fn))(qenv(fn), stack[0], v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0400 = (Lisp_Object)17; /* 1 */
    v0400 = cons(v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0401 = ncons(v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0400 = (Lisp_Object)17; /* 1 */
    v0401 = cons(v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    v0400 = stack[-2];
    fn = elt(env, 10); /* multsq */
    v0400 = (*qfn2(fn))(qenv(fn), v0401, v0400);
    nil = C_nil;
    if (exception_pending()) goto v0404;
    env = stack[-6];
    stack[-2] = v0400;
    goto v0406;

v0071:
    v0400 = v0401;
    goto v0107;

v0106:
    v0400 = qvalue(elt(env, 1)); /* t */
    goto v0105;
/* error exit handlers */
v0409:
    env = stack[-6];
    qvalue(elt(env, 5)) = stack[-4]; /* subfg!* */
    popv(7);
    return nil;
v0404:
    popv(7);
    return nil;
}



/* Code for st_consolidate */

static Lisp_Object CC_st_consolidate(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0048, v0049;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for st_consolidate");
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
    stack[-1] = nil;
    v0048 = stack[-3];
    if (v0048 == nil) goto v0191;
    v0048 = stack[-3];
    v0048 = qcdr(v0048);
    v0048 = qcar(v0048);
    if (is_number(v0048)) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    v0048 = qvalue(elt(env, 2)); /* t */
    stack[-2] = v0048;
    v0048 = stack[-3];
    v0048 = qcdr(v0048);
    v0048 = Lreverse(nil, v0048);
    nil = C_nil;
    if (exception_pending()) goto v0050;
    env = stack[-5];
    stack[0] = v0048;
    goto v0074;

v0074:
    v0048 = stack[0];
    if (v0048 == nil) goto v0075;
    v0048 = stack[0];
    v0048 = qcar(v0048);
    v0048 = CC_st_consolidate(env, v0048);
    nil = C_nil;
    if (exception_pending()) goto v0050;
    env = stack[-5];
    v0049 = v0048;
    if (v0049 == nil) goto v0007;
    v0049 = v0048;
    v0049 = qcdr(v0049);
    v0049 = qcdr(v0049);
    if (v0049 == nil) goto v0112;
    v0049 = qvalue(elt(env, 1)); /* nil */
    stack[-2] = v0049;
    goto v0171;

v0171:
    v0049 = v0048;
    v0048 = stack[-1];
    v0048 = cons(v0049, v0048);
    nil = C_nil;
    if (exception_pending()) goto v0050;
    env = stack[-5];
    stack[-1] = v0048;
    goto v0007;

v0007:
    v0048 = stack[0];
    v0048 = qcdr(v0048);
    stack[0] = v0048;
    goto v0074;

v0112:
    v0049 = elt(env, 3); /* !* */
    v0048 = qcdr(v0048);
    v0048 = qcar(v0048);
    v0048 = list2(v0049, v0048);
    nil = C_nil;
    if (exception_pending()) goto v0050;
    env = stack[-5];
    goto v0171;

v0075:
    v0048 = stack[-1];
    if (v0048 == nil) goto v0057;
    v0048 = stack[-1];
    v0048 = qcdr(v0048);
    if (v0048 == nil) goto v0069;
    v0048 = stack[-2];
    if (v0048 == nil) goto v0411;
    v0048 = stack[-1];
    stack[-4] = v0048;
    v0048 = stack[-4];
    if (v0048 == nil) goto v0405;
    v0048 = stack[-4];
    v0048 = qcar(v0048);
    v0048 = qcdr(v0048);
    v0048 = qcar(v0048);
    v0048 = ncons(v0048);
    nil = C_nil;
    if (exception_pending()) goto v0050;
    env = stack[-5];
    stack[-1] = v0048;
    stack[-2] = v0048;
    goto v0254;

v0254:
    v0048 = stack[-4];
    v0048 = qcdr(v0048);
    stack[-4] = v0048;
    v0048 = stack[-4];
    if (v0048 == nil) goto v0253;
    stack[0] = stack[-1];
    v0048 = stack[-4];
    v0048 = qcar(v0048);
    v0048 = qcdr(v0048);
    v0048 = qcar(v0048);
    v0048 = ncons(v0048);
    nil = C_nil;
    if (exception_pending()) goto v0050;
    env = stack[-5];
    v0048 = Lrplacd(nil, stack[0], v0048);
    nil = C_nil;
    if (exception_pending()) goto v0050;
    env = stack[-5];
    v0048 = stack[-1];
    v0048 = qcdr(v0048);
    stack[-1] = v0048;
    goto v0254;

v0253:
    v0048 = stack[-2];
    goto v0182;

v0182:
    stack[-1] = v0048;
    goto v0411;

v0411:
    v0048 = stack[-3];
    v0049 = qcar(v0048);
    v0048 = stack[-1];
    popv(6);
    return cons(v0049, v0048);

v0405:
    v0048 = qvalue(elt(env, 1)); /* nil */
    goto v0182;

v0069:
    v0048 = stack[-1];
    v0048 = qcar(v0048);
    { popv(6); return onevalue(v0048); }

v0057:
    v0048 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0048); }

v0191:
    v0048 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0048); }
/* error exit handlers */
v0050:
    popv(6);
    return nil;
}



/* Code for ordexn */

static Lisp_Object CC_ordexn(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0168, v0065;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ordexn");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0016;
    stack[-2] = v0000;
/* end of prologue */
    stack[0] = nil;
    stack[-3] = nil;
    goto v0261;

v0261:
    v0168 = stack[-1];
    if (v0168 == nil) goto v0218;
    v0065 = stack[-2];
    v0168 = stack[-1];
    v0168 = qcar(v0168);
    if (v0065 == v0168) goto v0105;
    v0168 = stack[-2];
    if (v0168 == nil) goto v0108;
    v0065 = stack[-2];
    v0168 = stack[-1];
    v0168 = qcar(v0168);
    fn = elt(env, 2); /* ordop */
    v0168 = (*qfn2(fn))(qenv(fn), v0065, v0168);
    nil = C_nil;
    if (exception_pending()) goto v0258;
    env = stack[-4];
    if (v0168 == nil) goto v0108;
    v0065 = stack[-2];
    v0168 = stack[-3];
    v0168 = cons(v0065, v0168);
    nil = C_nil;
    if (exception_pending()) goto v0258;
    env = stack[-4];
    v0065 = Lreverse(nil, v0168);
    nil = C_nil;
    if (exception_pending()) goto v0258;
    env = stack[-4];
    v0168 = stack[-1];
    v0168 = Lappend(nil, v0065, v0168);
    nil = C_nil;
    if (exception_pending()) goto v0258;
    {
        Lisp_Object v0182 = stack[0];
        popv(5);
        return cons(v0182, v0168);
    }

v0108:
    v0168 = stack[-1];
    v0065 = qcar(v0168);
    v0168 = stack[-3];
    v0168 = cons(v0065, v0168);
    nil = C_nil;
    if (exception_pending()) goto v0258;
    env = stack[-4];
    stack[-3] = v0168;
    v0168 = stack[-1];
    v0168 = qcdr(v0168);
    stack[-1] = v0168;
    v0168 = stack[0];
    v0168 = (v0168 == nil ? lisp_true : nil);
    stack[0] = v0168;
    goto v0261;

v0105:
    v0168 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0168); }

v0218:
    v0065 = stack[-2];
    v0168 = stack[-3];
    v0168 = cons(v0065, v0168);
    nil = C_nil;
    if (exception_pending()) goto v0258;
    env = stack[-4];
    v0168 = Lreverse(nil, v0168);
    nil = C_nil;
    if (exception_pending()) goto v0258;
    {
        Lisp_Object v0254 = stack[0];
        popv(5);
        return cons(v0254, v0168);
    }
/* error exit handlers */
v0258:
    popv(5);
    return nil;
}



/* Code for ordered!-gcd!-mod!-p */

static Lisp_Object CC_orderedKgcdKmodKp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0016)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0108, v0109;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ordered-gcd-mod-p");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0016,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0016);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0016;
    stack[-1] = v0000;
/* end of prologue */
    v0108 = (Lisp_Object)1; /* 0 */
    stack[-2] = v0108;
    goto v0191;

v0191:
    v0109 = stack[-1];
    v0108 = stack[0];
    fn = elt(env, 3); /* reduce!-degree!-mod!-p */
    v0108 = (*qfn2(fn))(qenv(fn), v0109, v0108);
    nil = C_nil;
    if (exception_pending()) goto v0070;
    env = stack[-3];
    stack[-1] = v0108;
    v0108 = stack[-1];
    if (v0108 == nil) goto v0019;
    v0108 = stack[-2];
    v0108 = add1(v0108);
    nil = C_nil;
    if (exception_pending()) goto v0070;
    env = stack[-3];
    stack[-2] = v0108;
    v0108 = stack[-1];
    if (!consp(v0108)) goto v0223;
    v0108 = stack[-1];
    v0108 = qcar(v0108);
    v0108 = (consp(v0108) ? nil : lisp_true);
    goto v0106;

v0106:
    if (v0108 == nil) goto v0044;
    v0109 = qvalue(elt(env, 2)); /* reduction!-count */
    v0108 = stack[-2];
    v0108 = plus2(v0109, v0108);
    nil = C_nil;
    if (exception_pending()) goto v0070;
    env = stack[-3];
    qvalue(elt(env, 2)) = v0108; /* reduction!-count */
    v0108 = (Lisp_Object)17; /* 1 */
    { popv(4); return onevalue(v0108); }

v0044:
    v0108 = stack[-1];
    v0108 = qcar(v0108);
    v0108 = qcar(v0108);
    v0109 = qcdr(v0108);
    v0108 = stack[0];
    v0108 = qcar(v0108);
    v0108 = qcar(v0108);
    v0108 = qcdr(v0108);
    v0108 = (Lisp_Object)lessp2(v0109, v0108);
    nil = C_nil;
    if (exception_pending()) goto v0070;
    v0108 = v0108 ? lisp_true : nil;
    env = stack[-3];
    if (v0108 == nil) goto v0191;
    v0109 = qvalue(elt(env, 2)); /* reduction!-count */
    v0108 = stack[-2];
    v0108 = plus2(v0109, v0108);
    nil = C_nil;
    if (exception_pending()) goto v0070;
    env = stack[-3];
    qvalue(elt(env, 2)) = v0108; /* reduction!-count */
    v0108 = (Lisp_Object)1; /* 0 */
    stack[-2] = v0108;
    v0108 = stack[-1];
    v0109 = v0108;
    v0108 = stack[0];
    stack[-1] = v0108;
    v0108 = v0109;
    stack[0] = v0108;
    goto v0191;

v0223:
    v0108 = qvalue(elt(env, 1)); /* t */
    goto v0106;

v0019:
    v0108 = stack[0];
    {
        popv(4);
        fn = elt(env, 4); /* monic!-mod!-p */
        return (*qfn1(fn))(qenv(fn), v0108);
    }
/* error exit handlers */
v0070:
    popv(4);
    return nil;
}



setup_type const u23_setup[] =
{
    {"repeats",                 CC_repeats,     too_many_1,    wrong_no_1},
    {"st_sorttree",             wrong_no_na,    wrong_no_nb,   (n_args *)CC_st_sorttree},
    {"quotfail-in-vector",      wrong_no_na,    wrong_no_nb,   (n_args *)CC_quotfailKinKvector},
    {"open",                    too_few_2,      CC_open,       wrong_no_2},
    {"simpiden",                CC_simpiden,    too_many_1,    wrong_no_1},
    {"wusort",                  CC_wusort,      too_many_1,    wrong_no_1},
    {"simpcv",                  too_few_2,      CC_simpcv,     wrong_no_2},
    {"dvfsf_simplat1",          too_few_2,      CC_dvfsf_simplat1,wrong_no_2},
    {"diff-k-times-mod-p",      wrong_no_na,    wrong_no_nb,   (n_args *)CC_diffKkKtimesKmodKp},
    {"matrixrowom",             CC_matrixrowom, too_many_1,    wrong_no_1},
    {"rootextractsq",           CC_rootextractsq,too_many_1,   wrong_no_1},
    {"dip2vdp",                 CC_dip2vdp,     too_many_1,    wrong_no_1},
    {"aconc",                   too_few_2,      CC_aconc,      wrong_no_2},
    {"physopordchk*",           too_few_2,      CC_physopordchkH,wrong_no_2},
    {"assert_error",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_assert_error},
    {"numlist_ordp",            too_few_2,      CC_numlist_ordp,wrong_no_2},
    {"lambda_n4e0tk_3",         too_few_2,      CC_lambda_n4e0tk_3,wrong_no_2},
    {"hasarg",                  too_few_2,      CC_hasarg,     wrong_no_2},
    {"cl_f2ml",                 too_few_2,      CC_cl_f2ml,    wrong_no_2},
    {"sfto_pdecf",              CC_sfto_pdecf,  too_many_1,    wrong_no_1},
    {"rndifference:",           too_few_2,      CC_rndifferenceT,wrong_no_2},
    {"offexpchk",               CC_offexpchk,   too_many_1,    wrong_no_1},
    {"fctrf1",                  CC_fctrf1,      too_many_1,    wrong_no_1},
    {"mml2ir",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_mml2ir},
    {"evalvars",                CC_evalvars,    too_many_1,    wrong_no_1},
    {"dm-minus",                CC_dmKminus,    too_many_1,    wrong_no_1},
    {"formc*",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_formcH},
    {"prop-simp1",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_propKsimp1},
    {"sqhorner*",               CC_sqhornerH,   too_many_1,    wrong_no_1},
    {"formsetq0",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_formsetq0},
    {"cgp_number",              CC_cgp_number,  too_many_1,    wrong_no_1},
    {"om2ir",                   wrong_no_na,    wrong_no_nb,   (n_args *)CC_om2ir},
    {"dipequal",                too_few_2,      CC_dipequal,   wrong_no_2},
    {"partitexdf",              CC_partitexdf,  too_many_1,    wrong_no_1},
    {"collectphystype",         CC_collectphystype,too_many_1, wrong_no_1},
    {"can_be_proved",           too_few_2,      CC_can_be_proved,wrong_no_2},
    {"subs3t",                  too_few_2,      CC_subs3t,     wrong_no_2},
    {"st_consolidate",          CC_st_consolidate,too_many_1,  wrong_no_1},
    {"ordexn",                  too_few_2,      CC_ordexn,     wrong_no_2},
    {"ordered-gcd-mod-p",       too_few_2,      CC_orderedKgcdKmodKp,wrong_no_2},
    {NULL, (one_args *)"u23", (two_args *)"11229 5688744 5111290", 0}
};

/* end of generated code */

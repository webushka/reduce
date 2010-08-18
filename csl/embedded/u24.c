
/* $destdir/generated-c\u24.c Machine generated C code */

/* Signature: 00000000 13-Aug-2010 */

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
#if !defined UNDER_CE && ((defined HAVE_SOCKET && defined HAVE_SYS_SOCKET_H) || defined WIN32)
#define SOCKETS                  1
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
#  define MAX_HEAPSIZE       (SIXTY_FOUR_BIT ? 153600 : 2048)
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
#define PAGE_MASK               ((((uint32_t)1) << (32-PAGE_BITS)) - 1)
#define OFFSET_MASK             ((((uint32_t)1) << PAGE_BITS) - 1)
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
#define UNWIND_ERROR      0x100       
#define UNWIND_UNWIND     0x200       
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
#define HEADLINE_FLAG 0x08
#define MESSAGES_FLAG 0x10
#define ALWAYS_NOISY  0x20
#define verbos_flag (miscflags & GC_MSG_BITS)
 
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
#ifdef CHECK_STACK
extern int check_stack(char *file, int line);
#define if_check_stack \
   if (check_stack(__FILE__,__LINE__)) return aerror("stack overflow");
#else
#define if_check_stack
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
extern Lisp_Object gchook, resources, callstack;
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
#define declare_symbol        BASE[182]
#define special_symbol        BASE[183]
#endif
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
extern int fasl_output_file, output_directory;
extern FILE *binary_read_file;
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
extern CSLbool always_noisy;
extern int number_of_input_files,
    number_of_symbols_to_define,
    number_of_fasl_paths,
    init_flags;
extern int native_code_tag;
extern char *standard_directory;
extern int gc_number;
extern CSLbool gc_method_is_copying;
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
extern jmp_buf *errorset_buffer;
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
#define validate_string(a) 0
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
extern int time_base,  space_base,  io_base,  errors_base;
extern int time_now,   space_now,   io_now,   errors_now;
extern int time_limit, space_limit, io_limit, errors_limit;
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


/* Code for mk!+scal!+mult!+mat */

static Lisp_Object CC_mkLscalLmultLmat(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v31, v32;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mk+scal+mult+mat");
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
/* copy arguments values to proper place */
    stack[0] = v1;
    stack[-8] = v0;
/* end of prologue */
    v31 = stack[0];
    fn = elt(env, 5); /* matrix!+p */
    v31 = (*qfn1(fn))(qenv(fn), v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    if (!(v31 == nil)) goto v34;
    v31 = elt(env, 1); /* "no matrix in add" */
    fn = elt(env, 6); /* rederr */
    v31 = (*qfn1(fn))(qenv(fn), v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    goto v34;

v34:
    v31 = stack[0];
    stack[-9] = v31;
    v31 = stack[-9];
    if (v31 == nil) goto v35;
    v31 = stack[-9];
    v31 = qcar(v31);
    stack[-4] = v31;
    v31 = stack[-4];
    if (v31 == nil) goto v36;
    v31 = stack[-4];
    v31 = qcar(v31);
    v32 = stack[-8];
    fn = elt(env, 7); /* multsq */
    v31 = (*qfn2(fn))(qenv(fn), v32, v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    v32 = v31;
    v31 = qvalue(elt(env, 3)); /* t */
    stack[0] = qvalue(elt(env, 4)); /* !*sub2 */
    qvalue(elt(env, 4)) = v31; /* !*sub2 */
    v31 = v32;
    fn = elt(env, 8); /* subs2 */
    v31 = (*qfn1(fn))(qenv(fn), v31);
    nil = C_nil;
    if (exception_pending()) goto v37;
    env = stack[-10];
    v32 = v31;
    qvalue(elt(env, 4)) = stack[0]; /* !*sub2 */
    v31 = v32;
    v31 = ncons(v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    stack[-2] = v31;
    stack[-3] = v31;
    goto v38;

v38:
    v31 = stack[-4];
    v31 = qcdr(v31);
    stack[-4] = v31;
    v31 = stack[-4];
    if (v31 == nil) goto v39;
    stack[-1] = stack[-2];
    v31 = stack[-4];
    v31 = qcar(v31);
    v32 = stack[-8];
    fn = elt(env, 7); /* multsq */
    v31 = (*qfn2(fn))(qenv(fn), v32, v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    v32 = v31;
    v31 = qvalue(elt(env, 3)); /* t */
    stack[0] = qvalue(elt(env, 4)); /* !*sub2 */
    qvalue(elt(env, 4)) = v31; /* !*sub2 */
    v31 = v32;
    fn = elt(env, 8); /* subs2 */
    v31 = (*qfn1(fn))(qenv(fn), v31);
    nil = C_nil;
    if (exception_pending()) goto v40;
    env = stack[-10];
    v32 = v31;
    qvalue(elt(env, 4)) = stack[0]; /* !*sub2 */
    v31 = v32;
    v31 = ncons(v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    v31 = Lrplacd(nil, stack[-1], v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    v31 = stack[-2];
    v31 = qcdr(v31);
    stack[-2] = v31;
    goto v38;

v39:
    v31 = stack[-3];
    goto v41;

v41:
    v31 = ncons(v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    stack[-6] = v31;
    stack[-7] = v31;
    goto v42;

v42:
    v31 = stack[-9];
    v31 = qcdr(v31);
    stack[-9] = v31;
    v31 = stack[-9];
    if (v31 == nil) { Lisp_Object res = stack[-7]; popv(11); return onevalue(res); }
    stack[-5] = stack[-6];
    v31 = stack[-9];
    v31 = qcar(v31);
    stack[-4] = v31;
    v31 = stack[-4];
    if (v31 == nil) goto v43;
    v31 = stack[-4];
    v31 = qcar(v31);
    v32 = stack[-8];
    fn = elt(env, 7); /* multsq */
    v31 = (*qfn2(fn))(qenv(fn), v32, v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    v32 = v31;
    v31 = qvalue(elt(env, 3)); /* t */
    stack[0] = qvalue(elt(env, 4)); /* !*sub2 */
    qvalue(elt(env, 4)) = v31; /* !*sub2 */
    v31 = v32;
    fn = elt(env, 8); /* subs2 */
    v31 = (*qfn1(fn))(qenv(fn), v31);
    nil = C_nil;
    if (exception_pending()) goto v44;
    env = stack[-10];
    v32 = v31;
    qvalue(elt(env, 4)) = stack[0]; /* !*sub2 */
    v31 = v32;
    v31 = ncons(v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    stack[-2] = v31;
    stack[-3] = v31;
    goto v45;

v45:
    v31 = stack[-4];
    v31 = qcdr(v31);
    stack[-4] = v31;
    v31 = stack[-4];
    if (v31 == nil) goto v46;
    stack[-1] = stack[-2];
    v31 = stack[-4];
    v31 = qcar(v31);
    v32 = stack[-8];
    fn = elt(env, 7); /* multsq */
    v31 = (*qfn2(fn))(qenv(fn), v32, v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    v32 = v31;
    v31 = qvalue(elt(env, 3)); /* t */
    stack[0] = qvalue(elt(env, 4)); /* !*sub2 */
    qvalue(elt(env, 4)) = v31; /* !*sub2 */
    v31 = v32;
    fn = elt(env, 8); /* subs2 */
    v31 = (*qfn1(fn))(qenv(fn), v31);
    nil = C_nil;
    if (exception_pending()) goto v47;
    env = stack[-10];
    v32 = v31;
    qvalue(elt(env, 4)) = stack[0]; /* !*sub2 */
    v31 = v32;
    v31 = ncons(v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    v31 = Lrplacd(nil, stack[-1], v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    v31 = stack[-2];
    v31 = qcdr(v31);
    stack[-2] = v31;
    goto v45;

v46:
    v31 = stack[-3];
    goto v48;

v48:
    v31 = ncons(v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    v31 = Lrplacd(nil, stack[-5], v31);
    nil = C_nil;
    if (exception_pending()) goto v33;
    env = stack[-10];
    v31 = stack[-6];
    v31 = qcdr(v31);
    stack[-6] = v31;
    goto v42;

v43:
    v31 = qvalue(elt(env, 2)); /* nil */
    goto v48;

v36:
    v31 = qvalue(elt(env, 2)); /* nil */
    goto v41;

v35:
    v31 = qvalue(elt(env, 2)); /* nil */
    { popv(11); return onevalue(v31); }
/* error exit handlers */
v47:
    env = stack[-10];
    qvalue(elt(env, 4)) = stack[0]; /* !*sub2 */
    popv(11);
    return nil;
v44:
    env = stack[-10];
    qvalue(elt(env, 4)) = stack[0]; /* !*sub2 */
    popv(11);
    return nil;
v40:
    env = stack[-10];
    qvalue(elt(env, 4)) = stack[0]; /* !*sub2 */
    popv(11);
    return nil;
v37:
    env = stack[-10];
    qvalue(elt(env, 4)) = stack[0]; /* !*sub2 */
    popv(11);
    return nil;
v33:
    popv(11);
    return nil;
}



/* Code for bvarrd */

static Lisp_Object MS_CDECL CC_bvarrd(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v60, v61;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "bvarrd");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for bvarrd");
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
    fn = elt(env, 8); /* lex */
    v60 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v62;
    env = stack[-2];
    v61 = qvalue(elt(env, 1)); /* char */
    v60 = elt(env, 2); /* (d e g r e e) */
    if (!(equal(v61, v60))) goto v63;
    v61 = elt(env, 3); /* "<bvar>" */
    v60 = (Lisp_Object)241; /* 15 */
    fn = elt(env, 9); /* errorml */
    v60 = (*qfn2(fn))(qenv(fn), v61, v60);
    nil = C_nil;
    if (exception_pending()) goto v62;
    env = stack[-2];
    goto v63;

v63:
    fn = elt(env, 10); /* mathml2 */
    v60 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v62;
    env = stack[-2];
    stack[-1] = v60;
    fn = elt(env, 8); /* lex */
    v60 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v62;
    env = stack[-2];
    v61 = qvalue(elt(env, 1)); /* char */
    v60 = elt(env, 2); /* (d e g r e e) */
    if (equal(v61, v60)) goto v64;
    v60 = (Lisp_Object)17; /* 1 */
    stack[0] = v60;
    goto v65;

v65:
    v61 = qvalue(elt(env, 1)); /* char */
    v60 = elt(env, 6); /* (!/ b v a r) */
    if (equal(v61, v60)) goto v66;
    v61 = elt(env, 7); /* "</bvar>" */
    v60 = (Lisp_Object)33; /* 2 */
    fn = elt(env, 9); /* errorml */
    v60 = (*qfn2(fn))(qenv(fn), v61, v60);
    nil = C_nil;
    if (exception_pending()) goto v62;
    v60 = nil;
    { popv(3); return onevalue(v60); }

v66:
    v61 = stack[-1];
    v60 = stack[0];
    popv(3);
    return list2(v61, v60);

v64:
    fn = elt(env, 11); /* mathml */
    v60 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v62;
    env = stack[-2];
    stack[0] = v60;
    fn = elt(env, 8); /* lex */
    v60 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v62;
    env = stack[-2];
    v61 = qvalue(elt(env, 1)); /* char */
    v60 = elt(env, 4); /* (!/ d e g r e e) */
    if (equal(v61, v60)) goto v67;
    v61 = elt(env, 5); /* "</degree>" */
    v60 = (Lisp_Object)33; /* 2 */
    fn = elt(env, 12); /* error */
    v60 = (*qfn2(fn))(qenv(fn), v61, v60);
    nil = C_nil;
    if (exception_pending()) goto v62;
    env = stack[-2];
    goto v67;

v67:
    fn = elt(env, 8); /* lex */
    v60 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v62;
    env = stack[-2];
    goto v65;
/* error exit handlers */
v62:
    popv(3);
    return nil;
}



/* Code for matsm1 */

static Lisp_Object CC_matsm1(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v162, v163, v164;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for matsm1");
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
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-8] = v0;
/* end of prologue */
    stack[-9] = nil;
    goto v165;

v165:
    v162 = stack[-8];
    if (v162 == nil) { Lisp_Object res = stack[-9]; popv(11); return onevalue(res); }
    v162 = stack[-8];
    v163 = qcar(v162);
    v162 = elt(env, 1); /* !*div */
    if (!consp(v163)) goto v57;
    v163 = qcar(v163);
    if (!(v163 == v162)) goto v57;
    v162 = stack[-8];
    v162 = qcar(v162);
    v162 = qcdr(v162);
    v162 = qcar(v162);
    fn = elt(env, 16); /* matsm */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-2] = v162;
    v162 = stack[-2];
    v162 = qcar(v162);
    stack[0] = Llength(nil, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-1] = stack[0];
    v162 = stack[-2];
    v162 = Llength(nil, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    if (equal(stack[0], v162)) goto v167;
    v164 = elt(env, 4); /* matrix */
    v163 = (Lisp_Object)65; /* 4 */
    v162 = elt(env, 7); /* "Non square matrix" */
    fn = elt(env, 17); /* rerror */
    v162 = (*qfnn(fn))(qenv(fn), 3, v164, v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    goto v168;

v168:
    v162 = qvalue(elt(env, 8)); /* subfg!* */
    stack[0] = v162;
    v162 = qvalue(elt(env, 5)); /* nil */
    qvalue(elt(env, 8)) = v162; /* subfg!* */
    v162 = stack[-9];
    if (v162 == nil) goto v169;
    v163 = elt(env, 2); /* mat */
    v162 = elt(env, 10); /* lnrsolvefn */
    v162 = get(v163, v162);
    env = stack[-10];
    stack[0] = v162;
    if (v162 == nil) goto v170;
    v163 = elt(env, 2); /* mat */
    v162 = elt(env, 10); /* lnrsolvefn */
    v164 = get(v163, v162);
    env = stack[-10];
    v163 = stack[-2];
    v162 = stack[-9];
    v162 = Lapply2(nil, 3, v164, v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-9] = v162;
    goto v171;

v171:
    v162 = stack[0];
    qvalue(elt(env, 8)) = v162; /* subfg!* */
    v162 = stack[-9];
    stack[-7] = v162;
    v162 = stack[-7];
    if (v162 == nil) goto v172;
    v162 = stack[-7];
    v162 = qcar(v162);
    stack[-3] = v162;
    v162 = stack[-3];
    if (v162 == nil) goto v173;
    v162 = stack[-3];
    v162 = qcar(v162);
    v163 = v162;
    v162 = qvalue(elt(env, 11)); /* t */
    qvalue(elt(env, 12)) = v162; /* !*sub2 */
    v162 = v163;
    fn = elt(env, 18); /* subs2 */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-1] = v162;
    stack[-2] = v162;
    goto v174;

v174:
    v162 = stack[-3];
    v162 = qcdr(v162);
    stack[-3] = v162;
    v162 = stack[-3];
    if (v162 == nil) goto v175;
    stack[0] = stack[-1];
    v162 = stack[-3];
    v162 = qcar(v162);
    v163 = v162;
    v162 = qvalue(elt(env, 11)); /* t */
    qvalue(elt(env, 12)) = v162; /* !*sub2 */
    v162 = v163;
    fn = elt(env, 18); /* subs2 */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = Lrplacd(nil, stack[0], v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = stack[-1];
    v162 = qcdr(v162);
    stack[-1] = v162;
    goto v174;

v175:
    v162 = stack[-2];
    goto v176;

v176:
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-5] = v162;
    stack[-6] = v162;
    goto v177;

v177:
    v162 = stack[-7];
    v162 = qcdr(v162);
    stack[-7] = v162;
    v162 = stack[-7];
    if (v162 == nil) goto v178;
    stack[-4] = stack[-5];
    v162 = stack[-7];
    v162 = qcar(v162);
    stack[-3] = v162;
    v162 = stack[-3];
    if (v162 == nil) goto v179;
    v162 = stack[-3];
    v162 = qcar(v162);
    v163 = v162;
    v162 = qvalue(elt(env, 11)); /* t */
    qvalue(elt(env, 12)) = v162; /* !*sub2 */
    v162 = v163;
    fn = elt(env, 18); /* subs2 */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-1] = v162;
    stack[-2] = v162;
    goto v180;

v180:
    v162 = stack[-3];
    v162 = qcdr(v162);
    stack[-3] = v162;
    v162 = stack[-3];
    if (v162 == nil) goto v181;
    stack[0] = stack[-1];
    v162 = stack[-3];
    v162 = qcar(v162);
    v163 = v162;
    v162 = qvalue(elt(env, 11)); /* t */
    qvalue(elt(env, 12)) = v162; /* !*sub2 */
    v162 = v163;
    fn = elt(env, 18); /* subs2 */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = Lrplacd(nil, stack[0], v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = stack[-1];
    v162 = qcdr(v162);
    stack[-1] = v162;
    goto v180;

v181:
    v162 = stack[-2];
    goto v182;

v182:
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = Lrplacd(nil, stack[-4], v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = stack[-5];
    v162 = qcdr(v162);
    stack[-5] = v162;
    goto v177;

v179:
    v162 = qvalue(elt(env, 5)); /* nil */
    goto v182;

v178:
    v162 = stack[-6];
    goto v183;

v183:
    stack[-9] = v162;
    goto v34;

v34:
    v162 = stack[-8];
    v162 = qcdr(v162);
    stack[-8] = v162;
    goto v165;

v173:
    v162 = qvalue(elt(env, 5)); /* nil */
    goto v176;

v172:
    v162 = qvalue(elt(env, 5)); /* nil */
    goto v183;

v170:
    v163 = elt(env, 2); /* mat */
    v162 = elt(env, 9); /* inversefn */
    v163 = get(v163, v162);
    env = stack[-10];
    v162 = stack[-2];
    v163 = Lapply1(nil, v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = stack[-9];
    fn = elt(env, 19); /* multm */
    v162 = (*qfn2(fn))(qenv(fn), v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-9] = v162;
    goto v171;

v169:
    v163 = elt(env, 2); /* mat */
    v162 = elt(env, 9); /* inversefn */
    v163 = get(v163, v162);
    env = stack[-10];
    v162 = stack[-2];
    v162 = Lapply1(nil, v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-9] = v162;
    goto v171;

v167:
    v162 = stack[-9];
    if (v162 == nil) goto v184;
    stack[0] = stack[-1];
    v162 = stack[-9];
    v162 = Llength(nil, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    if (equal(stack[0], v162)) goto v184;
    v164 = elt(env, 4); /* matrix */
    v163 = (Lisp_Object)81; /* 5 */
    v162 = elt(env, 6); /* "Matrix mismatch" */
    fn = elt(env, 17); /* rerror */
    v162 = (*qfnn(fn))(qenv(fn), 3, v164, v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    goto v168;

v184:
    v162 = stack[-8];
    v162 = qcar(v162);
    v162 = qcdr(v162);
    v162 = qcdr(v162);
    if (v162 == nil) goto v185;
    v162 = stack[-9];
    if (!(v162 == nil)) goto v34;
    v162 = stack[-1];
    fn = elt(env, 20); /* generateident */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-9] = v162;
    goto v34;

v185:
    v162 = stack[-2];
    v162 = qcdr(v162);
    if (!(v162 == nil)) goto v168;
    v162 = stack[-2];
    v162 = qcar(v162);
    v162 = qcdr(v162);
    if (!(v162 == nil)) goto v168;
    v162 = stack[-2];
    v162 = qcar(v162);
    v162 = qcar(v162);
    v162 = qcar(v162);
    if (!(v162 == nil)) goto v186;
    v164 = elt(env, 4); /* matrix */
    v163 = (Lisp_Object)97; /* 6 */
    v162 = elt(env, 13); /* "Zero divisor" */
    fn = elt(env, 17); /* rerror */
    v162 = (*qfnn(fn))(qenv(fn), 3, v164, v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    goto v186;

v186:
    v162 = stack[-2];
    v162 = qcar(v162);
    v162 = qcar(v162);
    fn = elt(env, 21); /* revpr */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-2] = v162;
    v162 = stack[-9];
    if (v162 == nil) goto v187;
    v163 = stack[-2];
    v162 = stack[-9];
    fn = elt(env, 22); /* multsm */
    v162 = (*qfn2(fn))(qenv(fn), v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    goto v188;

v188:
    stack[-9] = v162;
    goto v34;

v187:
    v162 = stack[-2];
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    goto v188;

v57:
    v162 = stack[-8];
    v162 = qcar(v162);
    if (!consp(v162)) goto v189;
    v162 = stack[-8];
    v162 = qcar(v162);
    v163 = qcar(v162);
    v162 = elt(env, 2); /* mat */
    if (v163 == v162) goto v190;
    v162 = stack[-8];
    v162 = qcar(v162);
    v163 = qcar(v162);
    v162 = elt(env, 3); /* matmapfn */
    v162 = Lflagp(nil, v163, v162);
    env = stack[-10];
    if (v162 == nil) goto v49;
    v162 = stack[-8];
    v162 = qcar(v162);
    v162 = qcdr(v162);
    if (v162 == nil) goto v49;
    v162 = stack[-8];
    v162 = qcar(v162);
    v162 = qcdr(v162);
    v162 = qcar(v162);
    fn = elt(env, 23); /* getrtype */
    v163 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = elt(env, 4); /* matrix */
    if (!(v163 == v162)) goto v49;
    v162 = stack[-8];
    v163 = qcar(v162);
    v162 = qvalue(elt(env, 5)); /* nil */
    fn = elt(env, 24); /* matrixmap */
    v162 = (*qfn2(fn))(qenv(fn), v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    fn = elt(env, 16); /* matsm */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[0] = v162;
    goto v191;

v191:
    v162 = stack[-9];
    if (v162 == nil) goto v12;
    v162 = stack[-9];
    v162 = qcdr(v162);
    if (!(v162 == nil)) goto v192;
    v162 = stack[-9];
    v162 = qcar(v162);
    v162 = qcdr(v162);
    if (!(v162 == nil)) goto v192;
    v162 = stack[-9];
    v162 = qcar(v162);
    v163 = qcar(v162);
    v162 = stack[0];
    fn = elt(env, 22); /* multsm */
    v162 = (*qfn2(fn))(qenv(fn), v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    goto v10;

v10:
    stack[-9] = v162;
    goto v34;

v192:
    v163 = stack[0];
    v162 = stack[-9];
    fn = elt(env, 19); /* multm */
    v162 = (*qfn2(fn))(qenv(fn), v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    goto v10;

v12:
    v162 = stack[0];
    goto v10;

v49:
    v162 = stack[-8];
    v162 = qcar(v162);
    v163 = qcar(v162);
    v162 = stack[-8];
    v162 = qcar(v162);
    v162 = qcdr(v162);
    fn = elt(env, 25); /* lispapply */
    v162 = (*qfn2(fn))(qenv(fn), v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[0] = v162;
    v163 = stack[0];
    v162 = elt(env, 2); /* mat */
    if (!consp(v163)) goto v191;
    v163 = qcar(v163);
    if (!(v163 == v162)) goto v191;
    v162 = stack[0];
    fn = elt(env, 16); /* matsm */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[0] = v162;
    goto v191;

v190:
    v162 = stack[-8];
    v162 = qcar(v162);
    v162 = qcdr(v162);
    fn = elt(env, 26); /* lchk */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    if (!(v162 == nil)) goto v193;
    v164 = elt(env, 4); /* matrix */
    v163 = (Lisp_Object)49; /* 3 */
    v162 = elt(env, 6); /* "Matrix mismatch" */
    fn = elt(env, 17); /* rerror */
    v162 = (*qfnn(fn))(qenv(fn), 3, v164, v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    goto v193;

v193:
    v162 = stack[-8];
    v162 = qcar(v162);
    v162 = qcdr(v162);
    stack[-7] = v162;
    v162 = stack[-7];
    if (v162 == nil) goto v194;
    v162 = stack[-7];
    v162 = qcar(v162);
    stack[-3] = v162;
    v162 = stack[-3];
    if (v162 == nil) goto v47;
    v162 = stack[-3];
    v162 = qcar(v162);
    fn = elt(env, 27); /* xsimp */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-1] = v162;
    stack[-2] = v162;
    goto v33;

v33:
    v162 = stack[-3];
    v162 = qcdr(v162);
    stack[-3] = v162;
    v162 = stack[-3];
    if (v162 == nil) goto v195;
    stack[0] = stack[-1];
    v162 = stack[-3];
    v162 = qcar(v162);
    fn = elt(env, 27); /* xsimp */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = Lrplacd(nil, stack[0], v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = stack[-1];
    v162 = qcdr(v162);
    stack[-1] = v162;
    goto v33;

v195:
    v162 = stack[-2];
    goto v196;

v196:
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-5] = v162;
    stack[-6] = v162;
    goto v197;

v197:
    v162 = stack[-7];
    v162 = qcdr(v162);
    stack[-7] = v162;
    v162 = stack[-7];
    if (v162 == nil) goto v198;
    stack[-4] = stack[-5];
    v162 = stack[-7];
    v162 = qcar(v162);
    stack[-3] = v162;
    v162 = stack[-3];
    if (v162 == nil) goto v199;
    v162 = stack[-3];
    v162 = qcar(v162);
    fn = elt(env, 27); /* xsimp */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    stack[-1] = v162;
    stack[-2] = v162;
    goto v200;

v200:
    v162 = stack[-3];
    v162 = qcdr(v162);
    stack[-3] = v162;
    v162 = stack[-3];
    if (v162 == nil) goto v201;
    stack[0] = stack[-1];
    v162 = stack[-3];
    v162 = qcar(v162);
    fn = elt(env, 27); /* xsimp */
    v162 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = Lrplacd(nil, stack[0], v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = stack[-1];
    v162 = qcdr(v162);
    stack[-1] = v162;
    goto v200;

v201:
    v162 = stack[-2];
    goto v202;

v202:
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = Lrplacd(nil, stack[-4], v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    v162 = stack[-5];
    v162 = qcdr(v162);
    stack[-5] = v162;
    goto v197;

v199:
    v162 = qvalue(elt(env, 5)); /* nil */
    goto v202;

v198:
    v162 = stack[-6];
    goto v203;

v203:
    stack[0] = v162;
    goto v191;

v47:
    v162 = qvalue(elt(env, 5)); /* nil */
    goto v196;

v194:
    v162 = qvalue(elt(env, 5)); /* nil */
    goto v203;

v189:
    stack[-1] = elt(env, 4); /* matrix */
    stack[0] = (Lisp_Object)113; /* 7 */
    v164 = elt(env, 14); /* "Matrix" */
    v162 = stack[-8];
    v163 = qcar(v162);
    v162 = elt(env, 15); /* "not set" */
    v162 = list3(v164, v163, v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-10];
    fn = elt(env, 17); /* rerror */
    v162 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[0], v162);
    nil = C_nil;
    if (exception_pending()) goto v166;
    v162 = nil;
    { popv(11); return onevalue(v162); }
/* error exit handlers */
v166:
    popv(11);
    return nil;
}



/* Code for dm!-mkfloat */

static Lisp_Object CC_dmKmkfloat(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v35, v207, v208;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dm-mkfloat");
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
    v207 = v0;
/* end of prologue */
    v35 = v207;
    v35 = Lintegerp(nil, v35);
    env = stack[0];
    if (v35 == nil) { popv(1); return onevalue(v207); }
    v208 = elt(env, 1); /* !:rd!: */
    v35 = elt(env, 2); /* i2d */
    v35 = get(v208, v35);
        popv(1);
        return Lapply1(nil, v35, v207);
}



/* Code for gvar1 */

static Lisp_Object CC_gvar1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v12, v11, v4, v48;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gvar1");
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
    v11 = v1;
    v4 = v0;
/* end of prologue */

v74:
    v12 = v4;
    if (v12 == nil) { popv(1); return onevalue(v11); }
    v12 = v4;
    if (is_number(v12)) { popv(1); return onevalue(v11); }
    v48 = v4;
    v12 = elt(env, 1); /* i */
    if (!(v48 == v12)) goto v191;
    v12 = qvalue(elt(env, 2)); /* !*complex */
    if (!(v12 == nil)) { popv(1); return onevalue(v11); }

v191:
    v12 = v4;
    if (!consp(v12)) goto v155;
    v12 = v4;
    v48 = qcar(v12);
    v12 = elt(env, 3); /* dname */
    v12 = get(v48, v12);
    env = stack[0];
    if (!(v12 == nil)) { popv(1); return onevalue(v11); }
    v12 = v4;
    v48 = qcar(v12);
    v12 = elt(env, 4); /* (plus times expt difference minus) */
    v12 = Lmemq(nil, v48, v12);
    if (v12 == nil) goto v148;
    v12 = v4;
    v12 = qcdr(v12);
    {
        popv(1);
        fn = elt(env, 6); /* gvarlis1 */
        return (*qfn2(fn))(qenv(fn), v12, v11);
    }

v148:
    v12 = v4;
    v48 = qcar(v12);
    v12 = elt(env, 5); /* quotient */
    if (v48 == v12) goto v214;
    v48 = v4;
    v12 = v11;
    v12 = Lmember(nil, v48, v12);
    if (!(v12 == nil)) { popv(1); return onevalue(v11); }
    v12 = v4;
    popv(1);
    return cons(v12, v11);

v214:
    v12 = v4;
    v12 = qcdr(v12);
    v12 = qcar(v12);
    v4 = v12;
    goto v74;

v155:
    v48 = v4;
    v12 = v11;
    v12 = Lmember(nil, v48, v12);
    if (!(v12 == nil)) { popv(1); return onevalue(v11); }
    v12 = v4;
    popv(1);
    return cons(v12, v11);
}



/* Code for vdpilcomb1 */

static Lisp_Object MS_CDECL CC_vdpilcomb1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v52, Lisp_Object v78,
                         Lisp_Object v75, Lisp_Object v74, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v20, v21, v51, v50, v24, v211;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 6, "vdpilcomb1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for vdpilcomb1");
#endif
    if (stack >= stacklimit)
    {
        push6(v74,v75,v78,v52,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop6(v0,v1,v52,v78,v75,v74);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-1] = v74;
    v20 = v75;
    stack[-2] = v78;
    stack[-3] = v52;
    v21 = v1;
    stack[-4] = v0;
/* end of prologue */
    v51 = stack[-4];
    v51 = qcdr(v51);
    v51 = qcdr(v51);
    v51 = qcdr(v51);
    v211 = qcar(v51);
    v24 = v21;
    v50 = stack[-3];
    v21 = stack[-2];
    v21 = qcdr(v21);
    v21 = qcdr(v21);
    v21 = qcdr(v21);
    v51 = qcar(v21);
    v21 = v20;
    v20 = stack[-1];
    fn = elt(env, 2); /* dipilcomb1 */
    v20 = (*qfnn(fn))(qenv(fn), 6, v211, v24, v50, v51, v21, v20);
    nil = C_nil;
    if (exception_pending()) goto v23;
    env = stack[-6];
    fn = elt(env, 3); /* dip2vdp */
    v20 = (*qfn1(fn))(qenv(fn), v20);
    nil = C_nil;
    if (exception_pending()) goto v23;
    env = stack[-6];
    stack[-5] = v20;
    v20 = qvalue(elt(env, 1)); /* !*gsugar */
    if (v20 == nil) { Lisp_Object res = stack[-5]; popv(7); return onevalue(res); }
    stack[0] = stack[-5];
    v20 = stack[-4];
    fn = elt(env, 4); /* gsugar */
    stack[-4] = (*qfn1(fn))(qenv(fn), v20);
    nil = C_nil;
    if (exception_pending()) goto v23;
    env = stack[-6];
    v20 = stack[-3];
    fn = elt(env, 5); /* vevtdeg */
    v20 = (*qfn1(fn))(qenv(fn), v20);
    nil = C_nil;
    if (exception_pending()) goto v23;
    env = stack[-6];
    stack[-3] = plus2(stack[-4], v20);
    nil = C_nil;
    if (exception_pending()) goto v23;
    env = stack[-6];
    v20 = stack[-2];
    fn = elt(env, 4); /* gsugar */
    stack[-2] = (*qfn1(fn))(qenv(fn), v20);
    nil = C_nil;
    if (exception_pending()) goto v23;
    env = stack[-6];
    v20 = stack[-1];
    fn = elt(env, 5); /* vevtdeg */
    v20 = (*qfn1(fn))(qenv(fn), v20);
    nil = C_nil;
    if (exception_pending()) goto v23;
    env = stack[-6];
    v20 = plus2(stack[-2], v20);
    nil = C_nil;
    if (exception_pending()) goto v23;
    env = stack[-6];
    fn = elt(env, 6); /* max */
    v20 = (*qfn2(fn))(qenv(fn), stack[-3], v20);
    nil = C_nil;
    if (exception_pending()) goto v23;
    env = stack[-6];
    fn = elt(env, 7); /* gsetsugar */
    v20 = (*qfn2(fn))(qenv(fn), stack[0], v20);
    nil = C_nil;
    if (exception_pending()) goto v23;
    { Lisp_Object res = stack[-5]; popv(7); return onevalue(res); }
/* error exit handlers */
v23:
    popv(7);
    return nil;
}



/* Code for weak_xreduce1 */

static Lisp_Object MS_CDECL CC_weak_xreduce1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v52, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v203, v197, v236;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "weak_xreduce1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for weak_xreduce1");
#endif
    if (stack >= stacklimit)
    {
        push3(v52,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v52);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-3] = v52;
    stack[-4] = v1;
    stack[-5] = v0;
/* end of prologue */
    v203 = stack[-4];
    stack[0] = v203;
    goto v204;

v204:
    v203 = stack[-5];
    if (v203 == nil) { Lisp_Object res = stack[-5]; popv(8); return onevalue(res); }
    v203 = stack[0];
    if (v203 == nil) { Lisp_Object res = stack[-5]; popv(8); return onevalue(res); }
    v203 = stack[0];
    v203 = qcar(v203);
    stack[-6] = v203;
    v203 = stack[0];
    v203 = qcdr(v203);
    stack[0] = v203;
    v203 = stack[-6];
    fn = elt(env, 8); /* xval */
    stack[-1] = (*qfn1(fn))(qenv(fn), v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    v203 = stack[-5];
    fn = elt(env, 8); /* xval */
    v203 = (*qfn1(fn))(qenv(fn), v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    fn = elt(env, 9); /* xdiv */
    v203 = (*qfn2(fn))(qenv(fn), stack[-1], v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    stack[-1] = v203;
    if (v203 == nil) goto v204;
    v203 = stack[-1];
    fn = elt(env, 10); /* mknwedge */
    v236 = (*qfn1(fn))(qenv(fn), v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    v197 = (Lisp_Object)17; /* 1 */
    v203 = (Lisp_Object)17; /* 1 */
    v203 = list2star(v236, v197, v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    v203 = ncons(v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    stack[-1] = v203;
    v197 = stack[-1];
    v203 = stack[-6];
    fn = elt(env, 11); /* wedgepf */
    v203 = (*qfn2(fn))(qenv(fn), v197, v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    stack[0] = v203;
    v203 = stack[-5];
    v203 = qcar(v203);
    v197 = qcdr(v203);
    v203 = stack[0];
    v203 = qcar(v203);
    v203 = qcdr(v203);
    fn = elt(env, 12); /* quotsq */
    v203 = (*qfn2(fn))(qenv(fn), v197, v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    stack[-2] = v203;
    v203 = stack[-2];
    fn = elt(env, 13); /* negsq */
    v203 = (*qfn1(fn))(qenv(fn), v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    fn = elt(env, 14); /* multpfsq */
    v203 = (*qfn2(fn))(qenv(fn), stack[0], v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    fn = elt(env, 15); /* addpf */
    v203 = (*qfn2(fn))(qenv(fn), stack[-5], v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    fn = elt(env, 16); /* subs2pf */
    v203 = (*qfn1(fn))(qenv(fn), v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    stack[-5] = v203;
    v203 = qvalue(elt(env, 2)); /* !*trxmod */
    if (v203 == nil) goto v238;
    stack[0] = stack[-3];
    v197 = stack[-1];
    v203 = stack[-2];
    fn = elt(env, 14); /* multpfsq */
    v197 = (*qfn2(fn))(qenv(fn), v197, v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    v203 = stack[-6];
    v203 = list2(v197, v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    v203 = ncons(v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    v203 = Lnconc(nil, stack[0], v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    stack[-3] = v203;
    goto v238;

v238:
    v203 = qvalue(elt(env, 2)); /* !*trxmod */
    if (v203 == nil) goto v239;
    v197 = elt(env, 3); /* "   " */
    v203 = elt(env, 4); /* first */
    fn = elt(env, 17); /* writepri */
    v203 = (*qfn2(fn))(qenv(fn), v197, v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    stack[0] = elt(env, 5); /* wedge */
    v197 = stack[-1];
    v203 = stack[-2];
    fn = elt(env, 14); /* multpfsq */
    v203 = (*qfn2(fn))(qenv(fn), v197, v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    fn = elt(env, 18); /* preppf */
    stack[-1] = (*qfn1(fn))(qenv(fn), v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    v203 = stack[-6];
    fn = elt(env, 18); /* preppf */
    v203 = (*qfn1(fn))(qenv(fn), v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    v203 = list3(stack[0], stack[-1], v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    v197 = Lmkquote(nil, v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    v203 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 17); /* writepri */
    v203 = (*qfn2(fn))(qenv(fn), v197, v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    v197 = elt(env, 6); /* " +" */
    v203 = elt(env, 7); /* last */
    fn = elt(env, 17); /* writepri */
    v203 = (*qfn2(fn))(qenv(fn), v197, v203);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-7];
    goto v239;

v239:
    v203 = stack[-4];
    stack[0] = v203;
    goto v204;
/* error exit handlers */
v237:
    popv(8);
    return nil;
}



/* Code for unresidp */

static Lisp_Object CC_unresidp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v190, v240;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for unresidp");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v190 = v0;
/* end of prologue */
    v240 = qvalue(elt(env, 1)); /* !*reservedops!* */
    v190 = Lmemq(nil, v190, v240);
    v190 = (v190 == nil ? lisp_true : nil);
    return onevalue(v190);
}



/* Code for list_is_all_free */

static Lisp_Object CC_list_is_all_free(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v206;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for list_is_all_free");
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

v75:
    v206 = stack[0];
    if (v206 == nil) goto v63;
    v206 = stack[0];
    v206 = qcar(v206);
    fn = elt(env, 3); /* nodum_varp */
    v206 = (*qfn1(fn))(qenv(fn), v206);
    nil = C_nil;
    if (exception_pending()) goto v56;
    env = stack[-1];
    if (v206 == nil) goto v18;
    v206 = stack[0];
    v206 = qcdr(v206);
    stack[0] = v206;
    goto v75;

v18:
    v206 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v206); }

v63:
    v206 = qvalue(elt(env, 1)); /* t */
    { popv(2); return onevalue(v206); }
/* error exit handlers */
v56:
    popv(2);
    return nil;
}



/* Code for difbf */

static Lisp_Object CC_difbf(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v131, v127, v202;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for difbf");
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
    stack[-6] = v1;
    stack[-7] = v0;
/* end of prologue */
    v131 = stack[-7];
    v131 = qcdr(v131);
    v127 = qcar(v131);
    stack[-8] = v127;
    v131 = (Lisp_Object)1; /* 0 */
    if (v127 == v131) goto v204;
    v131 = stack[-6];
    v131 = qcdr(v131);
    v127 = qcar(v131);
    stack[-5] = v127;
    v131 = (Lisp_Object)1; /* 0 */
    if (v127 == v131) goto v64;
    v131 = stack[-7];
    v131 = qcdr(v131);
    v127 = qcdr(v131);
    stack[-4] = v127;
    v131 = stack[-6];
    v131 = qcdr(v131);
    v131 = qcdr(v131);
    stack[-3] = v131;
    v127 = difference2(v127, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    stack[-2] = v127;
    v131 = (Lisp_Object)1; /* 0 */
    if (v127 == v131) goto v258;
    stack[-1] = stack[-2];
    v131 = stack[-8];
    v131 = Labsval(nil, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    fn = elt(env, 3); /* msd */
    stack[0] = (*qfn1(fn))(qenv(fn), v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    v131 = stack[-5];
    v131 = Labsval(nil, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    fn = elt(env, 3); /* msd */
    v131 = (*qfn1(fn))(qenv(fn), v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    v131 = difference2(stack[0], v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    v131 = plus2(stack[-1], v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    stack[-1] = v131;
    v131 = qvalue(elt(env, 2)); /* !:bprec!: */
    v131 = add1(v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    stack[0] = v131;
    v127 = stack[-1];
    v131 = stack[0];
    v131 = (Lisp_Object)greaterp2(v127, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    v131 = v131 ? lisp_true : nil;
    env = stack[-9];
    if (v131 == nil) goto v45;
    v131 = stack[-7];
    goto v190;

v190:
    stack[-2] = v131;
    v131 = stack[-2];
    v131 = qcdr(v131);
    v131 = qcar(v131);
    v202 = v131;
    v127 = v202;
    v131 = (Lisp_Object)1; /* 0 */
    if (v127 == v131) goto v195;
    v127 = v202;
    v131 = qvalue(elt(env, 2)); /* !:bprec!: */
    fn = elt(env, 4); /* inorm */
    v131 = (*qfn2(fn))(qenv(fn), v127, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    v202 = v131;
    stack[-1] = elt(env, 1); /* !:rd!: */
    v131 = v202;
    stack[0] = qcar(v131);
    v131 = v202;
    v127 = qcdr(v131);
    v131 = stack[-2];
    v131 = qcdr(v131);
    v131 = qcdr(v131);
    v131 = plus2(v127, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    {
        Lisp_Object v259 = stack[-1];
        Lisp_Object v260 = stack[0];
        popv(10);
        return list2star(v259, v260, v131);
    }

v195:
    v202 = elt(env, 1); /* !:rd!: */
    v127 = (Lisp_Object)1; /* 0 */
    v131 = (Lisp_Object)1; /* 0 */
    popv(10);
    return list2star(v202, v127, v131);

v45:
    v131 = stack[0];
    v131 = negate(v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    v131 = (Lisp_Object)lessp2(stack[-1], v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    v131 = v131 ? lisp_true : nil;
    env = stack[-9];
    if (v131 == nil) goto v224;
    v131 = stack[-6];
    fn = elt(env, 5); /* minus!: */
    v131 = (*qfn1(fn))(qenv(fn), v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    goto v190;

v224:
    v127 = stack[-2];
    v131 = (Lisp_Object)1; /* 0 */
    v131 = (Lisp_Object)greaterp2(v127, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    v131 = v131 ? lisp_true : nil;
    env = stack[-9];
    if (v131 == nil) goto v140;
    stack[0] = elt(env, 1); /* !:rd!: */
    v127 = stack[-8];
    v131 = stack[-2];
    v127 = Lash1(nil, v127, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    v131 = stack[-5];
    v127 = difference2(v127, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    v131 = stack[-3];
    v131 = list2star(stack[0], v127, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    goto v190;

v140:
    stack[0] = elt(env, 1); /* !:rd!: */
    stack[-1] = stack[-8];
    stack[-3] = stack[-5];
    v131 = stack[-2];
    v131 = negate(v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    v131 = Lash1(nil, stack[-3], v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    v127 = difference2(stack[-1], v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    v131 = stack[-4];
    v131 = list2star(stack[0], v127, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    goto v190;

v258:
    stack[0] = elt(env, 1); /* !:rd!: */
    v127 = stack[-8];
    v131 = stack[-5];
    v127 = difference2(v127, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    v131 = stack[-4];
    v131 = list2star(stack[0], v127, v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    goto v190;

v64:
    v131 = stack[-7];
    goto v190;

v204:
    v131 = stack[-6];
    fn = elt(env, 5); /* minus!: */
    v131 = (*qfn1(fn))(qenv(fn), v131);
    nil = C_nil;
    if (exception_pending()) goto v257;
    env = stack[-9];
    goto v190;
/* error exit handlers */
v257:
    popv(10);
    return nil;
}



/* Code for multdf */

static Lisp_Object CC_multdf(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v212, v215;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for multdf");
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
    v212 = stack[-1];
    if (v212 == nil) goto v74;
    v212 = stack[0];
    if (v212 == nil) goto v74;
    v212 = stack[-1];
    v215 = qcar(v212);
    v212 = stack[0];
    v212 = qcar(v212);
    fn = elt(env, 2); /* multerm */
    v212 = (*qfn2(fn))(qenv(fn), v215, v212);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-3];
    stack[-2] = v212;
    v212 = stack[-1];
    v215 = qcdr(v212);
    v212 = stack[0];
    v212 = CC_multdf(env, v215, v212);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-3];
    fn = elt(env, 3); /* plusdf */
    v212 = (*qfn2(fn))(qenv(fn), stack[-2], v212);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-3];
    stack[-2] = v212;
    v212 = stack[-1];
    v212 = qcar(v212);
    v215 = ncons(v212);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-3];
    v212 = stack[0];
    v212 = qcdr(v212);
    v212 = CC_multdf(env, v215, v212);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[-3];
    {
        Lisp_Object v39 = stack[-2];
        popv(4);
        fn = elt(env, 3); /* plusdf */
        return (*qfn2(fn))(qenv(fn), v39, v212);
    }

v74:
    v212 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v212); }
/* error exit handlers */
v65:
    popv(4);
    return nil;
}



/* Code for get!*inverse */

static Lisp_Object CC_getHinverse(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v156, v155, v25;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for get*inverse");
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
    v155 = v1;
    v156 = v0;
/* end of prologue */
    v25 = v156;
    v156 = elt(env, 1); /* inverse */
    v156 = get(v25, v156);
    env = stack[-1];
    v25 = v156;
    v156 = v25;
    v156 = qcdr(v156);
    stack[0] = qcar(v156);
    v156 = v155;
    v155 = v25;
    v155 = qcar(v155);
    fn = elt(env, 2); /* give!*position */
    v156 = (*qfn2(fn))(qenv(fn), v156, v155);
    nil = C_nil;
    if (exception_pending()) goto v26;
    env = stack[-1];
    {
        Lisp_Object v19 = stack[0];
        popv(2);
        fn = elt(env, 3); /* nth */
        return (*qfn2(fn))(qenv(fn), v19, v156);
    }
/* error exit handlers */
v26:
    popv(2);
    return nil;
}



/* Code for ev_sum */

static Lisp_Object CC_ev_sum(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v41, v38, v234;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ev_sum");
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
    v234 = nil;
    goto v165;

v165:
    v41 = stack[-1];
    if (v41 == nil) goto v63;
    v41 = stack[-1];
    v38 = qcar(v41);
    v41 = stack[0];
    v41 = qcar(v41);
    v41 = (Lisp_Object)(int32_t)((int32_t)v38 + (int32_t)v41 - TAG_FIXNUM);
    v38 = v234;
    v41 = cons(v41, v38);
    nil = C_nil;
    if (exception_pending()) goto v36;
    env = stack[-2];
    v234 = v41;
    v41 = stack[-1];
    v41 = qcdr(v41);
    stack[-1] = v41;
    v41 = stack[0];
    v41 = qcdr(v41);
    stack[0] = v41;
    goto v165;

v63:
    v41 = v234;
        popv(3);
        return Lnreverse(nil, v41);
/* error exit handlers */
v36:
    popv(3);
    return nil;
}



/* Code for minusml */

static Lisp_Object CC_minusml(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v35, v207;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for minusml");
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
    v35 = elt(env, 1); /* "<apply><minus/>" */
    fn = elt(env, 4); /* printout */
    v35 = (*qfn1(fn))(qenv(fn), v35);
    nil = C_nil;
    if (exception_pending()) goto v64;
    env = stack[-1];
    v207 = qvalue(elt(env, 2)); /* indent */
    v35 = (Lisp_Object)49; /* 3 */
    v35 = plus2(v207, v35);
    nil = C_nil;
    if (exception_pending()) goto v64;
    env = stack[-1];
    qvalue(elt(env, 2)) = v35; /* indent */
    v35 = stack[0];
    fn = elt(env, 5); /* multiminus */
    v35 = (*qfn1(fn))(qenv(fn), v35);
    nil = C_nil;
    if (exception_pending()) goto v64;
    env = stack[-1];
    v207 = qvalue(elt(env, 2)); /* indent */
    v35 = (Lisp_Object)49; /* 3 */
    v35 = difference2(v207, v35);
    nil = C_nil;
    if (exception_pending()) goto v64;
    env = stack[-1];
    qvalue(elt(env, 2)) = v35; /* indent */
    v35 = elt(env, 3); /* "</apply>" */
    fn = elt(env, 4); /* printout */
    v35 = (*qfn1(fn))(qenv(fn), v35);
    nil = C_nil;
    if (exception_pending()) goto v64;
    v35 = nil;
    { popv(2); return onevalue(v35); }
/* error exit handlers */
v64:
    popv(2);
    return nil;
}



/* Code for sparpri */

static Lisp_Object MS_CDECL CC_sparpri(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v52, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v256, v53, v54;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "sparpri");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for sparpri");
#endif
    if (stack >= stacklimit)
    {
        push3(v52,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v52);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-4] = v52;
    v256 = v1;
    v53 = v0;
/* end of prologue */
    stack[-5] = v256;
    v256 = v53;
    stack[-3] = v256;
    goto v262;

v262:
    v256 = stack[-3];
    if (v256 == nil) goto v240;
    v256 = stack[-3];
    v256 = qcar(v256);
    stack[-2] = v256;
    stack[-1] = elt(env, 2); /* quote */
    stack[0] = elt(env, 3); /* setq */
    v54 = stack[-4];
    v53 = stack[-5];
    v256 = stack[-2];
    v256 = qcar(v256);
    v53 = list3(v54, v53, v256);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-6];
    v256 = stack[-2];
    v256 = qcdr(v256);
    v256 = list3(stack[0], v53, v256);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-6];
    v53 = list2(stack[-1], v256);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-6];
    v256 = elt(env, 4); /* first */
    fn = elt(env, 7); /* writepri */
    v256 = (*qfn2(fn))(qenv(fn), v53, v256);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-6];
    v53 = elt(env, 5); /* (quote !$) */
    v256 = elt(env, 6); /* last */
    fn = elt(env, 7); /* writepri */
    v256 = (*qfn2(fn))(qenv(fn), v53, v256);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-6];
    v256 = stack[-3];
    v256 = qcdr(v256);
    stack[-3] = v256;
    goto v262;

v240:
    v256 = nil;
    { popv(7); return onevalue(v256); }
/* error exit handlers */
v51:
    popv(7);
    return nil;
}



/* Code for specrd!:times */

static Lisp_Object CC_specrdTtimes(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v22, v23;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for specrd:times");
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
    v22 = stack[-1];
    fn = elt(env, 3); /* add_minus */
    v22 = (*qfn1(fn))(qenv(fn), v22);
    nil = C_nil;
    if (exception_pending()) goto v230;
    env = stack[-3];
    stack[-1] = v22;
    v22 = stack[0];
    fn = elt(env, 3); /* add_minus */
    v22 = (*qfn1(fn))(qenv(fn), v22);
    nil = C_nil;
    if (exception_pending()) goto v230;
    env = stack[-3];
    stack[0] = v22;
    v23 = stack[-1];
    v22 = elt(env, 1); /* minus */
    if (!consp(v23)) goto v217;
    v23 = qcar(v23);
    if (!(v23 == v22)) goto v217;
    v22 = stack[-1];
    v22 = qcdr(v22);
    v22 = qcar(v22);
    stack[-1] = v22;
    v22 = qvalue(elt(env, 2)); /* t */
    stack[-2] = v22;
    goto v217;

v217:
    v23 = stack[0];
    v22 = elt(env, 1); /* minus */
    if (!consp(v23)) goto v207;
    v23 = qcar(v23);
    if (!(v23 == v22)) goto v207;
    v22 = stack[0];
    v22 = qcdr(v22);
    v22 = qcar(v22);
    stack[0] = v22;
    v22 = stack[-2];
    v22 = (v22 == nil ? lisp_true : nil);
    stack[-2] = v22;
    goto v207;

v207:
    v22 = stack[-1];
    if (!(!consp(v22))) goto v268;
    v22 = stack[-1];
    v22 = Lfloat(nil, v22);
    nil = C_nil;
    if (exception_pending()) goto v230;
    env = stack[-3];
    fn = elt(env, 4); /* mkround */
    v22 = (*qfn1(fn))(qenv(fn), v22);
    nil = C_nil;
    if (exception_pending()) goto v230;
    env = stack[-3];
    stack[-1] = v22;
    goto v268;

v268:
    v22 = stack[0];
    if (!(!consp(v22))) goto v269;
    v22 = stack[0];
    v22 = Lfloat(nil, v22);
    nil = C_nil;
    if (exception_pending()) goto v230;
    env = stack[-3];
    fn = elt(env, 4); /* mkround */
    v22 = (*qfn1(fn))(qenv(fn), v22);
    nil = C_nil;
    if (exception_pending()) goto v230;
    env = stack[-3];
    stack[0] = v22;
    goto v269;

v269:
    v22 = stack[-2];
    if (v22 == nil) goto v24;
    stack[-2] = elt(env, 1); /* minus */
    v23 = stack[-1];
    v22 = stack[0];
    fn = elt(env, 5); /* rd!:times */
    v22 = (*qfn2(fn))(qenv(fn), v23, v22);
    nil = C_nil;
    if (exception_pending()) goto v230;
    {
        Lisp_Object v270 = stack[-2];
        popv(4);
        return list2(v270, v22);
    }

v24:
    v23 = stack[-1];
    v22 = stack[0];
    {
        popv(4);
        fn = elt(env, 5); /* rd!:times */
        return (*qfn2(fn))(qenv(fn), v23, v22);
    }
/* error exit handlers */
v230:
    popv(4);
    return nil;
}



/* Code for exdff0 */

static Lisp_Object CC_exdff0(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v273, v274;
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
    goto v231;

v231:
    v273 = stack[-2];
    if (!consp(v273)) goto v63;
    v273 = stack[-2];
    v273 = qcar(v273);
    if (!consp(v273)) goto v63;
    v273 = stack[-2];
    v273 = qcar(v273);
    v274 = qcar(v273);
    v273 = (Lisp_Object)17; /* 1 */
    v273 = cons(v274, v273);
    nil = C_nil;
    if (exception_pending()) goto v210;
    env = stack[-4];
    v274 = ncons(v273);
    nil = C_nil;
    if (exception_pending()) goto v210;
    env = stack[-4];
    v273 = (Lisp_Object)17; /* 1 */
    stack[0] = cons(v274, v273);
    nil = C_nil;
    if (exception_pending()) goto v210;
    env = stack[-4];
    v273 = stack[-2];
    v273 = qcar(v273);
    v273 = qcdr(v273);
    v273 = CC_exdff0(env, v273);
    nil = C_nil;
    if (exception_pending()) goto v210;
    env = stack[-4];
    fn = elt(env, 2); /* multsqpf */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[0], v273);
    nil = C_nil;
    if (exception_pending()) goto v210;
    env = stack[-4];
    v273 = stack[-2];
    v273 = qcar(v273);
    v273 = qcar(v273);
    fn = elt(env, 3); /* exdfp0 */
    stack[0] = (*qfn1(fn))(qenv(fn), v273);
    nil = C_nil;
    if (exception_pending()) goto v210;
    env = stack[-4];
    v273 = stack[-2];
    v273 = qcar(v273);
    v274 = qcdr(v273);
    v273 = (Lisp_Object)17; /* 1 */
    v273 = cons(v274, v273);
    nil = C_nil;
    if (exception_pending()) goto v210;
    env = stack[-4];
    fn = elt(env, 4); /* multpfsq */
    v273 = (*qfn2(fn))(qenv(fn), stack[0], v273);
    nil = C_nil;
    if (exception_pending()) goto v210;
    env = stack[-4];
    fn = elt(env, 5); /* addpf */
    v274 = (*qfn2(fn))(qenv(fn), stack[-1], v273);
    nil = C_nil;
    if (exception_pending()) goto v210;
    env = stack[-4];
    v273 = stack[-3];
    v273 = cons(v274, v273);
    nil = C_nil;
    if (exception_pending()) goto v210;
    env = stack[-4];
    stack[-3] = v273;
    v273 = stack[-2];
    v273 = qcdr(v273);
    stack[-2] = v273;
    goto v231;

v63:
    v273 = qvalue(elt(env, 1)); /* nil */
    v274 = v273;
    goto v165;

v165:
    v273 = stack[-3];
    if (v273 == nil) { popv(5); return onevalue(v274); }
    v273 = stack[-3];
    v273 = qcar(v273);
    fn = elt(env, 5); /* addpf */
    v273 = (*qfn2(fn))(qenv(fn), v273, v274);
    nil = C_nil;
    if (exception_pending()) goto v210;
    env = stack[-4];
    v274 = v273;
    v273 = stack[-3];
    v273 = qcdr(v273);
    stack[-3] = v273;
    goto v165;
/* error exit handlers */
v210:
    popv(5);
    return nil;
}



/* Code for bfplusn */

static Lisp_Object CC_bfplusn(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v35, v207, v208;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for bfplusn");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v207 = v1;
    v208 = v0;
/* end of prologue */
    v35 = v208;
    if (!consp(v35)) goto v191;
    v35 = v208;
    {
        fn = elt(env, 1); /* plus!: */
        return (*qfn2(fn))(qenv(fn), v35, v207);
    }

v191:
    v35 = v208;
    return plus2(v35, v207);
}



/* Code for ezgcdf1 */

static Lisp_Object CC_ezgcdf1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v58, v59, v16;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ezgcdf1");
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
    v59 = v1;
    v16 = v0;
/* end of prologue */
    v58 = (Lisp_Object)1; /* 0 */
    stack[0] = qvalue(elt(env, 1)); /* factor!-level */
    qvalue(elt(env, 1)) = v58; /* factor!-level */
    v58 = v16;
    v58 = list2(v58, v59);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-1];
    fn = elt(env, 2); /* gcdlist */
    v58 = (*qfn1(fn))(qenv(fn), v58);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-1];
    fn = elt(env, 3); /* poly!-abs */
    v58 = (*qfn1(fn))(qenv(fn), v58);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* factor!-level */
    { popv(2); return onevalue(v58); }
/* error exit handlers */
v17:
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* factor!-level */
    popv(2);
    return nil;
}



/* Code for physoptimes */

static Lisp_Object CC_physoptimes(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v242, v283;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for physoptimes");
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
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0;
/* end of prologue */
    stack[-2] = nil;
    v283 = qvalue(elt(env, 1)); /* tstack!* */
    v242 = (Lisp_Object)1; /* 0 */
    if (!(v283 == v242)) goto v262;
    v242 = qvalue(elt(env, 2)); /* mul!* */
    if (v242 == nil) goto v262;
    v242 = qvalue(elt(env, 2)); /* mul!* */
    stack[-2] = v242;
    v242 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 2)) = v242; /* mul!* */
    goto v262;

v262:
    v242 = qvalue(elt(env, 1)); /* tstack!* */
    v242 = add1(v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    qvalue(elt(env, 1)) = v242; /* tstack!* */
    v242 = stack[0];
    v242 = qcar(v242);
    fn = elt(env, 5); /* physopsim!* */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    stack[-6] = v242;
    v242 = stack[0];
    v242 = qcdr(v242);
    stack[-1] = v242;
    goto v19;

v19:
    v242 = stack[-1];
    if (v242 == nil) goto v34;
    v242 = stack[-1];
    v242 = qcar(v242);
    fn = elt(env, 5); /* physopsim!* */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    stack[-5] = v242;
    v242 = stack[-6];
    fn = elt(env, 6); /* getphystype */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    stack[-4] = v242;
    v242 = stack[-5];
    fn = elt(env, 6); /* getphystype */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    stack[-3] = v242;
    v242 = stack[-4];
    if (v242 == nil) goto v28;
    v242 = stack[-3];
    if (v242 == nil) goto v285;
    v242 = stack[-6];
    fn = elt(env, 7); /* physopaeval */
    stack[0] = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    v242 = stack[-5];
    fn = elt(env, 7); /* physopaeval */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 8); /* physopordchk */
    v242 = (*qfn2(fn))(qenv(fn), stack[0], v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    if (v242 == nil) goto v286;
    v283 = stack[-4];
    v242 = stack[-3];
    if (!(equal(v283, v242))) goto v286;
    v283 = stack[-4];
    v242 = elt(env, 4); /* scalar */
    if (!(v283 == v242)) goto v286;
    v242 = stack[-6];
    fn = elt(env, 9); /* physop2sq */
    stack[0] = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    v242 = stack[-5];
    fn = elt(env, 9); /* physop2sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 10); /* multsq */
    v242 = (*qfn2(fn))(qenv(fn), stack[0], v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 11); /* mk!*sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    stack[-6] = v242;
    goto v261;

v261:
    v242 = stack[-1];
    v242 = qcdr(v242);
    stack[-1] = v242;
    goto v19;

v286:
    v283 = stack[-6];
    v242 = stack[-5];
    fn = elt(env, 12); /* multopop!* */
    v242 = (*qfn2(fn))(qenv(fn), v283, v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    stack[-6] = v242;
    goto v261;

v285:
    v242 = stack[-5];
    v242 = (Lisp_Object)zerop(v242);
    v242 = v242 ? lisp_true : nil;
    env = stack[-7];
    if (v242 == nil) goto v228;
    v283 = qvalue(elt(env, 3)); /* nil */
    v242 = (Lisp_Object)17; /* 1 */
    v242 = cons(v283, v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 11); /* mk!*sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    goto v3;

v3:
    stack[-6] = v242;
    goto v261;

v228:
    v242 = stack[-5];
    v242 = Lonep(nil, v242);
    env = stack[-7];
    if (v242 == nil) goto v287;
    v242 = stack[-6];
    fn = elt(env, 9); /* physop2sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 11); /* mk!*sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    goto v3;

v287:
    v242 = stack[-5];
    fn = elt(env, 9); /* physop2sq */
    stack[0] = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    v242 = stack[-6];
    fn = elt(env, 9); /* physop2sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 10); /* multsq */
    v242 = (*qfn2(fn))(qenv(fn), stack[0], v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 11); /* mk!*sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    goto v3;

v28:
    v242 = stack[-3];
    if (v242 == nil) goto v65;
    v242 = stack[-6];
    v242 = (Lisp_Object)zerop(v242);
    v242 = v242 ? lisp_true : nil;
    env = stack[-7];
    if (v242 == nil) goto v150;
    v283 = qvalue(elt(env, 3)); /* nil */
    v242 = (Lisp_Object)17; /* 1 */
    v242 = cons(v283, v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 11); /* mk!*sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    stack[-6] = v242;
    goto v261;

v150:
    v242 = stack[-6];
    v242 = Lonep(nil, v242);
    env = stack[-7];
    if (v242 == nil) goto v274;
    v242 = stack[-5];
    fn = elt(env, 9); /* physop2sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 11); /* mk!*sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    stack[-6] = v242;
    goto v261;

v274:
    v242 = stack[-6];
    fn = elt(env, 9); /* physop2sq */
    stack[0] = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    v242 = stack[-5];
    fn = elt(env, 9); /* physop2sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 10); /* multsq */
    v242 = (*qfn2(fn))(qenv(fn), stack[0], v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 11); /* mk!*sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    stack[-6] = v242;
    goto v261;

v65:
    v242 = stack[-6];
    fn = elt(env, 9); /* physop2sq */
    stack[0] = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    v242 = stack[-5];
    fn = elt(env, 9); /* physop2sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 10); /* multsq */
    v242 = (*qfn2(fn))(qenv(fn), stack[0], v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    fn = elt(env, 11); /* mk!*sq */
    v242 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    stack[-6] = v242;
    goto v261;

v34:
    v242 = qvalue(elt(env, 2)); /* mul!* */
    if (v242 == nil) goto v190;
    v283 = qvalue(elt(env, 1)); /* tstack!* */
    v242 = (Lisp_Object)17; /* 1 */
    v242 = (Lisp_Object)greaterp2(v283, v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    v242 = v242 ? lisp_true : nil;
    env = stack[-7];
    if (!(v242 == nil)) goto v190;
    v242 = qvalue(elt(env, 2)); /* mul!* */
    v283 = qcar(v242);
    v242 = stack[-6];
    v242 = Lapply1(nil, v283, v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    stack[-6] = v242;
    v242 = qvalue(elt(env, 2)); /* mul!* */
    v242 = qcdr(v242);
    qvalue(elt(env, 2)) = v242; /* mul!* */
    goto v34;

v190:
    v242 = qvalue(elt(env, 1)); /* tstack!* */
    v242 = sub1(v242);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-7];
    qvalue(elt(env, 1)) = v242; /* tstack!* */
    v283 = qvalue(elt(env, 1)); /* tstack!* */
    v242 = (Lisp_Object)1; /* 0 */
    if (!(v283 == v242)) { Lisp_Object res = stack[-6]; popv(8); return onevalue(res); }
    v242 = stack[-2];
    qvalue(elt(env, 2)) = v242; /* mul!* */
    { Lisp_Object res = stack[-6]; popv(8); return onevalue(res); }
/* error exit handlers */
v284:
    popv(8);
    return nil;
}



/* Code for calc_atlas */

static Lisp_Object CC_calc_atlas(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v56, v57, v275, v35;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for calc_atlas");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v56 = v1;
    v57 = v0;
/* end of prologue */
    v275 = v57;
    v35 = qcar(v275);
    v275 = v57;
    v275 = qcdr(v275);
    v275 = qcdr(v275);
    v275 = qcar(v275);
    v57 = qcdr(v57);
    v57 = qcar(v57);
    {
        fn = elt(env, 1); /* calc_map_2d */
        return (*qfnn(fn))(qenv(fn), 4, v35, v275, v57, v56);
    }
}



/* Code for matop_pseudomod */

static Lisp_Object CC_matop_pseudomod(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v240, v262;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for matop_pseudomod");
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
/* copy arguments values to proper place */
    v240 = v1;
    v262 = v0;
/* end of prologue */
    fn = elt(env, 1); /* mod!* */
    v240 = (*qfn2(fn))(qenv(fn), v262, v240);
    errexit();
    v240 = qcar(v240);
    return onevalue(v240);
}



/* Code for innprodp2 */

static Lisp_Object CC_innprodp2(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v265, v263, v153, v154;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for innprodp2");
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
    v153 = v1;
    stack[0] = v0;
/* end of prologue */
    v265 = qvalue(elt(env, 1)); /* nil */
    v263 = v153;
    v265 = cons(v265, v263);
    nil = C_nil;
    if (exception_pending()) goto v30;
    env = stack[-1];
    v153 = v265;
    goto v58;

v58:
    v265 = stack[0];
    if (v265 == nil) { popv(2); return onevalue(v153); }
    v265 = v153;
    if (v265 == nil) { popv(2); return onevalue(v153); }
    v154 = qvalue(elt(env, 1)); /* nil */
    v265 = stack[0];
    v263 = qcar(v265);
    v265 = v153;
    v265 = qcdr(v265);
    v153 = qcar(v153);
    fn = elt(env, 2); /* innprodkp */
    v265 = (*qfnn(fn))(qenv(fn), 4, v154, v263, v265, v153);
    nil = C_nil;
    if (exception_pending()) goto v30;
    env = stack[-1];
    v153 = v265;
    v265 = stack[0];
    v265 = qcdr(v265);
    stack[0] = v265;
    goto v58;
/* error exit handlers */
v30:
    popv(2);
    return nil;
}



/* Code for dvfsf_mk2 */

static Lisp_Object MS_CDECL CC_dvfsf_mk2(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v52, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v58, v59, v16;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "dvfsf_mk2");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dvfsf_mk2");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v58 = v52;
    v59 = v1;
    v16 = v0;
/* end of prologue */
    return list3(v16, v59, v58);
}



/* Code for multiminus */

static Lisp_Object CC_multiminus(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v56, v57;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for multiminus");
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
    v56 = stack[0];
    v56 = qcar(v56);
    fn = elt(env, 1); /* expression */
    v56 = (*qfn1(fn))(qenv(fn), v56);
    nil = C_nil;
    if (exception_pending()) goto v35;
    env = stack[-1];
    v56 = stack[0];
    v57 = Llength(nil, v56);
    nil = C_nil;
    if (exception_pending()) goto v35;
    env = stack[-1];
    v56 = (Lisp_Object)33; /* 2 */
    if (!(v57 == v56)) goto v165;
    v56 = stack[0];
    v56 = qcdr(v56);
    v56 = qcar(v56);
    fn = elt(env, 1); /* expression */
    v56 = (*qfn1(fn))(qenv(fn), v56);
    nil = C_nil;
    if (exception_pending()) goto v35;
    goto v165;

v165:
    v56 = nil;
    { popv(2); return onevalue(v56); }
/* error exit handlers */
v35:
    popv(2);
    return nil;
}



/* Code for assgnpri */

static Lisp_Object MS_CDECL CC_assgnpri(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v52, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v293, v294, v295;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "assgnpri");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for assgnpri");
#endif
    if (stack >= stacklimit)
    {
        push3(v52,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v52);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v52;
    stack[-1] = v1;
    stack[-2] = v0;
/* end of prologue */
    v293 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 2)) = v293; /* overflowed!* */
    qvalue(elt(env, 3)) = v293; /* testing!-width!* */
    v293 = stack[-2];
    if (!(v293 == nil)) goto v191;
    v293 = (Lisp_Object)1; /* 0 */
    stack[-2] = v293;
    goto v191;

v191:
    v293 = qvalue(elt(env, 4)); /* !*nero */
    if (v293 == nil) goto v58;
    v294 = stack[-2];
    v293 = (Lisp_Object)1; /* 0 */
    if (!(v294 == v293)) goto v58;
    v293 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v293); }

v58:
    v293 = qvalue(elt(env, 5)); /* !*tex */
    if (v293 == nil) goto v156;
    v295 = stack[-2];
    v294 = stack[-1];
    v293 = stack[0];
    {
        popv(5);
        fn = elt(env, 19); /* texpri */
        return (*qfnn(fn))(qenv(fn), 3, v295, v294, v293);
    }

v156:
    v293 = elt(env, 6); /* vecp */
    fn = elt(env, 20); /* getd */
    v293 = (*qfn1(fn))(qenv(fn), v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    if (v293 == nil) goto v218;
    v293 = stack[-2];
    fn = elt(env, 6); /* vecp */
    v293 = (*qfn1(fn))(qenv(fn), v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    if (v293 == nil) goto v218;
    v294 = stack[-2];
    v293 = elt(env, 7); /* mat */
    {
        popv(5);
        fn = elt(env, 21); /* vecpri */
        return (*qfn2(fn))(qenv(fn), v294, v293);
    }

v218:
    v293 = stack[-2];
    fn = elt(env, 22); /* getrtype */
    v293 = (*qfn1(fn))(qenv(fn), v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    v295 = v293;
    if (v293 == nil) goto v43;
    v294 = v295;
    v293 = elt(env, 8); /* sprifn */
    v293 = Lflagp(nil, v294, v293);
    env = stack[-4];
    if (v293 == nil) goto v43;
    v293 = qvalue(elt(env, 9)); /* outputhandler!* */
    if (!(v293 == nil)) goto v43;
    v293 = stack[-1];
    if (v293 == nil) goto v238;
    v295 = elt(env, 12); /* setq */
    v293 = stack[-1];
    v294 = qcar(v293);
    v293 = stack[-2];
    v293 = list3(v295, v294, v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    fn = elt(env, 23); /* maprin */
    v293 = (*qfn1(fn))(qenv(fn), v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    goto v51;

v51:
    v293 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v293); }

v238:
    v294 = v295;
    v293 = elt(env, 10); /* tag */
    v294 = get(v294, v293);
    env = stack[-4];
    v293 = elt(env, 11); /* prifn */
    v294 = get(v294, v293);
    env = stack[-4];
    v293 = stack[-2];
    v293 = Lapply1(nil, v294, v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    goto v51;

v43:
    v294 = stack[0];
    v293 = elt(env, 13); /* (first only) */
    v293 = Lmemq(nil, v294, v293);
    if (v293 == nil) goto v229;
    v293 = qvalue(elt(env, 14)); /* t */
    fn = elt(env, 24); /* terpri!* */
    v293 = (*qfn1(fn))(qenv(fn), v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    goto v229;

v229:
    v293 = stack[-1];
    fn = elt(env, 25); /* evalvars */
    v293 = (*qfn1(fn))(qenv(fn), v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    stack[-1] = v293;
    v293 = qvalue(elt(env, 15)); /* !*fort */
    if (v293 == nil) goto v145;
    v295 = stack[-2];
    v294 = stack[-1];
    v293 = stack[0];
    fn = elt(env, 26); /* fvarpri */
    v293 = (*qfnn(fn))(qenv(fn), 3, v295, v294, v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    v293 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v293); }

v145:
    v293 = stack[-1];
    if (v293 == nil) goto v203;
    stack[-3] = elt(env, 12); /* setq */
    v294 = stack[-1];
    v293 = stack[-2];
    fn = elt(env, 27); /* aconc */
    v293 = (*qfn2(fn))(qenv(fn), v294, v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    v293 = cons(stack[-3], v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    goto v253;

v253:
    fn = elt(env, 23); /* maprin */
    v293 = (*qfn1(fn))(qenv(fn), v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    v293 = stack[0];
    if (v293 == nil) goto v297;
    v294 = stack[0];
    v293 = elt(env, 16); /* first */
    if (v294 == v293) goto v297;
    v293 = qvalue(elt(env, 17)); /* !*nat */
    if (!(v293 == nil)) goto v298;
    v293 = elt(env, 18); /* "$" */
    fn = elt(env, 28); /* prin2!* */
    v293 = (*qfn1(fn))(qenv(fn), v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    goto v298;

v298:
    v293 = qvalue(elt(env, 17)); /* !*nat */
    v293 = (v293 == nil ? lisp_true : nil);
    fn = elt(env, 24); /* terpri!* */
    v293 = (*qfn1(fn))(qenv(fn), v293);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-4];
    v293 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v293); }

v297:
    v293 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v293); }

v203:
    v293 = stack[-2];
    goto v253;
/* error exit handlers */
v296:
    popv(5);
    return nil;
}



/* Code for s!-nextarg */

static Lisp_Object CC_sKnextarg(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v301, v302, v293;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for s-nextarg");
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
    v301 = qvalue(elt(env, 1)); /* !*udebug */
    if (v301 == nil) goto v63;
    v301 = qvalue(elt(env, 2)); /* nil */
    fn = elt(env, 13); /* uprint */
    v301 = (*qfn1(fn))(qenv(fn), v301);
    nil = C_nil;
    if (exception_pending()) goto v303;
    env = stack[-2];
    goto v63;

v63:
    v301 = qvalue(elt(env, 3)); /* comb */
    if (!(v301 == nil)) goto v207;
    v301 = qvalue(elt(env, 4)); /* i */
    v301 = add1(v301);
    nil = C_nil;
    if (exception_pending()) goto v303;
    env = stack[-2];
    qvalue(elt(env, 4)) = v301; /* i */
    v301 = stack[0];
    fn = elt(env, 14); /* initcomb */
    v301 = (*qfn1(fn))(qenv(fn), v301);
    nil = C_nil;
    if (exception_pending()) goto v303;
    env = stack[-2];
    qvalue(elt(env, 3)) = v301; /* comb */
    goto v207;

v207:
    v302 = stack[0];
    v301 = qvalue(elt(env, 3)); /* comb */
    fn = elt(env, 15); /* getcomb */
    v301 = (*qfn2(fn))(qenv(fn), v302, v301);
    nil = C_nil;
    if (exception_pending()) goto v303;
    env = stack[-2];
    stack[-1] = v301;
    if (v301 == nil) goto v220;
    v302 = qvalue(elt(env, 4)); /* i */
    v301 = (Lisp_Object)17; /* 1 */
    if (!(v302 == v301)) goto v304;
    v302 = qvalue(elt(env, 4)); /* i */
    v301 = qvalue(elt(env, 5)); /* upb */
    v301 = (Lisp_Object)lesseq2(v302, v301);
    nil = C_nil;
    if (exception_pending()) goto v303;
    v301 = v301 ? lisp_true : nil;
    env = stack[-2];
    if (v301 == nil) goto v304;
    v301 = stack[-1];
    v301 = qcar(v301);
    v302 = qcar(v301);
    v301 = stack[-1];
    v301 = qcdr(v301);
    popv(3);
    return cons(v302, v301);

v304:
    v302 = qvalue(elt(env, 4)); /* i */
    v301 = (Lisp_Object)1; /* 0 */
    if (!(v302 == v301)) goto v65;
    v302 = qvalue(elt(env, 4)); /* i */
    v301 = qvalue(elt(env, 5)); /* upb */
    v301 = (Lisp_Object)lesseq2(v302, v301);
    nil = C_nil;
    if (exception_pending()) goto v303;
    v301 = v301 ? lisp_true : nil;
    env = stack[-2];
    if (v301 == nil) goto v65;
    v302 = elt(env, 6); /* (null!-fn) */
    v301 = stack[0];
    popv(3);
    return cons(v302, v301);

v65:
    v301 = qvalue(elt(env, 7)); /* acontract */
    if (v301 == nil) goto v230;
    v302 = qvalue(elt(env, 4)); /* i */
    v301 = qvalue(elt(env, 5)); /* upb */
    v301 = (Lisp_Object)lesseq2(v302, v301);
    nil = C_nil;
    if (exception_pending()) goto v303;
    v301 = v301 ? lisp_true : nil;
    env = stack[-2];
    if (v301 == nil) goto v230;
    v293 = qvalue(elt(env, 8)); /* op */
    v301 = stack[-1];
    v302 = qcar(v301);
    v301 = stack[-1];
    v301 = qcdr(v301);
    v301 = acons(v293, v302, v301);
    nil = C_nil;
    if (exception_pending()) goto v303;
    env = stack[-2];
    {
        popv(3);
        fn = elt(env, 16); /* mval */
        return (*qfn1(fn))(qenv(fn), v301);
    }

v230:
    v301 = qvalue(elt(env, 9)); /* mcontract */
    if (v301 == nil) goto v48;
    v302 = qvalue(elt(env, 4)); /* i */
    v301 = qvalue(elt(env, 5)); /* upb */
    v301 = (Lisp_Object)lesseq2(v302, v301);
    nil = C_nil;
    if (exception_pending()) goto v303;
    v301 = v301 ? lisp_true : nil;
    env = stack[-2];
    if (v301 == nil) goto v48;
    v293 = elt(env, 10); /* null!-fn */
    v301 = stack[-1];
    v302 = qcar(v301);
    v301 = stack[-1];
    v301 = qcdr(v301);
    popv(3);
    return acons(v293, v302, v301);

v48:
    v301 = qvalue(elt(env, 11)); /* expand */
    if (v301 == nil) goto v280;
    v301 = qvalue(elt(env, 2)); /* nil */
    qvalue(elt(env, 11)) = v301; /* expand */
    v302 = qvalue(elt(env, 12)); /* identity */
    v301 = stack[0];
    popv(3);
    return cons(v302, v301);

v280:
    v301 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v301); }

v220:
    v302 = qvalue(elt(env, 4)); /* i */
    v301 = (Lisp_Object)1; /* 0 */
    if (!(v302 == v301)) goto v6;
    v302 = qvalue(elt(env, 4)); /* i */
    v301 = qvalue(elt(env, 5)); /* upb */
    v301 = (Lisp_Object)lesseq2(v302, v301);
    nil = C_nil;
    if (exception_pending()) goto v303;
    v301 = v301 ? lisp_true : nil;
    env = stack[-2];
    if (v301 == nil) goto v6;
    v302 = elt(env, 6); /* (null!-fn) */
    v301 = stack[0];
    popv(3);
    return cons(v302, v301);

v6:
    v301 = qvalue(elt(env, 11)); /* expand */
    if (v301 == nil) goto v305;
    v301 = qvalue(elt(env, 2)); /* nil */
    qvalue(elt(env, 11)) = v301; /* expand */
    v302 = qvalue(elt(env, 12)); /* identity */
    v301 = stack[0];
    popv(3);
    return cons(v302, v301);

v305:
    v301 = nil;
    { popv(3); return onevalue(v301); }
/* error exit handlers */
v303:
    popv(3);
    return nil;
}



/* Code for dipprodin */

static Lisp_Object CC_dipprodin(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v151, v152, v212;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dipprodin");
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
    goto v63;

v63:
    v151 = stack[-1];
    if (v151 == nil) goto v165;
    v151 = stack[0];
    if (v151 == nil) goto v165;
    v151 = stack[-1];
    v151 = qcdr(v151);
    v212 = qcar(v151);
    v151 = stack[-1];
    v152 = qcar(v151);
    v151 = stack[0];
    fn = elt(env, 2); /* dipprodin1 */
    v152 = (*qfnn(fn))(qenv(fn), 3, v212, v152, v151);
    nil = C_nil;
    if (exception_pending()) goto v232;
    env = stack[-3];
    v151 = stack[-2];
    v151 = cons(v152, v151);
    nil = C_nil;
    if (exception_pending()) goto v232;
    env = stack[-3];
    stack[-2] = v151;
    v151 = stack[-1];
    v151 = qcdr(v151);
    v151 = qcdr(v151);
    stack[-1] = v151;
    goto v63;

v165:
    v151 = qvalue(elt(env, 1)); /* dipzero */
    v152 = v151;
    goto v191;

v191:
    v151 = stack[-2];
    if (v151 == nil) { popv(4); return onevalue(v152); }
    v151 = stack[-2];
    v151 = qcar(v151);
    fn = elt(env, 3); /* dipsum */
    v151 = (*qfn2(fn))(qenv(fn), v151, v152);
    nil = C_nil;
    if (exception_pending()) goto v232;
    env = stack[-3];
    v152 = v151;
    v151 = stack[-2];
    v151 = qcdr(v151);
    stack[-2] = v151;
    goto v191;
/* error exit handlers */
v232:
    popv(4);
    return nil;
}



/* Code for dipsimpcont */

static Lisp_Object CC_dipsimpcont(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v59, v16;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dipsimpcont");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v16 = v0;
/* end of prologue */
    v59 = qvalue(elt(env, 1)); /* !*vdpinteger */
    if (!(v59 == nil)) goto v75;
    v59 = qvalue(elt(env, 2)); /* !*groebdivide */
    if (v59 == nil) goto v75;
    v59 = v16;
    {
        fn = elt(env, 3); /* dipsimpcontr */
        return (*qfn1(fn))(qenv(fn), v59);
    }

v75:
    v59 = v16;
    {
        fn = elt(env, 4); /* dipsimpconti */
        return (*qfn1(fn))(qenv(fn), v59);
    }
}



/* Code for evload */

static Lisp_Object CC_evload(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v59;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for evload");
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

v75:
    v59 = stack[0];
    if (v59 == nil) goto v63;
    v59 = stack[0];
    v59 = qcar(v59);
    v59 = Lload_module(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v18;
    env = stack[-1];
    v59 = stack[0];
    v59 = qcdr(v59);
    stack[0] = v59;
    goto v75;

v63:
    v59 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v59); }
/* error exit handlers */
v18:
    popv(2);
    return nil;
}



/* Code for incident */

static Lisp_Object MS_CDECL CC_incident(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v52, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v266, v233, v261;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "incident");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for incident");
#endif
    if (stack >= stacklimit)
    {
        push3(v52,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v52);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v52;
    stack[0] = v1;
    stack[-2] = v0;
/* end of prologue */

v306:
    v266 = stack[0];
    if (v266 == nil) goto v231;
    v261 = stack[-2];
    v266 = stack[0];
    v233 = qcar(v266);
    v266 = stack[-1];
    fn = elt(env, 2); /* incident1 */
    v266 = (*qfnn(fn))(qenv(fn), 3, v261, v233, v266);
    nil = C_nil;
    if (exception_pending()) goto v151;
    env = stack[-3];
    v233 = v266;
    v266 = v233;
    if (v266 == nil) goto v268;
    v266 = stack[0];
    v266 = qcdr(v266);
    popv(4);
    return cons(v233, v266);

v268:
    v266 = stack[0];
    stack[0] = qcdr(v266);
    v266 = stack[-1];
    v266 = add1(v266);
    nil = C_nil;
    if (exception_pending()) goto v151;
    env = stack[-3];
    stack[-1] = v266;
    goto v306;

v231:
    v266 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v266); }
/* error exit handlers */
v151:
    popv(4);
    return nil;
}



/* Code for proper!-simpsqrt */

static Lisp_Object CC_properKsimpsqrt(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v190, v240;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for proper-simpsqrt");
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
    v190 = v0;
/* end of prologue */
    v240 = v190;
    v190 = elt(env, 0); /* proper!-simpsqrt */
    fn = elt(env, 1); /* carx */
    v190 = (*qfn2(fn))(qenv(fn), v240, v190);
    nil = C_nil;
    if (exception_pending()) goto v262;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 2); /* simpsqrti */
        return (*qfn1(fn))(qenv(fn), v190);
    }
/* error exit handlers */
v262:
    popv(1);
    return nil;
}



/* Code for modp */

static Lisp_Object CC_modp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v25, v27;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for modp");
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
    v27 = stack[-1];
    v25 = stack[0];
    v25 = Cremainder(v27, v25);
    nil = C_nil;
    if (exception_pending()) goto v41;
    env = stack[-2];
    stack[-1] = v25;
    v27 = stack[-1];
    v25 = (Lisp_Object)1; /* 0 */
    v25 = (Lisp_Object)lessp2(v27, v25);
    nil = C_nil;
    if (exception_pending()) goto v41;
    v25 = v25 ? lisp_true : nil;
    if (v25 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v27 = stack[-1];
    v25 = stack[0];
    popv(3);
    return plus2(v27, v25);
/* error exit handlers */
v41:
    popv(3);
    return nil;
}



/* Code for xquotient!-mod!-p */

static Lisp_Object MS_CDECL CC_xquotientKmodKp(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v52, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v236, v300, v298;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "xquotient-mod-p");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for xquotient-mod-p");
#endif
    if (stack >= stacklimit)
    {
        push3(v52,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v52);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v52;
    stack[-1] = v1;
    stack[-2] = v0;
/* end of prologue */
    v236 = stack[-2];
    if (v236 == nil) goto v231;
    v236 = stack[-2];
    if (!consp(v236)) goto v34;
    v236 = stack[-2];
    v236 = qcar(v236);
    if (!consp(v236)) goto v34;
    v236 = stack[-2];
    v236 = qcar(v236);
    v236 = qcar(v236);
    v300 = qcar(v236);
    v236 = stack[0];
    if (!(equal(v300, v236))) goto v34;
    v236 = stack[-2];
    v236 = qcar(v236);
    v236 = qcar(v236);
    v300 = qcdr(v236);
    v236 = stack[-1];
    v236 = qcar(v236);
    v236 = qcar(v236);
    v236 = qcdr(v236);
    if (((int32_t)(v300)) < ((int32_t)(v236))) goto v34;
    v236 = stack[-2];
    v236 = qcar(v236);
    v236 = qcar(v236);
    v300 = qcdr(v236);
    v236 = stack[-1];
    v236 = qcar(v236);
    v236 = qcar(v236);
    v236 = qcdr(v236);
    if (equal(v300, v236)) goto v215;
    v236 = stack[-2];
    v236 = qcar(v236);
    v236 = qcar(v236);
    v298 = qcar(v236);
    v236 = stack[-2];
    v236 = qcar(v236);
    v236 = qcar(v236);
    v300 = qcdr(v236);
    v236 = stack[-1];
    v236 = qcar(v236);
    v236 = qcar(v236);
    v236 = qcdr(v236);
    v236 = (Lisp_Object)(int32_t)((int32_t)v300 - (int32_t)v236 + TAG_FIXNUM);
    fn = elt(env, 3); /* mksp */
    stack[-3] = (*qfn2(fn))(qenv(fn), v298, v236);
    nil = C_nil;
    if (exception_pending()) goto v32;
    env = stack[-4];
    v236 = stack[-2];
    v236 = qcar(v236);
    v300 = qcdr(v236);
    v236 = stack[-1];
    v236 = qcar(v236);
    v236 = qcdr(v236);
    fn = elt(env, 4); /* quotient!-mod!-p */
    v236 = (*qfn2(fn))(qenv(fn), v300, v236);
    nil = C_nil;
    if (exception_pending()) goto v32;
    env = stack[-4];
    v236 = cons(stack[-3], v236);
    nil = C_nil;
    if (exception_pending()) goto v32;
    env = stack[-4];
    stack[-3] = v236;
    v236 = stack[-2];
    stack[-2] = qcdr(v236);
    v236 = stack[-3];
    fn = elt(env, 5); /* negate!-term */
    v300 = (*qfn1(fn))(qenv(fn), v236);
    nil = C_nil;
    if (exception_pending()) goto v32;
    env = stack[-4];
    v236 = stack[-1];
    v236 = qcdr(v236);
    fn = elt(env, 6); /* times!-term!-mod!-p */
    v236 = (*qfn2(fn))(qenv(fn), v300, v236);
    nil = C_nil;
    if (exception_pending()) goto v32;
    env = stack[-4];
    fn = elt(env, 7); /* plus!-mod!-p */
    v236 = (*qfn2(fn))(qenv(fn), stack[-2], v236);
    nil = C_nil;
    if (exception_pending()) goto v32;
    env = stack[-4];
    stack[-2] = v236;
    v298 = stack[-2];
    v300 = stack[-1];
    v236 = stack[0];
    v236 = CC_xquotientKmodKp(env, 3, v298, v300, v236);
    nil = C_nil;
    if (exception_pending()) goto v32;
    {
        Lisp_Object v237 = stack[-3];
        popv(5);
        return cons(v237, v236);
    }

v215:
    v236 = stack[-2];
    v236 = qcar(v236);
    v300 = qcdr(v236);
    v236 = stack[-1];
    v236 = qcar(v236);
    v236 = qcdr(v236);
    fn = elt(env, 4); /* quotient!-mod!-p */
    v236 = (*qfn2(fn))(qenv(fn), v300, v236);
    nil = C_nil;
    if (exception_pending()) goto v32;
    env = stack[-4];
    stack[0] = v236;
    v300 = stack[0];
    v236 = stack[-1];
    fn = elt(env, 8); /* times!-mod!-p */
    v236 = (*qfn2(fn))(qenv(fn), v300, v236);
    nil = C_nil;
    if (exception_pending()) goto v32;
    env = stack[-4];
    fn = elt(env, 9); /* difference!-mod!-p */
    v236 = (*qfn2(fn))(qenv(fn), stack[-2], v236);
    nil = C_nil;
    if (exception_pending()) goto v32;
    env = stack[-4];
    if (v236 == nil) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    v236 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 2)) = v236; /* exact!-quotient!-flag */
    { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }

v34:
    v236 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 2)) = v236; /* exact!-quotient!-flag */
    { popv(5); return onevalue(v236); }

v231:
    v236 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v236); }
/* error exit handlers */
v32:
    popv(5);
    return nil;
}



/* Code for termorder1 */

static Lisp_Object CC_termorder1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v215, v258;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for termorder1");
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

v74:
    v215 = stack[-1];
    if (v215 == nil) goto v165;
    v215 = stack[-1];
    v215 = (Lisp_Object)zerop(v215);
    v215 = v215 ? lisp_true : nil;
    env = stack[-2];
    if (v215 == nil) goto v262;
    v215 = stack[0];
    v215 = (Lisp_Object)zerop(v215);
    v215 = v215 ? lisp_true : nil;
    env = stack[-2];
    if (v215 == nil) goto v262;
    v215 = (Lisp_Object)1; /* 0 */
    { popv(3); return onevalue(v215); }

v262:
    v215 = stack[-1];
    v215 = (Lisp_Object)zerop(v215);
    v215 = v215 ? lisp_true : nil;
    env = stack[-2];
    if (v215 == nil) goto v42;
    v215 = (Lisp_Object)-15; /* -1 */
    { popv(3); return onevalue(v215); }

v42:
    v215 = stack[0];
    v215 = (Lisp_Object)zerop(v215);
    v215 = v215 ? lisp_true : nil;
    env = stack[-2];
    if (v215 == nil) goto v25;
    v215 = (Lisp_Object)17; /* 1 */
    { popv(3); return onevalue(v215); }

v25:
    v215 = stack[-1];
    v258 = qcar(v215);
    v215 = stack[0];
    v215 = qcar(v215);
    v215 = (Lisp_Object)lessp2(v258, v215);
    nil = C_nil;
    if (exception_pending()) goto v65;
    v215 = v215 ? lisp_true : nil;
    env = stack[-2];
    if (v215 == nil) goto v153;
    v215 = (Lisp_Object)-15; /* -1 */
    { popv(3); return onevalue(v215); }

v153:
    v215 = stack[-1];
    v258 = qcar(v215);
    v215 = stack[0];
    v215 = qcar(v215);
    v215 = (Lisp_Object)greaterp2(v258, v215);
    nil = C_nil;
    if (exception_pending()) goto v65;
    v215 = v215 ? lisp_true : nil;
    env = stack[-2];
    if (v215 == nil) goto v28;
    v215 = (Lisp_Object)17; /* 1 */
    { popv(3); return onevalue(v215); }

v28:
    v215 = stack[-1];
    v215 = qcdr(v215);
    stack[-1] = v215;
    v215 = stack[0];
    v215 = qcdr(v215);
    stack[0] = v215;
    goto v74;

v165:
    v215 = (Lisp_Object)1; /* 0 */
    { popv(3); return onevalue(v215); }
/* error exit handlers */
v65:
    popv(3);
    return nil;
}



/* Code for getargsrd */

static Lisp_Object MS_CDECL CC_getargsrd(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v275, v35;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "getargsrd");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for getargsrd");
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
    v35 = qvalue(elt(env, 1)); /* char */
    v275 = elt(env, 2); /* (b v a r) */
    if (equal(v35, v275)) goto v231;
    v275 = nil;
    { popv(2); return onevalue(v275); }

v231:
    fn = elt(env, 3); /* bvarrd */
    v275 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v208;
    env = stack[-1];
    stack[0] = v275;
    fn = elt(env, 4); /* lex */
    v275 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v208;
    env = stack[-1];
    v275 = CC_getargsrd(env, 0);
    nil = C_nil;
    if (exception_pending()) goto v208;
    {
        Lisp_Object v64 = stack[0];
        popv(2);
        return cons(v64, v275);
    }
/* error exit handlers */
v208:
    popv(2);
    return nil;
}



/* Code for !*a2k */

static Lisp_Object CC_Ha2k(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v27, v26;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for *a2k");
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
    fn = elt(env, 2); /* simp!* */
    v27 = (*qfn1(fn))(qenv(fn), v27);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-2];
    stack[-1] = v27;
    fn = elt(env, 3); /* kernp */
    v27 = (*qfn1(fn))(qenv(fn), v27);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-2];
    if (v27 == nil) goto v205;
    v27 = stack[-1];
    v27 = qcar(v27);
    v27 = qcar(v27);
    v27 = qcar(v27);
    v27 = qcar(v27);
    { popv(3); return onevalue(v27); }

v205:
    v27 = stack[0];
    if (v27 == nil) goto v207;
    v27 = stack[0];
    v26 = v27;
    goto v42;

v42:
    v27 = elt(env, 1); /* kernel */
    fn = elt(env, 4); /* typerr */
    v27 = (*qfn2(fn))(qenv(fn), v26, v27);
    nil = C_nil;
    if (exception_pending()) goto v38;
    v27 = nil;
    { popv(3); return onevalue(v27); }

v207:
    v27 = (Lisp_Object)1; /* 0 */
    v26 = v27;
    goto v42;
/* error exit handlers */
v38:
    popv(3);
    return nil;
}



/* Code for matrixp */

static Lisp_Object CC_matrixp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v18, v17;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for matrixp");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v18 = v0;
/* end of prologue */
    v17 = v18;
    v18 = elt(env, 1); /* mat */
    if (!consp(v17)) goto v75;
    v17 = qcar(v17);
    if (!(v17 == v18)) goto v75;
    v18 = qvalue(elt(env, 3)); /* t */
    return onevalue(v18);

v75:
    v18 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v18);
}



/* Code for oldmtch */

static Lisp_Object CC_oldmtch(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v54, v282, v66;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for oldmtch");
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
    stack[-3] = nil;
    v54 = stack[-2];
    v66 = qcdr(v54);
    v54 = stack[-1];
    v282 = qcar(v54);
    v54 = stack[-2];
    v54 = qcar(v54);
    fn = elt(env, 2); /* mcharg */
    v54 = (*qfnn(fn))(qenv(fn), 3, v66, v282, v54);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-4];
    stack[0] = v54;
    goto v56;

v56:
    v54 = stack[0];
    if (v54 == nil) goto v42;
    v54 = stack[-3];
    if (!(v54 == nil)) goto v42;
    v54 = stack[0];
    v282 = qcar(v54);
    v54 = stack[-1];
    v54 = qcdr(v54);
    v54 = qcar(v54);
    v54 = qcdr(v54);
    v54 = Lsubla(nil, v282, v54);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-4];
    fn = elt(env, 3); /* eval */
    v54 = (*qfn1(fn))(qenv(fn), v54);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-4];
    if (v54 == nil) goto v26;
    v54 = stack[0];
    v282 = qcar(v54);
    v54 = stack[-1];
    v54 = qcdr(v54);
    v54 = qcdr(v54);
    v54 = qcar(v54);
    v54 = Lsubla(nil, v282, v54);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-4];
    goto v25;

v25:
    stack[-3] = v54;
    v54 = stack[0];
    v54 = qcdr(v54);
    stack[0] = v54;
    goto v56;

v26:
    v54 = nil;
    goto v25;

v42:
    v54 = stack[-3];
    if (v54 == nil) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    else { Lisp_Object res = stack[-3]; popv(5); return onevalue(res); }
/* error exit handlers */
v51:
    popv(5);
    return nil;
}



/* Code for module */

static Lisp_Object CC_module(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v58, v59;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for module");
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
    v58 = v0;
/* end of prologue */
    v59 = qvalue(elt(env, 1)); /* !*mode */
    v58 = qvalue(elt(env, 2)); /* mode!-list!* */
    v58 = cons(v59, v58);
    nil = C_nil;
    if (exception_pending()) goto v16;
    env = stack[0];
    qvalue(elt(env, 2)) = v58; /* mode!-list!* */
    v58 = qvalue(elt(env, 3)); /* nil */
    v58 = ncons(v58);
    nil = C_nil;
    if (exception_pending()) goto v16;
    env = stack[0];
    qvalue(elt(env, 4)) = v58; /* alglist!* */
    v58 = elt(env, 5); /* symbolic */
    qvalue(elt(env, 1)) = v58; /* !*mode */
    v58 = nil;
    { popv(1); return onevalue(v58); }
/* error exit handlers */
v16:
    popv(1);
    return nil;
}



/* Code for statep */

static Lisp_Object CC_statep(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v28, v29, v264;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for statep");
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
    v29 = v0;
/* end of prologue */
    v28 = v29;
    if (symbolp(v28)) goto v17;
    v28 = qvalue(elt(env, 1)); /* nil */
    goto v231;

v231:
    if (!(v28 == nil)) { popv(1); return onevalue(v28); }
    v28 = v29;
    if (!consp(v28)) goto v218;
    v28 = v29;
    v28 = qcar(v28);
    if (symbolp(v28)) goto v153;
    v28 = qvalue(elt(env, 1)); /* nil */
    { popv(1); return onevalue(v28); }

v153:
    v28 = v29;
    v29 = qcar(v28);
    v28 = elt(env, 2); /* phystype */
    v28 = get(v29, v28);
    env = stack[0];
    v29 = elt(env, 3); /* state */
    v28 = (v28 == v29 ? lisp_true : nil);
    { popv(1); return onevalue(v28); }

v218:
    v28 = qvalue(elt(env, 1)); /* nil */
    { popv(1); return onevalue(v28); }

v17:
    v264 = v29;
    v28 = elt(env, 2); /* phystype */
    v264 = get(v264, v28);
    env = stack[0];
    v28 = elt(env, 3); /* state */
    v28 = (v264 == v28 ? lisp_true : nil);
    goto v231;
}



/* Code for !*f2di */

static Lisp_Object CC_Hf2di(Lisp_Object env,
                         Lisp_Object v1, Lisp_Object v52)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v324, v325;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for *f2di");
#endif
    if (stack >= stacklimit)
    {
        push2(v52,v1);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v1,v52);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    v324 = v52;
    stack[-5] = v1;
/* end of prologue */
    stack[-6] = qvalue(elt(env, 1)); /* varlist */
    qvalue(elt(env, 1)) = nil; /* varlist */
    qvalue(elt(env, 1)) = v324; /* varlist */
    v324 = stack[-5];
    if (v324 == nil) goto v34;
    v324 = stack[-5];
    if (!consp(v324)) goto v56;
    v324 = stack[-5];
    v324 = qcar(v324);
    if (!consp(v324)) goto v56;
    v324 = stack[-5];
    v324 = qcar(v324);
    v324 = qcar(v324);
    v325 = qcar(v324);
    v324 = qvalue(elt(env, 1)); /* varlist */
    v324 = Lmember(nil, v325, v324);
    if (v324 == nil) goto v44;
    v324 = stack[-5];
    v324 = qcar(v324);
    v325 = qcdr(v324);
    v324 = qvalue(elt(env, 1)); /* varlist */
    stack[-4] = CC_Hf2di(env, v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    v324 = qvalue(elt(env, 1)); /* varlist */
    stack[-3] = v324;
    v324 = stack[-3];
    if (v324 == nil) goto v11;
    v324 = stack[-3];
    v324 = qcar(v324);
    v325 = v324;
    v324 = stack[-5];
    v324 = qcar(v324);
    v324 = qcar(v324);
    v324 = qcar(v324);
    if (equal(v325, v324)) goto v310;
    v324 = (Lisp_Object)1; /* 0 */
    goto v312;

v312:
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    stack[-1] = v324;
    stack[-2] = v324;
    goto v228;

v228:
    v324 = stack[-3];
    v324 = qcdr(v324);
    stack[-3] = v324;
    v324 = stack[-3];
    if (v324 == nil) goto v222;
    stack[0] = stack[-1];
    v324 = stack[-3];
    v324 = qcar(v324);
    v325 = v324;
    v324 = stack[-5];
    v324 = qcar(v324);
    v324 = qcar(v324);
    v324 = qcar(v324);
    if (equal(v325, v324)) goto v142;
    v324 = (Lisp_Object)1; /* 0 */
    goto v288;

v288:
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    v324 = Lrplacd(nil, stack[0], v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    v324 = stack[-1];
    v324 = qcdr(v324);
    stack[-1] = v324;
    goto v228;

v142:
    v324 = stack[-5];
    v324 = qcar(v324);
    v324 = qcar(v324);
    v324 = qcdr(v324);
    goto v288;

v222:
    v324 = stack[-2];
    goto v326;

v326:
    fn = elt(env, 3); /* addgt */
    v324 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    fn = elt(env, 4); /* pdmult */
    v324 = (*qfn2(fn))(qenv(fn), stack[-4], v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    stack[0] = v324;
    goto v327;

v327:
    v324 = stack[-5];
    v325 = qcdr(v324);
    v324 = qvalue(elt(env, 1)); /* varlist */
    v324 = CC_Hf2di(env, v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    fn = elt(env, 5); /* psum */
    v324 = (*qfn2(fn))(qenv(fn), stack[0], v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    goto v231;

v231:
    qvalue(elt(env, 1)) = stack[-6]; /* varlist */
    { popv(8); return onevalue(v324); }

v310:
    v324 = stack[-5];
    v324 = qcar(v324);
    v324 = qcar(v324);
    v324 = qcdr(v324);
    goto v312;

v11:
    v324 = qvalue(elt(env, 2)); /* nil */
    goto v326;

v44:
    v324 = stack[-5];
    v324 = qcar(v324);
    v325 = qcdr(v324);
    v324 = qvalue(elt(env, 1)); /* varlist */
    stack[0] = CC_Hf2di(env, v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    v324 = stack[-5];
    v324 = qcar(v324);
    v325 = qcar(v324);
    v324 = (Lisp_Object)17; /* 1 */
    v324 = cons(v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    fn = elt(env, 6); /* pcmult */
    v324 = (*qfn2(fn))(qenv(fn), stack[0], v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    stack[0] = v324;
    goto v327;

v56:
    v324 = qvalue(elt(env, 1)); /* varlist */
    stack[-3] = v324;
    v324 = stack[-3];
    if (v324 == nil) goto v41;
    v324 = (Lisp_Object)1; /* 0 */
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    stack[-1] = v324;
    stack[-2] = v324;
    goto v25;

v25:
    v324 = stack[-3];
    v324 = qcdr(v324);
    stack[-3] = v324;
    v324 = stack[-3];
    if (v324 == nil) goto v213;
    stack[0] = stack[-1];
    v324 = (Lisp_Object)1; /* 0 */
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    v324 = Lrplacd(nil, stack[0], v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    v324 = stack[-1];
    v324 = qcdr(v324);
    stack[-1] = v324;
    goto v25;

v213:
    v324 = stack[-2];
    goto v155;

v155:
    fn = elt(env, 3); /* addgt */
    v325 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    v324 = stack[-5];
    v324 = cons(v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[-7];
    goto v231;

v41:
    v324 = qvalue(elt(env, 2)); /* nil */
    goto v155;

v34:
    v324 = qvalue(elt(env, 2)); /* nil */
    goto v231;
/* error exit handlers */
v198:
    env = stack[-7];
    qvalue(elt(env, 1)) = stack[-6]; /* varlist */
    popv(8);
    return nil;
}



/* Code for comb */

static Lisp_Object CC_comb(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v146, v273;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for comb");
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
    stack[-3] = v1;
    stack[-4] = v0;
/* end of prologue */
    stack[0] = nil;
    v273 = stack[-3];
    v146 = (Lisp_Object)1; /* 0 */
    if (v273 == v146) goto v34;
    v146 = stack[-4];
    v273 = Llength(nil, v146);
    nil = C_nil;
    if (exception_pending()) goto v308;
    env = stack[-6];
    v146 = stack[-3];
    v273 = difference2(v273, v146);
    nil = C_nil;
    if (exception_pending()) goto v308;
    env = stack[-6];
    stack[-5] = v273;
    v146 = (Lisp_Object)1; /* 0 */
    v146 = (Lisp_Object)lessp2(v273, v146);
    nil = C_nil;
    if (exception_pending()) goto v308;
    v146 = v146 ? lisp_true : nil;
    env = stack[-6];
    if (v146 == nil) goto v234;
    v146 = qvalue(elt(env, 1)); /* nil */
    { popv(7); return onevalue(v146); }

v234:
    v146 = (Lisp_Object)17; /* 1 */
    stack[-2] = v146;
    goto v272;

v272:
    v273 = stack[-5];
    v146 = stack[-2];
    v146 = difference2(v273, v146);
    nil = C_nil;
    if (exception_pending()) goto v308;
    env = stack[-6];
    v146 = Lminusp(nil, v146);
    env = stack[-6];
    if (v146 == nil) goto v212;
    v273 = stack[-4];
    v146 = stack[0];
    popv(7);
    return cons(v273, v146);

v212:
    stack[-1] = stack[0];
    v146 = stack[-4];
    stack[0] = qcdr(v146);
    v146 = stack[-3];
    v146 = sub1(v146);
    nil = C_nil;
    if (exception_pending()) goto v308;
    env = stack[-6];
    v273 = CC_comb(env, stack[0], v146);
    nil = C_nil;
    if (exception_pending()) goto v308;
    env = stack[-6];
    v146 = stack[-4];
    v146 = qcar(v146);
    fn = elt(env, 2); /* mapcons */
    v146 = (*qfn2(fn))(qenv(fn), v273, v146);
    nil = C_nil;
    if (exception_pending()) goto v308;
    env = stack[-6];
    fn = elt(env, 3); /* nconc!* */
    v146 = (*qfn2(fn))(qenv(fn), stack[-1], v146);
    nil = C_nil;
    if (exception_pending()) goto v308;
    env = stack[-6];
    stack[0] = v146;
    v146 = stack[-4];
    v146 = qcdr(v146);
    stack[-4] = v146;
    v146 = stack[-2];
    v146 = add1(v146);
    nil = C_nil;
    if (exception_pending()) goto v308;
    env = stack[-6];
    stack[-2] = v146;
    goto v272;

v34:
    v146 = qvalue(elt(env, 1)); /* nil */
    popv(7);
    return ncons(v146);
/* error exit handlers */
v308:
    popv(7);
    return nil;
}



setup_type const u24_setup[] =
{
    {"mk+scal+mult+mat",        too_few_2,      CC_mkLscalLmultLmat,wrong_no_2},
    {"bvarrd",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_bvarrd},
    {"matsm1",                  CC_matsm1,      too_many_1,    wrong_no_1},
    {"dm-mkfloat",              CC_dmKmkfloat,  too_many_1,    wrong_no_1},
    {"gvar1",                   too_few_2,      CC_gvar1,      wrong_no_2},
    {"vdpilcomb1",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_vdpilcomb1},
    {"weak_xreduce1",           wrong_no_na,    wrong_no_nb,   (n_args *)CC_weak_xreduce1},
    {"unresidp",                CC_unresidp,    too_many_1,    wrong_no_1},
    {"list_is_all_free",        CC_list_is_all_free,too_many_1,wrong_no_1},
    {"difbf",                   too_few_2,      CC_difbf,      wrong_no_2},
    {"multdf",                  too_few_2,      CC_multdf,     wrong_no_2},
    {"get*inverse",             too_few_2,      CC_getHinverse,wrong_no_2},
    {"ev_sum",                  too_few_2,      CC_ev_sum,     wrong_no_2},
    {"minusml",                 CC_minusml,     too_many_1,    wrong_no_1},
    {"sparpri",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_sparpri},
    {"specrd:times",            too_few_2,      CC_specrdTtimes,wrong_no_2},
    {"exdff0",                  CC_exdff0,      too_many_1,    wrong_no_1},
    {"bfplusn",                 too_few_2,      CC_bfplusn,    wrong_no_2},
    {"ezgcdf1",                 too_few_2,      CC_ezgcdf1,    wrong_no_2},
    {"physoptimes",             CC_physoptimes, too_many_1,    wrong_no_1},
    {"calc_atlas",              too_few_2,      CC_calc_atlas, wrong_no_2},
    {"matop_pseudomod",         too_few_2,      CC_matop_pseudomod,wrong_no_2},
    {"innprodp2",               too_few_2,      CC_innprodp2,  wrong_no_2},
    {"dvfsf_mk2",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_dvfsf_mk2},
    {"multiminus",              CC_multiminus,  too_many_1,    wrong_no_1},
    {"assgnpri",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_assgnpri},
    {"s-nextarg",               CC_sKnextarg,   too_many_1,    wrong_no_1},
    {"dipprodin",               too_few_2,      CC_dipprodin,  wrong_no_2},
    {"dipsimpcont",             CC_dipsimpcont, too_many_1,    wrong_no_1},
    {"evload",                  CC_evload,      too_many_1,    wrong_no_1},
    {"incident",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_incident},
    {"proper-simpsqrt",         CC_properKsimpsqrt,too_many_1, wrong_no_1},
    {"modp",                    too_few_2,      CC_modp,       wrong_no_2},
    {"xquotient-mod-p",         wrong_no_na,    wrong_no_nb,   (n_args *)CC_xquotientKmodKp},
    {"termorder1",              too_few_2,      CC_termorder1, wrong_no_2},
    {"getargsrd",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_getargsrd},
    {"*a2k",                    CC_Ha2k,        too_many_1,    wrong_no_1},
    {"matrixp",                 CC_matrixp,     too_many_1,    wrong_no_1},
    {"oldmtch",                 too_few_2,      CC_oldmtch,    wrong_no_2},
    {"module",                  CC_module,      too_many_1,    wrong_no_1},
    {"statep",                  CC_statep,      too_many_1,    wrong_no_1},
    {"*f2di",                   too_few_2,      CC_Hf2di,      wrong_no_2},
    {"comb",                    too_few_2,      CC_comb,       wrong_no_2},
    {NULL, (one_args *)"u24", (two_args *)"19835 2521253 882909", 0}
};

/* end of generated code */

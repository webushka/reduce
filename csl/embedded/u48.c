
/* $destdir/generated-c\u48.c Machine generated C code */

/* Signature: 00000000 20-Aug-2010 */

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


/* Code for vdpvbcprod */

static Lisp_Object CC_vdpvbcprod(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v7, v8;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for vdpvbcprod");
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
    v7 = v1;
    stack[0] = v0;
/* end of prologue */
    v8 = stack[0];
    v8 = qcdr(v8);
    v8 = qcdr(v8);
    v8 = qcdr(v8);
    v8 = qcar(v8);
    fn = elt(env, 2); /* dipbcprod */
    v7 = (*qfn2(fn))(qenv(fn), v8, v7);
    nil = C_nil;
    if (exception_pending()) goto v9;
    env = stack[-2];
    fn = elt(env, 3); /* dip2vdp */
    v7 = (*qfn1(fn))(qenv(fn), v7);
    nil = C_nil;
    if (exception_pending()) goto v9;
    env = stack[-2];
    v8 = v7;
    v7 = qvalue(elt(env, 1)); /* !*gsugar */
    if (v7 == nil) { popv(3); return onevalue(v8); }
    stack[-1] = v8;
    v7 = stack[0];
    fn = elt(env, 4); /* gsugar */
    v7 = (*qfn1(fn))(qenv(fn), v7);
    nil = C_nil;
    if (exception_pending()) goto v9;
    env = stack[-2];
    {
        Lisp_Object v10 = stack[-1];
        popv(3);
        fn = elt(env, 5); /* gsetsugar */
        return (*qfn2(fn))(qenv(fn), v10, v7);
    }
/* error exit handlers */
v9:
    popv(3);
    return nil;
}



/* Code for fast_augment_columns */

static Lisp_Object CC_fast_augment_columns(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v57, v58, v59;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for fast_augment_columns");
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
    push(nil);
/* copy arguments values to proper place */
    stack[-9] = v1;
    stack[-3] = v0;
/* end of prologue */
    v57 = stack[-9];
    if (!consp(v57)) goto v60;
    stack[-10] = elt(env, 1); /* mat */
    v57 = stack[-3];
    v57 = qcdr(v57);
    stack[-8] = v57;
    v57 = stack[-8];
    if (v57 == nil) goto v61;
    v57 = stack[-8];
    v57 = qcar(v57);
    stack[-4] = v57;
    v57 = stack[-9];
    stack[-3] = v57;
    v57 = stack[-3];
    if (v57 == nil) goto v62;
    v57 = stack[-3];
    v57 = qcar(v57);
    v58 = stack[-4];
    fn = elt(env, 3); /* nth */
    v57 = (*qfn2(fn))(qenv(fn), v58, v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = ncons(v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    stack[-1] = v57;
    stack[-2] = v57;
    goto v64;

v64:
    v57 = stack[-3];
    v57 = qcdr(v57);
    stack[-3] = v57;
    v57 = stack[-3];
    if (v57 == nil) goto v65;
    stack[0] = stack[-1];
    v57 = stack[-3];
    v57 = qcar(v57);
    v58 = stack[-4];
    fn = elt(env, 3); /* nth */
    v57 = (*qfn2(fn))(qenv(fn), v58, v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = ncons(v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = Lrplacd(nil, stack[0], v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = stack[-1];
    v57 = qcdr(v57);
    stack[-1] = v57;
    goto v64;

v65:
    v57 = stack[-2];
    goto v66;

v66:
    v57 = ncons(v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    stack[-6] = v57;
    stack[-7] = v57;
    goto v67;

v67:
    v57 = stack[-8];
    v57 = qcdr(v57);
    stack[-8] = v57;
    v57 = stack[-8];
    if (v57 == nil) goto v68;
    stack[-5] = stack[-6];
    v57 = stack[-8];
    v57 = qcar(v57);
    stack[-4] = v57;
    v57 = stack[-9];
    stack[-3] = v57;
    v57 = stack[-3];
    if (v57 == nil) goto v69;
    v57 = stack[-3];
    v57 = qcar(v57);
    v58 = stack[-4];
    fn = elt(env, 3); /* nth */
    v57 = (*qfn2(fn))(qenv(fn), v58, v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = ncons(v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    stack[-1] = v57;
    stack[-2] = v57;
    goto v70;

v70:
    v57 = stack[-3];
    v57 = qcdr(v57);
    stack[-3] = v57;
    v57 = stack[-3];
    if (v57 == nil) goto v71;
    stack[0] = stack[-1];
    v57 = stack[-3];
    v57 = qcar(v57);
    v58 = stack[-4];
    fn = elt(env, 3); /* nth */
    v57 = (*qfn2(fn))(qenv(fn), v58, v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = ncons(v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = Lrplacd(nil, stack[0], v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = stack[-1];
    v57 = qcdr(v57);
    stack[-1] = v57;
    goto v70;

v71:
    v57 = stack[-2];
    goto v72;

v72:
    v57 = ncons(v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = Lrplacd(nil, stack[-5], v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = stack[-6];
    v57 = qcdr(v57);
    stack[-6] = v57;
    goto v67;

v69:
    v57 = qvalue(elt(env, 2)); /* nil */
    goto v72;

v68:
    v57 = stack[-7];
    goto v73;

v73:
    {
        Lisp_Object v74 = stack[-10];
        popv(12);
        return cons(v74, v57);
    }

v62:
    v57 = qvalue(elt(env, 2)); /* nil */
    goto v66;

v61:
    v57 = qvalue(elt(env, 2)); /* nil */
    goto v73;

v60:
    stack[-5] = elt(env, 1); /* mat */
    v57 = (Lisp_Object)17; /* 1 */
    stack[-4] = v57;
    v57 = stack[-3];
    v57 = Llength(nil, v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v58 = (Lisp_Object)((int32_t)(v57) - 0x10);
    v57 = stack[-4];
    v57 = difference2(v58, v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = Lminusp(nil, v57);
    env = stack[-11];
    if (v57 == nil) goto v75;
    v57 = qvalue(elt(env, 2)); /* nil */
    goto v76;

v76:
    {
        Lisp_Object v77 = stack[-5];
        popv(12);
        return cons(v77, v57);
    }

v75:
    v59 = stack[-3];
    v58 = stack[-4];
    v57 = stack[-9];
    v57 = list3(v59, v58, v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    fn = elt(env, 4); /* fast_unchecked_getmatelem */
    v57 = (*qfn1(fn))(qenv(fn), v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = ncons(v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = ncons(v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    stack[-1] = v57;
    stack[-2] = v57;
    goto v78;

v78:
    v57 = stack[-4];
    v57 = add1(v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    stack[-4] = v57;
    v57 = stack[-3];
    v57 = Llength(nil, v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v58 = (Lisp_Object)((int32_t)(v57) - 0x10);
    v57 = stack[-4];
    v57 = difference2(v58, v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = Lminusp(nil, v57);
    env = stack[-11];
    if (v57 == nil) goto v79;
    v57 = stack[-2];
    goto v76;

v79:
    stack[0] = stack[-1];
    v59 = stack[-3];
    v58 = stack[-4];
    v57 = stack[-9];
    v57 = list3(v59, v58, v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    fn = elt(env, 4); /* fast_unchecked_getmatelem */
    v57 = (*qfn1(fn))(qenv(fn), v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = ncons(v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = ncons(v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = Lrplacd(nil, stack[0], v57);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-11];
    v57 = stack[-1];
    v57 = qcdr(v57);
    stack[-1] = v57;
    goto v78;
/* error exit handlers */
v63:
    popv(12);
    return nil;
}



/* Code for evalsetbool */

static Lisp_Object MS_CDECL CC_evalsetbool(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v80, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v114, v115, v116, v117;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "evalsetbool");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for evalsetbool");
#endif
    if (stack >= stacklimit)
    {
        push3(v80,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v80);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-5] = v80;
    stack[-6] = v1;
    stack[-7] = v0;
/* end of prologue */
    stack[-8] = nil;
    stack[-4] = nil;
    v115 = stack[-6];
    v114 = stack[-5];
    v114 = list2(v115, v114);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-9];
    stack[-3] = v114;
    v114 = stack[-3];
    if (v114 == nil) goto v119;
    v114 = stack[-3];
    v114 = qcar(v114);
    v116 = v114;
    v115 = v116;
    v114 = elt(env, 2); /* list */
    if (!consp(v115)) goto v56;
    v115 = qcar(v115);
    if (!(v115 == v114)) goto v56;
    v114 = qvalue(elt(env, 3)); /* t */
    stack[-8] = v114;
    v114 = v116;
    v114 = qcdr(v114);
    goto v7;

v7:
    v114 = ncons(v114);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-9];
    stack[-1] = v114;
    stack[-2] = v114;
    goto v5;

v5:
    v114 = stack[-3];
    v114 = qcdr(v114);
    stack[-3] = v114;
    v114 = stack[-3];
    if (v114 == nil) goto v120;
    stack[0] = stack[-1];
    v114 = stack[-3];
    v114 = qcar(v114);
    v116 = v114;
    v115 = v116;
    v114 = elt(env, 2); /* list */
    if (!consp(v115)) goto v12;
    v115 = qcar(v115);
    if (!(v115 == v114)) goto v12;
    v114 = qvalue(elt(env, 3)); /* t */
    stack[-8] = v114;
    v114 = v116;
    v114 = qcdr(v114);
    goto v73;

v73:
    v114 = ncons(v114);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-9];
    v114 = Lrplacd(nil, stack[0], v114);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-9];
    v114 = stack[-1];
    v114 = qcdr(v114);
    stack[-1] = v114;
    goto v5;

v12:
    v114 = v116;
    fn = elt(env, 9); /* reval */
    v114 = (*qfn1(fn))(qenv(fn), v114);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-9];
    v116 = v114;
    if (symbolp(v114)) goto v121;
    v114 = v116;
    v114 = Lconsp(nil, v114);
    env = stack[-9];
    if (v114 == nil) goto v122;
    v114 = v116;
    v115 = qcar(v114);
    v114 = elt(env, 4); /* setvalued */
    v114 = Lflagp(nil, v115, v114);
    env = stack[-9];
    if (!(v114 == nil)) goto v121;

v122:
    v115 = v116;
    v114 = elt(env, 5); /* "set" */
    fn = elt(env, 10); /* typerr */
    v114 = (*qfn2(fn))(qenv(fn), v115, v114);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-9];
    goto v73;

v121:
    v114 = qvalue(elt(env, 3)); /* t */
    stack[-4] = v114;
    v114 = v116;
    goto v73;

v120:
    v114 = stack[-2];
    goto v123;

v123:
    v116 = v114;
    v114 = stack[-8];
    if (v114 == nil) { popv(10); return onevalue(v116); }
    v114 = stack[-4];
    if (v114 == nil) goto v24;
    stack[0] = elt(env, 6); /* "Cannot evaluate" */
    stack[-1] = stack[-7];
    v114 = stack[-6];
    fn = elt(env, 9); /* reval */
    stack[-2] = (*qfn1(fn))(qenv(fn), v114);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-9];
    v114 = stack[-5];
    fn = elt(env, 9); /* reval */
    v114 = (*qfn1(fn))(qenv(fn), v114);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-9];
    v117 = list3(stack[-1], stack[-2], v114);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-9];
    v116 = elt(env, 7); /* "as Boolean-valued set expression" */
    v115 = qvalue(elt(env, 1)); /* nil */
    v114 = qvalue(elt(env, 3)); /* t */
    {
        Lisp_Object v124 = stack[0];
        popv(10);
        fn = elt(env, 11); /* msgpri */
        return (*qfnn(fn))(qenv(fn), 5, v124, v117, v116, v115, v114);
    }

v24:
    v115 = stack[-7];
    v114 = elt(env, 8); /* setboolfn */
    v114 = get(v115, v114);
    env = stack[-9];
    v115 = v116;
    {
        popv(10);
        fn = elt(env, 12); /* apply */
        return (*qfn2(fn))(qenv(fn), v114, v115);
    }

v56:
    v114 = v116;
    fn = elt(env, 9); /* reval */
    v114 = (*qfn1(fn))(qenv(fn), v114);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-9];
    v116 = v114;
    if (symbolp(v114)) goto v125;
    v114 = v116;
    v114 = Lconsp(nil, v114);
    env = stack[-9];
    if (v114 == nil) goto v126;
    v114 = v116;
    v115 = qcar(v114);
    v114 = elt(env, 4); /* setvalued */
    v114 = Lflagp(nil, v115, v114);
    env = stack[-9];
    if (!(v114 == nil)) goto v125;

v126:
    v115 = v116;
    v114 = elt(env, 5); /* "set" */
    fn = elt(env, 10); /* typerr */
    v114 = (*qfn2(fn))(qenv(fn), v115, v114);
    nil = C_nil;
    if (exception_pending()) goto v118;
    env = stack[-9];
    goto v7;

v125:
    v114 = qvalue(elt(env, 3)); /* t */
    stack[-4] = v114;
    v114 = v116;
    goto v7;

v119:
    v114 = qvalue(elt(env, 1)); /* nil */
    goto v123;
/* error exit handlers */
v118:
    popv(10);
    return nil;
}



/* Code for new_edge */

static Lisp_Object CC_new_edge(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v54, v131;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for new_edge");
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
    v54 = stack[-1];
    v131 = qcar(v54);
    v54 = stack[0];
    v54 = qcar(v54);
    fn = elt(env, 3); /* mk_edge_name */
    stack[-2] = (*qfn2(fn))(qenv(fn), v131, v54);
    nil = C_nil;
    if (exception_pending()) goto v132;
    env = stack[-3];
    v54 = stack[-1];
    v131 = qcar(v54);
    v54 = stack[0];
    v54 = qcar(v54);
    v131 = cons(v131, v54);
    nil = C_nil;
    if (exception_pending()) goto v132;
    env = stack[-3];
    v54 = qvalue(elt(env, 1)); /* nil */
    v54 = list3(stack[-2], v131, v54);
    nil = C_nil;
    if (exception_pending()) goto v132;
    env = stack[-3];
    stack[0] = v54;
    v131 = stack[0];
    v54 = qvalue(elt(env, 2)); /* new_edge_list */
    v54 = cons(v131, v54);
    nil = C_nil;
    if (exception_pending()) goto v132;
    env = stack[-3];
    qvalue(elt(env, 2)) = v54; /* new_edge_list */
    { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
/* error exit handlers */
v132:
    popv(4);
    return nil;
}



/* Code for fs!:onep */

static Lisp_Object CC_fsTonep(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v55, v53;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for fs:onep");
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
    v53 = stack[0];
    v55 = (Lisp_Object)49; /* 3 */
    v55 = *(Lisp_Object *)((char *)v53 + (CELL-TAG_VECTOR) + ((int32_t)v55/(16/CELL)));
    if (v55 == nil) goto v44;
    v55 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v55); }

v44:
    v53 = stack[0];
    v55 = (Lisp_Object)1; /* 0 */
    v55 = *(Lisp_Object *)((char *)v53 + (CELL-TAG_VECTOR) + ((int32_t)v55/(16/CELL)));
    v55 = Lonep(nil, v55);
    env = stack[-1];
    if (v55 == nil) goto v6;
    v55 = stack[0];
    fn = elt(env, 3); /* fs!:null!-angle */
    v55 = (*qfn1(fn))(qenv(fn), v55);
    nil = C_nil;
    if (exception_pending()) goto v131;
    env = stack[-1];
    if (v55 == nil) goto v136;
    v53 = stack[0];
    v55 = (Lisp_Object)17; /* 1 */
    v55 = *(Lisp_Object *)((char *)v53 + (CELL-TAG_VECTOR) + ((int32_t)v55/(16/CELL)));
    v53 = elt(env, 2); /* cos */
    v55 = (v55 == v53 ? lisp_true : nil);
    { popv(2); return onevalue(v55); }

v136:
    v55 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v55); }

v6:
    v55 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v55); }
/* error exit handlers */
v131:
    popv(2);
    return nil;
}



/* Code for st_ad_numsorttree1 */

static Lisp_Object CC_st_ad_numsorttree1(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v208, v209, v210;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for st_ad_numsorttree1");
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
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-6] = v0;
/* end of prologue */
    stack[-5] = nil;
    v208 = stack[-6];
    if (is_number(v208)) goto v6;
    v208 = (Lisp_Object)17; /* 1 */
    stack[-4] = v208;
    v208 = stack[-6];
    v209 = qcar(v208);
    v208 = elt(env, 1); /* !* */
    if (v209 == v208) goto v10;
    v208 = stack[-6];
    v208 = qcdr(v208);
    stack[-3] = v208;
    v208 = stack[-3];
    if (v208 == nil) goto v211;
    v208 = stack[-3];
    v208 = qcar(v208);
    v208 = CC_st_ad_numsorttree1(env, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-7] = v208;
    v209 = stack[-4];
    v208 = stack[-7];
    v208 = qcar(v208);
    v208 = times2(v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-4] = v208;
    v208 = stack[-7];
    v208 = qcdr(v208);
    v208 = ncons(v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-1] = v208;
    stack[-2] = v208;
    goto v70;

v70:
    v208 = stack[-3];
    v208 = qcdr(v208);
    stack[-3] = v208;
    v208 = stack[-3];
    if (v208 == nil) goto v213;
    stack[0] = stack[-1];
    v208 = stack[-3];
    v208 = qcar(v208);
    v208 = CC_st_ad_numsorttree1(env, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-7] = v208;
    v209 = stack[-4];
    v208 = stack[-7];
    v208 = qcar(v208);
    v208 = times2(v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-4] = v208;
    v208 = stack[-7];
    v208 = qcdr(v208);
    v208 = ncons(v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    v208 = Lrplacd(nil, stack[0], v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    v208 = stack[-1];
    v208 = qcdr(v208);
    stack[-1] = v208;
    goto v70;

v213:
    v208 = stack[-2];
    goto v72;

v72:
    stack[-1] = v208;
    v208 = stack[-6];
    v209 = qcar(v208);
    v208 = elt(env, 3); /* !+ */
    if (v209 == v208) goto v214;
    v208 = stack[-6];
    v209 = qcar(v208);
    v208 = elt(env, 5); /* !- */
    if (v209 == v208) goto v215;
    v208 = nil;
    { popv(9); return onevalue(v208); }

v215:
    v209 = stack[-1];
    v208 = elt(env, 4); /* numlist_ordp */
    fn = elt(env, 6); /* cdr_signsort */
    v208 = (*qfn2(fn))(qenv(fn), v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-1] = v208;
    v208 = stack[-1];
    v208 = qcar(v208);
    stack[-4] = v208;
    v208 = stack[-1];
    v208 = qcdr(v208);
    stack[-6] = v208;
    v208 = stack[-6];
    if (v208 == nil) goto v216;
    v208 = stack[-6];
    v208 = qcar(v208);
    stack[0] = v208;
    v208 = stack[0];
    v209 = qcdr(v208);
    v208 = stack[-5];
    v208 = cons(v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-5] = v208;
    v208 = stack[0];
    v208 = qcar(v208);
    v208 = ncons(v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-2] = v208;
    stack[-3] = v208;
    goto v217;

v217:
    v208 = stack[-6];
    v208 = qcdr(v208);
    stack[-6] = v208;
    v208 = stack[-6];
    if (v208 == nil) goto v218;
    stack[-1] = stack[-2];
    v208 = stack[-6];
    v208 = qcar(v208);
    stack[0] = v208;
    v208 = stack[0];
    v209 = qcdr(v208);
    v208 = stack[-5];
    v208 = cons(v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-5] = v208;
    v208 = stack[0];
    v208 = qcar(v208);
    v208 = ncons(v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    v208 = Lrplacd(nil, stack[-1], v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    v208 = stack[-2];
    v208 = qcdr(v208);
    stack[-2] = v208;
    goto v217;

v218:
    v208 = stack[-3];
    goto v219;

v219:
    stack[-1] = v208;
    v208 = stack[-5];
    v208 = Lreverse(nil, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-3] = v208;
    goto v220;

v220:
    v208 = stack[-3];
    if (v208 == nil) goto v221;
    v208 = stack[-3];
    v208 = qcar(v208);
    stack[-2] = v208;
    v208 = stack[-2];
    fn = elt(env, 7); /* lastpair */
    v208 = (*qfn1(fn))(qenv(fn), v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[0] = v208;
    v208 = stack[-3];
    v208 = qcdr(v208);
    stack[-3] = v208;
    v208 = stack[0];
    if (!consp(v208)) goto v220;
    else goto v222;

v222:
    v208 = stack[-3];
    if (v208 == nil) goto v223;
    v209 = stack[0];
    v208 = stack[-3];
    v208 = qcar(v208);
    v208 = Lrplacd(nil, v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    v208 = stack[0];
    fn = elt(env, 7); /* lastpair */
    v208 = (*qfn1(fn))(qenv(fn), v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[0] = v208;
    v208 = stack[-3];
    v208 = qcdr(v208);
    stack[-3] = v208;
    goto v222;

v223:
    v208 = stack[-2];
    goto v224;

v224:
    fn = elt(env, 8); /* ad_numsort */
    v208 = (*qfn1(fn))(qenv(fn), v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-5] = v208;
    stack[0] = stack[-4];
    v209 = elt(env, 5); /* !- */
    v208 = stack[-1];
    v209 = cons(v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    v208 = stack[-5];
    {
        Lisp_Object v225 = stack[0];
        popv(9);
        return list2star(v225, v209, v208);
    }

v221:
    v208 = qvalue(elt(env, 2)); /* nil */
    goto v224;

v216:
    v208 = qvalue(elt(env, 2)); /* nil */
    goto v219;

v214:
    v209 = stack[-1];
    v208 = elt(env, 4); /* numlist_ordp */
    fn = elt(env, 9); /* cdr_sort */
    v208 = (*qfn2(fn))(qenv(fn), v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-1] = v208;
    v208 = stack[-1];
    stack[-6] = v208;
    v208 = stack[-6];
    if (v208 == nil) goto v226;
    v208 = stack[-6];
    v208 = qcar(v208);
    stack[0] = v208;
    v208 = stack[0];
    v209 = qcdr(v208);
    v208 = stack[-5];
    v208 = cons(v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-5] = v208;
    v208 = stack[0];
    v208 = qcar(v208);
    v208 = ncons(v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-2] = v208;
    stack[-3] = v208;
    goto v227;

v227:
    v208 = stack[-6];
    v208 = qcdr(v208);
    stack[-6] = v208;
    v208 = stack[-6];
    if (v208 == nil) goto v228;
    stack[-1] = stack[-2];
    v208 = stack[-6];
    v208 = qcar(v208);
    stack[0] = v208;
    v208 = stack[0];
    v209 = qcdr(v208);
    v208 = stack[-5];
    v208 = cons(v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-5] = v208;
    v208 = stack[0];
    v208 = qcar(v208);
    v208 = ncons(v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    v208 = Lrplacd(nil, stack[-1], v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    v208 = stack[-2];
    v208 = qcdr(v208);
    stack[-2] = v208;
    goto v227;

v228:
    v208 = stack[-3];
    goto v229;

v229:
    stack[-1] = v208;
    v208 = stack[-5];
    v208 = Lreverse(nil, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-3] = v208;
    goto v230;

v230:
    v208 = stack[-3];
    if (v208 == nil) goto v231;
    v208 = stack[-3];
    v208 = qcar(v208);
    stack[-2] = v208;
    v208 = stack[-2];
    fn = elt(env, 7); /* lastpair */
    v208 = (*qfn1(fn))(qenv(fn), v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[0] = v208;
    v208 = stack[-3];
    v208 = qcdr(v208);
    stack[-3] = v208;
    v208 = stack[0];
    if (!consp(v208)) goto v230;
    else goto v232;

v232:
    v208 = stack[-3];
    if (v208 == nil) goto v233;
    v209 = stack[0];
    v208 = stack[-3];
    v208 = qcar(v208);
    v208 = Lrplacd(nil, v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    v208 = stack[0];
    fn = elt(env, 7); /* lastpair */
    v208 = (*qfn1(fn))(qenv(fn), v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[0] = v208;
    v208 = stack[-3];
    v208 = qcdr(v208);
    stack[-3] = v208;
    goto v232;

v233:
    v208 = stack[-2];
    goto v234;

v234:
    fn = elt(env, 8); /* ad_numsort */
    v208 = (*qfn1(fn))(qenv(fn), v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-5] = v208;
    stack[0] = stack[-4];
    v209 = elt(env, 3); /* !+ */
    v208 = stack[-1];
    v209 = cons(v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    v208 = stack[-5];
    {
        Lisp_Object v235 = stack[0];
        popv(9);
        return list2star(v235, v209, v208);
    }

v231:
    v208 = qvalue(elt(env, 2)); /* nil */
    goto v234;

v226:
    v208 = qvalue(elt(env, 2)); /* nil */
    goto v229;

v211:
    v208 = qvalue(elt(env, 2)); /* nil */
    goto v72;

v10:
    stack[-3] = elt(env, 1); /* !* */
    v208 = stack[-6];
    v208 = qcdr(v208);
    stack[-6] = v208;
    v208 = stack[-6];
    if (v208 == nil) goto v236;
    v208 = stack[-6];
    v208 = qcar(v208);
    v208 = CC_st_ad_numsorttree1(env, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-7] = v208;
    v209 = stack[-4];
    v208 = stack[-7];
    v208 = qcar(v208);
    v208 = times2(v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-4] = v208;
    v208 = stack[-7];
    v208 = qcdr(v208);
    v209 = qcdr(v208);
    v208 = stack[-5];
    v208 = cons(v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-5] = v208;
    v208 = stack[-7];
    v208 = qcdr(v208);
    v208 = qcar(v208);
    v208 = ncons(v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-1] = v208;
    stack[-2] = v208;
    goto v53;

v53:
    v208 = stack[-6];
    v208 = qcdr(v208);
    stack[-6] = v208;
    v208 = stack[-6];
    if (v208 == nil) goto v237;
    stack[0] = stack[-1];
    v208 = stack[-6];
    v208 = qcar(v208);
    v208 = CC_st_ad_numsorttree1(env, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-7] = v208;
    v209 = stack[-4];
    v208 = stack[-7];
    v208 = qcar(v208);
    v208 = times2(v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-4] = v208;
    v208 = stack[-7];
    v208 = qcdr(v208);
    v209 = qcdr(v208);
    v208 = stack[-5];
    v208 = cons(v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-5] = v208;
    v208 = stack[-7];
    v208 = qcdr(v208);
    v208 = qcar(v208);
    v208 = ncons(v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    v208 = Lrplacd(nil, stack[0], v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    v208 = stack[-1];
    v208 = qcdr(v208);
    stack[-1] = v208;
    goto v53;

v237:
    v208 = stack[-2];
    goto v75;

v75:
    v208 = cons(stack[-3], v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[-6] = v208;
    v208 = stack[-5];
    stack[-2] = v208;
    goto v238;

v238:
    v208 = stack[-2];
    if (v208 == nil) goto v41;
    v208 = stack[-2];
    v208 = qcar(v208);
    stack[-1] = v208;
    v208 = stack[-1];
    fn = elt(env, 7); /* lastpair */
    v208 = (*qfn1(fn))(qenv(fn), v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[0] = v208;
    v208 = stack[-2];
    v208 = qcdr(v208);
    stack[-2] = v208;
    v208 = stack[0];
    if (!consp(v208)) goto v238;
    else goto v239;

v239:
    v208 = stack[-2];
    if (v208 == nil) goto v240;
    v209 = stack[0];
    v208 = stack[-2];
    v208 = qcar(v208);
    v208 = Lrplacd(nil, v209, v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    v208 = stack[0];
    fn = elt(env, 7); /* lastpair */
    v208 = (*qfn1(fn))(qenv(fn), v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    env = stack[-8];
    stack[0] = v208;
    v208 = stack[-2];
    v208 = qcdr(v208);
    stack[-2] = v208;
    goto v239;

v240:
    v208 = stack[-1];
    goto v122;

v122:
    fn = elt(env, 8); /* ad_numsort */
    v208 = (*qfn1(fn))(qenv(fn), v208);
    nil = C_nil;
    if (exception_pending()) goto v212;
    stack[-5] = v208;
    v210 = stack[-4];
    v209 = stack[-6];
    v208 = stack[-5];
    popv(9);
    return list2star(v210, v209, v208);

v41:
    v208 = qvalue(elt(env, 2)); /* nil */
    goto v122;

v236:
    v208 = qvalue(elt(env, 2)); /* nil */
    goto v75;

v6:
    v210 = (Lisp_Object)17; /* 1 */
    v209 = stack[-6];
    v208 = stack[-6];
    popv(9);
    return list3(v210, v209, v208);
/* error exit handlers */
v212:
    popv(9);
    return nil;
}



/* Code for try!-all!-constants */

static Lisp_Object MS_CDECL CC_tryKallKconstants(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v80, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v94, v95, v247;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "try-all-constants");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for try-all-constants");
#endif
    if (stack >= stacklimit)
    {
        push3(v80,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v80);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v80;
    stack[-3] = v1;
    v95 = v0;
/* end of prologue */
    v94 = qvalue(elt(env, 1)); /* nil */
    stack[-1] = v94;
    v94 = v95;
    stack[-4] = v94;
    v94 = (Lisp_Object)1; /* 0 */
    stack[0] = v94;
    goto v5;

v5:
    v247 = stack[-3];
    v95 = (Lisp_Object)1; /* 0 */
    v94 = stack[0];
    *(Lisp_Object *)((char *)v247 + (CELL-TAG_VECTOR) + ((int32_t)v95/(16/CELL))) = v94;
    v247 = stack[-4];
    v95 = stack[-3];
    v94 = stack[-2];
    fn = elt(env, 4); /* split!-further */
    v94 = (*qfnn(fn))(qenv(fn), 3, v247, v95, v94);
    nil = C_nil;
    if (exception_pending()) goto v12;
    env = stack[-5];
    v95 = v94;
    v94 = v95;
    v94 = qcdr(v94);
    stack[-4] = v94;
    v94 = v95;
    v94 = qcar(v94);
    v95 = v94;
    v94 = stack[-1];
    v94 = Lnconc(nil, v95, v94);
    nil = C_nil;
    if (exception_pending()) goto v12;
    env = stack[-5];
    stack[-1] = v94;
    v94 = stack[-4];
    if (v94 == nil) { Lisp_Object res = stack[-1]; popv(6); return onevalue(res); }
    v95 = qvalue(elt(env, 2)); /* number!-needed */
    v94 = (Lisp_Object)1; /* 0 */
    if (v95 == v94) goto v108;
    v94 = stack[0];
    v94 = (Lisp_Object)((int32_t)(v94) + 0x10);
    stack[0] = v94;
    v95 = stack[0];
    v94 = qvalue(elt(env, 3)); /* current!-modulus */
    if (((int32_t)(v95)) < ((int32_t)(v94))) goto v5;
    v95 = stack[-4];
    v94 = stack[-1];
        popv(6);
        return Lnconc(nil, v95, v94);

v108:
    v95 = stack[-4];
    v94 = stack[-1];
        popv(6);
        return Lnconc(nil, v95, v94);
/* error exit handlers */
v12:
    popv(6);
    return nil;
}



/* Code for rdzero!* */

static Lisp_Object MS_CDECL CC_rdzeroH(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v104;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "rdzero*");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rdzero*");
#endif
    CSL_IGNORE(env);
/* end of prologue */
    v104 = qvalue(elt(env, 1)); /* !*!*roundbf */
    if (v104 == nil) goto v243;
    v104 = qvalue(elt(env, 2)); /* bfz!* */
    return onevalue(v104);

v243:
    v104 = elt(env, 3); /* 0.0 */
    return onevalue(v104);
}



/* Code for lto_alunion */

static Lisp_Object CC_lto_alunion(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v104, v103;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lto_alunion");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v104 = v0;
/* end of prologue */
    v103 = v104;
    v104 = elt(env, 1); /* union */
    {
        fn = elt(env, 2); /* lto_almerge */
        return (*qfn2(fn))(qenv(fn), v103, v104);
    }
}



/* Code for mkbin */

static Lisp_Object CC_mkbin(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v250, v251, v75;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mkbin");
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
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v251 = v1;
    v75 = v0;
/* end of prologue */
    v250 = v251;
    v250 = qcdr(v250);
    v250 = qcdr(v250);
    if (v250 == nil) goto v103;
    stack[-1] = v75;
    v250 = v251;
    stack[0] = qcar(v250);
    v250 = v75;
    v251 = qcdr(v251);
    v250 = CC_mkbin(env, v250, v251);
    nil = C_nil;
    if (exception_pending()) goto v135;
    {
        Lisp_Object v134 = stack[-1];
        Lisp_Object v133 = stack[0];
        popv(2);
        return list3(v134, v133, v250);
    }

v103:
    v250 = v75;
    popv(2);
    return cons(v250, v251);
/* error exit handlers */
v135:
    popv(2);
    return nil;
}



/* Code for termlst1 */

static Lisp_Object MS_CDECL CC_termlst1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v80, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v262, v32, v33;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "termlst1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for termlst1");
#endif
    if (stack >= stacklimit)
    {
        push3(v80,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v80);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-3] = v80;
    stack[-4] = v1;
    stack[-5] = v0;
/* end of prologue */
    v262 = stack[-5];
    if (v262 == nil) goto v104;
    v262 = stack[-5];
    if (!consp(v262)) goto v3;
    v262 = stack[-5];
    v262 = qcar(v262);
    if (!consp(v262)) goto v3;
    v262 = stack[-5];
    v262 = qcar(v262);
    v262 = qcar(v262);
    v262 = qcar(v262);
    v33 = v262;
    v262 = v33;
    if (!consp(v262)) goto v51;
    v262 = v33;
    v32 = qcar(v262);
    v262 = elt(env, 2); /* expt */
    if (!(v32 == v262)) goto v51;
    v262 = v33;
    v262 = qcdr(v262);
    v32 = qcar(v262);
    v262 = elt(env, 3); /* e */
    if (!(v32 == v262)) goto v51;
    v262 = stack[-5];
    v262 = qcar(v262);
    stack[-6] = qcdr(v262);
    stack[-2] = stack[-4];
    stack[-1] = stack[-3];
    v262 = v33;
    v262 = qcdr(v262);
    v262 = qcdr(v262);
    v262 = qcar(v262);
    fn = elt(env, 4); /* simp!* */
    stack[0] = (*qfn1(fn))(qenv(fn), v262);
    nil = C_nil;
    if (exception_pending()) goto v85;
    env = stack[-7];
    v262 = stack[-5];
    v262 = qcar(v262);
    v262 = qcar(v262);
    v32 = qcdr(v262);
    v262 = (Lisp_Object)17; /* 1 */
    v262 = cons(v32, v262);
    nil = C_nil;
    if (exception_pending()) goto v85;
    env = stack[-7];
    fn = elt(env, 5); /* multsq */
    v262 = (*qfn2(fn))(qenv(fn), stack[0], v262);
    nil = C_nil;
    if (exception_pending()) goto v85;
    env = stack[-7];
    fn = elt(env, 6); /* addsq */
    v262 = (*qfn2(fn))(qenv(fn), stack[-1], v262);
    nil = C_nil;
    if (exception_pending()) goto v85;
    env = stack[-7];
    v262 = CC_termlst1(env, 3, stack[-6], stack[-2], v262);
    nil = C_nil;
    if (exception_pending()) goto v85;
    env = stack[-7];
    goto v263;

v263:
    stack[0] = v262;
    v262 = stack[-5];
    v33 = qcdr(v262);
    v32 = stack[-4];
    v262 = stack[-3];
    v262 = CC_termlst1(env, 3, v33, v32, v262);
    nil = C_nil;
    if (exception_pending()) goto v85;
    {
        Lisp_Object v86 = stack[0];
        popv(8);
        return Lnconc(nil, v86, v262);
    }

v51:
    v262 = stack[-5];
    v262 = qcar(v262);
    stack[0] = qcdr(v262);
    v262 = stack[-5];
    v262 = qcar(v262);
    v32 = qcar(v262);
    v262 = (Lisp_Object)17; /* 1 */
    v262 = cons(v32, v262);
    nil = C_nil;
    if (exception_pending()) goto v85;
    env = stack[-7];
    v32 = ncons(v262);
    nil = C_nil;
    if (exception_pending()) goto v85;
    env = stack[-7];
    v262 = stack[-4];
    fn = elt(env, 7); /* multf */
    v32 = (*qfn2(fn))(qenv(fn), v32, v262);
    nil = C_nil;
    if (exception_pending()) goto v85;
    env = stack[-7];
    v262 = stack[-3];
    v262 = CC_termlst1(env, 3, stack[0], v32, v262);
    nil = C_nil;
    if (exception_pending()) goto v85;
    env = stack[-7];
    goto v263;

v3:
    v32 = stack[-5];
    v262 = stack[-4];
    fn = elt(env, 7); /* multf */
    v32 = (*qfn2(fn))(qenv(fn), v32, v262);
    nil = C_nil;
    if (exception_pending()) goto v85;
    env = stack[-7];
    v262 = stack[-3];
    v262 = cons(v32, v262);
    nil = C_nil;
    if (exception_pending()) goto v85;
    popv(8);
    return ncons(v262);

v104:
    v262 = qvalue(elt(env, 1)); /* nil */
    { popv(8); return onevalue(v262); }
/* error exit handlers */
v85:
    popv(8);
    return nil;
}



/* Code for ev_dif */

static Lisp_Object CC_ev_dif(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v9, v10, v250;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ev_dif");
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
    v250 = nil;
    goto v248;

v248:
    v9 = stack[-1];
    if (v9 == nil) goto v243;
    v9 = stack[-1];
    v10 = qcar(v9);
    v9 = stack[0];
    v9 = qcar(v9);
    v9 = (Lisp_Object)(int32_t)((int32_t)v10 - (int32_t)v9 + TAG_FIXNUM);
    v10 = v250;
    v9 = cons(v9, v10);
    nil = C_nil;
    if (exception_pending()) goto v111;
    env = stack[-2];
    v250 = v9;
    v9 = stack[-1];
    v9 = qcdr(v9);
    stack[-1] = v9;
    v9 = stack[0];
    v9 = qcdr(v9);
    stack[0] = v9;
    goto v248;

v243:
    v9 = v250;
        popv(3);
        return Lnreverse(nil, v9);
/* error exit handlers */
v111:
    popv(3);
    return nil;
}



/* Code for formrlis */

static Lisp_Object MS_CDECL CC_formrlis(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v80, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v238, v239, v263;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "formrlis");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for formrlis");
#endif
    if (stack >= stacklimit)
    {
        push3(v80,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v80);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    v238 = v80;
    stack[-1] = v1;
    stack[-2] = v0;
/* end of prologue */
    v238 = stack[-2];
    v239 = qcar(v238);
    v238 = elt(env, 1); /* flagop */
    v238 = Lflagp(nil, v239, v238);
    env = stack[-4];
    if (v238 == nil) goto v44;
    v238 = stack[-2];
    v238 = qcdr(v238);
    fn = elt(env, 8); /* idlistp */
    v238 = (*qfn1(fn))(qenv(fn), v238);
    nil = C_nil;
    if (exception_pending()) goto v253;
    env = stack[-4];
    if (v238 == nil) goto v267;
    stack[-3] = elt(env, 7); /* flag */
    stack[0] = elt(env, 2); /* list */
    v238 = stack[-2];
    v263 = qcdr(v238);
    v239 = stack[-1];
    v238 = elt(env, 4); /* algebraic */
    fn = elt(env, 9); /* formlis */
    v238 = (*qfnn(fn))(qenv(fn), 3, v263, v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v253;
    env = stack[-4];
    stack[0] = cons(stack[0], v238);
    nil = C_nil;
    if (exception_pending()) goto v253;
    env = stack[-4];
    v238 = stack[-2];
    v238 = qcar(v238);
    v238 = Lmkquote(nil, v238);
    nil = C_nil;
    if (exception_pending()) goto v253;
    {
        Lisp_Object v252 = stack[-3];
        Lisp_Object v268 = stack[0];
        popv(5);
        return list3(v252, v268, v238);
    }

v267:
    v239 = elt(env, 5); /* !*comma!* */
    v238 = stack[-2];
    v238 = qcdr(v238);
    v239 = cons(v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v253;
    env = stack[-4];
    v238 = elt(env, 6); /* "identifier list" */
    {
        popv(5);
        fn = elt(env, 10); /* typerr */
        return (*qfn2(fn))(qenv(fn), v239, v238);
    }

v44:
    v238 = stack[-2];
    stack[-3] = qcar(v238);
    stack[0] = elt(env, 2); /* list */
    v238 = stack[-2];
    v239 = qcar(v238);
    v238 = elt(env, 3); /* share */
    if (v239 == v238) goto v7;
    v238 = stack[-2];
    v263 = qcdr(v238);
    v239 = stack[-1];
    v238 = elt(env, 4); /* algebraic */
    fn = elt(env, 9); /* formlis */
    v238 = (*qfnn(fn))(qenv(fn), 3, v263, v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v253;
    env = stack[-4];
    goto v3;

v3:
    v238 = cons(stack[0], v238);
    nil = C_nil;
    if (exception_pending()) goto v253;
    {
        Lisp_Object v269 = stack[-3];
        popv(5);
        return list2(v269, v238);
    }

v7:
    stack[-1] = nil;
    v238 = stack[-2];
    v238 = qcdr(v238);
    stack[-2] = v238;
    goto v125;

v125:
    v238 = stack[-2];
    if (v238 == nil) goto v270;
    v238 = stack[-2];
    v238 = qcar(v238);
    v239 = Lmkquote(nil, v238);
    nil = C_nil;
    if (exception_pending()) goto v253;
    env = stack[-4];
    v238 = stack[-1];
    v238 = cons(v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v253;
    env = stack[-4];
    stack[-1] = v238;
    v238 = stack[-2];
    v238 = qcdr(v238);
    stack[-2] = v238;
    goto v125;

v270:
    v238 = stack[-1];
    fn = elt(env, 11); /* reversip!* */
    v238 = (*qfn1(fn))(qenv(fn), v238);
    nil = C_nil;
    if (exception_pending()) goto v253;
    env = stack[-4];
    goto v3;
/* error exit handlers */
v253:
    popv(5);
    return nil;
}



/* Code for ps!:int!-erule */

static Lisp_Object CC_psTintKerule(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v276, v61;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ps:int-erule");
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
    v276 = stack[-1];
    v276 = qcdr(v276);
    v276 = qcdr(v276);
    stack[-2] = qcar(v276);
    v276 = stack[-1];
    v276 = qcdr(v276);
    v276 = qcar(v276);
    fn = elt(env, 2); /* ps!:depvar */
    v276 = (*qfn1(fn))(qenv(fn), v276);
    nil = C_nil;
    if (exception_pending()) goto v204;
    env = stack[-3];
    if (equal(stack[-2], v276)) goto v128;
    v276 = stack[-1];
    v276 = qcdr(v276);
    v61 = qcar(v276);
    v276 = stack[0];
    fn = elt(env, 3); /* ps!:evaluate */
    v276 = (*qfn2(fn))(qenv(fn), v61, v276);
    nil = C_nil;
    if (exception_pending()) goto v204;
    env = stack[-3];
    fn = elt(env, 4); /* prepsqxx */
    v61 = (*qfn1(fn))(qenv(fn), v276);
    nil = C_nil;
    if (exception_pending()) goto v204;
    env = stack[-3];
    v276 = stack[-1];
    v276 = qcdr(v276);
    v276 = qcdr(v276);
    v276 = qcar(v276);
    v276 = list2(v61, v276);
    nil = C_nil;
    if (exception_pending()) goto v204;
    env = stack[-3];
    {
        popv(4);
        fn = elt(env, 5); /* simpint */
        return (*qfn1(fn))(qenv(fn), v276);
    }

v128:
    v276 = stack[-1];
    v276 = qcdr(v276);
    v276 = qcar(v276);
    fn = elt(env, 6); /* ps!:expansion!-point */
    v61 = (*qfn1(fn))(qenv(fn), v276);
    nil = C_nil;
    if (exception_pending()) goto v204;
    env = stack[-3];
    v276 = elt(env, 1); /* ps!:inf */
    if (v61 == v276) goto v52;
    v276 = stack[-1];
    v276 = qcdr(v276);
    stack[-1] = qcar(v276);
    v276 = stack[0];
    v276 = sub1(v276);
    nil = C_nil;
    if (exception_pending()) goto v204;
    env = stack[-3];
    fn = elt(env, 3); /* ps!:evaluate */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[-1], v276);
    nil = C_nil;
    if (exception_pending()) goto v204;
    env = stack[-3];
    v61 = stack[0];
    v276 = (Lisp_Object)17; /* 1 */
    v276 = cons(v61, v276);
    nil = C_nil;
    if (exception_pending()) goto v204;
    env = stack[-3];
    {
        Lisp_Object v258 = stack[-1];
        popv(4);
        fn = elt(env, 7); /* quotsq */
        return (*qfn2(fn))(qenv(fn), v258, v276);
    }

v52:
    v276 = stack[-1];
    v276 = qcdr(v276);
    stack[-1] = qcar(v276);
    v276 = stack[0];
    v276 = add1(v276);
    nil = C_nil;
    if (exception_pending()) goto v204;
    env = stack[-3];
    fn = elt(env, 3); /* ps!:evaluate */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[-1], v276);
    nil = C_nil;
    if (exception_pending()) goto v204;
    env = stack[-3];
    v276 = stack[0];
    v61 = negate(v276);
    nil = C_nil;
    if (exception_pending()) goto v204;
    env = stack[-3];
    v276 = (Lisp_Object)17; /* 1 */
    v276 = cons(v61, v276);
    nil = C_nil;
    if (exception_pending()) goto v204;
    env = stack[-3];
    {
        Lisp_Object v277 = stack[-1];
        popv(4);
        fn = elt(env, 7); /* quotsq */
        return (*qfn2(fn))(qenv(fn), v277, v276);
    }
/* error exit handlers */
v204:
    popv(4);
    return nil;
}



/* Code for spmake_identity */

static Lisp_Object CC_spmake_identity(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v106, v281, v282, v266;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for spmake_identity");
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
    v106 = qvalue(elt(env, 1)); /* !*fast_la */
    if (!(v106 == nil)) goto v50;
    v106 = stack[-1];
    v106 = integerp(v106);
    if (!(v106 == nil)) goto v50;
    v106 = elt(env, 2); /* "Error in spmake_identity: non integer input." 
*/
    fn = elt(env, 6); /* rederr */
    v106 = (*qfn1(fn))(qenv(fn), v106);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-3];
    goto v50;

v50:
    stack[-2] = elt(env, 3); /* sparsemat */
    v106 = stack[-1];
    stack[0] = Lmkvect(nil, v106);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-3];
    v282 = elt(env, 4); /* spm */
    v281 = stack[-1];
    v106 = stack[-1];
    v106 = list3(v282, v281, v106);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-3];
    v106 = list3(stack[-2], stack[0], v106);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-3];
    stack[0] = v106;
    v106 = stack[-1];
    stack[-1] = v106;
    goto v251;

v251:
    v106 = stack[-1];
    v106 = sub1(v106);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-3];
    v106 = Lminusp(nil, v106);
    env = stack[-3];
    if (!(v106 == nil)) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v282 = stack[0];
    v281 = stack[-1];
    v106 = stack[-1];
    v266 = list3(v282, v281, v106);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-3];
    v282 = (Lisp_Object)17; /* 1 */
    v281 = stack[0];
    v106 = qvalue(elt(env, 5)); /* nil */
    fn = elt(env, 7); /* letmtr3 */
    v106 = (*qfnn(fn))(qenv(fn), 4, v266, v282, v281, v106);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-3];
    v106 = stack[-1];
    v106 = sub1(v106);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-3];
    stack[-1] = v106;
    goto v251;
/* error exit handlers */
v283:
    popv(4);
    return nil;
}



/* Code for subscriptedvarp2 */

static Lisp_Object CC_subscriptedvarp2(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v44, v284;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for subscriptedvarp2");
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
    v44 = v0;
/* end of prologue */
    v284 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 2); /* symtabget */
    v44 = (*qfn2(fn))(qenv(fn), v284, v44);
    nil = C_nil;
    if (exception_pending()) goto v78;
    env = stack[0];
    v284 = Llength(nil, v44);
    nil = C_nil;
    if (exception_pending()) goto v78;
    v44 = (Lisp_Object)33; /* 2 */
        popv(1);
        return Lgreaterp(nil, v284, v44);
/* error exit handlers */
v78:
    popv(1);
    return nil;
}



/* Code for formgen */

static Lisp_Object MS_CDECL CC_formgen(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v80, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v59, v295, v193;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "formgen");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for formgen");
#endif
    if (stack >= stacklimit)
    {
        push3(v80,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v80);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-3] = v80;
    stack[-4] = v1;
    stack[-5] = v0;
/* end of prologue */
    v59 = stack[-5];
    v59 = qcdr(v59);
    v59 = qcar(v59);
    stack[-5] = v59;
    v59 = stack[-5];
    if (!consp(v59)) goto v284;
    v59 = stack[-5];
    v295 = qcar(v59);
    v59 = elt(env, 1); /* !? */
    if (v295 == v59) goto v38;
    stack[-1] = elt(env, 5); /* !! */
    stack[0] = elt(env, 1); /* !? */
    v59 = stack[-5];
    v59 = qcar(v59);
    v59 = Lexplode(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = list2star(stack[-1], stack[0], v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = Lcompress(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v295 = Lintern(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = stack[-5];
    v59 = qcdr(v59);
    v59 = cons(v295, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    stack[-5] = v59;
    v59 = stack[-5];
    v59 = qcar(v59);
    stack[0] = Lmkquote(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = elt(env, 6); /* gen */
    v295 = Lmkquote(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = qvalue(elt(env, 4)); /* t */
    v59 = list3(stack[0], v295, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    goto v297;

v297:
    stack[-1] = elt(env, 7); /* progn */
    v295 = elt(env, 8); /* put */
    stack[0] = cons(v295, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v193 = stack[-5];
    v295 = stack[-4];
    v59 = stack[-3];
    fn = elt(env, 9); /* form1 */
    v59 = (*qfnn(fn))(qenv(fn), 3, v193, v295, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    {
        Lisp_Object v298 = stack[-1];
        Lisp_Object v63 = stack[0];
        popv(8);
        return list3(v298, v63, v59);
    }

v38:
    v59 = stack[-5];
    v295 = qcar(v59);
    v59 = elt(env, 1); /* !? */
    if (!(v295 == v59)) goto v35;
    v59 = stack[-5];
    v59 = qcdr(v59);
    v59 = qcar(v59);
    if (!(!consp(v59))) goto v35;
    stack[-6] = elt(env, 5); /* !! */
    stack[-2] = elt(env, 1); /* !? */
    stack[-1] = elt(env, 5); /* !! */
    stack[0] = elt(env, 1); /* !? */
    v59 = stack[-5];
    v59 = qcdr(v59);
    v59 = qcar(v59);
    v59 = Lexplode(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = list2star(stack[-1], stack[0], v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = list2star(stack[-6], stack[-2], v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = Lcompress(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = Lintern(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    stack[-5] = v59;
    v59 = stack[-5];
    stack[0] = Lmkquote(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = elt(env, 3); /* mgen */
    v295 = Lmkquote(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = qvalue(elt(env, 4)); /* t */
    v59 = list3(stack[0], v295, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    goto v297;

v35:
    v59 = stack[-5];
    v59 = qcdr(v59);
    v59 = qcar(v59);
    stack[-5] = v59;
    stack[-6] = elt(env, 5); /* !! */
    stack[-2] = elt(env, 1); /* !? */
    stack[-1] = elt(env, 5); /* !! */
    stack[0] = elt(env, 1); /* !? */
    v59 = stack[-5];
    v59 = qcar(v59);
    v59 = Lexplode(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = list2star(stack[-1], stack[0], v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = list2star(stack[-6], stack[-2], v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = Lcompress(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v295 = Lintern(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = stack[-5];
    v59 = qcdr(v59);
    v59 = cons(v295, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    stack[-5] = v59;
    v59 = stack[-5];
    v59 = qcar(v59);
    stack[0] = Lmkquote(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = elt(env, 6); /* gen */
    v295 = Lmkquote(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = qvalue(elt(env, 4)); /* t */
    v59 = list3(stack[0], v295, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    goto v297;

v284:
    v295 = stack[-5];
    v59 = elt(env, 1); /* !? */
    if (v295 == v59) goto v50;
    stack[-1] = elt(env, 5); /* !! */
    stack[0] = elt(env, 1); /* !? */
    v59 = stack[-5];
    v59 = Lexplode(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = list2star(stack[-1], stack[0], v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = Lcompress(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = Lintern(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    stack[-5] = v59;
    v59 = stack[-5];
    stack[0] = Lmkquote(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = elt(env, 6); /* gen */
    v295 = Lmkquote(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = qvalue(elt(env, 4)); /* t */
    v59 = list3(stack[0], v295, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    goto v297;

v50:
    v59 = elt(env, 2); /* !?!? */
    v59 = Lintern(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    stack[-5] = v59;
    v59 = stack[-5];
    stack[0] = Lmkquote(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = elt(env, 3); /* mgen */
    v295 = Lmkquote(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    v59 = qvalue(elt(env, 4)); /* t */
    v59 = list3(stack[0], v295, v59);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-7];
    goto v297;
/* error exit handlers */
v296:
    popv(8);
    return nil;
}



/* Code for dip!-nc!-m!*p!-distleft */

static Lisp_Object MS_CDECL CC_dipKncKmHpKdistleft(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v80, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v274, v275, v299, v300;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "dip-nc-m*p-distleft");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dip-nc-m*p-distleft");
#endif
    if (stack >= stacklimit)
    {
        push3(v80,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v80);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v80;
    stack[-2] = v1;
    stack[-3] = v0;
/* end of prologue */
    v274 = stack[-1];
    if (v274 == nil) goto v92;
    v274 = stack[-1];
    v274 = qcar(v274);
    stack[-4] = v274;
    v274 = stack[-1];
    v274 = qcdr(v274);
    v274 = qcar(v274);
    stack[0] = v274;
    v299 = stack[-3];
    v275 = stack[-2];
    v274 = stack[-1];
    v274 = qcdr(v274);
    v274 = qcdr(v274);
    v274 = CC_dipKncKmHpKdistleft(env, 3, v299, v275, v274);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-5];
    stack[-1] = v274;
    v300 = stack[-3];
    v299 = stack[-2];
    v275 = stack[0];
    v274 = stack[-4];
    fn = elt(env, 2); /* dip!-nc!-ev!-prod */
    v274 = (*qfnn(fn))(qenv(fn), 4, v300, v299, v275, v274);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-5];
    v275 = stack[-1];
    {
        popv(6);
        fn = elt(env, 3); /* dipsum */
        return (*qfn2(fn))(qenv(fn), v275, v274);
    }

v92:
    v274 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v274); }
/* error exit handlers */
v109:
    popv(6);
    return nil;
}



/* Code for mkset */

static Lisp_Object CC_mkset(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v92;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mkset");
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
    v92 = v0;
/* end of prologue */
    fn = elt(env, 1); /* getrlist */
    v92 = (*qfn1(fn))(qenv(fn), v92);
    nil = C_nil;
    if (exception_pending()) goto v243;
    env = stack[0];
    fn = elt(env, 2); /* delete!-dups */
    v92 = (*qfn1(fn))(qenv(fn), v92);
    nil = C_nil;
    if (exception_pending()) goto v243;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 3); /* make!-set */
        return (*qfn1(fn))(qenv(fn), v92);
    }
/* error exit handlers */
v243:
    popv(1);
    return nil;
}



/* Code for minprec */

static Lisp_Object MS_CDECL CC_minprec(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v104;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "minprec");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for minprec");
#endif
    CSL_IGNORE(env);
/* end of prologue */
    v104 = qvalue(elt(env, 1)); /* !*bftag */
    if (v104 == nil) goto v243;
    v104 = qvalue(elt(env, 2)); /* !:prec!: */
    return onevalue(v104);

v243:
    v104 = qvalue(elt(env, 3)); /* !!nfpd */
    return onevalue(v104);
}



/* Code for actual_world */

static Lisp_Object CC_actual_world(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v78, v112, v113;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for actual_world");
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
    v112 = v1;
    v113 = v0;
/* end of prologue */
    v78 = v113;
    stack[0] = qcar(v78);
    v78 = v112;
    v112 = v113;
    v112 = qcdr(v112);
    fn = elt(env, 1); /* exclude_edges */
    v78 = (*qfn2(fn))(qenv(fn), v78, v112);
    nil = C_nil;
    if (exception_pending()) goto v128;
    env = stack[-1];
    {
        Lisp_Object v119 = stack[0];
        popv(2);
        fn = elt(env, 2); /* union_edges */
        return (*qfn2(fn))(qenv(fn), v119, v78);
    }
/* error exit handlers */
v128:
    popv(2);
    return nil;
}



/* Code for dpmat_make */

static Lisp_Object MS_CDECL CC_dpmat_make(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v80, Lisp_Object v127,
                         Lisp_Object v82, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v249, v129, v107, v105, v7;
    CSL_IGNORE(nil);
    argcheck(nargs, 5, "dpmat_make");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dpmat_make");
#endif
    if (stack >= stacklimit)
    {
        push5(v82,v127,v80,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop5(v0,v1,v80,v127,v82);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    v249 = v82;
    v129 = v127;
    v107 = v80;
    v105 = v1;
    v7 = v0;
/* end of prologue */
    stack[-2] = elt(env, 1); /* dpmat */
    stack[-1] = v7;
    stack[0] = v105;
    v249 = list3(v107, v129, v249);
    nil = C_nil;
    if (exception_pending()) goto v9;
    {
        Lisp_Object v10 = stack[-2];
        Lisp_Object v250 = stack[-1];
        Lisp_Object v251 = stack[0];
        popv(3);
        return list3star(v10, v250, v251, v249);
    }
/* error exit handlers */
v9:
    popv(3);
    return nil;
}



/* Code for formsetq */

static Lisp_Object MS_CDECL CC_formsetq(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v80, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v283, v272, v301, v49, v47;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "formsetq");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for formsetq");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v301 = v80;
    v49 = v1;
    v47 = v0;
/* end of prologue */
    v272 = v301;
    v283 = elt(env, 1); /* symbolic */
    if (v272 == v283) goto v3;
    v283 = v47;
    v272 = v49;
    {
        fn = elt(env, 4); /* formsetq0 */
        return (*qfnn(fn))(qenv(fn), 3, v283, v272, v301);
    }

v3:
    v283 = v47;
    v283 = qcdr(v283);
    v272 = qcar(v283);
    v283 = elt(env, 2); /* list */
    if (!consp(v272)) goto v131;
    v272 = qcar(v272);
    if (!(v272 == v283)) goto v131;
    v283 = v47;
    v272 = v49;
    {
        fn = elt(env, 5); /* formsetq1 */
        return (*qfnn(fn))(qenv(fn), 3, v283, v272, v301);
    }

v131:
    v283 = v47;
    v283 = qcdr(v283);
    v272 = qcar(v283);
    v283 = elt(env, 3); /* cons */
    if (!consp(v272)) goto v273;
    v272 = qcar(v272);
    if (!(v272 == v283)) goto v273;
    v283 = v47;
    v272 = v49;
    {
        fn = elt(env, 6); /* formsetq2 */
        return (*qfnn(fn))(qenv(fn), 3, v283, v272, v301);
    }

v273:
    v283 = v47;
    v272 = v49;
    {
        fn = elt(env, 4); /* formsetq0 */
        return (*qfnn(fn))(qenv(fn), 3, v283, v272, v301);
    }
}



/* Code for invbase */

static Lisp_Object CC_invbase(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v324, v325, v231;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for invbase");
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
    stack[0] = v0;
/* end of prologue */
    v324 = stack[0];
    v324 = qcar(v324);
    fn = elt(env, 10); /* reval */
    v324 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    stack[0] = v324;
    v325 = stack[0];
    v324 = elt(env, 1); /* list */
    if (!consp(v325)) goto v76;
    v325 = qcar(v325);
    if (!(v325 == v324)) goto v76;

v103:
    v324 = stack[0];
    v324 = qcdr(v324);
    stack[-3] = v324;
    v324 = stack[-3];
    if (v324 == nil) goto v7;
    v324 = stack[-3];
    v324 = qcar(v324);
    fn = elt(env, 10); /* reval */
    v324 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v231 = v324;
    v325 = elt(env, 4); /* equal */
    if (!consp(v231)) goto v135;
    v231 = qcar(v231);
    if (!(v231 == v325)) goto v135;
    v231 = elt(env, 5); /* difference */
    v325 = v324;
    v325 = qcdr(v325);
    v325 = qcar(v325);
    v324 = qcdr(v324);
    v324 = qcdr(v324);
    v324 = qcar(v324);
    v324 = list3(v231, v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    fn = elt(env, 10); /* reval */
    v324 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    goto v135;

v135:
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    stack[-1] = v324;
    stack[-2] = v324;
    goto v3;

v3:
    v324 = stack[-3];
    v324 = qcdr(v324);
    stack[-3] = v324;
    v324 = stack[-3];
    if (v324 == nil) goto v106;
    stack[0] = stack[-1];
    v324 = stack[-3];
    v324 = qcar(v324);
    fn = elt(env, 10); /* reval */
    v324 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v231 = v324;
    v325 = elt(env, 4); /* equal */
    if (!consp(v231)) goto v267;
    v231 = qcar(v231);
    if (!(v231 == v325)) goto v267;
    v231 = elt(env, 5); /* difference */
    v325 = v324;
    v325 = qcdr(v325);
    v325 = qcar(v325);
    v324 = qcdr(v324);
    v324 = qcdr(v324);
    v324 = qcar(v324);
    v324 = list3(v231, v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    fn = elt(env, 10); /* reval */
    v324 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    goto v267;

v267:
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = Lrplacd(nil, stack[0], v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = stack[-1];
    v324 = qcdr(v324);
    stack[-1] = v324;
    goto v3;

v106:
    v324 = stack[-2];
    goto v2;

v2:
    stack[0] = v324;
    v324 = qvalue(elt(env, 6)); /* invsysvars!* */
    if (!(v324 == nil)) goto v259;
    v324 = stack[0];
    fn = elt(env, 11); /* gvarlis */
    v324 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    goto v259;

v259:
    stack[-9] = v324;
    v325 = elt(env, 1); /* list */
    v324 = stack[0];
    stack[0] = cons(v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v325 = elt(env, 1); /* list */
    v324 = stack[-9];
    v324 = cons(v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    fn = elt(env, 12); /* readsys */
    v324 = (*qfn2(fn))(qenv(fn), stack[0], v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    fn = elt(env, 13); /* invbase!* */
    v324 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = qvalue(elt(env, 7)); /* gg */
    stack[-8] = v324;
    v324 = stack[-8];
    if (v324 == nil) goto v327;
    v324 = stack[-8];
    v324 = qcar(v324);
    stack[-4] = elt(env, 8); /* plus */
    v325 = qvalue(elt(env, 9)); /* gv */
    v324 = qcar(v324);
    v324 = *(Lisp_Object *)((char *)v325 + (CELL-TAG_VECTOR) + ((int32_t)v324/(16/CELL)));
    stack[-3] = v324;
    v324 = stack[-3];
    if (v324 == nil) goto v72;
    v324 = stack[-3];
    v324 = qcar(v324);
    v325 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = stack[-9];
    fn = elt(env, 14); /* !*di2q */
    v324 = (*qfn2(fn))(qenv(fn), v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    fn = elt(env, 15); /* prepsq */
    v324 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    stack[-1] = v324;
    stack[-2] = v324;
    goto v328;

v328:
    v324 = stack[-3];
    v324 = qcdr(v324);
    stack[-3] = v324;
    v324 = stack[-3];
    if (v324 == nil) goto v124;
    stack[0] = stack[-1];
    v324 = stack[-3];
    v324 = qcar(v324);
    v325 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = stack[-9];
    fn = elt(env, 14); /* !*di2q */
    v324 = (*qfn2(fn))(qenv(fn), v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    fn = elt(env, 15); /* prepsq */
    v324 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = Lrplacd(nil, stack[0], v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = stack[-1];
    v324 = qcdr(v324);
    stack[-1] = v324;
    goto v328;

v124:
    v324 = stack[-2];
    goto v91;

v91:
    v324 = cons(stack[-4], v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    stack[-6] = v324;
    stack[-7] = v324;
    goto v329;

v329:
    v324 = stack[-8];
    v324 = qcdr(v324);
    stack[-8] = v324;
    v324 = stack[-8];
    if (v324 == nil) goto v58;
    stack[-5] = stack[-6];
    v324 = stack[-8];
    v324 = qcar(v324);
    stack[-4] = elt(env, 8); /* plus */
    v325 = qvalue(elt(env, 9)); /* gv */
    v324 = qcar(v324);
    v324 = *(Lisp_Object *)((char *)v325 + (CELL-TAG_VECTOR) + ((int32_t)v324/(16/CELL)));
    stack[-3] = v324;
    v324 = stack[-3];
    if (v324 == nil) goto v330;
    v324 = stack[-3];
    v324 = qcar(v324);
    v325 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = stack[-9];
    fn = elt(env, 14); /* !*di2q */
    v324 = (*qfn2(fn))(qenv(fn), v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    fn = elt(env, 15); /* prepsq */
    v324 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    stack[-1] = v324;
    stack[-2] = v324;
    goto v188;

v188:
    v324 = stack[-3];
    v324 = qcdr(v324);
    stack[-3] = v324;
    v324 = stack[-3];
    if (v324 == nil) goto v331;
    stack[0] = stack[-1];
    v324 = stack[-3];
    v324 = qcar(v324);
    v325 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = stack[-9];
    fn = elt(env, 14); /* !*di2q */
    v324 = (*qfn2(fn))(qenv(fn), v325, v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    fn = elt(env, 15); /* prepsq */
    v324 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = Lrplacd(nil, stack[0], v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = stack[-1];
    v324 = qcdr(v324);
    stack[-1] = v324;
    goto v188;

v331:
    v324 = stack[-2];
    goto v190;

v190:
    v324 = cons(stack[-4], v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = ncons(v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = Lrplacd(nil, stack[-5], v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    v324 = stack[-6];
    v324 = qcdr(v324);
    stack[-6] = v324;
    goto v329;

v330:
    v324 = qvalue(elt(env, 3)); /* nil */
    goto v190;

v58:
    v324 = stack[-7];
    goto v172;

v172:
    v325 = elt(env, 1); /* list */
    popv(11);
    return cons(v325, v324);

v72:
    v324 = qvalue(elt(env, 3)); /* nil */
    goto v91;

v327:
    v324 = qvalue(elt(env, 3)); /* nil */
    goto v172;

v7:
    v324 = qvalue(elt(env, 3)); /* nil */
    goto v2;

v76:
    v324 = elt(env, 2); /* "Argument to invbase not a list" */
    fn = elt(env, 16); /* rederr */
    v324 = (*qfn1(fn))(qenv(fn), v324);
    nil = C_nil;
    if (exception_pending()) goto v326;
    env = stack[-10];
    goto v103;
/* error exit handlers */
v326:
    popv(11);
    return nil;
}



/* Code for out_of_range */

static Lisp_Object MS_CDECL CC_out_of_range(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v80, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v272, v301;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "out_of_range");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for out_of_range");
#endif
    if (stack >= stacklimit)
    {
        push3(v80,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v80);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v80;
    stack[-1] = v1;
    v301 = v0;
/* end of prologue */
    v272 = stack[-1];
    v272 = integerp(v272);
    if (v272 == nil) goto v243;
    v272 = v301;
    fn = elt(env, 4); /* flattens1 */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-3];
    fn = elt(env, 5); /* extract_numid */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-3];
    stack[-2] = v272;
    v272 = stack[0];
    if (v272 == nil) goto v284;
    v272 = stack[0];
    goto v44;

v44:
    stack[0] = v272;
    goto v2;

v2:
    v272 = stack[-2];
    if (v272 == nil) goto v136;
    v301 = stack[0];
    v272 = (Lisp_Object)17; /* 1 */
    if (v301 == v272) goto v125;
    v301 = stack[0];
    v272 = (Lisp_Object)1; /* 0 */
    if (v301 == v272) goto v109;
    v272 = nil;
    goto v207;

v207:
    if (v272 == nil) goto v136;
    v272 = stack[-2];
    v272 = qcdr(v272);
    stack[-2] = v272;
    goto v2;

v136:
    v272 = stack[-2];
    if (v272 == nil) goto v120;
    v272 = qvalue(elt(env, 3)); /* t */
    { popv(4); return onevalue(v272); }

v120:
    v272 = qvalue(elt(env, 2)); /* nil */
    { popv(4); return onevalue(v272); }

v109:
    v272 = stack[-2];
    v301 = qcar(v272);
    v272 = stack[-1];
    v272 = (Lisp_Object)lesseq2(v301, v272);
    nil = C_nil;
    if (exception_pending()) goto v237;
    v272 = v272 ? lisp_true : nil;
    env = stack[-3];
    goto v207;

v125:
    v272 = stack[-2];
    v301 = qcar(v272);
    v272 = stack[-1];
    v272 = (Lisp_Object)lessp2(v301, v272);
    nil = C_nil;
    if (exception_pending()) goto v237;
    v272 = v272 ? lisp_true : nil;
    env = stack[-3];
    goto v207;

v284:
    v272 = qvalue(elt(env, 1)); /* signat!* */
    goto v44;

v243:
    v272 = nil;
    { popv(4); return onevalue(v272); }
/* error exit handlers */
v237:
    popv(4);
    return nil;
}



/* Code for makemainvar */

static Lisp_Object CC_makemainvar(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v52, v280, v244;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for makemainvar");
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
    v52 = stack[-1];
    if (!consp(v52)) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v52 = stack[-1];
    v52 = qcar(v52);
    if (!consp(v52)) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v280 = stack[0];
    v52 = stack[-1];
    v52 = qcar(v52);
    v52 = qcar(v52);
    v52 = qcar(v52);
    if (equal(v280, v52)) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v52 = stack[-1];
    v52 = qcar(v52);
    v280 = qcdr(v52);
    v52 = stack[0];
    v244 = CC_makemainvar(env, v280, v52);
    nil = C_nil;
    if (exception_pending()) goto v278;
    env = stack[-3];
    v52 = stack[-1];
    v52 = qcar(v52);
    v280 = qcar(v52);
    v52 = stack[0];
    fn = elt(env, 1); /* mulcoeffsby */
    stack[-2] = (*qfnn(fn))(qenv(fn), 3, v244, v280, v52);
    nil = C_nil;
    if (exception_pending()) goto v278;
    env = stack[-3];
    v52 = stack[-1];
    v280 = qcdr(v52);
    v52 = stack[0];
    v280 = CC_makemainvar(env, v280, v52);
    nil = C_nil;
    if (exception_pending()) goto v278;
    env = stack[-3];
    v52 = stack[0];
    {
        Lisp_Object v273 = stack[-2];
        popv(4);
        fn = elt(env, 2); /* mergeadd */
        return (*qfnn(fn))(qenv(fn), 3, v273, v280, v52);
    }
/* error exit handlers */
v278:
    popv(4);
    return nil;
}



/* Code for legendre!-symbol */

static Lisp_Object CC_legendreKsymbol(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v284, v78;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for legendre-symbol");
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
    v284 = v1;
    v78 = v0;
/* end of prologue */
    stack[0] = v78;
    v78 = sub1(v284);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-1];
    v284 = (Lisp_Object)33; /* 2 */
    v284 = quot2(v78, v284);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-1];
    {
        Lisp_Object v130 = stack[0];
        popv(2);
        fn = elt(env, 1); /* general!-modular!-expt */
        return (*qfn2(fn))(qenv(fn), v130, v284);
    }
/* error exit handlers */
v113:
    popv(2);
    return nil;
}



/* Code for square!-free!-mod!-p */

static Lisp_Object CC_squareKfreeKmodKp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v129, v107;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for square-free-mod-p");
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
    v107 = v0;
/* end of prologue */
    v129 = v107;
    v129 = (consp(v129) ? nil : lisp_true);
    if (!(v129 == nil)) goto v92;
    v129 = v107;
    v129 = qcar(v129);
    v129 = (consp(v129) ? nil : lisp_true);
    goto v92;

v92:
    if (!(v129 == nil)) { popv(2); return onevalue(v129); }
    stack[0] = v107;
    v129 = v107;
    fn = elt(env, 1); /* derivative!-mod!-p */
    v129 = (*qfn1(fn))(qenv(fn), v129);
    nil = C_nil;
    if (exception_pending()) goto v7;
    env = stack[-1];
    fn = elt(env, 2); /* gcd!-mod!-p */
    v129 = (*qfn2(fn))(qenv(fn), stack[0], v129);
    nil = C_nil;
    if (exception_pending()) goto v7;
    v107 = v129;
    v129 = v107;
    v129 = (consp(v129) ? nil : lisp_true);
    if (!(v129 == nil)) { popv(2); return onevalue(v129); }
    v129 = v107;
    v129 = qcar(v129);
    v129 = (consp(v129) ? nil : lisp_true);
    { popv(2); return onevalue(v129); }
/* error exit handlers */
v7:
    popv(2);
    return nil;
}



/* Code for cl_pnf2 */

static Lisp_Object CC_cl_pnf2(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v69, v211, v289;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for cl_pnf2");
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
    v69 = stack[0];
    if (!consp(v69)) goto v243;
    v69 = stack[0];
    v69 = qcar(v69);
    goto v92;

v92:
    v211 = v69;
    v289 = v211;
    v69 = elt(env, 1); /* ex */
    if (v289 == v69) goto v50;
    v289 = v211;
    v69 = elt(env, 2); /* all */
    if (v289 == v69) goto v50;
    v289 = v211;
    v69 = elt(env, 3); /* or */
    if (v289 == v69) goto v10;
    v289 = v211;
    v69 = elt(env, 4); /* and */
    if (v289 == v69) goto v10;
    v289 = v211;
    v69 = elt(env, 5); /* true */
    if (v289 == v69) goto v279;
    v289 = v211;
    v69 = elt(env, 6); /* false */
    if (v289 == v69) goto v279;
    v289 = v211;
    v69 = elt(env, 5); /* true */
    if (v289 == v69) goto v195;
    v289 = v211;
    v69 = elt(env, 6); /* false */
    if (v289 == v69) goto v195;
    v289 = v211;
    v69 = elt(env, 3); /* or */
    if (v289 == v69) goto v195;
    v289 = v211;
    v69 = elt(env, 4); /* and */
    if (v289 == v69) goto v195;
    v289 = v211;
    v69 = elt(env, 7); /* not */
    if (v289 == v69) goto v195;
    v289 = v211;
    v69 = elt(env, 8); /* impl */
    if (v289 == v69) goto v195;
    v289 = v211;
    v69 = elt(env, 9); /* repl */
    if (v289 == v69) goto v195;
    v289 = v211;
    v69 = elt(env, 10); /* equiv */
    if (v289 == v69) goto v195;
    v289 = v211;
    v69 = elt(env, 1); /* ex */
    if (v289 == v69) goto v195;
    v289 = v211;
    v69 = elt(env, 2); /* all */
    if (v289 == v69) goto v195;
    v289 = v211;
    v69 = elt(env, 11); /* bex */
    if (v289 == v69) goto v195;
    v289 = v211;
    v69 = elt(env, 12); /* ball */
    if (!(v289 == v69)) goto v205;

v195:
    v289 = elt(env, 13); /* "cl_pnf2():" */
    v69 = elt(env, 14); /* "invalid as operator" */
    v69 = list3(v289, v211, v69);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-1];
    fn = elt(env, 15); /* rederr */
    v69 = (*qfn1(fn))(qenv(fn), v69);
    nil = C_nil;
    if (exception_pending()) goto v115;
    goto v205;

v205:
    v69 = stack[0];
    popv(2);
    return ncons(v69);

v279:
    v69 = stack[0];
    popv(2);
    return ncons(v69);

v10:
    v69 = stack[0];
    {
        popv(2);
        fn = elt(env, 16); /* cl_pnf2!-junctor */
        return (*qfn1(fn))(qenv(fn), v69);
    }

v50:
    v69 = stack[0];
    {
        popv(2);
        fn = elt(env, 17); /* cl_pnf2!-quantifier */
        return (*qfn1(fn))(qenv(fn), v69);
    }

v243:
    v69 = stack[0];
    goto v92;
/* error exit handlers */
v115:
    popv(2);
    return nil;
}



/* Code for logrtn */

static Lisp_Object CC_logrtn(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v299, v300;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for logrtn");
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
    v299 = stack[-2];
    v299 = qcdr(v299);
    v299 = qcar(v299);
    stack[0] = v299;
    v299 = stack[0];
    fn = elt(env, 3); /* msd */
    v299 = (*qfn1(fn))(qenv(fn), v299);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    v299 = sub1(v299);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    stack[-3] = v299;
    v300 = elt(env, 1); /* 2.0 */
    v299 = stack[-3];
    v299 = Lexpt(nil, v300, v299);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    v299 = quot2(stack[0], v299);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    fn = elt(env, 4); /* log */
    stack[0] = (*qfn1(fn))(qenv(fn), v299);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    v300 = stack[-3];
    v299 = stack[-2];
    v299 = qcdr(v299);
    v299 = qcdr(v299);
    v300 = plus2(v300, v299);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    v299 = qvalue(elt(env, 2)); /* log2 */
    v299 = times2(v300, v299);
    nil = C_nil;
    if (exception_pending()) goto v108;
    env = stack[-4];
    v299 = plus2(stack[0], v299);
    nil = C_nil;
    if (exception_pending()) goto v108;
    v300 = v299;
    v299 = stack[-1];
    popv(5);
    return quot2(v300, v299);
/* error exit handlers */
v108:
    popv(5);
    return nil;
}



/* Code for pseudo!-prime!-p */

static Lisp_Object CC_pseudoKprimeKp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v282, v266, v205;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pseudo-prime-p");
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
    v282 = (Lisp_Object)1; /* 0 */
    stack[-2] = v282;
    v282 = (Lisp_Object)1393; /* 87 */
    stack[0] = v282;
    goto v50;

v50:
    v266 = stack[0];
    v282 = stack[-2];
    if (equal(v266, v282)) goto v244;
    v282 = stack[0];
    v266 = (Lisp_Object)((int32_t)(v282) + 0x10);
    v282 = stack[-2];
    v266 = (Lisp_Object)(int32_t)((int32_t)v266 + (int32_t)v282 - TAG_FIXNUM);
    v282 = (Lisp_Object)33; /* 2 */
    v282 = Liquotient(nil, v266, v282);
    nil = C_nil;
    if (exception_pending()) goto v272;
    env = stack[-3];
    v205 = v282;
    v266 = qvalue(elt(env, 2)); /* pseudo!-primes */
    v282 = v205;
    v282 = *(Lisp_Object *)((char *)v266 + (CELL-TAG_VECTOR) + ((int32_t)v282/(16/CELL)));
    v266 = v282;
    v282 = stack[-1];
    if (((int32_t)(v266)) > ((int32_t)(v282))) goto v54;
    v282 = v205;
    stack[-2] = v282;
    goto v50;

v54:
    v282 = v205;
    v282 = (Lisp_Object)((int32_t)(v282) - 0x10);
    stack[0] = v282;
    goto v50;

v244:
    v266 = qvalue(elt(env, 2)); /* pseudo!-primes */
    v282 = stack[-2];
    v266 = *(Lisp_Object *)((char *)v266 + (CELL-TAG_VECTOR) + ((int32_t)v282/(16/CELL)));
    v282 = stack[-1];
    v282 = (equal(v266, v282) ? lisp_true : nil);
    { popv(4); return onevalue(v282); }
/* error exit handlers */
v272:
    popv(4);
    return nil;
}



/* Code for compactf2 */

static Lisp_Object MS_CDECL CC_compactf2(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v80, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v283, v272, v301;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "compactf2");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for compactf2");
#endif
    if (stack >= stacklimit)
    {
        push3(v80,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v80);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v80;
    stack[-2] = v1;
    stack[-3] = v0;
/* end of prologue */
    stack[-4] = nil;
    goto v243;

v243:
    v283 = stack[-3];
    if (!consp(v283)) goto v44;
    v283 = stack[-3];
    v283 = qcar(v283);
    if (!consp(v283)) goto v44;
    v283 = stack[-3];
    v283 = qcar(v283);
    v283 = qcar(v283);
    v272 = qcar(v283);
    v283 = stack[-1];
    v283 = Lmemq(nil, v272, v283);
    if (v283 == nil) goto v299;
    stack[0] = stack[-4];
    v301 = stack[-3];
    v272 = stack[-2];
    v283 = stack[-1];
    fn = elt(env, 1); /* compactf3 */
    v283 = (*qfnn(fn))(qenv(fn), 3, v301, v272, v283);
    nil = C_nil;
    if (exception_pending()) goto v94;
    env = stack[-5];
    {
        Lisp_Object v95 = stack[0];
        popv(6);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v95, v283);
    }

v299:
    v283 = stack[-3];
    v283 = qcar(v283);
    stack[0] = qcar(v283);
    v283 = stack[-3];
    v283 = qcar(v283);
    v301 = qcdr(v283);
    v272 = stack[-2];
    v283 = stack[-1];
    v272 = CC_compactf2(env, 3, v301, v272, v283);
    nil = C_nil;
    if (exception_pending()) goto v94;
    env = stack[-5];
    v283 = stack[-4];
    v283 = acons(stack[0], v272, v283);
    nil = C_nil;
    if (exception_pending()) goto v94;
    env = stack[-5];
    stack[-4] = v283;
    v283 = stack[-3];
    v283 = qcdr(v283);
    stack[-3] = v283;
    goto v243;

v44:
    v272 = stack[-4];
    v283 = stack[-3];
    {
        popv(6);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v272, v283);
    }
/* error exit handlers */
v94:
    popv(6);
    return nil;
}



/* Code for groeb!=critb */

static Lisp_Object CC_groebMcritb(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v46, v106;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for groeb=critb");
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
    v46 = v1;
    stack[-4] = v0;
/* end of prologue */
    stack[-5] = v46;
    goto v248;

v248:
    v46 = stack[-5];
    if (v46 == nil) goto v123;
    v46 = stack[-5];
    v46 = qcar(v46);
    stack[0] = v46;
    v106 = stack[-4];
    v46 = stack[0];
    fn = elt(env, 2); /* groeb!=testb */
    v46 = (*qfn2(fn))(qenv(fn), v106, v46);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-6];
    if (v46 == nil) goto v113;
    v46 = nil;
    goto v112;

v112:
    stack[-3] = v46;
    v46 = stack[-3];
    fn = elt(env, 3); /* lastpair */
    v46 = (*qfn1(fn))(qenv(fn), v46);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-6];
    stack[-2] = v46;
    v46 = stack[-5];
    v46 = qcdr(v46);
    stack[-5] = v46;
    v46 = stack[-2];
    if (!consp(v46)) goto v248;
    else goto v60;

v60:
    v46 = stack[-5];
    if (v46 == nil) { Lisp_Object res = stack[-3]; popv(7); return onevalue(res); }
    stack[-1] = stack[-2];
    v46 = stack[-5];
    v46 = qcar(v46);
    stack[0] = v46;
    v106 = stack[-4];
    v46 = stack[0];
    fn = elt(env, 2); /* groeb!=testb */
    v46 = (*qfn2(fn))(qenv(fn), v106, v46);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-6];
    if (v46 == nil) goto v279;
    v46 = nil;
    goto v270;

v270:
    v46 = Lrplacd(nil, stack[-1], v46);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-6];
    v46 = stack[-2];
    fn = elt(env, 3); /* lastpair */
    v46 = (*qfn1(fn))(qenv(fn), v46);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-6];
    stack[-2] = v46;
    v46 = stack[-5];
    v46 = qcdr(v46);
    stack[-5] = v46;
    goto v60;

v279:
    v46 = stack[0];
    v46 = ncons(v46);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-6];
    goto v270;

v113:
    v46 = stack[0];
    v46 = ncons(v46);
    nil = C_nil;
    if (exception_pending()) goto v283;
    env = stack[-6];
    goto v112;

v123:
    v46 = qvalue(elt(env, 1)); /* nil */
    { popv(7); return onevalue(v46); }
/* error exit handlers */
v283:
    popv(7);
    return nil;
}



/* Code for boolean!-eval1 */

static Lisp_Object CC_booleanKeval1(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v134, v133, v125;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for boolean-eval1");
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
    v133 = stack[0];
    v134 = elt(env, 1); /* sq!* */
    if (!consp(v133)) goto v9;
    v133 = qcar(v133);
    if (!(v133 == v134)) goto v9;
    v134 = stack[0];
    v134 = qcdr(v134);
    v134 = qcdr(v134);
    if (v134 == nil) goto v9;
    v134 = stack[0];
    v134 = qcdr(v134);
    v134 = qcar(v134);
    fn = elt(env, 3); /* prespsq */
    v133 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v53;
    env = stack[-1];
    v125 = v133;
    v134 = elt(env, 2); /* boolean */
    if (!consp(v133)) goto v9;
    v133 = qcar(v133);
    if (!(v133 == v134)) goto v9;
    v134 = v125;
    v134 = qcdr(v134);
    v134 = qcar(v134);
    {
        popv(2);
        fn = elt(env, 4); /* boolean!-eval2 */
        return (*qfn1(fn))(qenv(fn), v134);
    }

v9:
    v134 = stack[0];
    v134 = ncons(v134);
    nil = C_nil;
    if (exception_pending()) goto v53;
    env = stack[-1];
    fn = elt(env, 5); /* simp!-prop */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v53;
    env = stack[-1];
    v134 = qcar(v134);
    fn = elt(env, 6); /* prepf */
    v134 = (*qfn1(fn))(qenv(fn), v134);
    nil = C_nil;
    if (exception_pending()) goto v53;
    env = stack[-1];
    {
        popv(2);
        fn = elt(env, 4); /* boolean!-eval2 */
        return (*qfn1(fn))(qenv(fn), v134);
    }
/* error exit handlers */
v53:
    popv(2);
    return nil;
}



/* Code for affinep */

static Lisp_Object CC_affinep(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v78, v112;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for affinep");
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
    v78 = v0;
/* end of prologue */
    v112 = qcar(v78);
    v78 = elt(env, 1); /* belong_to_space */
    v78 = get(v112, v78);
    env = stack[0];
    v112 = v78;
    v78 = v112;
    if (v78 == nil) goto v6;
    v78 = v112;
    fn = elt(env, 2); /* get_sign_space */
    v78 = (*qfn1(fn))(qenv(fn), v78);
    nil = C_nil;
    if (exception_pending()) goto v113;
    v78 = (v78 == nil ? lisp_true : nil);
    { popv(1); return onevalue(v78); }

v6:
    v78 = nil;
    { popv(1); return onevalue(v78); }
/* error exit handlers */
v113:
    popv(1);
    return nil;
}



/* Code for st_extract_symcells */

static Lisp_Object CC_st_extract_symcells(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v101, v257, v276;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for st_extract_symcells");
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
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-5] = v1;
    stack[-6] = v0;
/* end of prologue */
    v101 = stack[-6];
    if (v101 == nil) goto v6;
    v101 = stack[-6];
    fn = elt(env, 3); /* st_consolidate */
    v276 = (*qfn1(fn))(qenv(fn), v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-8];
    v257 = qvalue(elt(env, 1)); /* nil */
    v101 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 4); /* st_extract_symcells1 */
    v101 = (*qfnn(fn))(qenv(fn), 3, v276, v257, v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-8];
    stack[-4] = v101;
    v101 = stack[-4];
    v101 = qcar(v101);
    stack[-6] = v101;
    v101 = stack[-6];
    fn = elt(env, 5); /* listp */
    v101 = (*qfn1(fn))(qenv(fn), v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-8];
    if (!(v101 == nil)) goto v9;
    v257 = elt(env, 2); /* !* */
    v101 = stack[-6];
    v101 = list2(v257, v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-8];
    stack[-6] = v101;
    goto v9;

v9:
    v101 = stack[-4];
    v101 = qcdr(v101);
    v101 = qcar(v101);
    stack[-4] = v101;
    v101 = stack[-4];
    v101 = Llength(nil, v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-8];
    v101 = sub1(v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-8];
    v101 = Lmkvect(nil, v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-8];
    stack[-7] = v101;
    v101 = stack[-7];
    fn = elt(env, 6); /* upbve */
    v101 = (*qfn1(fn))(qenv(fn), v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-8];
    stack[-3] = v101;
    goto v245;

v245:
    v101 = stack[-4];
    if (v101 == nil) goto v12;
    stack[-2] = stack[-7];
    v101 = stack[-3];
    stack[-1] = sub1(v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-8];
    v101 = stack[-4];
    stack[0] = qcar(v101);
    v101 = stack[-4];
    v257 = qcar(v101);
    v101 = stack[-5];
    fn = elt(env, 7); /* sc_repkern */
    v101 = (*qfn2(fn))(qenv(fn), v257, v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-8];
    v101 = cons(stack[0], v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-8];
    *(Lisp_Object *)((char *)stack[-2] + (CELL-TAG_VECTOR) + ((int32_t)stack[-1]/(16/CELL))) = v101;
    v101 = stack[-4];
    v101 = qcdr(v101);
    stack[-4] = v101;
    v101 = stack[-3];
    v101 = sub1(v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-8];
    stack[-3] = v101;
    goto v245;

v12:
    v101 = stack[-6];
    fn = elt(env, 3); /* st_consolidate */
    v257 = (*qfn1(fn))(qenv(fn), v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    v101 = stack[-7];
    popv(9);
    return cons(v257, v101);

v6:
    stack[0] = qvalue(elt(env, 1)); /* nil */
    v101 = (Lisp_Object)-15; /* -1 */
    v101 = Lmkvect(nil, v101);
    nil = C_nil;
    if (exception_pending()) goto v38;
    {
        Lisp_Object v40 = stack[0];
        popv(9);
        return cons(v40, v101);
    }
/* error exit handlers */
v38:
    popv(9);
    return nil;
}



/* Code for setmod */

static Lisp_Object CC_setmod(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v281, v282;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for setmod");
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
    stack[-1] = qvalue(elt(env, 1)); /* dmode!* */
    qvalue(elt(env, 1)) = nil; /* dmode!* */
    v281 = stack[0];
    if (!consp(v281)) goto v92;
    v281 = stack[0];
    v281 = qcar(v281);
    stack[0] = v281;
    goto v92;

v92:
    v281 = stack[0];
    fn = elt(env, 6); /* reval */
    v281 = (*qfn1(fn))(qenv(fn), v281);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-2];
    stack[0] = v281;
    v281 = stack[0];
    v281 = integerp(v281);
    if (v281 == nil) goto v299;
    v282 = stack[0];
    v281 = (Lisp_Object)1; /* 0 */
    v281 = (Lisp_Object)greaterp2(v282, v281);
    nil = C_nil;
    if (exception_pending()) goto v120;
    v281 = v281 ? lisp_true : nil;
    env = stack[-2];
    if (v281 == nil) goto v299;
    v281 = stack[0];
    fn = elt(env, 7); /* primep */
    v281 = (*qfn1(fn))(qenv(fn), v281);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-2];
    if (v281 == nil) goto v133;
    v282 = elt(env, 2); /* (!:mod!:) */
    v281 = elt(env, 3); /* field */
    v281 = Lflag(nil, v282, v281);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-2];
    goto v129;

v129:
    v281 = stack[0];
    fn = elt(env, 8); /* set!-general!-modulus */
    v281 = (*qfn1(fn))(qenv(fn), v281);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-2];
    goto v82;

v82:
    qvalue(elt(env, 1)) = stack[-1]; /* dmode!* */
    { popv(3); return onevalue(v281); }

v133:
    v282 = elt(env, 2); /* (!:mod!:) */
    v281 = elt(env, 3); /* field */
    v281 = Lremflag(nil, v282, v281);
    env = stack[-2];
    goto v129;

v299:
    v282 = stack[0];
    v281 = (Lisp_Object)1; /* 0 */
    if (v282 == v281) goto v132;
    v281 = stack[0];
    if (v281 == nil) goto v132;
    v282 = stack[0];
    v281 = elt(env, 5); /* "modulus" */
    fn = elt(env, 9); /* typerr */
    v281 = (*qfn2(fn))(qenv(fn), v282, v281);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-2];
    v281 = nil;
    goto v82;

v132:
    v281 = qvalue(elt(env, 4)); /* current!-modulus */
    goto v82;
/* error exit handlers */
v120:
    env = stack[-2];
    qvalue(elt(env, 1)) = stack[-1]; /* dmode!* */
    popv(3);
    return nil;
}



/* Code for monic!-mod!-p */

static Lisp_Object CC_monicKmodKp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v261, v236, v132;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for monic-mod-p");
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
    v132 = v0;
/* end of prologue */
    v261 = v132;
    if (v261 == nil) goto v82;
    v261 = v132;
    if (!consp(v261)) goto v248;
    v261 = v132;
    v261 = qcar(v261);
    if (!consp(v261)) goto v248;
    v261 = v132;
    v261 = qcar(v261);
    v236 = qcdr(v261);
    v261 = (Lisp_Object)17; /* 1 */
    if (v236 == v261) { popv(2); return onevalue(v132); }
    v261 = v132;
    v261 = qcar(v261);
    v261 = qcdr(v261);
    if (!consp(v261)) goto v110;
    v261 = v132;
    v261 = qcar(v261);
    v261 = qcdr(v261);
    v261 = qcar(v261);
    if (!consp(v261)) goto v110;
    v261 = elt(env, 2); /* "LC NOT NUMERIC IN MONIC-MOD-P" */
    {
        popv(2);
        fn = elt(env, 3); /* errorf */
        return (*qfn1(fn))(qenv(fn), v261);
    }

v110:
    stack[0] = v132;
    v261 = v132;
    v261 = qcar(v261);
    v261 = qcdr(v261);
    v261 = Lmodular_reciprocal(nil, v261);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-1];
    {
        Lisp_Object v299 = stack[0];
        popv(2);
        fn = elt(env, 4); /* multiply!-by!-constant!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v299, v261);
    }

v248:
    v261 = (Lisp_Object)17; /* 1 */
    { popv(2); return onevalue(v261); }

v82:
    v261 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v261); }
/* error exit handlers */
v275:
    popv(2);
    return nil;
}



/* Code for gd_newtype */

static Lisp_Object CC_gd_newtype(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v245, v246, v260, v108;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gd_newtype");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v260 = v1;
    v108 = v0;
/* end of prologue */
    v246 = v108;
    v245 = v260;
    if (v246 == v245) return onevalue(v108);
    v246 = v108;
    v245 = elt(env, 1); /* gec */
    if (v246 == v245) goto v2;
    v246 = v108;
    v245 = elt(env, 2); /* geg */
    if (v246 == v245) return onevalue(v260);
    v246 = v260;
    v245 = elt(env, 1); /* gec */
    if (v246 == v245) goto v55;
    v245 = elt(env, 4); /* ger */
    return onevalue(v245);

v55:
    v245 = qvalue(elt(env, 3)); /* nil */
    return onevalue(v245);

v2:
    v246 = v260;
    v245 = elt(env, 2); /* geg */
    if (v246 == v245) goto v323;
    v245 = qvalue(elt(env, 3)); /* nil */
    return onevalue(v245);

v323:
    v245 = elt(env, 1); /* gec */
    return onevalue(v245);
}



setup_type const u48_setup[] =
{
    {"vdpvbcprod",              too_few_2,      CC_vdpvbcprod, wrong_no_2},
    {"fast_augment_columns",    too_few_2,      CC_fast_augment_columns,wrong_no_2},
    {"evalsetbool",             wrong_no_na,    wrong_no_nb,   (n_args *)CC_evalsetbool},
    {"new_edge",                too_few_2,      CC_new_edge,   wrong_no_2},
    {"fs:onep",                 CC_fsTonep,     too_many_1,    wrong_no_1},
    {"st_ad_numsorttree1",      CC_st_ad_numsorttree1,too_many_1,wrong_no_1},
    {"try-all-constants",       wrong_no_na,    wrong_no_nb,   (n_args *)CC_tryKallKconstants},
    {"rdzero*",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_rdzeroH},
    {"lto_alunion",             CC_lto_alunion, too_many_1,    wrong_no_1},
    {"mkbin",                   too_few_2,      CC_mkbin,      wrong_no_2},
    {"termlst1",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_termlst1},
    {"ev_dif",                  too_few_2,      CC_ev_dif,     wrong_no_2},
    {"formrlis",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_formrlis},
    {"ps:int-erule",            too_few_2,      CC_psTintKerule,wrong_no_2},
    {"spmake_identity",         CC_spmake_identity,too_many_1, wrong_no_1},
    {"subscriptedvarp2",        CC_subscriptedvarp2,too_many_1,wrong_no_1},
    {"formgen",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_formgen},
    {"dip-nc-m*p-distleft",     wrong_no_na,    wrong_no_nb,   (n_args *)CC_dipKncKmHpKdistleft},
    {"mkset",                   CC_mkset,       too_many_1,    wrong_no_1},
    {"minprec",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_minprec},
    {"actual_world",            too_few_2,      CC_actual_world,wrong_no_2},
    {"dpmat_make",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_dpmat_make},
    {"formsetq",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_formsetq},
    {"invbase",                 CC_invbase,     too_many_1,    wrong_no_1},
    {"out_of_range",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_out_of_range},
    {"makemainvar",             too_few_2,      CC_makemainvar,wrong_no_2},
    {"legendre-symbol",         too_few_2,      CC_legendreKsymbol,wrong_no_2},
    {"square-free-mod-p",       CC_squareKfreeKmodKp,too_many_1,wrong_no_1},
    {"cl_pnf2",                 CC_cl_pnf2,     too_many_1,    wrong_no_1},
    {"logrtn",                  too_few_2,      CC_logrtn,     wrong_no_2},
    {"pseudo-prime-p",          CC_pseudoKprimeKp,too_many_1,  wrong_no_1},
    {"compactf2",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_compactf2},
    {"groeb=critb",             too_few_2,      CC_groebMcritb,wrong_no_2},
    {"boolean-eval1",           CC_booleanKeval1,too_many_1,   wrong_no_1},
    {"affinep",                 CC_affinep,     too_many_1,    wrong_no_1},
    {"st_extract_symcells",     too_few_2,      CC_st_extract_symcells,wrong_no_2},
    {"setmod",                  CC_setmod,      too_many_1,    wrong_no_1},
    {"monic-mod-p",             CC_monicKmodKp, too_many_1,    wrong_no_1},
    {"gd_newtype",              too_few_2,      CC_gd_newtype, wrong_no_2},
    {NULL, (one_args *)"u48", (two_args *)"15939 8988735 4604206", 0}
};

/* end of generated code */

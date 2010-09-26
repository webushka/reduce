
/* $destdir\u48.c        Machine generated C code */

/* Signature: 00000000 26-Sep-2010 */

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
extern CSLbool always_noisy;
extern int number_of_input_files,
    number_of_symbols_to_define,
    number_of_fasl_paths,
    init_flags;
extern int native_code_tag;
extern char *standard_directory;
extern int gc_number;
extern CSLbool gc_method_is_copying;
extern int force_reclaim_method;
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


/* Code for randpoly */

static Lisp_Object CC_randpoly(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v142, v143, v144, v145, v146;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for randpoly");
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
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-14] = v0;
/* end of prologue */
    stack[-15] = nil;
    stack[-12] = nil;
    stack[-7] = nil;
    v142 = elt(env, 1); /* lambda_l9cw2y_12 */
    stack[-13] = v142;
    v142 = (Lisp_Object)81; /* 5 */
    stack[-10] = v142;
    v142 = (Lisp_Object)1; /* 0 */
    stack[-9] = v142;
    v142 = (Lisp_Object)97; /* 6 */
    stack[-11] = v142;
    v142 = elt(env, 2); /* sparse */
    stack[-8] = v142;
    stack[-6] = qvalue(elt(env, 3)); /* wtl!* */
    qvalue(elt(env, 3)) = nil; /* wtl!* */
    v142 = stack[-14];
    fn = elt(env, 17); /* revlis */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    stack[-14] = v142;
    v142 = qcar(v142);
    stack[0] = v142;
    v143 = stack[0];
    v142 = elt(env, 4); /* list */
    if (!consp(v143)) goto v148;
    v143 = qcar(v143);
    if (!(v143 == v142)) goto v148;
    v142 = stack[0];
    v142 = qcdr(v142);
    goto v149;

v149:
    stack[0] = v142;
    v142 = stack[0];
    stack[-5] = v142;
    v142 = stack[-5];
    if (v142 == nil) goto v150;
    v142 = stack[-5];
    v142 = qcar(v142);
    stack[-1] = v142;
    v142 = stack[-1];
    if (!consp(v142)) goto v151;
    v142 = stack[-1];
    v143 = qcar(v142);
    v142 = elt(env, 7); /* equalopr */
    v142 = Lflagp(nil, v143, v142);
    env = stack[-16];
    if (v142 == nil) goto v151;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    if (v142 == nil) goto v151;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    if (!(v142 == nil)) goto v151;
    v142 = stack[-1];
    fn = elt(env, 18); /* !*eqn2a */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    stack[-1] = v142;
    v142 = (Lisp_Object)17; /* 1 */
    stack[-9] = v142;
    goto v152;

v152:
    v142 = elt(env, 8); /* g */
    v142 = Lgensym1(nil, v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    stack[0] = v142;
    v144 = elt(env, 9); /* equal */
    v143 = stack[0];
    v142 = stack[-1];
    v143 = list3(v144, v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    v142 = stack[-7];
    v142 = cons(v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    stack[-7] = v142;
    v142 = stack[0];
    goto v153;

v153:
    v142 = ncons(v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    stack[-3] = v142;
    stack[-4] = v142;
    goto v154;

v154:
    v142 = stack[-5];
    v142 = qcdr(v142);
    stack[-5] = v142;
    v142 = stack[-5];
    if (v142 == nil) goto v155;
    stack[-2] = stack[-3];
    v142 = stack[-5];
    v142 = qcar(v142);
    stack[-1] = v142;
    v142 = stack[-1];
    if (!consp(v142)) goto v156;
    v142 = stack[-1];
    v143 = qcar(v142);
    v142 = elt(env, 7); /* equalopr */
    v142 = Lflagp(nil, v143, v142);
    env = stack[-16];
    if (v142 == nil) goto v156;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    if (v142 == nil) goto v156;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    if (!(v142 == nil)) goto v156;
    v142 = stack[-1];
    fn = elt(env, 18); /* !*eqn2a */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    stack[-1] = v142;
    v142 = (Lisp_Object)17; /* 1 */
    stack[-9] = v142;
    goto v157;

v157:
    v142 = elt(env, 8); /* g */
    v142 = Lgensym1(nil, v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    stack[0] = v142;
    v144 = elt(env, 9); /* equal */
    v143 = stack[0];
    v142 = stack[-1];
    v143 = list3(v144, v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    v142 = stack[-7];
    v142 = cons(v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    stack[-7] = v142;
    v142 = stack[0];
    goto v158;

v158:
    v142 = ncons(v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    v142 = Lrplacd(nil, stack[-2], v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    v142 = stack[-3];
    v142 = qcdr(v142);
    stack[-3] = v142;
    goto v154;

v156:
    v142 = stack[-1];
    fn = elt(env, 19); /* simp!* */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    fn = elt(env, 20); /* kernp */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    if (v142 == nil) goto v157;
    v142 = stack[-1];
    goto v158;

v155:
    v142 = stack[-4];
    goto v159;

v159:
    stack[0] = v142;
    v142 = stack[-15];
    if (v142 == nil) goto v160;
    v142 = stack[0];
    v142 = qcar(v142);
    stack[0] = v142;
    goto v160;

v160:
    qvalue(elt(env, 3)) = stack[-6]; /* wtl!* */
    v142 = stack[-14];
    v142 = qcdr(v142);
    stack[-2] = v142;
    goto v161;

v161:
    v142 = stack[-2];
    if (v142 == nil) goto v162;
    v142 = stack[-2];
    v142 = qcar(v142);
    stack[-1] = v142;
    v143 = stack[-1];
    v142 = elt(env, 10); /* dense */
    if (v143 == v142) goto v163;
    v143 = stack[-1];
    v142 = elt(env, 2); /* sparse */
    if (v143 == v142) goto v163;
    v142 = stack[-1];
    if (!consp(v142)) goto v164;
    v142 = stack[-1];
    v143 = qcar(v142);
    v142 = elt(env, 7); /* equalopr */
    v142 = Lflagp(nil, v143, v142);
    env = stack[-16];
    if (v142 == nil) goto v164;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    if (v142 == nil) goto v164;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    if (!(v142 == nil)) goto v164;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v143 = qcar(v142);
    v142 = elt(env, 11); /* coeffs */
    if (!(v143 == v142)) goto v165;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcar(v142);
    fn = elt(env, 21); /* functionp */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    if (v142 == nil) goto v165;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcar(v142);
    stack[-13] = v142;
    goto v167;

v167:
    if (!(v142 == nil)) goto v168;

v164:
    v143 = stack[-1];
    v142 = elt(env, 16); /* "optional randpoly argument" */
    fn = elt(env, 22); /* typerr */
    v142 = (*qfn2(fn))(qenv(fn), v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    goto v168;

v168:
    v142 = stack[-2];
    v142 = qcdr(v142);
    stack[-2] = v142;
    goto v161;

v165:
    v142 = stack[-1];
    v142 = qcdr(v142);
    v143 = qcar(v142);
    v142 = elt(env, 12); /* expons */
    if (!(v143 == v142)) goto v169;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcar(v142);
    fn = elt(env, 21); /* functionp */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    if (v142 == nil) goto v169;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcar(v142);
    stack[-12] = v142;
    goto v167;

v169:
    v142 = stack[-1];
    v142 = qcdr(v142);
    v143 = qcar(v142);
    v142 = elt(env, 13); /* (degree deg maxdeg) */
    v142 = Lmemq(nil, v143, v142);
    if (v142 == nil) goto v170;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcar(v142);
    fn = elt(env, 23); /* natnump */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    if (v142 == nil) goto v170;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcar(v142);
    stack[-10] = v142;
    goto v167;

v170:
    v142 = stack[-1];
    v142 = qcdr(v142);
    v143 = qcar(v142);
    v142 = elt(env, 14); /* (ord mindeg) */
    v142 = Lmemq(nil, v143, v142);
    if (v142 == nil) goto v171;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcar(v142);
    fn = elt(env, 23); /* natnump */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    if (v142 == nil) goto v171;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcar(v142);
    stack[-9] = v142;
    goto v167;

v171:
    v142 = stack[-1];
    v142 = qcdr(v142);
    v143 = qcar(v142);
    v142 = elt(env, 15); /* terms */
    if (!(v143 == v142)) goto v172;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcar(v142);
    fn = elt(env, 23); /* natnump */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    if (v142 == nil) goto v172;
    v142 = stack[-1];
    v142 = qcdr(v142);
    v142 = qcdr(v142);
    v142 = qcar(v142);
    stack[-11] = v142;
    goto v167;

v172:
    v142 = nil;
    goto v167;

v163:
    v142 = stack[-1];
    stack[-8] = v142;
    goto v168;

v162:
    v143 = qvalue(elt(env, 6)); /* nil */
    v142 = (Lisp_Object)17; /* 1 */
    v142 = cons(v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-1] = v142;
    v143 = stack[-9];
    v142 = stack[-10];
    v142 = (Lisp_Object)lesseq2(v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    v142 = v142 ? lisp_true : nil;
    env = stack[-16];
    if (v142 == nil) goto v173;
    v143 = stack[-8];
    v142 = elt(env, 2); /* sparse */
    if (v143 == v142) goto v174;
    v142 = stack[-15];
    if (v142 == nil) goto v175;
    v143 = stack[-13];
    v142 = qvalue(elt(env, 6)); /* nil */
    fn = elt(env, 24); /* apply */
    v142 = (*qfn2(fn))(qenv(fn), v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 19); /* simp!* */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-1] = v142;
    v143 = stack[-9];
    v142 = (Lisp_Object)1; /* 0 */
    v142 = (Lisp_Object)greaterp2(v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    v142 = v142 ? lisp_true : nil;
    env = stack[-16];
    if (v142 == nil) goto v176;
    v143 = stack[0];
    v142 = stack[-9];
    fn = elt(env, 25); /* mksq */
    v142 = (*qfn2(fn))(qenv(fn), v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 26); /* multsq */
    v142 = (*qfn2(fn))(qenv(fn), stack[-1], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-1] = v142;
    goto v176;

v176:
    v142 = stack[-9];
    v142 = add1(v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-2] = v142;
    goto v177;

v177:
    v143 = stack[-10];
    v142 = stack[-2];
    v142 = difference2(v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    v142 = Lminusp(nil, v142);
    env = stack[-16];
    if (!(v142 == nil)) goto v173;
    stack[-3] = stack[-1];
    v143 = stack[-13];
    v142 = qvalue(elt(env, 6)); /* nil */
    fn = elt(env, 24); /* apply */
    v142 = (*qfn2(fn))(qenv(fn), v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 19); /* simp!* */
    stack[-1] = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    v143 = stack[0];
    v142 = stack[-2];
    fn = elt(env, 25); /* mksq */
    v142 = (*qfn2(fn))(qenv(fn), v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 26); /* multsq */
    v142 = (*qfn2(fn))(qenv(fn), stack[-1], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 27); /* addsq */
    v142 = (*qfn2(fn))(qenv(fn), stack[-3], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-1] = v142;
    v142 = stack[-2];
    v142 = add1(v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-2] = v142;
    goto v177;

v173:
    v142 = stack[-7];
    if (v142 == nil) { Lisp_Object res = stack[-1]; popv(17); return onevalue(res); }
    stack[0] = stack[-7];
    v142 = stack[-1];
    fn = elt(env, 28); /* mk!*sq */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    v142 = ncons(v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    v142 = Lappend(nil, stack[0], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 29); /* subeval */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    {
        popv(17);
        fn = elt(env, 19); /* simp!* */
        return (*qfn1(fn))(qenv(fn), v142);
    }

v175:
    v144 = stack[0];
    v143 = stack[-10];
    v142 = stack[-9];
    fn = elt(env, 30); /* rand!-mons!-dense */
    v142 = (*qfnn(fn))(qenv(fn), 3, v144, v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-3] = v142;
    goto v178;

v178:
    v142 = stack[-3];
    if (v142 == nil) goto v173;
    v142 = stack[-3];
    v142 = qcar(v142);
    stack[-2] = v142;
    v143 = stack[-13];
    v142 = qvalue(elt(env, 6)); /* nil */
    fn = elt(env, 24); /* apply */
    v142 = (*qfn2(fn))(qenv(fn), v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 19); /* simp!* */
    stack[0] = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    v143 = stack[-2];
    v142 = (Lisp_Object)17; /* 1 */
    v142 = cons(v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 26); /* multsq */
    v142 = (*qfn2(fn))(qenv(fn), stack[0], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 27); /* addsq */
    v142 = (*qfn2(fn))(qenv(fn), stack[-1], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-1] = v142;
    v142 = stack[-3];
    v142 = qcdr(v142);
    stack[-3] = v142;
    goto v178;

v174:
    v142 = stack[-12];
    if (v142 == nil) goto v179;
    v142 = stack[-15];
    if (v142 == nil) goto v180;
    v142 = (Lisp_Object)17; /* 1 */
    stack[-3] = v142;
    goto v181;

v181:
    v143 = stack[-11];
    v142 = stack[-3];
    v142 = difference2(v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    v142 = Lminusp(nil, v142);
    env = stack[-16];
    if (!(v142 == nil)) goto v173;
    stack[-4] = stack[-1];
    v143 = stack[-13];
    v142 = qvalue(elt(env, 6)); /* nil */
    fn = elt(env, 24); /* apply */
    v142 = (*qfn2(fn))(qenv(fn), v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 19); /* simp!* */
    stack[-2] = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-1] = stack[0];
    v142 = stack[-12];
    fn = elt(env, 31); /* apply_e */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 32); /* !*kp2q */
    v142 = (*qfn2(fn))(qenv(fn), stack[-1], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 26); /* multsq */
    v142 = (*qfn2(fn))(qenv(fn), stack[-2], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 27); /* addsq */
    v142 = (*qfn2(fn))(qenv(fn), stack[-4], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-1] = v142;
    v142 = stack[-3];
    v142 = add1(v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-3] = v142;
    goto v181;

v180:
    v142 = (Lisp_Object)17; /* 1 */
    stack[-4] = v142;
    goto v182;

v182:
    v143 = stack[-11];
    v142 = stack[-4];
    v142 = difference2(v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    v142 = Lminusp(nil, v142);
    env = stack[-16];
    if (!(v142 == nil)) goto v173;
    v143 = stack[-13];
    v142 = qvalue(elt(env, 6)); /* nil */
    fn = elt(env, 24); /* apply */
    v142 = (*qfn2(fn))(qenv(fn), v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 19); /* simp!* */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    v143 = v142;
    v142 = v143;
    v142 = qcar(v142);
    if (v142 == nil) goto v183;
    stack[-5] = stack[-1];
    v142 = stack[0];
    stack[-3] = v142;
    goto v184;

v184:
    v142 = stack[-3];
    if (v142 == nil) goto v185;
    v142 = stack[-3];
    v142 = qcar(v142);
    stack[-2] = v143;
    stack[-1] = v142;
    v142 = stack[-12];
    fn = elt(env, 31); /* apply_e */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 32); /* !*kp2q */
    v142 = (*qfn2(fn))(qenv(fn), stack[-1], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 26); /* multsq */
    v142 = (*qfn2(fn))(qenv(fn), stack[-2], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    v143 = v142;
    v142 = stack[-3];
    v142 = qcdr(v142);
    stack[-3] = v142;
    goto v184;

v185:
    v142 = v143;
    fn = elt(env, 27); /* addsq */
    v142 = (*qfn2(fn))(qenv(fn), stack[-5], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-1] = v142;
    goto v183;

v183:
    v142 = stack[-4];
    v142 = add1(v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-4] = v142;
    goto v182;

v179:
    v146 = stack[0];
    v145 = stack[-11];
    v144 = stack[-10];
    v143 = stack[-9];
    v142 = stack[-15];
    fn = elt(env, 33); /* rand!-mons!-sparse */
    v142 = (*qfnn(fn))(qenv(fn), 5, v146, v145, v144, v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-3] = v142;
    goto v186;

v186:
    v142 = stack[-3];
    if (v142 == nil) goto v173;
    v142 = stack[-3];
    v142 = qcar(v142);
    stack[-2] = v142;
    v143 = stack[-13];
    v142 = qvalue(elt(env, 6)); /* nil */
    fn = elt(env, 24); /* apply */
    v142 = (*qfn2(fn))(qenv(fn), v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 19); /* simp!* */
    stack[0] = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    v143 = stack[-2];
    v142 = (Lisp_Object)17; /* 1 */
    v142 = cons(v143, v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 26); /* multsq */
    v142 = (*qfn2(fn))(qenv(fn), stack[0], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    fn = elt(env, 27); /* addsq */
    v142 = (*qfn2(fn))(qenv(fn), stack[-1], v142);
    nil = C_nil;
    if (exception_pending()) goto v166;
    env = stack[-16];
    stack[-1] = v142;
    v142 = stack[-3];
    v142 = qcdr(v142);
    stack[-3] = v142;
    goto v186;

v151:
    v142 = stack[-1];
    fn = elt(env, 19); /* simp!* */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    fn = elt(env, 20); /* kernp */
    v142 = (*qfn1(fn))(qenv(fn), v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    if (v142 == nil) goto v152;
    v142 = stack[-1];
    goto v153;

v150:
    v142 = qvalue(elt(env, 6)); /* nil */
    goto v159;

v148:
    v142 = qvalue(elt(env, 5)); /* t */
    stack[-15] = v142;
    v142 = stack[0];
    v142 = ncons(v142);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-16];
    goto v149;
/* error exit handlers */
v166:
    popv(17);
    return nil;
v147:
    env = stack[-16];
    qvalue(elt(env, 3)) = stack[-6]; /* wtl!* */
    popv(17);
    return nil;
}



/* Code for lambda_l9cw2y_12 */

static Lisp_Object MS_CDECL CC_lambda_l9cw2y_12(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v3, v4;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "lambda_l9cw2y_12");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lambda_l9cw2y_12");
#endif
    if (stack >= stacklimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* end of prologue */
    v3 = (Lisp_Object)3185; /* 199 */
    fn = elt(env, 1); /* random */
    v4 = (*qfn1(fn))(qenv(fn), v3);
    errexit();
    v3 = (Lisp_Object)1585; /* 99 */
    return difference2(v4, v3);
}



/* Code for chksymmetries!&subst */

static Lisp_Object MS_CDECL CC_chksymmetriesGsubst(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v187,
                         Lisp_Object v21, Lisp_Object v41, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v202, v203, v204, v205;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "chksymmetries&subst");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for chksymmetries&subst");
#endif
    if (stack >= stacklimit)
    {
        push4(v41,v21,v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0,v187,v21,v41);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v41;
    stack[-1] = v21;
    stack[-2] = v187;
    stack[-3] = v0;
/* end of prologue */

v206:
    v202 = stack[-1];
    if (v202 == nil) goto v20;
    v205 = stack[-3];
    v204 = stack[-2];
    v202 = stack[-1];
    v203 = qcar(v202);
    v202 = stack[0];
    fn = elt(env, 2); /* chksymmetries!&sub1 */
    v202 = (*qfnn(fn))(qenv(fn), 4, v205, v204, v203, v202);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    v203 = v202;
    v202 = v203;
    if (v202 == nil) goto v208;
    stack[-4] = v203;
    v205 = stack[-3];
    v204 = stack[-2];
    v202 = stack[-1];
    v203 = qcdr(v202);
    v202 = stack[0];
    v202 = CC_chksymmetriesGsubst(env, 4, v205, v204, v203, v202);
    nil = C_nil;
    if (exception_pending()) goto v207;
    {
        Lisp_Object v209 = stack[-4];
        popv(6);
        return cons(v209, v202);
    }

v208:
    v205 = stack[-3];
    v204 = stack[-2];
    v202 = stack[-1];
    v203 = qcdr(v202);
    v202 = stack[0];
    stack[-3] = v205;
    stack[-2] = v204;
    stack[-1] = v203;
    stack[0] = v202;
    goto v206;

v20:
    v202 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v202); }
/* error exit handlers */
v207:
    popv(6);
    return nil;
}



/* Code for free */

static Lisp_Object CC_free(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v210;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for free");
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
    v210 = stack[0];
    v210 = qcdr(v210);
    v210 = qcar(v210);
    fn = elt(env, 2); /* freeind */
    v210 = (*qfn1(fn))(qenv(fn), v210);
    nil = C_nil;
    if (exception_pending()) goto v211;
    env = stack[-1];
    if (v210 == nil) goto v14;
    v210 = stack[0];
    v210 = qcdr(v210);
    v210 = qcdr(v210);
    v210 = qcar(v210);
    {
        popv(2);
        fn = elt(env, 2); /* freeind */
        return (*qfn1(fn))(qenv(fn), v210);
    }

v14:
    v210 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v210); }
/* error exit handlers */
v211:
    popv(2);
    return nil;
}



/* Code for lengthreval */

static Lisp_Object CC_lengthreval(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v222, v223, v224;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lengthreval");
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
    v222 = stack[0];
    v223 = Llength(nil, v222);
    nil = C_nil;
    if (exception_pending()) goto v124;
    env = stack[-2];
    v222 = (Lisp_Object)17; /* 1 */
    if (v223 == v222) goto v19;
    v222 = elt(env, 1); /* "LENGTH called with wrong number of arguments" 
*/
    v223 = v222;
    v222 = v223;
    qvalue(elt(env, 2)) = v222; /* errmsg!* */
    v222 = qvalue(elt(env, 3)); /* !*protfg */
    if (!(v222 == nil)) goto v139;
    v222 = v223;
    fn = elt(env, 11); /* lprie */
    v222 = (*qfn1(fn))(qenv(fn), v222);
    nil = C_nil;
    if (exception_pending()) goto v124;
    env = stack[-2];
    goto v139;

v139:
    v222 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v124;
    env = stack[-2];
    goto v19;

v19:
    v222 = stack[0];
    v222 = qcar(v222);
    stack[0] = v222;
    v222 = stack[0];
    if (!(symbolp(v222))) goto v141;
    v223 = stack[0];
    v222 = elt(env, 4); /* rtype */
    v223 = get(v223, v222);
    env = stack[-2];
    v222 = elt(env, 5); /* array */
    if (!(v223 == v222)) goto v141;
    v224 = elt(env, 6); /* list */
    v223 = stack[0];
    v222 = elt(env, 7); /* dimension */
    v222 = get(v223, v222);
    popv(3);
    return cons(v224, v222);

v141:
    v222 = stack[0];
    fn = elt(env, 12); /* aeval */
    v222 = (*qfn1(fn))(qenv(fn), v222);
    nil = C_nil;
    if (exception_pending()) goto v124;
    env = stack[-2];
    stack[-1] = v222;
    v222 = stack[-1];
    fn = elt(env, 13); /* getrtype */
    v222 = (*qfn1(fn))(qenv(fn), v222);
    nil = C_nil;
    if (exception_pending()) goto v124;
    env = stack[-2];
    v224 = v222;
    if (v222 == nil) goto v204;
    v223 = v224;
    v222 = elt(env, 8); /* lengthfn */
    v222 = get(v223, v222);
    env = stack[-2];
    v223 = v222;
    if (v222 == nil) goto v204;
    v222 = stack[-1];
        popv(3);
        return Lapply1(nil, v223, v222);

v204:
    v222 = stack[-1];
    if (!consp(v222)) goto v225;
    v222 = stack[-1];
    v222 = qcar(v222);
    if (!(symbolp(v222))) goto v226;
    v222 = stack[-1];
    v223 = qcar(v222);
    v222 = elt(env, 8); /* lengthfn */
    v222 = get(v223, v222);
    env = stack[-2];
    v223 = v222;
    if (v222 == nil) goto v226;
    v222 = stack[-1];
    v222 = qcdr(v222);
        popv(3);
        return Lapply1(nil, v223, v222);

v226:
    v222 = v224;
    if (v222 == nil) goto v227;
    v222 = elt(env, 9); /* "LENGTH not defined for argument of type" */
    v223 = v224;
    v222 = list2(v222, v223);
    nil = C_nil;
    if (exception_pending()) goto v124;
    env = stack[-2];
    fn = elt(env, 11); /* lprie */
    v222 = (*qfn1(fn))(qenv(fn), v222);
    nil = C_nil;
    if (exception_pending()) goto v124;
    goto v202;

v202:
    v222 = nil;
    { popv(3); return onevalue(v222); }

v227:
    v223 = stack[0];
    v222 = elt(env, 10); /* "LENGTH argument" */
    fn = elt(env, 14); /* typerr */
    v222 = (*qfn2(fn))(qenv(fn), v223, v222);
    nil = C_nil;
    if (exception_pending()) goto v124;
    goto v202;

v225:
    v222 = (Lisp_Object)17; /* 1 */
    { popv(3); return onevalue(v222); }
/* error exit handlers */
v124:
    popv(3);
    return nil;
}



/* Code for deg */

static Lisp_Object CC_deg(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v197, v139;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for deg");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v187;
    stack[-1] = v0;
/* end of prologue */
    v197 = qvalue(elt(env, 1)); /* gdmode!* */
    stack[-2] = qvalue(elt(env, 2)); /* dmode!* */
    qvalue(elt(env, 2)) = v197; /* dmode!* */
    v197 = stack[-1];
    fn = elt(env, 3); /* simp!* */
    v197 = (*qfn1(fn))(qenv(fn), v197);
    nil = C_nil;
    if (exception_pending()) goto v231;
    env = stack[-3];
    stack[-1] = v197;
    v139 = stack[-1];
    v197 = stack[0];
    fn = elt(env, 4); /* tstpolyarg2 */
    v197 = (*qfn2(fn))(qenv(fn), v139, v197);
    nil = C_nil;
    if (exception_pending()) goto v231;
    env = stack[-3];
    v197 = stack[-1];
    v139 = qcar(v197);
    v197 = stack[0];
    fn = elt(env, 5); /* numrdeg */
    v197 = (*qfn2(fn))(qenv(fn), v139, v197);
    nil = C_nil;
    if (exception_pending()) goto v231;
    env = stack[-3];
    qvalue(elt(env, 2)) = stack[-2]; /* dmode!* */
    { popv(4); return onevalue(v197); }
/* error exit handlers */
v231:
    env = stack[-3];
    qvalue(elt(env, 2)) = stack[-2]; /* dmode!* */
    popv(4);
    return nil;
}



/* Code for lto_alunion */

static Lisp_Object CC_lto_alunion(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v3, v4;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lto_alunion");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v3 = v0;
/* end of prologue */
    v4 = v3;
    v3 = elt(env, 1); /* union */
    {
        fn = elt(env, 2); /* lto_almerge */
        return (*qfn2(fn))(qenv(fn), v4, v3);
    }
}



/* Code for get!*order */

static Lisp_Object CC_getHorder(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v20;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for get*order");
#endif
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v20 = v0;
/* end of prologue */
    fn = elt(env, 1); /* get!*elements */
    v20 = (*qfn1(fn))(qenv(fn), v20);
    errexit();
        return Llength(nil, v20);
}



/* Code for qqe_simplqequal */

static Lisp_Object CC_qqe_simplqequal(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v274, v275, v276;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for qqe_simplqequal");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    v274 = v187;
    stack[0] = v0;
/* end of prologue */

v206:
    v274 = stack[0];
    fn = elt(env, 6); /* qqe_arg2r */
    v274 = (*qfn1(fn))(qenv(fn), v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    stack[-7] = v274;
    v274 = stack[0];
    fn = elt(env, 7); /* qqe_arg2l */
    v274 = (*qfn1(fn))(qenv(fn), v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    stack[-8] = v274;
    v275 = stack[-7];
    v274 = stack[-8];
    if (equal(v275, v274)) goto v160;
    v274 = stack[-8];
    fn = elt(env, 8); /* qqe_qprefix!-var */
    v274 = (*qfn1(fn))(qenv(fn), v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    stack[-6] = v274;
    v274 = stack[-7];
    fn = elt(env, 8); /* qqe_qprefix!-var */
    v274 = (*qfn1(fn))(qenv(fn), v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    stack[-5] = v274;
    v275 = stack[-6];
    v274 = stack[-5];
    if (v275 == v274) goto v278;
    v275 = stack[-6];
    v274 = elt(env, 2); /* qepsilon */
    if (v275 == v274) goto v278;
    v275 = stack[-5];
    v274 = elt(env, 2); /* qepsilon */
    if (!(v275 == v274)) goto v140;

v278:
    v274 = stack[-7];
    fn = elt(env, 9); /* qqe_number!-of!-adds!-in!-qterm */
    v274 = (*qfn1(fn))(qenv(fn), v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    stack[-3] = v274;
    v274 = stack[-8];
    fn = elt(env, 9); /* qqe_number!-of!-adds!-in!-qterm */
    v274 = (*qfn1(fn))(qenv(fn), v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    stack[-4] = v274;
    v274 = stack[-7];
    fn = elt(env, 10); /* qqe_number!-of!-tails!-in!-qterm */
    v274 = (*qfn1(fn))(qenv(fn), v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    stack[-1] = v274;
    v274 = stack[-8];
    fn = elt(env, 10); /* qqe_number!-of!-tails!-in!-qterm */
    v274 = (*qfn1(fn))(qenv(fn), v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    stack[-2] = v274;
    v275 = stack[-6];
    v274 = stack[-5];
    if (!(v275 == v274)) goto v279;
    v275 = stack[-3];
    v274 = stack[-1];
    v274 = (Lisp_Object)geq2(v275, v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    v274 = v274 ? lisp_true : nil;
    env = stack[-9];
    if (!(v274 == nil)) goto v280;
    v275 = stack[-4];
    v274 = stack[-2];
    v274 = (Lisp_Object)geq2(v275, v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    v274 = v274 ? lisp_true : nil;
    env = stack[-9];
    if (!(v274 == nil)) goto v280;

v279:
    v275 = stack[-7];
    v274 = elt(env, 2); /* qepsilon */
    if (!(v275 == v274)) goto v212;
    v275 = stack[-4];
    v274 = stack[-2];
    v274 = (Lisp_Object)greaterp2(v275, v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    v274 = v274 ? lisp_true : nil;
    env = stack[-9];
    if (v274 == nil) goto v212;
    v274 = elt(env, 3); /* false */
    { popv(10); return onevalue(v274); }

v212:
    v275 = stack[-8];
    v274 = elt(env, 2); /* qepsilon */
    if (!(v275 == v274)) goto v281;
    v275 = stack[-3];
    v274 = stack[-1];
    v274 = (Lisp_Object)greaterp2(v275, v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    v274 = v274 ? lisp_true : nil;
    env = stack[-9];
    if (v274 == nil) goto v281;
    v274 = elt(env, 3); /* false */
    { popv(10); return onevalue(v274); }

v281:
    v275 = stack[-7];
    v274 = elt(env, 2); /* qepsilon */
    if (!(v275 == v274)) goto v282;
    v275 = stack[-3];
    v274 = (Lisp_Object)1; /* 0 */
    if (!(v275 == v274)) goto v282;
    v275 = stack[-4];
    v274 = (Lisp_Object)1; /* 0 */
    if (!(v275 == v274)) goto v282;
    v275 = stack[-6];
    v274 = elt(env, 2); /* qepsilon */
    if (v275 == v274) goto v118;
    v274 = stack[-8];
    fn = elt(env, 11); /* qqe_simplterm */
    v274 = (*qfn1(fn))(qenv(fn), v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    v275 = elt(env, 5); /* qequal */
    v276 = v274;
    v274 = stack[-7];
    {
        popv(10);
        fn = elt(env, 12); /* qqe_mk2 */
        return (*qfnn(fn))(qenv(fn), 3, v275, v276, v274);
    }

v118:
    v274 = elt(env, 1); /* true */
    { popv(10); return onevalue(v274); }

v282:
    v275 = stack[-8];
    v274 = elt(env, 2); /* qepsilon */
    if (!(v275 == v274)) goto v140;
    v275 = stack[-3];
    v274 = (Lisp_Object)1; /* 0 */
    if (!(v275 == v274)) goto v140;
    v275 = stack[-4];
    v274 = (Lisp_Object)1; /* 0 */
    if (!(v275 == v274)) goto v140;
    v275 = stack[-5];
    v274 = elt(env, 2); /* qepsilon */
    if (v275 == v274) goto v283;
    v274 = stack[-7];
    fn = elt(env, 11); /* qqe_simplterm */
    v274 = (*qfn1(fn))(qenv(fn), v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    stack[0] = v274;
    v276 = elt(env, 5); /* qequal */
    v275 = stack[-8];
    v274 = stack[0];
    {
        popv(10);
        fn = elt(env, 12); /* qqe_mk2 */
        return (*qfnn(fn))(qenv(fn), 3, v276, v275, v274);
    }

v283:
    v274 = elt(env, 1); /* true */
    { popv(10); return onevalue(v274); }

v140:
    v274 = stack[-7];
    fn = elt(env, 11); /* qqe_simplterm */
    v274 = (*qfn1(fn))(qenv(fn), v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    stack[0] = v274;
    v274 = stack[-8];
    fn = elt(env, 11); /* qqe_simplterm */
    v274 = (*qfn1(fn))(qenv(fn), v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    v276 = stack[-7];
    v275 = stack[0];
    if (!(equal(v276, v275))) goto v284;
    v276 = stack[-8];
    v275 = v274;
    if (!(equal(v276, v275))) goto v284;
    v276 = elt(env, 5); /* qequal */
    v275 = v274;
    v274 = stack[0];
    {
        popv(10);
        fn = elt(env, 12); /* qqe_mk2 */
        return (*qfnn(fn))(qenv(fn), 3, v276, v275, v274);
    }

v284:
    v276 = elt(env, 5); /* qequal */
    v275 = v274;
    v274 = stack[0];
    fn = elt(env, 12); /* qqe_mk2 */
    v274 = (*qfnn(fn))(qenv(fn), 3, v276, v275, v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    stack[0] = v274;
    goto v206;

v280:
    v275 = stack[-3];
    v274 = stack[-1];
    stack[0] = difference2(v275, v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    v275 = stack[-4];
    v274 = stack[-2];
    v274 = difference2(v275, v274);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-9];
    if (equal(stack[0], v274)) goto v279;
    v274 = elt(env, 3); /* false */
    { popv(10); return onevalue(v274); }

v160:
    v274 = elt(env, 1); /* true */
    { popv(10); return onevalue(v274); }
/* error exit handlers */
v277:
    popv(10);
    return nil;
}



/* Code for pasf_mkop */

static Lisp_Object CC_pasf_mkop(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v126, v128, v127, v113;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pasf_mkop");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v127 = v187;
    v113 = v0;
/* end of prologue */
    v128 = v113;
    v126 = elt(env, 1); /* (cong ncong) */
    v126 = Lmemq(nil, v128, v126);
    if (v126 == nil) { popv(2); return onevalue(v113); }
    stack[0] = v113;
    v126 = v127;
    if (v126 == nil) goto v197;
    v126 = v127;
    goto v112;

v112:
    {
        Lisp_Object v154 = stack[0];
        popv(2);
        return cons(v154, v126);
    }

v197:
    v126 = qvalue(elt(env, 2)); /* !*protfg */
    if (!(v126 == nil)) goto v285;
    v126 = elt(env, 3); /* "Modulo 0 congruence created" */
    v126 = ncons(v126);
    nil = C_nil;
    if (exception_pending()) goto v286;
    env = stack[-1];
    fn = elt(env, 4); /* lprie */
    v126 = (*qfn1(fn))(qenv(fn), v126);
    nil = C_nil;
    if (exception_pending()) goto v286;
    env = stack[-1];
    goto v285;

v285:
    v126 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v286;
    v126 = nil;
    goto v112;
/* error exit handlers */
v286:
    popv(2);
    return nil;
}



/* Code for vdp_sugar */

static Lisp_Object CC_vdp_sugar(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v149, v195;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for vdp_sugar");
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
    v149 = stack[0];
    fn = elt(env, 3); /* vdp_zero!? */
    v149 = (*qfn1(fn))(qenv(fn), v149);
    nil = C_nil;
    if (exception_pending()) goto v231;
    env = stack[-1];
    if (!(v149 == nil)) goto v14;
    v149 = qvalue(elt(env, 1)); /* !*cgbsugar */
    if (v149 == nil) goto v14;
    v195 = stack[0];
    v149 = elt(env, 2); /* sugar */
    fn = elt(env, 4); /* vdp_getprop */
    v149 = (*qfn2(fn))(qenv(fn), v195, v149);
    nil = C_nil;
    if (exception_pending()) goto v231;
    if (!(v149 == nil)) { popv(2); return onevalue(v149); }
    v149 = (Lisp_Object)1; /* 0 */
    { popv(2); return onevalue(v149); }

v14:
    v149 = (Lisp_Object)1; /* 0 */
    { popv(2); return onevalue(v149); }
/* error exit handlers */
v231:
    popv(2);
    return nil;
}



/* Code for applyml */

static Lisp_Object MS_CDECL CC_applyml(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v290, v200;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "applyml");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for applyml");
#endif
    if (stack >= stacklimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* end of prologue */
    fn = elt(env, 8); /* lex */
    v290 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[0];
    v290 = qvalue(elt(env, 1)); /* char */
    fn = elt(env, 9); /* compress!* */
    v200 = (*qfn1(fn))(qenv(fn), v290);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[0];
    v290 = qvalue(elt(env, 2)); /* rdlist!* */
    v200 = Lassoc(nil, v200, v290);
    v290 = v200;
    if (v200 == nil) goto v291;
    v200 = v290;
    v200 = qcdr(v200);
    v200 = qcar(v200);
    v290 = qcdr(v290);
    v290 = qcdr(v290);
    {
        popv(1);
        fn = elt(env, 10); /* apply */
        return (*qfn2(fn))(qenv(fn), v200, v290);
    }

v291:
    v200 = qvalue(elt(env, 1)); /* char */
    v290 = elt(env, 3); /* (i d e n t !/) */
    if (equal(v200, v290)) goto v285;
    v200 = qvalue(elt(env, 1)); /* char */
    v290 = elt(env, 4); /* (c o m p o s e !/) */
    if (equal(v200, v290)) goto v285;
    v200 = qvalue(elt(env, 1)); /* char */
    v290 = elt(env, 6); /* (i n v e r s e !/) */
    if (equal(v200, v290)) goto v154;
    v290 = qvalue(elt(env, 1)); /* char */
    fn = elt(env, 9); /* compress!* */
    v200 = (*qfn1(fn))(qenv(fn), v290);
    nil = C_nil;
    if (exception_pending()) goto v198;
    env = stack[0];
    v290 = (Lisp_Object)273; /* 17 */
    fn = elt(env, 11); /* errorml */
    v290 = (*qfn2(fn))(qenv(fn), v200, v290);
    nil = C_nil;
    if (exception_pending()) goto v198;
    v290 = nil;
    { popv(1); return onevalue(v290); }

v154:
    v290 = qvalue(elt(env, 7)); /* t */
    { popv(1); return onevalue(v290); }

v285:
    v290 = qvalue(elt(env, 5)); /* nil */
    { popv(1); return onevalue(v290); }
/* error exit handlers */
v198:
    popv(1);
    return nil;
}



/* Code for xpdiff */

static Lisp_Object CC_xpdiff(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v295, v272;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for xpdiff");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v187;
    stack[-1] = v0;
/* end of prologue */
    v295 = stack[-1];
    if (v295 == nil) goto v50;
    v295 = stack[0];
    if (v295 == nil) goto v210;
    v295 = stack[0];
    v272 = qcar(v295);
    v295 = stack[-1];
    v295 = qcar(v295);
    v295 = (Lisp_Object)greaterp2(v272, v295);
    nil = C_nil;
    if (exception_pending()) goto v296;
    v295 = v295 ? lisp_true : nil;
    env = stack[-3];
    if (v295 == nil) goto v148;
    v295 = elt(env, 4); /* failed */
    { popv(4); return onevalue(v295); }

v148:
    v295 = stack[-1];
    v272 = qcdr(v295);
    v295 = stack[0];
    v295 = qcdr(v295);
    v295 = CC_xpdiff(env, v272, v295);
    nil = C_nil;
    if (exception_pending()) goto v296;
    env = stack[-3];
    stack[-2] = v295;
    v272 = stack[-2];
    v295 = elt(env, 4); /* failed */
    if (v272 == v295) goto v193;
    v295 = stack[-1];
    v272 = qcar(v295);
    v295 = stack[0];
    v295 = qcar(v295);
    v272 = difference2(v272, v295);
    nil = C_nil;
    if (exception_pending()) goto v296;
    v295 = stack[-2];
    popv(4);
    return cons(v272, v295);

v193:
    v295 = elt(env, 4); /* failed */
    { popv(4); return onevalue(v295); }

v210:
    v295 = elt(env, 3); /* "A too long in xpdiff" */
    {
        popv(4);
        fn = elt(env, 5); /* interr */
        return (*qfn1(fn))(qenv(fn), v295);
    }

v50:
    v295 = stack[0];
    if (v295 == nil) goto v3;
    v295 = elt(env, 2); /* "B too long in xpdiff" */
    {
        popv(4);
        fn = elt(env, 5); /* interr */
        return (*qfn1(fn))(qenv(fn), v295);
    }

v3:
    v295 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v295); }
/* error exit handlers */
v296:
    popv(4);
    return nil;
}



/* Code for ps!:constmult!-erule */

static Lisp_Object CC_psTconstmultKerule(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v196, v197, v139;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ps:constmult-erule");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v197 = v187;
    v139 = v0;
/* end of prologue */
    v196 = v139;
    v196 = qcdr(v196);
    stack[0] = qcar(v196);
    v196 = v139;
    v196 = qcdr(v196);
    v196 = qcdr(v196);
    v196 = qcar(v196);
    fn = elt(env, 1); /* ps!:evaluate */
    v196 = (*qfn2(fn))(qenv(fn), v196, v197);
    nil = C_nil;
    if (exception_pending()) goto v195;
    env = stack[-1];
    {
        Lisp_Object v194 = stack[0];
        popv(2);
        fn = elt(env, 2); /* multsq */
        return (*qfn2(fn))(qenv(fn), v194, v196);
    }
/* error exit handlers */
v195:
    popv(2);
    return nil;
}



/* Code for mkuniquewedge */

static Lisp_Object CC_mkuniquewedge(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v190, v191;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mkuniquewedge");
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
    stack[-1] = nil;
    goto v57;

v57:
    v190 = stack[0];
    if (v190 == nil) goto v20;
    v190 = stack[0];
    v190 = qcar(v190);
    v190 = qcar(v190);
    fn = elt(env, 2); /* mkuniquewedge1 */
    v191 = (*qfn1(fn))(qenv(fn), v190);
    nil = C_nil;
    if (exception_pending()) goto v292;
    env = stack[-2];
    v190 = stack[0];
    v190 = qcar(v190);
    v190 = qcdr(v190);
    fn = elt(env, 3); /* multpfsq */
    v191 = (*qfn2(fn))(qenv(fn), v191, v190);
    nil = C_nil;
    if (exception_pending()) goto v292;
    env = stack[-2];
    v190 = stack[-1];
    v190 = cons(v191, v190);
    nil = C_nil;
    if (exception_pending()) goto v292;
    env = stack[-2];
    stack[-1] = v190;
    v190 = stack[0];
    v190 = qcdr(v190);
    stack[0] = v190;
    goto v57;

v20:
    v190 = qvalue(elt(env, 1)); /* nil */
    v191 = v190;
    goto v19;

v19:
    v190 = stack[-1];
    if (v190 == nil) { popv(3); return onevalue(v191); }
    v190 = stack[-1];
    v190 = qcar(v190);
    fn = elt(env, 4); /* addpf */
    v190 = (*qfn2(fn))(qenv(fn), v190, v191);
    nil = C_nil;
    if (exception_pending()) goto v292;
    env = stack[-2];
    v191 = v190;
    v190 = stack[-1];
    v190 = qcdr(v190);
    stack[-1] = v190;
    goto v19;
/* error exit handlers */
v292:
    popv(3);
    return nil;
}



/* Code for dvertex!-to!-projector */

static Lisp_Object MS_CDECL CC_dvertexKtoKprojector(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v187,
                         Lisp_Object v21, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v270, v271, v302;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "dvertex-to-projector");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dvertex-to-projector");
#endif
    if (stack >= stacklimit)
    {
        push3(v21,v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v187,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-1] = v187;
    stack[-2] = v0;
/* end of prologue */
    v270 = stack[-2];
    v270 = qcdr(v270);
    v302 = qcar(v270);
    v271 = stack[-1];
    v270 = stack[0];
    fn = elt(env, 1); /* mktails */
    v270 = (*qfnn(fn))(qenv(fn), 3, v302, v271, v270);
    nil = C_nil;
    if (exception_pending()) goto v303;
    env = stack[-4];
    stack[-3] = v270;
    v270 = stack[-3];
    v270 = qcar(v270);
    fn = elt(env, 2); /* repeatsp */
    v270 = (*qfn1(fn))(qenv(fn), v270);
    nil = C_nil;
    if (exception_pending()) goto v303;
    env = stack[-4];
    if (v270 == nil) goto v293;
    v270 = (Lisp_Object)1; /* 0 */
    { popv(5); return onevalue(v270); }

v293:
    v270 = stack[-2];
    v270 = qcdr(v270);
    v270 = qcdr(v270);
    v302 = qcar(v270);
    v271 = stack[-1];
    v270 = stack[-3];
    v270 = qcdr(v270);
    fn = elt(env, 1); /* mktails */
    v270 = (*qfnn(fn))(qenv(fn), 3, v302, v271, v270);
    nil = C_nil;
    if (exception_pending()) goto v303;
    env = stack[-4];
    stack[-1] = v270;
    v270 = stack[-1];
    v270 = qcar(v270);
    fn = elt(env, 2); /* repeatsp */
    v270 = (*qfn1(fn))(qenv(fn), v270);
    nil = C_nil;
    if (exception_pending()) goto v303;
    env = stack[-4];
    if (v270 == nil) goto v113;
    v270 = (Lisp_Object)1; /* 0 */
    { popv(5); return onevalue(v270); }

v113:
    v270 = stack[-1];
    v270 = qcdr(v270);
    stack[0] = v270;
    v270 = stack[-3];
    stack[-2] = qcar(v270);
    v270 = stack[-1];
    v270 = qcar(v270);
    v270 = Lreverse(nil, v270);
    nil = C_nil;
    if (exception_pending()) goto v303;
    env = stack[-4];
    fn = elt(env, 3); /* prop!-simp */
    v270 = (*qfn2(fn))(qenv(fn), stack[-2], v270);
    nil = C_nil;
    if (exception_pending()) goto v303;
    env = stack[-4];
    stack[-2] = v270;
    v270 = stack[-2];
    fn = elt(env, 4); /* mk!-contract!-coeff */
    v270 = (*qfn1(fn))(qenv(fn), v270);
    nil = C_nil;
    if (exception_pending()) goto v303;
    env = stack[-4];
    stack[-1] = v270;
    v270 = stack[-2];
    v270 = qcdr(v270);
    v302 = qcar(v270);
    v270 = stack[-2];
    v270 = qcdr(v270);
    v271 = qcdr(v270);
    v270 = stack[0];
    fn = elt(env, 5); /* dpropagator */
    v270 = (*qfnn(fn))(qenv(fn), 3, v302, v271, v270);
    nil = C_nil;
    if (exception_pending()) goto v303;
    {
        Lisp_Object v304 = stack[-1];
        popv(5);
        return cons(v304, v270);
    }
/* error exit handlers */
v303:
    popv(5);
    return nil;
}



/* Code for dp_prod */

static Lisp_Object CC_dp_prod(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v141, v140;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dp_prod");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v187;
    stack[-1] = v0;
/* end of prologue */
    v141 = stack[-1];
    stack[-2] = Llength(nil, v141);
    nil = C_nil;
    if (exception_pending()) goto v189;
    env = stack[-3];
    v141 = stack[0];
    v141 = Llength(nil, v141);
    nil = C_nil;
    if (exception_pending()) goto v189;
    env = stack[-3];
    v141 = (Lisp_Object)lesseq2(stack[-2], v141);
    nil = C_nil;
    if (exception_pending()) goto v189;
    v141 = v141 ? lisp_true : nil;
    env = stack[-3];
    if (v141 == nil) goto v194;
    v140 = stack[-1];
    v141 = stack[0];
    {
        popv(4);
        fn = elt(env, 1); /* dp!=prod */
        return (*qfn2(fn))(qenv(fn), v140, v141);
    }

v194:
    v140 = stack[0];
    v141 = stack[-1];
    {
        popv(4);
        fn = elt(env, 1); /* dp!=prod */
        return (*qfn2(fn))(qenv(fn), v140, v141);
    }
/* error exit handlers */
v189:
    popv(4);
    return nil;
}



/* Code for find!-null!-space */

static Lisp_Object CC_findKnullKspace(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v192, v150, v190, v191;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for find-null-space");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v187;
    stack[-2] = v0;
/* end of prologue */
    stack[-3] = qvalue(elt(env, 1)); /* null!-space!-basis */
    qvalue(elt(env, 1)) = nil; /* null!-space!-basis */
    v192 = (Lisp_Object)17; /* 1 */
    stack[0] = v192;
    goto v305;

v305:
    v150 = stack[-1];
    v192 = stack[0];
    v192 = (Lisp_Object)(int32_t)((int32_t)v150 - (int32_t)v192 + TAG_FIXNUM);
    v192 = ((intptr_t)(v192) < 0 ? lisp_true : nil);
    if (v192 == nil) goto v149;
    v190 = qvalue(elt(env, 1)); /* null!-space!-basis */
    v150 = stack[-2];
    v192 = stack[-1];
    fn = elt(env, 3); /* tidy!-up!-null!-vectors */
    v192 = (*qfnn(fn))(qenv(fn), 3, v190, v150, v192);
    nil = C_nil;
    if (exception_pending()) goto v136;
    env = stack[-4];
    qvalue(elt(env, 1)) = stack[-3]; /* null!-space!-basis */
    { popv(5); return onevalue(v192); }

v149:
    v191 = stack[0];
    v190 = qvalue(elt(env, 1)); /* null!-space!-basis */
    v150 = stack[-2];
    v192 = stack[-1];
    fn = elt(env, 4); /* clear!-column */
    v192 = (*qfnn(fn))(qenv(fn), 4, v191, v190, v150, v192);
    nil = C_nil;
    if (exception_pending()) goto v136;
    env = stack[-4];
    qvalue(elt(env, 1)) = v192; /* null!-space!-basis */
    v192 = stack[0];
    v192 = (Lisp_Object)((int32_t)(v192) + 0x10);
    stack[0] = v192;
    goto v305;
/* error exit handlers */
v136:
    env = stack[-4];
    qvalue(elt(env, 1)) = stack[-3]; /* null!-space!-basis */
    popv(5);
    return nil;
}



/* Code for lowestdeg */

static Lisp_Object MS_CDECL CC_lowestdeg(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v187,
                         Lisp_Object v21, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v300, v126, v128, v127;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "lowestdeg");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lowestdeg");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v300 = v21;
    v126 = v187;
    v128 = v0;
/* end of prologue */

v20:
    v127 = v128;
    if (v127 == nil) return onevalue(v300);
    v300 = v128;
    if (!consp(v300)) goto v230;
    v300 = v128;
    v300 = qcar(v300);
    if (!consp(v300)) goto v230;
    v300 = v128;
    v300 = qcar(v300);
    v300 = qcar(v300);
    v127 = qcar(v300);
    v300 = v126;
    if (!(equal(v127, v300))) goto v230;
    v300 = v128;
    v300 = qcdr(v300);
    v127 = v300;
    v300 = v128;
    v300 = qcar(v300);
    v300 = qcar(v300);
    v300 = qcdr(v300);
    v128 = v127;
    goto v20;

v230:
    v300 = (Lisp_Object)1; /* 0 */
    return onevalue(v300);
}



/* Code for simprad */

static Lisp_Object CC_simprad(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v277, v333;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for simprad");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-3] = v187;
    stack[0] = v0;
/* end of prologue */
    v277 = qvalue(elt(env, 1)); /* !*reduced */
    if (v277 == nil) goto v291;
    v277 = stack[0];
    v333 = qcar(v277);
    v277 = stack[-3];
    fn = elt(env, 8); /* radfa */
    stack[-1] = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v277 = stack[0];
    v333 = qcdr(v277);
    v277 = stack[-3];
    fn = elt(env, 8); /* radfa */
    v277 = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    fn = elt(env, 9); /* invsq */
    v277 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    {
        Lisp_Object v335 = stack[-1];
        popv(7);
        fn = elt(env, 10); /* multsq */
        return (*qfn2(fn))(qenv(fn), v335, v277);
    }

v291:
    stack[-4] = nil;
    v277 = qvalue(elt(env, 2)); /* !*rationalize */
    if (v277 == nil) goto v209;
    v277 = stack[0];
    v333 = qcdr(v277);
    v277 = (Lisp_Object)17; /* 1 */
    v277 = list2(v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    stack[-1] = v277;
    v277 = stack[0];
    stack[-2] = qcar(v277);
    v277 = stack[0];
    stack[0] = qcdr(v277);
    v277 = stack[-3];
    v277 = sub1(v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    fn = elt(env, 11); /* exptf */
    v277 = (*qfn2(fn))(qenv(fn), stack[0], v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    fn = elt(env, 12); /* multf */
    v333 = (*qfn2(fn))(qenv(fn), stack[-2], v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v277 = (Lisp_Object)17; /* 1 */
    v277 = cons(v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    stack[0] = v277;
    goto v225;

v225:
    v333 = stack[-3];
    v277 = (Lisp_Object)33; /* 2 */
    if (!(v333 == v277)) goto v336;
    v277 = stack[0];
    v277 = qcar(v277);
    fn = elt(env, 13); /* minusf */
    v277 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    if (v277 == nil) goto v336;
    v277 = qvalue(elt(env, 3)); /* t */
    stack[-4] = v277;
    v277 = stack[0];
    v277 = qcar(v277);
    fn = elt(env, 14); /* negf */
    v333 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v277 = stack[-3];
    fn = elt(env, 15); /* radf */
    v277 = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    stack[-2] = v277;
    goto v337;

v337:
    stack[-5] = elt(env, 4); /* quotient */
    v277 = stack[-2];
    v277 = qcdr(v277);
    fn = elt(env, 16); /* retimes */
    stack[0] = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v277 = stack[-1];
    v277 = qcdr(v277);
    fn = elt(env, 16); /* retimes */
    v277 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v277 = list3(stack[-5], stack[0], v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    fn = elt(env, 17); /* simp */
    v277 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    stack[-5] = v277;
    v277 = stack[-5];
    v277 = qcar(v277);
    if (!consp(v277)) goto v212;
    v277 = stack[-5];
    v277 = qcar(v277);
    v277 = qcar(v277);
    if (!(!consp(v277))) goto v338;

v212:
    v277 = stack[-5];
    v277 = qcdr(v277);
    if (!consp(v277)) goto v339;
    v277 = stack[-5];
    v277 = qcdr(v277);
    v277 = qcar(v277);
    if (!(!consp(v277))) goto v338;

v339:
    v277 = stack[-5];
    v333 = qcar(v277);
    v277 = qvalue(elt(env, 5)); /* nil */
    fn = elt(env, 18); /* prepf1 */
    v277 = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v333 = v277;
    v277 = v333;
    if (v277 == nil) goto v340;
    v277 = v333;
    fn = elt(env, 19); /* replus */
    v277 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v333 = v277;
    goto v260;

v260:
    v277 = stack[-3];
    fn = elt(env, 20); /* mkrootsq */
    stack[0] = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v277 = stack[-5];
    v333 = qcdr(v277);
    v277 = qvalue(elt(env, 5)); /* nil */
    fn = elt(env, 18); /* prepf1 */
    v277 = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v333 = v277;
    v277 = v333;
    if (v277 == nil) goto v254;
    v277 = v333;
    fn = elt(env, 19); /* replus */
    v277 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v333 = v277;
    goto v257;

v257:
    v277 = stack[-3];
    fn = elt(env, 20); /* mkrootsq */
    v277 = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    fn = elt(env, 9); /* invsq */
    v277 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    fn = elt(env, 10); /* multsq */
    v277 = (*qfn2(fn))(qenv(fn), stack[0], v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    stack[-5] = v277;
    goto v341;

v341:
    v277 = qvalue(elt(env, 7)); /* !*precise */
    if (v277 == nil) goto v342;
    v277 = stack[-3];
    v277 = Levenp(nil, v277);
    env = stack[-6];
    if (v277 == nil) goto v342;
    v277 = stack[-2];
    v333 = qcar(v277);
    v277 = (Lisp_Object)17; /* 1 */
    v277 = cons(v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    stack[0] = v277;
    goto v343;

v343:
    v333 = (Lisp_Object)17; /* 1 */
    v277 = stack[-1];
    v277 = qcar(v277);
    v277 = cons(v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    fn = elt(env, 10); /* multsq */
    v333 = (*qfn2(fn))(qenv(fn), stack[0], v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v277 = stack[-5];
    fn = elt(env, 10); /* multsq */
    v277 = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    stack[-5] = v277;
    v277 = stack[-4];
    if (v277 == nil) { Lisp_Object res = stack[-5]; popv(7); return onevalue(res); }
    stack[0] = stack[-5];
    v333 = (Lisp_Object)-15; /* -1 */
    v277 = (Lisp_Object)33; /* 2 */
    fn = elt(env, 20); /* mkrootsq */
    v277 = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    fn = elt(env, 10); /* multsq */
    v277 = (*qfn2(fn))(qenv(fn), stack[0], v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    stack[-5] = v277;
    { Lisp_Object res = stack[-5]; popv(7); return onevalue(res); }

v342:
    v277 = stack[-2];
    v333 = qcar(v277);
    v277 = (Lisp_Object)17; /* 1 */
    v277 = cons(v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    stack[0] = v277;
    goto v343;

v254:
    v277 = (Lisp_Object)1; /* 0 */
    v333 = v277;
    goto v257;

v340:
    v277 = (Lisp_Object)1; /* 0 */
    v333 = v277;
    goto v260;

v338:
    v277 = stack[-4];
    if (v277 == nil) goto v344;
    v277 = qvalue(elt(env, 5)); /* nil */
    stack[-4] = v277;
    v277 = stack[-5];
    v277 = qcar(v277);
    fn = elt(env, 14); /* negf */
    v333 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v277 = stack[-5];
    v277 = qcdr(v277);
    v277 = cons(v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    stack[-5] = v277;
    goto v344;

v344:
    v277 = stack[-5];
    v277 = qcar(v277);
    if (v277 == nil) goto v345;
    v333 = stack[-5];
    v277 = elt(env, 6); /* prepf */
    fn = elt(env, 21); /* sqform */
    v277 = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    v333 = v277;
    goto v283;

v283:
    v277 = stack[-3];
    fn = elt(env, 20); /* mkrootsq */
    v277 = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    stack[-5] = v277;
    goto v341;

v345:
    v277 = (Lisp_Object)1; /* 0 */
    v333 = v277;
    goto v283;

v336:
    v277 = stack[0];
    v333 = qcar(v277);
    v277 = stack[-3];
    fn = elt(env, 15); /* radf */
    v277 = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    stack[-2] = v277;
    goto v337;

v209:
    v277 = stack[0];
    v333 = qcdr(v277);
    v277 = stack[-3];
    fn = elt(env, 15); /* radf */
    v277 = (*qfn2(fn))(qenv(fn), v333, v277);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-6];
    stack[-1] = v277;
    goto v225;
/* error exit handlers */
v334:
    popv(7);
    return nil;
}



/* Code for reduce!-mod!-eig */

static Lisp_Object CC_reduceKmodKeig(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v351, v352, v353;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for reduce-mod-eig");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    v351 = v187;
    stack[-1] = v0;
/* end of prologue */
    stack[-2] = nil;
    stack[0] = v351;
    goto v3;

v3:
    v351 = stack[0];
    if (v351 == nil) goto v86;
    v352 = stack[-1];
    v351 = stack[0];
    v351 = qcar(v351);
    v351 = qcdr(v351);
    fn = elt(env, 2); /* reduce!-mod!-eigf */
    v351 = (*qfn2(fn))(qenv(fn), v352, v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    stack[-6] = v351;
    v351 = qcar(v351);
    if (v351 == nil) goto v112;
    v351 = stack[0];
    v351 = qcar(v351);
    v353 = qcar(v351);
    v352 = stack[-6];
    v351 = stack[-2];
    v351 = acons(v353, v352, v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    stack[-2] = v351;
    goto v112;

v112:
    v351 = stack[0];
    v351 = qcdr(v351);
    stack[0] = v351;
    goto v3;

v86:
    v351 = (Lisp_Object)17; /* 1 */
    stack[-6] = v351;
    v351 = stack[-2];
    stack[0] = v351;
    goto v192;

v192:
    v351 = stack[0];
    if (v351 == nil) goto v193;
    v352 = stack[-6];
    v351 = stack[0];
    v351 = qcar(v351);
    v351 = qcdr(v351);
    v351 = qcdr(v351);
    fn = elt(env, 3); /* lcm */
    v351 = (*qfn2(fn))(qenv(fn), v352, v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    stack[-6] = v351;
    v351 = stack[0];
    v351 = qcdr(v351);
    stack[0] = v351;
    goto v192;

v193:
    v351 = stack[-2];
    v351 = Lreverse(nil, v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    stack[-5] = v351;
    v351 = stack[-5];
    if (v351 == nil) goto v209;
    v351 = stack[-5];
    v351 = qcar(v351);
    stack[-1] = qcar(v351);
    v351 = stack[-5];
    v351 = qcar(v351);
    v351 = qcdr(v351);
    stack[0] = qcar(v351);
    v352 = stack[-6];
    v351 = stack[-5];
    v351 = qcar(v351);
    v351 = qcdr(v351);
    v351 = qcdr(v351);
    fn = elt(env, 4); /* quotf */
    v351 = (*qfn2(fn))(qenv(fn), v352, v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    fn = elt(env, 5); /* multf */
    v351 = (*qfn2(fn))(qenv(fn), stack[0], v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    v351 = cons(stack[-1], v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    v351 = ncons(v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    stack[-3] = v351;
    stack[-4] = v351;
    goto v137;

v137:
    v351 = stack[-5];
    v351 = qcdr(v351);
    stack[-5] = v351;
    v351 = stack[-5];
    if (v351 == nil) { Lisp_Object res = stack[-4]; popv(8); return onevalue(res); }
    stack[-2] = stack[-3];
    v351 = stack[-5];
    v351 = qcar(v351);
    stack[-1] = qcar(v351);
    v351 = stack[-5];
    v351 = qcar(v351);
    v351 = qcdr(v351);
    stack[0] = qcar(v351);
    v352 = stack[-6];
    v351 = stack[-5];
    v351 = qcar(v351);
    v351 = qcdr(v351);
    v351 = qcdr(v351);
    fn = elt(env, 4); /* quotf */
    v351 = (*qfn2(fn))(qenv(fn), v352, v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    fn = elt(env, 5); /* multf */
    v351 = (*qfn2(fn))(qenv(fn), stack[0], v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    v351 = cons(stack[-1], v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    v351 = ncons(v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    v351 = Lrplacd(nil, stack[-2], v351);
    nil = C_nil;
    if (exception_pending()) goto v354;
    env = stack[-7];
    v351 = stack[-3];
    v351 = qcdr(v351);
    stack[-3] = v351;
    goto v137;

v209:
    v351 = qvalue(elt(env, 1)); /* nil */
    { popv(8); return onevalue(v351); }
/* error exit handlers */
v354:
    popv(8);
    return nil;
}



/* Code for preptaylor!*2 */

static Lisp_Object CC_preptaylorH2(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v298, v270, v271;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for preptaylor*2");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v187;
    stack[-1] = v0;
/* end of prologue */
    v298 = stack[-1];
    v298 = qcdr(v298);
    fn = elt(env, 4); /* prepsq!* */
    v298 = (*qfn1(fn))(qenv(fn), v298);
    nil = C_nil;
    if (exception_pending()) goto v225;
    env = stack[-3];
    v271 = v298;
    v270 = (Lisp_Object)1; /* 0 */
    if (v271 == v270) goto v86;
    v271 = v298;
    v270 = elt(env, 2); /* quotient */
    if (!consp(v271)) goto v137;
    v271 = qcar(v271);
    if (!(v271 == v270)) goto v137;
    v270 = v298;
    v270 = qcdr(v270);
    v271 = qcar(v270);
    v270 = elt(env, 3); /* minus */
    if (!consp(v271)) goto v137;
    v271 = qcar(v271);
    if (!(v271 == v270)) goto v137;
    stack[-2] = elt(env, 3); /* minus */
    v271 = elt(env, 2); /* quotient */
    v270 = v298;
    v270 = qcdr(v270);
    v270 = qcar(v270);
    v270 = qcdr(v270);
    v270 = qcar(v270);
    v298 = qcdr(v298);
    v298 = qcdr(v298);
    v298 = qcar(v298);
    v298 = list3(v271, v270, v298);
    nil = C_nil;
    if (exception_pending()) goto v225;
    env = stack[-3];
    v298 = list2(stack[-2], v298);
    nil = C_nil;
    if (exception_pending()) goto v225;
    env = stack[-3];
    stack[-2] = v298;
    goto v207;

v207:
    v298 = stack[-1];
    v270 = qcar(v298);
    v298 = stack[0];
    fn = elt(env, 5); /* preptaycoeff */
    v298 = (*qfn2(fn))(qenv(fn), v270, v298);
    nil = C_nil;
    if (exception_pending()) goto v225;
    env = stack[-3];
    v298 = cons(stack[-2], v298);
    nil = C_nil;
    if (exception_pending()) goto v225;
    env = stack[-3];
    fn = elt(env, 6); /* retimes */
    v298 = (*qfn1(fn))(qenv(fn), v298);
    nil = C_nil;
    if (exception_pending()) goto v225;
    popv(4);
    return ncons(v298);

v137:
    stack[-2] = v298;
    goto v207;

v86:
    v298 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v298); }
/* error exit handlers */
v225:
    popv(4);
    return nil;
}



/* Code for conjgd */

static Lisp_Object CC_conjgd(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v266, v359;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for conjgd");
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
    v266 = stack[-1];
    if (!consp(v266)) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v266 = stack[-1];
    if (!consp(v266)) goto v160;
    v266 = stack[-1];
    v266 = qcar(v266);
    if (!(!consp(v266))) goto v235;

v160:
    v266 = stack[-1];
    v359 = qcar(v266);
    v266 = elt(env, 1); /* cmpxfn */
    v266 = get(v359, v266);
    env = stack[-3];
    v359 = v266;
    if (v266 == nil) goto v235;
    stack[-2] = v359;
    v266 = stack[-1];
    v266 = qcdr(v266);
    stack[0] = qcar(v266);
    v266 = stack[-1];
    v266 = qcdr(v266);
    v266 = qcdr(v266);
    if (is_number(v266)) goto v300;
    v266 = stack[-1];
    v266 = qcdr(v266);
    v266 = qcdr(v266);
    if (!consp(v266)) goto v190;
    v266 = stack[-1];
    v266 = qcdr(v266);
    v266 = qcdr(v266);
    v266 = qcar(v266);
    if (!(!consp(v266))) goto v209;

v190:
    v266 = stack[-1];
    v266 = qcdr(v266);
    v266 = qcdr(v266);
    v266 = qcar(v266);
    if (is_number(v266)) goto v209;
    v266 = stack[-1];
    v266 = qcdr(v266);
    v266 = qcdr(v266);
    fn = elt(env, 3); /* !:minus */
    v266 = (*qfn1(fn))(qenv(fn), v266);
    nil = C_nil;
    if (exception_pending()) goto v158;
    goto v141;

v141:
    {
        Lisp_Object v360 = stack[-2];
        Lisp_Object v157 = stack[0];
        popv(4);
        return Lapply2(nil, 3, v360, v157, v266);
    }

v209:
    v266 = stack[-1];
    v359 = qcar(v266);
    v266 = elt(env, 2); /* realtype */
    v359 = get(v359, v266);
    env = stack[-3];
    v266 = stack[-1];
    v266 = qcdr(v266);
    v266 = qcdr(v266);
    v266 = cons(v359, v266);
    nil = C_nil;
    if (exception_pending()) goto v158;
    env = stack[-3];
    fn = elt(env, 3); /* !:minus */
    v266 = (*qfn1(fn))(qenv(fn), v266);
    nil = C_nil;
    if (exception_pending()) goto v158;
    v266 = qcdr(v266);
    goto v141;

v300:
    v266 = stack[-1];
    v266 = qcdr(v266);
    v266 = qcdr(v266);
    v266 = negate(v266);
    nil = C_nil;
    if (exception_pending()) goto v158;
    goto v141;

v235:
    v266 = stack[-1];
    if (!consp(v266)) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v266 = stack[-1];
    v266 = qcar(v266);
    if (!consp(v266)) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v266 = stack[-1];
    v266 = qcar(v266);
    v359 = qcar(v266);
    v266 = (Lisp_Object)17; /* 1 */
    v266 = cons(v359, v266);
    nil = C_nil;
    if (exception_pending()) goto v158;
    env = stack[-3];
    stack[0] = ncons(v266);
    nil = C_nil;
    if (exception_pending()) goto v158;
    env = stack[-3];
    v266 = stack[-1];
    v266 = qcar(v266);
    v266 = qcdr(v266);
    v266 = CC_conjgd(env, v266);
    nil = C_nil;
    if (exception_pending()) goto v158;
    env = stack[-3];
    fn = elt(env, 4); /* multf */
    stack[0] = (*qfn2(fn))(qenv(fn), stack[0], v266);
    nil = C_nil;
    if (exception_pending()) goto v158;
    env = stack[-3];
    v266 = stack[-1];
    v266 = qcdr(v266);
    v266 = CC_conjgd(env, v266);
    nil = C_nil;
    if (exception_pending()) goto v158;
    env = stack[-3];
    {
        Lisp_Object v265 = stack[0];
        popv(4);
        fn = elt(env, 5); /* addf */
        return (*qfn2(fn))(qenv(fn), v265, v266);
    }
/* error exit handlers */
v158:
    popv(4);
    return nil;
}



/* Code for numpoly_red */

static Lisp_Object CC_numpoly_red(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v305, v221;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for numpoly_red");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v221 = v0;
/* end of prologue */
    v305 = v221;
    if (v305 == nil) goto v14;
    v305 = v221;
    if (is_number(v305)) goto v14;
    v305 = v221;
    v305 = qcdr(v305);
    return onevalue(v305);

v14:
    {
        fn = elt(env, 1); /* numpoly_null */
        return (*qfnn(fn))(qenv(fn), 0);
    }
}



/* Code for letscalar */

static Lisp_Object MS_CDECL CC_letscalar(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v187,
                         Lisp_Object v21, Lisp_Object v41,
                         Lisp_Object v14, Lisp_Object v50, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v399, v400, v401, v402, v403, v404;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 6, "letscalar");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for letscalar");
#endif
    if (stack >= stacklimit)
    {
        push6(v50,v14,v41,v21,v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop6(v0,v187,v21,v41,v14,v50);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v50;
    stack[-3] = v14;
    stack[-4] = v41;
    stack[-5] = v21;
    stack[-6] = v187;
    stack[-7] = v0;
/* end of prologue */
    v399 = stack[-4];
    if (!consp(v399)) goto v235;
    v399 = stack[-4];
    v399 = qcar(v399);
    if (symbolp(v399)) goto v148;
    v403 = elt(env, 1); /* "Syntax error:" */
    v402 = stack[-7];
    v401 = elt(env, 2); /* "invalid" */
    v400 = qvalue(elt(env, 3)); /* nil */
    v399 = elt(env, 4); /* hold */
    {
        popv(10);
        fn = elt(env, 31); /* msgpri */
        return (*qfnn(fn))(qenv(fn), 5, v403, v402, v401, v400, v399);
    }

v148:
    v399 = stack[-4];
    v400 = qcar(v399);
    v399 = elt(env, 5); /* df */
    if (v400 == v399) goto v192;
    v399 = stack[-4];
    v399 = qcar(v399);
    fn = elt(env, 32); /* getrtype */
    v399 = (*qfn1(fn))(qenv(fn), v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    if (v399 == nil) goto v217;
    v399 = stack[-4];
    fn = elt(env, 33); /* reval */
    v402 = (*qfn1(fn))(qenv(fn), v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v401 = stack[-6];
    v400 = stack[-5];
    v399 = stack[-3];
    {
        popv(10);
        fn = elt(env, 34); /* let2 */
        return (*qfnn(fn))(qenv(fn), 4, v402, v401, v400, v399);
    }

v217:
    v399 = stack[-4];
    v400 = qcar(v399);
    v399 = elt(env, 6); /* simpfn */
    v399 = get(v400, v399);
    env = stack[-9];
    if (!(v399 == nil)) goto v406;
    v399 = stack[-4];
    v400 = qcar(v399);
    v399 = elt(env, 7); /* "operator" */
    fn = elt(env, 35); /* redmsg */
    v399 = (*qfn2(fn))(qenv(fn), v400, v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v399 = stack[-4];
    v399 = qcar(v399);
    fn = elt(env, 36); /* mkop */
    v399 = (*qfn1(fn))(qenv(fn), v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v403 = stack[-7];
    v402 = stack[-6];
    v401 = stack[-5];
    v400 = stack[-3];
    v399 = stack[-2];
    {
        popv(10);
        fn = elt(env, 37); /* let3 */
        return (*qfnn(fn))(qenv(fn), 5, v403, v402, v401, v400, v399);
    }

v406:
    v400 = stack[-4];
    v399 = elt(env, 23); /* expt */
    if (!consp(v400)) goto v97;
    v400 = qcar(v400);
    if (!(v400 == v399)) goto v97;
    v399 = stack[-4];
    v399 = qcdr(v399);
    v399 = qcdr(v399);
    v400 = qcar(v399);
    v399 = qvalue(elt(env, 24)); /* frlis!* */
    v399 = Lmemq(nil, v400, v399);
    if (v399 == nil) goto v97;
    stack[-8] = stack[-7];
    stack[-1] = stack[-6];
    stack[0] = stack[-5];
    v401 = stack[-4];
    v400 = (Lisp_Object)17; /* 1 */
    v399 = (Lisp_Object)17; /* 1 */
    v399 = acons(v401, v400, v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v400 = ncons(v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v399 = (Lisp_Object)17; /* 1 */
    v401 = cons(v400, v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v400 = stack[-3];
    v399 = stack[-2];
    fn = elt(env, 38); /* letexprn */
    v399 = (*qfnn(fn))(qenv(fn), 6, stack[-8], stack[-1], stack[0], v401, v400, v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    goto v407;

v407:
    v399 = qvalue(elt(env, 21)); /* t */
    stack[0] = qvalue(elt(env, 28)); /* !*precise */
    qvalue(elt(env, 28)) = v399; /* !*precise */
    v399 = stack[-4];
    fn = elt(env, 39); /* simp0 */
    v399 = (*qfn1(fn))(qenv(fn), v399);
    nil = C_nil;
    if (exception_pending()) goto v408;
    env = stack[-9];
    stack[-4] = v399;
    qvalue(elt(env, 28)) = stack[0]; /* !*precise */
    v399 = stack[-4];
    v399 = qcar(v399);
    if (!consp(v399)) goto v409;
    v399 = stack[-4];
    v399 = qcar(v399);
    v399 = qcar(v399);
    if (!consp(v399)) goto v409;
    v404 = stack[-7];
    v403 = stack[-6];
    v402 = stack[-5];
    v401 = stack[-4];
    v400 = stack[-3];
    v399 = stack[-2];
    {
        popv(10);
        fn = elt(env, 38); /* letexprn */
        return (*qfnn(fn))(qenv(fn), 6, v404, v403, v402, v401, v400, v399);
    }

v409:
    v403 = elt(env, 29); /* "Substitution for" */
    v402 = stack[-7];
    v401 = elt(env, 30); /* "not allowed" */
    v400 = qvalue(elt(env, 3)); /* nil */
    v399 = qvalue(elt(env, 21)); /* t */
    {
        popv(10);
        fn = elt(env, 31); /* msgpri */
        return (*qfnn(fn))(qenv(fn), 5, v403, v402, v401, v400, v399);
    }

v97:
    v400 = stack[-4];
    v399 = elt(env, 25); /* sqrt */
    if (!consp(v400)) goto v407;
    v400 = qcar(v400);
    if (!(v400 == v399)) goto v407;
    v399 = qvalue(elt(env, 21)); /* t */
    qvalue(elt(env, 26)) = v399; /* !*sqrtrulep */
    v401 = elt(env, 23); /* expt */
    v399 = stack[-4];
    v399 = qcdr(v399);
    v400 = qcar(v399);
    v399 = elt(env, 27); /* (quotient 1 2) */
    v402 = list3(v401, v400, v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v401 = stack[-6];
    v400 = stack[-5];
    v399 = stack[-3];
    fn = elt(env, 34); /* let2 */
    v399 = (*qfnn(fn))(qenv(fn), 4, v402, v401, v400, v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    goto v407;

v192:
    v403 = stack[-7];
    v402 = stack[-6];
    v401 = stack[-5];
    v400 = stack[-4];
    v399 = stack[-3];
    fn = elt(env, 40); /* letdf */
    v399 = (*qfnn(fn))(qenv(fn), 5, v403, v402, v401, v400, v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    if (v399 == nil) goto v406;
    v399 = qvalue(elt(env, 3)); /* nil */
    { popv(10); return onevalue(v399); }

v235:
    v399 = stack[-3];
    if (!(v399 == nil)) goto v406;
    v399 = stack[-5];
    if (!(v399 == nil)) goto v406;
    v400 = stack[-4];
    v399 = elt(env, 8); /* avalue */
    v399 = Lremprop(nil, v400, v399);
    env = stack[-9];
    v400 = stack[-4];
    v399 = elt(env, 9); /* rtype */
    v399 = Lremprop(nil, v400, v399);
    env = stack[-9];
    v399 = stack[-4];
    v400 = ncons(v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v399 = elt(env, 10); /* antisymmetric */
    v399 = Lremflag(nil, v400, v399);
    env = stack[-9];
    v400 = stack[-4];
    v399 = elt(env, 11); /* infix */
    v399 = Lremprop(nil, v400, v399);
    env = stack[-9];
    v400 = stack[-4];
    v399 = elt(env, 12); /* kvalue */
    v399 = Lremprop(nil, v400, v399);
    env = stack[-9];
    v399 = stack[-4];
    v400 = ncons(v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v399 = elt(env, 13); /* linear */
    v399 = Lremflag(nil, v400, v399);
    env = stack[-9];
    v399 = stack[-4];
    v400 = ncons(v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v399 = elt(env, 14); /* noncom */
    v399 = Lremflag(nil, v400, v399);
    env = stack[-9];
    v400 = stack[-4];
    v399 = elt(env, 15); /* op */
    v399 = Lremprop(nil, v400, v399);
    env = stack[-9];
    v400 = stack[-4];
    v399 = elt(env, 16); /* opmtch */
    v399 = Lremprop(nil, v400, v399);
    env = stack[-9];
    v400 = stack[-4];
    v399 = elt(env, 6); /* simpfn */
    v399 = Lremprop(nil, v400, v399);
    env = stack[-9];
    v399 = stack[-4];
    v400 = ncons(v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v399 = elt(env, 17); /* symmetric */
    v399 = Lremflag(nil, v400, v399);
    env = stack[-9];
    v400 = stack[-4];
    v399 = qvalue(elt(env, 18)); /* wtl!* */
    fn = elt(env, 41); /* delasc */
    v399 = (*qfn2(fn))(qenv(fn), v400, v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    qvalue(elt(env, 18)) = v399; /* wtl!* */
    v400 = stack[-4];
    v399 = elt(env, 19); /* opfn */
    v399 = Lflagp(nil, v400, v399);
    env = stack[-9];
    if (v399 == nil) goto v167;
    v399 = stack[-4];
    v400 = ncons(v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v399 = elt(env, 19); /* opfn */
    v399 = Lremflag(nil, v400, v399);
    env = stack[-9];
    v399 = stack[-4];
    v399 = Lremd(nil, v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    goto v167;

v167:
    v400 = qvalue(elt(env, 20)); /* !*sqvar!* */
    v399 = qvalue(elt(env, 3)); /* nil */
    v399 = Lrplaca(nil, v400, v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    v399 = qvalue(elt(env, 21)); /* t */
    v399 = ncons(v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    qvalue(elt(env, 20)) = v399; /* !*sqvar!* */
    v399 = qvalue(elt(env, 3)); /* nil */
    v399 = ncons(v399);
    nil = C_nil;
    if (exception_pending()) goto v405;
    env = stack[-9];
    qvalue(elt(env, 22)) = v399; /* alglist!* */
    v399 = qvalue(elt(env, 3)); /* nil */
    { popv(10); return onevalue(v399); }
/* error exit handlers */
v408:
    env = stack[-9];
    qvalue(elt(env, 28)) = stack[0]; /* !*precise */
    popv(10);
    return nil;
v405:
    popv(10);
    return nil;
}



/* Code for make!-image!-mod!-p */

static Lisp_Object CC_makeKimageKmodKp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v301, v300;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for make-image-mod-p");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v187;
    stack[-1] = v0;
/* end of prologue */
    v300 = stack[-1];
    v301 = stack[0];
    fn = elt(env, 3); /* degree!-in!-variable */
    v301 = (*qfn2(fn))(qenv(fn), v300, v301);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-3];
    stack[-2] = v301;
    v300 = stack[-1];
    v301 = stack[0];
    fn = elt(env, 4); /* make!-univariate!-image!-mod!-p */
    v301 = (*qfn2(fn))(qenv(fn), v300, v301);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-3];
    stack[-1] = v301;
    v300 = stack[-1];
    v301 = stack[0];
    fn = elt(env, 3); /* degree!-in!-variable */
    v300 = (*qfn2(fn))(qenv(fn), v300, v301);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-3];
    v301 = stack[-2];
    if (equal(v300, v301)) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v301 = qvalue(elt(env, 1)); /* t */
    qvalue(elt(env, 2)) = v301; /* unlucky!-case */
    { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
/* error exit handlers */
v113:
    popv(4);
    return nil;
}



/* Code for subeval1 */

static Lisp_Object CC_subeval1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v269, v331, v410;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for subeval1");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v187;
    stack[-1] = v0;
/* end of prologue */

v86:
    v269 = stack[-1];
    if (v269 == nil) goto v19;
    v269 = stack[-1];
    v269 = qcar(v269);
    v331 = qcar(v269);
    v269 = stack[-1];
    v269 = qcar(v269);
    v269 = qcdr(v269);
    if (!(equal(v331, v269))) goto v19;
    v269 = stack[-1];
    v269 = qcdr(v269);
    stack[-1] = v269;
    goto v86;

v19:
    v269 = stack[-1];
    if (v269 == nil) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v269 = stack[0];
    fn = elt(env, 8); /* getrtype */
    v269 = (*qfn1(fn))(qenv(fn), v269);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    v410 = v269;
    if (v269 == nil) goto v220;
    v331 = v410;
    v269 = elt(env, 2); /* subfn */
    v269 = get(v331, v269);
    env = stack[-2];
    v331 = v269;
    if (v269 == nil) goto v151;
    v410 = v331;
    v331 = stack[-1];
    v269 = stack[0];
        popv(3);
        return Lapply2(nil, 3, v410, v331, v269);

v151:
    v269 = elt(env, 3); /* "No substitution defined for type" */
    v331 = v410;
    v269 = list2(v269, v331);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    v331 = v269;
    v269 = v331;
    qvalue(elt(env, 4)) = v269; /* errmsg!* */
    v269 = qvalue(elt(env, 5)); /* !*protfg */
    if (!(v269 == nil)) goto v138;
    v269 = v331;
    fn = elt(env, 9); /* lprie */
    v269 = (*qfn1(fn))(qenv(fn), v269);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    goto v138;

v138:
    v269 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    goto v220;

v220:
    v269 = stack[0];
    fn = elt(env, 10); /* simp */
    v331 = (*qfn1(fn))(qenv(fn), v269);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    v269 = stack[-1];
    fn = elt(env, 11); /* subsq */
    v269 = (*qfn2(fn))(qenv(fn), v331, v269);
    nil = C_nil;
    if (exception_pending()) goto v130;
    env = stack[-2];
    stack[-1] = v269;
    v269 = qvalue(elt(env, 6)); /* t */
    stack[0] = qvalue(elt(env, 7)); /* !*sub2 */
    qvalue(elt(env, 7)) = v269; /* !*sub2 */
    v269 = stack[-1];
    fn = elt(env, 12); /* subs2 */
    v269 = (*qfn1(fn))(qenv(fn), v269);
    nil = C_nil;
    if (exception_pending()) goto v349;
    env = stack[-2];
    stack[-1] = v269;
    qvalue(elt(env, 7)) = stack[0]; /* !*sub2 */
    v269 = stack[-1];
    {
        popv(3);
        fn = elt(env, 13); /* mk!*sq */
        return (*qfn1(fn))(qenv(fn), v269);
    }
/* error exit handlers */
v349:
    env = stack[-2];
    qvalue(elt(env, 7)) = stack[0]; /* !*sub2 */
    popv(3);
    return nil;
v130:
    popv(3);
    return nil;
}



/* Code for red!=recover */

static Lisp_Object CC_redMrecover(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v200, v198;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for red=recover");
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
/* copy arguments values to proper place */
    stack[-3] = v0;
/* end of prologue */
    stack[-4] = nil;
    stack[-2] = nil;
    v200 = stack[-3];
    fn = elt(env, 2); /* bas_rep */
    v200 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-5];
    stack[-1] = v200;
    goto v86;

v86:
    v200 = stack[-1];
    if (v200 == nil) goto v287;
    v200 = stack[-1];
    v200 = qcar(v200);
    stack[0] = v200;
    v200 = stack[0];
    v200 = qcar(v200);
    fn = elt(env, 3); /* mo_comp */
    v198 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-5];
    v200 = (Lisp_Object)1; /* 0 */
    v200 = (Lisp_Object)lessp2(v198, v200);
    nil = C_nil;
    if (exception_pending()) goto v137;
    v200 = v200 ? lisp_true : nil;
    env = stack[-5];
    if (v200 == nil) goto v127;
    v198 = stack[0];
    v200 = stack[-4];
    v200 = cons(v198, v200);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-5];
    stack[-4] = v200;
    goto v228;

v228:
    v200 = stack[-1];
    v200 = qcdr(v200);
    stack[-1] = v200;
    goto v86;

v127:
    v198 = stack[0];
    v200 = stack[-2];
    v200 = cons(v198, v200);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-5];
    stack[-2] = v200;
    goto v228;

v287:
    v200 = stack[-3];
    fn = elt(env, 4); /* bas_nr */
    stack[0] = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-5];
    v200 = stack[-4];
    fn = elt(env, 5); /* red!=hide */
    v200 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-5];
    v200 = Lnreverse(nil, v200);
    env = stack[-5];
    fn = elt(env, 6); /* dp_neworder */
    v198 = (*qfn1(fn))(qenv(fn), v200);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-5];
    v200 = stack[-2];
    v200 = Lnreverse(nil, v200);
    env = stack[-5];
    {
        Lisp_Object v138 = stack[0];
        popv(6);
        fn = elt(env, 7); /* bas_make1 */
        return (*qfnn(fn))(qenv(fn), 3, v138, v198, v200);
    }
/* error exit handlers */
v137:
    popv(6);
    return nil;
}



/* Code for formclear */

static Lisp_Object MS_CDECL CC_formclear(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v187,
                         Lisp_Object v21, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v196, v197, v139;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "formclear");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for formclear");
#endif
    if (stack >= stacklimit)
    {
        push3(v21,v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v187,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v196 = v21;
    v197 = v187;
    v139 = v0;
/* end of prologue */
    stack[0] = elt(env, 1); /* clear */
    v139 = qcdr(v139);
    fn = elt(env, 2); /* formclear1 */
    v196 = (*qfnn(fn))(qenv(fn), 3, v139, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v195;
    {
        Lisp_Object v194 = stack[0];
        popv(1);
        return list2(v194, v196);
    }
/* error exit handlers */
v195:
    popv(1);
    return nil;
}



/* Code for general!-negate!-term */

static Lisp_Object CC_generalKnegateKterm(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v229, v230;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for general-negate-term");
#endif
    if (stack >= stacklimit)
    {
        push(v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v230 = v0;
/* end of prologue */
    v229 = v230;
    stack[0] = qcar(v229);
    v229 = v230;
    v229 = qcdr(v229);
    fn = elt(env, 1); /* general!-minus!-mod!-p */
    v229 = (*qfn1(fn))(qenv(fn), v229);
    nil = C_nil;
    if (exception_pending()) goto v221;
    {
        Lisp_Object v356 = stack[0];
        popv(1);
        return cons(v356, v229);
    }
/* error exit handlers */
v221:
    popv(1);
    return nil;
}



/* Code for glsoleig */

static Lisp_Object MS_CDECL CC_glsoleig(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v187,
                         Lisp_Object v21, Lisp_Object v41, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v411, v412, v130;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "glsoleig");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for glsoleig");
#endif
    if (stack >= stacklimit)
    {
        push4(v41,v21,v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0,v187,v21,v41);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-1] = v41;
    stack[-2] = v21;
    stack[-3] = v187;
    stack[-4] = v0;
/* end of prologue */
    v130 = nil;
    stack[0] = nil;
    v411 = stack[-2];
    v411 = qcar(v411);
    v411 = qcar(v411);
    stack[-5] = v411;
    goto v3;

v3:
    v411 = stack[-5];
    if (v411 == nil) goto v221;
    v411 = stack[-5];
    v412 = qcar(v411);
    v411 = stack[-4];
    if (equal(v412, v411)) goto v129;
    v411 = stack[-5];
    v412 = qcar(v411);
    v411 = stack[-3];
    v411 = Lmember(nil, v412, v411);
    if (v411 == nil) goto v203;
    v411 = stack[-5];
    v411 = qcdr(v411);
    stack[-5] = v411;
    v411 = v130;
    if (v411 == nil) goto v3;
    v411 = stack[0];
    v411 = (v411 == nil ? lisp_true : nil);
    stack[0] = v411;
    goto v3;

v203:
    v411 = v130;
    if (v411 == nil) goto v348;
    v411 = qvalue(elt(env, 1)); /* nil */
    { popv(7); return onevalue(v411); }

v348:
    v411 = stack[-5];
    v411 = qcar(v411);
    v411 = ncons(v411);
    nil = C_nil;
    if (exception_pending()) goto v216;
    env = stack[-6];
    v130 = v411;
    v411 = stack[-5];
    v411 = qcdr(v411);
    stack[-5] = v411;
    goto v3;

v129:
    v411 = qvalue(elt(env, 1)); /* nil */
    { popv(7); return onevalue(v411); }

v221:
    v411 = v130;
    v411 = qcar(v411);
    if (v411 == nil) goto v160;
    v411 = v130;
    v412 = qcar(v411);
    v411 = stack[-1];
    v411 = Lassoc(nil, v412, v411);
    stack[-1] = qcdr(v411);
    v411 = stack[0];
    if (v411 == nil) goto v191;
    v411 = stack[-2];
    v411 = qcar(v411);
    v411 = qcdr(v411);
    fn = elt(env, 2); /* negf */
    v411 = (*qfn1(fn))(qenv(fn), v411);
    nil = C_nil;
    if (exception_pending()) goto v216;
    env = stack[-6];
    goto v294;

v294:
    {
        Lisp_Object v135 = stack[-1];
        popv(7);
        fn = elt(env, 3); /* multf */
        return (*qfn2(fn))(qenv(fn), v135, v411);
    }

v191:
    v411 = stack[-2];
    v411 = qcar(v411);
    v411 = qcdr(v411);
    goto v294;

v160:
    v411 = stack[-2];
    v411 = qcar(v411);
    v411 = qcdr(v411);
    { popv(7); return onevalue(v411); }
/* error exit handlers */
v216:
    popv(7);
    return nil;
}



/* Code for gd_newtype */

static Lisp_Object CC_gd_newtype(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v129, v153, v299, v152;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gd_newtype");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v299 = v187;
    v152 = v0;
/* end of prologue */
    v153 = v152;
    v129 = v299;
    if (v153 == v129) return onevalue(v152);
    v153 = v152;
    v129 = elt(env, 1); /* gec */
    if (v153 == v129) goto v194;
    v153 = v152;
    v129 = elt(env, 2); /* geg */
    if (v153 == v129) return onevalue(v299);
    v153 = v299;
    v129 = elt(env, 1); /* gec */
    if (v153 == v129) goto v154;
    v129 = elt(env, 4); /* ger */
    return onevalue(v129);

v154:
    v129 = qvalue(elt(env, 3)); /* nil */
    return onevalue(v129);

v194:
    v153 = v299;
    v129 = elt(env, 2); /* geg */
    if (v153 == v129) goto v149;
    v129 = qvalue(elt(env, 3)); /* nil */
    return onevalue(v129);

v149:
    v129 = elt(env, 1); /* gec */
    return onevalue(v129);
}



/* Code for sqfrf */

static Lisp_Object CC_sqfrf(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v442, v443, v444, v445;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for sqfrf");
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
    push(nil);
/* copy arguments values to proper place */
    stack[-9] = v0;
/* end of prologue */
    stack[-8] = qvalue(elt(env, 1)); /* !*gcd */
    qvalue(elt(env, 1)) = nil; /* !*gcd */
    stack[-7] = nil;
    stack[-2] = nil;
    stack[-5] = qvalue(elt(env, 2)); /* !*msg */
    qvalue(elt(env, 2)) = nil; /* !*msg */
    v442 = qvalue(elt(env, 3)); /* t */
    qvalue(elt(env, 1)) = v442; /* !*gcd */
    v442 = qvalue(elt(env, 4)); /* !*rounded */
    stack[-1] = v442;
    if (v442 == nil) goto v356;
    v442 = elt(env, 5); /* rational */
    v442 = ncons(v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    fn = elt(env, 18); /* on */
    v442 = (*qfn1(fn))(qenv(fn), v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v443 = stack[-9];
    v442 = (Lisp_Object)17; /* 1 */
    v442 = cons(v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    fn = elt(env, 19); /* resimp */
    v442 = (*qfn1(fn))(qenv(fn), v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = qcar(v442);
    stack[-9] = v442;
    goto v356;

v356:
    v442 = (Lisp_Object)17; /* 1 */
    stack[-10] = v442;
    v442 = stack[-9];
    v442 = qcar(v442);
    v442 = qcar(v442);
    v442 = qcar(v442);
    stack[-3] = v442;
    v442 = qvalue(elt(env, 3)); /* t */
    stack[0] = qvalue(elt(env, 6)); /* !*ezgcd */
    qvalue(elt(env, 6)) = v442; /* !*ezgcd */
    stack[-4] = stack[-9];
    v443 = stack[-9];
    v442 = stack[-3];
    fn = elt(env, 20); /* diff */
    v442 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v447;
    env = stack[-11];
    fn = elt(env, 21); /* gcdf */
    v442 = (*qfn2(fn))(qenv(fn), stack[-4], v442);
    nil = C_nil;
    if (exception_pending()) goto v447;
    env = stack[-11];
    stack[-6] = v442;
    qvalue(elt(env, 6)) = stack[0]; /* !*ezgcd */
    v443 = stack[-9];
    v442 = stack[-6];
    fn = elt(env, 22); /* quotf */
    v442 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[-9] = v442;
    v443 = qvalue(elt(env, 7)); /* dmode!* */
    v442 = elt(env, 8); /* field */
    v442 = Lflagp(nil, v443, v442);
    env = stack[-11];
    if (v442 == nil) goto v131;
    v442 = stack[-9];
    fn = elt(env, 23); /* lnc */
    v443 = (*qfn1(fn))(qenv(fn), v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[0] = v443;
    v442 = (Lisp_Object)17; /* 1 */
    if (v443 == v442) goto v131;
    v442 = stack[0];
    fn = elt(env, 24); /* !:recip */
    v443 = (*qfn1(fn))(qenv(fn), v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = stack[-9];
    fn = elt(env, 25); /* multd */
    v442 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[-9] = v442;
    v443 = stack[0];
    v442 = stack[-6];
    fn = elt(env, 25); /* multd */
    v442 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[-6] = v442;
    goto v131;

v131:
    v443 = stack[-6];
    v442 = stack[-3];
    fn = elt(env, 26); /* degr */
    v443 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = (Lisp_Object)1; /* 0 */
    v442 = (Lisp_Object)greaterp2(v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    v442 = v442 ? lisp_true : nil;
    env = stack[-11];
    if (v442 == nil) goto v411;
    v443 = stack[-6];
    v442 = stack[-9];
    fn = elt(env, 21); /* gcdf */
    v442 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[0] = v442;
    v443 = stack[-9];
    v442 = stack[0];
    if (equal(v443, v442)) goto v263;
    v443 = stack[-9];
    v442 = stack[0];
    fn = elt(env, 22); /* quotf */
    v444 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v443 = stack[-10];
    v442 = stack[-2];
    v442 = acons(v444, v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[-2] = v442;
    goto v263;

v263:
    v443 = stack[-6];
    v442 = stack[0];
    fn = elt(env, 22); /* quotf */
    v442 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[-6] = v442;
    v442 = stack[0];
    stack[-9] = v442;
    v442 = stack[-10];
    v442 = add1(v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[-10] = v442;
    goto v131;

v411:
    v442 = stack[-1];
    if (v442 == nil) goto v382;
    v442 = elt(env, 10); /* rounded */
    v442 = ncons(v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    fn = elt(env, 18); /* on */
    v442 = (*qfn1(fn))(qenv(fn), v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v443 = stack[-9];
    v442 = (Lisp_Object)17; /* 1 */
    v442 = cons(v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    fn = elt(env, 19); /* resimp */
    v442 = (*qfn1(fn))(qenv(fn), v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = qcar(v442);
    stack[-9] = v442;
    v442 = stack[-2];
    stack[-4] = v442;
    v442 = stack[-4];
    if (v442 == nil) goto v256;
    v442 = stack[-4];
    v442 = qcar(v442);
    stack[0] = v442;
    v442 = stack[0];
    v443 = qcar(v442);
    v442 = (Lisp_Object)17; /* 1 */
    v442 = cons(v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    fn = elt(env, 19); /* resimp */
    v442 = (*qfn1(fn))(qenv(fn), v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v443 = qcar(v442);
    v442 = stack[0];
    v442 = qcdr(v442);
    v442 = cons(v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = ncons(v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[-2] = v442;
    stack[-3] = v442;
    goto v327;

v327:
    v442 = stack[-4];
    v442 = qcdr(v442);
    stack[-4] = v442;
    v442 = stack[-4];
    if (v442 == nil) goto v386;
    stack[-1] = stack[-2];
    v442 = stack[-4];
    v442 = qcar(v442);
    stack[0] = v442;
    v442 = stack[0];
    v443 = qcar(v442);
    v442 = (Lisp_Object)17; /* 1 */
    v442 = cons(v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    fn = elt(env, 19); /* resimp */
    v442 = (*qfn1(fn))(qenv(fn), v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v443 = qcar(v442);
    v442 = stack[0];
    v442 = qcdr(v442);
    v442 = cons(v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = ncons(v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = Lrplacd(nil, stack[-1], v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = stack[-2];
    v442 = qcdr(v442);
    stack[-2] = v442;
    goto v327;

v386:
    v442 = stack[-3];
    goto v448;

v448:
    stack[-2] = v442;
    goto v382;

v382:
    v443 = stack[-6];
    v442 = (Lisp_Object)17; /* 1 */
    if (v443 == v442) goto v449;
    v443 = stack[-6];
    v442 = stack[-7];
    v442 = Lassoc(nil, v443, v442);
    if (v442 == nil) goto v449;
    v442 = (Lisp_Object)17; /* 1 */
    stack[-6] = v442;
    goto v449;

v449:
    v443 = stack[-6];
    v442 = (Lisp_Object)17; /* 1 */
    if (v443 == v442) goto v450;
    v443 = stack[-10];
    v442 = (Lisp_Object)17; /* 1 */
    if (v443 == v442) goto v451;
    v443 = (Lisp_Object)17; /* 1 */
    v442 = stack[-2];
    fn = elt(env, 27); /* rassoc */
    v442 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[0] = v442;
    if (v442 == nil) goto v376;
    stack[-1] = stack[0];
    v443 = stack[-6];
    v442 = stack[0];
    v442 = qcar(v442);
    fn = elt(env, 28); /* multf */
    v442 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = Lrplaca(nil, stack[-1], v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    goto v450;

v450:
    v444 = stack[-9];
    v443 = stack[-10];
    v442 = stack[-2];
    v442 = acons(v444, v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    qvalue(elt(env, 2)) = stack[-5]; /* !*msg */
    qvalue(elt(env, 1)) = stack[-8]; /* !*gcd */
    { popv(12); return onevalue(v442); }

v376:
    v442 = stack[-2];
    if (!(v442 == nil)) goto v452;
    v443 = stack[-6];
    v442 = stack[-10];
    fn = elt(env, 29); /* rootxf */
    v443 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[0] = v443;
    v442 = elt(env, 11); /* failed */
    if (v443 == v442) goto v452;
    v443 = stack[0];
    v442 = stack[-9];
    fn = elt(env, 28); /* multf */
    v442 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[-9] = v442;
    goto v450;

v452:
    v442 = stack[-6];
    if (!consp(v442)) goto v89;
    v442 = stack[-6];
    v442 = qcar(v442);
    if (!consp(v442)) goto v89;
    stack[0] = stack[-2];
    v443 = stack[-6];
    v442 = (Lisp_Object)17; /* 1 */
    v442 = cons(v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = ncons(v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = Lnconc(nil, stack[0], v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[-2] = v442;
    goto v450;

v89:
    v442 = qvalue(elt(env, 3)); /* t */
    fn = elt(env, 30); /* terpri!* */
    v442 = (*qfn1(fn))(qenv(fn), v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = elt(env, 12); /* "CATASTROPHIC ERROR *****" */
    fn = elt(env, 31); /* lprie */
    v442 = (*qfn1(fn))(qenv(fn), v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v445 = elt(env, 13); /* "sqfrf failure" */
    v444 = stack[-9];
    v443 = stack[-10];
    v442 = stack[-2];
    v442 = list4(v445, v444, v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    fn = elt(env, 32); /* printty */
    v442 = (*qfn1(fn))(qenv(fn), v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v443 = elt(env, 14); /* " " */
    v442 = qvalue(elt(env, 9)); /* nil */
    fn = elt(env, 33); /* lpriw */
    v442 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    v442 = elt(env, 15); /* "Please report output and input listing on the sourceforge bug tracker" 
*/
    v443 = v442;
    v442 = v443;
    qvalue(elt(env, 16)) = v442; /* errmsg!* */
    v442 = qvalue(elt(env, 17)); /* !*protfg */
    if (!(v442 == nil)) goto v399;
    v442 = v443;
    fn = elt(env, 31); /* lprie */
    v442 = (*qfn1(fn))(qenv(fn), v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    goto v399;

v399:
    v442 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    goto v450;

v451:
    v443 = stack[-6];
    v442 = stack[-9];
    fn = elt(env, 28); /* multf */
    v442 = (*qfn2(fn))(qenv(fn), v443, v442);
    nil = C_nil;
    if (exception_pending()) goto v446;
    env = stack[-11];
    stack[-9] = v442;
    goto v450;

v256:
    v442 = qvalue(elt(env, 9)); /* nil */
    goto v448;
/* error exit handlers */
v447:
    env = stack[-11];
    qvalue(elt(env, 6)) = stack[0]; /* !*ezgcd */
    qvalue(elt(env, 2)) = stack[-5]; /* !*msg */
    qvalue(elt(env, 1)) = stack[-8]; /* !*gcd */
    popv(12);
    return nil;
v446:
    env = stack[-11];
    qvalue(elt(env, 2)) = stack[-5]; /* !*msg */
    qvalue(elt(env, 1)) = stack[-8]; /* !*gcd */
    popv(12);
    return nil;
}



/* Code for acfsf_0mk2 */

static Lisp_Object CC_acfsf_0mk2(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v230, v305, v221;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for acfsf_0mk2");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v230 = v187;
    v305 = v0;
/* end of prologue */
    v221 = qvalue(elt(env, 1)); /* nil */
    return list3(v305, v230, v221);
}



/* Code for tidysqrt */

static Lisp_Object CC_tidysqrt(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v294, v141;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for tidysqrt");
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
    v294 = stack[0];
    v294 = qcar(v294);
    fn = elt(env, 2); /* tidysqrtf */
    v294 = (*qfn1(fn))(qenv(fn), v294);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-2];
    stack[-1] = v294;
    v294 = stack[-1];
    if (v294 == nil) goto v305;
    v294 = stack[0];
    v294 = qcdr(v294);
    fn = elt(env, 2); /* tidysqrtf */
    v294 = (*qfn1(fn))(qenv(fn), v294);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-2];
    stack[0] = stack[-1];
    fn = elt(env, 3); /* invsq */
    v294 = (*qfn1(fn))(qenv(fn), v294);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-2];
    {
        Lisp_Object v148 = stack[0];
        popv(3);
        fn = elt(env, 4); /* multsq */
        return (*qfn2(fn))(qenv(fn), v148, v294);
    }

v305:
    v141 = qvalue(elt(env, 1)); /* nil */
    v294 = (Lisp_Object)17; /* 1 */
    popv(3);
    return cons(v141, v294);
/* error exit handlers */
v289:
    popv(3);
    return nil;
}



/* Code for xpwrlcmp */

static Lisp_Object CC_xpwrlcmp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v187)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v272, v207;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for xpwrlcmp");
#endif
    if (stack >= stacklimit)
    {
        push2(v187,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v187);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v187;
    stack[-1] = v0;
/* end of prologue */
    v272 = stack[-1];
    if (!consp(v272)) goto v50;
    v207 = stack[-1];
    v272 = elt(env, 1); /* expt */
    if (!consp(v207)) goto v289;
    v207 = qcar(v207);
    if (!(v207 == v272)) goto v289;
    v272 = stack[-1];
    v272 = qcdr(v272);
    v207 = qcar(v272);
    v272 = stack[0];
    if (!(equal(v207, v272))) goto v289;
    v272 = stack[-1];
    v272 = qcdr(v272);
    v272 = qcdr(v272);
    v272 = qcar(v272);
    {
        popv(4);
        fn = elt(env, 3); /* getdenom */
        return (*qfn1(fn))(qenv(fn), v272);
    }

v289:
    v207 = stack[-1];
    v272 = elt(env, 2); /* sqrt */
    if (!consp(v207)) goto v299;
    v207 = qcar(v207);
    if (!(v207 == v272)) goto v299;
    v272 = stack[-1];
    v272 = qcdr(v272);
    v207 = qcar(v272);
    v272 = stack[0];
    {
        popv(4);
        fn = elt(env, 4); /* getdenomx */
        return (*qfn2(fn))(qenv(fn), v207, v272);
    }

v299:
    v272 = stack[-1];
    v207 = qcar(v272);
    v272 = stack[0];
    stack[-2] = CC_xpwrlcmp(env, v207, v272);
    nil = C_nil;
    if (exception_pending()) goto v219;
    env = stack[-3];
    v272 = stack[-1];
    v207 = qcdr(v272);
    v272 = stack[0];
    v272 = CC_xpwrlcmp(env, v207, v272);
    nil = C_nil;
    if (exception_pending()) goto v219;
    env = stack[-3];
    {
        Lisp_Object v220 = stack[-2];
        popv(4);
        fn = elt(env, 5); /* lcm */
        return (*qfn2(fn))(qenv(fn), v220, v272);
    }

v50:
    v272 = (Lisp_Object)17; /* 1 */
    { popv(4); return onevalue(v272); }
/* error exit handlers */
v219:
    popv(4);
    return nil;
}



setup_type const u48_setup[] =
{
    {"randpoly",                CC_randpoly,    too_many_1,    wrong_no_1},
    {"lambda_l9cw2y_12",        wrong_no_na,    wrong_no_nb,   (n_args *)CC_lambda_l9cw2y_12},
    {"chksymmetries&subst",     wrong_no_na,    wrong_no_nb,   (n_args *)CC_chksymmetriesGsubst},
    {"free",                    CC_free,        too_many_1,    wrong_no_1},
    {"lengthreval",             CC_lengthreval, too_many_1,    wrong_no_1},
    {"deg",                     too_few_2,      CC_deg,        wrong_no_2},
    {"lto_alunion",             CC_lto_alunion, too_many_1,    wrong_no_1},
    {"get*order",               CC_getHorder,   too_many_1,    wrong_no_1},
    {"qqe_simplqequal",         too_few_2,      CC_qqe_simplqequal,wrong_no_2},
    {"pasf_mkop",               too_few_2,      CC_pasf_mkop,  wrong_no_2},
    {"vdp_sugar",               CC_vdp_sugar,   too_many_1,    wrong_no_1},
    {"applyml",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_applyml},
    {"xpdiff",                  too_few_2,      CC_xpdiff,     wrong_no_2},
    {"ps:constmult-erule",      too_few_2,      CC_psTconstmultKerule,wrong_no_2},
    {"mkuniquewedge",           CC_mkuniquewedge,too_many_1,   wrong_no_1},
    {"dvertex-to-projector",    wrong_no_na,    wrong_no_nb,   (n_args *)CC_dvertexKtoKprojector},
    {"dp_prod",                 too_few_2,      CC_dp_prod,    wrong_no_2},
    {"find-null-space",         too_few_2,      CC_findKnullKspace,wrong_no_2},
    {"lowestdeg",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_lowestdeg},
    {"simprad",                 too_few_2,      CC_simprad,    wrong_no_2},
    {"reduce-mod-eig",          too_few_2,      CC_reduceKmodKeig,wrong_no_2},
    {"preptaylor*2",            too_few_2,      CC_preptaylorH2,wrong_no_2},
    {"conjgd",                  CC_conjgd,      too_many_1,    wrong_no_1},
    {"numpoly_red",             CC_numpoly_red, too_many_1,    wrong_no_1},
    {"letscalar",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_letscalar},
    {"make-image-mod-p",        too_few_2,      CC_makeKimageKmodKp,wrong_no_2},
    {"subeval1",                too_few_2,      CC_subeval1,   wrong_no_2},
    {"red=recover",             CC_redMrecover, too_many_1,    wrong_no_1},
    {"formclear",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_formclear},
    {"general-negate-term",     CC_generalKnegateKterm,too_many_1,wrong_no_1},
    {"glsoleig",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_glsoleig},
    {"gd_newtype",              too_few_2,      CC_gd_newtype, wrong_no_2},
    {"sqfrf",                   CC_sqfrf,       too_many_1,    wrong_no_1},
    {"acfsf_0mk2",              too_few_2,      CC_acfsf_0mk2, wrong_no_2},
    {"tidysqrt",                CC_tidysqrt,    too_many_1,    wrong_no_1},
    {"xpwrlcmp",                too_few_2,      CC_xpwrlcmp,   wrong_no_2},
    {NULL, (one_args *)"u48", (two_args *)"3067 3981533 4007910", 0}
};

/* end of generated code */

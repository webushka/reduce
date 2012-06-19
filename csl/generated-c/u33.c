
/* $destdir\u33.c        Machine generated C code */

/* Signature: 00000000 27-Aug-2011 */

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
#ifdef OLD_VERSION
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
#else 
#define font_of_char(n)  (((int32_t)(n) >> 29) & 0x03)
#define bits_of_char(n)  (0)
#define code_of_char(n)  (((int32_t)(n) >>  8) & 0x001fffff)
#define pack_char(bits, font, code)                                \
    ((Lisp_Object)((((uint32_t)(font)) << 29) |                    \
                   (((uint32_t)(code)) << 8) | TAG_CHAR))
    
#define CHAR_EOF ((Lisp_Object)(int32_t)0xff000402)
#endif  
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
extern char *C_stack_limit;
extern CSLbool restartp;
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
extern int csl_argc;
extern char **csl_argv;
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


/* Code for liennewstruc */

static Lisp_Object MS_CDECL CC_liennewstruc(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v196, v197, v198, v199;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "liennewstruc");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for liennewstruc");
#endif
    if (stack >= stacklimit)
    {
        push3(v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v2);
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
    stack[-12] = v2;
    stack[-13] = v1;
    stack[-14] = v0;
/* end of prologue */
    v198 = elt(env, 1); /* lie_a */
    v197 = stack[-14];
    v196 = stack[-14];
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = ncons(v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 12); /* matrix */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 13); /* aeval */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[0] = elt(env, 1); /* lie_a */
    v198 = elt(env, 2); /* expt */
    v197 = elt(env, 1); /* lie_a */
    v196 = (Lisp_Object)1; /* 0 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 13); /* aeval */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 14); /* setk */
    v196 = (*qfn2(fn))(qenv(fn), stack[0], v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-13];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-15] = v196;
    goto v201;

v201:
    stack[0] = elt(env, 3); /* difference */
    v198 = elt(env, 3); /* difference */
    v197 = stack[-14];
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v197 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-15];
    v196 = list3(stack[0], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 16); /* aminusp!: */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    if (v196 == nil) goto v202;
    v198 = elt(env, 5); /* plus */
    v197 = stack[-13];
    v196 = (Lisp_Object)33; /* 2 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-2] = v196;
    goto v203;

v203:
    stack[0] = elt(env, 3); /* difference */
    v196 = stack[-14];
    fn = elt(env, 15); /* aeval!* */
    v197 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-2];
    v196 = list3(stack[0], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 16); /* aminusp!: */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    if (v196 == nil) goto v204;
    stack[0] = elt(env, 9); /* lientrans */
    v198 = elt(env, 8); /* times */
    v197 = elt(env, 1); /* lie_a */
    v196 = elt(env, 9); /* lientrans */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 13); /* aeval */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 14); /* setk */
    v196 = (*qfn2(fn))(qenv(fn), stack[0], v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v198 = elt(env, 5); /* plus */
    v197 = stack[-13];
    v196 = (Lisp_Object)33; /* 2 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-13] = v196;
    goto v205;

v205:
    stack[0] = elt(env, 3); /* difference */
    v198 = elt(env, 3); /* difference */
    v197 = stack[-14];
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v197 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-13];
    v196 = list3(stack[0], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 16); /* aminusp!: */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    if (v196 == nil) goto v206;
    v196 = elt(env, 1); /* lie_a */
    v196 = ncons(v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 17); /* clear */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 13); /* aeval */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    v196 = nil;
    { popv(17); return onevalue(v196); }

v206:
    v198 = elt(env, 5); /* plus */
    v197 = stack[-13];
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-11] = v196;
    goto v207;

v207:
    stack[0] = elt(env, 3); /* difference */
    v196 = stack[-14];
    fn = elt(env, 15); /* aeval!* */
    v197 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-11];
    v196 = list3(stack[0], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 16); /* aminusp!: */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    if (v196 == nil) goto v208;
    v196 = stack[-13];
    v198 = elt(env, 5); /* plus */
    v197 = v196;
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-13] = v196;
    goto v205;

v208:
    v198 = elt(env, 6); /* lie_lamb */
    v197 = stack[-13];
    v196 = stack[-11];
    stack[-10] = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-9] = elt(env, 7); /* quotient */
    v196 = (Lisp_Object)17; /* 1 */
    stack[-8] = v196;
    v196 = (Lisp_Object)1; /* 0 */
    stack[-7] = v196;
    goto v209;

v209:
    stack[0] = elt(env, 3); /* difference */
    v196 = stack[-14];
    fn = elt(env, 15); /* aeval!* */
    v197 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-8];
    v196 = list3(stack[0], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 16); /* aminusp!: */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    if (v196 == nil) goto v210;
    v196 = stack[-7];
    stack[0] = v196;
    v198 = elt(env, 9); /* lientrans */
    v197 = (Lisp_Object)17; /* 1 */
    v196 = stack[-12];
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = list3(stack[-9], stack[0], v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 14); /* setk */
    v196 = (*qfn2(fn))(qenv(fn), stack[-10], v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-11];
    v198 = elt(env, 5); /* plus */
    v197 = v196;
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-11] = v196;
    goto v207;

v210:
    stack[-6] = elt(env, 5); /* plus */
    v196 = (Lisp_Object)17; /* 1 */
    stack[-5] = v196;
    v196 = (Lisp_Object)1; /* 0 */
    stack[-4] = v196;
    goto v211;

v211:
    stack[0] = elt(env, 3); /* difference */
    v196 = stack[-14];
    fn = elt(env, 15); /* aeval!* */
    v197 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-5];
    v196 = list3(stack[0], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 16); /* aminusp!: */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    if (v196 == nil) goto v212;
    v196 = stack[-4];
    v197 = v196;
    v196 = stack[-7];
    v196 = list3(stack[-6], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-7] = v196;
    v196 = stack[-8];
    v198 = elt(env, 5); /* plus */
    v197 = v196;
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-8] = v196;
    goto v209;

v212:
    stack[-3] = elt(env, 5); /* plus */
    stack[-2] = elt(env, 8); /* times */
    v198 = elt(env, 9); /* lientrans */
    v197 = stack[-13];
    v196 = stack[-8];
    stack[-1] = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v198 = elt(env, 9); /* lientrans */
    v197 = stack[-11];
    v196 = stack[-5];
    stack[0] = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v199 = elt(env, 10); /* lie_cc */
    v198 = stack[-8];
    v197 = stack[-5];
    v196 = stack[-12];
    v196 = list4(v199, v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = list4(stack[-2], stack[-1], stack[0], v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v197 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-4];
    v196 = list3(stack[-3], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-4] = v196;
    v196 = stack[-5];
    v198 = elt(env, 5); /* plus */
    v197 = v196;
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-5] = v196;
    goto v211;

v204:
    stack[-1] = elt(env, 1); /* lie_a */
    stack[0] = stack[-2];
    v198 = elt(env, 5); /* plus */
    v197 = stack[-13];
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-1] = list3(stack[-1], stack[0], v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[0] = elt(env, 11); /* minus */
    v198 = elt(env, 6); /* lie_lamb */
    v197 = stack[-13];
    v196 = stack[-2];
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = list2(stack[0], v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 14); /* setk */
    v196 = (*qfn2(fn))(qenv(fn), stack[-1], v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v198 = elt(env, 1); /* lie_a */
    v197 = stack[-2];
    v196 = stack[-13];
    stack[-1] = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[0] = elt(env, 6); /* lie_lamb */
    v198 = elt(env, 5); /* plus */
    v197 = stack[-13];
    v196 = (Lisp_Object)17; /* 1 */
    v197 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-2];
    v196 = list3(stack[0], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 14); /* setk */
    v196 = (*qfn2(fn))(qenv(fn), stack[-1], v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-2];
    v198 = elt(env, 5); /* plus */
    v197 = v196;
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-2] = v196;
    goto v203;

v202:
    v198 = elt(env, 5); /* plus */
    v197 = stack[-15];
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-11] = v196;
    goto v213;

v213:
    stack[0] = elt(env, 3); /* difference */
    v196 = stack[-14];
    fn = elt(env, 15); /* aeval!* */
    v197 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-11];
    v196 = list3(stack[0], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 16); /* aminusp!: */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    if (v196 == nil) goto v214;
    v196 = stack[-15];
    v198 = elt(env, 5); /* plus */
    v197 = v196;
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-15] = v196;
    goto v201;

v214:
    v198 = elt(env, 6); /* lie_lamb */
    v197 = stack[-15];
    v196 = stack[-11];
    stack[-10] = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-9] = elt(env, 7); /* quotient */
    v196 = (Lisp_Object)17; /* 1 */
    stack[-8] = v196;
    v196 = (Lisp_Object)1; /* 0 */
    stack[-7] = v196;
    goto v215;

v215:
    stack[0] = elt(env, 3); /* difference */
    v196 = stack[-14];
    fn = elt(env, 15); /* aeval!* */
    v197 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-8];
    v196 = list3(stack[0], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 16); /* aminusp!: */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    if (v196 == nil) goto v216;
    v196 = stack[-7];
    stack[0] = v196;
    v198 = elt(env, 9); /* lientrans */
    v197 = (Lisp_Object)17; /* 1 */
    v196 = stack[-12];
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = list3(stack[-9], stack[0], v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 14); /* setk */
    v196 = (*qfn2(fn))(qenv(fn), stack[-10], v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-11];
    v198 = elt(env, 5); /* plus */
    v197 = v196;
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-11] = v196;
    goto v213;

v216:
    stack[-6] = elt(env, 5); /* plus */
    v196 = (Lisp_Object)17; /* 1 */
    stack[-5] = v196;
    v196 = (Lisp_Object)1; /* 0 */
    stack[-4] = v196;
    goto v217;

v217:
    stack[0] = elt(env, 3); /* difference */
    v196 = stack[-14];
    fn = elt(env, 15); /* aeval!* */
    v197 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-5];
    v196 = list3(stack[0], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 16); /* aminusp!: */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    if (v196 == nil) goto v218;
    v196 = stack[-4];
    v197 = v196;
    v196 = stack[-7];
    v196 = list3(stack[-6], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-7] = v196;
    v196 = stack[-8];
    v198 = elt(env, 5); /* plus */
    v197 = v196;
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-8] = v196;
    goto v215;

v218:
    stack[-3] = elt(env, 5); /* plus */
    stack[-2] = elt(env, 8); /* times */
    v198 = elt(env, 9); /* lientrans */
    v197 = stack[-15];
    v196 = stack[-8];
    stack[-1] = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v198 = elt(env, 9); /* lientrans */
    v197 = stack[-11];
    v196 = stack[-5];
    stack[0] = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v199 = elt(env, 10); /* lie_cc */
    v198 = stack[-8];
    v197 = stack[-5];
    v196 = stack[-12];
    v196 = list4(v199, v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = list4(stack[-2], stack[-1], stack[0], v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v197 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    v196 = stack[-4];
    v196 = list3(stack[-3], v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-4] = v196;
    v196 = stack[-5];
    v198 = elt(env, 5); /* plus */
    v197 = v196;
    v196 = (Lisp_Object)17; /* 1 */
    v196 = list3(v198, v197, v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    fn = elt(env, 15); /* aeval!* */
    v196 = (*qfn1(fn))(qenv(fn), v196);
    nil = C_nil;
    if (exception_pending()) goto v200;
    env = stack[-16];
    stack[-5] = v196;
    goto v217;
/* error exit handlers */
v200:
    popv(17);
    return nil;
}



/* Code for bas_make */

static Lisp_Object CC_bas_make(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v188, v189;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for bas_make");
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
    stack[-2] = v1;
    v188 = v0;
/* end of prologue */
    stack[-3] = v188;
    stack[-1] = stack[-2];
    v188 = stack[-2];
    stack[0] = Llength(nil, v188);
    nil = C_nil;
    if (exception_pending()) goto v224;
    env = stack[-4];
    v188 = stack[-2];
    fn = elt(env, 2); /* dp_ecart */
    v189 = (*qfn1(fn))(qenv(fn), v188);
    nil = C_nil;
    if (exception_pending()) goto v224;
    env = stack[-4];
    v188 = qvalue(elt(env, 1)); /* nil */
    v188 = list2(v189, v188);
    nil = C_nil;
    if (exception_pending()) goto v224;
    {
        Lisp_Object v225 = stack[-3];
        Lisp_Object v226 = stack[-1];
        Lisp_Object v227 = stack[0];
        popv(5);
        return list3star(v225, v226, v227, v188);
    }
/* error exit handlers */
v224:
    popv(5);
    return nil;
}



/* Code for pst_mkpst */

static Lisp_Object CC_pst_mkpst(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v230;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pst_mkpst");
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
    v230 = v0;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 2); /* pst_mkpst1 */
    v230 = (*qfn1(fn))(qenv(fn), v230);
    nil = C_nil;
    if (exception_pending()) goto v219;
    env = stack[-1];
    v230 = cons(stack[0], v230);
    nil = C_nil;
    if (exception_pending()) goto v219;
    env = stack[-1];
    {
        popv(2);
        fn = elt(env, 3); /* pst_equitable */
        return (*qfn1(fn))(qenv(fn), v230);
    }
/* error exit handlers */
v219:
    popv(2);
    return nil;
}



/* Code for mksqrt */

static Lisp_Object CC_mksqrt(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v237, v184, v182;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mksqrt");
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
    v237 = qvalue(elt(env, 1)); /* !*keepsqrts */
    if (v237 == nil) goto v238;
    v237 = qvalue(elt(env, 4)); /* !*!*sqrt */
    if (!(v237 == nil)) goto v239;
    v237 = qvalue(elt(env, 5)); /* t */
    qvalue(elt(env, 4)) = v237; /* !*!*sqrt */
    v182 = elt(env, 6); /* (x) */
    v184 = lisp_true;
    v237 = elt(env, 7); /* (let00 (quote ((equal (expt (sqrt x) 2) x)))) 
*/
    v237 = list3(v182, v184, v237);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-2];
    fn = elt(env, 9); /* forall */
    v237 = (*qfn1(fn))(qenv(fn), v237);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-2];
    fn = elt(env, 10); /* aeval */
    v237 = (*qfn1(fn))(qenv(fn), v237);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-2];
    goto v239;

v239:
    v184 = elt(env, 8); /* sqrt */
    v237 = stack[0];
    popv(3);
    return list2(v184, v237);

v238:
    stack[-1] = elt(env, 2); /* expt */
    v182 = elt(env, 3); /* quotient */
    v184 = (Lisp_Object)17; /* 1 */
    v237 = (Lisp_Object)33; /* 2 */
    v237 = list3(v182, v184, v237);
    nil = C_nil;
    if (exception_pending()) goto v240;
    {
        Lisp_Object v241 = stack[-1];
        Lisp_Object v242 = stack[0];
        popv(3);
        return list3(v241, v242, v237);
    }
/* error exit handlers */
v240:
    popv(3);
    return nil;
}



/* Code for domainp_list */

static Lisp_Object CC_domainp_list(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v225, v226;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for domainp_list");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v225 = v0;
/* end of prologue */

v243:
    v226 = v225;
    if (v226 == nil) goto v244;
    v226 = v225;
    v226 = qcar(v226);
    if (!consp(v226)) goto v236;
    v226 = v225;
    v226 = qcar(v226);
    v226 = qcar(v226);
    v226 = (consp(v226) ? nil : lisp_true);
    goto v221;

v221:
    if (v226 == nil) goto v245;
    v225 = qcdr(v225);
    goto v243;

v245:
    v225 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v225);

v236:
    v226 = qvalue(elt(env, 1)); /* t */
    goto v221;

v244:
    v225 = qvalue(elt(env, 1)); /* t */
    return onevalue(v225);
}



/* Code for setqinsertlist */

static Lisp_Object CC_setqinsertlist(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v215, v258, v259;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for setqinsertlist");
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
    v258 = v0;
/* end of prologue */
    v215 = qvalue(elt(env, 1)); /* fluidbibasissetq */
    stack[-2] = v215;
    v215 = v258;
    stack[-1] = v215;
    goto v230;

v230:
    v215 = stack[-2];
    v215 = qcar(v215);
    if (v215 == nil) goto v260;
    v215 = stack[-1];
    v215 = qcar(v215);
    if (v215 == nil) goto v260;
    v215 = stack[-2];
    v258 = qcar(v215);
    v215 = (Lisp_Object)17; /* 1 */
    v215 = *(Lisp_Object *)((char *)v258 + (CELL-TAG_VECTOR) + ((int32_t)v215/(16/CELL)));
    v259 = qcar(v215);
    v215 = stack[-1];
    v258 = qcar(v215);
    v215 = (Lisp_Object)17; /* 1 */
    v215 = *(Lisp_Object *)((char *)v258 + (CELL-TAG_VECTOR) + ((int32_t)v215/(16/CELL)));
    v215 = qcar(v215);
    fn = elt(env, 4); /* monomcompare */
    v215 = (*qfn2(fn))(qenv(fn), v259, v215);
    nil = C_nil;
    if (exception_pending()) goto v261;
    env = stack[-3];
    v259 = v215;
    v258 = v259;
    v215 = (Lisp_Object)-15; /* -1 */
    if (v258 == v215) goto v231;
    v258 = v259;
    v215 = (Lisp_Object)1; /* 0 */
    v215 = (v258 == v215 ? lisp_true : nil);
    goto v232;

v232:
    if (v215 == nil) goto v180;
    v215 = stack[-2];
    v215 = qcdr(v215);
    stack[-2] = v215;
    goto v230;

v180:
    stack[0] = stack[-2];
    v215 = stack[-2];
    v258 = qcar(v215);
    v215 = stack[-2];
    v215 = qcdr(v215);
    v215 = cons(v258, v215);
    nil = C_nil;
    if (exception_pending()) goto v261;
    env = stack[-3];
    v258 = Lrplacd(nil, stack[0], v215);
    nil = C_nil;
    if (exception_pending()) goto v261;
    env = stack[-3];
    v215 = stack[-1];
    v215 = qcar(v215);
    v215 = Lrplaca(nil, v258, v215);
    nil = C_nil;
    if (exception_pending()) goto v261;
    env = stack[-3];
    v215 = stack[-2];
    v215 = qcdr(v215);
    stack[-2] = v215;
    v215 = stack[-1];
    v215 = qcdr(v215);
    stack[-1] = v215;
    goto v230;

v231:
    v215 = qvalue(elt(env, 3)); /* t */
    goto v232;

v260:
    v215 = stack[-1];
    v215 = qcar(v215);
    if (v215 == nil) goto v126;
    v258 = stack[-2];
    v215 = stack[-1];
    v215 = Lrplacd(nil, v258, v215);
    nil = C_nil;
    if (exception_pending()) goto v261;
    env = stack[-3];
    stack[0] = v215;
    v258 = stack[0];
    v215 = stack[0];
    v215 = qcdr(v215);
    v215 = qcar(v215);
    v258 = Lrplaca(nil, v258, v215);
    nil = C_nil;
    if (exception_pending()) goto v261;
    env = stack[-3];
    v215 = stack[0];
    v215 = qcdr(v215);
    v215 = qcdr(v215);
    v215 = Lrplacd(nil, v258, v215);
    nil = C_nil;
    if (exception_pending()) goto v261;
    goto v126;

v126:
    v215 = nil;
    { popv(4); return onevalue(v215); }
/* error exit handlers */
v261:
    popv(4);
    return nil;
}



/* Code for sfto_lmultf */

static Lisp_Object CC_sfto_lmultf(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v265, v266;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for sfto_lmultf");
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
    goto v267;

v267:
    v265 = stack[0];
    if (v265 == nil) goto v268;
    v265 = stack[0];
    v266 = qcar(v265);
    v265 = stack[-1];
    v265 = cons(v266, v265);
    nil = C_nil;
    if (exception_pending()) goto v233;
    env = stack[-2];
    stack[-1] = v265;
    v265 = stack[0];
    v265 = qcdr(v265);
    stack[0] = v265;
    goto v267;

v268:
    v265 = (Lisp_Object)17; /* 1 */
    v266 = v265;
    goto v238;

v238:
    v265 = stack[-1];
    if (v265 == nil) { popv(3); return onevalue(v266); }
    v265 = stack[-1];
    v265 = qcar(v265);
    fn = elt(env, 1); /* multf */
    v265 = (*qfn2(fn))(qenv(fn), v265, v266);
    nil = C_nil;
    if (exception_pending()) goto v233;
    env = stack[-2];
    v266 = v265;
    v265 = stack[-1];
    v265 = qcdr(v265);
    stack[-1] = v265;
    goto v238;
/* error exit handlers */
v233:
    popv(3);
    return nil;
}



/* Code for mksfpf */

static Lisp_Object CC_mksfpf(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v141, v143;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mksfpf");
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
    v141 = v0;
/* end of prologue */
    fn = elt(env, 5); /* mkprod */
    v141 = (*qfn1(fn))(qenv(fn), v141);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-2];
    stack[-1] = v141;
    v143 = stack[0];
    v141 = (Lisp_Object)17; /* 1 */
    if (v143 == v141) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v141 = stack[-1];
    if (!consp(v141)) goto v264;
    v141 = stack[-1];
    v141 = qcar(v141);
    v141 = (consp(v141) ? nil : lisp_true);
    goto v263;

v263:
    if (v141 == nil) goto v265;
    v143 = stack[-1];
    v141 = stack[0];
    {
        popv(3);
        fn = elt(env, 6); /* !:expt */
        return (*qfn2(fn))(qenv(fn), v143, v141);
    }

v265:
    v143 = stack[0];
    v141 = (Lisp_Object)1; /* 0 */
    v141 = (Lisp_Object)geq2(v143, v141);
    nil = C_nil;
    if (exception_pending()) goto v277;
    v141 = v141 ? lisp_true : nil;
    env = stack[-2];
    if (v141 == nil) goto v278;
    v141 = stack[-1];
    v141 = qcar(v141);
    v141 = qcdr(v141);
    v141 = Lonep(nil, v141);
    env = stack[-2];
    if (v141 == nil) goto v278;
    v141 = stack[-1];
    v141 = qcdr(v141);
    if (!(v141 == nil)) goto v278;
    v141 = stack[-1];
    v141 = qcar(v141);
    v141 = qcar(v141);
    v143 = qcdr(v141);
    v141 = stack[0];
    v143 = times2(v143, v141);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-2];
    v141 = stack[-1];
    v141 = qcar(v141);
    v141 = qcar(v141);
    v141 = qcar(v141);
    stack[-1] = v143;
    stack[0] = v141;
    v143 = stack[0];
    v141 = qvalue(elt(env, 2)); /* asymplis!* */
    v141 = Lassoc(nil, v143, v141);
    v143 = v141;
    v141 = qvalue(elt(env, 3)); /* subfg!* */
    if (v141 == nil) goto v279;
    v141 = v143;
    if (v141 == nil) goto v279;
    v141 = v143;
    v143 = qcdr(v141);
    v141 = stack[-1];
    v141 = (Lisp_Object)lesseq2(v143, v141);
    nil = C_nil;
    if (exception_pending()) goto v277;
    v141 = v141 ? lisp_true : nil;
    env = stack[-2];
    if (v141 == nil) goto v279;
    v141 = qvalue(elt(env, 4)); /* nil */
    { popv(3); return onevalue(v141); }

v279:
    v141 = stack[0];
    fn = elt(env, 7); /* fkern */
    v143 = (*qfn1(fn))(qenv(fn), v141);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-2];
    v141 = stack[-1];
    fn = elt(env, 8); /* getpower */
    v143 = (*qfn2(fn))(qenv(fn), v143, v141);
    nil = C_nil;
    if (exception_pending()) goto v277;
    env = stack[-2];
    v141 = (Lisp_Object)17; /* 1 */
    v141 = cons(v143, v141);
    nil = C_nil;
    if (exception_pending()) goto v277;
    popv(3);
    return ncons(v141);

v278:
    v143 = stack[-1];
    v141 = stack[0];
    {
        popv(3);
        fn = elt(env, 9); /* exptf2 */
        return (*qfn2(fn))(qenv(fn), v143, v141);
    }

v264:
    v141 = qvalue(elt(env, 1)); /* t */
    goto v263;
/* error exit handlers */
v277:
    popv(3);
    return nil;
}



/* Code for cl_smsimpl!-junct2 */

static Lisp_Object MS_CDECL CC_cl_smsimplKjunct2(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, Lisp_Object v251,
                         Lisp_Object v244, Lisp_Object v270, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v286, v287, v288, v252;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 6, "cl_smsimpl-junct2");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for cl_smsimpl-junct2");
#endif
    if (stack >= stacklimit)
    {
        push6(v270,v244,v251,v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop6(v0,v1,v2,v251,v244,v270);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v270;
    v286 = v244;
    v287 = v251;
    v288 = v2;
    stack[-2] = v1;
    v252 = v0;
/* end of prologue */
    fn = elt(env, 5); /* rl_smmkatl */
    v286 = (*qfnn(fn))(qenv(fn), 4, v252, v288, v287, v286);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-4];
    stack[-3] = v286;
    v286 = qvalue(elt(env, 1)); /* !*rlsichk */
    if (v286 == nil) goto v231;
    v286 = stack[-2];
    v287 = v286;
    v286 = qvalue(elt(env, 2)); /* nil */
    stack[-2] = v286;
    v286 = v287;
    stack[0] = v286;
    goto v227;

v227:
    v286 = stack[0];
    if (v286 == nil) goto v188;
    v286 = stack[0];
    v286 = qcar(v286);
    v287 = v286;
    v286 = stack[-2];
    fn = elt(env, 6); /* lto_insert */
    v286 = (*qfn2(fn))(qenv(fn), v287, v286);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-4];
    stack[-2] = v286;
    v286 = stack[0];
    v286 = qcdr(v286);
    stack[0] = v286;
    goto v227;

v188:
    v286 = qvalue(elt(env, 3)); /* !*rlsiso */
    if (v286 == nil) goto v256;
    v287 = stack[-3];
    v286 = elt(env, 4); /* rl_ordatp */
    fn = elt(env, 7); /* sort */
    v286 = (*qfn2(fn))(qenv(fn), v287, v286);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-4];
    stack[-3] = v286;
    goto v256;

v256:
    v287 = stack[-3];
    v286 = stack[-2];
    v286 = Lnconc(nil, v287, v286);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-4];
    v287 = v286;
    v286 = v287;
    if (!(v286 == nil)) { popv(5); return onevalue(v287); }
    v286 = stack[-1];
    fn = elt(env, 8); /* cl_flip */
    v286 = (*qfn1(fn))(qenv(fn), v286);
    nil = C_nil;
    if (exception_pending()) goto v289;
    popv(5);
    return ncons(v286);

v231:
    v286 = stack[-2];
    v286 = Lnreverse(nil, v286);
    env = stack[-4];
    stack[-2] = v286;
    goto v188;
/* error exit handlers */
v289:
    popv(5);
    return nil;
}



/* Code for aex_tad */

static Lisp_Object CC_aex_tad(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v194, v276, v263;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for aex_tad");
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
    v194 = stack[0];
    fn = elt(env, 2); /* aex_ex */
    v194 = (*qfn1(fn))(qenv(fn), v194);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-2];
    fn = elt(env, 3); /* ratpoly_tad */
    stack[-1] = (*qfn1(fn))(qenv(fn), v194);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-2];
    v194 = stack[0];
    fn = elt(env, 4); /* aex_ctx */
    v263 = (*qfn1(fn))(qenv(fn), v194);
    nil = C_nil;
    if (exception_pending()) goto v285;
    env = stack[-2];
    v276 = qvalue(elt(env, 1)); /* nil */
    v194 = qvalue(elt(env, 1)); /* nil */
    {
        Lisp_Object v223 = stack[-1];
        popv(3);
        fn = elt(env, 5); /* aex_mk */
        return (*qfnn(fn))(qenv(fn), 4, v223, v263, v276, v194);
    }
/* error exit handlers */
v285:
    popv(3);
    return nil;
}



/* Code for containerom */

static Lisp_Object CC_containerom(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v295, v296;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for containerom");
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
    v295 = stack[-2];
    v295 = qcdr(v295);
    v295 = qcar(v295);
    stack[-1] = v295;
    v295 = stack[-2];
    v295 = qcar(v295);
    stack[0] = v295;
    v295 = elt(env, 1); /* "<OMA>" */
    fn = elt(env, 15); /* printout */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v141;
    env = stack[-4];
    v295 = qvalue(elt(env, 2)); /* t */
    fn = elt(env, 16); /* indent!* */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v141;
    env = stack[-4];
    v296 = stack[0];
    v295 = elt(env, 3); /* vectorml */
    if (!(v296 == v295)) goto v297;
    v295 = elt(env, 4); /* vector */
    stack[0] = v295;
    goto v297;

v297:
    v296 = stack[0];
    v295 = qvalue(elt(env, 5)); /* valid_om!* */
    v295 = Lassoc(nil, v296, v295);
    v295 = qcdr(v295);
    v295 = qcar(v295);
    stack[-3] = v295;
    v295 = stack[-2];
    v296 = qcar(v295);
    v295 = elt(env, 6); /* set */
    if (v296 == v295) goto v266;
    v295 = qvalue(elt(env, 7)); /* nil */
    goto v265;

v265:
    if (v295 == nil) goto v280;
    v295 = stack[-1];
    v295 = qcar(v295);
    v295 = qcdr(v295);
    v295 = qcar(v295);
    v296 = Lintern(nil, v295);
    nil = C_nil;
    if (exception_pending()) goto v141;
    env = stack[-4];
    v295 = elt(env, 8); /* multiset */
    if (!(v296 == v295)) goto v280;
    v295 = elt(env, 9); /* multiset1 */
    stack[-3] = v295;
    goto v280;

v280:
    v295 = stack[-2];
    v296 = qcar(v295);
    v295 = elt(env, 3); /* vectorml */
    if (!(v296 == v295)) goto v252;
    v295 = elt(env, 10); /* "vector" */
    stack[0] = v295;
    goto v252;

v252:
    v295 = stack[-2];
    v296 = qcar(v295);
    v295 = elt(env, 3); /* vectorml */
    if (!(v296 == v295)) goto v286;
    v296 = elt(env, 4); /* vector */
    v295 = stack[-2];
    v295 = qcdr(v295);
    v295 = cons(v296, v295);
    nil = C_nil;
    if (exception_pending()) goto v141;
    env = stack[-4];
    stack[-2] = v295;
    goto v286;

v286:
    v295 = elt(env, 11); /* "<OMS cd=""" */
    fn = elt(env, 15); /* printout */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v141;
    env = stack[-4];
    v295 = stack[-3];
    v295 = Lprinc(nil, v295);
    nil = C_nil;
    if (exception_pending()) goto v141;
    env = stack[-4];
    v295 = elt(env, 12); /* """ name=""" */
    v295 = Lprinc(nil, v295);
    nil = C_nil;
    if (exception_pending()) goto v141;
    env = stack[-4];
    v295 = stack[0];
    v295 = Lprinc(nil, v295);
    nil = C_nil;
    if (exception_pending()) goto v141;
    env = stack[-4];
    v295 = elt(env, 13); /* """/>" */
    v295 = Lprinc(nil, v295);
    nil = C_nil;
    if (exception_pending()) goto v141;
    env = stack[-4];
    v295 = stack[-2];
    v295 = qcdr(v295);
    v295 = qcdr(v295);
    fn = elt(env, 17); /* multiom */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v141;
    env = stack[-4];
    v295 = qvalue(elt(env, 7)); /* nil */
    fn = elt(env, 16); /* indent!* */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v141;
    env = stack[-4];
    v295 = elt(env, 14); /* "</OMA>" */
    fn = elt(env, 15); /* printout */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v141;
    v295 = nil;
    { popv(5); return onevalue(v295); }

v266:
    v295 = stack[-1];
    v295 = Lconsp(nil, v295);
    env = stack[-4];
    goto v265;
/* error exit handlers */
v141:
    popv(5);
    return nil;
}



/* Code for ps!:mkpow */

static Lisp_Object MS_CDECL CC_psTmkpow(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v302, v303, v187, v185;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "ps:mkpow");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ps:mkpow");
#endif
    if (stack >= stacklimit)
    {
        push3(v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v2);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v2;
    v187 = v1;
    v185 = v0;
/* end of prologue */
    v303 = v187;
    v302 = (Lisp_Object)1; /* 0 */
    if (v303 == v302) goto v267;
    v303 = v187;
    v302 = (Lisp_Object)17; /* 1 */
    if (v303 == v302) goto v263;
    v302 = elt(env, 1); /* expt */
    v303 = v185;
    v302 = list3(v302, v303, v187);
    nil = C_nil;
    if (exception_pending()) goto v183;
    env = stack[-1];
    goto v276;

v276:
    v303 = stack[0];
    if (v303 == nil) goto v240;
    v187 = elt(env, 2); /* quotient */
    v303 = (Lisp_Object)17; /* 1 */
    v302 = list3(v187, v303, v302);
    nil = C_nil;
    if (exception_pending()) goto v183;
    popv(2);
    return ncons(v302);

v240:
    popv(2);
    return ncons(v302);

v263:
    v302 = v185;
    goto v276;

v267:
    v302 = (Lisp_Object)17; /* 1 */
    popv(2);
    return ncons(v302);
/* error exit handlers */
v183:
    popv(2);
    return nil;
}



/* Code for lengthn */

static Lisp_Object CC_lengthn(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v245;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lengthn");
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
    v245 = stack[0];
    if (v245 == nil) goto v244;
    v245 = stack[0];
    v245 = qcar(v245);
    if (is_number(v245)) goto v220;
    v245 = stack[0];
    v245 = qcdr(v245);
    v245 = CC_lengthn(env, v245);
    nil = C_nil;
    if (exception_pending()) goto v225;
    popv(3);
    return add1(v245);

v220:
    v245 = stack[0];
    v245 = qcar(v245);
    stack[-1] = sub1(v245);
    nil = C_nil;
    if (exception_pending()) goto v225;
    env = stack[-2];
    v245 = stack[0];
    v245 = qcdr(v245);
    v245 = CC_lengthn(env, v245);
    nil = C_nil;
    if (exception_pending()) goto v225;
    {
        Lisp_Object v226 = stack[-1];
        popv(3);
        return plus2(v226, v245);
    }

v244:
    v245 = (Lisp_Object)1; /* 0 */
    { popv(3); return onevalue(v245); }
/* error exit handlers */
v225:
    popv(3);
    return nil;
}



/* Code for suspend */

static Lisp_Object MS_CDECL CC_suspend(Lisp_Object env, int nargs,
                         Lisp_Object v251, Lisp_Object v244,
                         Lisp_Object v270, Lisp_Object v267,
                         Lisp_Object v268, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v298, v299, v240, v241;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 5, "suspend");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for suspend");
#endif
    if (stack >= stacklimit)
    {
        push5(v268,v267,v270,v244,v251);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop5(v251,v244,v270,v267,v268);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-7] = v268;
    v299 = v267;
    v240 = v270;
    v241 = v244;
    v298 = v251;
/* end of prologue */
    stack[-8] = qvalue(elt(env, 1)); /* op */
    qvalue(elt(env, 1)) = nil; /* op */
    stack[-6] = qvalue(elt(env, 2)); /* r */
    qvalue(elt(env, 2)) = nil; /* r */
    stack[-5] = qvalue(elt(env, 3)); /* p */
    qvalue(elt(env, 3)) = nil; /* p */
    qvalue(elt(env, 1)) = v298; /* op */
    v298 = v241;
    qvalue(elt(env, 2)) = v298; /* r */
    v298 = v240;
    qvalue(elt(env, 3)) = v298; /* p */
    v298 = qvalue(elt(env, 2)); /* r */
    stack[-4] = qcar(v298);
    v298 = qvalue(elt(env, 3)); /* p */
    stack[-3] = qcar(v298);
    stack[-2] = v299;
    stack[-1] = qvalue(elt(env, 1)); /* op */
    v298 = qvalue(elt(env, 2)); /* r */
    stack[0] = qcdr(v298);
    v299 = qvalue(elt(env, 1)); /* op */
    v298 = qvalue(elt(env, 3)); /* p */
    v298 = qcdr(v298);
    v298 = cons(v299, v298);
    nil = C_nil;
    if (exception_pending()) goto v128;
    env = stack[-9];
    v298 = ncons(v298);
    nil = C_nil;
    if (exception_pending()) goto v128;
    env = stack[-9];
    v299 = acons(stack[-1], stack[0], v298);
    nil = C_nil;
    if (exception_pending()) goto v128;
    env = stack[-9];
    v298 = stack[-7];
    v298 = cons(v299, v298);
    nil = C_nil;
    if (exception_pending()) goto v128;
    env = stack[-9];
    fn = elt(env, 4); /* amatch */
    v298 = (*qfnn(fn))(qenv(fn), 4, stack[-4], stack[-3], stack[-2], v298);
    nil = C_nil;
    if (exception_pending()) goto v128;
    env = stack[-9];
    qvalue(elt(env, 3)) = stack[-5]; /* p */
    qvalue(elt(env, 2)) = stack[-6]; /* r */
    qvalue(elt(env, 1)) = stack[-8]; /* op */
    { popv(10); return onevalue(v298); }
/* error exit handlers */
v128:
    env = stack[-9];
    qvalue(elt(env, 3)) = stack[-5]; /* p */
    qvalue(elt(env, 2)) = stack[-6]; /* r */
    qvalue(elt(env, 1)) = stack[-8]; /* op */
    popv(10);
    return nil;
}



/* Code for diplmon2sq */

static Lisp_Object CC_diplmon2sq(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v223, v188;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for diplmon2sq");
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
    v223 = v1;
    v188 = v0;
/* end of prologue */
    stack[0] = v188;
    v188 = v223;
    v223 = qvalue(elt(env, 1)); /* dipvars!* */
    fn = elt(env, 2); /* dipev2f */
    v188 = (*qfn2(fn))(qenv(fn), v188, v223);
    nil = C_nil;
    if (exception_pending()) goto v297;
    env = stack[-1];
    v223 = (Lisp_Object)17; /* 1 */
    v223 = cons(v188, v223);
    nil = C_nil;
    if (exception_pending()) goto v297;
    env = stack[-1];
    {
        Lisp_Object v301 = stack[0];
        popv(2);
        fn = elt(env, 3); /* multsq */
        return (*qfn2(fn))(qenv(fn), v301, v223);
    }
/* error exit handlers */
v297:
    popv(2);
    return nil;
}



/* Code for gfplus */

static Lisp_Object CC_gfplus(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v241, v242;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gfplus");
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
    v241 = stack[-1];
    v241 = qcar(v241);
    if (!consp(v241)) goto v236;
    v241 = stack[-1];
    v242 = qcar(v241);
    v241 = stack[0];
    v241 = qcar(v241);
    fn = elt(env, 1); /* plubf */
    stack[-2] = (*qfn2(fn))(qenv(fn), v242, v241);
    nil = C_nil;
    if (exception_pending()) goto v187;
    env = stack[-3];
    v241 = stack[-1];
    v242 = qcdr(v241);
    v241 = stack[0];
    v241 = qcdr(v241);
    fn = elt(env, 1); /* plubf */
    v241 = (*qfn2(fn))(qenv(fn), v242, v241);
    nil = C_nil;
    if (exception_pending()) goto v187;
    {
        Lisp_Object v185 = stack[-2];
        popv(4);
        return cons(v185, v241);
    }

v236:
    v241 = stack[-1];
    v242 = qcar(v241);
    v241 = stack[0];
    v241 = qcar(v241);
    stack[-2] = plus2(v242, v241);
    nil = C_nil;
    if (exception_pending()) goto v187;
    env = stack[-3];
    v241 = stack[-1];
    v242 = qcdr(v241);
    v241 = stack[0];
    v241 = qcdr(v241);
    v241 = plus2(v242, v241);
    nil = C_nil;
    if (exception_pending()) goto v187;
    {
        Lisp_Object v186 = stack[-2];
        popv(4);
        return cons(v186, v241);
    }
/* error exit handlers */
v187:
    popv(4);
    return nil;
}



/* Code for endofstmtp */

static Lisp_Object MS_CDECL CC_endofstmtp(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v219, v221;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "endofstmtp");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for endofstmtp");
#endif
    CSL_IGNORE(env);
/* end of prologue */
    v221 = qvalue(elt(env, 1)); /* cursym!* */
    v219 = elt(env, 2); /* (!*semicol!* !*rsqbkt!* end) */
    v219 = Lmember(nil, v221, v219);
    if (v219 == nil) goto v244;
    v219 = qvalue(elt(env, 3)); /* t */
    return onevalue(v219);

v244:
    v219 = nil;
    return onevalue(v219);
}



/* Code for indxchk */

static Lisp_Object CC_indxchk(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v128, v256;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for indxchk");
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
    v128 = v0;
/* end of prologue */
    stack[-1] = v128;
    v256 = qvalue(elt(env, 1)); /* indxl!* */
    v128 = qvalue(elt(env, 2)); /* nosuml!* */
    fn = elt(env, 5); /* union */
    v128 = (*qfn2(fn))(qenv(fn), v256, v128);
    nil = C_nil;
    if (exception_pending()) goto v305;
    env = stack[-2];
    stack[0] = v128;
    goto v267;

v267:
    v128 = stack[-1];
    if (v128 == nil) goto v193;
    v128 = stack[-1];
    v128 = qcar(v128);
    if (!consp(v128)) goto v225;
    v128 = stack[-1];
    v128 = qcar(v128);
    v128 = qcdr(v128);
    v128 = qcar(v128);
    if (is_number(v128)) goto v201;
    v128 = stack[-1];
    v128 = qcar(v128);
    v128 = qcdr(v128);
    v128 = qcar(v128);
    v256 = v128;
    goto v297;

v297:
    v128 = stack[0];
    v128 = Lmemq(nil, v256, v128);
    if (v128 == nil) goto v285;
    v128 = stack[-1];
    v128 = qcdr(v128);
    stack[-1] = v128;
    goto v267;

v285:
    v128 = qvalue(elt(env, 4)); /* t */
    { popv(3); return onevalue(v128); }

v201:
    v128 = stack[-1];
    v128 = qcar(v128);
    v128 = qcdr(v128);
    v128 = qcar(v128);
    fn = elt(env, 6); /* !*num2id */
    v128 = (*qfn1(fn))(qenv(fn), v128);
    nil = C_nil;
    if (exception_pending()) goto v305;
    env = stack[-2];
    v256 = v128;
    goto v297;

v225:
    v128 = stack[-1];
    v128 = qcar(v128);
    if (is_number(v128)) goto v121;
    v128 = stack[-1];
    v128 = qcar(v128);
    goto v191;

v191:
    v256 = v128;
    goto v297;

v121:
    v128 = stack[-1];
    v128 = qcar(v128);
    v128 = Labsval(nil, v128);
    nil = C_nil;
    if (exception_pending()) goto v305;
    env = stack[-2];
    fn = elt(env, 6); /* !*num2id */
    v128 = (*qfn1(fn))(qenv(fn), v128);
    nil = C_nil;
    if (exception_pending()) goto v305;
    env = stack[-2];
    goto v191;

v193:
    v128 = qvalue(elt(env, 3)); /* nil */
    { popv(3); return onevalue(v128); }
/* error exit handlers */
v305:
    popv(3);
    return nil;
}



/* Code for mk_binding */

static Lisp_Object CC_mk_binding(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v297, v301;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mk_binding");
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
    v297 = stack[-1];
    v301 = qcar(v297);
    v297 = stack[0];
    fn = elt(env, 2); /* can_be_proved */
    v297 = (*qfn2(fn))(qenv(fn), v301, v297);
    nil = C_nil;
    if (exception_pending()) goto v224;
    env = stack[-2];
    if (v297 == nil) goto v270;
    v297 = stack[-1];
    v301 = qcdr(v297);
    v297 = stack[0];
    {
        popv(3);
        fn = elt(env, 3); /* edge_bind */
        return (*qfn2(fn))(qenv(fn), v301, v297);
    }

v270:
    v297 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v297); }
/* error exit handlers */
v224:
    popv(3);
    return nil;
}



/* Code for bagp */

static Lisp_Object CC_bagp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v194, v276;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for bagp");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v276 = v0;
/* end of prologue */
    v194 = v276;
    if (!consp(v194)) goto v236;
    v194 = v276;
    v194 = qcar(v194);
    v276 = elt(env, 1); /* bag */
        return Lflagp(nil, v194, v276);

v236:
    v194 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v194);
}



/* Code for mkrootsql */

static Lisp_Object CC_mkrootsql(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v306, v273;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mkrootsql");
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
    v306 = stack[-1];
    if (v306 == nil) goto v270;
    v306 = stack[-1];
    v306 = qcar(v306);
    v273 = qcdr(v306);
    v306 = (Lisp_Object)17; /* 1 */
    v306 = (Lisp_Object)greaterp2(v273, v306);
    nil = C_nil;
    if (exception_pending()) goto v180;
    v306 = v306 ? lisp_true : nil;
    env = stack[-3];
    if (v306 == nil) goto v307;
    v306 = stack[-1];
    v306 = qcar(v306);
    v273 = qcar(v306);
    v306 = stack[0];
    fn = elt(env, 1); /* mkrootsq */
    v273 = (*qfn2(fn))(qenv(fn), v273, v306);
    nil = C_nil;
    if (exception_pending()) goto v180;
    env = stack[-3];
    v306 = stack[-1];
    v306 = qcar(v306);
    v306 = qcdr(v306);
    fn = elt(env, 2); /* exptsq */
    stack[-2] = (*qfn2(fn))(qenv(fn), v273, v306);
    nil = C_nil;
    if (exception_pending()) goto v180;
    env = stack[-3];
    v306 = stack[-1];
    v273 = qcdr(v306);
    v306 = stack[0];
    v306 = CC_mkrootsql(env, v273, v306);
    nil = C_nil;
    if (exception_pending()) goto v180;
    env = stack[-3];
    {
        Lisp_Object v308 = stack[-2];
        popv(4);
        fn = elt(env, 3); /* multsq */
        return (*qfn2(fn))(qenv(fn), v308, v306);
    }

v307:
    v306 = stack[-1];
    v306 = qcar(v306);
    v273 = qcar(v306);
    v306 = stack[0];
    fn = elt(env, 1); /* mkrootsq */
    stack[-2] = (*qfn2(fn))(qenv(fn), v273, v306);
    nil = C_nil;
    if (exception_pending()) goto v180;
    env = stack[-3];
    v306 = stack[-1];
    v273 = qcdr(v306);
    v306 = stack[0];
    v306 = CC_mkrootsql(env, v273, v306);
    nil = C_nil;
    if (exception_pending()) goto v180;
    env = stack[-3];
    {
        Lisp_Object v286 = stack[-2];
        popv(4);
        fn = elt(env, 3); /* multsq */
        return (*qfn2(fn))(qenv(fn), v286, v306);
    }

v270:
    v306 = (Lisp_Object)17; /* 1 */
    {
        popv(4);
        fn = elt(env, 4); /* !*d2q */
        return (*qfn1(fn))(qenv(fn), v306);
    }
/* error exit handlers */
v180:
    popv(4);
    return nil;
}



/* Code for maxfrom1 */

static Lisp_Object MS_CDECL CC_maxfrom1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v227, v192;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "maxfrom1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for maxfrom1");
#endif
    if (stack >= stacklimit)
    {
        push3(v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v2);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v2;
    stack[-1] = v1;
    stack[-2] = v0;
/* end of prologue */

v267:
    v227 = stack[-2];
    if (v227 == nil) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v227 = stack[-2];
    v227 = qcar(v227);
    v192 = qcar(v227);
    v227 = stack[-1];
    fn = elt(env, 1); /* pnth */
    v227 = (*qfn2(fn))(qenv(fn), v192, v227);
    nil = C_nil;
    if (exception_pending()) goto v262;
    env = stack[-3];
    v192 = qcar(v227);
    v227 = stack[0];
    fn = elt(env, 2); /* max */
    v227 = (*qfn2(fn))(qenv(fn), v192, v227);
    nil = C_nil;
    if (exception_pending()) goto v262;
    env = stack[-3];
    stack[0] = v227;
    v227 = stack[-2];
    v227 = qcdr(v227);
    stack[-2] = v227;
    goto v267;
/* error exit handlers */
v262:
    popv(4);
    return nil;
}



/* Code for lowupperlimitrd */

static Lisp_Object MS_CDECL CC_lowupperlimitrd(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v300, v294;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "lowupperlimitrd");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lowupperlimitrd");
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
    v300 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v235;
    env = stack[-3];
    stack[0] = v300;
    fn = elt(env, 6); /* lex */
    v300 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v235;
    env = stack[-3];
    v294 = qvalue(elt(env, 1)); /* char */
    v300 = elt(env, 2); /* (!/ l o w l i m i t) */
    if (equal(v294, v300)) goto v228;
    v294 = elt(env, 3); /* "</lowlimit>" */
    v300 = (Lisp_Object)33; /* 2 */
    fn = elt(env, 7); /* errorml */
    v300 = (*qfn2(fn))(qenv(fn), v294, v300);
    nil = C_nil;
    if (exception_pending()) goto v235;
    env = stack[-3];
    goto v245;

v245:
    stack[-1] = elt(env, 4); /* lowupperlimit */
    v300 = stack[-2];
    v300 = ncons(v300);
    nil = C_nil;
    if (exception_pending()) goto v235;
    {
        Lisp_Object v233 = stack[-1];
        Lisp_Object v234 = stack[0];
        popv(4);
        return list2star(v233, v234, v300);
    }

v228:
    fn = elt(env, 8); /* upperlimitrd */
    v300 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v235;
    env = stack[-3];
    stack[-2] = v300;
    goto v245;
/* error exit handlers */
v235:
    popv(4);
    return nil;
}



/* Code for copy_vect */

static Lisp_Object CC_copy_vect(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v257, v239, v201, v282;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for copy_vect");
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
    v257 = stack[-1];
    v257 = Lupbv(nil, v257);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-4];
    stack[-3] = v257;
    v257 = (Lisp_Object)1; /* 0 */
    stack[0] = v257;
    goto v264;

v264:
    v239 = stack[-3];
    v257 = stack[0];
    v257 = difference2(v239, v257);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-4];
    v257 = Lminusp(nil, v257);
    env = stack[-4];
    if (v257 == nil) goto v245;
    v257 = nil;
    { popv(5); return onevalue(v257); }

v245:
    v282 = stack[-2];
    v201 = stack[0];
    v239 = stack[-1];
    v257 = stack[0];
    v257 = *(Lisp_Object *)((char *)v239 + (CELL-TAG_VECTOR) + ((int32_t)v257/(16/CELL)));
    *(Lisp_Object *)((char *)v282 + (CELL-TAG_VECTOR) + ((int32_t)v201/(16/CELL))) = v257;
    v257 = stack[0];
    v257 = add1(v257);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-4];
    stack[0] = v257;
    goto v264;
/* error exit handlers */
v237:
    popv(5);
    return nil;
}



/* Code for remzzzz */

static Lisp_Object CC_remzzzz(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v239, v201, v282;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for remzzzz");
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
    v282 = nil;
    goto v267;

v267:
    v239 = stack[-1];
    if (v239 == nil) goto v220;
    v239 = stack[-1];
    v239 = qcar(v239);
    v201 = qcar(v239);
    v239 = stack[0];
    v239 = qcar(v239);
    v239 = qcar(v239);
    if (equal(v201, v239)) goto v276;
    v239 = stack[0];
    v239 = qcar(v239);
    v201 = v282;
    v239 = cons(v239, v201);
    nil = C_nil;
    if (exception_pending()) goto v232;
    env = stack[-2];
    v282 = v239;
    v239 = stack[0];
    v239 = qcdr(v239);
    stack[0] = v239;
    goto v267;

v276:
    v239 = stack[-1];
    v239 = qcdr(v239);
    stack[-1] = v239;
    v239 = stack[0];
    v239 = qcdr(v239);
    stack[0] = v239;
    goto v267;

v220:
    v201 = v282;
    v239 = stack[0];
    {
        popv(3);
        fn = elt(env, 1); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v201, v239);
    }
/* error exit handlers */
v232:
    popv(3);
    return nil;
}



/* Code for vdpcleanup */

static Lisp_Object MS_CDECL CC_vdpcleanup(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v251;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "vdpcleanup");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for vdpcleanup");
#endif
    if (stack >= stacklimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* end of prologue */
    v251 = qvalue(elt(env, 1)); /* nil */
    v251 = ncons(v251);
    nil = C_nil;
    if (exception_pending()) goto v244;
    env = stack[0];
    qvalue(elt(env, 2)) = v251; /* dipevlist!* */
    { popv(1); return onevalue(v251); }
/* error exit handlers */
v244:
    popv(1);
    return nil;
}



/* Code for indordln */

static Lisp_Object CC_indordln(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v294, v265;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for indordln");
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
    v265 = v0;
/* end of prologue */
    v294 = v265;
    if (v294 == nil) goto v244;
    v294 = v265;
    v294 = qcdr(v294);
    if (v294 == nil) { popv(2); return onevalue(v265); }
    v294 = v265;
    v294 = qcdr(v294);
    v294 = qcdr(v294);
    if (v294 == nil) goto v194;
    v294 = v265;
    stack[0] = qcar(v294);
    v294 = v265;
    v294 = qcdr(v294);
    v294 = CC_indordln(env, v294);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-1];
    {
        Lisp_Object v235 = stack[0];
        popv(2);
        fn = elt(env, 2); /* indordlad */
        return (*qfn2(fn))(qenv(fn), v235, v294);
    }

v194:
    v294 = v265;
    v294 = qcar(v294);
    v265 = qcdr(v265);
    v265 = qcar(v265);
    {
        popv(2);
        fn = elt(env, 3); /* indordl2 */
        return (*qfn2(fn))(qenv(fn), v294, v265);
    }

v244:
    v294 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v294); }
/* error exit handlers */
v284:
    popv(2);
    return nil;
}



/* Code for simp!-prop!-dist */

static Lisp_Object CC_simpKpropKdist(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v141, v143, v129;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for simp-prop-dist");
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
    v143 = v0;
/* end of prologue */
    v129 = v143;
    v141 = elt(env, 1); /* plus */
    if (!consp(v129)) goto v236;
    v129 = qcar(v129);
    if (!(v129 == v141)) goto v236;
    v141 = v143;
    v141 = qcdr(v141);
    v143 = v141;
    goto v251;

v251:
    v141 = v143;
    stack[-3] = v141;
    v141 = stack[-3];
    if (v141 == nil) goto v301;
    v141 = stack[-3];
    v141 = qcar(v141);
    v129 = v141;
    v143 = v129;
    v141 = elt(env, 3); /* times */
    if (!consp(v143)) goto v201;
    v143 = qcar(v143);
    if (!(v143 == v141)) goto v201;
    v141 = v129;
    v141 = qcdr(v141);
    goto v191;

v191:
    v129 = v141;
    v141 = v129;
    v141 = qcar(v141);
    if (!(is_number(v141))) goto v242;
    v141 = v129;
    v141 = qcdr(v141);
    v129 = v141;
    goto v242;

v242:
    v143 = v129;
    v141 = elt(env, 4); /* lambda_lqlbvd_8 */
    fn = elt(env, 7); /* sort */
    v141 = (*qfn2(fn))(qenv(fn), v143, v141);
    nil = C_nil;
    if (exception_pending()) goto v310;
    env = stack[-4];
    v141 = ncons(v141);
    nil = C_nil;
    if (exception_pending()) goto v310;
    env = stack[-4];
    stack[-1] = v141;
    stack[-2] = v141;
    goto v223;

v223:
    v141 = stack[-3];
    v141 = qcdr(v141);
    stack[-3] = v141;
    v141 = stack[-3];
    if (v141 == nil) goto v272;
    stack[0] = stack[-1];
    v141 = stack[-3];
    v141 = qcar(v141);
    v129 = v141;
    v143 = v129;
    v141 = elt(env, 3); /* times */
    if (!consp(v143)) goto v311;
    v143 = qcar(v143);
    if (!(v143 == v141)) goto v311;
    v141 = v129;
    v141 = qcdr(v141);
    goto v287;

v287:
    v129 = v141;
    v141 = v129;
    v141 = qcar(v141);
    if (!(is_number(v141))) goto v312;
    v141 = v129;
    v141 = qcdr(v141);
    v129 = v141;
    goto v312;

v312:
    v143 = v129;
    v141 = elt(env, 5); /* lambda_lqlbvd_9 */
    fn = elt(env, 7); /* sort */
    v141 = (*qfn2(fn))(qenv(fn), v143, v141);
    nil = C_nil;
    if (exception_pending()) goto v310;
    env = stack[-4];
    v141 = ncons(v141);
    nil = C_nil;
    if (exception_pending()) goto v310;
    env = stack[-4];
    v141 = Lrplacd(nil, stack[0], v141);
    nil = C_nil;
    if (exception_pending()) goto v310;
    env = stack[-4];
    v141 = stack[-1];
    v141 = qcdr(v141);
    stack[-1] = v141;
    goto v223;

v311:
    v141 = v129;
    v141 = ncons(v141);
    nil = C_nil;
    if (exception_pending()) goto v310;
    env = stack[-4];
    goto v287;

v272:
    v141 = stack[-2];
    goto v285;

v285:
    v143 = v141;
    v141 = elt(env, 6); /* simp!-prop!-order */
    {
        popv(5);
        fn = elt(env, 7); /* sort */
        return (*qfn2(fn))(qenv(fn), v143, v141);
    }

v201:
    v141 = v129;
    v141 = ncons(v141);
    nil = C_nil;
    if (exception_pending()) goto v310;
    env = stack[-4];
    goto v191;

v301:
    v141 = qvalue(elt(env, 2)); /* nil */
    goto v285;

v236:
    v141 = v143;
    v141 = ncons(v141);
    nil = C_nil;
    if (exception_pending()) goto v310;
    env = stack[-4];
    v143 = v141;
    goto v251;
/* error exit handlers */
v310:
    popv(5);
    return nil;
}



/* Code for lambda_lqlbvd_9 */

static Lisp_Object CC_lambda_lqlbvd_9(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v221, v236;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lambda_lqlbvd_9");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v221 = v1;
    v236 = v0;
/* end of prologue */
    v236 = qcdr(v236);
    v236 = qcar(v236);
    v221 = qcdr(v221);
    v221 = qcar(v221);
    {
        fn = elt(env, 1); /* ordp */
        return (*qfn2(fn))(qenv(fn), v236, v221);
    }
}



/* Code for lambda_lqlbvd_8 */

static Lisp_Object CC_lambda_lqlbvd_8(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v221, v236;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lambda_lqlbvd_8");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v221 = v1;
    v236 = v0;
/* end of prologue */
    v236 = qcdr(v236);
    v236 = qcar(v236);
    v221 = qcdr(v221);
    v221 = qcar(v221);
    {
        fn = elt(env, 1); /* ordp */
        return (*qfn2(fn))(qenv(fn), v236, v221);
    }
}



/* Code for bndtst */

static Lisp_Object CC_bndtst(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v294, v265;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for bndtst");
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
    v294 = qcdr(v294);
    v265 = qcar(v294);
    v294 = (Lisp_Object)1; /* 0 */
    v294 = (Lisp_Object)greaterp2(v265, v294);
    nil = C_nil;
    if (exception_pending()) goto v235;
    v294 = v294 ? lisp_true : nil;
    env = stack[-2];
    if (v294 == nil) goto v188;
    v294 = stack[0];
    v265 = v294;
    goto v270;

v270:
    v294 = qvalue(elt(env, 2)); /* tentothetenth!*!* */
    {
        popv(3);
        fn = elt(env, 3); /* greaterp!: */
        return (*qfn2(fn))(qenv(fn), v265, v294);
    }

v188:
    stack[-1] = elt(env, 1); /* !:rd!: */
    v294 = stack[0];
    v294 = qcdr(v294);
    v294 = qcar(v294);
    v265 = negate(v294);
    nil = C_nil;
    if (exception_pending()) goto v235;
    env = stack[-2];
    v294 = stack[0];
    v294 = qcdr(v294);
    v294 = qcdr(v294);
    v294 = list2star(stack[-1], v265, v294);
    nil = C_nil;
    if (exception_pending()) goto v235;
    env = stack[-2];
    v265 = v294;
    goto v270;
/* error exit handlers */
v235:
    popv(3);
    return nil;
}



/* Code for settcollectnonmultiprolongations */

static Lisp_Object CC_settcollectnonmultiprolongations(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v277, v248, v317;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for settcollectnonmultiprolongations");
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
    v277 = qvalue(elt(env, 1)); /* fluidbibasissett */
    v277 = qcar(v277);
    if (v277 == nil) goto v270;
    v277 = qvalue(elt(env, 1)); /* fluidbibasissett */
    v277 = qcar(v277);
    stack[-4] = v277;
    v248 = stack[-4];
    v277 = (Lisp_Object)17; /* 1 */
    v277 = *(Lisp_Object *)((char *)v248 + (CELL-TAG_VECTOR) + ((int32_t)v277/(16/CELL)));
    v277 = qcar(v277);
    fn = elt(env, 4); /* monomgetfirstmultivar */
    v277 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    v277 = (Lisp_Object)((int32_t)(v277) - 0x10);
    stack[-1] = v277;
    v277 = (Lisp_Object)17; /* 1 */
    stack[0] = v277;
    goto v121;

v121:
    v248 = stack[-1];
    v277 = stack[0];
    v277 = difference2(v248, v277);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    v277 = Lminusp(nil, v277);
    env = stack[-5];
    if (v277 == nil) goto v282;
    v277 = nil;
    { popv(6); return onevalue(v277); }

v282:
    v248 = stack[-4];
    v277 = stack[0];
    fn = elt(env, 5); /* tripleisprolongedby */
    v277 = (*qfn2(fn))(qenv(fn), v248, v277);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    if (!(v277 == nil)) goto v234;
    v248 = stack[-4];
    v277 = (Lisp_Object)17; /* 1 */
    v317 = *(Lisp_Object *)((char *)v248 + (CELL-TAG_VECTOR) + ((int32_t)v277/(16/CELL)));
    v248 = qvalue(elt(env, 3)); /* fluidbibasissinglevariablemonomialss 
*/
    v277 = stack[0];
    v277 = *(Lisp_Object *)((char *)v248 + (CELL-TAG_VECTOR) + ((int32_t)v277/(16/CELL)));
    fn = elt(env, 6); /* polynommultiplybymonom */
    v277 = (*qfn2(fn))(qenv(fn), v317, v277);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    stack[-2] = v277;
    v248 = stack[-4];
    v277 = stack[0];
    fn = elt(env, 7); /* triplesetprolongedby */
    v277 = (*qfn2(fn))(qenv(fn), v248, v277);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    v277 = stack[-2];
    v277 = qcar(v277);
    if (v277 == nil) goto v234;
    v317 = stack[-2];
    v248 = stack[-4];
    v277 = (Lisp_Object)33; /* 2 */
    v277 = *(Lisp_Object *)((char *)v248 + (CELL-TAG_VECTOR) + ((int32_t)v277/(16/CELL)));
    fn = elt(env, 8); /* createtriplewithancestor */
    v277 = (*qfn2(fn))(qenv(fn), v317, v277);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    stack[-2] = v277;
    v317 = stack[-2];
    v248 = stack[-4];
    v277 = (Lisp_Object)49; /* 3 */
    v277 = *(Lisp_Object *)((char *)v248 + (CELL-TAG_VECTOR) + ((int32_t)v277/(16/CELL)));
    fn = elt(env, 9); /* triplesetprolongset */
    v277 = (*qfn2(fn))(qenv(fn), v317, v277);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    v248 = stack[-3];
    v277 = stack[-2];
    fn = elt(env, 10); /* sortedtriplelistinsert */
    v277 = (*qfn2(fn))(qenv(fn), v248, v277);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    goto v234;

v234:
    v277 = stack[0];
    v277 = add1(v277);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    stack[0] = v277;
    goto v121;

v270:
    v277 = nil;
    { popv(6); return onevalue(v277); }
/* error exit handlers */
v318:
    popv(6);
    return nil;
}



/* Code for valuechk */

static Lisp_Object CC_valuechk(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v321, v216, v322;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for valuechk");
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
    v216 = stack[-1];
    v321 = elt(env, 1); /* number!-of!-args */
    v321 = get(v216, v321);
    env = stack[-3];
    stack[-2] = v321;
    if (v321 == nil) goto v229;
    v321 = stack[0];
    v216 = Llength(nil, v321);
    nil = C_nil;
    if (exception_pending()) goto v323;
    env = stack[-3];
    v321 = stack[-2];
    if (!(equal(v216, v321))) goto v272;

v229:
    v321 = stack[-2];
    if (v321 == nil) goto v224;
    v321 = qvalue(elt(env, 2)); /* nil */
    goto v304;

v304:
    if (!(v321 == nil)) goto v272;

v324:
    v216 = stack[-1];
    v321 = stack[0];
    v321 = cons(v216, v321);
    nil = C_nil;
    if (exception_pending()) goto v323;
    env = stack[-3];
    fn = elt(env, 9); /* opfchk!! */
    v321 = (*qfn1(fn))(qenv(fn), v321);
    nil = C_nil;
    if (exception_pending()) goto v323;
    env = stack[-3];
    stack[0] = v321;
    v321 = stack[0];
    if (v321 == nil) goto v311;
    v216 = stack[0];
    v321 = elt(env, 8); /* list */
    if (!consp(v216)) goto v277;
    v216 = qcar(v216);
    if (!(v216 == v321)) goto v277;
    v322 = stack[0];
    v216 = (Lisp_Object)17; /* 1 */
    v321 = (Lisp_Object)17; /* 1 */
    v321 = acons(v322, v216, v321);
    nil = C_nil;
    if (exception_pending()) goto v323;
    env = stack[-3];
    v321 = ncons(v321);
    nil = C_nil;
    if (exception_pending()) goto v323;
    env = stack[-3];
    v216 = v321;
    goto v325;

v325:
    v321 = (Lisp_Object)17; /* 1 */
    v321 = cons(v216, v321);
    nil = C_nil;
    if (exception_pending()) goto v323;
    env = stack[-3];
    stack[0] = v321;
    v321 = stack[0];
    fn = elt(env, 10); /* znumr */
    v321 = (*qfn1(fn))(qenv(fn), v321);
    nil = C_nil;
    if (exception_pending()) goto v323;
    env = stack[-3];
    if (v321 == nil) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v216 = qvalue(elt(env, 2)); /* nil */
    v321 = (Lisp_Object)17; /* 1 */
    popv(4);
    return cons(v216, v321);

v277:
    v321 = stack[0];
    v216 = v321;
    goto v325;

v311:
    v321 = nil;
    { popv(4); return onevalue(v321); }

v272:
    v216 = elt(env, 5); /* "Wrong number of arguments to" */
    v321 = stack[-1];
    v321 = list2(v216, v321);
    nil = C_nil;
    if (exception_pending()) goto v323;
    env = stack[-3];
    v216 = v321;
    v321 = v216;
    qvalue(elt(env, 6)) = v321; /* errmsg!* */
    v321 = qvalue(elt(env, 7)); /* !*protfg */
    if (!(v321 == nil)) goto v179;
    v321 = v216;
    fn = elt(env, 11); /* lprie */
    v321 = (*qfn1(fn))(qenv(fn), v321);
    nil = C_nil;
    if (exception_pending()) goto v323;
    env = stack[-3];
    goto v179;

v179:
    v321 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v323;
    env = stack[-3];
    goto v324;

v224:
    v321 = stack[0];
    if (v321 == nil) goto v190;
    v321 = stack[0];
    v321 = qcdr(v321);
    if (v321 == nil) goto v284;
    v216 = stack[-1];
    v321 = elt(env, 3); /* !:rd!: */
    v321 = get(v216, v321);
    env = stack[-3];
    if (!(v321 == nil)) goto v304;
    v216 = stack[-1];
    v321 = elt(env, 4); /* !:rn!: */
    v321 = get(v216, v321);
    env = stack[-3];
    goto v304;

v284:
    v321 = qvalue(elt(env, 2)); /* nil */
    goto v304;

v190:
    v321 = qvalue(elt(env, 2)); /* nil */
    goto v304;
/* error exit handlers */
v323:
    popv(4);
    return nil;
}



/* Code for get_dimension_in */

static Lisp_Object CC_get_dimension_in(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v219, v221;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for get_dimension_in");
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
    v219 = v0;
/* end of prologue */
    v221 = elt(env, 1); /* id */
    fn = elt(env, 2); /* get_rep_matrix_in */
    v219 = (*qfn2(fn))(qenv(fn), v221, v219);
    nil = C_nil;
    if (exception_pending()) goto v236;
    env = stack[0];
    fn = elt(env, 3); /* mk!+trace */
    v219 = (*qfn1(fn))(qenv(fn), v219);
    nil = C_nil;
    if (exception_pending()) goto v236;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 4); /* change!+sq!+to!+int */
        return (*qfn1(fn))(qenv(fn), v219);
    }
/* error exit handlers */
v236:
    popv(1);
    return nil;
}



/* Code for evalnumberp */

static Lisp_Object CC_evalnumberp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v298, v299, v240;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for evalnumberp");
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
    v298 = v0;
/* end of prologue */
    fn = elt(env, 5); /* aeval */
    v298 = (*qfn1(fn))(qenv(fn), v298);
    nil = C_nil;
    if (exception_pending()) goto v241;
    env = stack[0];
    v240 = v298;
    v298 = v240;
    if (!consp(v298)) goto v268;
    v298 = v240;
    v299 = qcar(v298);
    v298 = elt(env, 1); /* !*sq */
    if (v299 == v298) goto v189;
    v298 = qvalue(elt(env, 2)); /* t */
    goto v221;

v221:
    if (v298 == nil) goto v192;
    v298 = qvalue(elt(env, 3)); /* nil */
    { popv(1); return onevalue(v298); }

v192:
    v298 = v240;
    v298 = qcdr(v298);
    v298 = qcar(v298);
    v298 = qcar(v298);
    v299 = v298;
    v298 = v299;
    if (!consp(v298)) goto v284;
    v298 = v299;
    v298 = qcar(v298);
    v299 = elt(env, 4); /* numbertag */
        popv(1);
        return Lflagp(nil, v298, v299);

v284:
    v298 = qvalue(elt(env, 2)); /* t */
    { popv(1); return onevalue(v298); }

v189:
    v298 = v240;
    v298 = qcdr(v298);
    v298 = qcar(v298);
    v298 = qcdr(v298);
    v298 = (consp(v298) ? nil : lisp_true);
    v298 = (v298 == nil ? lisp_true : nil);
    goto v221;

v268:
    v298 = v240;
    v298 = (is_number(v298) ? lisp_true : nil);
    { popv(1); return onevalue(v298); }
/* error exit handlers */
v241:
    popv(1);
    return nil;
}



/* Code for depend!-p */

static Lisp_Object CC_dependKp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v240, v241, v242, v307;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for depend-p");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v242 = v1;
    v307 = v0;
/* end of prologue */
    v241 = v307;
    v240 = v242;
    if (v241 == v240) goto v270;
    v240 = v307;
    if (!consp(v240)) goto v221;
    v240 = v307;
    v240 = qcar(v240);
    if (!consp(v240)) goto v225;
    v240 = v307;
    v241 = v242;
    {
        fn = elt(env, 4); /* depend!-f */
        return (*qfn2(fn))(qenv(fn), v240, v241);
    }

v225:
    v240 = v307;
    v241 = qcar(v240);
    v240 = elt(env, 3); /* !*sq */
    if (v241 == v240) goto v294;
    v240 = v307;
    v240 = qcdr(v240);
    v241 = v242;
    {
        fn = elt(env, 5); /* depend!-l */
        return (*qfn2(fn))(qenv(fn), v240, v241);
    }

v294:
    v240 = v307;
    v240 = qcdr(v240);
    v240 = qcar(v240);
    v241 = v242;
    {
        fn = elt(env, 6); /* depend!-sq */
        return (*qfn2(fn))(qenv(fn), v240, v241);
    }

v221:
    v240 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v240);

v270:
    v240 = qvalue(elt(env, 1)); /* t */
    return onevalue(v240);
}



/* Code for ratpoly_tad */

static Lisp_Object CC_ratpoly_tad(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v260, v230;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ratpoly_tad");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v260 = v0;
/* end of prologue */
    v230 = qcar(v260);
    v260 = (Lisp_Object)17; /* 1 */
    return cons(v230, v260);
}



/* Code for matrixelems */

static Lisp_Object CC_matrixelems(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v297, v301;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for matrixelems");
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
    v301 = nil;
    goto v270;

v270:
    v297 = stack[0];
    if (v297 == nil) goto v285;
    v297 = stack[0];
    v297 = qcar(v297);
    v297 = qcdr(v297);
    v297 = qcdr(v297);
    v297 = cons(v297, v301);
    nil = C_nil;
    if (exception_pending()) goto v304;
    env = stack[-1];
    v301 = v297;
    v297 = stack[0];
    v297 = qcdr(v297);
    stack[0] = v297;
    goto v270;

v285:
    v297 = v301;
    {
        popv(2);
        fn = elt(env, 1); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v297);
    }
/* error exit handlers */
v304:
    popv(2);
    return nil;
}



/* Code for ps!:times!-erule */

static Lisp_Object CC_psTtimesKerule(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v320, v277;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ps:times-erule");
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
    stack[-8] = v1;
    v277 = v0;
/* end of prologue */
    v320 = v277;
    v320 = qcdr(v320);
    v320 = qcar(v320);
    stack[-9] = v320;
    v320 = v277;
    v320 = qcdr(v320);
    v320 = qcdr(v320);
    v320 = qcar(v320);
    stack[-7] = v320;
    v277 = qvalue(elt(env, 1)); /* nil */
    v320 = (Lisp_Object)17; /* 1 */
    v320 = cons(v277, v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    stack[0] = v320;
    v320 = stack[-9];
    fn = elt(env, 3); /* ps!:order */
    v320 = (*qfn1(fn))(qenv(fn), v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    stack[-6] = v320;
    v320 = qvalue(elt(env, 2)); /* ps */
    fn = elt(env, 3); /* ps!:order */
    v320 = (*qfn1(fn))(qenv(fn), v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    stack[-5] = v320;
    v320 = stack[-7];
    fn = elt(env, 3); /* ps!:order */
    v320 = (*qfn1(fn))(qenv(fn), v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    stack[-4] = v320;
    v320 = (Lisp_Object)1; /* 0 */
    stack[-3] = v320;
    goto v257;

v257:
    v277 = stack[-8];
    v320 = stack[-5];
    v277 = difference2(v277, v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    v320 = stack[-3];
    v320 = difference2(v277, v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    v320 = Lminusp(nil, v320);
    env = stack[-10];
    if (!(v320 == nil)) { Lisp_Object res = stack[0]; popv(11); return onevalue(res); }
    v277 = stack[-8];
    v320 = stack[-6];
    v277 = difference2(v277, v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    v320 = stack[-3];
    v277 = difference2(v277, v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    v320 = stack[-4];
    v320 = (Lisp_Object)geq2(v277, v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    v320 = v320 ? lisp_true : nil;
    env = stack[-10];
    if (v320 == nil) goto v182;
    stack[-2] = stack[0];
    stack[0] = stack[-9];
    v277 = stack[-3];
    v320 = stack[-6];
    v320 = plus2(v277, v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    fn = elt(env, 4); /* ps!:evaluate */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[0], v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    stack[0] = stack[-7];
    v277 = stack[-8];
    v320 = stack[-6];
    v277 = difference2(v277, v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    v320 = stack[-3];
    v320 = difference2(v277, v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    fn = elt(env, 4); /* ps!:evaluate */
    v320 = (*qfn2(fn))(qenv(fn), stack[0], v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    fn = elt(env, 5); /* multsq */
    v320 = (*qfn2(fn))(qenv(fn), stack[-1], v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    fn = elt(env, 6); /* addsq */
    v320 = (*qfn2(fn))(qenv(fn), stack[-2], v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    stack[0] = v320;
    goto v182;

v182:
    v320 = stack[-3];
    v320 = add1(v320);
    nil = C_nil;
    if (exception_pending()) goto v259;
    env = stack[-10];
    stack[-3] = v320;
    goto v257;
/* error exit handlers */
v259:
    popv(11);
    return nil;
}



/* Code for diford */

static Lisp_Object CC_diford(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v267;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for diford");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v267 = v0;
/* end of prologue */
    v267 = qcdr(v267);
    v267 = qcdr(v267);
    {
        fn = elt(env, 1); /* lengthn */
        return (*qfn1(fn))(qenv(fn), v267);
    }
}



/* Code for mkbc */

static Lisp_Object CC_mkbc(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v170, v319;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mkbc");
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

v270:
    v170 = stack[-1];
    v170 = (is_number(v170) ? lisp_true : nil);
    if (!(v170 == nil)) goto v268;
    v170 = stack[-1];
    fn = elt(env, 6); /* f2dip11 */
    v170 = (*qfn1(fn))(qenv(fn), v170);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-3];
    goto v268;

v268:
    v170 = stack[0];
    v170 = (is_number(v170) ? lisp_true : nil);
    if (!(v170 == nil)) goto v219;
    v170 = stack[0];
    fn = elt(env, 6); /* f2dip11 */
    v170 = (*qfn1(fn))(qenv(fn), v170);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-3];
    goto v219;

v219:
    v170 = qvalue(elt(env, 1)); /* !*grmod!* */
    if (v170 == nil) goto v190;
    v170 = stack[0];
    v170 = Lmodular_reciprocal(nil, v170);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-3];
    v170 = times2(stack[-1], v170);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-3];
    {
        popv(4);
        fn = elt(env, 7); /* bcfi */
        return (*qfn1(fn))(qenv(fn), v170);
    }

v190:
    v319 = stack[0];
    v170 = (Lisp_Object)17; /* 1 */
    if (v319 == v170) goto v234;
    v170 = stack[0];
    fn = elt(env, 8); /* minusf */
    v170 = (*qfn1(fn))(qenv(fn), v170);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-3];
    if (v170 == nil) goto v305;
    v170 = stack[-1];
    fn = elt(env, 9); /* negf */
    v170 = (*qfn1(fn))(qenv(fn), v170);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-3];
    stack[-1] = v170;
    v170 = stack[0];
    fn = elt(env, 9); /* negf */
    v170 = (*qfn1(fn))(qenv(fn), v170);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-3];
    stack[0] = v170;
    goto v270;

v305:
    v319 = stack[-1];
    v170 = stack[0];
    fn = elt(env, 10); /* gcdf */
    v170 = (*qfn2(fn))(qenv(fn), v319, v170);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-3];
    stack[-2] = v170;
    v170 = qvalue(elt(env, 3)); /* !*exp */
    if (v170 == nil) goto v326;
    v170 = qvalue(elt(env, 5)); /* !*mcd */
    v170 = (v170 == nil ? lisp_true : nil);
    goto v324;

v324:
    if (v170 == nil) goto v314;
    v319 = stack[-1];
    v170 = stack[-2];
    fn = elt(env, 11); /* quotf */
    v170 = (*qfn2(fn))(qenv(fn), v319, v170);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-3];
    stack[-1] = v170;
    goto v180;

v180:
    v170 = qvalue(elt(env, 3)); /* !*exp */
    if (v170 == nil) goto v296;
    v170 = qvalue(elt(env, 5)); /* !*mcd */
    v170 = (v170 == nil ? lisp_true : nil);
    goto v295;

v295:
    if (v170 == nil) goto v258;
    v319 = stack[0];
    v170 = stack[-2];
    fn = elt(env, 11); /* quotf */
    v170 = (*qfn2(fn))(qenv(fn), v319, v170);
    nil = C_nil;
    if (exception_pending()) goto v321;
    goto v308;

v308:
    {
        Lisp_Object v216 = stack[-1];
        popv(4);
        return cons(v216, v170);
    }

v258:
    v319 = stack[0];
    v170 = stack[-2];
    fn = elt(env, 12); /* quotfx1 */
    v170 = (*qfn2(fn))(qenv(fn), v319, v170);
    nil = C_nil;
    if (exception_pending()) goto v321;
    goto v308;

v296:
    v170 = qvalue(elt(env, 4)); /* t */
    goto v295;

v314:
    v319 = stack[-1];
    v170 = stack[-2];
    fn = elt(env, 12); /* quotfx1 */
    v170 = (*qfn2(fn))(qenv(fn), v319, v170);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-3];
    stack[-1] = v170;
    goto v180;

v326:
    v170 = qvalue(elt(env, 4)); /* t */
    goto v324;

v234:
    v319 = stack[-1];
    v170 = (Lisp_Object)17; /* 1 */
    if (v319 == v170) goto v235;
    v319 = stack[-1];
    v170 = stack[0];
    popv(4);
    return cons(v319, v170);

v235:
    v170 = elt(env, 2); /* (1 . 1) */
    { popv(4); return onevalue(v170); }
/* error exit handlers */
v321:
    popv(4);
    return nil;
}



/* Code for exdf0 */

static Lisp_Object CC_exdf0(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v190, v191;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for exdf0");
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
    v190 = stack[0];
    v190 = qcar(v190);
    fn = elt(env, 1); /* exdff0 */
    stack[-1] = (*qfn1(fn))(qenv(fn), v190);
    nil = C_nil;
    if (exception_pending()) goto v300;
    env = stack[-2];
    v190 = stack[0];
    v190 = qcdr(v190);
    fn = elt(env, 2); /* negf */
    v190 = (*qfn1(fn))(qenv(fn), v190);
    nil = C_nil;
    if (exception_pending()) goto v300;
    env = stack[-2];
    fn = elt(env, 1); /* exdff0 */
    v191 = (*qfn1(fn))(qenv(fn), v190);
    nil = C_nil;
    if (exception_pending()) goto v300;
    env = stack[-2];
    v190 = stack[0];
    fn = elt(env, 3); /* multpfsq */
    v190 = (*qfn2(fn))(qenv(fn), v191, v190);
    nil = C_nil;
    if (exception_pending()) goto v300;
    env = stack[-2];
    fn = elt(env, 4); /* addpf */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[-1], v190);
    nil = C_nil;
    if (exception_pending()) goto v300;
    env = stack[-2];
    v191 = (Lisp_Object)17; /* 1 */
    v190 = stack[0];
    v190 = qcdr(v190);
    v190 = cons(v191, v190);
    nil = C_nil;
    if (exception_pending()) goto v300;
    env = stack[-2];
    {
        Lisp_Object v294 = stack[-1];
        popv(3);
        fn = elt(env, 3); /* multpfsq */
        return (*qfn2(fn))(qenv(fn), v294, v190);
    }
/* error exit handlers */
v300:
    popv(3);
    return nil;
}



/* Code for ratmean */

static Lisp_Object CC_ratmean(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v219, v221, v236;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ratmean");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v219 = v1;
    v221 = v0;
/* end of prologue */
    v236 = v221;
    v221 = v219;
    v219 = qvalue(elt(env, 1)); /* t */
    {
        fn = elt(env, 2); /* ratplusm */
        return (*qfnn(fn))(qenv(fn), 3, v236, v221, v219);
    }
}



/* Code for s_actual_world1 */

static Lisp_Object CC_s_actual_world1(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object v267;
#ifdef DEBUG
    if (check_env(env)) return aerror("env for s_actual_world1");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v267 = v0;
/* end of prologue */
    v267 = qcar(v267);
    v267 = qcar(v267);
    v267 = qcar(v267);
    return onevalue(v267);
}



/* Code for compactf1 */

static Lisp_Object MS_CDECL CC_compactf1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, Lisp_Object v251, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v121, v262, v300, v294, v265;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "compactf1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for compactf1");
#endif
    if (stack >= stacklimit)
    {
        push4(v251,v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0,v1,v2,v251);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v251;
    stack[-1] = v2;
    stack[-2] = v1;
    stack[-3] = v0;
/* end of prologue */
    v262 = stack[-1];
    v121 = stack[0];
    fn = elt(env, 1); /* intersection */
    v121 = (*qfn2(fn))(qenv(fn), v262, v121);
    nil = C_nil;
    if (exception_pending()) goto v234;
    env = stack[-4];
    v262 = v121;
    if (v262 == nil) { Lisp_Object res = stack[-3]; popv(5); return onevalue(res); }
    v265 = stack[-3];
    v294 = stack[-2];
    v300 = stack[-1];
    v262 = stack[0];
    {
        popv(5);
        fn = elt(env, 2); /* compactf11 */
        return (*qfnn(fn))(qenv(fn), 5, v265, v294, v300, v262, v121);
    }
/* error exit handlers */
v234:
    popv(5);
    return nil;
}



/* Code for pa_list2vect */

static Lisp_Object CC_pa_list2vect(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v215, v258;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pa_list2vect");
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
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-5] = v1;
    stack[0] = v0;
/* end of prologue */
    stack[-4] = nil;
    v215 = (Lisp_Object)1; /* 0 */
    stack[-3] = v215;
    v215 = stack[-5];
    v215 = sub1(v215);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-7];
    v215 = Lmkvect(nil, v215);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-7];
    stack[-6] = v215;
    v215 = stack[0];
    stack[-2] = v215;
    goto v221;

v221:
    v215 = stack[-2];
    if (v215 == nil) goto v219;
    v215 = stack[-2];
    v215 = qcar(v215);
    stack[0] = v215;
    v258 = elt(env, 2); /* min */
    v215 = stack[0];
    v215 = cons(v258, v215);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-7];
    fn = elt(env, 3); /* eval */
    v258 = (*qfn1(fn))(qenv(fn), v215);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-7];
    v215 = stack[-4];
    v215 = cons(v258, v215);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-7];
    stack[-4] = v215;
    v215 = stack[0];
    stack[-1] = v215;
    goto v284;

v284:
    v215 = stack[-1];
    if (v215 == nil) goto v266;
    v215 = stack[-1];
    v215 = qcar(v215);
    stack[0] = stack[-6];
    v258 = sub1(v215);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-7];
    v215 = stack[-4];
    v215 = qcar(v215);
    *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v258/(16/CELL))) = v215;
    v215 = stack[-1];
    v215 = qcdr(v215);
    stack[-1] = v215;
    goto v284;

v266:
    v215 = stack[-2];
    v215 = qcdr(v215);
    stack[-2] = v215;
    goto v221;

v219:
    v215 = (Lisp_Object)17; /* 1 */
    stack[-1] = v215;
    goto v273;

v273:
    v258 = stack[-5];
    v215 = stack[-1];
    v215 = difference2(v258, v215);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-7];
    v215 = Lminusp(nil, v215);
    env = stack[-7];
    if (v215 == nil) goto v324;
    v215 = stack[-4];
    v258 = Lreverse(nil, v215);
    nil = C_nil;
    if (exception_pending()) goto v319;
    v215 = stack[-6];
    popv(8);
    return cons(v258, v215);

v324:
    stack[0] = stack[-6];
    v215 = stack[-1];
    v215 = sub1(v215);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-7];
    v215 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v215/(16/CELL)));
    if (!(v215 == nil)) goto v252;
    v258 = stack[-3];
    v215 = (Lisp_Object)1; /* 0 */
    if (!(v258 == v215)) goto v250;
    v215 = stack[-1];
    stack[-3] = v215;
    v258 = stack[-3];
    v215 = stack[-4];
    v215 = cons(v258, v215);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-7];
    stack[-4] = v215;
    goto v250;

v250:
    stack[0] = stack[-6];
    v215 = stack[-1];
    v258 = sub1(v215);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-7];
    v215 = stack[-3];
    *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v258/(16/CELL))) = v215;
    goto v252;

v252:
    v215 = stack[-1];
    v215 = add1(v215);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-7];
    stack[-1] = v215;
    goto v273;
/* error exit handlers */
v319:
    popv(8);
    return nil;
}



/* Code for simpsqrt2 */

static Lisp_Object CC_simpsqrt2(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v234, v257;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for simpsqrt2");
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
    v234 = stack[0];
    fn = elt(env, 2); /* minusf */
    v234 = (*qfn1(fn))(qenv(fn), v234);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-1];
    if (v234 == nil) goto v266;
    v257 = stack[0];
    v234 = (Lisp_Object)-15; /* -1 */
    v234 = Leqn(nil, v257, v234);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-1];
    if (v234 == nil) goto v263;
    v234 = qvalue(elt(env, 1)); /* gaussiani */
    { popv(2); return onevalue(v234); }

v263:
    v234 = stack[0];
    fn = elt(env, 3); /* negf */
    v234 = (*qfn1(fn))(qenv(fn), v234);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-1];
    v257 = v234;
    v234 = v257;
    if (is_number(v234)) goto v226;
    v234 = stack[0];
    {
        popv(2);
        fn = elt(env, 4); /* simpsqrt3 */
        return (*qfn1(fn))(qenv(fn), v234);
    }

v226:
    stack[0] = qvalue(elt(env, 1)); /* gaussiani */
    v234 = v257;
    fn = elt(env, 4); /* simpsqrt3 */
    v234 = (*qfn1(fn))(qenv(fn), v234);
    nil = C_nil;
    if (exception_pending()) goto v201;
    env = stack[-1];
    {
        Lisp_Object v282 = stack[0];
        popv(2);
        fn = elt(env, 5); /* multf */
        return (*qfn2(fn))(qenv(fn), v282, v234);
    }

v266:
    v234 = stack[0];
    {
        popv(2);
        fn = elt(env, 4); /* simpsqrt3 */
        return (*qfn1(fn))(qenv(fn), v234);
    }
/* error exit handlers */
v201:
    popv(2);
    return nil;
}



/* Code for lesspcar */

static Lisp_Object CC_lesspcar(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v220, v219;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lesspcar");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v220 = v1;
    v219 = v0;
/* end of prologue */
    v219 = qcar(v219);
    v220 = qcar(v220);
        return Llessp(nil, v219, v220);
}



/* Code for simpquot */

static Lisp_Object CC_simpquot(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v160, v157;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for simpquot");
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
    v160 = stack[-1];
    v160 = qcar(v160);
    fn = elt(env, 11); /* simp */
    stack[0] = (*qfn1(fn))(qenv(fn), v160);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-3];
    v160 = stack[-1];
    v160 = qcdr(v160);
    v160 = qcar(v160);
    fn = elt(env, 11); /* simp */
    v160 = (*qfn1(fn))(qenv(fn), v160);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-3];
    stack[-2] = stack[0];
    stack[0] = v160;
    v160 = stack[0];
    v160 = qcar(v160);
    if (v160 == nil) goto v220;
    v157 = qvalue(elt(env, 5)); /* dmode!* */
    v160 = elt(env, 6); /* (!:rd!: !:cr!:) */
    v160 = Lmemq(nil, v157, v160);
    if (v160 == nil) goto v344;
    v160 = stack[0];
    v160 = qcar(v160);
    if (!consp(v160)) goto v185;
    v160 = stack[0];
    v160 = qcar(v160);
    v160 = qcar(v160);
    v160 = (consp(v160) ? nil : lisp_true);
    goto v187;

v187:
    if (v160 == nil) goto v345;
    v160 = stack[0];
    v160 = qcdr(v160);
    if (!consp(v160)) goto v181;
    v160 = stack[0];
    v160 = qcdr(v160);
    v160 = qcar(v160);
    v160 = (consp(v160) ? nil : lisp_true);
    goto v309;

v309:
    if (v160 == nil) goto v217;
    v160 = stack[-2];
    v160 = qcdr(v160);
    if (!consp(v160)) goto v176;
    v160 = stack[-2];
    v160 = qcdr(v160);
    v160 = qcar(v160);
    v160 = (consp(v160) ? nil : lisp_true);
    goto v178;

v178:
    if (v160 == nil) goto v346;
    v160 = stack[0];
    v160 = qcdr(v160);
    if (!consp(v160)) goto v271;
    v160 = stack[0];
    v160 = qcdr(v160);
    v157 = qcar(v160);
    v160 = elt(env, 8); /* onep */
    v157 = get(v157, v160);
    env = stack[-3];
    v160 = stack[0];
    v160 = qcdr(v160);
    v160 = Lapply1(nil, v157, v160);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-3];
    goto v329;

v329:
    if (v160 == nil) goto v314;
    v160 = stack[-2];
    v160 = qcdr(v160);
    if (!consp(v160)) goto v347;
    v160 = stack[-2];
    v160 = qcdr(v160);
    v157 = qcar(v160);
    v160 = elt(env, 8); /* onep */
    v157 = get(v157, v160);
    env = stack[-3];
    v160 = stack[-2];
    v160 = qcdr(v160);
    v160 = Lapply1(nil, v157, v160);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-3];
    goto v242;

v242:
    if (v160 == nil) goto v344;
    v160 = stack[-2];
    v160 = qcar(v160);
    if (v160 == nil) goto v218;
    v160 = stack[-2];
    v157 = qcar(v160);
    v160 = stack[0];
    v160 = qcar(v160);
    fn = elt(env, 12); /* divd */
    v160 = (*qfn2(fn))(qenv(fn), v157, v160);
    nil = C_nil;
    if (exception_pending()) goto v147;
    v157 = v160;
    goto v348;

v348:
    v160 = (Lisp_Object)17; /* 1 */
    popv(4);
    return cons(v157, v160);

v218:
    v160 = qvalue(elt(env, 9)); /* nil */
    v157 = v160;
    goto v348;

v344:
    stack[0] = stack[-2];
    v160 = stack[-1];
    v160 = qcdr(v160);
    fn = elt(env, 13); /* simprecip */
    v160 = (*qfn1(fn))(qenv(fn), v160);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-3];
    fn = elt(env, 14); /* multsq */
    v160 = (*qfn2(fn))(qenv(fn), stack[0], v160);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-3];
    stack[-1] = v160;
    v160 = qvalue(elt(env, 10)); /* !*modular */
    if (v160 == nil) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v160 = stack[-1];
    v160 = qcdr(v160);
    if (!(v160 == nil)) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v160 = elt(env, 4); /* "Zero divisor" */
    v157 = v160;
    v160 = v157;
    qvalue(elt(env, 2)) = v160; /* errmsg!* */
    v160 = qvalue(elt(env, 3)); /* !*protfg */
    if (!(v160 == nil)) goto v349;
    v160 = v157;
    fn = elt(env, 15); /* lprie */
    v160 = (*qfn1(fn))(qenv(fn), v160);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-3];
    goto v349;

v349:
    v160 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v147;
    { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }

v347:
    v160 = stack[-2];
    v160 = qcdr(v160);
    v160 = Lonep(nil, v160);
    env = stack[-3];
    goto v242;

v314:
    v160 = qvalue(elt(env, 9)); /* nil */
    goto v242;

v271:
    v160 = stack[0];
    v160 = qcdr(v160);
    v160 = Lonep(nil, v160);
    env = stack[-3];
    goto v329;

v346:
    v160 = qvalue(elt(env, 9)); /* nil */
    goto v242;

v176:
    v160 = qvalue(elt(env, 7)); /* t */
    goto v178;

v217:
    v160 = qvalue(elt(env, 9)); /* nil */
    goto v242;

v181:
    v160 = qvalue(elt(env, 7)); /* t */
    goto v309;

v345:
    v160 = qvalue(elt(env, 9)); /* nil */
    goto v242;

v185:
    v160 = qvalue(elt(env, 7)); /* t */
    goto v187;

v220:
    v160 = stack[-2];
    v160 = qcar(v160);
    if (v160 == nil) goto v194;
    v160 = elt(env, 4); /* "Zero divisor" */
    v157 = v160;
    v160 = v157;
    qvalue(elt(env, 2)) = v160; /* errmsg!* */
    v160 = qvalue(elt(env, 3)); /* !*protfg */
    if (!(v160 == nil)) goto v266;
    v160 = v157;
    fn = elt(env, 15); /* lprie */
    v160 = (*qfn1(fn))(qenv(fn), v160);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-3];
    goto v266;

v266:
    v160 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v147;
    v160 = nil;
    { popv(4); return onevalue(v160); }

v194:
    v160 = elt(env, 1); /* "0/0 formed" */
    v157 = v160;
    v160 = v157;
    qvalue(elt(env, 2)) = v160; /* errmsg!* */
    v160 = qvalue(elt(env, 3)); /* !*protfg */
    if (!(v160 == nil)) goto v301;
    v160 = v157;
    fn = elt(env, 15); /* lprie */
    v160 = (*qfn1(fn))(qenv(fn), v160);
    nil = C_nil;
    if (exception_pending()) goto v147;
    env = stack[-3];
    goto v301;

v301:
    v160 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v147;
    v160 = nil;
    { popv(4); return onevalue(v160); }
/* error exit handlers */
v147:
    popv(4);
    return nil;
}



/* Code for remainder!-mod!-p */

static Lisp_Object CC_remainderKmodKp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v255, v232, v231;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for remainder-mod-p");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v255 = v1;
    v231 = v0;
/* end of prologue */
    v232 = v255;
    if (v232 == nil) goto v270;
    v232 = v255;
    if (!consp(v232)) goto v219;
    v232 = v255;
    v232 = qcar(v232);
    v232 = (consp(v232) ? nil : lisp_true);
    goto v220;

v220:
    if (v232 == nil) goto v260;
    v255 = qvalue(elt(env, 3)); /* nil */
    return onevalue(v255);

v260:
    v232 = v231;
    if (!consp(v232)) goto v297;
    v232 = v231;
    v232 = qcar(v232);
    v232 = (consp(v232) ? nil : lisp_true);
    goto v189;

v189:
    if (!(v232 == nil)) return onevalue(v231);
    v232 = v255;
    v255 = qcar(v255);
    v255 = qcar(v255);
    v255 = qcar(v255);
    {
        fn = elt(env, 4); /* xremainder!-mod!-p */
        return (*qfnn(fn))(qenv(fn), 3, v231, v232, v255);
    }

v297:
    v232 = qvalue(elt(env, 2)); /* t */
    goto v189;

v219:
    v232 = qvalue(elt(env, 2)); /* t */
    goto v220;

v270:
    v255 = elt(env, 1); /* "B=0 IN REMAINDER-MOD-P" */
    {
        fn = elt(env, 5); /* errorf */
        return (*qfn1(fn))(qenv(fn), v255);
    }
}



/* Code for cl_trygaussvar */

static Lisp_Object MS_CDECL CC_cl_trygaussvar(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, Lisp_Object v251,
                         Lisp_Object v244, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v311, v177, v350, v290, v315;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 5, "cl_trygaussvar");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for cl_trygaussvar");
#endif
    if (stack >= stacklimit)
    {
        push5(v244,v251,v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop5(v0,v1,v2,v251,v244);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v244;
    stack[-1] = v251;
    stack[-2] = v2;
    stack[-3] = v1;
    stack[-4] = v0;
/* end of prologue */
    v311 = stack[-4];
    fn = elt(env, 4); /* cl_atfp */
    v311 = (*qfn1(fn))(qenv(fn), v311);
    nil = C_nil;
    if (exception_pending()) goto v214;
    env = stack[-5];
    if (v311 == nil) goto v304;
    v315 = stack[-4];
    v290 = stack[-3];
    v350 = stack[-2];
    v177 = stack[-1];
    v311 = stack[0];
    {
        popv(6);
        fn = elt(env, 5); /* rl_qefsolset */
        return (*qfnn(fn))(qenv(fn), 5, v315, v290, v350, v177, v311);
    }

v304:
    v311 = stack[-4];
    if (!consp(v311)) goto v191;
    v311 = stack[-4];
    v311 = qcar(v311);
    v177 = v311;
    goto v225;

v225:
    v311 = elt(env, 1); /* and */
    if (v177 == v311) goto v234;
    v311 = stack[-4];
    if (!consp(v311)) goto v256;
    v311 = stack[-4];
    v311 = qcar(v311);
    v177 = v311;
    goto v185;

v185:
    v311 = elt(env, 2); /* or */
    if (v177 == v311) goto v273;
    v311 = elt(env, 3); /* (failed) */
    { popv(6); return onevalue(v311); }

v273:
    v311 = stack[-4];
    v315 = qcdr(v311);
    v290 = stack[-3];
    v350 = stack[-2];
    v177 = stack[-1];
    v311 = stack[0];
    {
        popv(6);
        fn = elt(env, 6); /* cl_gaussor */
        return (*qfnn(fn))(qenv(fn), 5, v315, v290, v350, v177, v311);
    }

v256:
    v311 = stack[-4];
    v177 = v311;
    goto v185;

v234:
    v311 = stack[-4];
    v315 = qcdr(v311);
    v290 = stack[-3];
    v350 = stack[-2];
    v177 = stack[-1];
    v311 = stack[0];
    {
        popv(6);
        fn = elt(env, 7); /* cl_gaussand */
        return (*qfnn(fn))(qenv(fn), 5, v315, v290, v350, v177, v311);
    }

v191:
    v311 = stack[-4];
    v177 = v311;
    goto v225;
/* error exit handlers */
v214:
    popv(6);
    return nil;
}



/* Code for totalcompareconstants */

static Lisp_Object CC_totalcompareconstants(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v352, v353, v354;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for totalcompareconstants");
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
    v353 = stack[-2];
    v352 = stack[-1];
    if (equal(v353, v352)) goto v270;
    v352 = stack[-2];
    if (!consp(v352)) goto v194;
    v352 = stack[-2];
    v352 = qcar(v352);
    v352 = (consp(v352) ? nil : lisp_true);
    goto v193;

v193:
    if (v352 == nil) goto v236;
    v352 = stack[-1];
    if (!consp(v352)) goto v226;
    v352 = stack[-1];
    v352 = qcar(v352);
    v352 = (consp(v352) ? nil : lisp_true);
    goto v225;

v225:
    if (v352 == nil) goto v303;
    v352 = stack[-2];
    v353 = v352;
    if (!(v353 == nil)) goto v239;
    v352 = (Lisp_Object)1; /* 0 */
    v353 = v352;
    goto v239;

v239:
    v352 = stack[-1];
    if (!(v352 == nil)) goto v201;
    v352 = (Lisp_Object)1; /* 0 */
    goto v201;

v201:
    v352 = (Lisp_Object)lessp2(v353, v352);
    nil = C_nil;
    if (exception_pending()) goto v152;
    v352 = v352 ? lisp_true : nil;
    env = stack[-4];
    if (v352 == nil) goto v242;
    v352 = elt(env, 3); /* less */
    { popv(5); return onevalue(v352); }

v242:
    v352 = elt(env, 4); /* greater */
    { popv(5); return onevalue(v352); }

v303:
    v352 = elt(env, 3); /* less */
    { popv(5); return onevalue(v352); }

v226:
    v352 = qvalue(elt(env, 2)); /* t */
    goto v225;

v236:
    v352 = stack[-1];
    if (!consp(v352)) goto v256;
    v352 = stack[-1];
    v352 = qcar(v352);
    v352 = (consp(v352) ? nil : lisp_true);
    goto v128;

v128:
    if (v352 == nil) goto v273;
    v352 = elt(env, 4); /* greater */
    { popv(5); return onevalue(v352); }

v273:
    stack[-3] = qvalue(elt(env, 5)); /* wukord!* */
    qvalue(elt(env, 5)) = nil; /* wukord!* */
    stack[0] = qvalue(elt(env, 6)); /* wuvarlist!* */
    qvalue(elt(env, 6)) = nil; /* wuvarlist!* */
    v352 = stack[-2];
    v352 = qcar(v352);
    v352 = qcar(v352);
    v353 = qcar(v352);
    v352 = stack[-1];
    v352 = qcar(v352);
    v352 = qcar(v352);
    v352 = qcar(v352);
    fn = elt(env, 7); /* symbollessp */
    v352 = (*qfn2(fn))(qenv(fn), v353, v352);
    nil = C_nil;
    if (exception_pending()) goto v139;
    env = stack[-4];
    if (v352 == nil) goto v126;
    v352 = elt(env, 3); /* less */
    goto v286;

v286:
    qvalue(elt(env, 6)) = stack[0]; /* wuvarlist!* */
    qvalue(elt(env, 5)) = stack[-3]; /* wukord!* */
    { popv(5); return onevalue(v352); }

v126:
    v352 = stack[-1];
    v352 = qcar(v352);
    v352 = qcar(v352);
    v353 = qcar(v352);
    v352 = stack[-2];
    v352 = qcar(v352);
    v352 = qcar(v352);
    v352 = qcar(v352);
    fn = elt(env, 7); /* symbollessp */
    v352 = (*qfn2(fn))(qenv(fn), v353, v352);
    nil = C_nil;
    if (exception_pending()) goto v139;
    env = stack[-4];
    if (v352 == nil) goto v355;
    v352 = elt(env, 4); /* greater */
    goto v286;

v355:
    v352 = stack[-2];
    v352 = qcar(v352);
    v353 = qcdr(v352);
    v352 = stack[-1];
    v352 = qcar(v352);
    v352 = qcdr(v352);
    v352 = CC_totalcompareconstants(env, v353, v352);
    nil = C_nil;
    if (exception_pending()) goto v139;
    env = stack[-4];
    v354 = v352;
    v353 = v354;
    v352 = elt(env, 1); /* equal */
    if (v353 == v352) goto v172;
    v352 = v354;
    goto v286;

v172:
    v352 = stack[-2];
    v353 = qcdr(v352);
    v352 = stack[-1];
    v352 = qcdr(v352);
    v352 = CC_totalcompareconstants(env, v353, v352);
    nil = C_nil;
    if (exception_pending()) goto v139;
    env = stack[-4];
    goto v286;

v256:
    v352 = qvalue(elt(env, 2)); /* t */
    goto v128;

v194:
    v352 = qvalue(elt(env, 2)); /* t */
    goto v193;

v270:
    v352 = elt(env, 1); /* equal */
    { popv(5); return onevalue(v352); }
/* error exit handlers */
v139:
    env = stack[-4];
    qvalue(elt(env, 6)) = stack[0]; /* wuvarlist!* */
    qvalue(elt(env, 5)) = stack[-3]; /* wukord!* */
    popv(5);
    return nil;
v152:
    popv(5);
    return nil;
}



/* Code for rule!* */

static Lisp_Object MS_CDECL CC_ruleH(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, Lisp_Object v251,
                         Lisp_Object v244, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v363, v364, v365, v366, v163;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 5, "rule*");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rule*");
#endif
    if (stack >= stacklimit)
    {
        push5(v244,v251,v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop5(v0,v1,v2,v251,v244);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v244;
    stack[-1] = v251;
    stack[-2] = v2;
    stack[-3] = v1;
    stack[-4] = v0;
/* end of prologue */
    stack[-5] = nil;
    v363 = stack[-2];
    qvalue(elt(env, 1)) = v363; /* frasc!* */
    v364 = stack[-1];
    v363 = qvalue(elt(env, 2)); /* t */
    if (v364 == v363) goto v230;
    v364 = stack[-2];
    v363 = stack[-1];
    v363 = Lsubla(nil, v364, v363);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-6];
    goto v260;

v260:
    qvalue(elt(env, 3)) = v363; /* mcond!* */
    v363 = stack[0];
    if (v363 == nil) goto v148;
    v364 = stack[0];
    v363 = elt(env, 4); /* old */
    if (v364 == v363) goto v148;
    v366 = stack[-4];
    v365 = stack[-3];
    v364 = stack[-2];
    v363 = stack[-1];
    v363 = list4(v366, v365, v364, v363);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-6];
    qvalue(elt(env, 5)) = v363; /* newrule!* */
    v363 = stack[-4];
    if (!(symbolp(v363))) goto v248;
    v364 = stack[-4];
    v363 = elt(env, 6); /* rtype */
    v363 = get(v364, v363);
    env = stack[-6];
    stack[-5] = v363;
    if (v363 == nil) goto v315;
    stack[-1] = stack[-4];
    v364 = elt(env, 6); /* rtype */
    v363 = stack[-5];
    v364 = cons(v364, v363);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-6];
    v363 = qvalue(elt(env, 7)); /* props!* */
    v363 = acons(stack[-1], v364, v363);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-6];
    qvalue(elt(env, 7)) = v363; /* props!* */
    v364 = stack[-4];
    v363 = elt(env, 6); /* rtype */
    v363 = Lremprop(nil, v364, v363);
    env = stack[-6];
    goto v315;

v315:
    v364 = stack[-4];
    v363 = elt(env, 8); /* avalue */
    v363 = get(v364, v363);
    env = stack[-6];
    stack[-5] = v363;
    if (v363 == nil) goto v248;
    v364 = stack[-5];
    v363 = qvalue(elt(env, 9)); /* nil */
    fn = elt(env, 12); /* updoldrules */
    v363 = (*qfn2(fn))(qenv(fn), v364, v363);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-6];
    v364 = stack[-4];
    v363 = elt(env, 8); /* avalue */
    v363 = Lremprop(nil, v364, v363);
    env = stack[-6];
    goto v248;

v248:
    v364 = stack[-3];
    v363 = (Lisp_Object)1; /* 0 */
    if (v364 == v363) goto v351;
    v363 = qvalue(elt(env, 9)); /* nil */
    goto v129;

v129:
    if (v363 == nil) goto v148;
    v364 = stack[-5];
    v363 = qvalue(elt(env, 9)); /* nil */
    fn = elt(env, 12); /* updoldrules */
    v363 = (*qfn2(fn))(qenv(fn), v364, v363);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-6];
    goto v148;

v148:
    v163 = stack[-4];
    v366 = stack[-3];
    v365 = stack[-2];
    v364 = stack[0];
    v363 = elt(env, 4); /* old */
    if (v364 == v363) goto v368;
    v363 = stack[0];
    goto v369;

v369:
    {
        popv(7);
        fn = elt(env, 13); /* rule */
        return (*qfnn(fn))(qenv(fn), 4, v163, v366, v365, v363);
    }

v368:
    v363 = qvalue(elt(env, 2)); /* t */
    goto v369;

v351:
    v364 = stack[-4];
    v363 = elt(env, 10); /* expt */
    if (!consp(v364)) goto v169;
    v364 = qcar(v364);
    if (!(v364 == v363)) goto v169;
    v363 = stack[-4];
    v363 = qcdr(v363);
    v363 = qcar(v363);
    if (symbolp(v363)) goto v323;
    v363 = qvalue(elt(env, 9)); /* nil */
    goto v129;

v323:
    v363 = stack[-4];
    v363 = qcdr(v363);
    v363 = qcdr(v363);
    v363 = qcar(v363);
    if (is_number(v363)) goto v346;
    v363 = qvalue(elt(env, 9)); /* nil */
    goto v129;

v346:
    v363 = stack[-4];
    v363 = qcdr(v363);
    v364 = qcar(v363);
    v363 = qvalue(elt(env, 11)); /* asymplis!* */
    v363 = Lassoc(nil, v364, v363);
    stack[-5] = v363;
    goto v129;

v169:
    v363 = qvalue(elt(env, 9)); /* nil */
    goto v129;

v230:
    v363 = qvalue(elt(env, 2)); /* t */
    goto v260;
/* error exit handlers */
v367:
    popv(7);
    return nil;
}



/* Code for mulpower */

static Lisp_Object CC_mulpower(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v255, v232, v231;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mulpower");
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
    v255 = v1;
    v232 = v0;
/* end of prologue */
    stack[0] = nil;
    fn = elt(env, 3); /* addexptsdf */
    v255 = (*qfn2(fn))(qenv(fn), v232, v255);
    nil = C_nil;
    if (exception_pending()) goto v182;
    env = stack[-2];
    stack[-1] = v255;
    v255 = qvalue(elt(env, 1)); /* sqrtlist */
    if (v255 == nil) goto v245;
    v232 = stack[-1];
    v255 = qvalue(elt(env, 2)); /* zlist */
    fn = elt(env, 4); /* reduceroots */
    v255 = (*qfn2(fn))(qenv(fn), v232, v255);
    nil = C_nil;
    if (exception_pending()) goto v182;
    env = stack[-2];
    stack[0] = v255;
    goto v245;

v245:
    v231 = stack[-1];
    v232 = (Lisp_Object)17; /* 1 */
    v255 = (Lisp_Object)17; /* 1 */
    v255 = list2star(v231, v232, v255);
    nil = C_nil;
    if (exception_pending()) goto v182;
    env = stack[-2];
    v255 = ncons(v255);
    nil = C_nil;
    if (exception_pending()) goto v182;
    env = stack[-2];
    stack[-1] = v255;
    v255 = stack[0];
    if (v255 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v232 = stack[-1];
    v255 = stack[0];
    fn = elt(env, 5); /* multdf */
    v255 = (*qfn2(fn))(qenv(fn), v232, v255);
    nil = C_nil;
    if (exception_pending()) goto v182;
    stack[-1] = v255;
    { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
/* error exit handlers */
v182:
    popv(3);
    return nil;
}



setup_type const u33_setup[] =
{
    {"liennewstruc",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_liennewstruc},
    {"bas_make",                too_few_2,      CC_bas_make,   wrong_no_2},
    {"pst_mkpst",               CC_pst_mkpst,   too_many_1,    wrong_no_1},
    {"mksqrt",                  CC_mksqrt,      too_many_1,    wrong_no_1},
    {"domainp_list",            CC_domainp_list,too_many_1,    wrong_no_1},
    {"setqinsertlist",          CC_setqinsertlist,too_many_1,  wrong_no_1},
    {"sfto_lmultf",             CC_sfto_lmultf, too_many_1,    wrong_no_1},
    {"mksfpf",                  too_few_2,      CC_mksfpf,     wrong_no_2},
    {"cl_smsimpl-junct2",       wrong_no_na,    wrong_no_nb,   (n_args *)CC_cl_smsimplKjunct2},
    {"aex_tad",                 CC_aex_tad,     too_many_1,    wrong_no_1},
    {"containerom",             CC_containerom, too_many_1,    wrong_no_1},
    {"ps:mkpow",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_psTmkpow},
    {"lengthn",                 CC_lengthn,     too_many_1,    wrong_no_1},
    {"suspend",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_suspend},
    {"diplmon2sq",              too_few_2,      CC_diplmon2sq, wrong_no_2},
    {"gfplus",                  too_few_2,      CC_gfplus,     wrong_no_2},
    {"endofstmtp",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_endofstmtp},
    {"indxchk",                 CC_indxchk,     too_many_1,    wrong_no_1},
    {"mk_binding",              too_few_2,      CC_mk_binding, wrong_no_2},
    {"bagp",                    CC_bagp,        too_many_1,    wrong_no_1},
    {"mkrootsql",               too_few_2,      CC_mkrootsql,  wrong_no_2},
    {"maxfrom1",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_maxfrom1},
    {"lowupperlimitrd",         wrong_no_na,    wrong_no_nb,   (n_args *)CC_lowupperlimitrd},
    {"copy_vect",               too_few_2,      CC_copy_vect,  wrong_no_2},
    {"remzzzz",                 too_few_2,      CC_remzzzz,    wrong_no_2},
    {"vdpcleanup",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_vdpcleanup},
    {"indordln",                CC_indordln,    too_many_1,    wrong_no_1},
    {"simp-prop-dist",          CC_simpKpropKdist,too_many_1,  wrong_no_1},
    {"lambda_lqlbvd_9",         too_few_2,      CC_lambda_lqlbvd_9,wrong_no_2},
    {"lambda_lqlbvd_8",         too_few_2,      CC_lambda_lqlbvd_8,wrong_no_2},
    {"bndtst",                  CC_bndtst,      too_many_1,    wrong_no_1},
    {"settcollectnonmultiprolongations",CC_settcollectnonmultiprolongations,too_many_1,wrong_no_1},
    {"valuechk",                too_few_2,      CC_valuechk,   wrong_no_2},
    {"get_dimension_in",        CC_get_dimension_in,too_many_1,wrong_no_1},
    {"evalnumberp",             CC_evalnumberp, too_many_1,    wrong_no_1},
    {"depend-p",                too_few_2,      CC_dependKp,   wrong_no_2},
    {"ratpoly_tad",             CC_ratpoly_tad, too_many_1,    wrong_no_1},
    {"matrixelems",             CC_matrixelems, too_many_1,    wrong_no_1},
    {"ps:times-erule",          too_few_2,      CC_psTtimesKerule,wrong_no_2},
    {"diford",                  CC_diford,      too_many_1,    wrong_no_1},
    {"mkbc",                    too_few_2,      CC_mkbc,       wrong_no_2},
    {"exdf0",                   CC_exdf0,       too_many_1,    wrong_no_1},
    {"ratmean",                 too_few_2,      CC_ratmean,    wrong_no_2},
    {"s_actual_world1",         CC_s_actual_world1,too_many_1, wrong_no_1},
    {"compactf1",               wrong_no_na,    wrong_no_nb,   (n_args *)CC_compactf1},
    {"pa_list2vect",            too_few_2,      CC_pa_list2vect,wrong_no_2},
    {"simpsqrt2",               CC_simpsqrt2,   too_many_1,    wrong_no_1},
    {"lesspcar",                too_few_2,      CC_lesspcar,   wrong_no_2},
    {"simpquot",                CC_simpquot,    too_many_1,    wrong_no_1},
    {"remainder-mod-p",         too_few_2,      CC_remainderKmodKp,wrong_no_2},
    {"cl_trygaussvar",          wrong_no_na,    wrong_no_nb,   (n_args *)CC_cl_trygaussvar},
    {"totalcompareconstants",   too_few_2,      CC_totalcompareconstants,wrong_no_2},
    {"rule*",                   wrong_no_na,    wrong_no_nb,   (n_args *)CC_ruleH},
    {"mulpower",                too_few_2,      CC_mulpower,   wrong_no_2},
    {NULL, (one_args *)"u33", (two_args *)"18004 2617481 7380794", 0}
};

/* end of generated code */
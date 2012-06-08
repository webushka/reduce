
/* $destdir\u55.c        Machine generated C code */

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


/* Code for msolve!-poly */

static Lisp_Object CC_msolveKpoly(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v24, v25;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for msolve-poly");
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
/* copy arguments values to proper place */
    stack[-2] = v1;
    stack[-3] = v0;
/* end of prologue */
    v24 = (Lisp_Object)160000001; /* 10000000 */
    stack[0] = v24;
    v25 = qvalue(elt(env, 1)); /* current!-modulus */
    v24 = stack[0];
    v24 = (Lisp_Object)greaterp2(v25, v24);
    nil = C_nil;
    if (exception_pending()) goto v26;
    v24 = v24 ? lisp_true : nil;
    env = stack[-5];
    if (v24 == nil) goto v27;
    v24 = qvalue(elt(env, 2)); /* !*trnonlnr */
    if (v24 == nil) goto v28;
    v24 = qvalue(elt(env, 3)); /* !*msg */
    if (v24 == nil) goto v28;
    stack[-1] = elt(env, 5); /* "***" */
    v25 = elt(env, 6); /* "Current modulus larger than" */
    v24 = stack[0];
    v24 = list2(v25, v24);
    nil = C_nil;
    if (exception_pending()) goto v26;
    env = stack[-5];
    fn = elt(env, 8); /* lpriw */
    v24 = (*qfn2(fn))(qenv(fn), stack[-1], v24);
    nil = C_nil;
    if (exception_pending()) goto v26;
    env = stack[-5];
    goto v28;

v28:
    v24 = elt(env, 7); /* failed */
    { popv(6); return onevalue(v24); }

v27:
    v25 = stack[-3];
    v24 = qvalue(elt(env, 4)); /* nil */
    fn = elt(env, 9); /* kernels1 */
    v24 = (*qfn2(fn))(qenv(fn), v25, v24);
    nil = C_nil;
    if (exception_pending()) goto v26;
    env = stack[-5];
    stack[-4] = v24;
    v24 = stack[-2];
    stack[-1] = v24;
    goto v29;

v29:
    v24 = stack[-1];
    if (v24 == nil) goto v30;
    v24 = stack[-1];
    v24 = qcar(v24);
    stack[0] = v24;
    v25 = stack[0];
    v24 = stack[-4];
    v24 = Lmember(nil, v25, v24);
    if (!(v24 == nil)) goto v31;
    v25 = stack[0];
    v24 = stack[-2];
    v24 = Ldelete(nil, v25, v24);
    nil = C_nil;
    if (exception_pending()) goto v26;
    env = stack[-5];
    stack[-2] = v24;
    goto v31;

v31:
    v25 = stack[0];
    v24 = stack[-4];
    v24 = Ldelete(nil, v25, v24);
    nil = C_nil;
    if (exception_pending()) goto v26;
    env = stack[-5];
    stack[-4] = v24;
    v24 = stack[-1];
    v24 = qcdr(v24);
    stack[-1] = v24;
    goto v29;

v30:
    v24 = stack[-2];
    if (v24 == nil) goto v32;
    v24 = stack[-4];
    if (v24 == nil) goto v33;
    v25 = stack[-3];
    v24 = stack[-2];
    {
        popv(6);
        fn = elt(env, 10); /* msolve!-polya */
        return (*qfn2(fn))(qenv(fn), v25, v24);
    }

v33:
    v25 = stack[-3];
    v24 = stack[-2];
    {
        popv(6);
        fn = elt(env, 11); /* msolve!-polyn */
        return (*qfn2(fn))(qenv(fn), v25, v24);
    }

v32:
    v24 = qvalue(elt(env, 4)); /* nil */
    { popv(6); return onevalue(v24); }
/* error exit handlers */
v26:
    popv(6);
    return nil;
}



/* Code for lto_nconcn */

static Lisp_Object CC_lto_nconcn(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v36, v37;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lto_nconcn");
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
    v37 = v0;
/* end of prologue */
    v36 = v37;
    v36 = qcdr(v36);
    if (v36 == nil) goto v22;
    v36 = v37;
    stack[0] = qcar(v36);
    v36 = v37;
    v36 = qcdr(v36);
    v36 = CC_lto_nconcn(env, v36);
    nil = C_nil;
    if (exception_pending()) goto v38;
    {
        Lisp_Object v39 = stack[0];
        popv(1);
        return Lnconc(nil, v39, v36);
    }

v22:
    v36 = v37;
    v36 = qcar(v36);
    { popv(1); return onevalue(v36); }
/* error exit handlers */
v38:
    popv(1);
    return nil;
}



/* Code for pasf_smeqtable */

static Lisp_Object CC_pasf_smeqtable(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v36, v37, v43;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pasf_smeqtable");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v36 = v1;
    v37 = v0;
/* end of prologue */
    v43 = elt(env, 1); /* ((equal (equal 1) (neq false) (geq 1) (leq 1) (greaterp false) (lessp false) (cong 1) (ncong false)) (neq (equal false) (neq 1) (geq 3 . greaterp) (leq 3 . lessp) (greaterp 2
) (lessp 2) (cong nil) (ncong 2)) (geq (equal 2) (neq 3 . greaterp) (geq 1) (leq 3 . equal) (greaterp 2) (lessp false) (cong nil) (ncong 5 . greaterp)) (leq (equal 2) (neq 3 . lessp) (geq 3 . equal) (
leq 1) (greaterp false) (lessp 2) (cong nil) (ncong 5 . lessp)) (greaterp (equal false) (neq 1) (geq 1) (leq false) (greaterp 1) (lessp false) (cong nil) (ncong nil)) (lessp (equal false) (neq 1) (geq
 false) (leq 1) (greaterp false) (lessp 1) (cong nil) (ncong nil)) (cong (equal 2) (neq nil) (geq nil) (leq nil) (greaterp nil) (lessp nil) (cong 1) (ncong false)) (ncong (equal false) (neq 1) (geq 4 
. greaterp) (leq 4 . lessp) (greaterp nil) (lessp nil) (cong false) (ncong 1))) 
*/
    v37 = Latsoc(nil, v37, v43);
    v36 = Latsoc(nil, v36, v37);
    v36 = qcdr(v36);
    return onevalue(v36);
}



/* Code for dvfsf_ppolyp */

static Lisp_Object CC_dvfsf_ppolyp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v19, v20;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dvfsf_ppolyp");
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
    v20 = v0;
/* end of prologue */
    v19 = v20;
    if (!consp(v19)) goto v48;
    v19 = v20;
    v19 = qcar(v19);
    v19 = (consp(v19) ? nil : lisp_true);
    goto v49;

v49:
    if (v19 == nil) goto v37;
    v19 = qvalue(elt(env, 1)); /* t */
    { popv(1); return onevalue(v19); }

v37:
    v19 = qvalue(elt(env, 2)); /* nil */
    fn = elt(env, 4); /* kernels1 */
    v19 = (*qfn2(fn))(qenv(fn), v20, v19);
    nil = C_nil;
    if (exception_pending()) goto v50;
    env = stack[0];
    v20 = v19;
    v19 = v20;
    v19 = qcdr(v19);
    if (v19 == nil) goto v51;
    v19 = qvalue(elt(env, 2)); /* nil */
    { popv(1); return onevalue(v19); }

v51:
    v19 = v20;
    v19 = qcar(v19);
    v20 = elt(env, 3); /* p */
    v19 = (v19 == v20 ? lisp_true : nil);
    { popv(1); return onevalue(v19); }

v48:
    v19 = qvalue(elt(env, 1)); /* t */
    goto v49;
/* error exit handlers */
v50:
    popv(1);
    return nil;
}



/* Code for mkmain */

static Lisp_Object CC_mkmain(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v49;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mkmain");
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
    v49 = v1;
    stack[0] = v0;
/* end of prologue */
    stack[-1] = qvalue(elt(env, 1)); /* kord!* */
    qvalue(elt(env, 1)) = nil; /* kord!* */
    v49 = ncons(v49);
    nil = C_nil;
    if (exception_pending()) goto v52;
    env = stack[-2];
    qvalue(elt(env, 1)) = v49; /* kord!* */
    v49 = stack[0];
    fn = elt(env, 2); /* reorder */
    v49 = (*qfn1(fn))(qenv(fn), v49);
    nil = C_nil;
    if (exception_pending()) goto v52;
    env = stack[-2];
    qvalue(elt(env, 1)) = stack[-1]; /* kord!* */
    { popv(3); return onevalue(v49); }
/* error exit handlers */
v52:
    env = stack[-2];
    qvalue(elt(env, 1)) = stack[-1]; /* kord!* */
    popv(3);
    return nil;
}



/* Code for ps!:times!-orderfn */

static Lisp_Object CC_psTtimesKorderfn(Lisp_Object env,
                         Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v56, v57;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ps:times-orderfn");
#endif
    if (stack >= stacklimit)
    {
        push(v1);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v1);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    v56 = v1;
/* end of prologue */
    stack[-2] = qvalue(elt(env, 1)); /* ps */
    qvalue(elt(env, 1)) = nil; /* ps */
    qvalue(elt(env, 1)) = v56; /* ps */
    v56 = qvalue(elt(env, 1)); /* ps */
    fn = elt(env, 2); /* ps!:expression */
    v56 = (*qfn1(fn))(qenv(fn), v56);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-3];
    stack[0] = v56;
    v56 = stack[0];
    v56 = qcdr(v56);
    v56 = qcar(v56);
    fn = elt(env, 3); /* ps!:find!-order */
    v56 = (*qfn1(fn))(qenv(fn), v56);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-3];
    stack[-1] = v56;
    v56 = stack[0];
    v56 = qcdr(v56);
    v56 = qcdr(v56);
    v56 = qcar(v56);
    fn = elt(env, 3); /* ps!:find!-order */
    v56 = (*qfn1(fn))(qenv(fn), v56);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-3];
    stack[0] = v56;
    v57 = stack[-1];
    v56 = stack[0];
    v56 = plus2(v57, v56);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-3];
    qvalue(elt(env, 1)) = stack[-2]; /* ps */
    { popv(4); return onevalue(v56); }
/* error exit handlers */
v51:
    env = stack[-3];
    qvalue(elt(env, 1)) = stack[-2]; /* ps */
    popv(4);
    return nil;
}



/* Code for mkdcrn */

static Lisp_Object CC_mkdcrn(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v56, v57;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mkdcrn");
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
    v56 = v0;
/* end of prologue */
    stack[-2] = elt(env, 1); /* !:crn!: */
    stack[-1] = (Lisp_Object)1; /* 0 */
    stack[0] = (Lisp_Object)17; /* 1 */
    v57 = (Lisp_Object)17; /* 1 */
    v56 = (Lisp_Object)17; /* 1 */
    v56 = cons(v57, v56);
    nil = C_nil;
    if (exception_pending()) goto v51;
    env = stack[-3];
    v57 = acons(stack[-1], stack[0], v56);
    nil = C_nil;
    if (exception_pending()) goto v51;
    v56 = (Lisp_Object)17; /* 1 */
    {
        Lisp_Object v59 = stack[-2];
        popv(4);
        return acons(v59, v57, v56);
    }
/* error exit handlers */
v51:
    popv(4);
    return nil;
}



/* Code for int!-simp */

static Lisp_Object CC_intKsimp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v60;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for int-simp");
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
    v60 = v0;
/* end of prologue */
    fn = elt(env, 1); /* simp!* */
    v60 = (*qfn1(fn))(qenv(fn), v60);
    nil = C_nil;
    if (exception_pending()) goto v55;
    env = stack[0];
    fn = elt(env, 2); /* resimp */
    v60 = (*qfn1(fn))(qenv(fn), v60);
    nil = C_nil;
    if (exception_pending()) goto v55;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 3); /* subs2 */
        return (*qfn1(fn))(qenv(fn), v60);
    }
/* error exit handlers */
v55:
    popv(1);
    return nil;
}



/* Code for rdintequiv */

static Lisp_Object CC_rdintequiv(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v35, v34;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rdintequiv");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v34 = v0;
/* end of prologue */
    v35 = v34;
    v35 = qcdr(v35);
    if (!consp(v35)) goto v6;
    v35 = v34;
    {
        fn = elt(env, 1); /* bfintequiv */
        return (*qfn1(fn))(qenv(fn), v35);
    }

v6:
    v35 = v34;
    v35 = qcdr(v35);
    {
        fn = elt(env, 2); /* ftintequiv */
        return (*qfn1(fn))(qenv(fn), v35);
    }
}



/* Code for tstpolyarg */

static Lisp_Object CC_tstpolyarg(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v50, v62, v27;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for tstpolyarg");
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
    v27 = v1;
    v62 = v0;
/* end of prologue */
    v50 = qvalue(elt(env, 1)); /* !*ratarg */
    if (v50 == nil) goto v63;
    v50 = qvalue(elt(env, 4)); /* nil */
    { popv(1); return onevalue(v50); }

v63:
    v50 = (Lisp_Object)17; /* 1 */
    if (v62 == v50) goto v64;
    v50 = v27;
    v50 = qcar(v50);
    if (v50 == nil) goto v39;
    v62 = v27;
    v50 = elt(env, 2); /* prepf */
    fn = elt(env, 5); /* sqform */
    v50 = (*qfn2(fn))(qenv(fn), v62, v50);
    nil = C_nil;
    if (exception_pending()) goto v65;
    env = stack[0];
    v62 = v50;
    goto v28;

v28:
    v50 = elt(env, 3); /* "polynomial" */
    {
        popv(1);
        fn = elt(env, 6); /* typerr */
        return (*qfn2(fn))(qenv(fn), v62, v50);
    }

v39:
    v50 = (Lisp_Object)1; /* 0 */
    v62 = v50;
    goto v28;

v64:
    v50 = qvalue(elt(env, 4)); /* nil */
    { popv(1); return onevalue(v50); }
/* error exit handlers */
v65:
    popv(1);
    return nil;
}



/* Code for coeff_edges */

static Lisp_Object CC_coeff_edges(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v66, v67;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for coeff_edges");
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
    goto v60;

v60:
    v66 = stack[0];
    if (v66 == nil) goto v55;
    v66 = stack[0];
    v66 = qcar(v66);
    fn = elt(env, 2); /* atlas_edges */
    v67 = (*qfn1(fn))(qenv(fn), v66);
    nil = C_nil;
    if (exception_pending()) goto v20;
    env = stack[-2];
    v66 = stack[-1];
    v66 = cons(v67, v66);
    nil = C_nil;
    if (exception_pending()) goto v20;
    env = stack[-2];
    stack[-1] = v66;
    v66 = stack[0];
    v66 = qcdr(v66);
    stack[0] = v66;
    goto v60;

v55:
    v66 = qvalue(elt(env, 1)); /* nil */
    v67 = v66;
    goto v54;

v54:
    v66 = stack[-1];
    if (v66 == nil) { popv(3); return onevalue(v67); }
    v66 = stack[-1];
    v66 = qcar(v66);
    fn = elt(env, 3); /* union_edges */
    v66 = (*qfn2(fn))(qenv(fn), v66, v67);
    nil = C_nil;
    if (exception_pending()) goto v20;
    env = stack[-2];
    v67 = v66;
    v66 = stack[-1];
    v66 = qcdr(v66);
    stack[-1] = v66;
    goto v54;
/* error exit handlers */
v20:
    popv(3);
    return nil;
}



/* Code for mv!-reduced!-coeffs */

static Lisp_Object CC_mvKreducedKcoeffs(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v70, v71, v72;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mv-reduced-coeffs");
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
    v70 = stack[0];
    v70 = qcar(v70);
    v70 = qcdr(v70);
    v72 = v70;
    v70 = stack[0];
    v70 = qcdr(v70);
    stack[-1] = v70;
    goto v52;

v52:
    v70 = stack[-1];
    if (v70 == nil) goto v67;
    v71 = v72;
    v70 = (Lisp_Object)17; /* 1 */
    if (v71 == v70) goto v67;
    v71 = v72;
    v70 = stack[-1];
    v70 = qcar(v70);
    v70 = qcdr(v70);
    v70 = Lgcd(nil, v71, v70);
    nil = C_nil;
    if (exception_pending()) goto v73;
    env = stack[-2];
    v72 = v70;
    v70 = stack[-1];
    v70 = qcdr(v70);
    stack[-1] = v70;
    goto v52;

v67:
    v71 = v72;
    v70 = (Lisp_Object)17; /* 1 */
    if (v71 == v70) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v70 = stack[0];
    v71 = v72;
    {
        popv(3);
        fn = elt(env, 2); /* mv!-!/ */
        return (*qfn2(fn))(qenv(fn), v70, v71);
    }
/* error exit handlers */
v73:
    popv(3);
    return nil;
}



/* Code for gcd!-mod!-p */

static Lisp_Object CC_gcdKmodKp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v79, v80, v81, v82;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gcd-mod-p");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v81 = v1;
    v82 = v0;
/* end of prologue */
    v79 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 1)) = v79; /* reduction!-count */
    v79 = v82;
    if (v79 == nil) goto v60;
    v79 = v81;
    if (v79 == nil) goto v48;
    v79 = v82;
    if (!consp(v79)) goto v23;
    v79 = v82;
    v79 = qcar(v79);
    v79 = (consp(v79) ? nil : lisp_true);
    goto v22;

v22:
    if (v79 == nil) goto v61;
    v79 = (Lisp_Object)17; /* 1 */
    return onevalue(v79);

v61:
    v79 = v81;
    if (!consp(v79)) goto v83;
    v79 = v81;
    v79 = qcar(v79);
    v79 = (consp(v79) ? nil : lisp_true);
    goto v84;

v84:
    if (v79 == nil) goto v85;
    v79 = (Lisp_Object)17; /* 1 */
    return onevalue(v79);

v85:
    v79 = v82;
    v79 = qcar(v79);
    v79 = qcar(v79);
    v80 = qcdr(v79);
    v79 = v81;
    v79 = qcar(v79);
    v79 = qcar(v79);
    v79 = qcdr(v79);
    if (((int32_t)(v80)) > ((int32_t)(v79))) goto v30;
    v79 = v81;
    v80 = v82;
    {
        fn = elt(env, 3); /* ordered!-gcd!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v79, v80);
    }

v30:
    v79 = v82;
    v80 = v81;
    {
        fn = elt(env, 3); /* ordered!-gcd!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v79, v80);
    }

v83:
    v79 = qvalue(elt(env, 2)); /* t */
    goto v84;

v23:
    v79 = qvalue(elt(env, 2)); /* t */
    goto v22;

v48:
    v79 = v82;
    {
        fn = elt(env, 4); /* monic!-mod!-p */
        return (*qfn1(fn))(qenv(fn), v79);
    }

v60:
    v79 = v81;
    {
        fn = elt(env, 4); /* monic!-mod!-p */
        return (*qfn1(fn))(qenv(fn), v79);
    }
}



/* Code for numrdeg */

static Lisp_Object CC_numrdeg(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v86, v87;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for numrdeg");
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
    v86 = stack[0];
    fn = elt(env, 2); /* !*a2k */
    v86 = (*qfn1(fn))(qenv(fn), v86);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-3];
    stack[0] = v86;
    v86 = stack[-1];
    if (!consp(v86)) goto v63;
    v86 = stack[-1];
    v86 = qcar(v86);
    v86 = (consp(v86) ? nil : lisp_true);
    goto v52;

v52:
    if (v86 == nil) goto v38;
    v86 = (Lisp_Object)1; /* 0 */
    { popv(4); return onevalue(v86); }

v38:
    v86 = stack[-1];
    v86 = qcar(v86);
    v86 = qcar(v86);
    v87 = qcar(v86);
    v86 = stack[0];
    if (v87 == v86) goto v37;
    v86 = stack[0];
    fn = elt(env, 3); /* updkorder */
    v86 = (*qfn1(fn))(qenv(fn), v86);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-3];
    stack[-2] = v86;
    v86 = stack[-1];
    fn = elt(env, 4); /* reorder */
    v86 = (*qfn1(fn))(qenv(fn), v86);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-3];
    stack[-1] = v86;
    v86 = stack[-1];
    v86 = qcar(v86);
    v86 = qcar(v86);
    v87 = qcar(v86);
    v86 = stack[0];
    if (v87 == v86) goto v30;
    v86 = (Lisp_Object)1; /* 0 */
    stack[-1] = v86;
    goto v85;

v85:
    v86 = stack[-2];
    fn = elt(env, 5); /* setkorder */
    v86 = (*qfn1(fn))(qenv(fn), v86);
    nil = C_nil;
    if (exception_pending()) goto v88;
    { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }

v30:
    v86 = stack[-1];
    v86 = qcar(v86);
    v86 = qcar(v86);
    v86 = qcdr(v86);
    stack[-1] = v86;
    goto v85;

v37:
    v86 = stack[-1];
    v86 = qcar(v86);
    v86 = qcar(v86);
    v86 = qcdr(v86);
    {
        popv(4);
        fn = elt(env, 6); /* prepf */
        return (*qfn1(fn))(qenv(fn), v86);
    }

v63:
    v86 = qvalue(elt(env, 1)); /* t */
    goto v52;
/* error exit handlers */
v88:
    popv(4);
    return nil;
}



/* Code for ofsf_mkstrict */

static Lisp_Object CC_ofsf_mkstrict(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v39, v46, v53;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ofsf_mkstrict");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v53 = v0;
/* end of prologue */
    v46 = v53;
    v39 = elt(env, 1); /* leq */
    if (v46 == v39) goto v6;
    v46 = v53;
    v39 = elt(env, 3); /* geq */
    if (!(v46 == v39)) return onevalue(v53);
    v39 = elt(env, 4); /* greaterp */
    return onevalue(v39);

v6:
    v39 = elt(env, 2); /* lessp */
    return onevalue(v39);
}



/* Code for tp!-greaterp */

static Lisp_Object CC_tpKgreaterp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v17, v18;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for tp-greaterp");
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

v91:
    v17 = stack[-1];
    if (v17 == nil) goto v21;
    v17 = stack[-1];
    v17 = qcar(v17);
    v17 = qcdr(v17);
    v17 = qcdr(v17);
    v18 = qcar(v17);
    v17 = stack[0];
    v17 = qcar(v17);
    v17 = qcdr(v17);
    v17 = qcdr(v17);
    v17 = qcar(v17);
    fn = elt(env, 2); /* tayexp!-greaterp */
    v17 = (*qfn2(fn))(qenv(fn), v18, v17);
    nil = C_nil;
    if (exception_pending()) goto v66;
    env = stack[-2];
    if (!(v17 == nil)) { popv(3); return onevalue(v17); }
    v17 = stack[-1];
    v18 = qcdr(v17);
    v17 = stack[0];
    v17 = qcdr(v17);
    stack[-1] = v18;
    stack[0] = v17;
    goto v91;

v21:
    v17 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v17); }
/* error exit handlers */
v66:
    popv(3);
    return nil;
}



/* Code for mk!+hermitean!+matrix */

static Lisp_Object CC_mkLhermiteanLmatrix(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v34, v61;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mk+hermitean+matrix");
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
    v61 = v0;
/* end of prologue */
    v34 = qvalue(elt(env, 1)); /* !*complex */
    if (v34 == nil) goto v40;
    v34 = v61;
    fn = elt(env, 2); /* mk!+transpose!+matrix */
    v34 = (*qfn1(fn))(qenv(fn), v34);
    nil = C_nil;
    if (exception_pending()) goto v41;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 3); /* mk!+conjugate!+matrix */
        return (*qfn1(fn))(qenv(fn), v34);
    }

v40:
    v34 = v61;
    {
        popv(1);
        fn = elt(env, 2); /* mk!+transpose!+matrix */
        return (*qfn1(fn))(qenv(fn), v34);
    }
/* error exit handlers */
v41:
    popv(1);
    return nil;
}



/* Code for reval!-without */

static Lisp_Object CC_revalKwithout(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v9, v92, v93;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for reval-without");
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
    v92 = stack[-1];
    v9 = elt(env, 1); /* opmtch */
    v9 = get(v92, v9);
    env = stack[-4];
    stack[-3] = v9;
    v92 = stack[-1];
    v9 = elt(env, 1); /* opmtch */
    v9 = Lremprop(nil, v92, v9);
    env = stack[-4];
    stack[0] = elt(env, 2); /* reval */
    v9 = stack[-2];
    v9 = Lmkquote(nil, v9);
    nil = C_nil;
    if (exception_pending()) goto v80;
    env = stack[-4];
    v93 = list2(stack[0], v9);
    nil = C_nil;
    if (exception_pending()) goto v80;
    env = stack[-4];
    v92 = qvalue(elt(env, 3)); /* t */
    v9 = qvalue(elt(env, 4)); /* !*backtrace */
    fn = elt(env, 5); /* errorset */
    v9 = (*qfnn(fn))(qenv(fn), 3, v93, v92, v9);
    nil = C_nil;
    if (exception_pending()) goto v80;
    env = stack[-4];
    stack[-2] = v9;
    v93 = stack[-1];
    v92 = elt(env, 1); /* opmtch */
    v9 = stack[-3];
    v9 = Lputprop(nil, 3, v93, v92, v9);
    nil = C_nil;
    if (exception_pending()) goto v80;
    env = stack[-4];
    v9 = stack[-2];
    if (!consp(v9)) goto v14;
    v9 = stack[-2];
    v9 = qcdr(v9);
    goto v16;

v16:
    if (v9 == nil) goto v94;
    v9 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v80;
    v9 = nil;
    { popv(5); return onevalue(v9); }

v94:
    v9 = stack[-2];
    v9 = qcar(v9);
    { popv(5); return onevalue(v9); }

v14:
    v9 = qvalue(elt(env, 3)); /* t */
    goto v16;
/* error exit handlers */
v80:
    popv(5);
    return nil;
}



/* Code for pasf_ordrelp */

static Lisp_Object CC_pasf_ordrelp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v23, v58, v28;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pasf_ordrelp");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v58 = v1;
    v23 = v0;
/* end of prologue */
    v28 = elt(env, 1); /* (equal neq leq lessp geq greaterp cong ncong) 
*/
    v23 = Lmemq(nil, v23, v28);
    v23 = Lmemq(nil, v58, v23);
    v23 = (v23 == nil ? lisp_true : nil);
    v23 = (v23 == nil ? lisp_true : nil);
    return onevalue(v23);
}



/* Code for vdp_zero */

static Lisp_Object MS_CDECL CC_vdp_zero(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v40, v52, v63;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "vdp_zero");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for vdp_zero");
#endif
    CSL_IGNORE(env);
/* end of prologue */
    v63 = elt(env, 1); /* invalid */
    v52 = elt(env, 1); /* invalid */
    v40 = qvalue(elt(env, 2)); /* nil */
    {
        fn = elt(env, 3); /* vdp_make */
        return (*qfnn(fn))(qenv(fn), 3, v63, v52, v40);
    }
}



/* Code for radf1 */

static Lisp_Object CC_radf1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v105, v106, v107;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for radf1");
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
    v106 = v0;
/* end of prologue */
    stack[-4] = nil;
    v105 = (Lisp_Object)17; /* 1 */
    stack[-6] = v105;
    v105 = v106;
    stack[-2] = v105;
    goto v40;

v40:
    v105 = stack[-2];
    if (v105 == nil) goto v108;
    v105 = stack[-2];
    v105 = qcar(v105);
    stack[-1] = v105;
    v105 = stack[-1];
    v106 = qcdr(v105);
    v105 = stack[-5];
    v105 = Ldivide(nil, v106, v105);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-7];
    stack[-3] = v105;
    v105 = stack[-3];
    v106 = qcar(v105);
    v105 = (Lisp_Object)1; /* 0 */
    if (v106 == v105) goto v110;
    v106 = stack[-1];
    v105 = (Lisp_Object)17; /* 1 */
    v105 = cons(v106, v105);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-7];
    stack[0] = ncons(v105);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-7];
    v105 = stack[-1];
    v106 = qcar(v105);
    v105 = stack[-3];
    v105 = qcar(v105);
    fn = elt(env, 3); /* exptf */
    v106 = (*qfn2(fn))(qenv(fn), v106, v105);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-7];
    v105 = stack[-5];
    fn = elt(env, 4); /* check!-radf!-sign */
    v106 = (*qfnn(fn))(qenv(fn), 3, stack[0], v106, v105);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-7];
    v105 = stack[-6];
    fn = elt(env, 5); /* multf */
    v105 = (*qfn2(fn))(qenv(fn), v106, v105);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-7];
    stack[-6] = v105;
    goto v110;

v110:
    v105 = stack[-3];
    v106 = qcdr(v105);
    v105 = (Lisp_Object)1; /* 0 */
    if (v106 == v105) goto v82;
    v105 = stack[-1];
    v106 = qcar(v105);
    v105 = (Lisp_Object)17; /* 1 */
    v105 = cons(v106, v105);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-7];
    fn = elt(env, 6); /* prepsq!* */
    v105 = (*qfn1(fn))(qenv(fn), v105);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-7];
    v106 = v105;
    v105 = stack[-3];
    v107 = qcdr(v105);
    v105 = (Lisp_Object)17; /* 1 */
    if (v107 == v105) goto v111;
    v107 = elt(env, 2); /* expt */
    v105 = stack[-3];
    v105 = qcdr(v105);
    v105 = list3(v107, v106, v105);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-7];
    v106 = v105;
    goto v112;

v112:
    v105 = stack[-4];
    v105 = cons(v106, v105);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-7];
    stack[-4] = v105;
    goto v82;

v82:
    v105 = stack[-2];
    v105 = qcdr(v105);
    stack[-2] = v105;
    goto v40;

v111:
    v105 = v106;
    v106 = v105;
    goto v112;

v108:
    v106 = stack[-6];
    v105 = stack[-4];
    popv(8);
    return cons(v106, v105);
/* error exit handlers */
v109:
    popv(8);
    return nil;
}



/* Code for ps!:int!-erule */

static Lisp_Object CC_psTintKerule(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v117, v118;
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
    v117 = stack[-1];
    v117 = qcdr(v117);
    v117 = qcdr(v117);
    stack[-2] = qcar(v117);
    v117 = stack[-1];
    v117 = qcdr(v117);
    v117 = qcar(v117);
    fn = elt(env, 2); /* ps!:depvar */
    v117 = (*qfn1(fn))(qenv(fn), v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    if (equal(stack[-2], v117)) goto v37;
    v117 = stack[-1];
    v117 = qcdr(v117);
    v118 = qcar(v117);
    v117 = stack[0];
    fn = elt(env, 3); /* ps!:evaluate */
    v117 = (*qfn2(fn))(qenv(fn), v118, v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    fn = elt(env, 4); /* prepsqxx */
    v118 = (*qfn1(fn))(qenv(fn), v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    v117 = stack[-1];
    v117 = qcdr(v117);
    v117 = qcdr(v117);
    v117 = qcar(v117);
    v117 = list2(v118, v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    {
        popv(4);
        fn = elt(env, 5); /* simpint */
        return (*qfn1(fn))(qenv(fn), v117);
    }

v37:
    v117 = stack[-1];
    v117 = qcdr(v117);
    v117 = qcar(v117);
    fn = elt(env, 6); /* ps!:expansion!-point */
    v118 = (*qfn1(fn))(qenv(fn), v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    v117 = elt(env, 1); /* ps!:inf */
    if (v118 == v117) goto v86;
    v117 = stack[-1];
    v117 = qcdr(v117);
    stack[-1] = qcar(v117);
    v117 = stack[0];
    v117 = sub1(v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    fn = elt(env, 3); /* ps!:evaluate */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[-1], v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    v118 = stack[0];
    v117 = (Lisp_Object)17; /* 1 */
    v117 = cons(v118, v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    fn = elt(env, 7); /* invsq */
    v117 = (*qfn1(fn))(qenv(fn), v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    {
        Lisp_Object v4 = stack[-1];
        popv(4);
        fn = elt(env, 8); /* multsq */
        return (*qfn2(fn))(qenv(fn), v4, v117);
    }

v86:
    v117 = stack[-1];
    v117 = qcdr(v117);
    stack[-1] = qcar(v117);
    v117 = stack[0];
    v117 = add1(v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    fn = elt(env, 3); /* ps!:evaluate */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[-1], v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    v117 = stack[0];
    v118 = negate(v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    v117 = (Lisp_Object)17; /* 1 */
    v117 = cons(v118, v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    fn = elt(env, 7); /* invsq */
    v117 = (*qfn1(fn))(qenv(fn), v117);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    {
        Lisp_Object v5 = stack[-1];
        popv(4);
        fn = elt(env, 8); /* multsq */
        return (*qfn2(fn))(qenv(fn), v5, v117);
    }
/* error exit handlers */
v101:
    popv(4);
    return nil;
}



/* Code for revise2 */

static Lisp_Object CC_revise2(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v149, v150, v151;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for revise2");
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
    stack[-4] = v1;
    stack[0] = v0;
/* end of prologue */
    v149 = stack[0];
    if (!consp(v149)) goto v54;
    v149 = stack[0];
    fn = elt(env, 7); /* constp */
    v149 = (*qfn1(fn))(qenv(fn), v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    if (!(v149 == nil)) { Lisp_Object res = stack[0]; popv(7); return onevalue(res); }
    v149 = stack[0];
    v149 = qcar(v149);
    fn = elt(env, 8); /* subscriptedvarp */
    v149 = (*qfn1(fn))(qenv(fn), v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    if (v149 == nil) goto v153;
    v149 = stack[0];
    v150 = qcar(v149);
    v149 = elt(env, 1); /* aliaslist */
    v149 = get(v150, v149);
    env = stack[-6];
    if (v149 == nil) goto v88;
    v149 = stack[0];
    stack[-5] = qcar(v149);
    v149 = stack[0];
    fn = elt(env, 9); /* ireval */
    v149 = (*qfn1(fn))(qenv(fn), v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    v149 = qcdr(v149);
    stack[-3] = v149;
    v149 = stack[-3];
    if (v149 == nil) goto v154;
    v149 = stack[-3];
    v149 = qcar(v149);
    v150 = v149;
    v149 = stack[-4];
    v149 = CC_revise2(env, v150, v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    v149 = ncons(v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    stack[-1] = v149;
    stack[-2] = v149;
    goto v155;

v155:
    v149 = stack[-3];
    v149 = qcdr(v149);
    stack[-3] = v149;
    v149 = stack[-3];
    if (v149 == nil) goto v156;
    stack[0] = stack[-1];
    v149 = stack[-3];
    v149 = qcar(v149);
    v150 = v149;
    v149 = stack[-4];
    v149 = CC_revise2(env, v150, v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    v149 = ncons(v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    v149 = Lrplacd(nil, stack[0], v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    v149 = stack[-1];
    v149 = qcdr(v149);
    stack[-1] = v149;
    goto v155;

v156:
    v149 = stack[-2];
    goto v115;

v115:
    v149 = cons(stack[-5], v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    stack[0] = v149;
    v151 = stack[0];
    v149 = stack[0];
    v150 = qcar(v149);
    v149 = elt(env, 2); /* finalalias */
    v149 = get(v150, v149);
    env = stack[-6];
    v149 = Lassoc(nil, v151, v149);
    v150 = v149;
    if (v149 == nil) goto v157;
    v149 = v150;
    v149 = qcdr(v149);
    v149 = qcar(v149);
    { popv(7); return onevalue(v149); }

v157:
    v149 = qvalue(elt(env, 5)); /* !*vectorc */
    if (v149 == nil) { Lisp_Object res = stack[0]; popv(7); return onevalue(res); }
    v149 = stack[0];
    fn = elt(env, 10); /* introduce!-alias */
    v151 = (*qfn1(fn))(qenv(fn), v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    v150 = stack[0];
    v149 = qvalue(elt(env, 6)); /* rhsaliases */
    v149 = acons(v151, v150, v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    qvalue(elt(env, 6)) = v149; /* rhsaliases */
    v149 = qvalue(elt(env, 6)); /* rhsaliases */
    v149 = qcar(v149);
    v149 = qcar(v149);
    { popv(7); return onevalue(v149); }

v154:
    v149 = qvalue(elt(env, 4)); /* nil */
    goto v115;

v88:
    v149 = qvalue(elt(env, 5)); /* !*vectorc */
    if (v149 == nil) { Lisp_Object res = stack[0]; popv(7); return onevalue(res); }
    v149 = stack[0];
    fn = elt(env, 10); /* introduce!-alias */
    v151 = (*qfn1(fn))(qenv(fn), v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    v150 = stack[0];
    v149 = qvalue(elt(env, 6)); /* rhsaliases */
    v149 = acons(v151, v150, v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    qvalue(elt(env, 6)) = v149; /* rhsaliases */
    v149 = qvalue(elt(env, 6)); /* rhsaliases */
    v149 = qcar(v149);
    v149 = qcar(v149);
    { popv(7); return onevalue(v149); }

v153:
    v150 = stack[0];
    v149 = stack[-4];
    v149 = Lassoc(nil, v150, v149);
    v150 = v149;
    if (v149 == nil) goto v158;
    v149 = v150;
    v149 = qcdr(v149);
    v149 = qcar(v149);
    { popv(7); return onevalue(v149); }

v158:
    v149 = stack[0];
    stack[-5] = qcar(v149);
    v149 = stack[0];
    v149 = qcdr(v149);
    stack[-3] = v149;
    v149 = stack[-3];
    if (v149 == nil) goto v159;
    v149 = stack[-3];
    v149 = qcar(v149);
    v150 = v149;
    v149 = stack[-4];
    v149 = CC_revise2(env, v150, v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    v149 = ncons(v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    stack[-1] = v149;
    stack[-2] = v149;
    goto v160;

v160:
    v149 = stack[-3];
    v149 = qcdr(v149);
    stack[-3] = v149;
    v149 = stack[-3];
    if (v149 == nil) goto v161;
    stack[0] = stack[-1];
    v149 = stack[-3];
    v149 = qcar(v149);
    v150 = v149;
    v149 = stack[-4];
    v149 = CC_revise2(env, v150, v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    v149 = ncons(v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    v149 = Lrplacd(nil, stack[0], v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    v149 = stack[-1];
    v149 = qcdr(v149);
    stack[-1] = v149;
    goto v160;

v161:
    v149 = stack[-2];
    goto v162;

v162:
    {
        Lisp_Object v163 = stack[-5];
        popv(7);
        return cons(v163, v149);
    }

v159:
    v149 = qvalue(elt(env, 4)); /* nil */
    goto v162;

v54:
    v149 = stack[0];
    fn = elt(env, 7); /* constp */
    v149 = (*qfn1(fn))(qenv(fn), v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    if (!(v149 == nil)) { Lisp_Object res = stack[0]; popv(7); return onevalue(res); }
    v150 = stack[0];
    v149 = elt(env, 1); /* aliaslist */
    v149 = get(v150, v149);
    env = stack[-6];
    if (v149 == nil) goto v44;
    v149 = stack[0];
    v150 = elt(env, 2); /* finalalias */
    popv(7);
    return get(v149, v150);

v44:
    v150 = stack[0];
    v149 = qvalue(elt(env, 3)); /* known */
    v149 = Lmember(nil, v150, v149);
    if (!(v149 == nil)) { Lisp_Object res = stack[0]; popv(7); return onevalue(res); }
    v150 = stack[0];
    v149 = qvalue(elt(env, 3)); /* known */
    v149 = cons(v150, v149);
    nil = C_nil;
    if (exception_pending()) goto v152;
    env = stack[-6];
    qvalue(elt(env, 3)) = v149; /* known */
    { Lisp_Object res = stack[0]; popv(7); return onevalue(res); }
/* error exit handlers */
v152:
    popv(7);
    return nil;
}



/* Code for gfeqp */

static Lisp_Object CC_gfeqp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v15, v16, v14;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gfeqp");
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
    v15 = v1;
    v16 = v0;
/* end of prologue */
    fn = elt(env, 3); /* gfdiffer */
    v15 = (*qfn2(fn))(qenv(fn), v16, v15);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[0];
    v14 = v15;
    v15 = v14;
    v15 = qcar(v15);
    if (!consp(v15)) goto v20;
    v15 = v14;
    v15 = qcar(v15);
    v15 = qcdr(v15);
    v16 = qcar(v15);
    v15 = (Lisp_Object)1; /* 0 */
    if (v16 == v15) goto v78;
    v15 = qvalue(elt(env, 1)); /* nil */
    { popv(1); return onevalue(v15); }

v78:
    v15 = v14;
    v15 = qcdr(v15);
    v15 = qcdr(v15);
    v16 = qcar(v15);
    v15 = (Lisp_Object)1; /* 0 */
    v15 = (v16 == v15 ? lisp_true : nil);
    { popv(1); return onevalue(v15); }

v20:
    v15 = v14;
    v16 = elt(env, 2); /* (0.0 . 0.0) */
    v15 = (equal(v15, v16) ? lisp_true : nil);
    { popv(1); return onevalue(v15); }
/* error exit handlers */
v116:
    popv(1);
    return nil;
}



/* Code for lispwhilep */

static Lisp_Object CC_lispwhilep(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v49, v48;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lispwhilep");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v49 = v0;
/* end of prologue */
    v48 = elt(env, 1); /* while */
        return Leqcar(nil, v49, v48);
}



/* Code for indvarpf */

static Lisp_Object CC_indvarpf(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v94;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for indvarpf");
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

v91:
    v94 = stack[0];
    if (!consp(v94)) goto v54;
    v94 = stack[0];
    v94 = qcar(v94);
    v94 = (consp(v94) ? nil : lisp_true);
    goto v55;

v55:
    if (v94 == nil) goto v41;
    v94 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v94); }

v41:
    v94 = stack[0];
    v94 = qcar(v94);
    v94 = qcar(v94);
    v94 = qcar(v94);
    if (!consp(v94)) goto v44;
    v94 = stack[0];
    v94 = qcar(v94);
    v94 = qcar(v94);
    v94 = qcar(v94);
    v94 = qcar(v94);
    v94 = (consp(v94) ? nil : lisp_true);
    v94 = (v94 == nil ? lisp_true : nil);
    goto v46;

v46:
    if (v94 == nil) goto v62;
    v94 = stack[0];
    v94 = qcar(v94);
    v94 = qcar(v94);
    v94 = qcar(v94);
    v94 = CC_indvarpf(env, v94);
    nil = C_nil;
    if (exception_pending()) goto v86;
    env = stack[-1];
    goto v37;

v37:
    if (!(v94 == nil)) { popv(2); return onevalue(v94); }
    v94 = stack[0];
    v94 = qcar(v94);
    v94 = qcdr(v94);
    v94 = CC_indvarpf(env, v94);
    nil = C_nil;
    if (exception_pending()) goto v86;
    env = stack[-1];
    if (!(v94 == nil)) { popv(2); return onevalue(v94); }
    v94 = stack[0];
    v94 = qcdr(v94);
    stack[0] = v94;
    goto v91;

v62:
    v94 = stack[0];
    v94 = qcar(v94);
    v94 = qcar(v94);
    v94 = qcar(v94);
    fn = elt(env, 3); /* freeindp */
    v94 = (*qfn1(fn))(qenv(fn), v94);
    nil = C_nil;
    if (exception_pending()) goto v86;
    env = stack[-1];
    goto v37;

v44:
    v94 = qvalue(elt(env, 2)); /* nil */
    goto v46;

v54:
    v94 = qvalue(elt(env, 1)); /* t */
    goto v55;
/* error exit handlers */
v86:
    popv(2);
    return nil;
}



/* Code for edge_bind */

static Lisp_Object CC_edge_bind(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v182, v183, v184;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for edge_bind");
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
    v182 = stack[-7];
    if (v182 == nil) goto v21;
    stack[-2] = nil;
    v182 = stack[-7];
    v182 = qcar(v182);
    v183 = v182;
    v182 = v183;
    v182 = qcdr(v182);
    stack[-1] = v182;
    v182 = v183;
    v182 = qcar(v182);
    v183 = v182;
    v182 = stack[-7];
    v182 = qcdr(v182);
    stack[-7] = v182;
    v182 = v183;
    v182 = qcar(v182);
    stack[-5] = v182;
    v182 = v183;
    v182 = qcdr(v182);
    v182 = qcar(v182);
    stack[-8] = v182;
    v182 = stack[-8];
    v183 = qcar(v182);
    v182 = stack[-6];
    v182 = Lassoc(nil, v183, v182);
    stack[-4] = v182;
    v182 = stack[-8];
    v183 = qcdr(v182);
    v182 = stack[-6];
    v182 = Lassoc(nil, v183, v182);
    stack[-3] = v182;
    v182 = stack[-4];
    if (v182 == nil) goto v30;
    v182 = stack[-3];
    v182 = (v182 == nil ? lisp_true : nil);
    goto v116;

v116:
    if (v182 == nil) goto v185;
    stack[0] = elt(env, 0); /* edge_bind */
    v183 = stack[-8];
    v182 = stack[-6];
    v182 = list2(v183, v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    fn = elt(env, 4); /* set_error_real */
    v182 = (*qfn2(fn))(qenv(fn), stack[0], v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    goto v185;

v185:
    v182 = stack[-4];
    v183 = qcdr(v182);
    v182 = stack[-3];
    v182 = qcdr(v182);
    v182 = cons(v183, v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    stack[-8] = v182;
    v182 = stack[-8];
    v183 = qcar(v182);
    v182 = stack[-8];
    v182 = qcdr(v182);
    v182 = difference2(v183, v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    v182 = Labsval(nil, v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    stack[-4] = v182;
    v182 = stack[-8];
    v183 = qcar(v182);
    v182 = stack[-8];
    v182 = qcdr(v182);
    v182 = plus2(v183, v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    stack[-3] = v182;
    v182 = qvalue(elt(env, 2)); /* ndim!* */
    if (!(is_number(v182))) goto v186;
    v183 = stack[-3];
    v182 = qvalue(elt(env, 2)); /* ndim!* */
    fn = elt(env, 5); /* min */
    v182 = (*qfn2(fn))(qenv(fn), v183, v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    stack[-3] = v182;
    v183 = stack[-4];
    v182 = qvalue(elt(env, 2)); /* ndim!* */
    v182 = (Lisp_Object)greaterp2(v183, v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    v182 = v182 ? lisp_true : nil;
    env = stack[-9];
    if (v182 == nil) goto v186;
    v182 = qvalue(elt(env, 3)); /* nil */
    { popv(10); return onevalue(v182); }

v186:
    v182 = stack[-4];
    stack[-4] = v182;
    goto v105;

v105:
    v183 = stack[-4];
    v182 = stack[-3];
    v182 = (Lisp_Object)greaterp2(v183, v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    v182 = v182 ? lisp_true : nil;
    env = stack[-9];
    if (!(v182 == nil)) { Lisp_Object res = stack[-2]; popv(10); return onevalue(res); }
    stack[0] = stack[-1];
    v184 = stack[-5];
    v183 = stack[-4];
    v182 = stack[-6];
    v182 = acons(v184, v183, v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    fn = elt(env, 6); /* can_be_proved */
    v182 = (*qfn2(fn))(qenv(fn), stack[0], v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    if (v182 == nil) goto v187;
    stack[0] = stack[-7];
    v184 = stack[-5];
    v183 = stack[-4];
    v182 = stack[-6];
    v182 = acons(v184, v183, v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    v183 = CC_edge_bind(env, stack[0], v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    v182 = stack[-2];
    v182 = Lappend(nil, v183, v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    stack[-2] = v182;
    goto v187;

v187:
    v183 = stack[-4];
    v182 = (Lisp_Object)33; /* 2 */
    v182 = plus2(v183, v182);
    nil = C_nil;
    if (exception_pending()) goto v133;
    env = stack[-9];
    stack[-4] = v182;
    goto v105;

v30:
    v182 = qvalue(elt(env, 1)); /* t */
    goto v116;

v21:
    v182 = stack[-6];
    popv(10);
    return ncons(v182);
/* error exit handlers */
v133:
    popv(10);
    return nil;
}



/* Code for make!-x!-to!-p */

static Lisp_Object MS_CDECL CC_makeKxKtoKp(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v45, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v203, v204, v205, v206, v158;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "make-x-to-p");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for make-x-to-p");
#endif
    if (stack >= stacklimit)
    {
        push3(v45,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v45);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v45;
    stack[-1] = v1;
    stack[-2] = v0;
/* end of prologue */
    v204 = stack[-2];
    v203 = qvalue(elt(env, 1)); /* dpoly */
    if (((int32_t)(v204)) < ((int32_t)(v203))) goto v49;
    v204 = stack[-2];
    v203 = (Lisp_Object)33; /* 2 */
    v205 = quot2(v204, v203);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-4];
    v204 = stack[-1];
    v203 = stack[0];
    v203 = CC_makeKxKtoKp(env, 3, v205, v204, v203);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-4];
    v158 = stack[0];
    v206 = v203;
    v205 = stack[0];
    v204 = v203;
    v203 = stack[-1];
    fn = elt(env, 4); /* times!-in!-vector */
    v203 = (*qfnn(fn))(qenv(fn), 5, v158, v206, v205, v204, v203);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-4];
    stack[-3] = v203;
    v206 = stack[-1];
    v205 = stack[-3];
    v204 = qvalue(elt(env, 3)); /* poly!-vector */
    v203 = qvalue(elt(env, 1)); /* dpoly */
    fn = elt(env, 5); /* remainder!-in!-vector */
    v203 = (*qfnn(fn))(qenv(fn), 4, v206, v205, v204, v203);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-4];
    stack[-3] = v203;
    v204 = stack[-2];
    v203 = (Lisp_Object)33; /* 2 */
    v204 = Liremainder(nil, v204, v203);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-4];
    v203 = (Lisp_Object)1; /* 0 */
    if (v204 == v203) goto v113;
    v203 = stack[-3];
    v158 = v203;
    goto v25;

v25:
    v203 = v158;
    v203 = ((intptr_t)(v203) < 0 ? lisp_true : nil);
    if (v203 == nil) goto v208;
    v205 = stack[-1];
    v204 = (Lisp_Object)1; /* 0 */
    v203 = (Lisp_Object)1; /* 0 */
    *(Lisp_Object *)((char *)v205 + (CELL-TAG_VECTOR) + ((int32_t)v204/(16/CELL))) = v203;
    v206 = stack[-1];
    v203 = stack[-3];
    v205 = (Lisp_Object)((int32_t)(v203) + 0x10);
    v204 = qvalue(elt(env, 3)); /* poly!-vector */
    v203 = qvalue(elt(env, 1)); /* dpoly */
    fn = elt(env, 5); /* remainder!-in!-vector */
    v203 = (*qfnn(fn))(qenv(fn), 4, v206, v205, v204, v203);
    nil = C_nil;
    if (exception_pending()) goto v207;
    stack[-3] = v203;
    goto v113;

v113:
    v203 = (Lisp_Object)1; /* 0 */
    v158 = v203;
    goto v209;

v209:
    v204 = stack[-3];
    v203 = v158;
    v203 = (Lisp_Object)(int32_t)((int32_t)v204 - (int32_t)v203 + TAG_FIXNUM);
    v203 = ((intptr_t)(v203) < 0 ? lisp_true : nil);
    if (!(v203 == nil)) { Lisp_Object res = stack[-3]; popv(5); return onevalue(res); }
    v206 = stack[0];
    v205 = v158;
    v204 = stack[-1];
    v203 = v158;
    v203 = *(Lisp_Object *)((char *)v204 + (CELL-TAG_VECTOR) + ((int32_t)v203/(16/CELL)));
    *(Lisp_Object *)((char *)v206 + (CELL-TAG_VECTOR) + ((int32_t)v205/(16/CELL))) = v203;
    v203 = v158;
    v203 = (Lisp_Object)((int32_t)(v203) + 0x10);
    v158 = v203;
    goto v209;

v208:
    v206 = stack[-1];
    v203 = v158;
    v205 = (Lisp_Object)((int32_t)(v203) + 0x10);
    v204 = stack[-1];
    v203 = v158;
    v203 = *(Lisp_Object *)((char *)v204 + (CELL-TAG_VECTOR) + ((int32_t)v203/(16/CELL)));
    *(Lisp_Object *)((char *)v206 + (CELL-TAG_VECTOR) + ((int32_t)v205/(16/CELL))) = v203;
    v203 = v158;
    v203 = (Lisp_Object)((int32_t)(v203) - 0x10);
    v158 = v203;
    goto v25;

v49:
    v203 = (Lisp_Object)1; /* 0 */
    v206 = v203;
    goto v46;

v46:
    v203 = stack[-2];
    v204 = (Lisp_Object)((int32_t)(v203) - 0x10);
    v203 = v206;
    v203 = (Lisp_Object)(int32_t)((int32_t)v204 - (int32_t)v203 + TAG_FIXNUM);
    v203 = ((intptr_t)(v203) < 0 ? lisp_true : nil);
    if (v203 == nil) goto v89;
    v205 = stack[0];
    v204 = stack[-2];
    v203 = (Lisp_Object)17; /* 1 */
    *(Lisp_Object *)((char *)v205 + (CELL-TAG_VECTOR) + ((int32_t)v204/(16/CELL))) = v203;
    { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }

v89:
    v205 = stack[0];
    v204 = v206;
    v203 = (Lisp_Object)1; /* 0 */
    *(Lisp_Object *)((char *)v205 + (CELL-TAG_VECTOR) + ((int32_t)v204/(16/CELL))) = v203;
    v203 = v206;
    v203 = (Lisp_Object)((int32_t)(v203) + 0x10);
    v206 = v203;
    goto v46;
/* error exit handlers */
v207:
    popv(5);
    return nil;
}



/* Code for general!-quotient!-mod!-p */

static Lisp_Object CC_generalKquotientKmodKp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v199, v2, v3;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for general-quotient-mod-p");
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
    v199 = stack[-1];
    if (v199 == nil) goto v21;
    v199 = stack[-1];
    if (!consp(v199)) goto v63;
    v199 = stack[-1];
    v199 = qcar(v199);
    v199 = (consp(v199) ? nil : lisp_true);
    goto v52;

v52:
    if (v199 == nil) goto v48;
    stack[0] = stack[-2];
    v199 = stack[-1];
    fn = elt(env, 5); /* general!-modular!-reciprocal */
    v199 = (*qfn1(fn))(qenv(fn), v199);
    nil = C_nil;
    if (exception_pending()) goto v98;
    env = stack[-4];
    {
        Lisp_Object v211 = stack[0];
        popv(5);
        fn = elt(env, 6); /* general!-multiply!-by!-constant!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v211, v199);
    }

v48:
    v199 = stack[-2];
    if (v199 == nil) goto v78;
    v199 = stack[-2];
    if (!consp(v199)) goto v17;
    v199 = stack[-2];
    v199 = qcar(v199);
    v199 = (consp(v199) ? nil : lisp_true);
    goto v89;

v89:
    if (v199 == nil) goto v65;
    v199 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 4)) = v199; /* exact!-quotient!-flag */
    { popv(5); return onevalue(v199); }

v65:
    v199 = stack[-2];
    v199 = qcar(v199);
    v199 = qcar(v199);
    v2 = qcar(v199);
    v199 = stack[-1];
    v199 = qcar(v199);
    v199 = qcar(v199);
    v199 = qcar(v199);
    if (equal(v2, v199)) goto v76;
    v199 = stack[-2];
    v199 = qcar(v199);
    v199 = qcar(v199);
    v2 = qcar(v199);
    v199 = stack[-1];
    v199 = qcar(v199);
    v199 = qcar(v199);
    v199 = qcar(v199);
    fn = elt(env, 7); /* ordop */
    v199 = (*qfn2(fn))(qenv(fn), v2, v199);
    nil = C_nil;
    if (exception_pending()) goto v98;
    env = stack[-4];
    if (v199 == nil) goto v178;
    v199 = stack[-2];
    v199 = qcar(v199);
    stack[-3] = qcar(v199);
    v199 = stack[-2];
    v199 = qcar(v199);
    v2 = qcdr(v199);
    v199 = stack[-1];
    stack[0] = CC_generalKquotientKmodKp(env, v2, v199);
    nil = C_nil;
    if (exception_pending()) goto v98;
    env = stack[-4];
    v199 = stack[-2];
    v2 = qcdr(v199);
    v199 = stack[-1];
    v199 = CC_generalKquotientKmodKp(env, v2, v199);
    nil = C_nil;
    if (exception_pending()) goto v98;
    env = stack[-4];
    {
        Lisp_Object v146 = stack[-3];
        Lisp_Object v26 = stack[0];
        popv(5);
        fn = elt(env, 8); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v146, v26, v199);
    }

v178:
    v199 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 4)) = v199; /* exact!-quotient!-flag */
    { popv(5); return onevalue(v199); }

v76:
    v3 = stack[-2];
    v2 = stack[-1];
    v199 = stack[-1];
    v199 = qcar(v199);
    v199 = qcar(v199);
    v199 = qcar(v199);
    {
        popv(5);
        fn = elt(env, 9); /* general!-xquotient!-mod!-p */
        return (*qfnn(fn))(qenv(fn), 3, v3, v2, v199);
    }

v17:
    v199 = qvalue(elt(env, 2)); /* t */
    goto v89;

v78:
    v199 = qvalue(elt(env, 3)); /* nil */
    { popv(5); return onevalue(v199); }

v63:
    v199 = qvalue(elt(env, 2)); /* t */
    goto v52;

v21:
    v199 = elt(env, 1); /* "B=0 IN GENERAL-QUOTIENT-MOD-P" */
    {
        popv(5);
        fn = elt(env, 10); /* errorf */
        return (*qfn1(fn))(qenv(fn), v199);
    }
/* error exit handlers */
v98:
    popv(5);
    return nil;
}



/* Code for simpsqrt */

static Lisp_Object CC_simpsqrt(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v209, v217, v172;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for simpsqrt");
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
    v172 = v0;
/* end of prologue */
    v217 = v172;
    v209 = (Lisp_Object)1; /* 0 */
    if (v217 == v209) goto v63;
    v209 = qvalue(elt(env, 2)); /* !*keepsqrts */
    if (v209 == nil) goto v43;
    v209 = v172;
    v209 = qcar(v209);
    fn = elt(env, 4); /* simp!* */
    v209 = (*qfn1(fn))(qenv(fn), v209);
    nil = C_nil;
    if (exception_pending()) goto v167;
    env = stack[-2];
    v217 = v209;
    v209 = qvalue(elt(env, 5)); /* !*exp */
    if (v209 == nil) goto v116;
    v209 = v217;
    goto v77;

v77:
    stack[-1] = v209;
    v209 = stack[-1];
    v209 = qcar(v209);
    if (v209 == nil) goto v87;
    v209 = stack[-1];
    v217 = qcdr(v209);
    v209 = (Lisp_Object)17; /* 1 */
    if (v217 == v209) goto v12;
    v209 = qvalue(elt(env, 1)); /* nil */
    goto v82;

v82:
    if (v209 == nil) goto v218;
    v209 = stack[-1];
    v217 = qcar(v209);
    v209 = (Lisp_Object)-15; /* -1 */
    if (v217 == v209) goto v95;
    v209 = elt(env, 8); /* i */
    fn = elt(env, 10); /* simp */
    stack[0] = (*qfn1(fn))(qenv(fn), v209);
    nil = C_nil;
    if (exception_pending()) goto v167;
    env = stack[-2];
    v209 = stack[-1];
    v209 = qcar(v209);
    fn = elt(env, 11); /* !:minus */
    v209 = (*qfn1(fn))(qenv(fn), v209);
    nil = C_nil;
    if (exception_pending()) goto v167;
    env = stack[-2];
    fn = elt(env, 12); /* prepd */
    v209 = (*qfn1(fn))(qenv(fn), v209);
    nil = C_nil;
    if (exception_pending()) goto v167;
    env = stack[-2];
    v209 = ncons(v209);
    nil = C_nil;
    if (exception_pending()) goto v167;
    env = stack[-2];
    v209 = CC_simpsqrt(env, v209);
    nil = C_nil;
    if (exception_pending()) goto v167;
    env = stack[-2];
    {
        Lisp_Object v192 = stack[0];
        popv(3);
        fn = elt(env, 13); /* multsq */
        return (*qfn2(fn))(qenv(fn), v192, v209);
    }

v95:
    v209 = elt(env, 8); /* i */
    {
        popv(3);
        fn = elt(env, 10); /* simp */
        return (*qfn1(fn))(qenv(fn), v209);
    }

v218:
    stack[0] = elt(env, 9); /* sqrt */
    v209 = stack[-1];
    v209 = ncons(v209);
    nil = C_nil;
    if (exception_pending()) goto v167;
    env = stack[-2];
    fn = elt(env, 14); /* domainvalchk */
    v209 = (*qfn2(fn))(qenv(fn), stack[0], v209);
    nil = C_nil;
    if (exception_pending()) goto v167;
    env = stack[-2];
    v217 = v209;
    if (!(v209 == nil)) { popv(3); return onevalue(v217); }
    v217 = stack[-1];
    v209 = (Lisp_Object)33; /* 2 */
    {
        popv(3);
        fn = elt(env, 15); /* simprad */
        return (*qfn2(fn))(qenv(fn), v217, v209);
    }

v12:
    v209 = stack[-1];
    v209 = qcar(v209);
    if (!consp(v209)) goto v155;
    v209 = stack[-1];
    v209 = qcar(v209);
    v209 = qcar(v209);
    v209 = (consp(v209) ? nil : lisp_true);
    goto v202;

v202:
    if (v209 == nil) goto v146;
    v209 = stack[-1];
    v209 = qcar(v209);
    if (!consp(v209)) goto v111;
    v209 = stack[-1];
    v209 = qcar(v209);
    v217 = qcar(v209);
    v209 = elt(env, 7); /* minusp */
    v217 = get(v217, v209);
    env = stack[-2];
    v209 = stack[-1];
    v209 = qcar(v209);
    v209 = Lapply1(nil, v217, v209);
    nil = C_nil;
    if (exception_pending()) goto v167;
    env = stack[-2];
    goto v82;

v111:
    v209 = stack[-1];
    v209 = qcar(v209);
    v209 = Lminusp(nil, v209);
    env = stack[-2];
    goto v82;

v146:
    v209 = qvalue(elt(env, 1)); /* nil */
    goto v82;

v155:
    v209 = qvalue(elt(env, 6)); /* t */
    goto v202;

v87:
    v217 = qvalue(elt(env, 1)); /* nil */
    v209 = (Lisp_Object)17; /* 1 */
    popv(3);
    return cons(v217, v209);

v116:
    v209 = v217;
    fn = elt(env, 16); /* offexpchk */
    v209 = (*qfn1(fn))(qenv(fn), v209);
    nil = C_nil;
    if (exception_pending()) goto v167;
    env = stack[-2];
    goto v77;

v43:
    v209 = v172;
    stack[0] = qcar(v209);
    v217 = elt(env, 3); /* (quotient 1 2) */
    v209 = elt(env, 4); /* simp!* */
    fn = elt(env, 17); /* simpexpon1 */
    v217 = (*qfn2(fn))(qenv(fn), v217, v209);
    nil = C_nil;
    if (exception_pending()) goto v167;
    env = stack[-2];
    v209 = qvalue(elt(env, 1)); /* nil */
    {
        Lisp_Object v187 = stack[0];
        popv(3);
        fn = elt(env, 18); /* simpexpt1 */
        return (*qfnn(fn))(qenv(fn), 3, v187, v217, v209);
    }

v63:
    v217 = qvalue(elt(env, 1)); /* nil */
    v209 = (Lisp_Object)17; /* 1 */
    popv(3);
    return cons(v217, v209);
/* error exit handlers */
v167:
    popv(3);
    return nil;
}



/* Code for znumr */

static Lisp_Object CC_znumr(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v75, v79, v80;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for znumr");
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
    v79 = v0;
/* end of prologue */
    v75 = v79;
    v75 = qcar(v75);
    v79 = v75;
    if (v75 == nil) goto v6;
    v75 = v79;
    if (is_number(v75)) goto v23;
    v75 = qvalue(elt(env, 2)); /* nil */
    goto v35;

v35:
    if (!(v75 == nil)) { popv(1); return onevalue(v75); }
    v75 = v79;
    if (!consp(v75)) goto v93;
    v75 = v79;
    if (!consp(v75)) goto v51;
    v75 = v79;
    v75 = qcar(v75);
    v75 = (consp(v75) ? nil : lisp_true);
    goto v83;

v83:
    if (v75 == nil) goto v87;
    v75 = v79;
    v80 = qcar(v75);
    v75 = elt(env, 3); /* zerop */
    v75 = get(v80, v75);
    env = stack[0];
    v80 = v75;
    v75 = v80;
    if (v75 == nil) goto v15;
    v75 = v80;
        popv(1);
        return Lapply1(nil, v75, v79);

v15:
    v75 = qvalue(elt(env, 2)); /* nil */
    { popv(1); return onevalue(v75); }

v87:
    v75 = qvalue(elt(env, 2)); /* nil */
    { popv(1); return onevalue(v75); }

v51:
    v75 = qvalue(elt(env, 1)); /* t */
    goto v83;

v93:
    v75 = qvalue(elt(env, 2)); /* nil */
    { popv(1); return onevalue(v75); }

v23:
    v75 = v79;
    v75 = (Lisp_Object)zerop(v75);
    v75 = v75 ? lisp_true : nil;
    env = stack[0];
    goto v35;

v6:
    v75 = qvalue(elt(env, 1)); /* t */
    { popv(1); return onevalue(v75); }
}



/* Code for mchkminus */

static Lisp_Object CC_mchkminus(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v193, v137, v138;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mchkminus");
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
    v193 = stack[0];
    v137 = qcar(v193);
    v193 = elt(env, 1); /* (times quotient) */
    v193 = Lmemq(nil, v137, v193);
    if (v193 == nil) goto v21;
    v193 = stack[-1];
    if (!consp(v193)) goto v58;
    v193 = stack[-1];
    v137 = qcar(v193);
    v193 = stack[0];
    v193 = qcar(v193);
    v193 = (v137 == v193 ? lisp_true : nil);
    v193 = (v193 == nil ? lisp_true : nil);
    goto v23;

v23:
    if (v193 == nil) goto v41;
    v193 = stack[0];
    v137 = qcar(v193);
    v193 = elt(env, 4); /* times */
    if (v137 == v193) goto v27;
    v193 = stack[0];
    v137 = qcar(v193);
    v193 = elt(env, 6); /* optional */
    v193 = get(v137, v193);
    env = stack[-3];
    stack[-2] = v193;
    v193 = stack[-2];
    if (v193 == nil) goto v75;
    v137 = elt(env, 7); /* minus */
    v193 = stack[-1];
    v138 = list2(v137, v193);
    nil = C_nil;
    if (exception_pending()) goto v169;
    env = stack[-3];
    v137 = stack[0];
    v193 = stack[-2];
    {
        popv(4);
        fn = elt(env, 11); /* mchkopt1 */
        return (*qfnn(fn))(qenv(fn), 3, v138, v137, v193);
    }

v75:
    v193 = nil;
    { popv(4); return onevalue(v193); }

v27:
    v138 = stack[-1];
    v137 = stack[0];
    v193 = elt(env, 5); /* ((minus 1) (minus 1)) */
    {
        popv(4);
        fn = elt(env, 11); /* mchkopt1 */
        return (*qfnn(fn))(qenv(fn), 3, v138, v137, v193);
    }

v41:
    v193 = stack[-1];
    v193 = qcdr(v193);
    v193 = qcar(v193);
    if (is_number(v193)) goto v95;
    v193 = stack[-1];
    v193 = qcdr(v193);
    v193 = qcar(v193);
    v193 = Lconsp(nil, v193);
    env = stack[-3];
    if (v193 == nil) goto v223;
    v193 = stack[-1];
    v193 = qcdr(v193);
    v193 = qcar(v193);
    v137 = qcar(v193);
    v193 = elt(env, 8); /* dname */
    v193 = get(v137, v193);
    env = stack[-3];
    if (!(v193 == nil)) goto v95;

v223:
    v193 = stack[0];
    v137 = qcar(v193);
    v193 = elt(env, 9); /* quotient */
    if (v137 == v193) goto v95;
    v137 = elt(env, 10); /* (minus 1) */
    v193 = stack[-1];
    v193 = qcdr(v193);
    v138 = cons(v137, v193);
    nil = C_nil;
    if (exception_pending()) goto v169;
    env = stack[-3];
    v193 = stack[0];
    v137 = qcdr(v193);
    v193 = elt(env, 4); /* times */
    {
        popv(4);
        fn = elt(env, 12); /* mcharg */
        return (*qfnn(fn))(qenv(fn), 3, v138, v137, v193);
    }

v95:
    v137 = elt(env, 7); /* minus */
    v193 = stack[-1];
    v193 = qcdr(v193);
    v193 = qcar(v193);
    v137 = list2(v137, v193);
    nil = C_nil;
    if (exception_pending()) goto v169;
    env = stack[-3];
    v193 = stack[-1];
    v193 = qcdr(v193);
    v193 = qcdr(v193);
    v138 = cons(v137, v193);
    nil = C_nil;
    if (exception_pending()) goto v169;
    env = stack[-3];
    v193 = stack[0];
    v137 = qcdr(v193);
    v193 = stack[0];
    v193 = qcar(v193);
    {
        popv(4);
        fn = elt(env, 12); /* mcharg */
        return (*qfnn(fn))(qenv(fn), 3, v138, v137, v193);
    }

v58:
    v193 = qvalue(elt(env, 3)); /* t */
    goto v23;

v21:
    v193 = qvalue(elt(env, 2)); /* nil */
    { popv(4); return onevalue(v193); }
/* error exit handlers */
v169:
    popv(4);
    return nil;
}



/* Code for formgen */

static Lisp_Object MS_CDECL CC_formgen(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v45, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v236, v237, v238;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "formgen");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for formgen");
#endif
    if (stack >= stacklimit)
    {
        push3(v45,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v1,v45);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-3] = v45;
    stack[-4] = v1;
    stack[-5] = v0;
/* end of prologue */
    v236 = stack[-5];
    v236 = qcdr(v236);
    v236 = qcar(v236);
    stack[-5] = v236;
    v236 = stack[-5];
    if (!consp(v236)) goto v22;
    v236 = stack[-5];
    v237 = qcar(v236);
    v236 = elt(env, 1); /* !? */
    if (v237 == v236) goto v156;
    stack[-1] = elt(env, 5); /* !! */
    stack[0] = elt(env, 1); /* !? */
    v236 = stack[-5];
    v236 = qcar(v236);
    v236 = Lexplode(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = list2star(stack[-1], stack[0], v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = Lcompress(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v237 = Lintern(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = stack[-5];
    v236 = qcdr(v236);
    v236 = cons(v237, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    stack[-5] = v236;
    v236 = stack[-5];
    v236 = qcar(v236);
    stack[0] = Lmkquote(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = elt(env, 6); /* gen */
    v237 = Lmkquote(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = qvalue(elt(env, 4)); /* t */
    v236 = list3(stack[0], v237, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    goto v240;

v240:
    stack[-1] = elt(env, 8); /* progn */
    v237 = elt(env, 9); /* put */
    stack[0] = cons(v237, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v238 = stack[-5];
    v237 = stack[-4];
    v236 = stack[-3];
    fn = elt(env, 10); /* form1 */
    v236 = (*qfnn(fn))(qenv(fn), 3, v238, v237, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    {
        Lisp_Object v241 = stack[-1];
        Lisp_Object v242 = stack[0];
        popv(8);
        return list3(v241, v242, v236);
    }

v156:
    v236 = stack[-5];
    v237 = qcar(v236);
    v236 = elt(env, 1); /* !? */
    if (v237 == v236) goto v243;
    v236 = qvalue(elt(env, 7)); /* nil */
    goto v5;

v5:
    if (v236 == nil) goto v220;
    stack[-6] = elt(env, 5); /* !! */
    stack[-2] = elt(env, 1); /* !? */
    stack[-1] = elt(env, 5); /* !! */
    stack[0] = elt(env, 1); /* !? */
    v236 = stack[-5];
    v236 = qcdr(v236);
    v236 = qcar(v236);
    v236 = Lexplode(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = list2star(stack[-1], stack[0], v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = list2star(stack[-6], stack[-2], v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = Lcompress(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = Lintern(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    stack[-5] = v236;
    v236 = stack[-5];
    stack[0] = Lmkquote(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = elt(env, 3); /* mgen */
    v237 = Lmkquote(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = qvalue(elt(env, 4)); /* t */
    v236 = list3(stack[0], v237, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    goto v240;

v220:
    v236 = stack[-5];
    v236 = qcdr(v236);
    v236 = qcar(v236);
    stack[-5] = v236;
    stack[-6] = elt(env, 5); /* !! */
    stack[-2] = elt(env, 1); /* !? */
    stack[-1] = elt(env, 5); /* !! */
    stack[0] = elt(env, 1); /* !? */
    v236 = stack[-5];
    v236 = qcar(v236);
    v236 = Lexplode(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = list2star(stack[-1], stack[0], v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = list2star(stack[-6], stack[-2], v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = Lcompress(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v237 = Lintern(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = stack[-5];
    v236 = qcdr(v236);
    v236 = cons(v237, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    stack[-5] = v236;
    v236 = stack[-5];
    v236 = qcar(v236);
    stack[0] = Lmkquote(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = elt(env, 6); /* gen */
    v237 = Lmkquote(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = qvalue(elt(env, 4)); /* t */
    v236 = list3(stack[0], v237, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    goto v240;

v243:
    v236 = stack[-5];
    v236 = qcdr(v236);
    v236 = qcar(v236);
    v236 = (consp(v236) ? nil : lisp_true);
    goto v5;

v22:
    v237 = stack[-5];
    v236 = elt(env, 1); /* !? */
    if (v237 == v236) goto v61;
    stack[-1] = elt(env, 5); /* !! */
    stack[0] = elt(env, 1); /* !? */
    v236 = stack[-5];
    v236 = Lexplode(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = list2star(stack[-1], stack[0], v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = Lcompress(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = Lintern(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    stack[-5] = v236;
    v236 = stack[-5];
    stack[0] = Lmkquote(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = elt(env, 6); /* gen */
    v237 = Lmkquote(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = qvalue(elt(env, 4)); /* t */
    v236 = list3(stack[0], v237, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    goto v240;

v61:
    v236 = elt(env, 2); /* !?!? */
    v236 = Lintern(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    stack[-5] = v236;
    v236 = stack[-5];
    stack[0] = Lmkquote(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = elt(env, 3); /* mgen */
    v237 = Lmkquote(nil, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    v236 = qvalue(elt(env, 4)); /* t */
    v236 = list3(stack[0], v237, v236);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-7];
    goto v240;
/* error exit handlers */
v239:
    popv(8);
    return nil;
}



/* Code for nestprep!: */

static Lisp_Object CC_nestprepT(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v235, v15;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for nestprep:");
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
    v15 = v0;
/* end of prologue */
    stack[-1] = elt(env, 1); /* co */
    v235 = v15;
    v235 = integerp(v235);
    if (v235 == nil) goto v41;
    v235 = (Lisp_Object)1; /* 0 */
    stack[0] = v235;
    goto v55;

v55:
    v235 = v15;
    v235 = integerp(v235);
    if (v235 == nil) goto v57;
    v235 = v15;
    fn = elt(env, 3); /* simp */
    v235 = (*qfn1(fn))(qenv(fn), v235);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-2];
    goto v37;

v37:
    v15 = v235;
    v235 = v15;
    v235 = qcar(v235);
    if (v235 == nil) goto v17;
    v235 = elt(env, 2); /* prepf */
    fn = elt(env, 4); /* sqform */
    v235 = (*qfn2(fn))(qenv(fn), v15, v235);
    nil = C_nil;
    if (exception_pending()) goto v116;
    goto v54;

v54:
    {
        Lisp_Object v30 = stack[-1];
        Lisp_Object v29 = stack[0];
        popv(3);
        return list3(v30, v29, v235);
    }

v17:
    v235 = (Lisp_Object)1; /* 0 */
    goto v54;

v57:
    v235 = v15;
    v235 = qcdr(v235);
    v235 = qcdr(v235);
    v235 = qcdr(v235);
    goto v37;

v41:
    v235 = v15;
    v235 = qcdr(v235);
    v235 = qcar(v235);
    stack[0] = v235;
    goto v55;
/* error exit handlers */
v116:
    popv(3);
    return nil;
}



/* Code for a2dipatom */

static Lisp_Object CC_a2dipatom(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v77, v235;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for a2dipatom");
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
    v235 = stack[0];
    v77 = (Lisp_Object)1; /* 0 */
    if (v235 == v77) goto v6;
    v77 = stack[0];
    if (is_number(v77)) goto v46;
    v235 = stack[0];
    v77 = qvalue(elt(env, 2)); /* dipvars!* */
    v77 = Lmember(nil, v235, v77);
    if (v77 == nil) goto v46;
    v77 = stack[0];
    fn = elt(env, 4); /* mkexpvec */
    stack[0] = (*qfn1(fn))(qenv(fn), v77);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-2];
    v77 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 5); /* a2bc */
    v77 = (*qfn1(fn))(qenv(fn), v77);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-2];
    v235 = qvalue(elt(env, 3)); /* nil */
    {
        Lisp_Object v116 = stack[0];
        popv(3);
        return list2star(v116, v77, v235);
    }

v46:
    fn = elt(env, 6); /* evzero */
    stack[-1] = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-2];
    v77 = stack[0];
    fn = elt(env, 5); /* a2bc */
    v77 = (*qfn1(fn))(qenv(fn), v77);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-2];
    v235 = qvalue(elt(env, 3)); /* nil */
    {
        Lisp_Object v30 = stack[-1];
        popv(3);
        return list2star(v30, v77, v235);
    }

v6:
    v77 = qvalue(elt(env, 1)); /* dipzero */
    { popv(3); return onevalue(v77); }
/* error exit handlers */
v14:
    popv(3);
    return nil;
}



/* Code for evalsubset_eq */

static Lisp_Object CC_evalsubset_eq(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v59, v90, v69;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for evalsubset_eq");
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
    v90 = v0;
/* end of prologue */
    v69 = elt(env, 1); /* subset_eq */
    fn = elt(env, 3); /* evalsetbool */
    v59 = (*qfnn(fn))(qenv(fn), 3, v69, v90, v59);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-1];
    stack[0] = v59;
    v59 = stack[0];
    if (!consp(v59)) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v90 = elt(env, 2); /* equal */
    v59 = stack[0];
    fn = elt(env, 4); /* apply */
    v59 = (*qfn2(fn))(qenv(fn), v90, v59);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-1];
    if (!(v59 == nil)) { popv(2); return onevalue(v59); }
    v59 = stack[0];
    {
        popv(2);
        fn = elt(env, 5); /* evalsymsubset */
        return (*qfn1(fn))(qenv(fn), v59);
    }
/* error exit handlers */
v17:
    popv(2);
    return nil;
}



/* Code for evalrandom */

static Lisp_Object CC_evalrandom(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v24, v25;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for evalrandom");
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
    v24 = stack[-1];
    if (v24 == nil) goto v54;
    v24 = stack[-1];
    v24 = qcdr(v24);
    goto v55;

v55:
    if (v24 == nil) goto v53;
    v24 = qvalue(elt(env, 2)); /* !*protfg */
    if (!(v24 == nil)) goto v22;
    v24 = elt(env, 3); /* "random takes a single argument" */
    fn = elt(env, 7); /* lprie */
    v24 = (*qfn1(fn))(qenv(fn), v24);
    nil = C_nil;
    if (exception_pending()) goto v211;
    env = stack[-3];
    goto v22;

v22:
    v24 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v211;
    v24 = nil;
    { popv(4); return onevalue(v24); }

v53:
    v24 = stack[-1];
    v24 = qcar(v24);
    fn = elt(env, 8); /* reval */
    v25 = (*qfn1(fn))(qenv(fn), v24);
    nil = C_nil;
    if (exception_pending()) goto v211;
    env = stack[-3];
    stack[-1] = v25;
    v24 = elt(env, 4); /* !*interval!* */
    if (!consp(v25)) goto v39;
    v25 = qcar(v25);
    if (!(v25 == v24)) goto v39;
    stack[0] = nil;
    v24 = stack[-1];
    v24 = qcdr(v24);
    v24 = qcar(v24);
    stack[-2] = v24;
    v24 = integerp(v24);
    if (v24 == nil) goto v66;
    v24 = stack[-1];
    v24 = qcdr(v24);
    v24 = qcdr(v24);
    v24 = qcar(v24);
    stack[0] = v24;
    v24 = integerp(v24);
    if (v24 == nil) goto v66;
    v25 = stack[-2];
    v24 = stack[0];
    v24 = (Lisp_Object)lessp2(v25, v24);
    nil = C_nil;
    if (exception_pending()) goto v211;
    v24 = v24 ? lisp_true : nil;
    env = stack[-3];
    if (!(v24 == nil)) goto v64;

v66:
    v24 = qvalue(elt(env, 2)); /* !*protfg */
    if (!(v24 == nil)) goto v87;
    v24 = elt(env, 5); /* "random range argument a .. b must have integer a,b with a < b" 
*/
    fn = elt(env, 7); /* lprie */
    v24 = (*qfn1(fn))(qenv(fn), v24);
    nil = C_nil;
    if (exception_pending()) goto v211;
    env = stack[-3];
    goto v87;

v87:
    v24 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v211;
    env = stack[-3];
    goto v64;

v64:
    v24 = stack[-2];
    v24 = (Lisp_Object)zerop(v24);
    v24 = v24 ? lisp_true : nil;
    env = stack[-3];
    if (v24 == nil) goto v104;
    v24 = stack[0];
    v24 = add1(v24);
    nil = C_nil;
    if (exception_pending()) goto v211;
    env = stack[-3];
    {
        popv(4);
        fn = elt(env, 9); /* random */
        return (*qfn1(fn))(qenv(fn), v24);
    }

v104:
    stack[-1] = stack[-2];
    v25 = stack[0];
    v24 = stack[-2];
    v24 = difference2(v25, v24);
    nil = C_nil;
    if (exception_pending()) goto v211;
    env = stack[-3];
    v24 = add1(v24);
    nil = C_nil;
    if (exception_pending()) goto v211;
    env = stack[-3];
    fn = elt(env, 9); /* random */
    v24 = (*qfn1(fn))(qenv(fn), v24);
    nil = C_nil;
    if (exception_pending()) goto v211;
    {
        Lisp_Object v146 = stack[-1];
        popv(4);
        return plus2(v146, v24);
    }

v39:
    v24 = stack[-1];
    v24 = integerp(v24);
    if (v24 == nil) goto v33;
    v25 = stack[-1];
    v24 = (Lisp_Object)1; /* 0 */
    v24 = (Lisp_Object)greaterp2(v25, v24);
    nil = C_nil;
    if (exception_pending()) goto v211;
    v24 = v24 ? lisp_true : nil;
    env = stack[-3];
    if (v24 == nil) goto v33;
    v24 = stack[-1];
    {
        popv(4);
        fn = elt(env, 9); /* random */
        return (*qfn1(fn))(qenv(fn), v24);
    }

v33:
    v25 = stack[-1];
    v24 = elt(env, 6); /* "integer or integer range" */
    {
        popv(4);
        fn = elt(env, 10); /* typerr */
        return (*qfn2(fn))(qenv(fn), v25, v24);
    }

v54:
    v24 = qvalue(elt(env, 1)); /* t */
    goto v55;
/* error exit handlers */
v211:
    popv(4);
    return nil;
}



/* Code for fortexp1 */

static Lisp_Object CC_fortexp1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v364, v365, v366;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for fortexp1");
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
    stack[-3] = v1;
    stack[-1] = v0;
/* end of prologue */

v21:
    v364 = stack[-1];
    if (!consp(v364)) goto v54;
    v364 = stack[-1];
    fn = elt(env, 29); /* listp */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    if (v364 == nil) goto v35;
    v364 = stack[-1];
    v364 = Llength(nil, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = Lonep(nil, v364);
    env = stack[-9];
    if (v364 == nil) goto v35;
    v364 = stack[-1];
    {
        popv(10);
        fn = elt(env, 30); /* fortranname */
        return (*qfn1(fn))(qenv(fn), v364);
    }

v35:
    v364 = stack[-1];
    v364 = qcar(v364);
    fn = elt(env, 31); /* optype */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    if (v364 == nil) goto v124;
    v364 = stack[-1];
    v364 = qcar(v364);
    fn = elt(env, 32); /* fortranprecedence */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[-4] = v364;
    v364 = stack[-1];
    v364 = qcar(v364);
    fn = elt(env, 33); /* fortranop */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[-2] = v364;
    v364 = stack[-1];
    v364 = qcdr(v364);
    stack[-1] = v364;
    v364 = stack[-1];
    v364 = Llength(nil, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = Lonep(nil, v364);
    env = stack[-9];
    if (v364 == nil) goto v86;
    stack[0] = stack[-2];
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = stack[-4];
    v364 = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = cons(stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = v364;
    goto v121;

v121:
    v365 = stack[-3];
    v364 = stack[-4];
    v364 = (Lisp_Object)geq2(v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    v364 = v364 ? lisp_true : nil;
    env = stack[-9];
    if (v364 == nil) { Lisp_Object res = stack[0]; popv(10); return onevalue(res); }
    v364 = stack[0];
    fn = elt(env, 34); /* insertparens */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    stack[0] = v364;
    { Lisp_Object res = stack[0]; popv(10); return onevalue(res); }

v86:
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = stack[-4];
    v364 = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = v364;
    v365 = stack[-2];
    v364 = elt(env, 1); /* !+ */
    if (v365 == v364) goto v10;
    v365 = stack[-2];
    v364 = elt(env, 5); /* !*!* */
    if (!(v365 == v364)) goto v119;

v140:
    v364 = stack[-1];
    v364 = qcdr(v364);
    stack[-1] = v364;
    if (v364 == nil) goto v121;
    v364 = stack[-1];
    v364 = qcar(v364);
    if (!(is_number(v364))) goto v132;
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = (Lisp_Object)1; /* 0 */
    v364 = (Lisp_Object)lessp2(v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    v364 = v364 ? lisp_true : nil;
    env = stack[-9];
    if (v364 == nil) goto v132;
    v364 = stack[-2];
    v364 = ncons(v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = Lappend(nil, stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = stack[-4];
    v364 = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    fn = elt(env, 34); /* insertparens */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = Lappend(nil, stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = v364;
    goto v140;

v132:
    v364 = stack[-2];
    v364 = ncons(v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = Lappend(nil, stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = stack[-4];
    v364 = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = Lappend(nil, stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = v364;
    goto v140;

v119:
    v364 = stack[-1];
    v364 = qcdr(v364);
    stack[-1] = v364;
    if (v364 == nil) goto v121;
    v364 = stack[-2];
    v364 = ncons(v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = Lappend(nil, stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = stack[-4];
    v364 = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = Lappend(nil, stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = v364;
    goto v119;

v10:
    v364 = stack[-1];
    v364 = qcdr(v364);
    stack[-1] = v364;
    if (v364 == nil) goto v121;
    v364 = stack[-1];
    v364 = qcar(v364);
    if (!consp(v364)) goto v32;
    v364 = stack[-1];
    v364 = qcar(v364);
    v365 = qcar(v364);
    v364 = elt(env, 4); /* minus */
    v364 = Lneq(nil, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    goto v154;

v154:
    if (v364 == nil) goto v26;
    v364 = stack[-2];
    v364 = ncons(v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = Lappend(nil, stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = v364;
    goto v26;

v26:
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = stack[-4];
    v364 = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = Lappend(nil, stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = v364;
    goto v10;

v32:
    v364 = qvalue(elt(env, 3)); /* t */
    goto v154;

v124:
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = elt(env, 6); /* literal */
    if (v365 == v364) goto v368;
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = elt(env, 7); /* range */
    if (v365 == v364) goto v369;
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = elt(env, 9); /* !:rd!: */
    if (v365 == v364) goto v370;
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = elt(env, 18); /* !:crn!: */
    if (v365 == v364) goto v371;
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = elt(env, 19); /* !:gi!: */
    if (v365 == v364) goto v372;
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = elt(env, 20); /* !:cr!: */
    if (v365 == v364) goto v373;
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = elt(env, 26); /* !*fortranname!* */
    v364 = get(v365, v364);
    env = stack[-9];
    stack[-7] = v364;
    v364 = stack[-1];
    v364 = qcar(v364);
    fn = elt(env, 30); /* fortranname */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[-8] = v364;
    v364 = stack[-1];
    v364 = qcdr(v364);
    stack[-1] = v364;
    v364 = stack[-1];
    stack[-6] = v364;
    goto v374;

v374:
    v364 = stack[-6];
    if (v364 == nil) goto v375;
    v364 = stack[-6];
    v364 = qcar(v364);
    stack[-2] = v364;
    stack[-1] = elt(env, 23); /* !, */
    v364 = stack[-7];
    if (v364 == nil) goto v376;
    v364 = stack[-2];
    v364 = integerp(v364);
    if (v364 == nil) goto v377;
    v364 = stack[-2];
    v364 = Lfloat(nil, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = ncons(v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    goto v378;

v378:
    v364 = cons(stack[-1], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[-5] = v364;
    v364 = stack[-5];
    fn = elt(env, 35); /* lastpair */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[-4] = v364;
    v364 = stack[-6];
    v364 = qcdr(v364);
    stack[-6] = v364;
    v364 = stack[-4];
    if (!consp(v364)) goto v374;
    else goto v379;

v379:
    v364 = stack[-6];
    if (v364 == nil) goto v380;
    stack[-3] = stack[-4];
    v364 = stack[-6];
    v364 = qcar(v364);
    stack[-2] = v364;
    stack[-1] = elt(env, 23); /* !, */
    v364 = stack[-7];
    if (v364 == nil) goto v381;
    v364 = stack[-2];
    v364 = integerp(v364);
    if (v364 == nil) goto v382;
    v364 = stack[-2];
    v364 = Lfloat(nil, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = ncons(v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    goto v383;

v383:
    v364 = cons(stack[-1], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = Lrplacd(nil, stack[-3], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = stack[-4];
    fn = elt(env, 35); /* lastpair */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[-4] = v364;
    v364 = stack[-6];
    v364 = qcdr(v364);
    stack[-6] = v364;
    goto v379;

v382:
    v364 = stack[-2];
    fn = elt(env, 36); /* isfloat */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    if (!(v364 == nil)) goto v384;
    v365 = stack[-8];
    v364 = elt(env, 27); /* (real dble) */
    v364 = Lmemq(nil, v365, v364);
    if (!(v364 == nil)) goto v384;
    v364 = elt(env, 28); /* real */
    fn = elt(env, 30); /* fortranname */
    stack[0] = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v365 = stack[-2];
    v364 = (Lisp_Object)1; /* 0 */
    v364 = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    fn = elt(env, 34); /* insertparens */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = cons(stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    goto v383;

v384:
    v365 = stack[-2];
    v364 = (Lisp_Object)1; /* 0 */
    v364 = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    goto v383;

v381:
    v365 = stack[-2];
    v364 = (Lisp_Object)1; /* 0 */
    v364 = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    goto v383;

v380:
    v364 = stack[-5];
    goto v385;

v385:
    v364 = qcdr(v364);
    stack[0] = stack[-8];
    fn = elt(env, 34); /* insertparens */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    {
        Lisp_Object v386 = stack[0];
        popv(10);
        return cons(v386, v364);
    }

v377:
    v364 = stack[-2];
    fn = elt(env, 36); /* isfloat */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    if (!(v364 == nil)) goto v387;
    v365 = stack[-8];
    v364 = elt(env, 27); /* (real dble) */
    v364 = Lmemq(nil, v365, v364);
    if (!(v364 == nil)) goto v387;
    v364 = elt(env, 28); /* real */
    fn = elt(env, 30); /* fortranname */
    stack[0] = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v365 = stack[-2];
    v364 = (Lisp_Object)1; /* 0 */
    v364 = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    fn = elt(env, 34); /* insertparens */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = cons(stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    goto v378;

v387:
    v365 = stack[-2];
    v364 = (Lisp_Object)1; /* 0 */
    v364 = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    goto v378;

v376:
    v365 = stack[-2];
    v364 = (Lisp_Object)1; /* 0 */
    v364 = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    goto v378;

v375:
    v364 = qvalue(elt(env, 2)); /* nil */
    goto v385;

v373:
    v364 = qvalue(elt(env, 14)); /* !*double */
    if (v364 == nil) goto v388;
    v364 = qvalue(elt(env, 21)); /* !*f90 */
    if (v364 == nil) goto v388;
    stack[-4] = elt(env, 22); /* cmplx!( */
    v365 = elt(env, 9); /* !:rd!: */
    v364 = stack[-1];
    v364 = qcdr(v364);
    v364 = qcar(v364);
    v365 = cons(v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = stack[-3];
    stack[-2] = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = elt(env, 23); /* !, */
    v365 = elt(env, 9); /* !:rd!: */
    v364 = stack[-1];
    v364 = qcdr(v364);
    v364 = qcdr(v364);
    v365 = cons(v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = stack[-3];
    stack[-1] = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v366 = elt(env, 23); /* !, */
    v365 = elt(env, 24); /* kind!(1!.0!D0!) */
    v364 = elt(env, 25); /* !) */
    v364 = list3(v366, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = Lappend(nil, stack[-1], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = cons(stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = Lappend(nil, stack[-2], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    {
        Lisp_Object v389 = stack[-4];
        popv(10);
        return cons(v389, v364);
    }

v388:
    stack[-4] = elt(env, 22); /* cmplx!( */
    v365 = elt(env, 9); /* !:rd!: */
    v364 = stack[-1];
    v364 = qcdr(v364);
    v364 = qcar(v364);
    v365 = cons(v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = stack[-3];
    stack[-2] = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = elt(env, 23); /* !, */
    v365 = elt(env, 9); /* !:rd!: */
    v364 = stack[-1];
    v364 = qcdr(v364);
    v364 = qcdr(v364);
    v365 = cons(v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = stack[-3];
    stack[-1] = CC_fortexp1(env, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = elt(env, 25); /* !) */
    v364 = ncons(v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = Lappend(nil, stack[-1], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = cons(stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = Lappend(nil, stack[-2], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    {
        Lisp_Object v390 = stack[-4];
        popv(10);
        return cons(v390, v364);
    }

v372:
    v364 = stack[-1];
    fn = elt(env, 37); /* !*gi2cr */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[-1] = v364;
    goto v21;

v371:
    v364 = stack[-1];
    fn = elt(env, 38); /* !*crn2cr */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[-1] = v364;
    goto v21;

v370:
    v364 = stack[-1];
    v364 = qcdr(v364);
    if (!consp(v364)) goto v391;
    stack[-3] = qvalue(elt(env, 10)); /* !:lower!-sci!: */
    qvalue(elt(env, 10)) = nil; /* !:lower!-sci!: */
    stack[-2] = qvalue(elt(env, 11)); /* !:upper!-sci!: */
    qvalue(elt(env, 11)) = nil; /* !:upper!-sci!: */
    v364 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 10)) = v364; /* !:lower!-sci!: */
    v364 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 11)) = v364; /* !:upper!-sci!: */
    v364 = stack[-1];
    v364 = qcdr(v364);
    if (!consp(v364)) goto v392;
    v364 = stack[-1];
    stack[0] = v364;
    goto v393;

v393:
    v365 = qvalue(elt(env, 12)); /* !:bprec!: */
    v364 = (Lisp_Object)49; /* 3 */
    v364 = difference2(v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    fn = elt(env, 39); /* round!:mt */
    v364 = (*qfn2(fn))(qenv(fn), stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    fn = elt(env, 40); /* csl_normbf */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    fn = elt(env, 41); /* bfexplode0 */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    stack[-4] = v364;
    v364 = stack[-4];
    v364 = qcar(v364);
    stack[-1] = v364;
    v364 = stack[-4];
    v364 = qcdr(v364);
    stack[0] = qcar(v364);
    v364 = stack[-4];
    v364 = qcdr(v364);
    v364 = qcdr(v364);
    v364 = qcar(v364);
    v364 = sub1(v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    v364 = plus2(stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    stack[-4] = v364;
    v366 = elt(env, 6); /* literal */
    v364 = stack[-1];
    v365 = qcar(v364);
    v364 = elt(env, 13); /* !. */
    v365 = list3(v366, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    v364 = stack[-1];
    v364 = qcdr(v364);
    v364 = Lappend(nil, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    stack[-1] = v364;
    v365 = stack[-4];
    v364 = (Lisp_Object)1; /* 0 */
    if (v365 == v364) goto v395;
    stack[0] = stack[-1];
    v364 = qvalue(elt(env, 14)); /* !*double */
    if (v364 == nil) goto v396;
    v364 = elt(env, 15); /* !D */
    v365 = v364;
    goto v397;

v397:
    v364 = stack[-4];
    v364 = list2(v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    v364 = Lappend(nil, stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    stack[-1] = v364;
    goto v398;

v398:
    v364 = stack[-1];
    fn = elt(env, 42); /* fortliteral */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    qvalue(elt(env, 11)) = stack[-2]; /* !:upper!-sci!: */
    qvalue(elt(env, 10)) = stack[-3]; /* !:lower!-sci!: */
    { popv(10); return onevalue(v364); }

v396:
    v364 = elt(env, 16); /* !E */
    v365 = v364;
    goto v397;

v395:
    v364 = qvalue(elt(env, 14)); /* !*double */
    if (v364 == nil) goto v398;
    v365 = stack[-1];
    v364 = elt(env, 17); /* (!D 0) */
    v364 = Lappend(nil, v365, v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    stack[-1] = v364;
    goto v398;

v392:
    v364 = stack[-1];
    v364 = qcdr(v364);
    fn = elt(env, 43); /* fl2bf */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v394;
    env = stack[-9];
    stack[0] = v364;
    goto v393;

v391:
    v364 = stack[-1];
    v364 = qcdr(v364);
    popv(10);
    return ncons(v364);

v369:
    v364 = stack[-1];
    v364 = qcdr(v364);
    v364 = qcar(v364);
    fn = elt(env, 44); /* fortexp */
    stack[-2] = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    stack[0] = elt(env, 8); /* !: */
    v364 = stack[-1];
    v364 = qcdr(v364);
    v364 = qcdr(v364);
    v364 = qcar(v364);
    fn = elt(env, 44); /* fortexp */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    env = stack[-9];
    v364 = cons(stack[0], v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    {
        Lisp_Object v399 = stack[-2];
        popv(10);
        return Lappend(nil, v399, v364);
    }

v368:
    v364 = stack[-1];
    {
        popv(10);
        fn = elt(env, 42); /* fortliteral */
        return (*qfn1(fn))(qenv(fn), v364);
    }

v54:
    v364 = stack[-1];
    fn = elt(env, 30); /* fortranname */
    v364 = (*qfn1(fn))(qenv(fn), v364);
    nil = C_nil;
    if (exception_pending()) goto v367;
    popv(10);
    return ncons(v364);
/* error exit handlers */
v394:
    env = stack[-9];
    qvalue(elt(env, 11)) = stack[-2]; /* !:upper!-sci!: */
    qvalue(elt(env, 10)) = stack[-3]; /* !:lower!-sci!: */
    popv(10);
    return nil;
v367:
    popv(10);
    return nil;
}



/* Code for freeindp */

static Lisp_Object CC_freeindp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v216, v215;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for freeindp");
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

v91:
    v216 = stack[0];
    if (v216 == nil) goto v48;
    v216 = stack[0];
    v216 = (is_number(v216) ? lisp_true : nil);
    goto v49;

v49:
    if (v216 == nil) goto v54;
    v216 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v216); }

v54:
    v216 = stack[0];
    if (!consp(v216)) goto v23;
    v216 = stack[0];
    v215 = qcar(v216);
    v216 = elt(env, 3); /* !*sq */
    if (v215 == v216) goto v37;
    v216 = stack[0];
    v216 = qcar(v216);
    if (!(symbolp(v216))) goto v74;
    v216 = stack[0];
    v215 = qcar(v216);
    v216 = elt(env, 5); /* dname */
    v216 = get(v215, v216);
    env = stack[-1];
    if (v216 == nil) goto v74;
    v216 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v216); }

v74:
    v216 = stack[0];
    v215 = qcar(v216);
    v216 = elt(env, 6); /* indexvar */
    v216 = Lflagp(nil, v215, v216);
    env = stack[-1];
    if (v216 == nil) goto v104;
    v216 = stack[0];
    v216 = qcdr(v216);
    {
        popv(2);
        fn = elt(env, 9); /* indxchk */
        return (*qfn1(fn))(qenv(fn), v216);
    }

v104:
    v216 = stack[0];
    v215 = qcar(v216);
    v216 = elt(env, 7); /* indexfun */
    v216 = get(v215, v216);
    env = stack[-1];
    v215 = v216;
    if (v216 == nil) goto v201;
    v216 = stack[0];
    v216 = qcdr(v216);
    v216 = Lapply1(nil, v215, v216);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-1];
    stack[0] = v216;
    goto v91;

v201:
    v216 = stack[0];
    v215 = qcar(v216);
    v216 = elt(env, 8); /* partdf */
    if (v215 == v216) goto v100;
    v216 = stack[0];
    v216 = qcdr(v216);
    fn = elt(env, 10); /* lfreeindp */
    v216 = (*qfn1(fn))(qenv(fn), v216);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-1];
    if (!(v216 == nil)) { popv(2); return onevalue(v216); }
    v216 = stack[0];
    v216 = qcar(v216);
    stack[0] = v216;
    goto v91;

v100:
    v216 = stack[0];
    v216 = qcdr(v216);
    v216 = qcdr(v216);
    if (v216 == nil) goto v4;
    v216 = stack[0];
    v216 = qcdr(v216);
    v216 = qcar(v216);
    v216 = CC_freeindp(env, v216);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-1];
    if (!(v216 == nil)) { popv(2); return onevalue(v216); }
    v216 = stack[0];
    v216 = qcdr(v216);
    v216 = qcdr(v216);
    v216 = qcar(v216);
    stack[0] = v216;
    goto v91;

v4:
    v216 = stack[0];
    v216 = qcdr(v216);
    v216 = qcar(v216);
    stack[0] = v216;
    goto v91;

v37:
    v216 = stack[0];
    v216 = qcdr(v216);
    v216 = qcar(v216);
    v216 = qcar(v216);
    if (v216 == nil) goto v90;
    v216 = stack[0];
    v216 = qcdr(v216);
    v215 = qcar(v216);
    v216 = elt(env, 4); /* prepf */
    fn = elt(env, 11); /* sqform */
    v216 = (*qfn2(fn))(qenv(fn), v215, v216);
    nil = C_nil;
    if (exception_pending()) goto v109;
    env = stack[-1];
    goto v59;

v59:
    stack[0] = v216;
    goto v91;

v90:
    v216 = (Lisp_Object)1; /* 0 */
    goto v59;

v23:
    v216 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v216); }

v48:
    v216 = qvalue(elt(env, 1)); /* t */
    goto v49;
/* error exit handlers */
v109:
    popv(2);
    return nil;
}



/* Code for getphystypestate */

static Lisp_Object CC_getphystypestate(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v22;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for getphystypestate");
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
    v22 = stack[0];
    v22 = qcar(v22);
    fn = elt(env, 3); /* statep!* */
    v22 = (*qfn1(fn))(qenv(fn), v22);
    nil = C_nil;
    if (exception_pending()) goto v58;
    env = stack[-1];
    if (v22 == nil) goto v34;
    v22 = stack[0];
    v22 = qcdr(v22);
    v22 = qcar(v22);
    fn = elt(env, 3); /* statep!* */
    v22 = (*qfn1(fn))(qenv(fn), v22);
    nil = C_nil;
    if (exception_pending()) goto v58;
    env = stack[-1];
    if (v22 == nil) goto v34;
    v22 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v22); }

v34:
    v22 = elt(env, 2); /* state */
    { popv(2); return onevalue(v22); }
/* error exit handlers */
v58:
    popv(2);
    return nil;
}



setup_type const u55_setup[] =
{
    {"msolve-poly",             too_few_2,      CC_msolveKpoly,wrong_no_2},
    {"lto_nconcn",              CC_lto_nconcn,  too_many_1,    wrong_no_1},
    {"pasf_smeqtable",          too_few_2,      CC_pasf_smeqtable,wrong_no_2},
    {"dvfsf_ppolyp",            CC_dvfsf_ppolyp,too_many_1,    wrong_no_1},
    {"mkmain",                  too_few_2,      CC_mkmain,     wrong_no_2},
    {"ps:times-orderfn",        CC_psTtimesKorderfn,too_many_1,wrong_no_1},
    {"mkdcrn",                  CC_mkdcrn,      too_many_1,    wrong_no_1},
    {"int-simp",                CC_intKsimp,    too_many_1,    wrong_no_1},
    {"rdintequiv",              CC_rdintequiv,  too_many_1,    wrong_no_1},
    {"tstpolyarg",              too_few_2,      CC_tstpolyarg, wrong_no_2},
    {"coeff_edges",             CC_coeff_edges, too_many_1,    wrong_no_1},
    {"mv-reduced-coeffs",       CC_mvKreducedKcoeffs,too_many_1,wrong_no_1},
    {"gcd-mod-p",               too_few_2,      CC_gcdKmodKp,  wrong_no_2},
    {"numrdeg",                 too_few_2,      CC_numrdeg,    wrong_no_2},
    {"ofsf_mkstrict",           CC_ofsf_mkstrict,too_many_1,   wrong_no_1},
    {"tp-greaterp",             too_few_2,      CC_tpKgreaterp,wrong_no_2},
    {"mk+hermitean+matrix",     CC_mkLhermiteanLmatrix,too_many_1,wrong_no_1},
    {"reval-without",           too_few_2,      CC_revalKwithout,wrong_no_2},
    {"pasf_ordrelp",            too_few_2,      CC_pasf_ordrelp,wrong_no_2},
    {"vdp_zero",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_vdp_zero},
    {"radf1",                   too_few_2,      CC_radf1,      wrong_no_2},
    {"ps:int-erule",            too_few_2,      CC_psTintKerule,wrong_no_2},
    {"revise2",                 too_few_2,      CC_revise2,    wrong_no_2},
    {"gfeqp",                   too_few_2,      CC_gfeqp,      wrong_no_2},
    {"lispwhilep",              CC_lispwhilep,  too_many_1,    wrong_no_1},
    {"indvarpf",                CC_indvarpf,    too_many_1,    wrong_no_1},
    {"edge_bind",               too_few_2,      CC_edge_bind,  wrong_no_2},
    {"make-x-to-p",             wrong_no_na,    wrong_no_nb,   (n_args *)CC_makeKxKtoKp},
    {"general-quotient-mod-p",  too_few_2,      CC_generalKquotientKmodKp,wrong_no_2},
    {"simpsqrt",                CC_simpsqrt,    too_many_1,    wrong_no_1},
    {"znumr",                   CC_znumr,       too_many_1,    wrong_no_1},
    {"mchkminus",               too_few_2,      CC_mchkminus,  wrong_no_2},
    {"formgen",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_formgen},
    {"nestprep:",               CC_nestprepT,   too_many_1,    wrong_no_1},
    {"a2dipatom",               CC_a2dipatom,   too_many_1,    wrong_no_1},
    {"evalsubset_eq",           too_few_2,      CC_evalsubset_eq,wrong_no_2},
    {"evalrandom",              CC_evalrandom,  too_many_1,    wrong_no_1},
    {"fortexp1",                too_few_2,      CC_fortexp1,   wrong_no_2},
    {"freeindp",                CC_freeindp,    too_many_1,    wrong_no_1},
    {"getphystypestate",        CC_getphystypestate,too_many_1,wrong_no_1},
    {NULL, (one_args *)"u55", (two_args *)"14291 310883 2018164", 0}
};

/* end of generated code */
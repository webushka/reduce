
/* $destdir\u03.c        Machine generated C code */

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


/* Code for peel */

static Lisp_Object CC_peel(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v7, v8;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for peel");
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
    stack[0] = v0;
/* end of prologue */
    v7 = stack[0];
    v8 = qcar(v7);
    v7 = elt(env, 1); /* (liedf innerprod) */
    v7 = Lmemq(nil, v8, v7);
    if (v7 == nil) goto v9;
    v7 = stack[0];
    v7 = qcdr(v7);
    v7 = qcdr(v7);
    v7 = qcar(v7);
    { popv(1); return onevalue(v7); }

v9:
    v7 = stack[0];
    v8 = qcar(v7);
    v7 = elt(env, 2); /* quotient */
    if (v8 == v7) goto v10;
    v7 = stack[0];
    v7 = qcdr(v7);
    v7 = qcar(v7);
    { popv(1); return onevalue(v7); }

v10:
    v7 = stack[0];
    v7 = qcdr(v7);
    v8 = qcar(v7);
    v7 = stack[0];
    v7 = qcdr(v7);
    v7 = qcdr(v7);
    v7 = qcar(v7);
    fn = elt(env, 3); /* worderp */
    v7 = (*qfn2(fn))(qenv(fn), v8, v7);
    nil = C_nil;
    if (exception_pending()) goto v11;
    if (v7 == nil) goto v12;
    v7 = stack[0];
    v7 = qcdr(v7);
    v7 = qcar(v7);
    { popv(1); return onevalue(v7); }

v12:
    v7 = stack[0];
    v7 = qcdr(v7);
    v7 = qcdr(v7);
    v7 = qcar(v7);
    { popv(1); return onevalue(v7); }
/* error exit handlers */
v11:
    popv(1);
    return nil;
}



/* Code for lnc */

static Lisp_Object CC_lnc(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v13, v14;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lnc");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v13 = v0;
/* end of prologue */

v15:
    v14 = v13;
    if (v14 == nil) goto v16;
    v14 = v13;
    if (!consp(v14)) goto v17;
    v14 = v13;
    v14 = qcar(v14);
    v14 = (consp(v14) ? nil : lisp_true);
    goto v18;

v18:
    if (!(v14 == nil)) return onevalue(v13);
    v13 = qcar(v13);
    v13 = qcdr(v13);
    goto v15;

v17:
    v14 = qvalue(elt(env, 1)); /* t */
    goto v18;

v16:
    v13 = (Lisp_Object)1; /* 0 */
    return onevalue(v13);
}



/* Code for hasonephysop */

static Lisp_Object CC_hasonephysop(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v19;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for hasonephysop");
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

v20:
    v19 = stack[0];
    if (v19 == nil) goto v15;
    v19 = stack[0];
    v19 = qcar(v19);
    fn = elt(env, 2); /* physopp!* */
    v19 = (*qfn1(fn))(qenv(fn), v19);
    nil = C_nil;
    if (exception_pending()) goto v9;
    env = stack[-1];
    if (!(v19 == nil)) { popv(2); return onevalue(v19); }
    v19 = stack[0];
    v19 = qcdr(v19);
    stack[0] = v19;
    goto v20;

v15:
    v19 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v19); }
/* error exit handlers */
v9:
    popv(2);
    return nil;
}



/* Code for union_edges */

static Lisp_Object CC_union_edges(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v4, v3, v25;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for union_edges");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v4 = v21;
    v3 = v0;
/* end of prologue */

v26:
    v25 = v3;
    if (v25 == nil) { popv(2); return onevalue(v4); }
    v25 = v3;
    v25 = qcdr(v25);
    stack[0] = v25;
    v3 = qcar(v3);
    fn = elt(env, 1); /* union_edge */
    v4 = (*qfn2(fn))(qenv(fn), v3, v4);
    nil = C_nil;
    if (exception_pending()) goto v14;
    env = stack[-1];
    v3 = stack[0];
    goto v26;
/* error exit handlers */
v14:
    popv(2);
    return nil;
}



/* Code for mo!=modiv1 */

static Lisp_Object CC_moMmodiv1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v27, v28;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mo=modiv1");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-1] = v0;
/* end of prologue */

v29:
    v27 = stack[-1];
    if (v27 == nil) goto v30;
    v27 = stack[0];
    if (v27 == nil) goto v5;
    v27 = stack[-1];
    v28 = qcar(v27);
    v27 = stack[0];
    v27 = qcar(v27);
    v27 = (Lisp_Object)lesseq2(v28, v27);
    nil = C_nil;
    if (exception_pending()) goto v31;
    v27 = v27 ? lisp_true : nil;
    env = stack[-2];
    if (v27 == nil) goto v32;
    v27 = stack[-1];
    v27 = qcdr(v27);
    stack[-1] = v27;
    v27 = stack[0];
    v27 = qcdr(v27);
    stack[0] = v27;
    goto v29;

v32:
    v27 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v27); }

v5:
    v27 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v27); }

v30:
    v27 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v27); }
/* error exit handlers */
v31:
    popv(3);
    return nil;
}



/* Code for !:minus */

static Lisp_Object CC_Tminus(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v38, v39, v40;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for :minus");
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
    v39 = v0;
/* end of prologue */
    v38 = v39;
    if (v38 == nil) goto v15;
    v38 = v39;
    if (!consp(v38)) goto v30;
    v38 = v39;
    v40 = qcar(v38);
    v38 = elt(env, 2); /* minus */
    v38 = get(v40, v38);
    env = stack[0];
    v40 = v38;
    v38 = v40;
    if (v38 == nil) goto v1;
    v38 = v40;
        popv(1);
        return Lapply1(nil, v38, v39);

v1:
    v40 = v39;
    v39 = (Lisp_Object)-15; /* -1 */
    v38 = elt(env, 3); /* times */
    {
        popv(1);
        fn = elt(env, 4); /* dcombine */
        return (*qfnn(fn))(qenv(fn), 3, v40, v39, v38);
    }

v30:
    v38 = v39;
    popv(1);
    return negate(v38);

v15:
    v38 = qvalue(elt(env, 1)); /* nil */
    { popv(1); return onevalue(v38); }
}



/* Code for pappl */

static Lisp_Object CC_pappl(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v7, v8;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pappl");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v21;
    stack[-3] = v0;
/* end of prologue */
    stack[-4] = nil;
    v7 = stack[-3];
    fn = elt(env, 2); /* unpkp */
    v7 = (*qfn1(fn))(qenv(fn), v7);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-5];
    stack[-3] = v7;
    goto v6;

v6:
    v7 = stack[-3];
    if (v7 == nil) goto v5;
    v7 = stack[-2];
    stack[-1] = v7;
    v7 = (Lisp_Object)17; /* 1 */
    stack[0] = v7;
    goto v43;

v43:
    v7 = stack[-3];
    v7 = qcar(v7);
    v8 = sub1(v7);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-5];
    v7 = stack[0];
    v7 = difference2(v8, v7);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-5];
    v7 = Lminusp(nil, v7);
    env = stack[-5];
    if (v7 == nil) goto v4;
    v7 = stack[-1];
    v8 = qcar(v7);
    v7 = stack[-4];
    v7 = cons(v8, v7);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-5];
    stack[-4] = v7;
    v7 = stack[-3];
    v7 = qcdr(v7);
    stack[-3] = v7;
    goto v6;

v4:
    v7 = stack[-1];
    v7 = qcdr(v7);
    stack[-1] = v7;
    v7 = stack[0];
    v7 = add1(v7);
    nil = C_nil;
    if (exception_pending()) goto v42;
    env = stack[-5];
    stack[0] = v7;
    goto v43;

v5:
    v7 = stack[-4];
        popv(6);
        return Lnreverse(nil, v7);
/* error exit handlers */
v42:
    popv(6);
    return nil;
}



/* Code for !*i2rn */

static Lisp_Object CC_Hi2rn(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v6, v18, v17;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for *i2rn");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v6 = v0;
/* end of prologue */
    v17 = elt(env, 1); /* !:rn!: */
    v18 = v6;
    v6 = (Lisp_Object)17; /* 1 */
    return list2star(v17, v18, v6);
}



/* Code for evaluate!-in!-order */

static Lisp_Object CC_evaluateKinKorder(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v51, v52, v53, v54;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for evaluate-in-order");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-1] = v0;
/* end of prologue */

v29:
    v51 = stack[-1];
    if (!consp(v51)) goto v5;
    v51 = stack[-1];
    v51 = qcar(v51);
    v51 = (consp(v51) ? nil : lisp_true);
    goto v44;

v44:
    if (v51 == nil) goto v23;
    v51 = stack[-1];
    {
        popv(3);
        fn = elt(env, 2); /* !*d2n */
        return (*qfn1(fn))(qenv(fn), v51);
    }

v23:
    v51 = stack[-1];
    v51 = qcar(v51);
    v51 = qcar(v51);
    v52 = qcar(v51);
    v51 = stack[0];
    v51 = qcar(v51);
    v51 = qcar(v51);
    if (equal(v52, v51)) goto v33;
    v51 = stack[0];
    v51 = qcdr(v51);
    stack[0] = v51;
    goto v29;

v33:
    v51 = stack[-1];
    v51 = qcar(v51);
    v52 = qcdr(v51);
    v51 = stack[0];
    v51 = qcdr(v51);
    v54 = CC_evaluateKinKorder(env, v52, v51);
    nil = C_nil;
    if (exception_pending()) goto v55;
    env = stack[-2];
    v51 = stack[-1];
    v51 = qcar(v51);
    v51 = qcar(v51);
    v53 = qcdr(v51);
    v51 = stack[-1];
    v52 = qcdr(v51);
    v51 = stack[0];
    {
        popv(3);
        fn = elt(env, 3); /* horner!-rule */
        return (*qfnn(fn))(qenv(fn), 4, v54, v53, v52, v51);
    }

v5:
    v51 = qvalue(elt(env, 1)); /* t */
    goto v44;
/* error exit handlers */
v55:
    popv(3);
    return nil;
}



/* Code for gizerop!: */

static Lisp_Object CC_gizeropT(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v3, v25, v13;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gizerop:");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v13 = v0;
/* end of prologue */
    v3 = v13;
    v3 = qcdr(v3);
    v25 = qcar(v3);
    v3 = (Lisp_Object)1; /* 0 */
    if (v25 == v3) goto v17;
    v3 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v3);

v17:
    v3 = v13;
    v3 = qcdr(v3);
    v25 = qcdr(v3);
    v3 = (Lisp_Object)1; /* 0 */
    v3 = (v25 == v3 ? lisp_true : nil);
    return onevalue(v3);
}



/* Code for treesizep1 */

static Lisp_Object CC_treesizep1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v32, v35;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for treesizep1");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-1] = v0;
/* end of prologue */

v29:
    v32 = stack[-1];
    if (!consp(v32)) goto v30;
    v32 = stack[-1];
    v35 = qcar(v32);
    v32 = stack[0];
    v35 = CC_treesizep1(env, v35, v32);
    nil = C_nil;
    if (exception_pending()) goto v28;
    env = stack[-2];
    stack[0] = v35;
    v32 = (Lisp_Object)1; /* 0 */
    v32 = (Lisp_Object)greaterp2(v35, v32);
    nil = C_nil;
    if (exception_pending()) goto v28;
    v32 = v32 ? lisp_true : nil;
    env = stack[-2];
    if (v32 == nil) goto v50;
    v32 = stack[-1];
    v32 = qcdr(v32);
    stack[-1] = v32;
    goto v29;

v50:
    v32 = (Lisp_Object)1; /* 0 */
    { popv(3); return onevalue(v32); }

v30:
    v32 = stack[0];
    popv(3);
    return sub1(v32);
/* error exit handlers */
v28:
    popv(3);
    return nil;
}



/* Code for tayexp!-plus2 */

static Lisp_Object CC_tayexpKplus2(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v65, v66, v67;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for tayexp-plus2");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    v65 = v0;
/* end of prologue */
    v66 = v65;
    if (!consp(v66)) goto v68;
    v66 = qvalue(elt(env, 1)); /* nil */
    goto v30;

v30:
    if (v66 == nil) goto v23;
    v66 = v65;
    v65 = stack[0];
    popv(3);
    return plus2(v66, v65);

v23:
    v66 = v65;
    if (!consp(v66)) goto v27;
    v66 = stack[0];
    if (!consp(v66)) goto v41;
    v66 = v65;
    v65 = stack[0];
    fn = elt(env, 3); /* rnplus!: */
    v65 = (*qfn2(fn))(qenv(fn), v66, v65);
    nil = C_nil;
    if (exception_pending()) goto v69;
    goto v3;

v3:
    v67 = v65;
    v65 = v67;
    v65 = qcdr(v65);
    v66 = qcdr(v65);
    v65 = (Lisp_Object)17; /* 1 */
    if (!(v66 == v65)) { popv(3); return onevalue(v67); }
    v65 = v67;
    v65 = qcdr(v65);
    v65 = qcar(v65);
    { popv(3); return onevalue(v65); }

v41:
    stack[-1] = v65;
    v67 = elt(env, 2); /* !:rn!: */
    v66 = stack[0];
    v65 = (Lisp_Object)17; /* 1 */
    v65 = list2star(v67, v66, v65);
    nil = C_nil;
    if (exception_pending()) goto v69;
    env = stack[-2];
    fn = elt(env, 3); /* rnplus!: */
    v65 = (*qfn2(fn))(qenv(fn), stack[-1], v65);
    nil = C_nil;
    if (exception_pending()) goto v69;
    goto v3;

v27:
    v67 = elt(env, 2); /* !:rn!: */
    v66 = v65;
    v65 = (Lisp_Object)17; /* 1 */
    v66 = list2star(v67, v66, v65);
    nil = C_nil;
    if (exception_pending()) goto v69;
    env = stack[-2];
    v65 = stack[0];
    fn = elt(env, 3); /* rnplus!: */
    v65 = (*qfn2(fn))(qenv(fn), v66, v65);
    nil = C_nil;
    if (exception_pending()) goto v69;
    goto v3;

v68:
    v66 = stack[0];
    v66 = (consp(v66) ? nil : lisp_true);
    goto v30;
/* error exit handlers */
v69:
    popv(3);
    return nil;
}



/* Code for mri_simplfloor */

static Lisp_Object CC_mri_simplfloor(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v6;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mri_simplfloor");
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
    v6 = stack[0];
    fn = elt(env, 1); /* mri_floorkernelp */
    v6 = (*qfn1(fn))(qenv(fn), v6);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-1];
    if (v6 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v6 = stack[0];
    {
        popv(2);
        fn = elt(env, 2); /* mri_simplfloor1 */
        return (*qfn1(fn))(qenv(fn), v6);
    }
/* error exit handlers */
v17:
    popv(2);
    return nil;
}



/* Code for qqe_nytidp */

static Lisp_Object CC_qqe_nytidp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v44, v5;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for qqe_nytidp");
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
    v44 = v0;
/* end of prologue */
    v5 = v44;
    v44 = elt(env, 1); /* idtype */
    v44 = get(v5, v44);
    v44 = (v44 == nil ? lisp_true : nil);
    return onevalue(v44);
}



/* Code for powers0 */

static Lisp_Object CC_powers0(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v79, v80, v81;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for powers0");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-1] = v0;
/* end of prologue */

v20:
    v79 = stack[-1];
    if (v79 == nil) goto v68;
    v79 = stack[-1];
    if (!consp(v79)) goto v82;
    v79 = stack[-1];
    v79 = qcar(v79);
    v79 = (consp(v79) ? nil : lisp_true);
    goto v30;

v30:
    if (!(v79 == nil)) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v79 = stack[-1];
    v79 = qcar(v79);
    v79 = qcar(v79);
    v80 = qcar(v79);
    v79 = stack[0];
    v80 = Latsoc(nil, v80, v79);
    v79 = v80;
    if (v80 == nil) goto v83;
    v80 = stack[-1];
    v80 = qcar(v80);
    v80 = qcar(v80);
    v80 = qcdr(v80);
    v79 = qcdr(v79);
    v79 = (Lisp_Object)greaterp2(v80, v79);
    nil = C_nil;
    if (exception_pending()) goto v84;
    v79 = v79 ? lisp_true : nil;
    env = stack[-3];
    if (v79 == nil) goto v85;
    v79 = stack[-1];
    v79 = qcar(v79);
    v79 = qcar(v79);
    v81 = qcar(v79);
    v79 = stack[-1];
    v79 = qcar(v79);
    v79 = qcar(v79);
    v80 = qcdr(v79);
    v79 = stack[0];
    fn = elt(env, 2); /* repasc */
    v79 = (*qfnn(fn))(qenv(fn), 3, v81, v80, v79);
    nil = C_nil;
    if (exception_pending()) goto v84;
    env = stack[-3];
    stack[0] = v79;
    goto v85;

v85:
    v79 = stack[-1];
    stack[-2] = qcdr(v79);
    v79 = stack[-1];
    v79 = qcar(v79);
    v80 = qcdr(v79);
    v79 = stack[0];
    v79 = CC_powers0(env, v80, v79);
    nil = C_nil;
    if (exception_pending()) goto v84;
    env = stack[-3];
    stack[-1] = stack[-2];
    stack[0] = v79;
    goto v20;

v83:
    v79 = stack[-1];
    v79 = qcar(v79);
    v79 = qcar(v79);
    v81 = qcar(v79);
    v79 = stack[-1];
    v79 = qcar(v79);
    v79 = qcar(v79);
    v80 = qcdr(v79);
    v79 = stack[0];
    v79 = acons(v81, v80, v79);
    nil = C_nil;
    if (exception_pending()) goto v84;
    env = stack[-3];
    stack[0] = v79;
    goto v85;

v82:
    v79 = qvalue(elt(env, 1)); /* t */
    goto v30;

v68:
    v79 = qvalue(elt(env, 1)); /* t */
    goto v30;
/* error exit handlers */
v84:
    popv(4);
    return nil;
}



/* Code for attributes */

static Lisp_Object CC_attributes(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v8, v76;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for attributes");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v21;
    v8 = v0;
/* end of prologue */
    v8 = Llength(nil, v8);
    nil = C_nil;
    if (exception_pending()) goto v87;
    env = stack[-3];
    stack[-2] = v8;
    v8 = (Lisp_Object)17; /* 1 */
    stack[0] = v8;
    goto v19;

v19:
    v76 = stack[-2];
    v8 = stack[0];
    v8 = difference2(v76, v8);
    nil = C_nil;
    if (exception_pending()) goto v87;
    env = stack[-3];
    v8 = Lminusp(nil, v8);
    env = stack[-3];
    if (!(v8 == nil)) goto v63;
    v8 = stack[-1];
    v8 = qcdr(v8);
    stack[-1] = v8;
    v8 = stack[0];
    v8 = add1(v8);
    nil = C_nil;
    if (exception_pending()) goto v87;
    env = stack[-3];
    stack[0] = v8;
    goto v19;

v63:
    v8 = stack[-1];
    v76 = qcar(v8);
    v8 = elt(env, 2); /* !  */
    if (v76 == v8) goto v88;
    v76 = stack[-1];
    v8 = elt(env, 3); /* (!$) */
    if (equal(v76, v8)) goto v34;
    v8 = stack[-1];
    qvalue(elt(env, 4)) = v8; /* atts */
    goto v34;

v34:
    v8 = nil;
    { popv(4); return onevalue(v8); }

v88:
    v8 = stack[-1];
    v8 = qcdr(v8);
    stack[-1] = v8;
    goto v63;
/* error exit handlers */
v87:
    popv(4);
    return nil;
}



/* Code for multi_isarb_int */

static Lisp_Object CC_multi_isarb_int(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v23;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for multi_isarb_int");
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
    v23 = stack[0];
    v23 = Lconsp(nil, v23);
    env = stack[-1];
    if (v23 == nil) goto v29;
    v23 = stack[0];
    if (v23 == nil) goto v29;
    v23 = stack[0];
    v23 = qcar(v23);
    fn = elt(env, 2); /* isarb_int */
    v23 = (*qfn1(fn))(qenv(fn), v23);
    nil = C_nil;
    if (exception_pending()) goto v4;
    env = stack[-1];
    v23 = stack[0];
    v23 = qcdr(v23);
    v23 = CC_multi_isarb_int(env, v23);
    nil = C_nil;
    if (exception_pending()) goto v4;
    goto v29;

v29:
    v23 = nil;
    { popv(2); return onevalue(v23); }
/* error exit handlers */
v4:
    popv(2);
    return nil;
}



/* Code for equal!: */

static Lisp_Object CC_equalT(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v40, v41;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for equal:");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-1] = v0;
/* end of prologue */
    v40 = stack[-1];
    v40 = qcdr(v40);
    v40 = qcar(v40);
    v40 = (Lisp_Object)zerop(v40);
    v40 = v40 ? lisp_true : nil;
    env = stack[-3];
    if (v40 == nil) goto v30;
    v40 = stack[0];
    v40 = qcdr(v40);
    v40 = qcar(v40);
    v40 = (Lisp_Object)zerop(v40);
    v40 = v40 ? lisp_true : nil;
    env = stack[-3];
    goto v16;

v16:
    if (!(v40 == nil)) { popv(4); return onevalue(v40); }
    v40 = stack[-1];
    fn = elt(env, 2); /* csl_normbf */
    v40 = (*qfn1(fn))(qenv(fn), v40);
    nil = C_nil;
    if (exception_pending()) goto v86;
    env = stack[-3];
    stack[-1] = v40;
    v40 = qcdr(v40);
    stack[-2] = qcdr(v40);
    v40 = stack[0];
    fn = elt(env, 2); /* csl_normbf */
    v40 = (*qfn1(fn))(qenv(fn), v40);
    nil = C_nil;
    if (exception_pending()) goto v86;
    env = stack[-3];
    stack[0] = v40;
    v40 = qcdr(v40);
    v40 = qcdr(v40);
    if (equal(stack[-2], v40)) goto v63;
    v40 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v40); }

v63:
    v40 = stack[-1];
    v40 = qcdr(v40);
    v41 = qcar(v40);
    v40 = stack[0];
    v40 = qcdr(v40);
    v40 = qcar(v40);
    v40 = (equal(v41, v40) ? lisp_true : nil);
    { popv(4); return onevalue(v40); }

v30:
    v40 = qvalue(elt(env, 1)); /* nil */
    goto v16;
/* error exit handlers */
v86:
    popv(4);
    return nil;
}



/* Code for subs2q */

static Lisp_Object CC_subs2q(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v92, v93, v94, v95;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for subs2q");
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
    v92 = stack[-2];
    v93 = qcar(v92);
    v92 = stack[-2];
    v92 = qcdr(v92);
    stack[-3] = v93;
    stack[-1] = v92;
    v92 = stack[-3];
    fn = elt(env, 2); /* subs2f */
    stack[0] = (*qfn1(fn))(qenv(fn), v92);
    nil = C_nil;
    if (exception_pending()) goto v96;
    env = stack[-4];
    v92 = stack[-1];
    fn = elt(env, 2); /* subs2f */
    v92 = (*qfn1(fn))(qenv(fn), v92);
    nil = C_nil;
    if (exception_pending()) goto v96;
    env = stack[-4];
    v95 = stack[0];
    v94 = v92;
    v92 = v95;
    v93 = qcdr(v92);
    v92 = (Lisp_Object)17; /* 1 */
    if (v93 == v92) goto v10;
    v92 = qvalue(elt(env, 1)); /* nil */
    goto v19;

v19:
    if (!(v92 == nil)) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    stack[0] = v95;
    v92 = v94;
    fn = elt(env, 3); /* invsq */
    v92 = (*qfn1(fn))(qenv(fn), v92);
    nil = C_nil;
    if (exception_pending()) goto v96;
    env = stack[-4];
    {
        Lisp_Object v56 = stack[0];
        popv(5);
        fn = elt(env, 4); /* multsq */
        return (*qfn2(fn))(qenv(fn), v56, v92);
    }

v10:
    v92 = v94;
    v93 = qcdr(v92);
    v92 = (Lisp_Object)17; /* 1 */
    if (v93 == v92) goto v64;
    v92 = qvalue(elt(env, 1)); /* nil */
    goto v19;

v64:
    v92 = v95;
    v93 = qcar(v92);
    v92 = stack[-3];
    if (equal(v93, v92)) goto v41;
    v92 = qvalue(elt(env, 1)); /* nil */
    goto v19;

v41:
    v92 = v94;
    v93 = qcar(v92);
    v92 = stack[-1];
    v92 = (equal(v93, v92) ? lisp_true : nil);
    goto v19;
/* error exit handlers */
v96:
    popv(5);
    return nil;
}



/* Code for dm!-difference */

static Lisp_Object CC_dmKdifference(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v6, v18;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dm-difference");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    v6 = v0;
/* end of prologue */
    fn = elt(env, 1); /* zero2nil */
    v18 = (*qfn1(fn))(qenv(fn), v6);
    nil = C_nil;
    if (exception_pending()) goto v97;
    env = stack[-1];
    v6 = stack[0];
    fn = elt(env, 2); /* !:difference */
    v6 = (*qfn2(fn))(qenv(fn), v18, v6);
    nil = C_nil;
    if (exception_pending()) goto v97;
    env = stack[-1];
    {
        popv(2);
        fn = elt(env, 3); /* nil2zero */
        return (*qfn1(fn))(qenv(fn), v6);
    }
/* error exit handlers */
v97:
    popv(2);
    return nil;
}



/* Code for initcomb */

static Lisp_Object CC_initcomb(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v15;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for initcomb");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v15 = v0;
/* end of prologue */
    return ncons(v15);
}



/* Code for evmatrixcomp1 */

static Lisp_Object MS_CDECL CC_evmatrixcomp1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v21,
                         Lisp_Object v98, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v55, v100, v101;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "evmatrixcomp1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for evmatrixcomp1");
#endif
    if (stack >= stacklimit)
    {
        push3(v98,v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v21,v98);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v98;
    stack[-2] = v21;
    stack[-3] = v0;
/* end of prologue */

v20:
    v55 = stack[-1];
    if (v55 == nil) goto v26;
    v101 = stack[-3];
    v55 = stack[-1];
    v100 = qcar(v55);
    v55 = (Lisp_Object)1; /* 0 */
    fn = elt(env, 1); /* evmatrixcomp2 */
    stack[0] = (*qfnn(fn))(qenv(fn), 3, v101, v100, v55);
    nil = C_nil;
    if (exception_pending()) goto v83;
    env = stack[-5];
    v101 = stack[-2];
    v55 = stack[-1];
    v100 = qcar(v55);
    v55 = (Lisp_Object)1; /* 0 */
    fn = elt(env, 1); /* evmatrixcomp2 */
    v55 = (*qfnn(fn))(qenv(fn), 3, v101, v100, v55);
    nil = C_nil;
    if (exception_pending()) goto v83;
    env = stack[-5];
    stack[-4] = stack[0];
    stack[0] = v55;
    v100 = stack[-4];
    v55 = stack[0];
    v55 = Leqn(nil, v100, v55);
    nil = C_nil;
    if (exception_pending()) goto v83;
    env = stack[-5];
    if (v55 == nil) goto v47;
    v101 = stack[-3];
    v100 = stack[-2];
    v55 = stack[-1];
    v55 = qcdr(v55);
    stack[-3] = v101;
    stack[-2] = v100;
    stack[-1] = v55;
    goto v20;

v47:
    v100 = stack[-4];
    v55 = stack[0];
    if (((int32_t)(v100)) > ((int32_t)(v55))) goto v76;
    v55 = (Lisp_Object)-15; /* -1 */
    { popv(6); return onevalue(v55); }

v76:
    v55 = (Lisp_Object)17; /* 1 */
    { popv(6); return onevalue(v55); }

v26:
    v55 = (Lisp_Object)1; /* 0 */
    { popv(6); return onevalue(v55); }
/* error exit handlers */
v83:
    popv(6);
    return nil;
}



/* Code for prin2la */

static Lisp_Object CC_prin2la(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v103, v49;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for prin2la");
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
    v103 = stack[0];
    fn = elt(env, 4); /* chundexp */
    v103 = (*qfn1(fn))(qenv(fn), v103);
    nil = C_nil;
    if (exception_pending()) goto v7;
    env = stack[-2];
    stack[0] = v103;
    v103 = stack[0];
    v103 = Llength(nil, v103);
    nil = C_nil;
    if (exception_pending()) goto v7;
    env = stack[-2];
    stack[-1] = v103;
    v49 = qvalue(elt(env, 1)); /* ncharspr!* */
    v103 = stack[-1];
    v49 = plus2(v49, v103);
    nil = C_nil;
    if (exception_pending()) goto v7;
    env = stack[-2];
    v103 = qvalue(elt(env, 2)); /* laline!* */
    v103 = (Lisp_Object)greaterp2(v49, v103);
    nil = C_nil;
    if (exception_pending()) goto v7;
    v103 = v103 ? lisp_true : nil;
    env = stack[-2];
    if (v103 == nil) goto v45;
    v103 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v7;
    env = stack[-2];
    v103 = (Lisp_Object)1; /* 0 */
    qvalue(elt(env, 1)) = v103; /* ncharspr!* */
    goto v45;

v45:
    v103 = stack[0];
    stack[0] = v103;
    goto v50;

v50:
    v103 = stack[0];
    if (v103 == nil) goto v12;
    v103 = stack[0];
    v103 = qcar(v103);
    v103 = Lprinc(nil, v103);
    nil = C_nil;
    if (exception_pending()) goto v7;
    env = stack[-2];
    v103 = stack[0];
    v103 = qcdr(v103);
    stack[0] = v103;
    goto v50;

v12:
    v49 = qvalue(elt(env, 1)); /* ncharspr!* */
    v103 = stack[-1];
    v103 = plus2(v49, v103);
    nil = C_nil;
    if (exception_pending()) goto v7;
    env = stack[-2];
    qvalue(elt(env, 1)) = v103; /* ncharspr!* */
    v103 = nil;
    { popv(3); return onevalue(v103); }
/* error exit handlers */
v7:
    popv(3);
    return nil;
}



/* Code for i2rd!* */

static Lisp_Object CC_i2rdH(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v9, v36;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for i2rd*");
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
    v9 = v0;
/* end of prologue */
    fn = elt(env, 2); /* chkint!* */
    v9 = (*qfn1(fn))(qenv(fn), v9);
    nil = C_nil;
    if (exception_pending()) goto v37;
    env = stack[0];
    v36 = v9;
    v9 = v36;
    if (!(!consp(v9))) { popv(1); return onevalue(v36); }
    v9 = elt(env, 1); /* !:rd!: */
    popv(1);
    return cons(v9, v36);
/* error exit handlers */
v37:
    popv(1);
    return nil;
}



/* Code for collectindices */

static Lisp_Object CC_collectindices(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v44, v5;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for collectindices");
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
    v44 = v0;
/* end of prologue */
    v5 = v44;
    v44 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 2); /* collectindices_reversed */
    v44 = (*qfn2(fn))(qenv(fn), v5, v44);
    errexit();
        return Lnreverse(nil, v44);
}



/* Code for qassoc */

static Lisp_Object CC_qassoc(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v25, v13, v14, v43;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for qassoc");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v14 = v21;
    v43 = v0;
/* end of prologue */

v29:
    v25 = v14;
    if (v25 == nil) goto v30;
    v13 = v43;
    v25 = v14;
    v25 = qcar(v25);
    v25 = qcar(v25);
    if (v13 == v25) goto v5;
    v25 = v14;
    v25 = qcdr(v25);
    v14 = v25;
    goto v29;

v5:
    v25 = v14;
    v25 = qcar(v25);
    return onevalue(v25);

v30:
    v25 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v25);
}



/* Code for !*ssave */

static Lisp_Object CC_Hssave(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v86, v61, v7;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for *ssave");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-3] = v0;
/* end of prologue */
    v86 = qvalue(elt(env, 1)); /* !*uncached */
    if (!(v86 == nil)) goto v26;
    stack[-4] = qvalue(elt(env, 2)); /* alglist!* */
    v86 = qvalue(elt(env, 2)); /* alglist!* */
    v86 = qcar(v86);
    stack[-2] = v86;
    v86 = stack[-2];
    if (!(v86 == nil)) goto v35;
    v7 = (Lisp_Object)161; /* 10 */
    v61 = (Lisp_Object)49; /* 3 */
    v86 = elt(env, 3); /* 2.0 */
    fn = elt(env, 6); /* mkhash */
    v86 = (*qfnn(fn))(qenv(fn), 3, v7, v61, v86);
    nil = C_nil;
    if (exception_pending()) goto v87;
    env = stack[-5];
    stack[-2] = v86;
    goto v35;

v35:
    stack[-1] = stack[0];
    stack[0] = stack[-2];
    v61 = qvalue(elt(env, 4)); /* !*sub2 */
    v86 = stack[-3];
    v86 = cons(v61, v86);
    nil = C_nil;
    if (exception_pending()) goto v87;
    env = stack[-5];
    fn = elt(env, 7); /* puthash */
    v86 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[0], v86);
    nil = C_nil;
    if (exception_pending()) goto v87;
    env = stack[-5];
    v86 = stack[-2];
    v86 = Lrplaca(nil, stack[-4], v86);
    nil = C_nil;
    if (exception_pending()) goto v87;
    env = stack[-5];
    goto v26;

v26:
    v86 = qvalue(elt(env, 5)); /* simpcount!* */
    v86 = sub1(v86);
    nil = C_nil;
    if (exception_pending()) goto v87;
    env = stack[-5];
    qvalue(elt(env, 5)) = v86; /* simpcount!* */
    { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
/* error exit handlers */
v87:
    popv(6);
    return nil;
}



/* Code for fs!:timesterm */

static Lisp_Object CC_fsTtimesterm(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v33, v12, v34;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for fs:timesterm");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-1] = v0;
/* end of prologue */
    v33 = stack[0];
    if (v33 == nil) goto v29;
    v33 = stack[-1];
    if (v33 == nil) goto v68;
    v12 = stack[-1];
    v33 = stack[0];
    fn = elt(env, 2); /* fs!:timestermterm */
    v33 = (*qfn2(fn))(qenv(fn), v12, v33);
    nil = C_nil;
    if (exception_pending()) goto v41;
    env = stack[-3];
    stack[-2] = v33;
    v34 = stack[-1];
    v12 = stack[0];
    v33 = (Lisp_Object)49; /* 3 */
    v33 = *(Lisp_Object *)((char *)v12 + (CELL-TAG_VECTOR) + ((int32_t)v33/(16/CELL)));
    v33 = CC_fsTtimesterm(env, v34, v33);
    nil = C_nil;
    if (exception_pending()) goto v41;
    env = stack[-3];
    {
        Lisp_Object v48 = stack[-2];
        popv(4);
        fn = elt(env, 3); /* fs!:plus */
        return (*qfn2(fn))(qenv(fn), v48, v33);
    }

v68:
    v33 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v33); }

v29:
    v33 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v33); }
/* error exit handlers */
v41:
    popv(4);
    return nil;
}



/* Code for cdiv */

static Lisp_Object CC_cdiv(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v6, v18;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for cdiv");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v6 = v21;
    v18 = v0;
/* end of prologue */
    v6 = cons(v18, v6);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[0];
    fn = elt(env, 1); /* resimp */
    v6 = (*qfn1(fn))(qenv(fn), v6);
    nil = C_nil;
    if (exception_pending()) goto v17;
    v6 = qcar(v6);
    { popv(1); return onevalue(v6); }
/* error exit handlers */
v17:
    popv(1);
    return nil;
}



/* Code for pv_multc */

static Lisp_Object CC_pv_multc(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v104, v105, v106;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pv_multc");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-1] = v0;
/* end of prologue */
    v105 = stack[0];
    v104 = (Lisp_Object)1; /* 0 */
    if (v105 == v104) goto v68;
    v104 = stack[-1];
    v104 = (v104 == nil ? lisp_true : nil);
    goto v30;

v30:
    if (v104 == nil) goto v102;
    v104 = qvalue(elt(env, 2)); /* nil */
    { popv(4); return onevalue(v104); }

v102:
    v105 = stack[0];
    v104 = (Lisp_Object)17; /* 1 */
    if (v105 == v104) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    stack[-2] = nil;
    goto v1;

v1:
    v104 = stack[-1];
    if (v104 == nil) goto v28;
    v104 = stack[-1];
    v104 = qcar(v104);
    v105 = qcar(v104);
    v104 = (Lisp_Object)1; /* 0 */
    if (v105 == v104) goto v12;
    v105 = stack[0];
    v104 = stack[-1];
    v104 = qcar(v104);
    v104 = qcar(v104);
    v106 = times2(v105, v104);
    nil = C_nil;
    if (exception_pending()) goto v58;
    env = stack[-3];
    v104 = stack[-1];
    v104 = qcar(v104);
    v105 = qcdr(v104);
    v104 = stack[-2];
    v104 = acons(v106, v105, v104);
    nil = C_nil;
    if (exception_pending()) goto v58;
    env = stack[-3];
    stack[-2] = v104;
    goto v12;

v12:
    v104 = stack[-1];
    v104 = qcdr(v104);
    stack[-1] = v104;
    goto v1;

v28:
    v104 = stack[-2];
        popv(4);
        return Lnreverse(nil, v104);

v68:
    v104 = qvalue(elt(env, 1)); /* t */
    goto v30;
/* error exit handlers */
v58:
    popv(4);
    return nil;
}



/* Code for fkern */

static Lisp_Object CC_fkern(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v71, v79, v80;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for fkern");
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
    v71 = stack[-1];
    if (!consp(v71)) goto v5;
    v71 = stack[-1];
    v79 = qcar(v71);
    v71 = elt(env, 2); /* fkernfn */
    v71 = get(v79, v71);
    env = stack[-3];
    stack[-2] = v71;
    if (v71 == nil) goto v16;
    v79 = stack[-2];
    v71 = stack[-1];
        popv(4);
        return Lapply1(nil, v79, v71);

v16:
    v71 = stack[-1];
    v71 = qcar(v71);
    if (!consp(v71)) goto v2;
    v71 = qvalue(elt(env, 4)); /* exlist!* */
    goto v27;

v27:
    stack[0] = v71;
    v79 = stack[-1];
    v71 = stack[0];
    v71 = Lassoc(nil, v79, v71);
    stack[-2] = v71;
    if (!(v71 == nil)) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v79 = stack[-1];
    v71 = qvalue(elt(env, 1)); /* nil */
    v71 = list2(v79, v71);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-3];
    stack[-2] = v71;
    v79 = stack[-2];
    v71 = stack[0];
    fn = elt(env, 6); /* ordad */
    v71 = (*qfn2(fn))(qenv(fn), v79, v71);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-3];
    stack[0] = v71;
    v71 = stack[-1];
    v71 = qcar(v71);
    if (!consp(v71)) goto v114;
    v71 = stack[0];
    qvalue(elt(env, 4)) = v71; /* exlist!* */
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }

v114:
    v71 = stack[-1];
    v71 = qcar(v71);
    v79 = ncons(v71);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-3];
    v71 = qvalue(elt(env, 5)); /* kprops!* */
    fn = elt(env, 7); /* union */
    v71 = (*qfn2(fn))(qenv(fn), v79, v71);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-3];
    qvalue(elt(env, 5)) = v71; /* kprops!* */
    v71 = stack[-1];
    v80 = qcar(v71);
    v79 = elt(env, 3); /* klist */
    v71 = stack[0];
    v71 = Lputprop(nil, 3, v80, v79, v71);
    nil = C_nil;
    if (exception_pending()) goto v113;
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }

v2:
    v71 = stack[-1];
    v79 = qcar(v71);
    v71 = elt(env, 3); /* klist */
    v71 = get(v79, v71);
    env = stack[-3];
    goto v27;

v5:
    v71 = stack[-1];
    v79 = qvalue(elt(env, 1)); /* nil */
    popv(4);
    return list2(v71, v79);
/* error exit handlers */
v113:
    popv(4);
    return nil;
}



/* Code for gintequiv!: */

static Lisp_Object CC_gintequivT(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v9, v36, v37;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gintequiv:");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v37 = v0;
/* end of prologue */
    v9 = v37;
    v9 = qcdr(v9);
    v36 = qcdr(v9);
    v9 = (Lisp_Object)1; /* 0 */
    if (v36 == v9) goto v15;
    v9 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v9);

v15:
    v9 = v37;
    v9 = qcdr(v9);
    v9 = qcar(v9);
    return onevalue(v9);
}



/* Code for gcdfd1 */

static Lisp_Object CC_gcdfd1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v46, v33;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gcdfd1");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    v46 = v0;
/* end of prologue */

v29:
    v33 = stack[0];
    if (v33 == nil) { popv(2); return onevalue(v46); }
    v33 = stack[0];
    if (!consp(v33)) goto v97;
    v33 = stack[0];
    v33 = qcar(v33);
    v33 = (consp(v33) ? nil : lisp_true);
    goto v17;

v17:
    if (v33 == nil) goto v32;
    v33 = v46;
    v46 = stack[0];
    {
        popv(2);
        fn = elt(env, 2); /* gcddd */
        return (*qfn2(fn))(qenv(fn), v33, v46);
    }

v32:
    v33 = v46;
    v46 = stack[0];
    v46 = qcar(v46);
    v46 = qcdr(v46);
    v46 = CC_gcdfd1(env, v33, v46);
    nil = C_nil;
    if (exception_pending()) goto v34;
    env = stack[-1];
    v33 = stack[0];
    v33 = qcdr(v33);
    stack[0] = v33;
    goto v29;

v97:
    v33 = qvalue(elt(env, 1)); /* t */
    goto v17;
/* error exit handlers */
v34:
    popv(2);
    return nil;
}



/* Code for monomcomparedegrevlex */

static Lisp_Object CC_monomcomparedegrevlex(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v117, v118, v119;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for monomcomparedegrevlex");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-1] = v0;
/* end of prologue */
    v117 = (Lisp_Object)1; /* 0 */
    stack[-2] = v117;
    v118 = stack[-1];
    v117 = (Lisp_Object)1; /* 0 */
    v119 = *(Lisp_Object *)((char *)v118 + (CELL-TAG_VECTOR) + ((int32_t)v117/(16/CELL)));
    v118 = stack[0];
    v117 = (Lisp_Object)1; /* 0 */
    v117 = *(Lisp_Object *)((char *)v118 + (CELL-TAG_VECTOR) + ((int32_t)v117/(16/CELL)));
    v117 = (Lisp_Object)greaterp2(v119, v117);
    nil = C_nil;
    if (exception_pending()) goto v120;
    v117 = v117 ? lisp_true : nil;
    env = stack[-3];
    if (v117 == nil) goto v2;
    v117 = (Lisp_Object)17; /* 1 */
    stack[-2] = v117;
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }

v2:
    v118 = stack[-1];
    v117 = (Lisp_Object)1; /* 0 */
    v119 = *(Lisp_Object *)((char *)v118 + (CELL-TAG_VECTOR) + ((int32_t)v117/(16/CELL)));
    v118 = stack[0];
    v117 = (Lisp_Object)1; /* 0 */
    v117 = *(Lisp_Object *)((char *)v118 + (CELL-TAG_VECTOR) + ((int32_t)v117/(16/CELL)));
    v117 = (Lisp_Object)lessp2(v119, v117);
    nil = C_nil;
    if (exception_pending()) goto v120;
    v117 = v117 ? lisp_true : nil;
    env = stack[-3];
    if (v117 == nil) goto v112;
    v117 = (Lisp_Object)-15; /* -1 */
    stack[-2] = v117;
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }

v112:
    v118 = stack[-1];
    v117 = (Lisp_Object)17; /* 1 */
    v117 = *(Lisp_Object *)((char *)v118 + (CELL-TAG_VECTOR) + ((int32_t)v117/(16/CELL)));
    stack[-1] = v117;
    v118 = stack[0];
    v117 = (Lisp_Object)17; /* 1 */
    v117 = *(Lisp_Object *)((char *)v118 + (CELL-TAG_VECTOR) + ((int32_t)v117/(16/CELL)));
    stack[0] = v117;
    goto v83;

v83:
    v117 = stack[-1];
    v117 = qcar(v117);
    if (v117 == nil) goto v89;
    v117 = stack[-1];
    v118 = qcar(v117);
    v117 = stack[0];
    v117 = qcar(v117);
    v117 = (Lisp_Object)lessp2(v118, v117);
    nil = C_nil;
    if (exception_pending()) goto v120;
    v117 = v117 ? lisp_true : nil;
    env = stack[-3];
    if (v117 == nil) goto v121;
    v117 = (Lisp_Object)17; /* 1 */
    stack[-2] = v117;
    v117 = qvalue(elt(env, 1)); /* nil */
    v117 = ncons(v117);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-3];
    stack[-1] = v117;
    goto v83;

v121:
    v117 = stack[-1];
    v118 = qcar(v117);
    v117 = stack[0];
    v117 = qcar(v117);
    v117 = (Lisp_Object)greaterp2(v118, v117);
    nil = C_nil;
    if (exception_pending()) goto v120;
    v117 = v117 ? lisp_true : nil;
    env = stack[-3];
    if (v117 == nil) goto v122;
    v117 = (Lisp_Object)-15; /* -1 */
    stack[-2] = v117;
    v117 = qvalue(elt(env, 1)); /* nil */
    v117 = ncons(v117);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-3];
    stack[-1] = v117;
    goto v83;

v122:
    v117 = stack[-1];
    v117 = qcdr(v117);
    stack[-1] = v117;
    v117 = stack[0];
    v117 = qcdr(v117);
    stack[0] = v117;
    goto v83;

v89:
    v117 = stack[0];
    v117 = qcar(v117);
    if (!(v117 == nil)) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v117 = (Lisp_Object)1; /* 0 */
    stack[-2] = v117;
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
/* error exit handlers */
v120:
    popv(4);
    return nil;
}



/* Code for setcdr */

static Lisp_Object CC_setcdr(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v5, v6;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for setcdr");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    v5 = v0;
/* end of prologue */
    v6 = v5;
    v5 = stack[0];
    v5 = Lrplacd(nil, v6, v5);
    nil = C_nil;
    if (exception_pending()) goto v17;
    { Lisp_Object res = stack[0]; popv(1); return onevalue(res); }
/* error exit handlers */
v17:
    popv(1);
    return nil;
}



/* Code for getrtype2 */

static Lisp_Object CC_getrtype2(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v111, v85, v65;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for getrtype2");
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
    v85 = v0;
/* end of prologue */
    v111 = v85;
    v65 = qcar(v111);
    v111 = elt(env, 1); /* rtype */
    v111 = get(v65, v111);
    env = stack[0];
    v65 = v111;
    if (v111 == nil) goto v28;
    v111 = elt(env, 2); /* rtypefn */
    v111 = get(v65, v111);
    env = stack[0];
    v65 = v111;
    if (v111 == nil) goto v28;
    v111 = v65;
    v85 = qcdr(v85);
        popv(1);
        return Lapply1(nil, v111, v85);

v28:
    v111 = v85;
    v65 = qcar(v111);
    v111 = elt(env, 2); /* rtypefn */
    v111 = get(v65, v111);
    env = stack[0];
    v65 = v111;
    if (v111 == nil) goto v47;
    v111 = v65;
    v85 = qcdr(v85);
        popv(1);
        return Lapply1(nil, v111, v85);

v47:
    v111 = v85;
    v65 = qcar(v111);
    v111 = elt(env, 3); /* matmapfn */
    v111 = Lflagp(nil, v65, v111);
    env = stack[0];
    if (v111 == nil) goto v96;
    v111 = v85;
    v111 = qcdr(v111);
    if (v111 == nil) goto v75;
    v111 = v85;
    v111 = qcdr(v111);
    v111 = qcar(v111);
    fn = elt(env, 6); /* getrtype */
    v85 = (*qfn1(fn))(qenv(fn), v111);
    nil = C_nil;
    if (exception_pending()) goto v66;
    env = stack[0];
    v111 = elt(env, 5); /* matrix */
    v111 = (v85 == v111 ? lisp_true : nil);
    goto v7;

v7:
    if (v111 == nil) goto v110;
    v111 = elt(env, 5); /* matrix */
    { popv(1); return onevalue(v111); }

v110:
    v111 = qvalue(elt(env, 4)); /* nil */
    { popv(1); return onevalue(v111); }

v75:
    v111 = qvalue(elt(env, 4)); /* nil */
    goto v7;

v96:
    v111 = qvalue(elt(env, 4)); /* nil */
    goto v7;
/* error exit handlers */
v66:
    popv(1);
    return nil;
}



/* Code for tayexp!-minusp */

static Lisp_Object CC_tayexpKminusp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v6, v18;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for tayexp-minusp");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v18 = v0;
/* end of prologue */
    v6 = v18;
    if (!consp(v6)) goto v15;
    v6 = v18;
    {
        fn = elt(env, 1); /* rnminusp!: */
        return (*qfn1(fn))(qenv(fn), v6);
    }

v15:
    v6 = v18;
        return Lminusp(nil, v6);
}



/* Code for get!+vec!+dim */

static Lisp_Object CC_getLvecLdim(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v26;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for get+vec+dim");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v26 = v0;
/* end of prologue */
        return Llength(nil, v26);
}



/* Code for qqe_btidp */

static Lisp_Object CC_qqe_btidp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v82, v90;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for qqe_btidp");
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
    v82 = v0;
/* end of prologue */
    v90 = v82;
    v82 = elt(env, 1); /* idtype */
    v82 = get(v90, v82);
    env = stack[0];
    v90 = elt(env, 2); /* bt */
    v82 = (v82 == v90 ? lisp_true : nil);
    { popv(1); return onevalue(v82); }
}



/* Code for rl_simplat1 */

static Lisp_Object CC_rl_simplat1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v90, v19;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rl_simplat1");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v90 = v21;
    v19 = v0;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* rl_simplat1!* */
    v90 = list2(v19, v90);
    nil = C_nil;
    if (exception_pending()) goto v9;
    env = stack[-1];
    {
        Lisp_Object v36 = stack[0];
        popv(2);
        fn = elt(env, 2); /* apply */
        return (*qfn2(fn))(qenv(fn), v36, v90);
    }
/* error exit handlers */
v9:
    popv(2);
    return nil;
}



/* Code for delq */

static Lisp_Object CC_delq(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v34, v38, v39;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for delq");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-1] = v0;
/* end of prologue */
    v39 = nil;
    goto v26;

v26:
    v34 = stack[0];
    if (v34 == nil) goto v64;
    v34 = stack[0];
    v38 = qcar(v34);
    v34 = stack[-1];
    if (v38 == v34) goto v23;
    v34 = stack[0];
    v34 = qcar(v34);
    v38 = v39;
    v34 = cons(v34, v38);
    nil = C_nil;
    if (exception_pending()) goto v48;
    env = stack[-2];
    v39 = v34;
    v34 = stack[0];
    v34 = qcdr(v34);
    stack[0] = v34;
    goto v26;

v23:
    v38 = v39;
    v34 = stack[0];
    v34 = qcdr(v34);
    {
        popv(3);
        fn = elt(env, 1); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v38, v34);
    }

v64:
    v34 = v39;
    {
        popv(3);
        fn = elt(env, 1); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v34);
    }
/* error exit handlers */
v48:
    popv(3);
    return nil;
}



/* Code for times!-mod!-p */

static Lisp_Object CC_timesKmodKp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v141, v142;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for times-mod-p");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v21;
    stack[-2] = v0;
/* end of prologue */
    v141 = stack[-2];
    if (v141 == nil) goto v68;
    v141 = stack[-1];
    v141 = (v141 == nil ? lisp_true : nil);
    goto v30;

v30:
    if (v141 == nil) goto v26;
    v141 = qvalue(elt(env, 2)); /* nil */
    { popv(5); return onevalue(v141); }

v26:
    v141 = stack[-2];
    if (!consp(v141)) goto v36;
    v141 = stack[-2];
    v141 = qcar(v141);
    v141 = (consp(v141) ? nil : lisp_true);
    goto v9;

v9:
    if (v141 == nil) goto v19;
    v142 = stack[-1];
    v141 = stack[-2];
    {
        popv(5);
        fn = elt(env, 3); /* multiply!-by!-constant!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v142, v141);
    }

v19:
    v141 = stack[-1];
    if (!consp(v141)) goto v31;
    v141 = stack[-1];
    v141 = qcar(v141);
    v141 = (consp(v141) ? nil : lisp_true);
    goto v91;

v91:
    if (v141 == nil) goto v76;
    v142 = stack[-2];
    v141 = stack[-1];
    {
        popv(5);
        fn = elt(env, 3); /* multiply!-by!-constant!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v142, v141);
    }

v76:
    v141 = stack[-2];
    v141 = qcar(v141);
    v141 = qcar(v141);
    v142 = qcar(v141);
    v141 = stack[-1];
    v141 = qcar(v141);
    v141 = qcar(v141);
    v141 = qcar(v141);
    if (equal(v142, v141)) goto v104;
    v141 = stack[-2];
    v141 = qcar(v141);
    v141 = qcar(v141);
    v142 = qcar(v141);
    v141 = stack[-1];
    v141 = qcar(v141);
    v141 = qcar(v141);
    v141 = qcar(v141);
    fn = elt(env, 4); /* ordop */
    v141 = (*qfn2(fn))(qenv(fn), v142, v141);
    nil = C_nil;
    if (exception_pending()) goto v143;
    env = stack[-4];
    if (v141 == nil) goto v144;
    v141 = stack[-2];
    v141 = qcar(v141);
    stack[-3] = qcar(v141);
    v141 = stack[-2];
    v141 = qcar(v141);
    v142 = qcdr(v141);
    v141 = stack[-1];
    stack[0] = CC_timesKmodKp(env, v142, v141);
    nil = C_nil;
    if (exception_pending()) goto v143;
    env = stack[-4];
    v141 = stack[-2];
    v142 = qcdr(v141);
    v141 = stack[-1];
    v141 = CC_timesKmodKp(env, v142, v141);
    nil = C_nil;
    if (exception_pending()) goto v143;
    env = stack[-4];
    {
        Lisp_Object v145 = stack[-3];
        Lisp_Object v146 = stack[0];
        popv(5);
        fn = elt(env, 5); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v145, v146, v141);
    }

v144:
    v141 = stack[-1];
    v141 = qcar(v141);
    stack[-3] = qcar(v141);
    v142 = stack[-2];
    v141 = stack[-1];
    v141 = qcar(v141);
    v141 = qcdr(v141);
    stack[0] = CC_timesKmodKp(env, v142, v141);
    nil = C_nil;
    if (exception_pending()) goto v143;
    env = stack[-4];
    v142 = stack[-2];
    v141 = stack[-1];
    v141 = qcdr(v141);
    v141 = CC_timesKmodKp(env, v142, v141);
    nil = C_nil;
    if (exception_pending()) goto v143;
    env = stack[-4];
    {
        Lisp_Object v147 = stack[-3];
        Lisp_Object v148 = stack[0];
        popv(5);
        fn = elt(env, 5); /* adjoin!-term */
        return (*qfnn(fn))(qenv(fn), 3, v147, v148, v141);
    }

v104:
    v141 = stack[-2];
    v142 = qcar(v141);
    v141 = stack[-1];
    fn = elt(env, 6); /* times!-term!-mod!-p */
    stack[0] = (*qfn2(fn))(qenv(fn), v142, v141);
    nil = C_nil;
    if (exception_pending()) goto v143;
    env = stack[-4];
    v141 = stack[-1];
    v142 = qcar(v141);
    v141 = stack[-2];
    v141 = qcdr(v141);
    fn = elt(env, 6); /* times!-term!-mod!-p */
    v141 = (*qfn2(fn))(qenv(fn), v142, v141);
    nil = C_nil;
    if (exception_pending()) goto v143;
    env = stack[-4];
    fn = elt(env, 7); /* plus!-mod!-p */
    stack[0] = (*qfn2(fn))(qenv(fn), stack[0], v141);
    nil = C_nil;
    if (exception_pending()) goto v143;
    env = stack[-4];
    v141 = stack[-2];
    v142 = qcdr(v141);
    v141 = stack[-1];
    v141 = qcdr(v141);
    v141 = CC_timesKmodKp(env, v142, v141);
    nil = C_nil;
    if (exception_pending()) goto v143;
    env = stack[-4];
    {
        Lisp_Object v149 = stack[0];
        popv(5);
        fn = elt(env, 7); /* plus!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v149, v141);
    }

v31:
    v141 = qvalue(elt(env, 1)); /* t */
    goto v91;

v36:
    v141 = qvalue(elt(env, 1)); /* t */
    goto v9;

v68:
    v141 = qvalue(elt(env, 1)); /* t */
    goto v30;
/* error exit handlers */
v143:
    popv(5);
    return nil;
}



/* Code for get_content */

static Lisp_Object MS_CDECL CC_get_content(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v93, v94;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "get_content");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for get_content");
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
    v93 = qvalue(elt(env, 1)); /* nil */
    stack[0] = v93;
    goto v97;

v97:
    v94 = Lreadch(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v104;
    env = stack[-1];
    qvalue(elt(env, 2)) = v94; /* ch */
    v93 = elt(env, 3); /* !< */
    if (v94 == v93) goto v14;
    v94 = qvalue(elt(env, 2)); /* ch */
    v93 = qvalue(elt(env, 4)); /* !$eof!$ */
    v93 = Lneq(nil, v94, v93);
    nil = C_nil;
    if (exception_pending()) goto v104;
    env = stack[-1];
    goto v6;

v6:
    if (v93 == nil) goto v26;
    v94 = qvalue(elt(env, 2)); /* ch */
    v93 = qvalue(elt(env, 5)); /* space */
    if (equal(v94, v93)) goto v7;
    v93 = qvalue(elt(env, 2)); /* ch */
    fn = elt(env, 7); /* explode2n */
    v93 = (*qfn1(fn))(qenv(fn), v93);
    nil = C_nil;
    if (exception_pending()) goto v104;
    env = stack[-1];
    v94 = qcar(v93);
    v93 = (Lisp_Object)161; /* 10 */
    v93 = (Lisp_Object)greaterp2(v94, v93);
    nil = C_nil;
    if (exception_pending()) goto v104;
    v93 = v93 ? lisp_true : nil;
    env = stack[-1];
    goto v28;

v28:
    if (v93 == nil) goto v97;
    v94 = qvalue(elt(env, 2)); /* ch */
    v93 = stack[0];
    v93 = cons(v94, v93);
    nil = C_nil;
    if (exception_pending()) goto v104;
    env = stack[-1];
    stack[0] = v93;
    goto v97;

v7:
    v93 = qvalue(elt(env, 1)); /* nil */
    goto v28;

v26:
    v93 = stack[0];
    if (v93 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v94 = elt(env, 6); /* !$ */
    v93 = stack[0];
    v93 = cons(v94, v93);
    nil = C_nil;
    if (exception_pending()) goto v104;
    stack[0] = v93;
    { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }

v14:
    v93 = qvalue(elt(env, 1)); /* nil */
    goto v6;
/* error exit handlers */
v104:
    popv(2);
    return nil;
}



/* Code for c!:ordexn */

static Lisp_Object CC_cTordexn(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v150, v109;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for c:ordexn");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v21;
    stack[-2] = v0;
/* end of prologue */
    stack[0] = nil;
    stack[-3] = nil;
    goto v16;

v16:
    v150 = stack[-1];
    if (v150 == nil) goto v36;
    v109 = stack[-2];
    v150 = stack[-1];
    v150 = qcar(v150);
    if (equal(v109, v150)) goto v50;
    v150 = stack[-2];
    v150 = Lconsp(nil, v150);
    env = stack[-4];
    if (v150 == nil) goto v33;
    v150 = stack[-1];
    v150 = qcar(v150);
    v150 = Lconsp(nil, v150);
    env = stack[-4];
    goto v43;

v43:
    if (v150 == nil) goto v76;
    v150 = qvalue(elt(env, 2)); /* nil */
    { popv(5); return onevalue(v150); }

v76:
    v109 = stack[-2];
    v150 = stack[-1];
    v150 = qcar(v150);
    fn = elt(env, 3); /* c!:ordxp */
    v150 = (*qfn2(fn))(qenv(fn), v109, v150);
    nil = C_nil;
    if (exception_pending()) goto v151;
    env = stack[-4];
    if (v150 == nil) goto v110;
    v109 = stack[-2];
    v150 = stack[-3];
    v150 = cons(v109, v150);
    nil = C_nil;
    if (exception_pending()) goto v151;
    env = stack[-4];
    v109 = Lreverse(nil, v150);
    nil = C_nil;
    if (exception_pending()) goto v151;
    env = stack[-4];
    v150 = stack[-1];
    v150 = Lappend(nil, v109, v150);
    nil = C_nil;
    if (exception_pending()) goto v151;
    {
        Lisp_Object v70 = stack[0];
        popv(5);
        return cons(v70, v150);
    }

v110:
    v150 = stack[-1];
    v109 = qcar(v150);
    v150 = stack[-3];
    v150 = cons(v109, v150);
    nil = C_nil;
    if (exception_pending()) goto v151;
    env = stack[-4];
    stack[-3] = v150;
    v150 = stack[-1];
    v150 = qcdr(v150);
    stack[-1] = v150;
    v150 = stack[0];
    v150 = (v150 == nil ? lisp_true : nil);
    stack[0] = v150;
    goto v16;

v33:
    v150 = qvalue(elt(env, 2)); /* nil */
    goto v43;

v50:
    v150 = qvalue(elt(env, 1)); /* t */
    goto v43;

v36:
    v109 = stack[-2];
    v150 = stack[-3];
    v150 = cons(v109, v150);
    nil = C_nil;
    if (exception_pending()) goto v151;
    env = stack[-4];
    v150 = Lreverse(nil, v150);
    nil = C_nil;
    if (exception_pending()) goto v151;
    {
        Lisp_Object v71 = stack[0];
        popv(5);
        return cons(v71, v150);
    }
/* error exit handlers */
v151:
    popv(5);
    return nil;
}



/* Code for freexp */

static Lisp_Object CC_freexp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v99;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for freexp");
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

v20:
    v99 = stack[0];
    if (!consp(v99)) goto v15;
    v99 = stack[0];
    v99 = qcar(v99);
    v99 = CC_freexp(env, v99);
    nil = C_nil;
    if (exception_pending()) goto v36;
    env = stack[-1];
    if (!(v99 == nil)) { popv(2); return onevalue(v99); }
    v99 = stack[0];
    v99 = qcdr(v99);
    stack[0] = v99;
    goto v20;

v15:
    v99 = stack[0];
    {
        popv(2);
        fn = elt(env, 1); /* pm!:free */
        return (*qfn1(fn))(qenv(fn), v99);
    }
/* error exit handlers */
v36:
    popv(2);
    return nil;
}



/* Code for prepf1a_reversed */

static Lisp_Object MS_CDECL CC_prepf1a_reversed(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v21,
                         Lisp_Object v98, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v156, v130, v117, v118;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "prepf1a_reversed");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for prepf1a_reversed");
#endif
    if (stack >= stacklimit)
    {
        push3(v98,v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v21,v98);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v98;
    stack[-1] = v21;
    stack[-2] = v0;
/* end of prologue */

v26:
    v156 = stack[-2];
    if (v156 == nil) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    v156 = stack[-2];
    if (!consp(v156)) goto v82;
    v156 = stack[-2];
    v156 = qcar(v156);
    v156 = (consp(v156) ? nil : lisp_true);
    goto v97;

v97:
    if (v156 == nil) goto v65;
    v156 = stack[-2];
    fn = elt(env, 5); /* prepd */
    stack[-2] = (*qfn1(fn))(qenv(fn), v156);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-4];
    v118 = stack[-1];
    v117 = qvalue(elt(env, 2)); /* nil */
    v130 = qvalue(elt(env, 2)); /* nil */
    v156 = qvalue(elt(env, 2)); /* nil */
    fn = elt(env, 6); /* exchk1 */
    v156 = (*qfnn(fn))(qenv(fn), 4, v118, v117, v130, v156);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-4];
    v156 = cons(stack[-2], v156);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-4];
    fn = elt(env, 7); /* retimes */
    v156 = (*qfn1(fn))(qenv(fn), v156);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-4];
    v117 = v156;
    v130 = v117;
    v156 = elt(env, 3); /* plus */
    if (!consp(v130)) goto v96;
    v130 = qcar(v130);
    if (!(v130 == v156)) goto v96;
    v156 = v117;
    v156 = qcdr(v156);
    stack[-1] = v156;
    goto v42;

v42:
    v156 = stack[-1];
    if (v156 == nil) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    v156 = stack[-1];
    v156 = qcar(v156);
    v130 = v156;
    v156 = stack[0];
    v156 = cons(v130, v156);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-4];
    stack[0] = v156;
    v156 = stack[-1];
    v156 = qcdr(v156);
    stack[-1] = v156;
    goto v42;

v96:
    v130 = v117;
    v156 = stack[0];
    v156 = cons(v130, v156);
    nil = C_nil;
    if (exception_pending()) goto v120;
    stack[0] = v156;
    { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }

v65:
    v156 = stack[-2];
    v156 = qcar(v156);
    stack[-3] = qcdr(v156);
    v156 = stack[-2];
    v156 = qcar(v156);
    v156 = qcar(v156);
    v130 = qcar(v156);
    v156 = elt(env, 4); /* k!* */
    if (v130 == v156) goto v138;
    v156 = stack[-2];
    v156 = qcar(v156);
    v130 = qcar(v156);
    v156 = stack[-1];
    v156 = cons(v130, v156);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-4];
    v130 = v156;
    goto v139;

v139:
    v156 = stack[0];
    v156 = CC_prepf1a_reversed(env, 3, stack[-3], v130, v156);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-4];
    stack[0] = v156;
    v156 = stack[-2];
    v156 = qcdr(v156);
    stack[-2] = v156;
    goto v26;

v138:
    v156 = stack[-1];
    v130 = v156;
    goto v139;

v82:
    v156 = qvalue(elt(env, 1)); /* t */
    goto v97;
/* error exit handlers */
v120:
    popv(5);
    return nil;
}



/* Code for vevmtest!? */

static Lisp_Object CC_vevmtestW(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v53, v54, v157, v75;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for vevmtest?");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v54 = v21;
    v157 = v0;
/* end of prologue */

v29:
    v53 = v54;
    if (v53 == nil) goto v30;
    v53 = v157;
    if (v53 == nil) goto v5;
    v53 = v157;
    v75 = qcar(v53);
    v53 = v54;
    v53 = qcar(v53);
    if (((int32_t)(v75)) < ((int32_t)(v53))) goto v62;
    v53 = v157;
    v53 = qcdr(v53);
    v157 = v53;
    v53 = v54;
    v53 = qcdr(v53);
    v54 = v53;
    goto v29;

v62:
    v53 = qvalue(elt(env, 2)); /* nil */
    { popv(1); return onevalue(v53); }

v5:
    v53 = v54;
    if (v53 == nil) goto v9;
    v53 = v54;
    v157 = qcar(v53);
    v53 = (Lisp_Object)1; /* 0 */
    if (v157 == v53) goto v25;
    v53 = qvalue(elt(env, 2)); /* nil */
    goto v99;

v99:
    if (v53 == nil) goto v64;
    v53 = qvalue(elt(env, 1)); /* t */
    { popv(1); return onevalue(v53); }

v64:
    v53 = qvalue(elt(env, 2)); /* nil */
    { popv(1); return onevalue(v53); }

v25:
    v53 = v54;
    v53 = qcdr(v53);
    fn = elt(env, 3); /* vevzero!?1 */
    v53 = (*qfn1(fn))(qenv(fn), v53);
    nil = C_nil;
    if (exception_pending()) goto v55;
    env = stack[0];
    goto v99;

v9:
    v53 = qvalue(elt(env, 1)); /* t */
    goto v99;

v30:
    v53 = qvalue(elt(env, 1)); /* t */
    { popv(1); return onevalue(v53); }
/* error exit handlers */
v55:
    popv(1);
    return nil;
}



/* Code for multpfsq */

static Lisp_Object CC_multpfsq(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v34, v38;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for multpfsq");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v21;
    stack[-2] = v0;
/* end of prologue */
    stack[-3] = nil;
    goto v26;

v26:
    v34 = stack[-2];
    if (v34 == nil) goto v6;
    v34 = stack[-1];
    v34 = qcar(v34);
    v34 = (v34 == nil ? lisp_true : nil);
    goto v5;

v5:
    if (v34 == nil) goto v4;
    v34 = stack[-3];
    {
        popv(5);
        fn = elt(env, 2); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v34);
    }

v4:
    v34 = stack[-2];
    v34 = qcar(v34);
    stack[0] = qcar(v34);
    v34 = stack[-2];
    v34 = qcar(v34);
    v38 = qcdr(v34);
    v34 = stack[-1];
    fn = elt(env, 3); /* multsq */
    v38 = (*qfn2(fn))(qenv(fn), v38, v34);
    nil = C_nil;
    if (exception_pending()) goto v103;
    env = stack[-4];
    v34 = stack[-3];
    v34 = acons(stack[0], v38, v34);
    nil = C_nil;
    if (exception_pending()) goto v103;
    env = stack[-4];
    stack[-3] = v34;
    v34 = stack[-2];
    v34 = qcdr(v34);
    stack[-2] = v34;
    goto v26;

v6:
    v34 = qvalue(elt(env, 1)); /* t */
    goto v5;
/* error exit handlers */
v103:
    popv(5);
    return nil;
}



/* Code for chundexp */

static Lisp_Object CC_chundexp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v59, v60;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for chundexp");
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
    v59 = stack[-1];
    v59 = Lexplodec(nil, v59);
    nil = C_nil;
    if (exception_pending()) goto v92;
    env = stack[-3];
    stack[-1] = v59;
    v59 = stack[-1];
    stack[-2] = v59;
    v60 = stack[-1];
    v59 = elt(env, 1); /* !_ */
    if (!consp(v60)) goto v3;
    v60 = qcar(v60);
    if (!(v60 == v59)) goto v3;
    v59 = stack[-1];
    v59 = qcdr(v59);
    goto v17;

v17:
    if (v59 == nil) goto v29;
    v60 = elt(env, 3); /* !\ */
    v59 = stack[-1];
    v59 = cons(v60, v59);
    nil = C_nil;
    if (exception_pending()) goto v92;
    env = stack[-3];
    stack[-1] = v59;
    goto v29;

v29:
    v59 = stack[-2];
    v59 = qcdr(v59);
    if (v59 == nil) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v59 = stack[-2];
    v59 = qcdr(v59);
    v60 = qcar(v59);
    v59 = elt(env, 1); /* !_ */
    if (!(v60 == v59)) goto v64;
    stack[0] = stack[-2];
    v60 = elt(env, 3); /* !\ */
    v59 = stack[-2];
    v59 = qcdr(v59);
    v59 = cons(v60, v59);
    nil = C_nil;
    if (exception_pending()) goto v92;
    env = stack[-3];
    v59 = Lrplacd(nil, stack[0], v59);
    nil = C_nil;
    if (exception_pending()) goto v92;
    env = stack[-3];
    v59 = stack[-2];
    v59 = qcdr(v59);
    stack[-2] = v59;
    goto v64;

v64:
    v59 = stack[-2];
    v59 = qcdr(v59);
    stack[-2] = v59;
    goto v29;

v3:
    v59 = qvalue(elt(env, 2)); /* nil */
    goto v17;
/* error exit handlers */
v92:
    popv(4);
    return nil;
}



/* Code for quotfm */

static Lisp_Object CC_quotfm(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v17, v97, v82;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for quotfm");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v97 = v21;
    v82 = v0;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* !*mcd */
    qvalue(elt(env, 1)) = nil; /* !*mcd */
    v17 = qvalue(elt(env, 2)); /* t */
    qvalue(elt(env, 1)) = v17; /* !*mcd */
    v17 = v82;
    fn = elt(env, 3); /* quotf */
    v17 = (*qfn2(fn))(qenv(fn), v17, v97);
    nil = C_nil;
    if (exception_pending()) goto v19;
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*mcd */
    { popv(2); return onevalue(v17); }
/* error exit handlers */
v19:
    env = stack[-1];
    qvalue(elt(env, 1)) = stack[0]; /* !*mcd */
    popv(2);
    return nil;
}



/* Code for !*physopp!* */

static Lisp_Object CC_HphysoppH(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v68;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for *physopp*");
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
    v68 = stack[0];
    fn = elt(env, 1); /* physopp!* */
    v68 = (*qfn1(fn))(qenv(fn), v68);
    nil = C_nil;
    if (exception_pending()) goto v44;
    env = stack[-1];
    if (!(v68 == nil)) { popv(2); return onevalue(v68); }
    v68 = stack[0];
    {
        popv(2);
        fn = elt(env, 2); /* getphystype */
        return (*qfn1(fn))(qenv(fn), v68);
    }
/* error exit handlers */
v44:
    popv(2);
    return nil;
}



/* Code for sfpx */

static Lisp_Object CC_sfpx(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v97, v82, v90, v19;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for sfpx");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v97 = v0;
/* end of prologue */
    v19 = v97;
    v90 = qvalue(elt(env, 1)); /* nil */
    v82 = qvalue(elt(env, 1)); /* nil */
    v97 = (Lisp_Object)1; /* 0 */
    {
        fn = elt(env, 2); /* sfpx1 */
        return (*qfnn(fn))(qenv(fn), 4, v19, v90, v82, v97);
    }
}



/* Code for getrtype */

static Lisp_Object CC_getrtype(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v162, v163, v164;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for getrtype");
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

v20:
    v162 = stack[0];
    if (v162 == nil) goto v30;
    v162 = stack[0];
    if (!consp(v162)) goto v5;
    v162 = stack[0];
    v162 = qcar(v162);
    if (symbolp(v162)) goto v165;
    v162 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v162); }

v165:
    v162 = stack[0];
    v163 = qcar(v162);
    v162 = elt(env, 3); /* avalue */
    v162 = get(v163, v162);
    env = stack[-1];
    v164 = v162;
    if (v162 == nil) goto v166;
    v162 = v164;
    v163 = qcar(v162);
    v162 = elt(env, 6); /* rtypefn */
    v162 = get(v163, v162);
    env = stack[-1];
    v164 = v162;
    if (v162 == nil) goto v166;
    v163 = v164;
    v162 = stack[0];
    v162 = qcdr(v162);
        popv(2);
        return Lapply1(nil, v163, v162);

v166:
    v162 = stack[0];
    v163 = qcar(v162);
    v162 = elt(env, 7); /* sub */
    if (v163 == v162) goto v167;
    v162 = stack[0];
    {
        popv(2);
        fn = elt(env, 9); /* getrtype2 */
        return (*qfn1(fn))(qenv(fn), v162);
    }

v167:
    v162 = elt(env, 8); /* yetunknowntype */
    { popv(2); return onevalue(v162); }

v5:
    v162 = stack[0];
    if (symbolp(v162)) goto v50;
    v162 = stack[0];
    if (is_number(v162)) goto v4;
    v162 = stack[0];
    {
        popv(2);
        fn = elt(env, 10); /* getrtype1 */
        return (*qfn1(fn))(qenv(fn), v162);
    }

v4:
    v162 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v162); }

v50:
    v163 = stack[0];
    v162 = elt(env, 2); /* share */
    v162 = Lflagp(nil, v163, v162);
    env = stack[-1];
    if (v162 == nil) goto v76;
    v162 = stack[0];
    fn = elt(env, 11); /* eval */
    v163 = (*qfn1(fn))(qenv(fn), v162);
    nil = C_nil;
    if (exception_pending()) goto v124;
    env = stack[-1];
    v164 = v163;
    v162 = stack[0];
    if (v163 == v162) goto v91;
    v162 = v164;
    stack[0] = v162;
    goto v20;

v91:
    v162 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v162); }

v76:
    v163 = stack[0];
    v162 = elt(env, 3); /* avalue */
    v162 = get(v163, v162);
    env = stack[-1];
    v164 = v162;
    if (v162 == nil) goto v89;
    v162 = v164;
    v163 = qcar(v162);
    v162 = elt(env, 4); /* (scalar generic) */
    v162 = Lmemq(nil, v163, v162);
    if (!(v162 == nil)) goto v89;

v72:
    v162 = v164;
    v163 = qcar(v162);
    v162 = elt(env, 6); /* rtypefn */
    v162 = get(v163, v162);
    env = stack[-1];
    v163 = v162;
    if (v162 == nil) goto v138;
    v162 = v163;
    v163 = qvalue(elt(env, 1)); /* nil */
        popv(2);
        return Lapply1(nil, v162, v163);

v138:
    v162 = v164;
    v162 = qcar(v162);
    { popv(2); return onevalue(v162); }

v89:
    v163 = stack[0];
    v162 = elt(env, 5); /* rtype */
    v162 = get(v163, v162);
    env = stack[-1];
    v164 = v162;
    if (v162 == nil) goto v79;
    v162 = v164;
    v162 = ncons(v162);
    nil = C_nil;
    if (exception_pending()) goto v124;
    env = stack[-1];
    v164 = v162;
    if (!(v162 == nil)) goto v72;

v79:
    v162 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v162); }

v30:
    v162 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v162); }
/* error exit handlers */
v124:
    popv(2);
    return nil;
}



/* Code for cali_trace */

static Lisp_Object MS_CDECL CC_cali_trace(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v68, v45;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "cali_trace");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for cali_trace");
#endif
    CSL_IGNORE(env);
/* end of prologue */
    v68 = elt(env, 1); /* cali */
    v45 = elt(env, 2); /* trace */
    return get(v68, v45);
}



/* Code for pv_sort2 */

static Lisp_Object CC_pv_sort2(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v5, v6;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pv_sort2");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    v5 = v0;
/* end of prologue */
    v6 = v5;
    v5 = stack[0];
    fn = elt(env, 1); /* pv_sort2a */
    v5 = (*qfn2(fn))(qenv(fn), v6, v5);
    nil = C_nil;
    if (exception_pending()) goto v17;
    { Lisp_Object res = stack[0]; popv(1); return onevalue(res); }
/* error exit handlers */
v17:
    popv(1);
    return nil;
}



/* Code for copy */

static Lisp_Object CC_copy(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v50, v10;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for copy");
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
    goto v29;

v29:
    v50 = stack[0];
    if (!consp(v50)) goto v5;
    v50 = stack[0];
    v50 = qcar(v50);
    v10 = CC_copy(env, v50);
    nil = C_nil;
    if (exception_pending()) goto v35;
    env = stack[-2];
    v50 = stack[-1];
    v50 = cons(v10, v50);
    nil = C_nil;
    if (exception_pending()) goto v35;
    env = stack[-2];
    stack[-1] = v50;
    v50 = stack[0];
    v50 = qcdr(v50);
    stack[0] = v50;
    goto v29;

v5:
    v10 = stack[-1];
    v50 = stack[0];
    {
        popv(3);
        fn = elt(env, 1); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v10, v50);
    }
/* error exit handlers */
v35:
    popv(3);
    return nil;
}



/* Code for general!-modular!-number */

static Lisp_Object CC_generalKmodularKnumber(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v50, v10;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for general-modular-number");
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
    v10 = stack[0];
    v50 = qvalue(elt(env, 1)); /* current!-modulus */
    v50 = Cremainder(v10, v50);
    nil = C_nil;
    if (exception_pending()) goto v32;
    env = stack[-1];
    stack[0] = v50;
    v10 = stack[0];
    v50 = (Lisp_Object)1; /* 0 */
    v50 = (Lisp_Object)lessp2(v10, v50);
    nil = C_nil;
    if (exception_pending()) goto v32;
    v50 = v50 ? lisp_true : nil;
    env = stack[-1];
    if (v50 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v10 = stack[0];
    v50 = qvalue(elt(env, 1)); /* current!-modulus */
    v50 = plus2(v10, v50);
    nil = C_nil;
    if (exception_pending()) goto v32;
    stack[0] = v50;
    { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
/* error exit handlers */
v32:
    popv(2);
    return nil;
}



/* Code for rl_smcpknowl */

static Lisp_Object CC_rl_smcpknowl(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v44;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rl_smcpknowl");
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
    v44 = v0;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* rl_smcpknowl!* */
    v44 = ncons(v44);
    nil = C_nil;
    if (exception_pending()) goto v6;
    env = stack[-1];
    {
        Lisp_Object v18 = stack[0];
        popv(2);
        fn = elt(env, 2); /* apply */
        return (*qfn2(fn))(qenv(fn), v18, v44);
    }
/* error exit handlers */
v6:
    popv(2);
    return nil;
}



/* Code for gcdf */

static Lisp_Object CC_gcdf(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v110, v72;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gcdf");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v21;
    stack[-2] = v0;
/* end of prologue */
    stack[-3] = qvalue(elt(env, 1)); /* !*exp */
    qvalue(elt(env, 1)) = nil; /* !*exp */
    stack[0] = qvalue(elt(env, 2)); /* !*rounded */
    qvalue(elt(env, 2)) = nil; /* !*rounded */
    v110 = qvalue(elt(env, 3)); /* t */
    qvalue(elt(env, 1)) = v110; /* !*exp */
    v110 = stack[-2];
    if (!consp(v110)) goto v90;
    v110 = stack[-2];
    v110 = qcar(v110);
    v110 = (consp(v110) ? nil : lisp_true);
    goto v82;

v82:
    if (v110 == nil) goto v3;
    v110 = qvalue(elt(env, 3)); /* t */
    goto v6;

v6:
    if (v110 == nil) goto v74;
    v72 = stack[-2];
    v110 = stack[-1];
    fn = elt(env, 6); /* gcdf1 */
    v110 = (*qfn2(fn))(qenv(fn), v72, v110);
    nil = C_nil;
    if (exception_pending()) goto v66;
    env = stack[-4];
    goto v68;

v68:
    stack[-2] = v110;
    v110 = stack[-2];
    fn = elt(env, 7); /* minusf */
    v110 = (*qfn1(fn))(qenv(fn), v110);
    nil = C_nil;
    if (exception_pending()) goto v66;
    env = stack[-4];
    if (v110 == nil) goto v56;
    v110 = stack[-2];
    fn = elt(env, 8); /* negf */
    v110 = (*qfn1(fn))(qenv(fn), v110);
    nil = C_nil;
    if (exception_pending()) goto v66;
    env = stack[-4];
    goto v26;

v26:
    qvalue(elt(env, 2)) = stack[0]; /* !*rounded */
    qvalue(elt(env, 1)) = stack[-3]; /* !*exp */
    { popv(5); return onevalue(v110); }

v56:
    v110 = stack[-2];
    goto v26;

v74:
    v72 = stack[-2];
    v110 = stack[-1];
    fn = elt(env, 9); /* ezgcdf */
    v110 = (*qfn2(fn))(qenv(fn), v72, v110);
    nil = C_nil;
    if (exception_pending()) goto v66;
    env = stack[-4];
    goto v68;

v3:
    v110 = stack[-1];
    if (!consp(v110)) goto v32;
    v110 = stack[-1];
    v110 = qcar(v110);
    v110 = (consp(v110) ? nil : lisp_true);
    goto v88;

v88:
    if (v110 == nil) goto v64;
    v110 = qvalue(elt(env, 3)); /* t */
    goto v6;

v64:
    v110 = qvalue(elt(env, 4)); /* !*ezgcd */
    if (v110 == nil) goto v34;
    v110 = qvalue(elt(env, 5)); /* dmode!* */
    if (!(v110 == nil)) goto v6;
    v110 = stack[-2];
    fn = elt(env, 10); /* free!-powerp */
    v110 = (*qfn1(fn))(qenv(fn), v110);
    nil = C_nil;
    if (exception_pending()) goto v66;
    env = stack[-4];
    if (!(v110 == nil)) goto v6;
    v110 = stack[-1];
    fn = elt(env, 10); /* free!-powerp */
    v110 = (*qfn1(fn))(qenv(fn), v110);
    nil = C_nil;
    if (exception_pending()) goto v66;
    env = stack[-4];
    goto v6;

v34:
    v110 = qvalue(elt(env, 3)); /* t */
    goto v6;

v32:
    v110 = qvalue(elt(env, 3)); /* t */
    goto v88;

v90:
    v110 = qvalue(elt(env, 3)); /* t */
    goto v82;
/* error exit handlers */
v66:
    env = stack[-4];
    qvalue(elt(env, 2)) = stack[0]; /* !*rounded */
    qvalue(elt(env, 1)) = stack[-3]; /* !*exp */
    popv(5);
    return nil;
}



/* Code for sizchk */

static Lisp_Object CC_sizchk(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v91, v31;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for sizchk");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-1] = v0;
/* end of prologue */
    stack[-2] = nil;
    goto v26;

v26:
    v91 = stack[-1];
    if (v91 == nil) goto v68;
    v91 = stack[-1];
    v91 = qcar(v91);
    v91 = qcar(v91);
    v31 = Llength(nil, v91);
    nil = C_nil;
    if (exception_pending()) goto v46;
    env = stack[-3];
    v91 = stack[0];
    v91 = (Lisp_Object)greaterp2(v31, v91);
    nil = C_nil;
    if (exception_pending()) goto v46;
    v91 = v91 ? lisp_true : nil;
    env = stack[-3];
    if (v91 == nil) goto v43;
    v91 = stack[-1];
    v91 = qcdr(v91);
    stack[-1] = v91;
    goto v26;

v43:
    v91 = stack[-1];
    v31 = qcar(v91);
    v91 = stack[-2];
    v91 = cons(v31, v91);
    nil = C_nil;
    if (exception_pending()) goto v46;
    env = stack[-3];
    stack[-2] = v91;
    v91 = stack[-1];
    v91 = qcdr(v91);
    stack[-1] = v91;
    goto v26;

v68:
    v91 = stack[-2];
    {
        popv(4);
        fn = elt(env, 1); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v91);
    }
/* error exit handlers */
v46:
    popv(4);
    return nil;
}



/* Code for invsq */

static Lisp_Object CC_invsq(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v91, v31;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for invsq");
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
    v91 = stack[0];
    v91 = qcar(v91);
    if (!(v91 == nil)) goto v22;
    v91 = elt(env, 1); /* "Zero divisor" */
    v31 = v91;
    v91 = v31;
    qvalue(elt(env, 2)) = v91; /* errmsg!* */
    v91 = qvalue(elt(env, 3)); /* !*protfg */
    if (!(v91 == nil)) goto v97;
    v91 = v31;
    fn = elt(env, 5); /* lprie */
    v91 = (*qfn1(fn))(qenv(fn), v91);
    nil = C_nil;
    if (exception_pending()) goto v2;
    env = stack[-1];
    goto v97;

v97:
    v91 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v2;
    env = stack[-1];
    goto v22;

v22:
    v91 = stack[0];
    v31 = qcdr(v91);
    v91 = stack[0];
    v91 = qcar(v91);
    v91 = cons(v31, v91);
    nil = C_nil;
    if (exception_pending()) goto v2;
    env = stack[-1];
    stack[0] = v91;
    v91 = qvalue(elt(env, 4)); /* !*rationalize */
    if (v91 == nil) goto v10;
    v91 = stack[0];
    fn = elt(env, 6); /* gcdchk */
    v91 = (*qfn1(fn))(qenv(fn), v91);
    nil = C_nil;
    if (exception_pending()) goto v2;
    env = stack[-1];
    stack[0] = v91;
    goto v10;

v10:
    v91 = stack[0];
    {
        popv(2);
        fn = elt(env, 7); /* canonsq */
        return (*qfn1(fn))(qenv(fn), v91);
    }
/* error exit handlers */
v2:
    popv(2);
    return nil;
}



/* Code for mri_type */

static Lisp_Object CC_mri_type(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v90, v19;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mri_type");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v19 = v0;
/* end of prologue */
    v90 = v19;
    v90 = qcdr(v90);
    v90 = qcdr(v90);
    v90 = qcdr(v90);
    if (v90 == nil) goto v15;
    v90 = v19;
    v90 = qcdr(v90);
    v90 = qcdr(v90);
    v90 = qcdr(v90);
    v90 = qcar(v90);
    return onevalue(v90);

v15:
    v90 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v90);
}



/* Code for pasf_susitf */

static Lisp_Object CC_pasf_susitf(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object v15, v29;
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pasf_susitf");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v15 = v21;
    v29 = v0;
/* end of prologue */
    return onevalue(v29);
}



/* Code for ibalp_varlt */

static Lisp_Object CC_ibalp_varlt(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v45, v44;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ibalp_varlt");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v45 = v0;
/* end of prologue */
    v44 = v45;
    v45 = qvalue(elt(env, 1)); /* nil */
    {
        fn = elt(env, 2); /* ibalp_varlt1 */
        return (*qfn2(fn))(qenv(fn), v44, v45);
    }
}



/* Code for printout */

static Lisp_Object CC_printout(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v89, v83;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for printout");
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
    v89 = qvalue(elt(env, 1)); /* !*web */
    if (!(v89 == nil)) goto v29;
    v89 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v94;
    env = stack[-2];
    goto v29;

v29:
    v89 = qvalue(elt(env, 1)); /* !*web */
    if (!(v89 == nil)) goto v44;
    v89 = (Lisp_Object)17; /* 1 */
    stack[-1] = v89;
    goto v102;

v102:
    v83 = qvalue(elt(env, 2)); /* indent */
    v89 = stack[-1];
    v89 = difference2(v83, v89);
    nil = C_nil;
    if (exception_pending()) goto v94;
    env = stack[-2];
    v89 = Lminusp(nil, v89);
    env = stack[-2];
    if (!(v89 == nil)) goto v44;
    v89 = elt(env, 4); /* " " */
    v89 = Lprinc(nil, v89);
    nil = C_nil;
    if (exception_pending()) goto v94;
    env = stack[-2];
    v89 = stack[-1];
    v89 = add1(v89);
    nil = C_nil;
    if (exception_pending()) goto v94;
    env = stack[-2];
    stack[-1] = v89;
    goto v102;

v44:
    v89 = stack[0];
    v89 = Lconsp(nil, v89);
    env = stack[-2];
    if (v89 == nil) goto v74;
    v89 = stack[0];
    v83 = qcar(v89);
    v89 = elt(env, 5); /* !:rd!: */
    if (v83 == v89) goto v34;
    v89 = stack[0];
    v83 = qcar(v89);
    v89 = elt(env, 7); /* !:rn!: */
    v89 = (v83 == v89 ? lisp_true : nil);
    goto v12;

v12:
    if (v89 == nil) goto v75;
    v89 = stack[0];
    fn = elt(env, 8); /* ma_print */
    v89 = (*qfn1(fn))(qenv(fn), v89);
    nil = C_nil;
    if (exception_pending()) goto v94;
    goto v27;

v27:
    v89 = nil;
    { popv(3); return onevalue(v89); }

v75:
    v89 = stack[0];
    v89 = Lprinc(nil, v89);
    nil = C_nil;
    if (exception_pending()) goto v94;
    goto v27;

v34:
    v89 = qvalue(elt(env, 6)); /* t */
    goto v12;

v74:
    v89 = stack[0];
    v89 = Lprinc(nil, v89);
    nil = C_nil;
    if (exception_pending()) goto v94;
    goto v27;
/* error exit handlers */
v94:
    popv(3);
    return nil;
}



/* Code for mcharg1 */

static Lisp_Object MS_CDECL CC_mcharg1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v21,
                         Lisp_Object v98, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v171, v172, v173;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "mcharg1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mcharg1");
#endif
    if (stack >= stacklimit)
    {
        push3(v98,v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v21,v98);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v98;
    stack[-2] = v21;
    stack[-3] = v0;
/* end of prologue */
    v171 = stack[-3];
    if (v171 == nil) goto v45;
    v171 = qvalue(elt(env, 1)); /* nil */
    goto v68;

v68:
    if (v171 == nil) goto v99;
    v171 = qvalue(elt(env, 1)); /* nil */
    popv(6);
    return ncons(v171);

v99:
    v171 = stack[-3];
    v171 = Llength(nil, v171);
    nil = C_nil;
    if (exception_pending()) goto v125;
    env = stack[-5];
    stack[-4] = v171;
    v171 = stack[-2];
    v171 = Llength(nil, v171);
    nil = C_nil;
    if (exception_pending()) goto v125;
    env = stack[-5];
    stack[0] = v171;
    v172 = stack[-1];
    v171 = elt(env, 2); /* nary */
    v171 = Lflagp(nil, v172, v171);
    env = stack[-5];
    if (v171 == nil) goto v103;
    v172 = stack[-4];
    v171 = (Lisp_Object)33; /* 2 */
    v171 = (Lisp_Object)greaterp2(v172, v171);
    nil = C_nil;
    if (exception_pending()) goto v125;
    v171 = v171 ? lisp_true : nil;
    env = stack[-5];
    goto v35;

v35:
    if (v171 == nil) goto v80;
    v172 = stack[-4];
    v171 = qvalue(elt(env, 3)); /* matchlength!* */
    v171 = (Lisp_Object)lesseq2(v172, v171);
    nil = C_nil;
    if (exception_pending()) goto v125;
    v171 = v171 ? lisp_true : nil;
    env = stack[-5];
    if (v171 == nil) goto v58;
    v172 = stack[-1];
    v171 = elt(env, 4); /* symmetric */
    v171 = Lflagp(nil, v172, v171);
    env = stack[-5];
    if (v171 == nil) goto v58;
    v173 = stack[-3];
    v172 = stack[-2];
    v171 = stack[-1];
    {
        popv(6);
        fn = elt(env, 5); /* mchcomb */
        return (*qfnn(fn))(qenv(fn), 3, v173, v172, v171);
    }

v58:
    v172 = stack[0];
    v171 = (Lisp_Object)33; /* 2 */
    if (v172 == v171) goto v66;
    v171 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v171); }

v66:
    v172 = stack[-1];
    v171 = stack[-3];
    fn = elt(env, 6); /* mkbin */
    v171 = (*qfn2(fn))(qenv(fn), v172, v171);
    nil = C_nil;
    if (exception_pending()) goto v125;
    env = stack[-5];
    v171 = qcdr(v171);
    stack[-3] = v171;
    v171 = (Lisp_Object)33; /* 2 */
    stack[-4] = v171;
    goto v80;

v80:
    v172 = stack[-4];
    v171 = stack[0];
    if (equal(v172, v171)) goto v165;
    v171 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v171); }

v165:
    v172 = stack[-1];
    v171 = elt(env, 4); /* symmetric */
    v171 = Lflagp(nil, v172, v171);
    env = stack[-5];
    if (v171 == nil) goto v136;
    v173 = stack[-3];
    v172 = stack[-2];
    v171 = stack[-1];
    {
        popv(6);
        fn = elt(env, 7); /* mchsarg */
        return (*qfnn(fn))(qenv(fn), 3, v173, v172, v171);
    }

v136:
    v171 = stack[-2];
    fn = elt(env, 8); /* mtp */
    v171 = (*qfn1(fn))(qenv(fn), v171);
    nil = C_nil;
    if (exception_pending()) goto v125;
    env = stack[-5];
    if (v171 == nil) goto v174;
    v172 = stack[-2];
    v171 = stack[-3];
    fn = elt(env, 9); /* pair */
    v171 = (*qfn2(fn))(qenv(fn), v172, v171);
    nil = C_nil;
    if (exception_pending()) goto v125;
    popv(6);
    return ncons(v171);

v174:
    stack[0] = stack[-3];
    v171 = qvalue(elt(env, 1)); /* nil */
    v172 = ncons(v171);
    nil = C_nil;
    if (exception_pending()) goto v125;
    env = stack[-5];
    v171 = stack[-1];
    {
        Lisp_Object v175 = stack[0];
        Lisp_Object v176 = stack[-2];
        popv(6);
        fn = elt(env, 10); /* mcharg2 */
        return (*qfnn(fn))(qenv(fn), 4, v175, v176, v172, v171);
    }

v103:
    v171 = qvalue(elt(env, 1)); /* nil */
    goto v35;

v45:
    v171 = stack[-2];
    v171 = (v171 == nil ? lisp_true : nil);
    goto v68;
/* error exit handlers */
v125:
    popv(6);
    return nil;
}



/* Code for sqform */

static Lisp_Object CC_sqform(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v33, v12, v34, v38;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for sqform");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v21;
    stack[-1] = v0;
/* end of prologue */
    v12 = stack[0];
    v33 = stack[-1];
    v33 = qcar(v33);
    stack[-2] = Lapply1(nil, v12, v33);
    nil = C_nil;
    if (exception_pending()) goto v48;
    env = stack[-3];
    v12 = stack[0];
    v33 = stack[-1];
    v33 = qcdr(v33);
    v33 = Lapply1(nil, v12, v33);
    nil = C_nil;
    if (exception_pending()) goto v48;
    env = stack[-3];
    v38 = stack[-2];
    v34 = v33;
    v12 = v34;
    v33 = (Lisp_Object)17; /* 1 */
    if (v12 == v33) { popv(4); return onevalue(v38); }
    v33 = elt(env, 1); /* quotient */
    v12 = v38;
    popv(4);
    return list3(v33, v12, v34);
/* error exit handlers */
v48:
    popv(4);
    return nil;
}



/* Code for fullcopy */

static Lisp_Object CC_fullcopy(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v58, v140;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for fullcopy");
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
    stack[-5] = v0;
/* end of prologue */
    stack[0] = nil;
    goto v29;

v29:
    v58 = stack[-5];
    v58 = Lconsp(nil, v58);
    env = stack[-7];
    if (v58 == nil) goto v68;
    v58 = stack[-5];
    v58 = qcar(v58);
    v140 = CC_fullcopy(env, v58);
    nil = C_nil;
    if (exception_pending()) goto v67;
    env = stack[-7];
    v58 = stack[0];
    v58 = cons(v140, v58);
    nil = C_nil;
    if (exception_pending()) goto v67;
    env = stack[-7];
    stack[0] = v58;
    v58 = stack[-5];
    v58 = qcdr(v58);
    stack[-5] = v58;
    goto v29;

v68:
    v58 = stack[-5];
    v58 = Lsimple_vectorp(nil, v58);
    env = stack[-7];
    if (v58 == nil) goto v95;
    stack[-6] = stack[0];
    v58 = stack[-5];
    v58 = Lupbv(nil, v58);
    nil = C_nil;
    if (exception_pending()) goto v67;
    env = stack[-7];
    stack[-3] = v58;
    v58 = stack[-3];
    v58 = Lmkvect(nil, v58);
    nil = C_nil;
    if (exception_pending()) goto v67;
    env = stack[-7];
    stack[-4] = v58;
    v58 = (Lisp_Object)1; /* 0 */
    stack[-2] = v58;
    goto v48;

v48:
    v140 = stack[-3];
    v58 = stack[-2];
    v58 = difference2(v140, v58);
    nil = C_nil;
    if (exception_pending()) goto v67;
    env = stack[-7];
    v58 = Lminusp(nil, v58);
    env = stack[-7];
    if (v58 == nil) goto v11;
    v58 = stack[-4];
    {
        Lisp_Object v116 = stack[-6];
        popv(8);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v116, v58);
    }

v11:
    stack[-1] = stack[-4];
    stack[0] = stack[-2];
    v140 = stack[-5];
    v58 = stack[-2];
    v58 = *(Lisp_Object *)((char *)v140 + (CELL-TAG_VECTOR) + ((int32_t)v58/(16/CELL)));
    v58 = CC_fullcopy(env, v58);
    nil = C_nil;
    if (exception_pending()) goto v67;
    env = stack[-7];
    *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v58;
    v58 = stack[-2];
    v58 = add1(v58);
    nil = C_nil;
    if (exception_pending()) goto v67;
    env = stack[-7];
    stack[-2] = v58;
    goto v48;

v95:
    v140 = stack[0];
    v58 = stack[-5];
    {
        popv(8);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v140, v58);
    }
/* error exit handlers */
v67:
    popv(8);
    return nil;
}



/* Code for nextarg */

static Lisp_Object CC_nextarg(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v6, v18;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for nextarg");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v18 = v0;
/* end of prologue */
    v6 = qvalue(elt(env, 1)); /* symm */
    if (v6 == nil) goto v68;
    v6 = v18;
    {
        fn = elt(env, 2); /* s!-nextarg */
        return (*qfn1(fn))(qenv(fn), v6);
    }

v68:
    v6 = v18;
    {
        fn = elt(env, 3); /* o!-nextarg */
        return (*qfn1(fn))(qenv(fn), v6);
    }
}



/* Code for evcompless!? */

static Lisp_Object CC_evcomplessW(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v90, v19;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for evcompless?");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v19 = v21;
    v90 = v0;
/* end of prologue */
    stack[0] = (Lisp_Object)17; /* 1 */
    fn = elt(env, 1); /* evcomp */
    v90 = (*qfn2(fn))(qenv(fn), v19, v90);
    nil = C_nil;
    if (exception_pending()) goto v9;
    v90 = (stack[0] == v90 ? lisp_true : nil);
    { popv(1); return onevalue(v90); }
/* error exit handlers */
v9:
    popv(1);
    return nil;
}



/* Code for copy_mat */

static Lisp_Object CC_copy_mat(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v10, v88;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for copy_mat");
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
    goto v29;

v29:
    v10 = stack[0];
    v10 = Lconsp(nil, v10);
    env = stack[-2];
    if (v10 == nil) goto v4;
    v10 = stack[0];
    v10 = qcar(v10);
    v88 = CC_copy_mat(env, v10);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-2];
    v10 = stack[-1];
    v10 = cons(v88, v10);
    nil = C_nil;
    if (exception_pending()) goto v63;
    env = stack[-2];
    stack[-1] = v10;
    v10 = stack[0];
    v10 = qcdr(v10);
    stack[0] = v10;
    goto v29;

v4:
    v88 = stack[-1];
    v10 = stack[0];
    {
        popv(3);
        fn = elt(env, 1); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v88, v10);
    }
/* error exit handlers */
v63:
    popv(3);
    return nil;
}



/* Code for evmatrixcomp */

static Lisp_Object CC_evmatrixcomp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v18, v17, v97;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for evmatrixcomp");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v18 = v21;
    v17 = v0;
/* end of prologue */
    v97 = v17;
    v17 = v18;
    v18 = qvalue(elt(env, 1)); /* vdpmatrix!* */
    {
        fn = elt(env, 2); /* evmatrixcomp1 */
        return (*qfnn(fn))(qenv(fn), 3, v97, v17, v18);
    }
}



/* Code for atomf */

static Lisp_Object CC_atomf(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v19, v99;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for atomf");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v99 = v0;
/* end of prologue */
    v19 = v99;
    if (!consp(v19)) goto v15;
    v19 = v99;
    v19 = qcar(v19);
    v99 = elt(env, 2); /* indexvar */
        return Lflagp(nil, v19, v99);

v15:
    v19 = qvalue(elt(env, 1)); /* t */
    return onevalue(v19);
}



/* Code for monordp */

static Lisp_Object CC_monordp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v9, v36, v37, v22;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for monordp");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v37 = v21;
    v22 = v0;
/* end of prologue */
    v36 = elt(env, 1); /* wedge */
    v9 = elt(env, 2); /* xorder */
    v9 = get(v36, v9);
    v36 = v22;
        return Lapply2(nil, 3, v9, v36, v37);
}



/* Code for update!-pline */

static Lisp_Object MS_CDECL CC_updateKpline(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v21,
                         Lisp_Object v98, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v181, v182, v183;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "update-pline");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for update-pline");
#endif
    if (stack >= stacklimit)
    {
        push3(v98,v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v21,v98);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    v183 = v98;
    stack[-4] = v21;
    stack[-5] = v0;
/* end of prologue */
    v182 = stack[-5];
    v181 = (Lisp_Object)1; /* 0 */
    if (v182 == v181) goto v19;
    v181 = qvalue(elt(env, 1)); /* nil */
    goto v68;

v68:
    if (!(v181 == nil)) { popv(8); return onevalue(v183); }
    v181 = v183;
    stack[-6] = v181;
    v181 = stack[-6];
    if (v181 == nil) goto v91;
    v181 = stack[-6];
    v181 = qcar(v181);
    stack[0] = v181;
    v181 = stack[0];
    v181 = qcar(v181);
    v181 = qcar(v181);
    v182 = qcar(v181);
    v181 = stack[-5];
    v183 = (Lisp_Object)(int32_t)((int32_t)v182 + (int32_t)v181 - TAG_FIXNUM);
    v181 = stack[0];
    v181 = qcar(v181);
    v181 = qcar(v181);
    v182 = qcdr(v181);
    v181 = stack[-5];
    v181 = (Lisp_Object)(int32_t)((int32_t)v182 + (int32_t)v181 - TAG_FIXNUM);
    v183 = cons(v183, v181);
    nil = C_nil;
    if (exception_pending()) goto v171;
    env = stack[-7];
    v181 = stack[0];
    v181 = qcar(v181);
    v182 = qcdr(v181);
    v181 = stack[-4];
    v182 = (Lisp_Object)(int32_t)((int32_t)v182 + (int32_t)v181 - TAG_FIXNUM);
    v181 = stack[0];
    v181 = qcdr(v181);
    v181 = acons(v183, v182, v181);
    nil = C_nil;
    if (exception_pending()) goto v171;
    env = stack[-7];
    v181 = ncons(v181);
    nil = C_nil;
    if (exception_pending()) goto v171;
    env = stack[-7];
    stack[-2] = v181;
    stack[-3] = v181;
    goto v63;

v63:
    v181 = stack[-6];
    v181 = qcdr(v181);
    stack[-6] = v181;
    v181 = stack[-6];
    if (v181 == nil) { Lisp_Object res = stack[-3]; popv(8); return onevalue(res); }
    stack[-1] = stack[-2];
    v181 = stack[-6];
    v181 = qcar(v181);
    stack[0] = v181;
    v181 = stack[0];
    v181 = qcar(v181);
    v181 = qcar(v181);
    v182 = qcar(v181);
    v181 = stack[-5];
    v183 = (Lisp_Object)(int32_t)((int32_t)v182 + (int32_t)v181 - TAG_FIXNUM);
    v181 = stack[0];
    v181 = qcar(v181);
    v181 = qcar(v181);
    v182 = qcdr(v181);
    v181 = stack[-5];
    v181 = (Lisp_Object)(int32_t)((int32_t)v182 + (int32_t)v181 - TAG_FIXNUM);
    v183 = cons(v183, v181);
    nil = C_nil;
    if (exception_pending()) goto v171;
    env = stack[-7];
    v181 = stack[0];
    v181 = qcar(v181);
    v182 = qcdr(v181);
    v181 = stack[-4];
    v182 = (Lisp_Object)(int32_t)((int32_t)v182 + (int32_t)v181 - TAG_FIXNUM);
    v181 = stack[0];
    v181 = qcdr(v181);
    v181 = acons(v183, v182, v181);
    nil = C_nil;
    if (exception_pending()) goto v171;
    env = stack[-7];
    v181 = ncons(v181);
    nil = C_nil;
    if (exception_pending()) goto v171;
    env = stack[-7];
    v181 = Lrplacd(nil, stack[-1], v181);
    nil = C_nil;
    if (exception_pending()) goto v171;
    env = stack[-7];
    v181 = stack[-2];
    v181 = qcdr(v181);
    stack[-2] = v181;
    goto v63;

v91:
    v181 = qvalue(elt(env, 1)); /* nil */
    { popv(8); return onevalue(v181); }

v19:
    v182 = stack[-4];
    v181 = (Lisp_Object)1; /* 0 */
    v181 = (v182 == v181 ? lisp_true : nil);
    goto v68;
/* error exit handlers */
v171:
    popv(8);
    return nil;
}



/* Code for rd!:minusp */

static Lisp_Object CC_rdTminusp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v12, v34, v38;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rd:minusp");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v38 = v0;
/* end of prologue */
    v12 = v38;
    v12 = qcdr(v12);
    if (!consp(v12)) goto v15;
    v34 = v38;
    v12 = elt(env, 1); /* !:rd!: */
    if (!consp(v34)) goto v50;
    v34 = qcar(v34);
    if (!(v34 == v12)) goto v50;
    v12 = v38;
    v12 = qcdr(v12);
    v12 = (consp(v12) ? nil : lisp_true);
    v12 = (v12 == nil ? lisp_true : nil);
    goto v90;

v90:
    if (v12 == nil) goto v64;
    v12 = v38;
    v12 = qcdr(v12);
    v34 = qcar(v12);
    v12 = (Lisp_Object)1; /* 0 */
        return Llessp(nil, v34, v12);

v64:
    v12 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v12);

v50:
    v12 = qvalue(elt(env, 2)); /* nil */
    goto v90;

v15:
    v12 = v38;
    v12 = qcdr(v12);
        return Lminusp(nil, v12);
}



/* Code for physopsim!* */

static Lisp_Object CC_physopsimH(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v6;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for physopsim*");
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
    v6 = stack[0];
    fn = elt(env, 1); /* !*physopp!* */
    v6 = (*qfn1(fn))(qenv(fn), v6);
    nil = C_nil;
    if (exception_pending()) goto v17;
    env = stack[-1];
    if (v6 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v6 = stack[0];
    {
        popv(2);
        fn = elt(env, 2); /* physopsm!* */
        return (*qfn1(fn))(qenv(fn), v6);
    }
/* error exit handlers */
v17:
    popv(2);
    return nil;
}



/* Code for formc */

static Lisp_Object MS_CDECL CC_formc(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v21,
                         Lisp_Object v98, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v104, v105, v106, v114;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "formc");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for formc");
#endif
    if (stack >= stacklimit)
    {
        push3(v98,v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0,v21,v98);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v98;
    stack[-1] = v21;
    stack[-2] = v0;
/* end of prologue */
    v104 = qvalue(elt(env, 1)); /* !*rlisp88 */
    if (v104 == nil) goto v31;
    v105 = stack[-2];
    v104 = elt(env, 2); /* modefn */
    v104 = Lflagpcar(nil, v105, v104);
    env = stack[-3];
    if (v104 == nil) goto v31;
    v104 = stack[-2];
    v105 = qcar(v104);
    v104 = elt(env, 3); /* symbolic */
    if (v105 == v104) goto v31;
    v105 = elt(env, 4); /* "algebraic expression" */
    v104 = elt(env, 5); /* "Rlisp88 form" */
    {
        popv(4);
        fn = elt(env, 8); /* typerr */
        return (*qfn2(fn))(qenv(fn), v105, v104);
    }

v31:
    v105 = stack[0];
    v104 = elt(env, 6); /* algebraic */
    if (v105 == v104) goto v38;
    v104 = qvalue(elt(env, 7)); /* nil */
    goto v28;

v28:
    if (!(v104 == nil)) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v106 = stack[-2];
    v105 = stack[-1];
    v104 = stack[0];
    fn = elt(env, 9); /* form1 */
    v114 = (*qfnn(fn))(qenv(fn), 3, v106, v105, v104);
    nil = C_nil;
    if (exception_pending()) goto v140;
    env = stack[-3];
    v106 = stack[-1];
    v105 = elt(env, 3); /* symbolic */
    v104 = stack[0];
    {
        popv(4);
        fn = elt(env, 10); /* convertmode1 */
        return (*qfnn(fn))(qenv(fn), 4, v114, v106, v105, v104);
    }

v38:
    v105 = stack[-2];
    v104 = stack[-1];
    fn = elt(env, 11); /* intexprnp */
    v104 = (*qfn2(fn))(qenv(fn), v105, v104);
    nil = C_nil;
    if (exception_pending()) goto v140;
    env = stack[-3];
    goto v28;
/* error exit handlers */
v140:
    popv(4);
    return nil;
}



/* Code for mo_ecart */

static Lisp_Object CC_mo_ecart(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v33, v12;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mo_ecart");
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
    v33 = stack[0];
    v33 = qcar(v33);
    if (v33 == nil) goto v15;
    v33 = stack[0];
    fn = elt(env, 3); /* mo_comp */
    v12 = (*qfn1(fn))(qenv(fn), v33);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-1];
    v33 = qvalue(elt(env, 1)); /* cali!=degrees */
    v33 = Latsoc(nil, v12, v33);
    v12 = v33;
    v33 = v12;
    if (v33 == nil) goto v1;
    v33 = v12;
    v12 = qcdr(v33);
    v33 = stack[0];
    fn = elt(env, 4); /* mo_sum */
    v33 = (*qfn2(fn))(qenv(fn), v12, v33);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-1];
    goto v3;

v3:
    v33 = qcar(v33);
    stack[0] = qcdr(v33);
    v33 = qvalue(elt(env, 2)); /* cali!=basering */
    fn = elt(env, 5); /* ring_ecart */
    v33 = (*qfn1(fn))(qenv(fn), v33);
    nil = C_nil;
    if (exception_pending()) goto v38;
    env = stack[-1];
    {
        Lisp_Object v39 = stack[0];
        popv(2);
        fn = elt(env, 6); /* mo!=sprod */
        return (*qfn2(fn))(qenv(fn), v39, v33);
    }

v1:
    v33 = stack[0];
    goto v3;

v15:
    v33 = (Lisp_Object)1; /* 0 */
    { popv(2); return onevalue(v33); }
/* error exit handlers */
v38:
    popv(2);
    return nil;
}



/* Code for addsq */

static Lisp_Object CC_addsq(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v21)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v205, v206;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for addsq");
#endif
    if (stack >= stacklimit)
    {
        push2(v21,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0,v21);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-2] = v21;
    stack[-3] = v0;
/* end of prologue */
    v205 = stack[-3];
    v205 = qcar(v205);
    if (v205 == nil) { Lisp_Object res = stack[-2]; popv(6); return onevalue(res); }
    v205 = stack[-2];
    v205 = qcar(v205);
    if (v205 == nil) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    v205 = stack[-3];
    v206 = qcdr(v205);
    v205 = (Lisp_Object)17; /* 1 */
    if (v206 == v205) goto v25;
    v205 = qvalue(elt(env, 1)); /* nil */
    goto v90;

v90:
    if (v205 == nil) goto v86;
    v205 = stack[-3];
    v206 = qcar(v205);
    v205 = stack[-2];
    v205 = qcar(v205);
    fn = elt(env, 5); /* addf */
    v206 = (*qfn2(fn))(qenv(fn), v206, v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    v205 = (Lisp_Object)17; /* 1 */
    popv(6);
    return cons(v206, v205);

v86:
    v205 = qvalue(elt(env, 2)); /* !*exp */
    if (!(v205 == nil)) goto v87;
    v205 = stack[-3];
    stack[0] = qcar(v205);
    v205 = stack[-3];
    v205 = qcdr(v205);
    fn = elt(env, 6); /* mkprod */
    v205 = (*qfn1(fn))(qenv(fn), v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    v205 = cons(stack[0], v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    stack[-3] = v205;
    v205 = stack[-2];
    stack[0] = qcar(v205);
    v205 = stack[-2];
    v205 = qcdr(v205);
    fn = elt(env, 6); /* mkprod */
    v205 = (*qfn1(fn))(qenv(fn), v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    v205 = cons(stack[0], v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    stack[-2] = v205;
    goto v87;

v87:
    v205 = qvalue(elt(env, 3)); /* !*lcm */
    if (v205 == nil) goto v107;
    v205 = stack[-3];
    v206 = qcdr(v205);
    v205 = stack[-2];
    v205 = qcdr(v205);
    fn = elt(env, 7); /* gcdf!* */
    v205 = (*qfn2(fn))(qenv(fn), v206, v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    stack[-4] = v205;
    goto v136;

v136:
    v205 = stack[-3];
    v206 = qcdr(v205);
    v205 = stack[-4];
    fn = elt(env, 8); /* quotf */
    stack[0] = (*qfn2(fn))(qenv(fn), v206, v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    v205 = stack[-2];
    v206 = qcdr(v205);
    v205 = stack[-4];
    fn = elt(env, 8); /* quotf */
    v205 = (*qfn2(fn))(qenv(fn), v206, v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    v205 = cons(stack[0], v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    fn = elt(env, 9); /* canonsq */
    v205 = (*qfn1(fn))(qenv(fn), v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    stack[-1] = v205;
    v205 = stack[-1];
    v206 = qcdr(v205);
    v205 = stack[-3];
    v205 = qcar(v205);
    fn = elt(env, 10); /* multf */
    stack[0] = (*qfn2(fn))(qenv(fn), v206, v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    v205 = stack[-1];
    v206 = qcar(v205);
    v205 = stack[-2];
    v205 = qcar(v205);
    fn = elt(env, 10); /* multf */
    v205 = (*qfn2(fn))(qenv(fn), v206, v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    fn = elt(env, 5); /* addf */
    v205 = (*qfn2(fn))(qenv(fn), stack[0], v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    stack[0] = v205;
    v205 = stack[0];
    if (v205 == nil) goto v168;
    v205 = stack[-3];
    v206 = qcdr(v205);
    v205 = stack[-1];
    v205 = qcdr(v205);
    fn = elt(env, 10); /* multf */
    v205 = (*qfn2(fn))(qenv(fn), v206, v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    stack[-1] = v205;
    v206 = stack[-4];
    v205 = (Lisp_Object)17; /* 1 */
    if (v206 == v205) goto v208;
    v206 = stack[0];
    v205 = stack[-4];
    fn = elt(env, 11); /* gcdf */
    v206 = (*qfn2(fn))(qenv(fn), v206, v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    stack[-4] = v206;
    v205 = (Lisp_Object)17; /* 1 */
    v205 = (v206 == v205 ? lisp_true : nil);
    goto v209;

v209:
    if (v205 == nil) goto v210;
    v206 = stack[0];
    v205 = stack[-1];
    popv(6);
    return cons(v206, v205);

v210:
    v206 = stack[0];
    v205 = stack[-4];
    fn = elt(env, 8); /* quotf */
    stack[0] = (*qfn2(fn))(qenv(fn), v206, v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    v206 = stack[-1];
    v205 = stack[-4];
    fn = elt(env, 8); /* quotf */
    v205 = (*qfn2(fn))(qenv(fn), v206, v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    v205 = cons(stack[0], v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    {
        popv(6);
        fn = elt(env, 9); /* canonsq */
        return (*qfn1(fn))(qenv(fn), v205);
    }

v208:
    v205 = qvalue(elt(env, 4)); /* t */
    goto v209;

v168:
    v206 = qvalue(elt(env, 1)); /* nil */
    v205 = (Lisp_Object)17; /* 1 */
    popv(6);
    return cons(v206, v205);

v107:
    v205 = stack[-3];
    v206 = qcdr(v205);
    v205 = stack[-2];
    v205 = qcdr(v205);
    fn = elt(env, 11); /* gcdf */
    v205 = (*qfn2(fn))(qenv(fn), v206, v205);
    nil = C_nil;
    if (exception_pending()) goto v207;
    env = stack[-5];
    stack[-4] = v205;
    goto v136;

v25:
    v205 = stack[-2];
    v206 = qcdr(v205);
    v205 = (Lisp_Object)17; /* 1 */
    v205 = (v206 == v205 ? lisp_true : nil);
    goto v90;
/* error exit handlers */
v207:
    popv(6);
    return nil;
}



/* Code for pkp */

static Lisp_Object CC_pkp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v178, v134, v135;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pkp");
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
    stack[0] = v0;
/* end of prologue */
    stack[-3] = nil;
    v178 = stack[0];
    if (!consp(v178)) goto v6;
    v178 = qvalue(elt(env, 2)); /* !*ppacked */
    v178 = (v178 == nil ? lisp_true : nil);
    goto v5;

v5:
    if (!(v178 == nil)) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    v178 = stack[0];
    v134 = Llength(nil, v178);
    nil = C_nil;
    if (exception_pending()) goto v202;
    env = stack[-4];
    v178 = (Lisp_Object)161; /* 10 */
    v178 = (Lisp_Object)geq2(v134, v178);
    nil = C_nil;
    if (exception_pending()) goto v202;
    v178 = v178 ? lisp_true : nil;
    env = stack[-4];
    stack[-2] = v178;
    v178 = stack[0];
    stack[-1] = v178;
    goto v10;

v10:
    v178 = stack[-1];
    if (v178 == nil) goto v50;
    v178 = stack[-1];
    v178 = qcar(v178);
    stack[0] = v178;
    v178 = stack[-2];
    if (v178 == nil) goto v153;
    v134 = stack[0];
    v178 = (Lisp_Object)161; /* 10 */
    v178 = (Lisp_Object)lessp2(v134, v178);
    nil = C_nil;
    if (exception_pending()) goto v202;
    v178 = v178 ? lisp_true : nil;
    env = stack[-4];
    if (v178 == nil) goto v92;
    v134 = stack[0];
    v178 = qvalue(elt(env, 4)); /* diglist!* */
    fn = elt(env, 6); /* dssoc */
    v178 = (*qfn2(fn))(qenv(fn), v134, v178);
    nil = C_nil;
    if (exception_pending()) goto v202;
    env = stack[-4];
    v135 = qcar(v178);
    v134 = elt(env, 5); /* !0 */
    v178 = stack[-3];
    v178 = list2star(v135, v134, v178);
    nil = C_nil;
    if (exception_pending()) goto v202;
    env = stack[-4];
    stack[-3] = v178;
    goto v64;

v64:
    v178 = stack[-1];
    v178 = qcdr(v178);
    stack[-1] = v178;
    goto v10;

v92:
    v134 = stack[0];
    v178 = (Lisp_Object)161; /* 10 */
    v178 = Ldivide(nil, v134, v178);
    nil = C_nil;
    if (exception_pending()) goto v202;
    env = stack[-4];
    stack[0] = v178;
    v178 = stack[0];
    v134 = qcar(v178);
    v178 = qvalue(elt(env, 4)); /* diglist!* */
    fn = elt(env, 6); /* dssoc */
    v178 = (*qfn2(fn))(qenv(fn), v134, v178);
    nil = C_nil;
    if (exception_pending()) goto v202;
    env = stack[-4];
    v134 = qcar(v178);
    v178 = stack[-3];
    v178 = cons(v134, v178);
    nil = C_nil;
    if (exception_pending()) goto v202;
    env = stack[-4];
    stack[-3] = v178;
    v178 = stack[0];
    v134 = qcdr(v178);
    v178 = qvalue(elt(env, 4)); /* diglist!* */
    fn = elt(env, 6); /* dssoc */
    v178 = (*qfn2(fn))(qenv(fn), v134, v178);
    nil = C_nil;
    if (exception_pending()) goto v202;
    env = stack[-4];
    v134 = qcar(v178);
    v178 = stack[-3];
    v178 = cons(v134, v178);
    nil = C_nil;
    if (exception_pending()) goto v202;
    env = stack[-4];
    stack[-3] = v178;
    goto v64;

v153:
    v134 = stack[0];
    v178 = qvalue(elt(env, 4)); /* diglist!* */
    fn = elt(env, 6); /* dssoc */
    v178 = (*qfn2(fn))(qenv(fn), v134, v178);
    nil = C_nil;
    if (exception_pending()) goto v202;
    env = stack[-4];
    v134 = qcar(v178);
    v178 = stack[-3];
    v178 = cons(v134, v178);
    nil = C_nil;
    if (exception_pending()) goto v202;
    env = stack[-4];
    stack[-3] = v178;
    goto v64;

v50:
    v178 = stack[-3];
    v178 = Lnreverse(nil, v178);
        popv(5);
        return Lcompress(nil, v178);

v6:
    v178 = qvalue(elt(env, 1)); /* t */
    goto v5;
/* error exit handlers */
v202:
    popv(5);
    return nil;
}



/* Code for round!:last */

static Lisp_Object CC_roundTlast(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v53, v54, v157;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for round:last");
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
    v54 = v0;
/* end of prologue */
    v53 = v54;
    v53 = qcdr(v53);
    stack[0] = qcar(v53);
    v53 = v54;
    v53 = qcdr(v53);
    v53 = qcdr(v53);
    v54 = add1(v53);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    v53 = qvalue(elt(env, 1)); /* nil */
    stack[-2] = stack[0];
    stack[-1] = v54;
    stack[0] = v53;
    v54 = stack[-2];
    v53 = (Lisp_Object)1; /* 0 */
    v53 = (Lisp_Object)lessp2(v54, v53);
    nil = C_nil;
    if (exception_pending()) goto v101;
    v53 = v53 ? lisp_true : nil;
    env = stack[-3];
    if (v53 == nil) goto v18;
    v53 = stack[-2];
    v53 = negate(v53);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    stack[-2] = v53;
    v53 = qvalue(elt(env, 2)); /* t */
    stack[0] = v53;
    goto v18;

v18:
    v53 = stack[-2];
    v53 = Levenp(nil, v53);
    env = stack[-3];
    if (v53 == nil) goto v32;
    v54 = stack[-2];
    v53 = (Lisp_Object)-15; /* -1 */
    v53 = ash(v54, v53);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    goto v25;

v25:
    stack[-2] = v53;
    v53 = stack[0];
    if (v53 == nil) goto v8;
    v53 = stack[-2];
    v53 = negate(v53);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    stack[-2] = v53;
    goto v8;

v8:
    v157 = elt(env, 3); /* !:rd!: */
    v54 = stack[-2];
    v53 = stack[-1];
    popv(4);
    return list2star(v157, v54, v53);

v32:
    v54 = stack[-2];
    v53 = (Lisp_Object)-15; /* -1 */
    v53 = ash(v54, v53);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    v53 = add1(v53);
    nil = C_nil;
    if (exception_pending()) goto v101;
    env = stack[-3];
    goto v25;
/* error exit handlers */
v101:
    popv(4);
    return nil;
}



setup_type const u03_setup[] =
{
    {"peel",                    CC_peel,        too_many_1,    wrong_no_1},
    {"lnc",                     CC_lnc,         too_many_1,    wrong_no_1},
    {"hasonephysop",            CC_hasonephysop,too_many_1,    wrong_no_1},
    {"union_edges",             too_few_2,      CC_union_edges,wrong_no_2},
    {"mo=modiv1",               too_few_2,      CC_moMmodiv1,  wrong_no_2},
    {":minus",                  CC_Tminus,      too_many_1,    wrong_no_1},
    {"pappl",                   too_few_2,      CC_pappl,      wrong_no_2},
    {"*i2rn",                   CC_Hi2rn,       too_many_1,    wrong_no_1},
    {"evaluate-in-order",       too_few_2,      CC_evaluateKinKorder,wrong_no_2},
    {"gizerop:",                CC_gizeropT,    too_many_1,    wrong_no_1},
    {"treesizep1",              too_few_2,      CC_treesizep1, wrong_no_2},
    {"tayexp-plus2",            too_few_2,      CC_tayexpKplus2,wrong_no_2},
    {"mri_simplfloor",          CC_mri_simplfloor,too_many_1,  wrong_no_1},
    {"qqe_nytidp",              CC_qqe_nytidp,  too_many_1,    wrong_no_1},
    {"powers0",                 too_few_2,      CC_powers0,    wrong_no_2},
    {"attributes",              too_few_2,      CC_attributes, wrong_no_2},
    {"multi_isarb_int",         CC_multi_isarb_int,too_many_1, wrong_no_1},
    {"equal:",                  too_few_2,      CC_equalT,     wrong_no_2},
    {"subs2q",                  CC_subs2q,      too_many_1,    wrong_no_1},
    {"dm-difference",           too_few_2,      CC_dmKdifference,wrong_no_2},
    {"initcomb",                CC_initcomb,    too_many_1,    wrong_no_1},
    {"evmatrixcomp1",           wrong_no_na,    wrong_no_nb,   (n_args *)CC_evmatrixcomp1},
    {"prin2la",                 CC_prin2la,     too_many_1,    wrong_no_1},
    {"i2rd*",                   CC_i2rdH,       too_many_1,    wrong_no_1},
    {"collectindices",          CC_collectindices,too_many_1,  wrong_no_1},
    {"qassoc",                  too_few_2,      CC_qassoc,     wrong_no_2},
    {"*ssave",                  too_few_2,      CC_Hssave,     wrong_no_2},
    {"fs:timesterm",            too_few_2,      CC_fsTtimesterm,wrong_no_2},
    {"cdiv",                    too_few_2,      CC_cdiv,       wrong_no_2},
    {"pv_multc",                too_few_2,      CC_pv_multc,   wrong_no_2},
    {"fkern",                   CC_fkern,       too_many_1,    wrong_no_1},
    {"gintequiv:",              CC_gintequivT,  too_many_1,    wrong_no_1},
    {"gcdfd1",                  too_few_2,      CC_gcdfd1,     wrong_no_2},
    {"monomcomparedegrevlex",   too_few_2,      CC_monomcomparedegrevlex,wrong_no_2},
    {"setcdr",                  too_few_2,      CC_setcdr,     wrong_no_2},
    {"getrtype2",               CC_getrtype2,   too_many_1,    wrong_no_1},
    {"tayexp-minusp",           CC_tayexpKminusp,too_many_1,   wrong_no_1},
    {"get+vec+dim",             CC_getLvecLdim, too_many_1,    wrong_no_1},
    {"qqe_btidp",               CC_qqe_btidp,   too_many_1,    wrong_no_1},
    {"rl_simplat1",             too_few_2,      CC_rl_simplat1,wrong_no_2},
    {"delq",                    too_few_2,      CC_delq,       wrong_no_2},
    {"times-mod-p",             too_few_2,      CC_timesKmodKp,wrong_no_2},
    {"get_content",             wrong_no_na,    wrong_no_nb,   (n_args *)CC_get_content},
    {"c:ordexn",                too_few_2,      CC_cTordexn,   wrong_no_2},
    {"freexp",                  CC_freexp,      too_many_1,    wrong_no_1},
    {"prepf1a_reversed",        wrong_no_na,    wrong_no_nb,   (n_args *)CC_prepf1a_reversed},
    {"vevmtest?",               too_few_2,      CC_vevmtestW,  wrong_no_2},
    {"multpfsq",                too_few_2,      CC_multpfsq,   wrong_no_2},
    {"chundexp",                CC_chundexp,    too_many_1,    wrong_no_1},
    {"quotfm",                  too_few_2,      CC_quotfm,     wrong_no_2},
    {"*physopp*",               CC_HphysoppH,   too_many_1,    wrong_no_1},
    {"sfpx",                    CC_sfpx,        too_many_1,    wrong_no_1},
    {"getrtype",                CC_getrtype,    too_many_1,    wrong_no_1},
    {"cali_trace",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_cali_trace},
    {"pv_sort2",                too_few_2,      CC_pv_sort2,   wrong_no_2},
    {"copy",                    CC_copy,        too_many_1,    wrong_no_1},
    {"general-modular-number",  CC_generalKmodularKnumber,too_many_1,wrong_no_1},
    {"rl_smcpknowl",            CC_rl_smcpknowl,too_many_1,    wrong_no_1},
    {"gcdf",                    too_few_2,      CC_gcdf,       wrong_no_2},
    {"sizchk",                  too_few_2,      CC_sizchk,     wrong_no_2},
    {"invsq",                   CC_invsq,       too_many_1,    wrong_no_1},
    {"mri_type",                CC_mri_type,    too_many_1,    wrong_no_1},
    {"pasf_susitf",             too_few_2,      CC_pasf_susitf,wrong_no_2},
    {"ibalp_varlt",             CC_ibalp_varlt, too_many_1,    wrong_no_1},
    {"printout",                CC_printout,    too_many_1,    wrong_no_1},
    {"mcharg1",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_mcharg1},
    {"sqform",                  too_few_2,      CC_sqform,     wrong_no_2},
    {"fullcopy",                CC_fullcopy,    too_many_1,    wrong_no_1},
    {"nextarg",                 CC_nextarg,     too_many_1,    wrong_no_1},
    {"evcompless?",             too_few_2,      CC_evcomplessW,wrong_no_2},
    {"copy_mat",                CC_copy_mat,    too_many_1,    wrong_no_1},
    {"evmatrixcomp",            too_few_2,      CC_evmatrixcomp,wrong_no_2},
    {"atomf",                   CC_atomf,       too_many_1,    wrong_no_1},
    {"monordp",                 too_few_2,      CC_monordp,    wrong_no_2},
    {"update-pline",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_updateKpline},
    {"rd:minusp",               CC_rdTminusp,   too_many_1,    wrong_no_1},
    {"physopsim*",              CC_physopsimH,  too_many_1,    wrong_no_1},
    {"formc",                   wrong_no_na,    wrong_no_nb,   (n_args *)CC_formc},
    {"mo_ecart",                CC_mo_ecart,    too_many_1,    wrong_no_1},
    {"addsq",                   too_few_2,      CC_addsq,      wrong_no_2},
    {"pkp",                     CC_pkp,         too_many_1,    wrong_no_1},
    {"round:last",              CC_roundTlast,  too_many_1,    wrong_no_1},
    {NULL, (one_args *)"u03", (two_args *)"8455 5124845 9188096", 0}
};

/* end of generated code */
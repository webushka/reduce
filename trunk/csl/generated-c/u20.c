
/* $destdir\u20.c        Machine generated C code */

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


/* Code for dipilcomb1 */

static Lisp_Object MS_CDECL CC_dipilcomb1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, Lisp_Object v3,
                         Lisp_Object v4, Lisp_Object v5, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v85, v86, v87;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 6, "dipilcomb1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dipilcomb1");
#endif
    if (stack >= stacklimit)
    {
        push6(v5,v4,v3,v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop6(v0,v1,v2,v3,v4,v5);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push5(nil, nil, nil, nil, nil);
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-10] = v5;
    stack[-11] = v4;
    stack[-12] = v3;
    stack[-13] = v2;
    stack[-14] = v1;
    stack[-15] = v0;
/* end of prologue */
    v85 = qvalue(elt(env, 1)); /* !*gcd */
    stack[-1] = v85;
    stack[-16] = nil;
    stack[-9] = nil;
    stack[0] = qvalue(elt(env, 1)); /* !*gcd */
    qvalue(elt(env, 1)) = nil; /* !*gcd */
    v86 = stack[-14];
    v85 = (Lisp_Object)-1599; /* -100 */
    fn = elt(env, 4); /* vbcsize */
    v85 = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    if (v85 == nil) goto v89;
    v86 = stack[-11];
    v85 = (Lisp_Object)-1599; /* -100 */
    fn = elt(env, 4); /* vbcsize */
    v85 = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    if (v85 == nil) goto v89;
    v85 = stack[-1];
    goto v90;

v90:
    qvalue(elt(env, 1)) = v85; /* !*gcd */
    v85 = stack[-13];
    fn = elt(env, 5); /* evzero!? */
    v85 = (*qfn1(fn))(qenv(fn), v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    v85 = (v85 == nil ? lisp_true : nil);
    stack[-7] = v85;
    v85 = stack[-10];
    fn = elt(env, 5); /* evzero!? */
    v85 = (*qfn1(fn))(qenv(fn), v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    v85 = (v85 == nil ? lisp_true : nil);
    stack[-6] = v85;
    v85 = qvalue(elt(env, 2)); /* t */
    stack[-4] = v85;
    stack[-5] = v85;
    v85 = qvalue(elt(env, 3)); /* nil */
    stack[-8] = v85;
    stack[-2] = v85;
    stack[-3] = v85;
    goto v91;

v91:
    v85 = stack[-5];
    if (v85 == nil) goto v92;
    v85 = stack[-15];
    if (v85 == nil) goto v93;
    v85 = stack[-15];
    v85 = qcar(v85);
    stack[-16] = v85;
    v85 = stack[-7];
    if (v85 == nil) goto v94;
    v86 = stack[-16];
    v85 = stack[-13];
    fn = elt(env, 6); /* evsum */
    v85 = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    stack[-16] = v85;
    goto v94;

v94:
    v85 = qvalue(elt(env, 3)); /* nil */
    stack[-5] = v85;
    goto v92;

v92:
    v85 = stack[-4];
    if (v85 == nil) goto v95;
    v85 = stack[-12];
    if (v85 == nil) goto v96;
    v85 = stack[-12];
    v85 = qcar(v85);
    stack[-9] = v85;
    v85 = stack[-6];
    if (v85 == nil) goto v97;
    v86 = stack[-9];
    v85 = stack[-10];
    fn = elt(env, 6); /* evsum */
    v85 = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    stack[-9] = v85;
    goto v97;

v97:
    v85 = qvalue(elt(env, 3)); /* nil */
    stack[-4] = v85;
    goto v95;

v95:
    v86 = stack[-16];
    v85 = stack[-9];
    fn = elt(env, 7); /* evcomp */
    v85 = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    v87 = v85;
    v86 = v87;
    v85 = (Lisp_Object)17; /* 1 */
    if (v86 == v85) goto v98;
    v86 = v87;
    v85 = (Lisp_Object)-15; /* -1 */
    if (v86 == v85) goto v99;
    v85 = qvalue(elt(env, 1)); /* !*gcd */
    if (v85 == nil) goto v100;
    v85 = stack[-15];
    v85 = qcdr(v85);
    v86 = qcar(v85);
    v85 = (Lisp_Object)-1599; /* -100 */
    fn = elt(env, 4); /* vbcsize */
    v85 = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    if (v85 == nil) goto v101;
    v85 = stack[-12];
    v85 = qcdr(v85);
    v86 = qcar(v85);
    v85 = (Lisp_Object)-1599; /* -100 */
    fn = elt(env, 4); /* vbcsize */
    v85 = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    v85 = (v85 == nil ? lisp_true : nil);
    goto v102;

v102:
    if (v85 == nil) goto v100;
    v85 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 1)) = v85; /* !*gcd */
    goto v100;

v100:
    v85 = stack[-15];
    v85 = qcdr(v85);
    v86 = qcar(v85);
    v85 = stack[-14];
    fn = elt(env, 8); /* bcprod */
    stack[-1] = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    v85 = stack[-12];
    v85 = qcdr(v85);
    v86 = qcar(v85);
    v85 = stack[-11];
    fn = elt(env, 8); /* bcprod */
    v85 = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    fn = elt(env, 9); /* bcsum */
    v85 = (*qfn2(fn))(qenv(fn), stack[-1], v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    stack[-1] = v85;
    v85 = stack[-1];
    fn = elt(env, 10); /* bczero!? */
    v85 = (*qfn1(fn))(qenv(fn), v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    if (!(v85 == nil)) goto v103;
    v87 = stack[-16];
    v86 = stack[-1];
    v85 = qvalue(elt(env, 3)); /* nil */
    v85 = list2star(v87, v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    v85 = Lnconc(nil, stack[-2], v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    stack[-3] = v85;
    v85 = stack[-3];
    v85 = qcdr(v85);
    v85 = qcdr(v85);
    stack[-2] = v85;
    goto v103;

v103:
    v85 = stack[-15];
    v85 = qcdr(v85);
    v85 = qcdr(v85);
    stack[-15] = v85;
    v85 = stack[-12];
    v85 = qcdr(v85);
    v85 = qcdr(v85);
    stack[-12] = v85;
    v85 = qvalue(elt(env, 2)); /* t */
    stack[-4] = v85;
    stack[-5] = v85;
    goto v104;

v104:
    v85 = stack[-8];
    if (!(v85 == nil)) goto v91;
    v85 = stack[-3];
    stack[-2] = v85;
    stack[-8] = v85;
    goto v91;

v101:
    v85 = qvalue(elt(env, 2)); /* t */
    goto v102;

v99:
    v85 = qvalue(elt(env, 1)); /* !*gcd */
    if (v85 == nil) goto v105;
    v85 = stack[-12];
    v85 = qcdr(v85);
    v86 = qcar(v85);
    v85 = (Lisp_Object)-1599; /* -100 */
    fn = elt(env, 4); /* vbcsize */
    v85 = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    if (!(v85 == nil)) goto v105;
    v85 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 1)) = v85; /* !*gcd */
    goto v105;

v105:
    v85 = stack[-12];
    v85 = qcdr(v85);
    v86 = qcar(v85);
    v85 = stack[-11];
    fn = elt(env, 8); /* bcprod */
    v85 = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    stack[-1] = v85;
    v85 = stack[-1];
    fn = elt(env, 10); /* bczero!? */
    v85 = (*qfn1(fn))(qenv(fn), v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    if (!(v85 == nil)) goto v106;
    v87 = stack[-9];
    v86 = stack[-1];
    v85 = qvalue(elt(env, 3)); /* nil */
    v85 = list2star(v87, v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    v85 = Lnconc(nil, stack[-2], v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    stack[-3] = v85;
    v85 = stack[-3];
    v85 = qcdr(v85);
    v85 = qcdr(v85);
    stack[-2] = v85;
    goto v106;

v106:
    v85 = stack[-12];
    v85 = qcdr(v85);
    v85 = qcdr(v85);
    stack[-12] = v85;
    v85 = qvalue(elt(env, 2)); /* t */
    stack[-4] = v85;
    goto v104;

v98:
    v85 = qvalue(elt(env, 1)); /* !*gcd */
    if (v85 == nil) goto v107;
    v85 = stack[-15];
    v85 = qcdr(v85);
    v86 = qcar(v85);
    v85 = (Lisp_Object)-1599; /* -100 */
    fn = elt(env, 4); /* vbcsize */
    v85 = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    if (!(v85 == nil)) goto v107;
    v85 = qvalue(elt(env, 3)); /* nil */
    qvalue(elt(env, 1)) = v85; /* !*gcd */
    goto v107;

v107:
    v85 = stack[-15];
    v85 = qcdr(v85);
    v86 = qcar(v85);
    v85 = stack[-14];
    fn = elt(env, 8); /* bcprod */
    v85 = (*qfn2(fn))(qenv(fn), v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    stack[-1] = v85;
    v85 = stack[-1];
    fn = elt(env, 10); /* bczero!? */
    v85 = (*qfn1(fn))(qenv(fn), v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    if (!(v85 == nil)) goto v108;
    v87 = stack[-16];
    v86 = stack[-1];
    v85 = qvalue(elt(env, 3)); /* nil */
    v85 = list2star(v87, v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    v85 = Lnconc(nil, stack[-2], v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    stack[-3] = v85;
    v85 = stack[-3];
    v85 = qcdr(v85);
    v85 = qcdr(v85);
    stack[-2] = v85;
    goto v108;

v108:
    v85 = stack[-15];
    v85 = qcdr(v85);
    v85 = qcdr(v85);
    stack[-15] = v85;
    v85 = qvalue(elt(env, 2)); /* t */
    stack[-5] = v85;
    goto v104;

v96:
    stack[-1] = stack[-8];
    stack[-2] = stack[-15];
    v87 = stack[-13];
    v86 = stack[-14];
    v85 = qvalue(elt(env, 3)); /* nil */
    v85 = list2star(v87, v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    fn = elt(env, 11); /* dipprod */
    v85 = (*qfn2(fn))(qenv(fn), stack[-2], v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    v85 = Lnconc(nil, stack[-1], v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    goto v109;

v109:
    qvalue(elt(env, 1)) = stack[0]; /* !*gcd */
    { popv(18); return onevalue(v85); }

v93:
    v85 = stack[-12];
    if (v85 == nil) goto v110;
    stack[-1] = stack[-8];
    stack[-2] = stack[-12];
    v87 = stack[-10];
    v86 = stack[-11];
    v85 = qvalue(elt(env, 3)); /* nil */
    v85 = list2star(v87, v86, v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    fn = elt(env, 11); /* dipprod */
    v85 = (*qfn2(fn))(qenv(fn), stack[-2], v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    v85 = Lnconc(nil, stack[-1], v85);
    nil = C_nil;
    if (exception_pending()) goto v88;
    env = stack[-17];
    goto v109;

v110:
    v85 = stack[-8];
    goto v109;

v89:
    v85 = nil;
    goto v90;
/* error exit handlers */
v88:
    env = stack[-17];
    qvalue(elt(env, 1)) = stack[0]; /* !*gcd */
    popv(18);
    return nil;
}



/* Code for getphystypecar */

static Lisp_Object CC_getphystypecar(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v41, v10;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for getphystypecar");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v10 = v0;
/* end of prologue */
    v41 = v10;
    if (!consp(v41)) goto v111;
    v41 = v10;
    v41 = qcar(v41);
    {
        fn = elt(env, 2); /* getphystype */
        return (*qfn1(fn))(qenv(fn), v41);
    }

v111:
    v41 = qvalue(elt(env, 1)); /* nil */
    return onevalue(v41);
}



/* Code for red!=cancelsimp */

static Lisp_Object CC_redMcancelsimp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v89, v112;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for red=cancelsimp");
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
    v112 = stack[-1];
    v89 = stack[0];
    fn = elt(env, 2); /* red_better */
    v89 = (*qfn2(fn))(qenv(fn), v112, v89);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-2];
    if (v89 == nil) goto v5;
    v89 = stack[-1];
    fn = elt(env, 3); /* bas_dpoly */
    v89 = (*qfn1(fn))(qenv(fn), v89);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-2];
    fn = elt(env, 4); /* dp_lmon */
    stack[-1] = (*qfn1(fn))(qenv(fn), v89);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-2];
    v89 = stack[0];
    fn = elt(env, 3); /* bas_dpoly */
    v89 = (*qfn1(fn))(qenv(fn), v89);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-2];
    fn = elt(env, 4); /* dp_lmon */
    v89 = (*qfn1(fn))(qenv(fn), v89);
    nil = C_nil;
    if (exception_pending()) goto v113;
    env = stack[-2];
    {
        Lisp_Object v114 = stack[-1];
        popv(3);
        fn = elt(env, 5); /* mo_vdivides!? */
        return (*qfn2(fn))(qenv(fn), v114, v89);
    }

v5:
    v89 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v89); }
/* error exit handlers */
v113:
    popv(3);
    return nil;
}



/* Code for dfprintfn */

static Lisp_Object CC_dfprintfn(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v120, v121, v122;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dfprintfn");
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
    v120 = v0;
/* end of prologue */
    v121 = qvalue(elt(env, 1)); /* !*nat */
    if (v121 == nil) goto v123;
    v121 = qvalue(elt(env, 3)); /* !*fort */
    if (!(v121 == nil)) goto v79;
    v121 = qvalue(elt(env, 4)); /* !*dfprint */
    v121 = (v121 == nil ? lisp_true : nil);
    goto v79;

v79:
    if (v121 == nil) goto v114;
    v120 = elt(env, 5); /* failed */
    { popv(1); return onevalue(v120); }

v114:
    v121 = elt(env, 6); /* !!df!! */
    v120 = qcdr(v120);
    v122 = cons(v121, v120);
    nil = C_nil;
    if (exception_pending()) goto v124;
    env = stack[0];
    v121 = (Lisp_Object)1; /* 0 */
    v120 = qvalue(elt(env, 7)); /* nil */
    fn = elt(env, 8); /* layout!-formula */
    v120 = (*qfnn(fn))(qenv(fn), 3, v122, v121, v120);
    nil = C_nil;
    if (exception_pending()) goto v124;
    env = stack[0];
    v121 = v120;
    v120 = v121;
    if (v120 == nil) goto v80;
    v120 = v121;
    fn = elt(env, 9); /* putpline */
    v120 = (*qfn1(fn))(qenv(fn), v120);
    nil = C_nil;
    if (exception_pending()) goto v124;
    v120 = nil;
    { popv(1); return onevalue(v120); }

v80:
    v120 = elt(env, 5); /* failed */
    { popv(1); return onevalue(v120); }

v123:
    v121 = qvalue(elt(env, 2)); /* t */
    goto v79;
/* error exit handlers */
v124:
    popv(1);
    return nil;
}



/* Code for b!:ordexp */

static Lisp_Object CC_bTordexp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v115, v116;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for b:ordexp");
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

v5:
    v115 = stack[-1];
    if (v115 == nil) goto v123;
    v115 = stack[-1];
    v116 = qcar(v115);
    v115 = stack[0];
    v115 = qcar(v115);
    v115 = (Lisp_Object)greaterp2(v116, v115);
    nil = C_nil;
    if (exception_pending()) goto v80;
    v115 = v115 ? lisp_true : nil;
    env = stack[-2];
    if (v115 == nil) goto v78;
    v115 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v115); }

v78:
    v115 = stack[-1];
    v116 = qcar(v115);
    v115 = stack[0];
    v115 = qcar(v115);
    if (equal(v116, v115)) goto v109;
    v115 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v115); }

v109:
    v115 = stack[-1];
    v115 = qcdr(v115);
    stack[-1] = v115;
    v115 = stack[0];
    v115 = qcdr(v115);
    stack[0] = v115;
    goto v5;

v123:
    v115 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v115); }
/* error exit handlers */
v80:
    popv(3);
    return nil;
}



/* Code for subf1 */

static Lisp_Object CC_subf1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v231, v232, v233;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for subf1");
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
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-10] = v1;
    stack[-11] = v0;
/* end of prologue */
    v231 = stack[-11];
    if (v231 == nil) goto v234;
    v231 = stack[-11];
    if (!consp(v231)) goto v84;
    v231 = stack[-11];
    v231 = qcar(v231);
    v231 = (consp(v231) ? nil : lisp_true);
    goto v65;

v65:
    if (v231 == nil) goto v235;
    v231 = stack[-11];
    if (!consp(v231)) goto v112;
    v232 = qvalue(elt(env, 3)); /* dmode!* */
    v231 = stack[-11];
    v231 = qcar(v231);
    if (v232 == v231) goto v236;
    v231 = qvalue(elt(env, 1)); /* nil */
    goto v237;

v237:
    if (v231 == nil) goto v238;
    v231 = stack[-11];
    {
        popv(14);
        fn = elt(env, 12); /* !*d2q */
        return (*qfn1(fn))(qenv(fn), v231);
    }

v238:
    v231 = stack[-11];
    fn = elt(env, 13); /* prepf */
    v231 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v239;
    env = stack[-13];
    {
        popv(14);
        fn = elt(env, 14); /* simp */
        return (*qfn1(fn))(qenv(fn), v231);
    }

v236:
    v232 = qvalue(elt(env, 3)); /* dmode!* */
    v231 = elt(env, 4); /* resimplify */
    v231 = Lflagp(nil, v232, v231);
    env = stack[-13];
    v231 = (v231 == nil ? lisp_true : nil);
    goto v237;

v112:
    v231 = qvalue(elt(env, 3)); /* dmode!* */
    if (v231 == nil) goto v117;
    v231 = stack[-11];
    {
        popv(14);
        fn = elt(env, 15); /* simpatom */
        return (*qfn1(fn))(qenv(fn), v231);
    }

v117:
    v232 = stack[-11];
    v231 = (Lisp_Object)17; /* 1 */
    popv(14);
    return cons(v232, v231);

v235:
    stack[-7] = qvalue(elt(env, 5)); /* varstack!* */
    qvalue(elt(env, 5)) = nil; /* varstack!* */
    stack[-3] = nil;
    stack[-2] = nil;
    v231 = (Lisp_Object)1; /* 0 */
    stack[-12] = v231;
    v232 = qvalue(elt(env, 1)); /* nil */
    v231 = (Lisp_Object)17; /* 1 */
    v231 = cons(v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-1] = v231;
    goto v75;

v75:
    v231 = stack[-11];
    v231 = qcar(v231);
    v231 = qcar(v231);
    v231 = qcar(v231);
    stack[-9] = v231;
    v231 = qvalue(elt(env, 1)); /* nil */
    stack[0] = v231;
    v232 = stack[-9];
    v231 = stack[-10];
    v231 = Lassoc(nil, v232, v231);
    if (v231 == nil) goto v63;
    v232 = stack[-9];
    v231 = qvalue(elt(env, 6)); /* wtl!* */
    v231 = Lassoc(nil, v232, v231);
    stack[0] = v231;
    if (v231 == nil) goto v63;
    v231 = stack[0];
    v231 = qcdr(v231);
    stack[0] = v231;
    goto v63;

v63:
    v232 = stack[-9];
    v231 = qvalue(elt(env, 7)); /* asymplis!* */
    v231 = Lassoc(nil, v232, v231);
    stack[-8] = v231;
    if (v231 == nil) goto v241;
    v231 = stack[-8];
    v231 = qcdr(v231);
    stack[-8] = v231;
    goto v241;

v241:
    v231 = stack[-11];
    if (v231 == nil) goto v242;
    v232 = stack[-11];
    v231 = stack[-9];
    fn = elt(env, 16); /* degr */
    v232 = (*qfn2(fn))(qenv(fn), v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-12] = v232;
    v231 = (Lisp_Object)1; /* 0 */
    v231 = (v232 == v231 ? lisp_true : nil);
    goto v56;

v56:
    if (v231 == nil) goto v243;
    v231 = qvalue(elt(env, 1)); /* nil */
    v233 = v231;
    goto v42;

v42:
    v231 = stack[-10];
    if (v231 == nil) goto v244;
    v231 = stack[-10];
    v231 = qcar(v231);
    v232 = qcar(v231);
    v231 = stack[-10];
    v231 = qcar(v231);
    v231 = qcdr(v231);
    if (equal(v232, v231)) goto v245;
    v231 = stack[-10];
    v231 = qcar(v231);
    v232 = v233;
    v231 = cons(v231, v232);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v233 = v231;
    goto v245;

v245:
    v231 = stack[-10];
    v231 = qcdr(v231);
    stack[-10] = v231;
    goto v42;

v244:
    v231 = v233;
    v231 = Lnreverse(nil, v231);
    env = stack[-13];
    stack[-10] = v231;
    v231 = stack[-9];
    if (!consp(v231)) goto v105;
    v231 = stack[-9];
    v231 = qcar(v231);
    v231 = (consp(v231) ? nil : lisp_true);
    v231 = (v231 == nil ? lisp_true : nil);
    goto v246;

v246:
    if (v231 == nil) goto v247;
    v231 = stack[-9];
    fn = elt(env, 13); /* prepf */
    v231 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-9] = v231;
    goto v247;

v247:
    v231 = stack[-10];
    if (v231 == nil) goto v248;
    v232 = stack[-10];
    v231 = stack[-9];
    fn = elt(env, 17); /* subsublis */
    v232 = (*qfn2(fn))(qenv(fn), v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-4] = v232;
    v231 = stack[-9];
    if (equal(v232, v231)) goto v249;
    v231 = qvalue(elt(env, 1)); /* nil */
    goto v250;

v250:
    if (!(v231 == nil)) goto v251;

v252:
    v232 = (Lisp_Object)17; /* 1 */
    v231 = (Lisp_Object)17; /* 1 */
    v231 = cons(v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-6] = v231;
    v231 = (Lisp_Object)1; /* 0 */
    stack[-12] = v231;
    v231 = stack[-3];
    if (v231 == nil) goto v253;
    v231 = stack[-3];
    v231 = qcar(v231);
    v231 = qcar(v231);
    v231 = qcdr(v231);
    v231 = Lminusp(nil, v231);
    env = stack[-13];
    if (v231 == nil) goto v253;
    v231 = stack[-4];
    v231 = ncons(v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    fn = elt(env, 18); /* simprecip */
    v231 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-5] = v231;
    goto v254;

v254:
    v231 = stack[-3];
    v232 = qcar(v231);
    v231 = stack[-2];
    v231 = cons(v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-2] = v231;
    v231 = stack[-3];
    v231 = qcdr(v231);
    stack[-3] = v231;
    v231 = stack[-3];
    if (v231 == nil) goto v255;
    v231 = stack[-3];
    v231 = qcar(v231);
    v231 = qcar(v231);
    v232 = qcdr(v231);
    v231 = (Lisp_Object)1; /* 0 */
    v231 = (Lisp_Object)lessp2(v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    v231 = v231 ? lisp_true : nil;
    env = stack[-13];
    if (!(v231 == nil)) goto v254;

v255:
    v231 = stack[-2];
    v231 = qcar(v231);
    v231 = qcar(v231);
    v231 = qcdr(v231);
    v231 = negate(v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-8] = v231;
    stack[0] = stack[-5];
    v232 = stack[-8];
    v231 = stack[-12];
    v231 = difference2(v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    fn = elt(env, 19); /* exptsq */
    v231 = (*qfn2(fn))(qenv(fn), stack[0], v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    fn = elt(env, 20); /* subs2 */
    v232 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = stack[-6];
    fn = elt(env, 21); /* multsq */
    v231 = (*qfn2(fn))(qenv(fn), v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-6] = v231;
    v231 = stack[-8];
    stack[-12] = v231;
    stack[0] = stack[-6];
    v231 = stack[-2];
    v231 = qcar(v231);
    v232 = qcdr(v231);
    v231 = stack[-10];
    v231 = CC_subf1(env, v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    fn = elt(env, 21); /* multsq */
    v232 = (*qfn2(fn))(qenv(fn), stack[0], v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = stack[-1];
    fn = elt(env, 22); /* addsq */
    v231 = (*qfn2(fn))(qenv(fn), v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-1] = v231;
    v231 = stack[-2];
    v231 = qcdr(v231);
    stack[-2] = v231;
    v231 = stack[-2];
    if (!(v231 == nil)) goto v255;
    v231 = stack[-3];
    if (!(v231 == nil)) goto v252;

v94:
    v231 = qvalue(elt(env, 1)); /* nil */
    stack[-3] = v231;
    v231 = stack[-11];
    if (v231 == nil) goto v256;
    v231 = stack[-11];
    if (!consp(v231)) goto v257;
    v231 = stack[-11];
    v231 = qcar(v231);
    v231 = (consp(v231) ? nil : lisp_true);
    goto v258;

v258:
    if (v231 == nil) goto v75;
    v232 = stack[-11];
    v231 = stack[-10];
    v232 = CC_subf1(env, v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = stack[-1];
    fn = elt(env, 22); /* addsq */
    v231 = (*qfn2(fn))(qenv(fn), v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    goto v74;

v74:
    qvalue(elt(env, 5)) = stack[-7]; /* varstack!* */
    { popv(14); return onevalue(v231); }

v257:
    v231 = qvalue(elt(env, 2)); /* t */
    goto v258;

v256:
    v231 = stack[-1];
    goto v74;

v253:
    v231 = stack[-4];
    fn = elt(env, 23); /* getrtype */
    v232 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-5] = v232;
    v231 = elt(env, 9); /* yetunknowntype */
    if (!(v232 == v231)) goto v259;
    v232 = stack[-4];
    v231 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 24); /* eval!-yetunknowntypeexpr */
    v231 = (*qfn2(fn))(qenv(fn), v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-4] = v231;
    fn = elt(env, 23); /* getrtype */
    v231 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-5] = v231;
    goto v259;

v259:
    v231 = stack[-5];
    if (v231 == nil) goto v260;
    v232 = stack[-5];
    v231 = elt(env, 10); /* list */
    if (v232 == v231) goto v260;
    v232 = stack[-5];
    v231 = stack[-4];
    v232 = list2(v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = elt(env, 11); /* "substituted expression" */
    fn = elt(env, 25); /* typerr */
    v231 = (*qfn2(fn))(qenv(fn), v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    goto v260;

v260:
    v231 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 26); /* setkorder */
    v231 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[0] = v231;
    v231 = stack[-4];
    fn = elt(env, 14); /* simp */
    v231 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-5] = v231;
    v231 = stack[0];
    fn = elt(env, 26); /* setkorder */
    v231 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = stack[-5];
    v231 = qcar(v231);
    fn = elt(env, 27); /* reorder */
    stack[0] = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = stack[-5];
    v231 = qcdr(v231);
    fn = elt(env, 27); /* reorder */
    v231 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = cons(stack[0], v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-5] = v231;
    v231 = stack[-10];
    if (v231 == nil) goto v261;
    v231 = qvalue(elt(env, 1)); /* nil */
    goto v262;

v262:
    if (!(v231 == nil)) goto v251;
    v231 = stack[-5];
    v231 = qcar(v231);
    if (v231 == nil) goto v94;
    v231 = stack[-3];
    stack[-4] = v231;
    goto v263;

v263:
    v231 = stack[-4];
    if (v231 == nil) goto v94;
    v231 = stack[-4];
    v231 = qcar(v231);
    stack[-3] = v231;
    v231 = stack[-3];
    v231 = qcar(v231);
    v231 = qcdr(v231);
    stack[-8] = v231;
    stack[0] = stack[-5];
    v232 = stack[-8];
    v231 = stack[-12];
    v231 = difference2(v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    fn = elt(env, 19); /* exptsq */
    v231 = (*qfn2(fn))(qenv(fn), stack[0], v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    fn = elt(env, 20); /* subs2 */
    v232 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = stack[-6];
    fn = elt(env, 21); /* multsq */
    v231 = (*qfn2(fn))(qenv(fn), v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-6] = v231;
    v231 = stack[-8];
    stack[-12] = v231;
    stack[0] = stack[-6];
    v231 = stack[-3];
    v232 = qcdr(v231);
    v231 = stack[-10];
    v231 = CC_subf1(env, v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    fn = elt(env, 21); /* multsq */
    v232 = (*qfn2(fn))(qenv(fn), stack[0], v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = stack[-1];
    fn = elt(env, 22); /* addsq */
    v231 = (*qfn2(fn))(qenv(fn), v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-1] = v231;
    v231 = stack[-4];
    v231 = qcdr(v231);
    stack[-4] = v231;
    goto v263;

v251:
    v231 = stack[-9];
    fn = elt(env, 28); /* sub2chk */
    v231 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = stack[-3];
    stack[-4] = v231;
    goto v264;

v264:
    v231 = stack[-4];
    if (v231 == nil) goto v94;
    v231 = stack[-4];
    v231 = qcar(v231);
    stack[-3] = v231;
    v231 = stack[-3];
    v232 = qcar(v231);
    v231 = (Lisp_Object)17; /* 1 */
    v231 = cons(v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v232 = ncons(v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = (Lisp_Object)17; /* 1 */
    stack[0] = cons(v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = stack[-3];
    v232 = qcdr(v231);
    v231 = stack[-10];
    v231 = CC_subf1(env, v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    fn = elt(env, 21); /* multsq */
    v232 = (*qfn2(fn))(qenv(fn), stack[0], v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = stack[-1];
    fn = elt(env, 22); /* addsq */
    v231 = (*qfn2(fn))(qenv(fn), v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-1] = v231;
    v231 = stack[-4];
    v231 = qcdr(v231);
    stack[-4] = v231;
    goto v264;

v261:
    v231 = stack[-5];
    fn = elt(env, 29); /* kernp */
    v231 = (*qfn1(fn))(qenv(fn), v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    if (v231 == nil) goto v265;
    v231 = stack[-5];
    v231 = qcar(v231);
    v231 = qcar(v231);
    v231 = qcar(v231);
    v232 = qcar(v231);
    v231 = stack[-9];
    v231 = (v232 == v231 ? lisp_true : nil);
    goto v262;

v265:
    v231 = qvalue(elt(env, 1)); /* nil */
    goto v262;

v249:
    v232 = stack[-9];
    v231 = qvalue(elt(env, 7)); /* asymplis!* */
    v231 = Lassoc(nil, v232, v231);
    v231 = (v231 == nil ? lisp_true : nil);
    goto v250;

v248:
    v232 = stack[-9];
    v231 = elt(env, 8); /* k!* */
    if (v232 == v231) goto v266;
    v231 = stack[-9];
    goto v267;

v267:
    stack[-4] = v231;
    goto v252;

v266:
    v231 = (Lisp_Object)17; /* 1 */
    goto v267;

v105:
    v231 = qvalue(elt(env, 1)); /* nil */
    goto v246;

v243:
    v231 = stack[-8];
    if (v231 == nil) goto v268;
    v232 = stack[-12];
    v231 = stack[-8];
    v231 = (Lisp_Object)lessp2(v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    v231 = v231 ? lisp_true : nil;
    env = stack[-13];
    goto v269;

v269:
    if (v231 == nil) goto v270;
    v231 = stack[-11];
    v232 = qcar(v231);
    v231 = stack[0];
    fn = elt(env, 30); /* wtchk */
    v232 = (*qfn2(fn))(qenv(fn), v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    v231 = stack[-3];
    v231 = cons(v232, v231);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-13];
    stack[-3] = v231;
    goto v270;

v270:
    v231 = stack[-11];
    v231 = qcdr(v231);
    stack[-11] = v231;
    goto v241;

v268:
    v231 = qvalue(elt(env, 2)); /* t */
    goto v269;

v242:
    v231 = qvalue(elt(env, 2)); /* t */
    goto v56;

v84:
    v231 = qvalue(elt(env, 2)); /* t */
    goto v65;

v234:
    v232 = qvalue(elt(env, 1)); /* nil */
    v231 = (Lisp_Object)17; /* 1 */
    popv(14);
    return cons(v232, v231);
/* error exit handlers */
v240:
    env = stack[-13];
    qvalue(elt(env, 5)) = stack[-7]; /* varstack!* */
    popv(14);
    return nil;
v239:
    popv(14);
    return nil;
}



/* Code for reduce!-degree!-mod!-p */

static Lisp_Object CC_reduceKdegreeKmodKp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v74, v75;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for reduce-degree-mod-p");
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
    v74 = stack[-2];
    v74 = qcar(v74);
    v74 = qcdr(v74);
    {   int32_t w = int_of_fixnum(v74);
        if (w != 0) w = current_modulus - w;
        v75 = fixnum_of_int(w);
    }
    v74 = stack[-1];
    v74 = qcar(v74);
    v74 = qcdr(v74);
    v74 = Lmodular_quotient(nil, v75, v74);
    nil = C_nil;
    if (exception_pending()) goto v251;
    env = stack[-4];
    stack[-3] = v74;
    v74 = stack[-2];
    v74 = qcar(v74);
    v74 = qcar(v74);
    v75 = qcdr(v74);
    v74 = stack[-1];
    v74 = qcar(v74);
    v74 = qcar(v74);
    v74 = qcdr(v74);
    v74 = (Lisp_Object)(int32_t)((int32_t)v75 - (int32_t)v74 + TAG_FIXNUM);
    stack[0] = v74;
    v75 = stack[0];
    v74 = (Lisp_Object)1; /* 0 */
    if (v75 == v74) goto v229;
    v74 = stack[-2];
    stack[-2] = qcdr(v74);
    v74 = stack[-1];
    v74 = qcar(v74);
    v74 = qcar(v74);
    v74 = qcar(v74);
    fn = elt(env, 1); /* fkern */
    v75 = (*qfn1(fn))(qenv(fn), v74);
    nil = C_nil;
    if (exception_pending()) goto v251;
    env = stack[-4];
    v74 = stack[0];
    fn = elt(env, 2); /* getpower */
    v75 = (*qfn2(fn))(qenv(fn), v75, v74);
    nil = C_nil;
    if (exception_pending()) goto v251;
    env = stack[-4];
    v74 = stack[-3];
    v75 = cons(v75, v74);
    nil = C_nil;
    if (exception_pending()) goto v251;
    env = stack[-4];
    v74 = stack[-1];
    v74 = qcdr(v74);
    fn = elt(env, 3); /* times!-term!-mod!-p */
    v74 = (*qfn2(fn))(qenv(fn), v75, v74);
    nil = C_nil;
    if (exception_pending()) goto v251;
    env = stack[-4];
    {
        Lisp_Object v276 = stack[-2];
        popv(5);
        fn = elt(env, 4); /* plus!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v276, v74);
    }

v229:
    v74 = stack[-2];
    stack[0] = qcdr(v74);
    v74 = stack[-1];
    v75 = qcdr(v74);
    v74 = stack[-3];
    fn = elt(env, 5); /* multiply!-by!-constant!-mod!-p */
    v74 = (*qfn2(fn))(qenv(fn), v75, v74);
    nil = C_nil;
    if (exception_pending()) goto v251;
    env = stack[-4];
    {
        Lisp_Object v277 = stack[0];
        popv(5);
        fn = elt(env, 4); /* plus!-mod!-p */
        return (*qfn2(fn))(qenv(fn), v277, v74);
    }
/* error exit handlers */
v251:
    popv(5);
    return nil;
}



/* Code for monomdivide */

static Lisp_Object CC_monomdivide(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v281, v282, v283;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for monomdivide");
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
    stack[-2] = nil;
    v281 = (Lisp_Object)17; /* 1 */
    v281 = Lmkvect(nil, v281);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-6];
    stack[-5] = v281;
    stack[-1] = stack[-5];
    stack[0] = (Lisp_Object)1; /* 0 */
    v282 = stack[-4];
    v281 = (Lisp_Object)1; /* 0 */
    v283 = *(Lisp_Object *)((char *)v282 + (CELL-TAG_VECTOR) + ((int32_t)v281/(16/CELL)));
    v282 = stack[-3];
    v281 = (Lisp_Object)1; /* 0 */
    v281 = *(Lisp_Object *)((char *)v282 + (CELL-TAG_VECTOR) + ((int32_t)v281/(16/CELL)));
    v281 = difference2(v283, v281);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-6];
    *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v281;
    v282 = stack[-4];
    v281 = (Lisp_Object)17; /* 1 */
    v281 = *(Lisp_Object *)((char *)v282 + (CELL-TAG_VECTOR) + ((int32_t)v281/(16/CELL)));
    stack[0] = v281;
    v282 = stack[-3];
    v281 = (Lisp_Object)17; /* 1 */
    v281 = *(Lisp_Object *)((char *)v282 + (CELL-TAG_VECTOR) + ((int32_t)v281/(16/CELL)));
    stack[-1] = v281;
    goto v273;

v273:
    v281 = stack[0];
    v281 = qcar(v281);
    if (v281 == nil) goto v285;
    v281 = stack[0];
    v282 = qcar(v281);
    v281 = stack[-1];
    v281 = qcar(v281);
    if (equal(v282, v281)) goto v110;
    v281 = stack[0];
    v282 = qcar(v281);
    v281 = stack[-2];
    v281 = cons(v282, v281);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-6];
    stack[-2] = v281;
    v281 = stack[0];
    v281 = qcdr(v281);
    stack[0] = v281;
    goto v273;

v110:
    v281 = stack[0];
    v281 = qcdr(v281);
    stack[0] = v281;
    v281 = stack[-1];
    v281 = qcdr(v281);
    stack[-1] = v281;
    goto v273;

v285:
    v282 = qvalue(elt(env, 1)); /* nil */
    v281 = stack[-2];
    v281 = cons(v282, v281);
    nil = C_nil;
    if (exception_pending()) goto v284;
    env = stack[-6];
    stack[-2] = v281;
    stack[-1] = stack[-5];
    stack[0] = (Lisp_Object)17; /* 1 */
    v281 = stack[-2];
    v281 = Lreverse(nil, v281);
    nil = C_nil;
    if (exception_pending()) goto v284;
    *(Lisp_Object *)((char *)stack[-1] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v281;
    { Lisp_Object res = stack[-5]; popv(7); return onevalue(res); }
/* error exit handlers */
v284:
    popv(7);
    return nil;
}



/* Code for smemberlp */

static Lisp_Object CC_smemberlp(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v115, v116;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for smemberlp");
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

v286:
    v115 = stack[0];
    if (v115 == nil) goto v5;
    v115 = stack[0];
    if (!consp(v115)) goto v34;
    v116 = stack[-1];
    v115 = stack[0];
    v115 = qcar(v115);
    v115 = CC_smemberlp(env, v116, v115);
    nil = C_nil;
    if (exception_pending()) goto v80;
    env = stack[-2];
    if (!(v115 == nil)) { popv(3); return onevalue(v115); }
    v116 = stack[-1];
    v115 = stack[0];
    v115 = qcdr(v115);
    stack[-1] = v116;
    stack[0] = v115;
    goto v286;

v34:
    v116 = stack[0];
    v115 = stack[-1];
    v115 = Lmember(nil, v116, v115);
    { popv(3); return onevalue(v115); }

v5:
    v115 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v115); }
/* error exit handlers */
v80:
    popv(3);
    return nil;
}



/* Code for get!-denom!-ll */

static Lisp_Object CC_getKdenomKll(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v82, v83;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for get-denom-ll");
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
    goto v119;

v119:
    v82 = stack[-2];
    if (v82 == nil) goto v234;
    v82 = stack[-2];
    stack[0] = qcar(v82);
    v82 = stack[-1];
    v82 = qcar(v82);
    fn = elt(env, 1); /* get!-denom!-l */
    v82 = (*qfn1(fn))(qenv(fn), v82);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-4];
    fn = elt(env, 2); /* lcmn */
    v83 = (*qfn2(fn))(qenv(fn), stack[0], v82);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-4];
    v82 = stack[-3];
    v82 = cons(v83, v82);
    nil = C_nil;
    if (exception_pending()) goto v116;
    env = stack[-4];
    stack[-3] = v82;
    v82 = stack[-2];
    v82 = qcdr(v82);
    stack[-2] = v82;
    v82 = stack[-1];
    v82 = qcdr(v82);
    stack[-1] = v82;
    goto v119;

v234:
    v82 = stack[-3];
    {
        popv(5);
        fn = elt(env, 3); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v82);
    }
/* error exit handlers */
v116:
    popv(5);
    return nil;
}



/* Code for aex_subrat1 */

static Lisp_Object MS_CDECL CC_aex_subrat1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v89, v112, v275;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "aex_subrat1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for aex_subrat1");
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
    v89 = stack[-2];
    fn = elt(env, 2); /* aex_ex */
    v275 = (*qfn1(fn))(qenv(fn), v89);
    nil = C_nil;
    if (exception_pending()) goto v288;
    env = stack[-3];
    v112 = stack[-1];
    v89 = stack[0];
    fn = elt(env, 3); /* ratpoly_subrat1 */
    stack[0] = (*qfnn(fn))(qenv(fn), 3, v275, v112, v89);
    nil = C_nil;
    if (exception_pending()) goto v288;
    env = stack[-3];
    v89 = stack[-2];
    fn = elt(env, 4); /* aex_ctx */
    v275 = (*qfn1(fn))(qenv(fn), v89);
    nil = C_nil;
    if (exception_pending()) goto v288;
    env = stack[-3];
    v112 = qvalue(elt(env, 1)); /* nil */
    v89 = qvalue(elt(env, 1)); /* nil */
    {
        Lisp_Object v289 = stack[0];
        popv(4);
        fn = elt(env, 5); /* aex_mk */
        return (*qfnn(fn))(qenv(fn), 4, v289, v275, v112, v89);
    }
/* error exit handlers */
v288:
    popv(4);
    return nil;
}



/* Code for bvarml */

static Lisp_Object CC_bvarml(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v113, v114;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for bvarml");
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
    v113 = elt(env, 1); /* "<bvar>" */
    fn = elt(env, 5); /* printout */
    v113 = (*qfn1(fn))(qenv(fn), v113);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-1];
    v113 = qvalue(elt(env, 2)); /* t */
    fn = elt(env, 6); /* indent!* */
    v113 = (*qfn1(fn))(qenv(fn), v113);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-1];
    v113 = stack[0];
    v113 = qcar(v113);
    fn = elt(env, 7); /* expression */
    v113 = (*qfn1(fn))(qenv(fn), v113);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-1];
    v113 = stack[0];
    v113 = qcdr(v113);
    v114 = qcar(v113);
    v113 = (Lisp_Object)17; /* 1 */
    if (v114 == v113) goto v34;
    v113 = stack[0];
    v113 = qcdr(v113);
    v113 = qcar(v113);
    v113 = ncons(v113);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-1];
    fn = elt(env, 8); /* degreeml */
    v113 = (*qfn1(fn))(qenv(fn), v113);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-1];
    goto v34;

v34:
    v113 = qvalue(elt(env, 3)); /* nil */
    fn = elt(env, 6); /* indent!* */
    v113 = (*qfn1(fn))(qenv(fn), v113);
    nil = C_nil;
    if (exception_pending()) goto v289;
    env = stack[-1];
    v113 = elt(env, 4); /* "</bvar>" */
    fn = elt(env, 5); /* printout */
    v113 = (*qfn1(fn))(qenv(fn), v113);
    nil = C_nil;
    if (exception_pending()) goto v289;
    v113 = nil;
    { popv(2); return onevalue(v113); }
/* error exit handlers */
v289:
    popv(2);
    return nil;
}



/* Code for evdif */

static Lisp_Object CC_evdif(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v291, v272, v224;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for evdif");
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
    v224 = nil;
    goto v123;

v123:
    v291 = stack[0];
    if (v291 == nil) goto v115;
    v291 = stack[-1];
    if (!(v291 == nil)) goto v78;
    v291 = elt(env, 2); /* (0) */
    stack[-1] = v291;
    goto v78;

v78:
    v291 = stack[-1];
    v272 = qcar(v291);
    v291 = stack[0];
    v291 = qcar(v291);
    v291 = (Lisp_Object)(int32_t)((int32_t)v272 - (int32_t)v291 + TAG_FIXNUM);
    v272 = v224;
    v291 = cons(v291, v272);
    nil = C_nil;
    if (exception_pending()) goto v121;
    env = stack[-2];
    v224 = v291;
    v291 = stack[-1];
    v291 = qcdr(v291);
    stack[-1] = v291;
    v291 = stack[0];
    v291 = qcdr(v291);
    stack[0] = v291;
    goto v123;

v115:
    v291 = v224;
    v272 = Lnreverse(nil, v291);
    v291 = stack[-1];
        popv(3);
        return Lnconc(nil, v272, v291);
/* error exit handlers */
v121:
    popv(3);
    return nil;
}



/* Code for groebsavelterm */

static Lisp_Object CC_groebsavelterm(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v90, v287;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for groebsavelterm");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v287 = v0;
/* end of prologue */
    v90 = qvalue(elt(env, 1)); /* !*groelterms */
    if (v90 == nil) goto v5;
    v90 = v287;
    if (v90 == nil) goto v15;
    v90 = v287;
    v90 = qcdr(v90);
    v90 = qcdr(v90);
    v90 = qcdr(v90);
    v90 = qcar(v90);
    v90 = (v90 == nil ? lisp_true : nil);
    goto v111;

v111:
    if (!(v90 == nil)) goto v5;
    v90 = v287;
    v90 = qcdr(v90);
    v90 = qcdr(v90);
    v90 = qcar(v90);
    {
        fn = elt(env, 3); /* groebsaveltermbc */
        return (*qfn1(fn))(qenv(fn), v90);
    }

v5:
    v90 = nil;
    return onevalue(v90);

v15:
    v90 = qvalue(elt(env, 2)); /* t */
    goto v111;
}



/* Code for coordp */

static Lisp_Object CC_coordp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v111, v15;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for coordp");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v111 = v0;
/* end of prologue */
    v15 = qvalue(elt(env, 1)); /* coord!* */
    v111 = Lmemq(nil, v111, v15);
    return onevalue(v111);
}



/* Code for indordn */

static Lisp_Object CC_indordn(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v118, v115;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for indordn");
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
    v115 = v0;
/* end of prologue */
    v118 = v115;
    if (v118 == nil) goto v4;
    v118 = v115;
    v118 = qcdr(v118);
    if (v118 == nil) { popv(2); return onevalue(v115); }
    v118 = v115;
    v118 = qcdr(v118);
    v118 = qcdr(v118);
    if (v118 == nil) goto v65;
    v118 = v115;
    stack[0] = qcar(v118);
    v118 = v115;
    v118 = qcdr(v118);
    v118 = CC_indordn(env, v118);
    nil = C_nil;
    if (exception_pending()) goto v230;
    env = stack[-1];
    {
        Lisp_Object v229 = stack[0];
        popv(2);
        fn = elt(env, 2); /* indordad */
        return (*qfn2(fn))(qenv(fn), v229, v118);
    }

v65:
    v118 = v115;
    v118 = qcar(v118);
    v115 = qcdr(v115);
    v115 = qcar(v115);
    {
        popv(2);
        fn = elt(env, 3); /* indord2 */
        return (*qfn2(fn))(qenv(fn), v118, v115);
    }

v4:
    v118 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v118); }
/* error exit handlers */
v230:
    popv(2);
    return nil;
}



/* Code for mk!-strand!-vertex2 */

static Lisp_Object MS_CDECL CC_mkKstrandKvertex2(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v14, v68, v57;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "mk-strand-vertex2");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mk-strand-vertex2");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v14 = v2;
    v68 = v1;
    v57 = v0;
/* end of prologue */
    return list3(v57, v68, v14);
}



/* Code for assert_uninstall */

static Lisp_Object CC_assert_uninstall(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v109, v91;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for assert_uninstall");
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
    v91 = v0;
/* end of prologue */
    v109 = qvalue(elt(env, 1)); /* !*assert */
    if (v109 == nil) goto v5;
    v109 = v91;
    stack[0] = v109;
    goto v111;

v111:
    v109 = stack[0];
    if (v109 == nil) goto v10;
    v109 = stack[0];
    v109 = qcar(v109);
    fn = elt(env, 3); /* assert_uninstall1 */
    v109 = (*qfn1(fn))(qenv(fn), v109);
    nil = C_nil;
    if (exception_pending()) goto v90;
    env = stack[-1];
    v109 = stack[0];
    v109 = qcdr(v109);
    stack[0] = v109;
    goto v111;

v10:
    v109 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v109); }

v5:
    v109 = nil;
    { popv(2); return onevalue(v109); }
/* error exit handlers */
v90:
    popv(2);
    return nil;
}



/* Code for groeb!=weight */

static Lisp_Object MS_CDECL CC_groebMweight(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v33;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "groeb=weight");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for groeb=weight");
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
    v33 = v0;
/* end of prologue */
    fn = elt(env, 1); /* mo_ecart */
    stack[-2] = (*qfn1(fn))(qenv(fn), v33);
    nil = C_nil;
    if (exception_pending()) goto v91;
    env = stack[-3];
    v33 = stack[-1];
    fn = elt(env, 2); /* bas_dpecart */
    stack[-1] = (*qfn1(fn))(qenv(fn), v33);
    nil = C_nil;
    if (exception_pending()) goto v91;
    env = stack[-3];
    v33 = stack[0];
    fn = elt(env, 2); /* bas_dpecart */
    v33 = (*qfn1(fn))(qenv(fn), v33);
    nil = C_nil;
    if (exception_pending()) goto v91;
    env = stack[-3];
    v33 = Lmin2(nil, stack[-1], v33);
    nil = C_nil;
    if (exception_pending()) goto v91;
    {
        Lisp_Object v78 = stack[-2];
        popv(4);
        return plus2(v78, v33);
    }
/* error exit handlers */
v91:
    popv(4);
    return nil;
}



/* Code for extract_dummy_ids */

static Lisp_Object CC_extract_dummy_ids(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v83, v117, v280;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for extract_dummy_ids");
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
    v280 = nil;
    goto v5;

v5:
    v83 = stack[0];
    if (v83 == nil) goto v123;
    v83 = stack[0];
    v117 = qcar(v83);
    v83 = qvalue(elt(env, 1)); /* dummy_id!* */
    v83 = Lmemq(nil, v117, v83);
    if (v83 == nil) goto v114;
    v83 = stack[0];
    v83 = qcar(v83);
    v117 = v280;
    v83 = cons(v83, v117);
    nil = C_nil;
    if (exception_pending()) goto v115;
    env = stack[-1];
    v280 = v83;
    v83 = stack[0];
    v83 = qcdr(v83);
    stack[0] = v83;
    goto v5;

v114:
    v83 = stack[0];
    v83 = qcdr(v83);
    stack[0] = v83;
    goto v5;

v123:
    v83 = v280;
    {
        popv(2);
        fn = elt(env, 2); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v83);
    }
/* error exit handlers */
v115:
    popv(2);
    return nil;
}



/* Code for outrefend */

static Lisp_Object CC_outrefend(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v196, v250, v318;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for outrefend");
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
    v196 = qvalue(elt(env, 1)); /* calls!* */
    v250 = v196;
    v196 = v250;
    if (v196 == nil) goto v5;
    stack[-1] = stack[-2];
    stack[0] = elt(env, 2); /* calls */
    v196 = qvalue(elt(env, 3)); /* toplv!* */
    if (v196 == nil) goto v83;
    v318 = v250;
    v250 = stack[-2];
    v196 = elt(env, 2); /* calls */
    v196 = get(v250, v196);
    env = stack[-4];
    fn = elt(env, 21); /* union */
    v196 = (*qfn2(fn))(qenv(fn), v318, v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    goto v14;

v14:
    v196 = Lputprop(nil, 3, stack[-1], stack[0], v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    goto v5;

v5:
    v196 = qvalue(elt(env, 1)); /* calls!* */
    stack[-1] = v196;
    goto v230;

v230:
    v196 = stack[-1];
    if (v196 == nil) goto v116;
    v196 = stack[-1];
    v196 = qcar(v196);
    stack[0] = v196;
    v196 = stack[0];
    v250 = ncons(v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    v196 = elt(env, 5); /* cinthis */
    v196 = Lremflag(nil, v250, v196);
    env = stack[-4];
    v250 = stack[0];
    v196 = stack[-2];
    if (v250 == v196) goto v236;
    v250 = stack[0];
    v196 = elt(env, 6); /* seen */
    v196 = Lflagp(nil, v250, v196);
    env = stack[-4];
    if (!(v196 == nil)) goto v276;
    v196 = stack[0];
    v250 = ncons(v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    v196 = elt(env, 6); /* seen */
    v196 = Lflag(nil, v250, v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    v250 = stack[0];
    v196 = qvalue(elt(env, 7)); /* seen!* */
    v196 = cons(v250, v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    qvalue(elt(env, 7)) = v196; /* seen!* */
    goto v276;

v276:
    v318 = stack[0];
    v250 = elt(env, 8); /* calledby */
    v196 = stack[-2];
    fn = elt(env, 22); /* traput */
    v196 = (*qfnn(fn))(qenv(fn), 3, v318, v250, v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    goto v236;

v236:
    v196 = stack[-1];
    v196 = qcdr(v196);
    stack[-1] = v196;
    goto v230;

v116:
    v196 = qvalue(elt(env, 9)); /* globs!* */
    v250 = v196;
    v196 = v250;
    if (v196 == nil) goto v281;
    stack[-1] = stack[-2];
    stack[0] = elt(env, 10); /* globs */
    v196 = qvalue(elt(env, 3)); /* toplv!* */
    if (v196 == nil) goto v97;
    v318 = v250;
    v250 = stack[-2];
    v196 = elt(env, 10); /* globs */
    v196 = get(v250, v196);
    env = stack[-4];
    fn = elt(env, 21); /* union */
    v196 = (*qfn2(fn))(qenv(fn), v318, v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    goto v320;

v320:
    v196 = Lputprop(nil, 3, stack[-1], stack[0], v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    goto v281;

v281:
    v196 = qvalue(elt(env, 9)); /* globs!* */
    stack[-3] = v196;
    goto v321;

v321:
    v196 = stack[-3];
    if (v196 == nil) goto v55;
    v196 = stack[-3];
    v196 = qcar(v196);
    stack[-1] = v196;
    stack[0] = stack[-1];
    v250 = stack[-1];
    v196 = elt(env, 11); /* dclglb */
    v196 = Lflagp(nil, v250, v196);
    env = stack[-4];
    if (v196 == nil) goto v322;
    v196 = elt(env, 12); /* usedby */
    v250 = v196;
    goto v104;

v104:
    v196 = stack[-2];
    fn = elt(env, 22); /* traput */
    v196 = (*qfnn(fn))(qenv(fn), 3, stack[0], v250, v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    v196 = stack[-1];
    v250 = ncons(v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    v196 = elt(env, 16); /* glb2rf */
    v196 = Lremflag(nil, v250, v196);
    env = stack[-4];
    v250 = stack[-1];
    v196 = elt(env, 17); /* glb2bd */
    v196 = Lflagp(nil, v250, v196);
    env = stack[-4];
    if (v196 == nil) goto v323;
    v196 = stack[-1];
    v250 = ncons(v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    v196 = elt(env, 17); /* glb2bd */
    v196 = Lremflag(nil, v250, v196);
    env = stack[-4];
    v318 = stack[-1];
    v250 = elt(env, 18); /* boundby */
    v196 = stack[-2];
    fn = elt(env, 22); /* traput */
    v196 = (*qfnn(fn))(qenv(fn), 3, v318, v250, v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    goto v323;

v323:
    v250 = stack[-1];
    v196 = elt(env, 19); /* glb2st */
    v196 = Lflagp(nil, v250, v196);
    env = stack[-4];
    if (v196 == nil) goto v324;
    v196 = stack[-1];
    v250 = ncons(v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    v196 = elt(env, 19); /* glb2st */
    v196 = Lremflag(nil, v250, v196);
    env = stack[-4];
    v318 = stack[-1];
    v250 = elt(env, 20); /* setby */
    v196 = stack[-2];
    fn = elt(env, 22); /* traput */
    v196 = (*qfnn(fn))(qenv(fn), 3, v318, v250, v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    goto v324;

v324:
    v196 = stack[-3];
    v196 = qcdr(v196);
    stack[-3] = v196;
    goto v321;

v322:
    v250 = stack[-1];
    v196 = elt(env, 13); /* gseen */
    v196 = Lflagp(nil, v250, v196);
    env = stack[-4];
    if (!(v196 == nil)) goto v325;
    v250 = stack[-1];
    v196 = qvalue(elt(env, 14)); /* gseen!* */
    v196 = cons(v250, v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    qvalue(elt(env, 14)) = v196; /* gseen!* */
    v196 = stack[-1];
    v250 = ncons(v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    v196 = elt(env, 13); /* gseen */
    v196 = Lflag(nil, v250, v196);
    nil = C_nil;
    if (exception_pending()) goto v319;
    env = stack[-4];
    goto v325;

v325:
    v196 = elt(env, 15); /* usedunby */
    v250 = v196;
    goto v104;

v55:
    v196 = qvalue(elt(env, 4)); /* nil */
    { popv(5); return onevalue(v196); }

v97:
    v196 = v250;
    goto v320;

v83:
    v196 = v250;
    goto v14;
/* error exit handlers */
v319:
    popv(5);
    return nil;
}



/* Code for negind */

static Lisp_Object CC_negind(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v118, v115;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for negind");
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

v286:
    v118 = stack[-1];
    if (v118 == nil) goto v5;
    v118 = stack[-1];
    v115 = qcar(v118);
    v118 = stack[0];
    v118 = qcar(v118);
    v118 = qcar(v118);
    v115 = plus2(v115, v118);
    nil = C_nil;
    if (exception_pending()) goto v229;
    env = stack[-2];
    v118 = (Lisp_Object)1; /* 0 */
    v118 = (Lisp_Object)lessp2(v115, v118);
    nil = C_nil;
    if (exception_pending()) goto v229;
    v118 = v118 ? lisp_true : nil;
    env = stack[-2];
    if (!(v118 == nil)) { popv(3); return onevalue(v118); }
    v118 = stack[-1];
    v115 = qcdr(v118);
    v118 = stack[0];
    v118 = qcdr(v118);
    stack[-1] = v115;
    stack[0] = v118;
    goto v286;

v5:
    v118 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v118); }
/* error exit handlers */
v229:
    popv(3);
    return nil;
}



/* Code for expnd1 */

static Lisp_Object CC_expnd1(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v330, v60;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for expnd1");
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
    stack[-2] = nil;
    goto v119;

v119:
    v330 = stack[-1];
    if (!consp(v330)) goto v14;
    v330 = stack[-1];
    v330 = qcar(v330);
    v330 = (consp(v330) ? nil : lisp_true);
    goto v10;

v10:
    if (v330 == nil) goto v109;
    v330 = stack[-1];
    v60 = v330;
    goto v123;

v123:
    v330 = stack[-2];
    if (v330 == nil) { popv(4); return onevalue(v60); }
    v330 = stack[-2];
    v330 = qcar(v330);
    fn = elt(env, 3); /* addf */
    v330 = (*qfn2(fn))(qenv(fn), v330, v60);
    nil = C_nil;
    if (exception_pending()) goto v331;
    env = stack[-3];
    v60 = v330;
    v330 = stack[-2];
    v330 = qcdr(v330);
    stack[-2] = v330;
    goto v123;

v109:
    v330 = stack[-1];
    v330 = qcar(v330);
    v330 = qcar(v330);
    v330 = qcar(v330);
    if (!consp(v330)) goto v224;
    v330 = stack[-1];
    v330 = qcar(v330);
    v330 = qcar(v330);
    v330 = qcar(v330);
    v330 = qcar(v330);
    v330 = (consp(v330) ? nil : lisp_true);
    v330 = (v330 == nil ? lisp_true : nil);
    goto v83;

v83:
    if (v330 == nil) goto v288;
    v330 = stack[-1];
    v330 = qcar(v330);
    v330 = qcar(v330);
    v60 = qcdr(v330);
    v330 = (Lisp_Object)1; /* 0 */
    v330 = (Lisp_Object)lessp2(v60, v330);
    nil = C_nil;
    if (exception_pending()) goto v331;
    v330 = v330 ? lisp_true : nil;
    env = stack[-3];
    goto v114;

v114:
    if (v330 == nil) goto v75;
    v330 = stack[-1];
    v330 = qcar(v330);
    v60 = qcar(v330);
    v330 = (Lisp_Object)17; /* 1 */
    v330 = cons(v60, v330);
    nil = C_nil;
    if (exception_pending()) goto v331;
    env = stack[-3];
    stack[0] = ncons(v330);
    nil = C_nil;
    if (exception_pending()) goto v331;
    env = stack[-3];
    v330 = stack[-1];
    v330 = qcar(v330);
    v330 = qcdr(v330);
    v330 = CC_expnd1(env, v330);
    nil = C_nil;
    if (exception_pending()) goto v331;
    env = stack[-3];
    fn = elt(env, 4); /* multf */
    v330 = (*qfn2(fn))(qenv(fn), stack[0], v330);
    nil = C_nil;
    if (exception_pending()) goto v331;
    env = stack[-3];
    v60 = v330;
    goto v78;

v78:
    v330 = stack[-2];
    v330 = cons(v60, v330);
    nil = C_nil;
    if (exception_pending()) goto v331;
    env = stack[-3];
    stack[-2] = v330;
    v330 = stack[-1];
    v330 = qcdr(v330);
    stack[-1] = v330;
    goto v119;

v75:
    v330 = stack[-1];
    v330 = qcar(v330);
    v330 = qcar(v330);
    v330 = qcar(v330);
    v60 = CC_expnd1(env, v330);
    nil = C_nil;
    if (exception_pending()) goto v331;
    env = stack[-3];
    v330 = stack[-1];
    v330 = qcar(v330);
    v330 = qcar(v330);
    v330 = qcdr(v330);
    fn = elt(env, 5); /* exptf */
    stack[0] = (*qfn2(fn))(qenv(fn), v60, v330);
    nil = C_nil;
    if (exception_pending()) goto v331;
    env = stack[-3];
    v330 = stack[-1];
    v330 = qcar(v330);
    v330 = qcdr(v330);
    v330 = CC_expnd1(env, v330);
    nil = C_nil;
    if (exception_pending()) goto v331;
    env = stack[-3];
    fn = elt(env, 4); /* multf */
    v330 = (*qfn2(fn))(qenv(fn), stack[0], v330);
    nil = C_nil;
    if (exception_pending()) goto v331;
    env = stack[-3];
    v60 = v330;
    goto v78;

v288:
    v330 = qvalue(elt(env, 1)); /* t */
    goto v114;

v224:
    v330 = qvalue(elt(env, 2)); /* nil */
    goto v83;

v14:
    v330 = qvalue(elt(env, 1)); /* t */
    goto v10;
/* error exit handlers */
v331:
    popv(4);
    return nil;
}



/* Code for delet */

static Lisp_Object CC_delet(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v226, v333, v316;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for delet");
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
    v316 = nil;
    goto v119;

v119:
    v226 = stack[-1];
    if (v226 == nil) goto v41;
    v226 = stack[0];
    if (v226 == nil) goto v6;
    v333 = stack[-1];
    v226 = stack[0];
    v226 = (equal(v333, v226) ? lisp_true : nil);
    goto v7;

v7:
    if (v226 == nil) goto v118;
    v226 = v316;
    {
        popv(3);
        fn = elt(env, 2); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v226);
    }

v118:
    v333 = stack[-1];
    v226 = stack[0];
    v226 = qcar(v226);
    if (equal(v333, v226)) goto v291;
    v226 = stack[0];
    v226 = qcar(v226);
    v333 = v316;
    v226 = cons(v226, v333);
    nil = C_nil;
    if (exception_pending()) goto v334;
    env = stack[-2];
    v316 = v226;
    v226 = stack[0];
    v226 = qcdr(v226);
    stack[0] = v226;
    goto v119;

v291:
    v333 = v316;
    v226 = stack[0];
    v226 = qcdr(v226);
    {
        popv(3);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v333, v226);
    }

v6:
    v226 = qvalue(elt(env, 1)); /* t */
    goto v7;

v41:
    v333 = v316;
    v226 = stack[0];
    {
        popv(3);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v333, v226);
    }
/* error exit handlers */
v334:
    popv(3);
    return nil;
}



/* Code for numpoly_ldeg */

static Lisp_Object CC_numpoly_ldeg(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v65;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for numpoly_ldeg");
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
    v65 = stack[0];
    fn = elt(env, 1); /* numpoly_nullp */
    v65 = (*qfn1(fn))(qenv(fn), v65);
    nil = C_nil;
    if (exception_pending()) goto v16;
    if (v65 == nil) goto v5;
    v65 = (Lisp_Object)-15; /* -1 */
    { popv(1); return onevalue(v65); }

v5:
    v65 = stack[0];
    if (is_number(v65)) goto v234;
    v65 = stack[0];
    v65 = qcar(v65);
    v65 = qcar(v65);
    v65 = qcdr(v65);
    { popv(1); return onevalue(v65); }

v234:
    v65 = (Lisp_Object)1; /* 0 */
    { popv(1); return onevalue(v65); }
/* error exit handlers */
v16:
    popv(1);
    return nil;
}



/* Code for naryom */

static Lisp_Object CC_naryom(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v148, v129;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for naryom");
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
    v148 = stack[-1];
    v148 = qcar(v148);
    stack[0] = v148;
    v129 = stack[0];
    v148 = elt(env, 1); /* var */
    if (!(v129 == v148)) goto v84;
    v148 = elt(env, 2); /* variance */
    stack[0] = v148;
    goto v84;

v84:
    v129 = stack[0];
    v148 = qvalue(elt(env, 3)); /* valid_om!* */
    v148 = Lassoc(nil, v129, v148);
    stack[-2] = v148;
    v148 = stack[-2];
    if (v148 == nil) goto v287;
    v148 = stack[-2];
    v148 = qcdr(v148);
    v148 = qcar(v148);
    stack[-2] = v148;
    goto v287;

v287:
    v148 = stack[-1];
    v148 = qcdr(v148);
    v148 = qcar(v148);
    if (v148 == nil) goto v289;
    v148 = stack[-1];
    v148 = qcdr(v148);
    v129 = qcar(v148);
    v148 = elt(env, 4); /* multiset */
    if (!(v129 == v148)) goto v289;
    v148 = stack[-1];
    v148 = qcdr(v148);
    v148 = qcar(v148);
    stack[-2] = v148;
    goto v289;

v289:
    v148 = elt(env, 6); /* "<OMA>" */
    fn = elt(env, 12); /* printout */
    v148 = (*qfn1(fn))(qenv(fn), v148);
    nil = C_nil;
    if (exception_pending()) goto v74;
    env = stack[-3];
    v129 = qvalue(elt(env, 7)); /* indent */
    v148 = (Lisp_Object)33; /* 2 */
    v148 = plus2(v129, v148);
    nil = C_nil;
    if (exception_pending()) goto v74;
    env = stack[-3];
    qvalue(elt(env, 7)) = v148; /* indent */
    v148 = elt(env, 8); /* "<OMS cd=""" */
    fn = elt(env, 12); /* printout */
    v148 = (*qfn1(fn))(qenv(fn), v148);
    nil = C_nil;
    if (exception_pending()) goto v74;
    env = stack[-3];
    v148 = stack[-2];
    v148 = Lprinc(nil, v148);
    nil = C_nil;
    if (exception_pending()) goto v74;
    env = stack[-3];
    v148 = elt(env, 9); /* """ name=""" */
    v148 = Lprinc(nil, v148);
    nil = C_nil;
    if (exception_pending()) goto v74;
    env = stack[-3];
    v148 = stack[0];
    v148 = Lprinc(nil, v148);
    nil = C_nil;
    if (exception_pending()) goto v74;
    env = stack[-3];
    v148 = elt(env, 10); /* """>" */
    v148 = Lprinc(nil, v148);
    nil = C_nil;
    if (exception_pending()) goto v74;
    env = stack[-3];
    v148 = stack[-1];
    v148 = qcdr(v148);
    v148 = qcdr(v148);
    fn = elt(env, 13); /* multiom */
    v148 = (*qfn1(fn))(qenv(fn), v148);
    nil = C_nil;
    if (exception_pending()) goto v74;
    env = stack[-3];
    v129 = qvalue(elt(env, 7)); /* indent */
    v148 = (Lisp_Object)33; /* 2 */
    v148 = difference2(v129, v148);
    nil = C_nil;
    if (exception_pending()) goto v74;
    env = stack[-3];
    qvalue(elt(env, 7)) = v148; /* indent */
    v148 = elt(env, 11); /* "</OMA>" */
    fn = elt(env, 12); /* printout */
    v148 = (*qfn1(fn))(qenv(fn), v148);
    nil = C_nil;
    if (exception_pending()) goto v74;
    v148 = nil;
    { popv(4); return onevalue(v148); }
/* error exit handlers */
v74:
    popv(4);
    return nil;
}



/* Code for atomlis */

static Lisp_Object CC_atomlis(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v33, v7;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for atomlis");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v33 = v0;
/* end of prologue */

v286:
    v7 = v33;
    if (v7 == nil) goto v4;
    v7 = v33;
    v7 = qcar(v7);
    if (!consp(v7)) goto v34;
    v33 = qvalue(elt(env, 2)); /* nil */
    return onevalue(v33);

v34:
    v33 = qcdr(v33);
    goto v286;

v4:
    v33 = qvalue(elt(env, 1)); /* t */
    return onevalue(v33);
}



/* Code for rationalizesq */

static Lisp_Object CC_rationalizesq(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v66, v67;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rationalizesq");
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
    stack[-4] = qvalue(elt(env, 1)); /* !*structure */
    qvalue(elt(env, 1)) = nil; /* !*structure */
    stack[-2] = qvalue(elt(env, 2)); /* !*sub2 */
    qvalue(elt(env, 2)) = nil; /* !*sub2 */
    v67 = qvalue(elt(env, 3)); /* dmode!* */
    v66 = elt(env, 4); /* rationalizefn */
    v66 = get(v67, v66);
    env = stack[-5];
    stack[0] = v66;
    if (v66 == nil) goto v287;
    v67 = stack[0];
    v66 = stack[-3];
    v66 = Lapply1(nil, v67, v66);
    nil = C_nil;
    if (exception_pending()) goto v281;
    env = stack[-5];
    stack[-3] = v66;
    goto v287;

v287:
    v67 = elt(env, 5); /* (i 2 (nil . t) -1 nil) */
    v66 = qvalue(elt(env, 6)); /* powlis!* */
    v66 = cons(v67, v66);
    nil = C_nil;
    if (exception_pending()) goto v281;
    env = stack[-5];
    qvalue(elt(env, 6)) = v66; /* powlis!* */
    v66 = stack[-3];
    fn = elt(env, 11); /* subs2q */
    v66 = (*qfn1(fn))(qenv(fn), v66);
    nil = C_nil;
    if (exception_pending()) goto v281;
    env = stack[-5];
    stack[-1] = v66;
    v66 = qvalue(elt(env, 6)); /* powlis!* */
    v66 = qcdr(v66);
    qvalue(elt(env, 6)) = v66; /* powlis!* */
    v66 = stack[-1];
    v66 = qcdr(v66);
    if (!consp(v66)) goto v229;
    v66 = stack[-1];
    v66 = qcdr(v66);
    v66 = qcar(v66);
    v66 = (consp(v66) ? nil : lisp_true);
    goto v230;

v230:
    if (v66 == nil) goto v273;
    v66 = stack[-1];
    goto v79;

v79:
    qvalue(elt(env, 2)) = stack[-2]; /* !*sub2 */
    qvalue(elt(env, 1)) = stack[-4]; /* !*structure */
    { popv(6); return onevalue(v66); }

v273:
    v66 = stack[-1];
    v66 = qcdr(v66);
    fn = elt(env, 12); /* rationalizef */
    v67 = (*qfn1(fn))(qenv(fn), v66);
    nil = C_nil;
    if (exception_pending()) goto v281;
    env = stack[-5];
    stack[0] = v67;
    v66 = (Lisp_Object)17; /* 1 */
    if (v67 == v66) goto v335;
    v66 = stack[-1];
    v67 = qcar(v66);
    v66 = stack[0];
    fn = elt(env, 13); /* multf */
    stack[-3] = (*qfn2(fn))(qenv(fn), v67, v66);
    nil = C_nil;
    if (exception_pending()) goto v281;
    env = stack[-5];
    v66 = stack[-1];
    v67 = qcdr(v66);
    v66 = stack[0];
    fn = elt(env, 13); /* multf */
    v66 = (*qfn2(fn))(qenv(fn), v67, v66);
    nil = C_nil;
    if (exception_pending()) goto v281;
    env = stack[-5];
    v66 = cons(stack[-3], v66);
    nil = C_nil;
    if (exception_pending()) goto v281;
    env = stack[-5];
    stack[-1] = v66;
    v66 = qvalue(elt(env, 8)); /* !*algint */
    if (v66 == nil) goto v74;
    v66 = qvalue(elt(env, 10)); /* nil */
    goto v76;

v76:
    if (v66 == nil) goto v148;
    v66 = stack[-1];
    fn = elt(env, 14); /* gcdchk */
    v66 = (*qfn1(fn))(qenv(fn), v66);
    nil = C_nil;
    if (exception_pending()) goto v281;
    env = stack[-5];
    stack[-1] = v66;
    goto v148;

v148:
    v66 = stack[-1];
    fn = elt(env, 11); /* subs2q */
    v66 = (*qfn1(fn))(qenv(fn), v66);
    nil = C_nil;
    if (exception_pending()) goto v281;
    env = stack[-5];
    goto v79;

v74:
    v66 = qvalue(elt(env, 9)); /* !*rationalize */
    v66 = (v66 == nil ? lisp_true : nil);
    goto v76;

v335:
    v66 = stack[-3];
    goto v79;

v229:
    v66 = qvalue(elt(env, 7)); /* t */
    goto v230;
/* error exit handlers */
v281:
    env = stack[-5];
    qvalue(elt(env, 2)) = stack[-2]; /* !*sub2 */
    qvalue(elt(env, 1)) = stack[-4]; /* !*structure */
    popv(6);
    return nil;
}



/* Code for testredzz */

static Lisp_Object CC_testredzz(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v118, v115;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for testredzz");
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
    v118 = v0;
/* end of prologue */
    stack[0] = qvalue(elt(env, 1)); /* codmat */
    v115 = qvalue(elt(env, 2)); /* maxvar */
    v118 = plus2(v115, v118);
    nil = C_nil;
    if (exception_pending()) goto v230;
    env = stack[-1];
    v115 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v118/(16/CELL)));
    v118 = (Lisp_Object)65; /* 4 */
    v118 = *(Lisp_Object *)((char *)v115 + (CELL-TAG_VECTOR) + ((int32_t)v118/(16/CELL)));
    stack[0] = v118;
    goto v5;

v5:
    v118 = stack[0];
    if (v118 == nil) goto v89;
    v118 = stack[0];
    v118 = qcar(v118);
    v118 = qcar(v118);
    fn = elt(env, 4); /* testredh */
    v118 = (*qfn1(fn))(qenv(fn), v118);
    nil = C_nil;
    if (exception_pending()) goto v230;
    env = stack[-1];
    v118 = stack[0];
    v118 = qcdr(v118);
    stack[0] = v118;
    goto v5;

v89:
    v118 = qvalue(elt(env, 3)); /* nil */
    { popv(2); return onevalue(v118); }
/* error exit handlers */
v230:
    popv(2);
    return nil;
}



/* Code for freeoff */

static Lisp_Object CC_freeoff(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v278, v309;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for freeoff");
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

v5:
    v278 = stack[-1];
    if (!consp(v278)) goto v34;
    v278 = stack[-1];
    v278 = qcar(v278);
    v278 = (consp(v278) ? nil : lisp_true);
    goto v15;

v15:
    if (v278 == nil) goto v234;
    v278 = qvalue(elt(env, 1)); /* t */
    { popv(3); return onevalue(v278); }

v234:
    v278 = stack[-1];
    v278 = qcar(v278);
    v278 = qcar(v278);
    v278 = qcar(v278);
    if (!consp(v278)) goto v83;
    v278 = stack[-1];
    v278 = qcar(v278);
    v278 = qcar(v278);
    v278 = qcar(v278);
    v278 = qcar(v278);
    v278 = (consp(v278) ? nil : lisp_true);
    v278 = (v278 == nil ? lisp_true : nil);
    goto v109;

v109:
    if (v278 == nil) goto v142;
    v278 = stack[-1];
    v278 = qcar(v278);
    v278 = qcar(v278);
    v309 = qcar(v278);
    v278 = stack[0];
    v278 = CC_freeoff(env, v309, v278);
    nil = C_nil;
    if (exception_pending()) goto v282;
    env = stack[-2];
    if (v278 == nil) goto v327;
    v278 = stack[-1];
    v278 = qcar(v278);
    v309 = qcdr(v278);
    v278 = stack[0];
    v278 = CC_freeoff(env, v309, v278);
    nil = C_nil;
    if (exception_pending()) goto v282;
    env = stack[-2];
    if (v278 == nil) goto v333;
    v278 = stack[-1];
    v278 = qcdr(v278);
    stack[-1] = v278;
    goto v5;

v333:
    v278 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v278); }

v327:
    v278 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v278); }

v142:
    v278 = stack[-1];
    v278 = qcar(v278);
    v278 = qcar(v278);
    v309 = qcar(v278);
    v278 = stack[0];
    fn = elt(env, 3); /* ndepends */
    v278 = (*qfn2(fn))(qenv(fn), v309, v278);
    nil = C_nil;
    if (exception_pending()) goto v282;
    env = stack[-2];
    if (v278 == nil) goto v241;
    v278 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v278); }

v241:
    v278 = stack[-1];
    v278 = qcar(v278);
    v309 = qcdr(v278);
    v278 = stack[0];
    v278 = CC_freeoff(env, v309, v278);
    nil = C_nil;
    if (exception_pending()) goto v282;
    env = stack[-2];
    if (v278 == nil) goto v337;
    v278 = stack[-1];
    v278 = qcdr(v278);
    stack[-1] = v278;
    goto v5;

v337:
    v278 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v278); }

v83:
    v278 = qvalue(elt(env, 2)); /* nil */
    goto v109;

v34:
    v278 = qvalue(elt(env, 1)); /* t */
    goto v15;
/* error exit handlers */
v282:
    popv(3);
    return nil;
}



/* Code for physopordchk!* */

static Lisp_Object CC_physopordchkH(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v338, v64;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for physopordchk*");
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
    stack[0] = v1;
    stack[-1] = v0;
/* end of prologue */

v286:
    v338 = stack[-1];
    v338 = qcar(v338);
    stack[-4] = v338;
    v338 = stack[-1];
    v338 = qcdr(v338);
    stack[-1] = v338;
    v338 = stack[-1];
    if (v338 == nil) goto v10;
    v338 = stack[-4];
    v64 = ncons(v338);
    nil = C_nil;
    if (exception_pending()) goto v97;
    env = stack[-5];
    v338 = stack[0];
    v338 = CC_physopordchkH(env, v64, v338);
    nil = C_nil;
    if (exception_pending()) goto v97;
    env = stack[-5];
    if (v338 == nil) goto v339;
    v64 = stack[-1];
    v338 = stack[0];
    stack[-1] = v64;
    stack[0] = v338;
    goto v286;

v339:
    v338 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v338); }

v10:
    v338 = stack[0];
    v338 = qcdr(v338);
    if (v338 == nil) goto v90;
    v338 = stack[0];
    stack[-3] = v338;
    v338 = stack[-3];
    if (v338 == nil) goto v274;
    v338 = stack[-3];
    v338 = qcar(v338);
    v64 = stack[-4];
    fn = elt(env, 3); /* ncmpchk */
    v338 = (*qfn2(fn))(qenv(fn), v64, v338);
    nil = C_nil;
    if (exception_pending()) goto v97;
    env = stack[-5];
    v338 = ncons(v338);
    nil = C_nil;
    if (exception_pending()) goto v97;
    env = stack[-5];
    stack[-1] = v338;
    stack[-2] = v338;
    goto v122;

v122:
    v338 = stack[-3];
    v338 = qcdr(v338);
    stack[-3] = v338;
    v338 = stack[-3];
    if (v338 == nil) goto v340;
    stack[0] = stack[-1];
    v338 = stack[-3];
    v338 = qcar(v338);
    v64 = stack[-4];
    fn = elt(env, 3); /* ncmpchk */
    v338 = (*qfn2(fn))(qenv(fn), v64, v338);
    nil = C_nil;
    if (exception_pending()) goto v97;
    env = stack[-5];
    v338 = ncons(v338);
    nil = C_nil;
    if (exception_pending()) goto v97;
    env = stack[-5];
    v338 = Lrplacd(nil, stack[0], v338);
    nil = C_nil;
    if (exception_pending()) goto v97;
    env = stack[-5];
    v338 = stack[-1];
    v338 = qcdr(v338);
    stack[-1] = v338;
    goto v122;

v340:
    v338 = stack[-2];
    goto v341;

v341:
    v64 = qvalue(elt(env, 1)); /* nil */
    v338 = Lmember(nil, v64, v338);
    if (v338 == nil) goto v309;
    v338 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v338); }

v309:
    v338 = qvalue(elt(env, 2)); /* t */
    { popv(6); return onevalue(v338); }

v274:
    v338 = qvalue(elt(env, 1)); /* nil */
    goto v341;

v90:
    v64 = stack[-4];
    v338 = stack[0];
    v338 = qcar(v338);
    fn = elt(env, 3); /* ncmpchk */
    v338 = (*qfn2(fn))(qenv(fn), v64, v338);
    nil = C_nil;
    if (exception_pending()) goto v97;
    env = stack[-5];
    if (v338 == nil) goto v109;
    v338 = stack[-4];
    fn = elt(env, 4); /* invp */
    v64 = (*qfn1(fn))(qenv(fn), v338);
    nil = C_nil;
    if (exception_pending()) goto v97;
    v338 = stack[0];
    v338 = qcar(v338);
    v338 = (equal(v64, v338) ? lisp_true : nil);
    v338 = (v338 == nil ? lisp_true : nil);
    { popv(6); return onevalue(v338); }

v109:
    v338 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v338); }
/* error exit handlers */
v97:
    popv(6);
    return nil;
}



/* Code for edges_parents */

static Lisp_Object CC_edges_parents(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v6;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for edges_parents");
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
    v6 = stack[0];
    if (v6 == nil) goto v4;
    v6 = stack[0];
    v6 = qcar(v6);
    fn = elt(env, 2); /* edge_new_parents */
    v6 = (*qfn1(fn))(qenv(fn), v6);
    nil = C_nil;
    if (exception_pending()) goto v78;
    env = stack[-2];
    stack[-1] = v6;
    v6 = stack[0];
    v6 = qcdr(v6);
    v6 = CC_edges_parents(env, v6);
    nil = C_nil;
    if (exception_pending()) goto v78;
    {
        Lisp_Object v90 = stack[-1];
        popv(3);
        return Lappend(nil, v90, v6);
    }

v4:
    v6 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v6); }
/* error exit handlers */
v78:
    popv(3);
    return nil;
}



/* Code for rread1 */

static Lisp_Object MS_CDECL CC_rread1(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v218, v219, v307;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "rread1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rread1");
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
    v218 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-2];
    stack[-1] = v218;
    v219 = qvalue(elt(env, 1)); /* ttype!* */
    v218 = (Lisp_Object)49; /* 3 */
    if (v219 == v218) goto v344;
    v218 = stack[-1];
    if (symbolp(v218)) goto v65;
    v219 = stack[-1];
    v218 = elt(env, 4); /* !:dn!: */
    if (!consp(v219)) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v219 = qcar(v219);
    if (!(v219 == v218)) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v307 = stack[-1];
    v219 = qvalue(elt(env, 5)); /* nil */
    v218 = elt(env, 6); /* symbolic */
    {
        popv(3);
        fn = elt(env, 16); /* dnform */
        return (*qfnn(fn))(qenv(fn), 3, v307, v219, v218);
    }

v65:
    v218 = qvalue(elt(env, 2)); /* !*quotenewnam */
    if (v218 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v219 = stack[-1];
    v218 = elt(env, 3); /* quotenewnam */
    v218 = get(v219, v218);
    stack[0] = v218;
    if (v218 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    else { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }

v344:
    v219 = stack[-1];
    v218 = elt(env, 7); /* !( */
    if (v219 == v218) goto v93;
    v219 = stack[-1];
    v218 = elt(env, 8); /* !+ */
    if (v219 == v218) goto v238;
    v219 = stack[-1];
    v218 = elt(env, 10); /* !- */
    v218 = (v219 == v218 ? lisp_true : nil);
    goto v271;

v271:
    if (v218 == nil) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    fn = elt(env, 15); /* ptoken */
    v218 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-2];
    stack[0] = v218;
    v219 = stack[0];
    v218 = elt(env, 4); /* !:dn!: */
    if (!consp(v219)) goto v285;
    v219 = qcar(v219);
    if (!(v219 == v218)) goto v285;
    v307 = stack[0];
    v219 = qvalue(elt(env, 5)); /* nil */
    v218 = elt(env, 6); /* symbolic */
    fn = elt(env, 16); /* dnform */
    v218 = (*qfnn(fn))(qenv(fn), 3, v307, v219, v218);
    nil = C_nil;
    if (exception_pending()) goto v321;
    env = stack[-2];
    stack[0] = v218;
    goto v285;

v285:
    v218 = stack[0];
    if (is_number(v218)) goto v60;
    v218 = elt(env, 11); /* " " */
    qvalue(elt(env, 12)) = v218; /* nxtsym!* */
    v219 = elt(env, 13); /* "Syntax error: improper number" */
    v218 = qvalue(elt(env, 5)); /* nil */
    fn = elt(env, 17); /* symerr */
    v218 = (*qfn2(fn))(qenv(fn), v219, v218);
    nil = C_nil;
    if (exception_pending()) goto v321;
    { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }

v60:
    v219 = stack[-1];
    v218 = elt(env, 10); /* !- */
    if (!(v219 == v218)) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    v219 = elt(env, 14); /* minus */
    v218 = stack[0];
    v218 = Lapply1(nil, v219, v218);
    nil = C_nil;
    if (exception_pending()) goto v321;
    stack[0] = v218;
    { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }

v238:
    v218 = qvalue(elt(env, 9)); /* t */
    goto v271;

v93:
    {
        popv(3);
        fn = elt(env, 18); /* rrdls */
        return (*qfnn(fn))(qenv(fn), 0);
    }
/* error exit handlers */
v321:
    popv(3);
    return nil;
}



/* Code for moid_member */

static Lisp_Object CC_moid_member(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v275, v125;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for moid_member");
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

v286:
    v275 = stack[0];
    if (v275 == nil) goto v5;
    v275 = stack[0];
    v125 = qcar(v275);
    v275 = stack[-1];
    fn = elt(env, 2); /* mo_vdivides!? */
    v275 = (*qfn2(fn))(qenv(fn), v125, v275);
    nil = C_nil;
    if (exception_pending()) goto v288;
    env = stack[-2];
    if (!(v275 == nil)) { popv(3); return onevalue(v275); }
    v125 = stack[-1];
    v275 = stack[0];
    v275 = qcdr(v275);
    stack[-1] = v125;
    stack[0] = v275;
    goto v286;

v5:
    v275 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v275); }
/* error exit handlers */
v288:
    popv(3);
    return nil;
}



/* Code for list_is_all_free */

static Lisp_Object CC_list_is_all_free(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v16;
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

v4:
    v16 = stack[0];
    if (v16 == nil) goto v79;
    v16 = stack[0];
    v16 = qcar(v16);
    fn = elt(env, 3); /* nodum_varp */
    v16 = (*qfn1(fn))(qenv(fn), v16);
    nil = C_nil;
    if (exception_pending()) goto v7;
    env = stack[-1];
    if (v16 == nil) goto v77;
    v16 = stack[0];
    v16 = qcdr(v16);
    stack[0] = v16;
    goto v4;

v77:
    v16 = qvalue(elt(env, 2)); /* nil */
    { popv(2); return onevalue(v16); }

v79:
    v16 = qvalue(elt(env, 1)); /* t */
    { popv(2); return onevalue(v16); }
/* error exit handlers */
v7:
    popv(2);
    return nil;
}



/* Code for exptsq */

static Lisp_Object CC_exptsq(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v37, v38;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for exptsq");
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
    v38 = stack[-1];
    v37 = (Lisp_Object)17; /* 1 */
    if (v38 == v37) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v38 = stack[-1];
    v37 = (Lisp_Object)1; /* 0 */
    if (v38 == v37) goto v77;
    v37 = stack[-2];
    v37 = qcar(v37);
    if (v37 == nil) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    v38 = stack[-1];
    v37 = (Lisp_Object)1; /* 0 */
    v37 = (Lisp_Object)lessp2(v38, v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    v37 = v37 ? lisp_true : nil;
    env = stack[-4];
    if (v37 == nil) goto v228;
    v37 = stack[-2];
    fn = elt(env, 8); /* mk!*sq */
    v38 = (*qfn1(fn))(qenv(fn), v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    v37 = stack[-1];
    v37 = list2(v38, v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    {
        popv(5);
        fn = elt(env, 9); /* simpexpt */
        return (*qfn1(fn))(qenv(fn), v37);
    }

v228:
    v37 = qvalue(elt(env, 4)); /* !*exp */
    if (v37 == nil) goto v213;
    v37 = stack[-2];
    fn = elt(env, 10); /* kernp */
    v37 = (*qfn1(fn))(qenv(fn), v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    if (v37 == nil) goto v339;
    v37 = stack[-2];
    v37 = qcar(v37);
    v37 = qcar(v37);
    v37 = qcar(v37);
    v38 = qcar(v37);
    v37 = stack[-1];
    {
        popv(5);
        fn = elt(env, 11); /* mksq */
        return (*qfn2(fn))(qenv(fn), v38, v37);
    }

v339:
    v37 = stack[-2];
    v38 = qcdr(v37);
    v37 = (Lisp_Object)17; /* 1 */
    if (v38 == v37) goto v61;
    v37 = stack[-2];
    v37 = qcar(v37);
    if (!consp(v37)) goto v313;
    v37 = stack[-2];
    v37 = qcar(v37);
    v37 = qcar(v37);
    v37 = (consp(v37) ? nil : lisp_true);
    goto v312;

v312:
    if (v37 == nil) goto v50;
    v37 = stack[-2];
    v38 = qcar(v37);
    v37 = stack[-1];
    fn = elt(env, 12); /* !:expt */
    v38 = (*qfn2(fn))(qenv(fn), v38, v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    v37 = (Lisp_Object)17; /* 1 */
    stack[-3] = cons(v38, v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    stack[0] = (Lisp_Object)17; /* 1 */
    v37 = stack[-2];
    v38 = qcdr(v37);
    v37 = stack[-1];
    fn = elt(env, 13); /* exptf */
    v37 = (*qfn2(fn))(qenv(fn), v38, v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    v37 = cons(stack[0], v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    fn = elt(env, 14); /* multsq */
    v37 = (*qfn2(fn))(qenv(fn), stack[-3], v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    stack[-3] = v37;
    goto v79;

v79:
    v37 = stack[-3];
    v37 = qcdr(v37);
    if (!(v37 == nil)) { Lisp_Object res = stack[-3]; popv(5); return onevalue(res); }
    v37 = elt(env, 7); /* "Zero divisor" */
    v38 = v37;
    v37 = v38;
    qvalue(elt(env, 2)) = v37; /* errmsg!* */
    v37 = qvalue(elt(env, 3)); /* !*protfg */
    if (!(v37 == nil)) goto v247;
    v37 = v38;
    fn = elt(env, 15); /* lprie */
    v37 = (*qfn1(fn))(qenv(fn), v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    goto v247;

v247:
    v37 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v353;
    { Lisp_Object res = stack[-3]; popv(5); return onevalue(res); }

v50:
    v37 = stack[-2];
    stack[-3] = v37;
    goto v48;

v48:
    v37 = stack[-1];
    v38 = sub1(v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    stack[-1] = v38;
    v37 = (Lisp_Object)1; /* 0 */
    v37 = (Lisp_Object)greaterp2(v38, v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    v37 = v37 ? lisp_true : nil;
    env = stack[-4];
    if (v37 == nil) goto v306;
    v37 = stack[-2];
    v38 = qcar(v37);
    v37 = stack[-3];
    v37 = qcar(v37);
    fn = elt(env, 16); /* multf */
    stack[0] = (*qfn2(fn))(qenv(fn), v38, v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    v37 = stack[-2];
    v38 = qcdr(v37);
    v37 = stack[-3];
    v37 = qcdr(v37);
    fn = elt(env, 16); /* multf */
    v37 = (*qfn2(fn))(qenv(fn), v38, v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    v37 = cons(stack[0], v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    stack[-3] = v37;
    goto v48;

v306:
    v37 = stack[-3];
    fn = elt(env, 17); /* canonsq */
    v37 = (*qfn1(fn))(qenv(fn), v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    stack[-3] = v37;
    goto v79;

v313:
    v37 = qvalue(elt(env, 5)); /* t */
    goto v312;

v61:
    v37 = stack[-2];
    v38 = qcar(v37);
    v37 = stack[-1];
    fn = elt(env, 13); /* exptf */
    v38 = (*qfn2(fn))(qenv(fn), v38, v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    v37 = (Lisp_Object)17; /* 1 */
    popv(5);
    return cons(v38, v37);

v213:
    v37 = stack[-2];
    v38 = qcar(v37);
    v37 = stack[-1];
    fn = elt(env, 18); /* mksfpf */
    stack[0] = (*qfn2(fn))(qenv(fn), v38, v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    v37 = stack[-2];
    v38 = qcdr(v37);
    v37 = stack[-1];
    fn = elt(env, 18); /* mksfpf */
    v37 = (*qfn2(fn))(qenv(fn), v38, v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    {
        Lisp_Object v296 = stack[0];
        popv(5);
        return cons(v296, v37);
    }

v77:
    v37 = stack[-2];
    v37 = qcar(v37);
    if (v37 == nil) goto v287;
    v38 = (Lisp_Object)17; /* 1 */
    v37 = (Lisp_Object)17; /* 1 */
    popv(5);
    return cons(v38, v37);

v287:
    v37 = elt(env, 1); /* " 0**0 formed" */
    v38 = v37;
    v37 = v38;
    qvalue(elt(env, 2)) = v37; /* errmsg!* */
    v37 = qvalue(elt(env, 3)); /* !*protfg */
    if (!(v37 == nil)) goto v83;
    v37 = v38;
    fn = elt(env, 15); /* lprie */
    v37 = (*qfn1(fn))(qenv(fn), v37);
    nil = C_nil;
    if (exception_pending()) goto v353;
    env = stack[-4];
    goto v83;

v83:
    v37 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v353;
    v37 = nil;
    { popv(5); return onevalue(v37); }
/* error exit handlers */
v353:
    popv(5);
    return nil;
}



/* Code for xremainder!-mod!-p */

static Lisp_Object MS_CDECL CC_xremainderKmodKp(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v242, v355, v95;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "xremainder-mod-p");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for xremainder-mod-p");
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
/* copy arguments values to proper place */
    stack[-1] = v2;
    stack[-2] = v1;
    stack[-3] = v0;
/* end of prologue */

v286:
    v242 = stack[-3];
    if (!consp(v242)) goto v10;
    v242 = stack[-3];
    v242 = qcar(v242);
    v242 = (consp(v242) ? nil : lisp_true);
    goto v41;

v41:
    if (v242 == nil) goto v89;
    v242 = qvalue(elt(env, 1)); /* t */
    goto v234;

v234:
    if (!(v242 == nil)) { Lisp_Object res = stack[-3]; popv(6); return onevalue(res); }
    v242 = stack[-3];
    v242 = qcar(v242);
    v242 = qcdr(v242);
    fn = elt(env, 2); /* minus!-mod!-p */
    v355 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-5];
    v242 = stack[-2];
    v242 = qcar(v242);
    v242 = qcdr(v242);
    fn = elt(env, 3); /* quotient!-mod!-p */
    v242 = (*qfn2(fn))(qenv(fn), v355, v242);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-5];
    stack[-4] = v242;
    v242 = stack[-3];
    v242 = qcar(v242);
    v242 = qcar(v242);
    v355 = qcdr(v242);
    v242 = stack[-2];
    v242 = qcar(v242);
    v242 = qcar(v242);
    v242 = qcdr(v242);
    v242 = (Lisp_Object)(int32_t)((int32_t)v355 - (int32_t)v242 + TAG_FIXNUM);
    stack[0] = v242;
    v355 = stack[0];
    v242 = (Lisp_Object)1; /* 0 */
    if (v355 == v242) goto v315;
    v242 = stack[-3];
    stack[-3] = qcdr(v242);
    v242 = stack[-2];
    v242 = qcar(v242);
    v242 = qcar(v242);
    v242 = qcar(v242);
    fn = elt(env, 4); /* fkern */
    v355 = (*qfn1(fn))(qenv(fn), v242);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-5];
    v242 = stack[0];
    fn = elt(env, 5); /* getpower */
    v355 = (*qfn2(fn))(qenv(fn), v355, v242);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-5];
    v242 = stack[-4];
    v355 = cons(v355, v242);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-5];
    v242 = stack[-2];
    v242 = qcdr(v242);
    fn = elt(env, 6); /* times!-term!-mod!-p */
    v242 = (*qfn2(fn))(qenv(fn), v355, v242);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-5];
    fn = elt(env, 7); /* plus!-mod!-p */
    v242 = (*qfn2(fn))(qenv(fn), stack[-3], v242);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-5];
    stack[-3] = v242;
    goto v219;

v219:
    v95 = stack[-3];
    v355 = stack[-2];
    v242 = stack[-1];
    stack[-3] = v95;
    stack[-2] = v355;
    stack[-1] = v242;
    goto v286;

v315:
    v242 = stack[-3];
    stack[0] = qcdr(v242);
    v242 = stack[-2];
    v355 = qcdr(v242);
    v242 = stack[-4];
    fn = elt(env, 8); /* multiply!-by!-constant!-mod!-p */
    v242 = (*qfn2(fn))(qenv(fn), v355, v242);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-5];
    fn = elt(env, 7); /* plus!-mod!-p */
    v242 = (*qfn2(fn))(qenv(fn), stack[0], v242);
    nil = C_nil;
    if (exception_pending()) goto v54;
    env = stack[-5];
    stack[-3] = v242;
    goto v219;

v89:
    v242 = stack[-3];
    v242 = qcar(v242);
    v242 = qcar(v242);
    v355 = qcar(v242);
    v242 = stack[-1];
    if (equal(v355, v242)) goto v115;
    v242 = qvalue(elt(env, 1)); /* t */
    goto v234;

v115:
    v242 = stack[-3];
    v242 = qcar(v242);
    v242 = qcar(v242);
    v355 = qcdr(v242);
    v242 = stack[-2];
    v242 = qcar(v242);
    v242 = qcar(v242);
    v242 = qcdr(v242);
    v242 = ((intptr_t)v355 < (intptr_t)v242) ? lisp_true : nil;
    goto v234;

v10:
    v242 = qvalue(elt(env, 1)); /* t */
    goto v41;
/* error exit handlers */
v54:
    popv(6);
    return nil;
}



/* Code for mconv1 */

static Lisp_Object CC_mconv1(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v290, v291;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for mconv1");
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
    stack[-2] = nil;
    goto v5;

v5:
    v290 = stack[-1];
    if (!consp(v290)) goto v34;
    v290 = stack[-1];
    v290 = qcar(v290);
    v290 = (consp(v290) ? nil : lisp_true);
    goto v15;

v15:
    if (v290 == nil) goto v125;
    stack[0] = stack[-2];
    v290 = stack[-1];
    fn = elt(env, 2); /* drnconv */
    v290 = (*qfn1(fn))(qenv(fn), v290);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-3];
    {
        Lisp_Object v121 = stack[0];
        popv(4);
        fn = elt(env, 3); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v121, v290);
    }

v125:
    v290 = stack[-1];
    v290 = qcar(v290);
    stack[0] = qcar(v290);
    v290 = stack[-1];
    v290 = qcar(v290);
    v290 = qcdr(v290);
    v291 = CC_mconv1(env, v290);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-3];
    v290 = stack[-2];
    v290 = acons(stack[0], v291, v290);
    nil = C_nil;
    if (exception_pending()) goto v120;
    env = stack[-3];
    stack[-2] = v290;
    v290 = stack[-1];
    v290 = qcdr(v290);
    stack[-1] = v290;
    goto v5;

v34:
    v290 = qvalue(elt(env, 1)); /* t */
    goto v15;
/* error exit handlers */
v120:
    popv(4);
    return nil;
}



/* Code for simpexpt11 */

static Lisp_Object MS_CDECL CC_simpexpt11(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v357, v358, v339;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "simpexpt11");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for simpexpt11");
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
/* copy arguments values to proper place */
    stack[-1] = v2;
    stack[-2] = v1;
    stack[-3] = v0;
/* end of prologue */
    stack[-4] = nil;
    v357 = qvalue(elt(env, 1)); /* !*precise_complex */
    if (v357 == nil) goto v111;
    v339 = stack[-3];
    v358 = stack[-2];
    v357 = stack[-1];
    {
        popv(6);
        fn = elt(env, 4); /* simpexpt2 */
        return (*qfnn(fn))(qenv(fn), 3, v339, v358, v357);
    }

v111:
    v357 = stack[-2];
    v357 = qcdr(v357);
    if (!consp(v357)) goto v112;
    v357 = stack[-2];
    v357 = qcdr(v357);
    v357 = qcar(v357);
    v357 = (consp(v357) ? nil : lisp_true);
    goto v89;

v89:
    if (v357 == nil) goto v290;
    v357 = qvalue(elt(env, 2)); /* t */
    goto v91;

v91:
    if (v357 == nil) goto v142;
    v339 = stack[-3];
    v358 = stack[-2];
    v357 = stack[-1];
    {
        popv(6);
        fn = elt(env, 4); /* simpexpt2 */
        return (*qfnn(fn))(qenv(fn), 3, v339, v358, v357);
    }

v142:
    stack[0] = stack[-3];
    v357 = stack[-4];
    v358 = qcar(v357);
    v357 = (Lisp_Object)17; /* 1 */
    v358 = cons(v358, v357);
    nil = C_nil;
    if (exception_pending()) goto v352;
    env = stack[-5];
    v357 = stack[-1];
    fn = elt(env, 5); /* simpexpt1 */
    stack[0] = (*qfnn(fn))(qenv(fn), 3, stack[0], v358, v357);
    nil = C_nil;
    if (exception_pending()) goto v352;
    env = stack[-5];
    v357 = stack[-4];
    v358 = qcdr(v357);
    v357 = stack[-2];
    v357 = qcdr(v357);
    v358 = cons(v358, v357);
    nil = C_nil;
    if (exception_pending()) goto v352;
    env = stack[-5];
    v357 = stack[-1];
    fn = elt(env, 5); /* simpexpt1 */
    v357 = (*qfnn(fn))(qenv(fn), 3, stack[-3], v358, v357);
    nil = C_nil;
    if (exception_pending()) goto v352;
    env = stack[-5];
    {
        Lisp_Object v58 = stack[0];
        popv(6);
        fn = elt(env, 6); /* multsq */
        return (*qfn2(fn))(qenv(fn), v58, v357);
    }

v290:
    v357 = stack[-2];
    v358 = qcar(v357);
    v357 = stack[-2];
    v357 = qcdr(v357);
    fn = elt(env, 7); /* qremf */
    v357 = (*qfn2(fn))(qenv(fn), v358, v357);
    nil = C_nil;
    if (exception_pending()) goto v352;
    env = stack[-5];
    stack[-4] = v357;
    v357 = qcar(v357);
    if (v357 == nil) goto v80;
    v357 = stack[-4];
    v357 = qcdr(v357);
    goto v229;

v229:
    v357 = (v357 == nil ? lisp_true : nil);
    goto v91;

v80:
    v357 = qvalue(elt(env, 3)); /* nil */
    goto v229;

v112:
    v357 = qvalue(elt(env, 2)); /* t */
    goto v89;
/* error exit handlers */
v352:
    popv(6);
    return nil;
}



/* Code for qqe_arg!-check!-q */

static Lisp_Object CC_qqe_argKcheckKq(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v272;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for qqe_arg-check-q");
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
    v272 = stack[0];
    fn = elt(env, 3); /* qqe_id!-nyt!-branchq */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-1];
    if (v272 == nil) goto v119;
    v272 = stack[0];
    if (!consp(v272)) goto v14;
    v272 = qvalue(elt(env, 1)); /* nil */
    goto v10;

v10:
    if (v272 == nil) goto v34;
    v272 = stack[0];
    fn = elt(env, 4); /* qqe_btidp */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-1];
    if (v272 == nil) goto v78;
    v272 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v272); }

v78:
    v272 = stack[0];
    fn = elt(env, 5); /* qqe_nytidp */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-1];
    if (v272 == nil) goto v280;
    v272 = stack[0];
    fn = elt(env, 6); /* qqe_qtid */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-1];
    v272 = stack[0];
    fn = elt(env, 7); /* qqe_add2rollbackids */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-1];
    v272 = qvalue(elt(env, 2)); /* t */
    { popv(2); return onevalue(v272); }

v280:
    v272 = qvalue(elt(env, 2)); /* t */
    { popv(2); return onevalue(v272); }

v34:
    v272 = stack[0];
    if (is_number(v272)) goto v5;
    v272 = stack[0];
    fn = elt(env, 8); /* qqe_arg!-check */
    v272 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v237;
    env = stack[-1];
    v272 = qvalue(elt(env, 2)); /* t */
    { popv(2); return onevalue(v272); }

v5:
    v272 = nil;
    { popv(2); return onevalue(v272); }

v14:
    v272 = stack[0];
    v272 = (is_number(v272) ? lisp_true : nil);
    v272 = (v272 == nil ? lisp_true : nil);
    goto v10;

v119:
    v272 = qvalue(elt(env, 1)); /* nil */
    { popv(2); return onevalue(v272); }
/* error exit handlers */
v237:
    popv(2);
    return nil;
}



/* Code for pasf_mkpos */

static Lisp_Object CC_pasf_mkpos(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v360, v330;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for pasf_mkpos");
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
    stack[0] = v0;
/* end of prologue */
    v330 = stack[0];
    v360 = elt(env, 1); /* true */
    if (v330 == v360) goto v14;
    v330 = stack[0];
    v360 = elt(env, 3); /* false */
    v360 = (v330 == v360 ? lisp_true : nil);
    goto v10;

v10:
    if (v360 == nil) goto v15;
    v360 = qvalue(elt(env, 4)); /* nil */
    goto v111;

v111:
    if (v360 == nil) goto v116;
    v360 = stack[0];
    fn = elt(env, 6); /* pasf_anegateat */
    v360 = (*qfn1(fn))(qenv(fn), v360);
    nil = C_nil;
    if (exception_pending()) goto v221;
    env = stack[-3];
    goto v119;

v119:
    stack[-2] = v360;
    v360 = stack[-2];
    v360 = Lconsp(nil, v360);
    env = stack[-3];
    if (v360 == nil) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v360 = stack[-2];
    v360 = qcar(v360);
    v360 = Lconsp(nil, v360);
    env = stack[-3];
    if (v360 == nil) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v360 = stack[-2];
    v360 = qcar(v360);
    v330 = qcar(v360);
    v360 = elt(env, 5); /* (cong ncong) */
    v360 = Lmemq(nil, v330, v360);
    if (v360 == nil) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v360 = stack[-2];
    v360 = qcar(v360);
    v360 = qcdr(v360);
    fn = elt(env, 7); /* minusf */
    v360 = (*qfn1(fn))(qenv(fn), v360);
    nil = C_nil;
    if (exception_pending()) goto v221;
    env = stack[-3];
    if (v360 == nil) { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }
    v330 = stack[-2];
    v360 = elt(env, 1); /* true */
    if (v330 == v360) goto v73;
    v330 = stack[-2];
    v360 = elt(env, 3); /* false */
    v360 = (v330 == v360 ? lisp_true : nil);
    goto v72;

v72:
    if (v360 == nil) goto v161;
    v360 = stack[-2];
    stack[-1] = v360;
    goto v238;

v238:
    v360 = stack[-2];
    v360 = qcar(v360);
    v360 = qcdr(v360);
    fn = elt(env, 8); /* negf */
    stack[0] = (*qfn1(fn))(qenv(fn), v360);
    nil = C_nil;
    if (exception_pending()) goto v221;
    env = stack[-3];
    v360 = stack[-2];
    v360 = qcdr(v360);
    v330 = qcar(v360);
    v360 = qvalue(elt(env, 4)); /* nil */
    v360 = list2(v330, v360);
    nil = C_nil;
    if (exception_pending()) goto v221;
    env = stack[-3];
    v360 = acons(stack[-1], stack[0], v360);
    nil = C_nil;
    if (exception_pending()) goto v221;
    stack[-2] = v360;
    { Lisp_Object res = stack[-2]; popv(4); return onevalue(res); }

v161:
    v360 = stack[-2];
    v360 = qcar(v360);
    v360 = Lconsp(nil, v360);
    env = stack[-3];
    if (v360 == nil) goto v309;
    v360 = stack[-2];
    v360 = qcar(v360);
    v360 = qcar(v360);
    stack[-1] = v360;
    goto v238;

v309:
    v360 = stack[-2];
    v360 = qcar(v360);
    stack[-1] = v360;
    goto v238;

v73:
    v360 = qvalue(elt(env, 2)); /* t */
    goto v72;

v116:
    v360 = stack[0];
    goto v119;

v15:
    v360 = stack[0];
    v360 = qcdr(v360);
    v360 = qcar(v360);
    fn = elt(env, 7); /* minusf */
    v360 = (*qfn1(fn))(qenv(fn), v360);
    nil = C_nil;
    if (exception_pending()) goto v221;
    env = stack[-3];
    goto v111;

v14:
    v360 = qvalue(elt(env, 2)); /* t */
    goto v10;
/* error exit handlers */
v221:
    popv(4);
    return nil;
}



/* Code for binaryrd */

static Lisp_Object MS_CDECL CC_binaryrd(Lisp_Object env, int nargs, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v65, v84, v16;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 0, "binaryrd");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for binaryrd");
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
    fn = elt(env, 2); /* mathml */
    v65 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v6;
    env = stack[-2];
    stack[-1] = v65;
    fn = elt(env, 2); /* mathml */
    v65 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v6;
    env = stack[-2];
    stack[0] = v65;
    fn = elt(env, 3); /* lex */
    v65 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v6;
    env = stack[-2];
    v84 = stack[-1];
    v65 = stack[0];
    v16 = qvalue(elt(env, 1)); /* nil */
    popv(3);
    return list2star(v84, v65, v16);
/* error exit handlers */
v6:
    popv(3);
    return nil;
}



/* Code for simpdf!* */

static Lisp_Object CC_simpdfH(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v91, v78, v90;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for simpdf*");
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
    v91 = v0;
/* end of prologue */
    fn = elt(env, 1); /* simpdf */
    v91 = (*qfn1(fn))(qenv(fn), v91);
    nil = C_nil;
    if (exception_pending()) goto v89;
    env = stack[-1];
    stack[0] = v91;
    v91 = stack[0];
    fn = elt(env, 2); /* rootextractsq */
    v91 = (*qfn1(fn))(qenv(fn), v91);
    nil = C_nil;
    if (exception_pending()) goto v89;
    env = stack[-1];
    v90 = v91;
    v78 = v90;
    v91 = stack[0];
    if (equal(v78, v91)) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v91 = v90;
    {
        popv(2);
        fn = elt(env, 3); /* resimp */
        return (*qfn1(fn))(qenv(fn), v91);
    }
/* error exit handlers */
v89:
    popv(2);
    return nil;
}



/* Code for downwght1 */

static Lisp_Object CC_downwght1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v370, v371, v39;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for downwght1");
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
    v370 = v1;
    stack[-4] = v0;
/* end of prologue */
    fn = elt(env, 4); /* dm!-abs */
    v370 = (*qfn1(fn))(qenv(fn), v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    v39 = v370;
    v370 = v39;
    if (!consp(v370)) goto v34;
    v370 = v39;
    v371 = qcar(v370);
    v370 = elt(env, 1); /* onep */
    v370 = get(v371, v370);
    env = stack[-6];
    v371 = v39;
    v370 = Lapply1(nil, v370, v371);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    goto v15;

v15:
    if (v370 == nil) goto v118;
    stack[0] = qvalue(elt(env, 2)); /* codmat */
    v371 = qvalue(elt(env, 3)); /* maxvar */
    v370 = stack[-4];
    v370 = plus2(v371, v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    stack[-5] = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    stack[-3] = (Lisp_Object)17; /* 1 */
    stack[0] = qvalue(elt(env, 2)); /* codmat */
    v371 = qvalue(elt(env, 3)); /* maxvar */
    v370 = stack[-4];
    v370 = plus2(v371, v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    v371 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    v370 = (Lisp_Object)17; /* 1 */
    v370 = *(Lisp_Object *)((char *)v371 + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    v370 = qcar(v370);
    v370 = qcar(v370);
    stack[-2] = sub1(v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    stack[0] = qvalue(elt(env, 2)); /* codmat */
    v371 = qvalue(elt(env, 3)); /* maxvar */
    v370 = stack[-4];
    v370 = plus2(v371, v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    v371 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    v370 = (Lisp_Object)17; /* 1 */
    v370 = *(Lisp_Object *)((char *)v371 + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    v370 = qcar(v370);
    stack[-1] = qcdr(v370);
    stack[0] = qvalue(elt(env, 2)); /* codmat */
    v371 = qvalue(elt(env, 3)); /* maxvar */
    v370 = stack[-4];
    v370 = plus2(v371, v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    v371 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    v370 = (Lisp_Object)17; /* 1 */
    v370 = *(Lisp_Object *)((char *)v371 + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    v370 = qcdr(v370);
    v370 = sub1(v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    v370 = acons(stack[-2], stack[-1], v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    *(Lisp_Object *)((char *)stack[-5] + (CELL-TAG_VECTOR) + ((int32_t)stack[-3]/(16/CELL))) = v370;
    { popv(7); return onevalue(v370); }

v118:
    stack[0] = qvalue(elt(env, 2)); /* codmat */
    v371 = qvalue(elt(env, 3)); /* maxvar */
    v370 = stack[-4];
    v370 = plus2(v371, v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    stack[-5] = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    stack[-3] = (Lisp_Object)17; /* 1 */
    stack[0] = qvalue(elt(env, 2)); /* codmat */
    v371 = qvalue(elt(env, 3)); /* maxvar */
    v370 = stack[-4];
    v370 = plus2(v371, v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    v371 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    v370 = (Lisp_Object)17; /* 1 */
    v370 = *(Lisp_Object *)((char *)v371 + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    v370 = qcar(v370);
    v370 = qcar(v370);
    stack[-2] = sub1(v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    stack[0] = qvalue(elt(env, 2)); /* codmat */
    v371 = qvalue(elt(env, 3)); /* maxvar */
    v370 = stack[-4];
    v370 = plus2(v371, v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    v371 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    v370 = (Lisp_Object)17; /* 1 */
    v370 = *(Lisp_Object *)((char *)v371 + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    v370 = qcar(v370);
    v370 = qcdr(v370);
    stack[-1] = sub1(v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    stack[0] = qvalue(elt(env, 2)); /* codmat */
    v371 = qvalue(elt(env, 3)); /* maxvar */
    v370 = stack[-4];
    v370 = plus2(v371, v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    v371 = *(Lisp_Object *)((char *)stack[0] + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    v370 = (Lisp_Object)17; /* 1 */
    v370 = *(Lisp_Object *)((char *)v371 + (CELL-TAG_VECTOR) + ((int32_t)v370/(16/CELL)));
    v371 = qcdr(v370);
    v370 = (Lisp_Object)65; /* 4 */
    v370 = difference2(v371, v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    env = stack[-6];
    v370 = acons(stack[-2], stack[-1], v370);
    nil = C_nil;
    if (exception_pending()) goto v372;
    *(Lisp_Object *)((char *)stack[-5] + (CELL-TAG_VECTOR) + ((int32_t)stack[-3]/(16/CELL))) = v370;
    { popv(7); return onevalue(v370); }

v34:
    v370 = v39;
    v370 = Lonep(nil, v370);
    env = stack[-6];
    goto v15;
/* error exit handlers */
v372:
    popv(7);
    return nil;
}



/* Code for dipprod */

static Lisp_Object CC_dipprod(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v114, v288;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dipprod");
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
    v114 = stack[-1];
    fn = elt(env, 1); /* diplength */
    stack[-2] = (*qfn1(fn))(qenv(fn), v114);
    nil = C_nil;
    if (exception_pending()) goto v117;
    env = stack[-3];
    v114 = stack[0];
    fn = elt(env, 1); /* diplength */
    v114 = (*qfn1(fn))(qenv(fn), v114);
    nil = C_nil;
    if (exception_pending()) goto v117;
    env = stack[-3];
    v114 = (Lisp_Object)lesseq2(stack[-2], v114);
    nil = C_nil;
    if (exception_pending()) goto v117;
    v114 = v114 ? lisp_true : nil;
    env = stack[-3];
    if (v114 == nil) goto v90;
    v288 = stack[-1];
    v114 = stack[0];
    {
        popv(4);
        fn = elt(env, 2); /* dipprodin */
        return (*qfn2(fn))(qenv(fn), v288, v114);
    }

v90:
    v288 = stack[0];
    v114 = stack[-1];
    {
        popv(4);
        fn = elt(env, 2); /* dipprodin */
        return (*qfn2(fn))(qenv(fn), v288, v114);
    }
/* error exit handlers */
v117:
    popv(4);
    return nil;
}



/* Code for chkint!* */

static Lisp_Object CC_chkintH(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v277, v255, v336;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for chkint*");
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
    v277 = qvalue(elt(env, 1)); /* !*!*roundbf */
    if (v277 == nil) goto v115;
    v277 = stack[0];
    v277 = Lfloatp(nil, v277);
    env = stack[-1];
    if (v277 == nil) goto v14;
    v277 = stack[0];
    {
        popv(2);
        fn = elt(env, 4); /* fl2bf */
        return (*qfn1(fn))(qenv(fn), v277);
    }

v14:
    v277 = stack[0];
    if (!consp(v277)) goto v16;
    v277 = stack[0];
    goto v65;

v65:
    {
        popv(2);
        fn = elt(env, 5); /* csl_normbf */
        return (*qfn1(fn))(qenv(fn), v277);
    }

v16:
    v277 = stack[0];
    v277 = integerp(v277);
    if (v277 == nil) goto v83;
    v336 = elt(env, 2); /* !:rd!: */
    v255 = stack[0];
    v277 = (Lisp_Object)1; /* 0 */
    v277 = list2star(v336, v255, v277);
    nil = C_nil;
    if (exception_pending()) goto v335;
    env = stack[-1];
    goto v65;

v83:
    v277 = stack[0];
    fn = elt(env, 6); /* read!:num */
    v277 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v335;
    env = stack[-1];
    goto v65;

v115:
    v277 = stack[0];
    v277 = Labsval(nil, v277);
    nil = C_nil;
    if (exception_pending()) goto v335;
    env = stack[-1];
    v255 = v277;
    v277 = stack[0];
    v277 = Lfloatp(nil, v277);
    env = stack[-1];
    if (!(v277 == nil)) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v277 = v255;
    fn = elt(env, 7); /* msd */
    v255 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v335;
    env = stack[-1];
    v277 = qvalue(elt(env, 3)); /* !!maxbflexp */
    v277 = (Lisp_Object)lesseq2(v255, v277);
    nil = C_nil;
    if (exception_pending()) goto v335;
    v277 = v277 ? lisp_true : nil;
    env = stack[-1];
    if (v277 == nil) goto v69;
    v277 = stack[0];
        popv(2);
        return Lfloat(nil, v277);

v69:
    fn = elt(env, 8); /* rndbfon */
    v277 = (*qfnn(fn))(qenv(fn), 0);
    nil = C_nil;
    if (exception_pending()) goto v335;
    env = stack[-1];
    v277 = stack[0];
    v277 = Lfloatp(nil, v277);
    env = stack[-1];
    if (v277 == nil) goto v238;
    v277 = stack[0];
    {
        popv(2);
        fn = elt(env, 4); /* fl2bf */
        return (*qfn1(fn))(qenv(fn), v277);
    }

v238:
    v277 = stack[0];
    if (!consp(v277)) goto v328;
    v277 = stack[0];
    goto v71;

v71:
    {
        popv(2);
        fn = elt(env, 5); /* csl_normbf */
        return (*qfn1(fn))(qenv(fn), v277);
    }

v328:
    v277 = stack[0];
    v277 = integerp(v277);
    if (v277 == nil) goto v315;
    v336 = elt(env, 2); /* !:rd!: */
    v255 = stack[0];
    v277 = (Lisp_Object)1; /* 0 */
    v277 = list2star(v336, v255, v277);
    nil = C_nil;
    if (exception_pending()) goto v335;
    env = stack[-1];
    goto v71;

v315:
    v277 = stack[0];
    fn = elt(env, 6); /* read!:num */
    v277 = (*qfn1(fn))(qenv(fn), v277);
    nil = C_nil;
    if (exception_pending()) goto v335;
    env = stack[-1];
    goto v71;
/* error exit handlers */
v335:
    popv(2);
    return nil;
}



setup_type const u20_setup[] =
{
    {"dipilcomb1",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_dipilcomb1},
    {"getphystypecar",          CC_getphystypecar,too_many_1,  wrong_no_1},
    {"red=cancelsimp",          too_few_2,      CC_redMcancelsimp,wrong_no_2},
    {"dfprintfn",               CC_dfprintfn,   too_many_1,    wrong_no_1},
    {"b:ordexp",                too_few_2,      CC_bTordexp,   wrong_no_2},
    {"subf1",                   too_few_2,      CC_subf1,      wrong_no_2},
    {"reduce-degree-mod-p",     too_few_2,      CC_reduceKdegreeKmodKp,wrong_no_2},
    {"monomdivide",             too_few_2,      CC_monomdivide,wrong_no_2},
    {"smemberlp",               too_few_2,      CC_smemberlp,  wrong_no_2},
    {"get-denom-ll",            too_few_2,      CC_getKdenomKll,wrong_no_2},
    {"aex_subrat1",             wrong_no_na,    wrong_no_nb,   (n_args *)CC_aex_subrat1},
    {"bvarml",                  CC_bvarml,      too_many_1,    wrong_no_1},
    {"evdif",                   too_few_2,      CC_evdif,      wrong_no_2},
    {"groebsavelterm",          CC_groebsavelterm,too_many_1,  wrong_no_1},
    {"coordp",                  CC_coordp,      too_many_1,    wrong_no_1},
    {"indordn",                 CC_indordn,     too_many_1,    wrong_no_1},
    {"mk-strand-vertex2",       wrong_no_na,    wrong_no_nb,   (n_args *)CC_mkKstrandKvertex2},
    {"assert_uninstall",        CC_assert_uninstall,too_many_1,wrong_no_1},
    {"groeb=weight",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_groebMweight},
    {"extract_dummy_ids",       CC_extract_dummy_ids,too_many_1,wrong_no_1},
    {"outrefend",               CC_outrefend,   too_many_1,    wrong_no_1},
    {"negind",                  too_few_2,      CC_negind,     wrong_no_2},
    {"expnd1",                  CC_expnd1,      too_many_1,    wrong_no_1},
    {"delet",                   too_few_2,      CC_delet,      wrong_no_2},
    {"numpoly_ldeg",            CC_numpoly_ldeg,too_many_1,    wrong_no_1},
    {"naryom",                  CC_naryom,      too_many_1,    wrong_no_1},
    {"atomlis",                 CC_atomlis,     too_many_1,    wrong_no_1},
    {"rationalizesq",           CC_rationalizesq,too_many_1,   wrong_no_1},
    {"testredzz",               CC_testredzz,   too_many_1,    wrong_no_1},
    {"freeoff",                 too_few_2,      CC_freeoff,    wrong_no_2},
    {"physopordchk*",           too_few_2,      CC_physopordchkH,wrong_no_2},
    {"edges_parents",           CC_edges_parents,too_many_1,   wrong_no_1},
    {"rread1",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_rread1},
    {"moid_member",             too_few_2,      CC_moid_member,wrong_no_2},
    {"list_is_all_free",        CC_list_is_all_free,too_many_1,wrong_no_1},
    {"exptsq",                  too_few_2,      CC_exptsq,     wrong_no_2},
    {"xremainder-mod-p",        wrong_no_na,    wrong_no_nb,   (n_args *)CC_xremainderKmodKp},
    {"mconv1",                  CC_mconv1,      too_many_1,    wrong_no_1},
    {"simpexpt11",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_simpexpt11},
    {"qqe_arg-check-q",         CC_qqe_argKcheckKq,too_many_1, wrong_no_1},
    {"pasf_mkpos",              CC_pasf_mkpos,  too_many_1,    wrong_no_1},
    {"binaryrd",                wrong_no_na,    wrong_no_nb,   (n_args *)CC_binaryrd},
    {"simpdf*",                 CC_simpdfH,     too_many_1,    wrong_no_1},
    {"downwght1",               too_few_2,      CC_downwght1,  wrong_no_2},
    {"dipprod",                 too_few_2,      CC_dipprod,    wrong_no_2},
    {"chkint*",                 CC_chkintH,     too_many_1,    wrong_no_1},
    {NULL, (one_args *)"u20", (two_args *)"2291 4295969 9237383", 0}
};

/* end of generated code */

/* $destdir\u47.c        Machine generated C code */

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


/* Code for simpx1 */

static Lisp_Object MS_CDECL CC_simpx1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v167, v168, v169;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "simpx1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for simpx1");
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
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-3] = v2;
    stack[-1] = v1;
    stack[-4] = v0;
/* end of prologue */
    stack[-6] = nil;
    v168 = stack[-4];
    v167 = elt(env, 1); /* !*minus!* */
    if (!consp(v168)) goto v170;
    v168 = qcar(v168);
    if (!(v168 == v167)) goto v170;
    v168 = stack[-1];
    v167 = (Lisp_Object)17; /* 1 */
    if (v168 == v167) goto v171;
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v172;

v172:
    if (!(v167 == nil)) goto v173;
    v168 = stack[-3];
    v167 = (Lisp_Object)17; /* 1 */
    if (v168 == v167) goto v174;
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v175;

v175:
    if (!(v167 == nil)) goto v173;
    v168 = stack[-1];
    v167 = (Lisp_Object)17; /* 1 */
    if (v168 == v167) goto v176;
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v177;

v177:
    if (v167 == nil) goto v170;
    v167 = stack[-4];
    v167 = qcdr(v167);
    stack[0] = qcar(v167);
    v169 = elt(env, 3); /* quotient */
    v168 = stack[-1];
    v167 = stack[-3];
    v167 = list3(v169, v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = list2(stack[0], v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    fn = elt(env, 20); /* simpexpt */
    v167 = (*qfn1(fn))(qenv(fn), v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[0] = v167;
    v167 = stack[0];
    v167 = qcar(v167);
    fn = elt(env, 21); /* negf */
    v168 = (*qfn1(fn))(qenv(fn), v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    v167 = stack[0];
    v167 = qcdr(v167);
    popv(8);
    return cons(v168, v167);

v170:
    v167 = stack[-1];
    if (!(is_number(v167))) goto v179;
    v167 = stack[-3];
    if (!(is_number(v167))) goto v179;

v180:
    v167 = stack[-1];
    if (is_number(v167)) goto v181;
    v167 = stack[-1];
    if (!consp(v167)) goto v182;
    v167 = stack[-1];
    v168 = qcar(v167);
    v167 = elt(env, 12); /* minus */
    if (v168 == v167) goto v183;
    v167 = stack[-1];
    v168 = qcar(v167);
    v167 = elt(env, 13); /* plus */
    if (v168 == v167) goto v184;
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v185;

v185:
    if (v167 == nil) goto v186;
    v168 = (Lisp_Object)17; /* 1 */
    v167 = (Lisp_Object)17; /* 1 */
    v167 = cons(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-5] = v167;
    v167 = stack[-1];
    v167 = qcdr(v167);
    stack[-2] = v167;
    goto v187;

v187:
    v167 = stack[-2];
    if (v167 == nil) { Lisp_Object res = stack[-5]; popv(8); return onevalue(res); }
    v167 = stack[-2];
    v167 = qcar(v167);
    stack[-1] = stack[-4];
    stack[0] = elt(env, 3); /* quotient */
    v168 = stack[-6];
    if (v168 == nil) goto v188;
    v168 = elt(env, 12); /* minus */
    v167 = list2(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v168 = v167;
    goto v189;

v189:
    v167 = stack[-3];
    v167 = list3(stack[0], v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = list2(stack[-1], v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    fn = elt(env, 20); /* simpexpt */
    v168 = (*qfn1(fn))(qenv(fn), v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = stack[-5];
    fn = elt(env, 22); /* multsq */
    v167 = (*qfn2(fn))(qenv(fn), v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-5] = v167;
    v167 = stack[-2];
    v167 = qcdr(v167);
    stack[-2] = v167;
    goto v187;

v188:
    v168 = v167;
    goto v189;

v186:
    v167 = stack[-1];
    v168 = qcar(v167);
    v167 = elt(env, 15); /* times */
    if (v168 == v167) goto v190;
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v191;

v191:
    if (v167 == nil) goto v192;
    v167 = stack[-3];
    if (is_number(v167)) goto v193;
    v167 = stack[-1];
    v167 = qcdr(v167);
    v167 = qcar(v167);
    stack[-5] = v167;
    goto v194;

v194:
    v167 = stack[-1];
    v167 = qcdr(v167);
    v167 = qcdr(v167);
    v167 = qcdr(v167);
    if (v167 == nil) goto v195;
    v168 = elt(env, 15); /* times */
    v167 = stack[-1];
    v167 = qcdr(v167);
    v167 = qcdr(v167);
    v167 = cons(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    goto v196;

v196:
    stack[-1] = v167;
    goto v197;

v197:
    v167 = stack[-4];
    if (!(symbolp(v167))) goto v198;
    v168 = stack[-4];
    v167 = elt(env, 16); /* used!* */
    v167 = Lflagp(nil, v168, v167);
    env = stack[-7];
    if (!(v167 == nil)) goto v198;
    v167 = stack[-4];
    v168 = ncons(v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = elt(env, 16); /* used!* */
    v167 = Lflag(nil, v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    goto v198;

v198:
    v168 = stack[-4];
    v167 = elt(env, 17); /* (minus 1) */
    if (equal(v168, v167)) goto v199;
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v200;

v200:
    if (v167 == nil) goto v201;
    v167 = elt(env, 5); /* i */
    fn = elt(env, 23); /* simp */
    v167 = (*qfn1(fn))(qenv(fn), v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-4] = v167;
    v167 = stack[-6];
    if (v167 == nil) { Lisp_Object res = stack[-4]; popv(8); return onevalue(res); }
    v167 = stack[-4];
    v167 = qcar(v167);
    fn = elt(env, 21); /* negf */
    v168 = (*qfn1(fn))(qenv(fn), v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    v167 = stack[-4];
    v167 = qcdr(v167);
    popv(8);
    return cons(v168, v167);

v201:
    stack[0] = elt(env, 4); /* expt */
    stack[-2] = stack[-4];
    v168 = stack[-3];
    v167 = (Lisp_Object)17; /* 1 */
    if (v168 == v167) goto v202;
    v169 = elt(env, 3); /* quotient */
    v168 = stack[-1];
    v167 = stack[-3];
    v167 = list3(v169, v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    goto v203;

v203:
    v167 = list3(stack[0], stack[-2], v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-4] = v167;
    stack[0] = stack[-4];
    v167 = stack[-6];
    if (v167 == nil) goto v204;
    v167 = stack[-5];
    v167 = negate(v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    goto v205;

v205:
    {
        Lisp_Object v206 = stack[0];
        popv(8);
        fn = elt(env, 24); /* mksq */
        return (*qfn2(fn))(qenv(fn), v206, v167);
    }

v204:
    v167 = stack[-5];
    goto v205;

v202:
    v167 = stack[-1];
    goto v203;

v199:
    v168 = stack[-3];
    v167 = (Lisp_Object)17; /* 1 */
    if (v168 == v167) goto v207;
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v200;

v207:
    v169 = elt(env, 18); /* difference */
    v168 = stack[-1];
    v167 = elt(env, 19); /* (quotient 1 2) */
    v167 = list3(v169, v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    fn = elt(env, 23); /* simp */
    v167 = (*qfn1(fn))(qenv(fn), v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = qcar(v167);
    v167 = (v167 == nil ? lisp_true : nil);
    goto v200;

v195:
    v167 = stack[-1];
    v167 = qcdr(v167);
    v167 = qcdr(v167);
    v167 = qcar(v167);
    goto v196;

v193:
    v168 = stack[-3];
    v167 = stack[-1];
    v167 = qcdr(v167);
    v167 = qcar(v167);
    v167 = Lgcd(nil, v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-5] = v167;
    v168 = stack[-3];
    v167 = stack[-5];
    v167 = quot2(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-3] = v167;
    v167 = stack[-1];
    v167 = qcdr(v167);
    v168 = qcar(v167);
    v167 = stack[-5];
    v167 = quot2(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-5] = v167;
    goto v194;

v192:
    v167 = stack[-1];
    v168 = qcar(v167);
    v167 = elt(env, 3); /* quotient */
    if (v168 == v167) goto v208;
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v209;

v209:
    if (v167 == nil) goto v210;
    v167 = stack[-1];
    v167 = qcdr(v167);
    v167 = qcdr(v167);
    v167 = qcar(v167);
    stack[-3] = v167;
    v167 = stack[-1];
    v167 = qcdr(v167);
    v167 = qcar(v167);
    stack[-1] = v167;
    goto v180;

v210:
    v167 = (Lisp_Object)17; /* 1 */
    stack[-5] = v167;
    goto v197;

v208:
    v168 = stack[-3];
    v167 = (Lisp_Object)17; /* 1 */
    if (v168 == v167) goto v211;
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v209;

v211:
    v167 = qvalue(elt(env, 14)); /* !*expandexpt */
    goto v209;

v190:
    v167 = stack[-1];
    v167 = qcdr(v167);
    v167 = qcar(v167);
    v167 = integerp(v167);
    goto v191;

v184:
    v167 = qvalue(elt(env, 14)); /* !*expandexpt */
    goto v185;

v183:
    v167 = stack[-1];
    v167 = qcdr(v167);
    v167 = qcar(v167);
    stack[-1] = v167;
    goto v212;

v212:
    v167 = qvalue(elt(env, 7)); /* !*mcd */
    if (v167 == nil) goto v213;
    v169 = stack[-4];
    v168 = stack[-1];
    v167 = stack[-3];
    v167 = CC_simpx1(env, 3, v169, v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    {
        popv(8);
        fn = elt(env, 25); /* invsq */
        return (*qfn1(fn))(qenv(fn), v167);
    }

v213:
    v167 = stack[-6];
    v167 = (v167 == nil ? lisp_true : nil);
    stack[-6] = v167;
    goto v180;

v182:
    v167 = (Lisp_Object)17; /* 1 */
    stack[-5] = v167;
    goto v197;

v181:
    v167 = stack[-1];
    v167 = Lminusp(nil, v167);
    env = stack[-7];
    if (v167 == nil) goto v214;
    v167 = stack[-1];
    v167 = negate(v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-1] = v167;
    goto v212;

v214:
    v167 = stack[-1];
    v167 = integerp(v167);
    if (v167 == nil) goto v215;
    v167 = stack[-3];
    v167 = integerp(v167);
    if (v167 == nil) goto v216;
    v167 = stack[-6];
    if (v167 == nil) goto v217;
    v167 = stack[-1];
    v167 = negate(v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-1] = v167;
    goto v217;

v217:
    v167 = stack[-1];
    stack[-5] = v167;
    v167 = qvalue(elt(env, 7)); /* !*mcd */
    if (v167 == nil) goto v218;
    v167 = stack[-4];
    v167 = integerp(v167);
    if (!(v167 == nil)) goto v219;
    v167 = qvalue(elt(env, 8)); /* !*notseparate */
    if (!(v167 == nil)) goto v218;

v219:
    stack[-2] = stack[-5];
    stack[0] = stack[-3];
    v168 = stack[-1];
    v167 = stack[-3];
    v167 = quot2(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-1] = v167;
    v167 = times2(stack[0], v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = difference2(stack[-2], v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-5] = v167;
    v168 = stack[-5];
    v167 = (Lisp_Object)1; /* 0 */
    v167 = (Lisp_Object)lessp2(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    v167 = v167 ? lisp_true : nil;
    env = stack[-7];
    if (v167 == nil) goto v220;
    v167 = stack[-1];
    v167 = sub1(v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-1] = v167;
    v168 = stack[-5];
    v167 = stack[-3];
    v167 = plus2(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-5] = v167;
    goto v220;

v220:
    v168 = stack[-4];
    v167 = stack[-1];
    v167 = list2(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    fn = elt(env, 20); /* simpexpt */
    v167 = (*qfn1(fn))(qenv(fn), v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[0] = v167;
    v168 = stack[-5];
    v167 = (Lisp_Object)1; /* 0 */
    if (v168 == v167) { Lisp_Object res = stack[0]; popv(8); return onevalue(res); }
    v168 = stack[-3];
    v167 = (Lisp_Object)33; /* 2 */
    if (v168 == v167) goto v221;
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v222;

v222:
    if (v167 == nil) goto v223;
    stack[-1] = stack[0];
    v168 = elt(env, 10); /* sqrt */
    v167 = elt(env, 11); /* simpfn */
    stack[0] = get(v168, v167);
    env = stack[-7];
    v167 = stack[-4];
    v167 = ncons(v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = Lapply1(nil, stack[0], v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    fn = elt(env, 22); /* multsq */
    v167 = (*qfn2(fn))(qenv(fn), stack[-1], v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[0] = v167;
    v168 = stack[-5];
    v167 = (Lisp_Object)1; /* 0 */
    v167 = (Lisp_Object)lessp2(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    v167 = v167 ? lisp_true : nil;
    env = stack[-7];
    if (v167 == nil) goto v224;
    v167 = stack[0];
    fn = elt(env, 25); /* invsq */
    v167 = (*qfn1(fn))(qenv(fn), v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[0] = v167;
    v167 = stack[-5];
    v167 = negate(v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    stack[-5] = v167;
    goto v224;

v224:
    v168 = stack[0];
    v167 = stack[-5];
    {
        popv(8);
        fn = elt(env, 26); /* exptsq */
        return (*qfn2(fn))(qenv(fn), v168, v167);
    }

v223:
    v167 = stack[-4];
    fn = elt(env, 27); /* simp!* */
    v168 = (*qfn1(fn))(qenv(fn), v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = stack[-3];
    fn = elt(env, 28); /* simprad */
    v168 = (*qfn2(fn))(qenv(fn), v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = stack[-5];
    fn = elt(env, 26); /* exptsq */
    v167 = (*qfn2(fn))(qenv(fn), v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    {
        Lisp_Object v225 = stack[0];
        popv(8);
        fn = elt(env, 22); /* multsq */
        return (*qfn2(fn))(qenv(fn), v225, v167);
    }

v221:
    v167 = qvalue(elt(env, 9)); /* !*keepsqrts */
    goto v222;

v218:
    v167 = (Lisp_Object)1; /* 0 */
    stack[-1] = v167;
    goto v220;

v216:
    v167 = stack[-1];
    stack[-5] = v167;
    v167 = (Lisp_Object)17; /* 1 */
    stack[-1] = v167;
    goto v197;

v215:
    v167 = (Lisp_Object)17; /* 1 */
    stack[-5] = v167;
    goto v197;

v179:
    v168 = qvalue(elt(env, 6)); /* frlis!* */
    v167 = stack[-1];
    fn = elt(env, 29); /* smemqlp */
    v167 = (*qfn2(fn))(qenv(fn), v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    if (!(v167 == nil)) goto v226;
    v168 = qvalue(elt(env, 6)); /* frlis!* */
    v167 = stack[-3];
    fn = elt(env, 29); /* smemqlp */
    v167 = (*qfn2(fn))(qenv(fn), v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    if (v167 == nil) goto v180;
    else goto v226;

v226:
    stack[0] = elt(env, 4); /* expt */
    stack[-2] = stack[-4];
    v168 = stack[-3];
    v167 = (Lisp_Object)17; /* 1 */
    if (v168 == v167) goto v227;
    v169 = elt(env, 3); /* quotient */
    v168 = stack[-1];
    v167 = stack[-3];
    v167 = list3(v169, v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    goto v228;

v228:
    v168 = list3(stack[0], stack[-2], v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = (Lisp_Object)17; /* 1 */
    {
        popv(8);
        fn = elt(env, 24); /* mksq */
        return (*qfn2(fn))(qenv(fn), v168, v167);
    }

v227:
    v167 = stack[-1];
    goto v228;

v176:
    v167 = stack[-3];
    v167 = integerp(v167);
    goto v177;

v173:
    stack[-6] = elt(env, 4); /* expt */
    stack[-5] = elt(env, 5); /* i */
    stack[-2] = elt(env, 3); /* quotient */
    stack[0] = (Lisp_Object)17; /* 1 */
    v168 = stack[-3];
    v167 = (Lisp_Object)33; /* 2 */
    v167 = quot2(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = list3(stack[-2], stack[0], v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = list3(stack[-6], stack[-5], v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    fn = elt(env, 23); /* simp */
    stack[0] = (*qfn1(fn))(qenv(fn), v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = stack[-4];
    v167 = qcdr(v167);
    stack[-2] = qcar(v167);
    v169 = elt(env, 3); /* quotient */
    v168 = stack[-1];
    v167 = stack[-3];
    v167 = list3(v169, v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = list2(stack[-2], v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    fn = elt(env, 20); /* simpexpt */
    v167 = (*qfn1(fn))(qenv(fn), v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    {
        Lisp_Object v229 = stack[0];
        popv(8);
        fn = elt(env, 22); /* multsq */
        return (*qfn2(fn))(qenv(fn), v229, v167);
    }

v174:
    v168 = stack[-1];
    v167 = elt(env, 3); /* quotient */
    if (!consp(v168)) goto v230;
    v168 = qcar(v168);
    if (!(v168 == v167)) goto v230;
    v167 = stack[-1];
    v167 = qcdr(v167);
    v168 = qcar(v167);
    v167 = (Lisp_Object)17; /* 1 */
    if (v168 == v167) goto v231;
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v175;

v231:
    v167 = stack[-1];
    v167 = qcdr(v167);
    v167 = qcdr(v167);
    v167 = qcar(v167);
    v167 = integerp(v167);
    if (v167 == nil) goto v232;
    v167 = stack[-1];
    v167 = qcdr(v167);
    v167 = qcdr(v167);
    v168 = qcar(v167);
    v167 = (Lisp_Object)33; /* 2 */
    v168 = Cremainder(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = (Lisp_Object)1; /* 0 */
    v167 = (v168 == v167 ? lisp_true : nil);
    goto v175;

v232:
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v175;

v230:
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v175;

v171:
    v167 = stack[-3];
    v167 = integerp(v167);
    if (v167 == nil) goto v233;
    v168 = stack[-3];
    v167 = (Lisp_Object)33; /* 2 */
    v168 = Cremainder(v168, v167);
    nil = C_nil;
    if (exception_pending()) goto v178;
    env = stack[-7];
    v167 = (Lisp_Object)1; /* 0 */
    v167 = (v168 == v167 ? lisp_true : nil);
    goto v172;

v233:
    v167 = qvalue(elt(env, 2)); /* nil */
    goto v172;
/* error exit handlers */
v178:
    popv(8);
    return nil;
}



/* Code for make!-var!-coefflist */

static Lisp_Object MS_CDECL CC_makeKvarKcoefflist(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, Lisp_Object v234,
                         Lisp_Object v9, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v240, v241, v242, v243, v164;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 5, "make-var-coefflist");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for make-var-coefflist");
#endif
    if (stack >= stacklimit)
    {
        push5(v9,v234,v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop5(v0,v1,v2,v234,v9);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v240 = v9;
    v241 = v234;
    v242 = v2;
    v243 = v1;
    v164 = v0;
/* end of prologue */
    fn = elt(env, 1); /* make!-var!-powerlist */
    v242 = (*qfnn(fn))(qenv(fn), 5, v164, v243, v242, v241, v240);
    errexit();
    v241 = (Lisp_Object)17; /* 1 */
    v240 = (Lisp_Object)17; /* 1 */
    return list2star(v242, v241, v240);
}



/* Code for get_nr_irred_reps */

static Lisp_Object CC_get_nr_irred_reps(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v244, v245;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for get_nr_irred_reps");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v245 = v0;
/* end of prologue */
    v244 = qvalue(elt(env, 1)); /* !*complex */
    if (v244 == nil) goto v246;
    v244 = v245;
    {
        fn = elt(env, 2); /* get!*nr!*complex!*irred!*reps */
        return (*qfn1(fn))(qenv(fn), v244);
    }

v246:
    v244 = v245;
    {
        fn = elt(env, 3); /* get!*nr!*real!*irred!*reps */
        return (*qfn1(fn))(qenv(fn), v244);
    }
}



/* Code for iscale */

static Lisp_Object CC_iscale(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v165, v248, v249;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for iscale");
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
    push(nil);
/* copy arguments values to proper place */
    v248 = v1;
    v249 = v0;
/* end of prologue */
    v165 = v248;
    v165 = qcdr(v165);
    stack[0] = qcar(v165);
    v165 = v249;
    v248 = qcdr(v248);
    v248 = qcdr(v248);
    v165 = plus2(v165, v248);
    nil = C_nil;
    if (exception_pending()) goto v238;
    {
        Lisp_Object v239 = stack[0];
        popv(1);
        return Lash1(nil, v239, v165);
    }
/* error exit handlers */
v238:
    popv(1);
    return nil;
}



/* Code for rand!-comb */

static Lisp_Object CC_randKcomb(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v272, v273, v274;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for rand-comb");
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
    stack[-3] = v1;
    stack[-1] = v0;
/* end of prologue */
    v273 = stack[-3];
    v272 = stack[-1];
    if (equal(v273, v272)) goto v75;
    stack[-2] = nil;
    v273 = stack[-1];
    v272 = stack[-3];
    v273 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v272 = stack[-3];
    v272 = (Lisp_Object)lessp2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    v272 = v272 ? lisp_true : nil;
    env = stack[-5];
    if (v272 == nil) goto v173;
    stack[0] = stack[-1];
    v273 = stack[-1];
    v272 = stack[-3];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v272 = CC_randKcomb(env, stack[0], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    stack[-3] = v272;
    v272 = (Lisp_Object)1; /* 0 */
    stack[0] = v272;
    goto v276;

v276:
    v272 = stack[-1];
    v273 = sub1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v272 = stack[0];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v272 = Lminusp(nil, v272);
    env = stack[-5];
    if (!(v272 == nil)) { Lisp_Object res = stack[-2]; popv(6); return onevalue(res); }
    v273 = stack[0];
    v272 = stack[-3];
    v272 = Lmember(nil, v273, v272);
    if (!(v272 == nil)) goto v149;
    v273 = stack[0];
    v272 = stack[-2];
    v272 = cons(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    stack[-2] = v272;
    goto v149;

v149:
    v272 = stack[0];
    v272 = add1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    stack[0] = v272;
    goto v276;

v173:
    v272 = (Lisp_Object)1; /* 0 */
    stack[0] = v272;
    goto v277;

v277:
    v272 = stack[-3];
    v273 = sub1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v272 = stack[0];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v272 = Lminusp(nil, v272);
    env = stack[-5];
    if (!(v272 == nil)) { Lisp_Object res = stack[-2]; popv(6); return onevalue(res); }

v278:
    v272 = stack[-1];
    fn = elt(env, 2); /* random */
    v273 = (*qfn1(fn))(qenv(fn), v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v274 = v273;
    v272 = stack[-2];
    v272 = Lmember(nil, v273, v272);
    if (!(v272 == nil)) goto v278;
    v273 = v274;
    v272 = stack[-2];
    v272 = cons(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    stack[-2] = v272;
    v272 = stack[0];
    v272 = add1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    stack[0] = v272;
    goto v277;

v75:
    v272 = (Lisp_Object)1; /* 0 */
    stack[-4] = v272;
    v272 = stack[-3];
    v273 = sub1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v272 = stack[-4];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v272 = Lminusp(nil, v272);
    env = stack[-5];
    if (v272 == nil) goto v165;
    v272 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v272); }

v165:
    v272 = stack[-4];
    v272 = ncons(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    stack[-1] = v272;
    stack[-2] = v272;
    goto v279;

v279:
    v272 = stack[-4];
    v272 = add1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    stack[-4] = v272;
    v272 = stack[-3];
    v273 = sub1(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v272 = stack[-4];
    v272 = difference2(v273, v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v272 = Lminusp(nil, v272);
    env = stack[-5];
    if (!(v272 == nil)) { Lisp_Object res = stack[-2]; popv(6); return onevalue(res); }
    stack[0] = stack[-1];
    v272 = stack[-4];
    v272 = ncons(v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v272 = Lrplacd(nil, stack[0], v272);
    nil = C_nil;
    if (exception_pending()) goto v275;
    env = stack[-5];
    v272 = stack[-1];
    v272 = qcdr(v272);
    stack[-1] = v272;
    goto v279;
/* error exit handlers */
v275:
    popv(6);
    return nil;
}



/* Code for lispcondp */

static Lisp_Object CC_lispcondp(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v212, v246;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lispcondp");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v212 = v0;
/* end of prologue */
    v246 = elt(env, 1); /* cond */
        return Leqcar(nil, v212, v246);
}



/* Code for asymmetrize!-inds */

static Lisp_Object CC_asymmetrizeKinds(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v217, v314;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for asymmetrize-inds");
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
    stack[-8] = v1;
    stack[-9] = v0;
/* end of prologue */
    v217 = (Lisp_Object)1; /* 0 */
    stack[-10] = v217;
    v217 = stack[-9];
    stack[-7] = v217;
    v217 = stack[-7];
    if (v217 == nil) goto v166;
    v217 = stack[-7];
    v217 = qcar(v217);
    v314 = v217;
    if (!consp(v314)) goto v242;
    stack[-3] = v217;
    v217 = stack[-3];
    if (v217 == nil) goto v315;
    v217 = stack[-3];
    v217 = qcar(v217);
    v314 = stack[-8];
    fn = elt(env, 2); /* pnth */
    v217 = (*qfn2(fn))(qenv(fn), v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = qcar(v217);
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    stack[-1] = v217;
    stack[-2] = v217;
    goto v317;

v317:
    v217 = stack[-3];
    v217 = qcdr(v217);
    stack[-3] = v217;
    v217 = stack[-3];
    if (v217 == nil) goto v318;
    stack[0] = stack[-1];
    v217 = stack[-3];
    v217 = qcar(v217);
    v314 = stack[-8];
    fn = elt(env, 2); /* pnth */
    v217 = (*qfn2(fn))(qenv(fn), v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = qcar(v217);
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = Lrplacd(nil, stack[0], v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = stack[-1];
    v217 = qcdr(v217);
    stack[-1] = v217;
    goto v317;

v318:
    v217 = stack[-2];
    goto v171;

v171:
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    stack[-5] = v217;
    stack[-6] = v217;
    goto v319;

v319:
    v217 = stack[-7];
    v217 = qcdr(v217);
    stack[-7] = v217;
    v217 = stack[-7];
    if (v217 == nil) goto v232;
    stack[-4] = stack[-5];
    v217 = stack[-7];
    v217 = qcar(v217);
    v314 = v217;
    if (!consp(v314)) goto v262;
    stack[-3] = v217;
    v217 = stack[-3];
    if (v217 == nil) goto v320;
    v217 = stack[-3];
    v217 = qcar(v217);
    v314 = stack[-8];
    fn = elt(env, 2); /* pnth */
    v217 = (*qfn2(fn))(qenv(fn), v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = qcar(v217);
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    stack[-1] = v217;
    stack[-2] = v217;
    goto v321;

v321:
    v217 = stack[-3];
    v217 = qcdr(v217);
    stack[-3] = v217;
    v217 = stack[-3];
    if (v217 == nil) goto v322;
    stack[0] = stack[-1];
    v217 = stack[-3];
    v217 = qcar(v217);
    v314 = stack[-8];
    fn = elt(env, 2); /* pnth */
    v217 = (*qfn2(fn))(qenv(fn), v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = qcar(v217);
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = Lrplacd(nil, stack[0], v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = stack[-1];
    v217 = qcdr(v217);
    stack[-1] = v217;
    goto v321;

v322:
    v217 = stack[-2];
    goto v323;

v323:
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = Lrplacd(nil, stack[-4], v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = stack[-5];
    v217 = qcdr(v217);
    stack[-5] = v217;
    goto v319;

v320:
    v217 = qvalue(elt(env, 1)); /* nil */
    goto v323;

v262:
    v314 = stack[-8];
    fn = elt(env, 2); /* pnth */
    v217 = (*qfn2(fn))(qenv(fn), v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = qcar(v217);
    goto v323;

v232:
    v217 = stack[-6];
    goto v245;

v245:
    stack[0] = v217;
    v217 = stack[0];
    fn = elt(env, 3); /* repeats */
    v217 = (*qfn1(fn))(qenv(fn), v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    if (v217 == nil) goto v274;
    v217 = qvalue(elt(env, 1)); /* nil */
    { popv(12); return onevalue(v217); }

v274:
    v217 = stack[0];
    v217 = qcar(v217);
    if (!consp(v217)) goto v324;
    v217 = stack[0];
    fn = elt(env, 4); /* indordln */
    v217 = (*qfn1(fn))(qenv(fn), v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v314 = v217;
    goto v275;

v275:
    stack[-5] = v314;
    v217 = stack[0];
    fn = elt(env, 5); /* permp */
    v217 = (*qfn2(fn))(qenv(fn), v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    if (v217 == nil) goto v120;
    v217 = (Lisp_Object)17; /* 1 */
    goto v176;

v176:
    stack[0] = v217;
    v217 = stack[-9];
    v217 = qcar(v217);
    if (!consp(v217)) goto v325;
    v217 = stack[-9];
    fn = elt(env, 6); /* flatindl */
    v217 = (*qfn1(fn))(qenv(fn), v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    stack[-9] = v217;
    v217 = stack[-5];
    fn = elt(env, 6); /* flatindl */
    v217 = (*qfn1(fn))(qenv(fn), v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    stack[-5] = v217;
    goto v325;

v325:
    v314 = stack[-9];
    v217 = stack[-5];
    fn = elt(env, 7); /* pair */
    v217 = (*qfn2(fn))(qenv(fn), v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    stack[-5] = v217;
    stack[-6] = stack[0];
    v217 = stack[-8];
    stack[-7] = v217;
    v217 = stack[-7];
    if (v217 == nil) goto v326;
    v217 = stack[-7];
    v217 = qcar(v217);
    stack[-1] = v217;
    v217 = stack[-5];
    if (v217 == nil) goto v106;
    v217 = stack[-5];
    v217 = qcar(v217);
    stack[0] = qcar(v217);
    v217 = stack[-10];
    v217 = add1(v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    stack[-10] = v217;
    if (!(equal(stack[0], v217))) goto v106;
    v217 = stack[-5];
    v217 = qcar(v217);
    v217 = qcdr(v217);
    v314 = v217;
    v217 = stack[-5];
    v217 = qcdr(v217);
    stack[-5] = v217;
    v217 = v314;
    goto v327;

v327:
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    stack[-3] = v217;
    stack[-4] = v217;
    goto v328;

v328:
    v217 = stack[-7];
    v217 = qcdr(v217);
    stack[-7] = v217;
    v217 = stack[-7];
    if (v217 == nil) goto v329;
    stack[-2] = stack[-3];
    v217 = stack[-7];
    v217 = qcar(v217);
    stack[-1] = v217;
    v217 = stack[-5];
    if (v217 == nil) goto v330;
    v217 = stack[-5];
    v217 = qcar(v217);
    stack[0] = qcar(v217);
    v217 = stack[-10];
    v217 = add1(v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    stack[-10] = v217;
    if (!(equal(stack[0], v217))) goto v330;
    v217 = stack[-5];
    v217 = qcar(v217);
    v217 = qcdr(v217);
    v314 = v217;
    v217 = stack[-5];
    v217 = qcdr(v217);
    stack[-5] = v217;
    v217 = v314;
    goto v108;

v108:
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = Lrplacd(nil, stack[-2], v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = stack[-3];
    v217 = qcdr(v217);
    stack[-3] = v217;
    goto v328;

v330:
    v217 = stack[-1];
    goto v108;

v329:
    v217 = stack[-4];
    goto v331;

v331:
    {
        Lisp_Object v332 = stack[-6];
        popv(12);
        return cons(v332, v217);
    }

v106:
    v217 = stack[-1];
    goto v327;

v326:
    v217 = qvalue(elt(env, 1)); /* nil */
    goto v331;

v120:
    v217 = (Lisp_Object)-15; /* -1 */
    goto v176;

v324:
    v217 = stack[0];
    fn = elt(env, 8); /* indordn */
    v217 = (*qfn1(fn))(qenv(fn), v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v314 = v217;
    goto v275;

v315:
    v217 = qvalue(elt(env, 1)); /* nil */
    goto v171;

v242:
    v314 = stack[-8];
    fn = elt(env, 2); /* pnth */
    v217 = (*qfn2(fn))(qenv(fn), v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v316;
    env = stack[-11];
    v217 = qcar(v217);
    goto v171;

v166:
    v217 = qvalue(elt(env, 1)); /* nil */
    goto v245;
/* error exit handlers */
v316:
    popv(12);
    return nil;
}



/* Code for requote1 */

static Lisp_Object CC_requote1(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v264, v152;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for requote1");
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
    stack[0] = nil;
    goto v8;

v8:
    v264 = stack[-1];
    if (v264 == nil) goto v180;
    v264 = stack[-1];
    v264 = qcar(v264);
    if (is_number(v264)) goto v171;
    v264 = stack[-1];
    v152 = qcar(v264);
    v264 = elt(env, 1); /* (nil t) */
    v264 = Lmemq(nil, v152, v264);
    if (!(v264 == nil)) goto v171;
    v264 = stack[-1];
    v264 = qcar(v264);
    if (!consp(v264)) goto v163;
    v264 = stack[-1];
    v264 = qcar(v264);
    v152 = qcar(v264);
    v264 = elt(env, 3); /* quote */
    if (v152 == v264) goto v339;
    v264 = stack[-1];
    v264 = qcar(v264);
    v152 = qcar(v264);
    v264 = elt(env, 4); /* list */
    if (v152 == v264) goto v312;
    v264 = qvalue(elt(env, 2)); /* nil */
    goto v175;

v175:
    if (v264 == nil) goto v340;
    v152 = stack[0];
    v264 = stack[-2];
    v264 = cons(v152, v264);
    nil = C_nil;
    if (exception_pending()) goto v232;
    env = stack[-3];
    stack[-2] = v264;
    goto v280;

v280:
    v264 = stack[-1];
    v264 = qcdr(v264);
    stack[-1] = v264;
    goto v8;

v340:
    v264 = qvalue(elt(env, 2)); /* nil */
    { popv(4); return onevalue(v264); }

v312:
    v264 = stack[-1];
    v264 = qcar(v264);
    v264 = qcdr(v264);
    v264 = CC_requote1(env, v264);
    nil = C_nil;
    if (exception_pending()) goto v232;
    env = stack[-3];
    stack[0] = v264;
    goto v175;

v339:
    v264 = stack[-1];
    v264 = qcar(v264);
    v264 = qcdr(v264);
    v152 = qcar(v264);
    v264 = stack[-2];
    v264 = cons(v152, v264);
    nil = C_nil;
    if (exception_pending()) goto v232;
    env = stack[-3];
    stack[-2] = v264;
    goto v280;

v163:
    v264 = qvalue(elt(env, 2)); /* nil */
    { popv(4); return onevalue(v264); }

v171:
    v264 = stack[-1];
    v152 = qcar(v264);
    v264 = stack[-2];
    v264 = cons(v152, v264);
    nil = C_nil;
    if (exception_pending()) goto v232;
    env = stack[-3];
    stack[-2] = v264;
    goto v280;

v180:
    v264 = stack[-2];
        popv(4);
        return Lnreverse(nil, v264);
/* error exit handlers */
v232:
    popv(4);
    return nil;
}



/* Code for actual_world */

static Lisp_Object CC_actual_world(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v341, v166, v165;
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
    v166 = v1;
    v165 = v0;
/* end of prologue */
    v341 = v165;
    stack[0] = qcar(v341);
    v341 = v166;
    v166 = v165;
    v166 = qcdr(v166);
    fn = elt(env, 1); /* exclude_edges */
    v341 = (*qfn2(fn))(qenv(fn), v341, v166);
    nil = C_nil;
    if (exception_pending()) goto v249;
    env = stack[-1];
    {
        Lisp_Object v342 = stack[0];
        popv(2);
        fn = elt(env, 2); /* union_edges */
        return (*qfn2(fn))(qenv(fn), v342, v341);
    }
/* error exit handlers */
v249:
    popv(2);
    return nil;
}



/* Code for normmat */

static Lisp_Object CC_normmat(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v257, v258;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for normmat");
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
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    v258 = v0;
/* end of prologue */
    stack[-6] = nil;
    v257 = (Lisp_Object)17; /* 1 */
    stack[-8] = v257;
    v257 = v258;
    stack[-5] = v257;
    goto v246;

v246:
    v257 = stack[-5];
    if (v257 == nil) goto v260;
    v257 = stack[-5];
    v257 = qcar(v257);
    stack[-1] = v257;
    v257 = (Lisp_Object)17; /* 1 */
    stack[-7] = v257;
    v257 = stack[-1];
    stack[0] = v257;
    goto v238;

v238:
    v257 = stack[0];
    if (v257 == nil) goto v352;
    v257 = stack[0];
    v257 = qcar(v257);
    v258 = stack[-7];
    v257 = qcdr(v257);
    fn = elt(env, 2); /* lcm */
    v257 = (*qfn2(fn))(qenv(fn), v258, v257);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-9];
    stack[-7] = v257;
    v257 = stack[0];
    v257 = qcdr(v257);
    stack[0] = v257;
    goto v238;

v352:
    v257 = stack[-1];
    stack[-4] = v257;
    v257 = stack[-4];
    if (v257 == nil) goto v336;
    v257 = stack[-4];
    v257 = qcar(v257);
    v258 = v257;
    stack[0] = qcar(v258);
    v258 = stack[-7];
    v257 = qcdr(v257);
    fn = elt(env, 3); /* quotf */
    v257 = (*qfn2(fn))(qenv(fn), v258, v257);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-9];
    fn = elt(env, 4); /* multf */
    v257 = (*qfn2(fn))(qenv(fn), stack[0], v257);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-9];
    v257 = ncons(v257);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-9];
    stack[-2] = v257;
    stack[-3] = v257;
    goto v161;

v161:
    v257 = stack[-4];
    v257 = qcdr(v257);
    stack[-4] = v257;
    v257 = stack[-4];
    if (v257 == nil) goto v231;
    stack[-1] = stack[-2];
    v257 = stack[-4];
    v257 = qcar(v257);
    v258 = v257;
    stack[0] = qcar(v258);
    v258 = stack[-7];
    v257 = qcdr(v257);
    fn = elt(env, 3); /* quotf */
    v257 = (*qfn2(fn))(qenv(fn), v258, v257);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-9];
    fn = elt(env, 4); /* multf */
    v257 = (*qfn2(fn))(qenv(fn), stack[0], v257);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-9];
    v257 = ncons(v257);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-9];
    v257 = Lrplacd(nil, stack[-1], v257);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-9];
    v257 = stack[-2];
    v257 = qcdr(v257);
    stack[-2] = v257;
    goto v161;

v231:
    v257 = stack[-3];
    v258 = v257;
    goto v270;

v270:
    v257 = stack[-6];
    v257 = cons(v258, v257);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-9];
    stack[-6] = v257;
    v258 = stack[-7];
    v257 = stack[-8];
    fn = elt(env, 4); /* multf */
    v257 = (*qfn2(fn))(qenv(fn), v258, v257);
    nil = C_nil;
    if (exception_pending()) goto v137;
    env = stack[-9];
    stack[-8] = v257;
    v257 = stack[-5];
    v257 = qcdr(v257);
    stack[-5] = v257;
    goto v246;

v336:
    v257 = qvalue(elt(env, 1)); /* nil */
    v258 = v257;
    goto v270;

v260:
    v257 = stack[-6];
    v258 = Lreverse(nil, v257);
    nil = C_nil;
    if (exception_pending()) goto v137;
    v257 = stack[-8];
    popv(10);
    return cons(v258, v257);
/* error exit handlers */
v137:
    popv(10);
    return nil;
}



/* Code for small!-primep */

static Lisp_Object CC_smallKprimep(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v357, v127;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for small-primep");
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
    v357 = stack[-8];
    v357 = Levenp(nil, v357);
    env = stack[-10];
    if (!(v357 == nil)) goto v166;
    v127 = stack[-8];
    v357 = (Lisp_Object)49; /* 3 */
    v127 = Cremainder(v127, v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    v357 = (Lisp_Object)1; /* 0 */
    if (v127 == v357) goto v166;
    v357 = stack[-8];
    v357 = sub1(v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    stack[-6] = v357;
    v357 = stack[-8];
    v357 = Lset_small_modulus(nil, v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    stack[-3] = v357;
    v357 = (Lisp_Object)1; /* 0 */
    stack[-7] = v357;
    goto v352;

v352:
    v357 = stack[-6];
    v357 = Levenp(nil, v357);
    env = stack[-10];
    if (v357 == nil) goto v304;
    v127 = stack[-6];
    v357 = (Lisp_Object)33; /* 2 */
    v357 = quot2(v127, v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    stack[-6] = v357;
    v357 = stack[-7];
    v357 = add1(v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    stack[-7] = v357;
    goto v352;

v304:
    v357 = (Lisp_Object)17; /* 1 */
    stack[-9] = v357;
    v357 = qvalue(elt(env, 2)); /* t */
    stack[-2] = v357;
    goto v359;

v359:
    v357 = stack[-2];
    if (v357 == nil) goto v350;
    v127 = stack[-9];
    v357 = qvalue(elt(env, 3)); /* !*confidence!* */
    v357 = (Lisp_Object)lesseq2(v127, v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    v357 = v357 ? lisp_true : nil;
    env = stack[-10];
    if (v357 == nil) goto v350;
    v127 = stack[-8];
    v357 = (Lisp_Object)33; /* 2 */
    v357 = difference2(v127, v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    fn = elt(env, 4); /* random */
    v357 = (*qfn1(fn))(qenv(fn), v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    v357 = add1(v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    v127 = v357;
    v357 = stack[-6];
    v357 = Lmodular_expt(nil, v127, v357);
    env = stack[-10];
    stack[-5] = v357;
    v127 = stack[-5];
    v357 = (Lisp_Object)17; /* 1 */
    if (v127 == v357) goto v266;
    v357 = (Lisp_Object)17; /* 1 */
    stack[-1] = v357;
    goto v360;

v360:
    v127 = stack[-7];
    v357 = stack[-1];
    v357 = difference2(v127, v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    v357 = Lminusp(nil, v357);
    env = stack[-10];
    if (v357 == nil) goto v259;
    v127 = stack[-5];
    v357 = (Lisp_Object)17; /* 1 */
    if (v127 == v357) goto v266;
    v357 = qvalue(elt(env, 1)); /* nil */
    stack[-2] = v357;
    goto v266;

v266:
    v357 = stack[-9];
    v357 = add1(v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    stack[-9] = v357;
    goto v359;

v259:
    v127 = stack[-5];
    v357 = stack[-5];
    v357 = Lmodular_times(nil, v127, v357);
    env = stack[-10];
    stack[-4] = v357;
    v127 = stack[-4];
    v357 = (Lisp_Object)17; /* 1 */
    if (v127 == v357) goto v277;
    v357 = qvalue(elt(env, 1)); /* nil */
    goto v361;

v361:
    if (v357 == nil) goto v130;
    v357 = qvalue(elt(env, 1)); /* nil */
    stack[-2] = v357;
    goto v320;

v320:
    v357 = stack[-1];
    v357 = add1(v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    stack[-1] = v357;
    goto v360;

v130:
    v357 = stack[-4];
    stack[-5] = v357;
    goto v320;

v277:
    stack[0] = stack[-5];
    v357 = stack[-8];
    v357 = sub1(v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    if (equal(stack[0], v357)) goto v362;
    v127 = stack[-5];
    v357 = (Lisp_Object)17; /* 1 */
    v357 = Lneq(nil, v127, v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    env = stack[-10];
    goto v361;

v362:
    v357 = qvalue(elt(env, 1)); /* nil */
    goto v361;

v350:
    v357 = stack[-3];
    v357 = Lset_small_modulus(nil, v357);
    nil = C_nil;
    if (exception_pending()) goto v358;
    { Lisp_Object res = stack[-2]; popv(11); return onevalue(res); }

v166:
    v357 = qvalue(elt(env, 1)); /* nil */
    { popv(11); return onevalue(v357); }
/* error exit handlers */
v358:
    popv(11);
    return nil;
}



/* Code for basic!-kern1 */

static Lisp_Object CC_basicKkern1(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v175, v312;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for basic-kern1");
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
    v175 = stack[-3];
    if (!consp(v175)) goto v294;
    v175 = stack[-3];
    v175 = qcar(v175);
    fn = elt(env, 2); /* algebraic!-function */
    v175 = (*qfn1(fn))(qenv(fn), v175);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    if (v175 == nil) goto v337;
    v175 = stack[-3];
    v175 = qcdr(v175);
    stack[-4] = v175;
    v175 = stack[-4];
    if (v175 == nil) goto v171;
    v175 = stack[-4];
    v175 = qcar(v175);
    fn = elt(env, 3); /* simp */
    v175 = (*qfn1(fn))(qenv(fn), v175);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    v175 = ncons(v175);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    stack[-1] = v175;
    stack[-2] = v175;
    goto v342;

v342:
    v175 = stack[-4];
    v175 = qcdr(v175);
    stack[-4] = v175;
    v175 = stack[-4];
    if (v175 == nil) goto v363;
    stack[0] = stack[-1];
    v175 = stack[-4];
    v175 = qcar(v175);
    fn = elt(env, 3); /* simp */
    v175 = (*qfn1(fn))(qenv(fn), v175);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    v175 = ncons(v175);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    v175 = Lrplacd(nil, stack[0], v175);
    nil = C_nil;
    if (exception_pending()) goto v318;
    env = stack[-5];
    v175 = stack[-1];
    v175 = qcdr(v175);
    stack[-1] = v175;
    goto v342;

v363:
    v175 = stack[-2];
    goto v249;

v249:
    fn = elt(env, 4); /* allbkern */
    v175 = (*qfn1(fn))(qenv(fn), v175);
    nil = C_nil;
    if (exception_pending()) goto v318;
    v312 = v175;
    if (!(v175 == nil)) { popv(6); return onevalue(v312); }

v337:
    v175 = stack[-3];
    popv(6);
    return ncons(v175);

v171:
    v175 = qvalue(elt(env, 1)); /* nil */
    goto v249;

v294:
    v175 = stack[-3];
    popv(6);
    return ncons(v175);
/* error exit handlers */
v318:
    popv(6);
    return nil;
}



/* Code for allbkern */

static Lisp_Object CC_allbkern(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v338, v159;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for allbkern");
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
    goto v8;

v8:
    v338 = stack[0];
    if (v338 == nil) goto v294;
    v338 = stack[0];
    v338 = qcar(v338);
    v159 = qcar(v338);
    v338 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 2); /* kernels1 */
    v338 = (*qfn2(fn))(qenv(fn), v159, v338);
    nil = C_nil;
    if (exception_pending()) goto v349;
    env = stack[-2];
    fn = elt(env, 3); /* basic!-kern */
    v159 = (*qfn1(fn))(qenv(fn), v338);
    nil = C_nil;
    if (exception_pending()) goto v349;
    env = stack[-2];
    v338 = stack[-1];
    v338 = cons(v159, v338);
    nil = C_nil;
    if (exception_pending()) goto v349;
    env = stack[-2];
    stack[-1] = v338;
    v338 = stack[0];
    v338 = qcdr(v338);
    stack[0] = v338;
    goto v8;

v294:
    v338 = qvalue(elt(env, 1)); /* nil */
    v159 = v338;
    goto v280;

v280:
    v338 = stack[-1];
    if (v338 == nil) { popv(3); return onevalue(v159); }
    v338 = stack[-1];
    v338 = qcar(v338);
    fn = elt(env, 4); /* union */
    v338 = (*qfn2(fn))(qenv(fn), v338, v159);
    nil = C_nil;
    if (exception_pending()) goto v349;
    env = stack[-2];
    v159 = v338;
    v338 = stack[-1];
    v338 = qcdr(v338);
    stack[-1] = v338;
    goto v280;
/* error exit handlers */
v349:
    popv(3);
    return nil;
}



/* Code for ofsf_facequal */

static Lisp_Object CC_ofsf_facequal(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v265, v266, v256;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ofsf_facequal");
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
    v265 = v0;
/* end of prologue */
    fn = elt(env, 7); /* fctrf */
    v265 = (*qfn1(fn))(qenv(fn), v265);
    nil = C_nil;
    if (exception_pending()) goto v366;
    env = stack[-4];
    v265 = qcdr(v265);
    stack[-3] = v265;
    v265 = stack[-3];
    if (v265 == nil) goto v271;
    v265 = stack[-3];
    v265 = qcar(v265);
    v256 = elt(env, 2); /* equal */
    v266 = qcar(v265);
    v265 = qvalue(elt(env, 1)); /* nil */
    v265 = list3(v256, v266, v265);
    nil = C_nil;
    if (exception_pending()) goto v366;
    env = stack[-4];
    v265 = ncons(v265);
    nil = C_nil;
    if (exception_pending()) goto v366;
    env = stack[-4];
    stack[-1] = v265;
    stack[-2] = v265;
    goto v294;

v294:
    v265 = stack[-3];
    v265 = qcdr(v265);
    stack[-3] = v265;
    v265 = stack[-3];
    if (v265 == nil) goto v164;
    stack[0] = stack[-1];
    v265 = stack[-3];
    v265 = qcar(v265);
    v256 = elt(env, 2); /* equal */
    v266 = qcar(v265);
    v265 = qvalue(elt(env, 1)); /* nil */
    v265 = list3(v256, v266, v265);
    nil = C_nil;
    if (exception_pending()) goto v366;
    env = stack[-4];
    v265 = ncons(v265);
    nil = C_nil;
    if (exception_pending()) goto v366;
    env = stack[-4];
    v265 = Lrplacd(nil, stack[0], v265);
    nil = C_nil;
    if (exception_pending()) goto v366;
    env = stack[-4];
    v265 = stack[-1];
    v265 = qcdr(v265);
    stack[-1] = v265;
    goto v294;

v164:
    v265 = stack[-2];
    goto v8;

v8:
    v266 = v265;
    v265 = v266;
    if (v265 == nil) goto v350;
    v265 = v266;
    v265 = qcdr(v265);
    if (v265 == nil) goto v350;
    v265 = elt(env, 3); /* or */
    popv(5);
    return cons(v265, v266);

v350:
    v265 = v266;
    if (v265 == nil) goto v367;
    v265 = v266;
    v265 = qcar(v265);
    { popv(5); return onevalue(v265); }

v367:
    v266 = elt(env, 3); /* or */
    v265 = elt(env, 4); /* and */
    if (v266 == v265) goto v153;
    v265 = elt(env, 6); /* false */
    { popv(5); return onevalue(v265); }

v153:
    v265 = elt(env, 5); /* true */
    { popv(5); return onevalue(v265); }

v271:
    v265 = qvalue(elt(env, 1)); /* nil */
    goto v8;
/* error exit handlers */
v366:
    popv(5);
    return nil;
}



/* Code for monomispommaretdivisibleby */

static Lisp_Object CC_monomispommaretdivisibleby(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v369, v370, v366;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for monomispommaretdivisibleby");
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
    v366 = v1;
    v369 = v0;
/* end of prologue */
    stack[0] = nil;
    v370 = v369;
    v369 = (Lisp_Object)17; /* 1 */
    v369 = *(Lisp_Object *)((char *)v370 + (CELL-TAG_VECTOR) + ((int32_t)v369/(16/CELL)));
    stack[-2] = v369;
    v370 = v366;
    v369 = (Lisp_Object)17; /* 1 */
    v369 = *(Lisp_Object *)((char *)v370 + (CELL-TAG_VECTOR) + ((int32_t)v369/(16/CELL)));
    stack[-1] = v369;
    goto v238;

v238:
    v369 = stack[-2];
    v369 = qcar(v369);
    if (v369 == nil) goto v270;
    v369 = stack[-2];
    v370 = qcar(v369);
    v369 = stack[-1];
    v369 = qcar(v369);
    v369 = (Lisp_Object)greaterp2(v370, v369);
    nil = C_nil;
    if (exception_pending()) goto v353;
    v369 = v369 ? lisp_true : nil;
    env = stack[-3];
    if (v369 == nil) goto v270;
    v369 = stack[-2];
    v369 = qcdr(v369);
    stack[-2] = v369;
    goto v238;

v270:
    v369 = stack[0];
    if (v369 == nil) goto v371;
    v369 = qvalue(elt(env, 1)); /* nil */
    goto v346;

v346:
    if (v369 == nil) goto v317;
    v369 = stack[-2];
    v370 = qcar(v369);
    v369 = stack[-1];
    v369 = qcar(v369);
    if (equal(v370, v369)) goto v367;
    v369 = qvalue(elt(env, 2)); /* t */
    stack[0] = v369;
    goto v270;

v367:
    v369 = stack[-2];
    v369 = qcdr(v369);
    stack[-2] = v369;
    v369 = stack[-1];
    v369 = qcdr(v369);
    stack[-1] = v369;
    goto v270;

v317:
    v369 = stack[-2];
    v369 = qcar(v369);
    if (v369 == nil) goto v152;
    v369 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v369); }

v152:
    v369 = stack[-1];
    v369 = qcar(v369);
    v369 = (v369 == nil ? lisp_true : nil);
    { popv(4); return onevalue(v369); }

v371:
    v369 = stack[-2];
    v369 = qcar(v369);
    if (v369 == nil) goto v336;
    v369 = stack[-1];
    v369 = qcar(v369);
    goto v346;

v336:
    v369 = qvalue(elt(env, 1)); /* nil */
    goto v346;
/* error exit handlers */
v353:
    popv(4);
    return nil;
}



/* Code for put!-kvalue */

static Lisp_Object MS_CDECL CC_putKkvalue(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, Lisp_Object v234, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v152, v151, v146, v356, v232;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "put-kvalue");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for put-kvalue");
#endif
    if (stack >= stacklimit)
    {
        push4(v234,v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0,v1,v2,v234);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v234;
    stack[-2] = v2;
    stack[-3] = v1;
    stack[0] = v0;
/* end of prologue */
    v151 = stack[-1];
    v152 = elt(env, 1); /* !*sq */
    if (!consp(v151)) goto v352;
    v151 = qcar(v151);
    if (!(v151 == v152)) goto v352;
    v151 = stack[-2];
    v152 = stack[-1];
    v152 = qcdr(v152);
    v152 = qcar(v152);
    v152 = qcar(v152);
    fn = elt(env, 6); /* sf_member */
    v152 = (*qfn2(fn))(qenv(fn), v151, v152);
    nil = C_nil;
    if (exception_pending()) goto v369;
    env = stack[-5];
    if (!(v152 == nil)) goto v212;
    v151 = stack[-2];
    v152 = stack[-1];
    v152 = qcdr(v152);
    v152 = qcar(v152);
    v152 = qcdr(v152);
    fn = elt(env, 6); /* sf_member */
    v152 = (*qfn2(fn))(qenv(fn), v151, v152);
    nil = C_nil;
    if (exception_pending()) goto v369;
    env = stack[-5];
    goto v212;

v212:
    if (v152 == nil) goto v156;
    v232 = qvalue(elt(env, 2)); /* nil */
    v356 = stack[-2];
    v146 = elt(env, 3); /* "improperly defined in terms of itself" */
    v151 = qvalue(elt(env, 2)); /* nil */
    v152 = qvalue(elt(env, 4)); /* t */
    {
        popv(6);
        fn = elt(env, 7); /* msgpri */
        return (*qfnn(fn))(qenv(fn), 5, v232, v356, v146, v151, v152);
    }

v156:
    stack[-4] = stack[0];
    stack[0] = elt(env, 5); /* kvalue */
    v151 = stack[-2];
    v152 = stack[-1];
    v152 = list2(v151, v152);
    nil = C_nil;
    if (exception_pending()) goto v369;
    env = stack[-5];
    v152 = ncons(v152);
    nil = C_nil;
    if (exception_pending()) goto v369;
    env = stack[-5];
    v152 = Lnconc(nil, stack[-3], v152);
    nil = C_nil;
    if (exception_pending()) goto v369;
    {
        Lisp_Object v370 = stack[-4];
        Lisp_Object v366 = stack[0];
        popv(6);
        return Lputprop(nil, 3, v370, v366, v152);
    }

v352:
    v151 = stack[-2];
    v152 = stack[-1];
    fn = elt(env, 8); /* smember */
    v152 = (*qfn2(fn))(qenv(fn), v151, v152);
    nil = C_nil;
    if (exception_pending()) goto v369;
    env = stack[-5];
    goto v212;
/* error exit handlers */
v369:
    popv(6);
    return nil;
}



/* Code for ofsf_sminsert1 */

static Lisp_Object MS_CDECL CC_ofsf_sminsert1(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, Lisp_Object v234,
                         Lisp_Object v9, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v377, v251, v125;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 5, "ofsf_sminsert1");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for ofsf_sminsert1");
#endif
    if (stack >= stacklimit)
    {
        push5(v9,v234,v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop5(v0,v1,v2,v234,v9);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[0] = v9;
    stack[-1] = v234;
    stack[-2] = v2;
    stack[-3] = v1;
    stack[-4] = v0;
/* end of prologue */
    stack[-5] = stack[-3];
    v377 = stack[-1];
    v377 = qcar(v377);
    fn = elt(env, 4); /* negf */
    v251 = (*qfn1(fn))(qenv(fn), v377);
    nil = C_nil;
    if (exception_pending()) goto v378;
    env = stack[-6];
    v377 = stack[-1];
    v377 = qcdr(v377);
    v377 = cons(v251, v377);
    nil = C_nil;
    if (exception_pending()) goto v378;
    env = stack[-6];
    fn = elt(env, 5); /* addsq */
    v377 = (*qfn2(fn))(qenv(fn), stack[-5], v377);
    nil = C_nil;
    if (exception_pending()) goto v378;
    env = stack[-6];
    v377 = qcar(v377);
    v251 = v377;
    v377 = v251;
    if (v377 == nil) goto v242;
    v377 = v251;
    fn = elt(env, 6); /* minusf */
    v377 = (*qfn1(fn))(qenv(fn), v377);
    nil = C_nil;
    if (exception_pending()) goto v378;
    env = stack[-6];
    if (v377 == nil) goto v321;
    v251 = stack[-4];
    v377 = stack[-2];
    fn = elt(env, 7); /* ofsf_smordtable */
    v377 = (*qfn2(fn))(qenv(fn), v251, v377);
    nil = C_nil;
    if (exception_pending()) goto v378;
    env = stack[-6];
    v125 = v377;
    v377 = v125;
    if (!consp(v377)) { popv(7); return onevalue(v125); }
    v251 = v125;
    v377 = stack[-4];
    if (!consp(v251)) goto v298;
    v251 = qcar(v251);
    if (!(v251 == v377)) goto v298;
    v377 = v125;
    v377 = qcdr(v377);
    goto v151;

v151:
    if (v377 == nil) goto v147;
    v377 = elt(env, 2); /* true */
    { popv(7); return onevalue(v377); }

v147:
    v251 = stack[0];
    v377 = v125;
    v377 = qcar(v377);
    v125 = qcdr(v125);
    if (v125 == nil) goto v259;
    v125 = stack[-3];
    goto v379;

v379:
    popv(7);
    return list2star(v251, v377, v125);

v259:
    v125 = stack[-1];
    goto v379;

v298:
    v377 = qvalue(elt(env, 3)); /* nil */
    goto v151;

v321:
    v251 = stack[-2];
    v377 = stack[-4];
    fn = elt(env, 7); /* ofsf_smordtable */
    v377 = (*qfn2(fn))(qenv(fn), v251, v377);
    nil = C_nil;
    if (exception_pending()) goto v378;
    env = stack[-6];
    v125 = v377;
    v377 = v125;
    if (!consp(v377)) { popv(7); return onevalue(v125); }
    v251 = v125;
    v377 = stack[-4];
    if (!consp(v251)) goto v380;
    v251 = qcar(v251);
    if (!(v251 == v377)) goto v380;
    v377 = v125;
    v377 = qcdr(v377);
    v377 = (v377 == nil ? lisp_true : nil);
    goto v136;

v136:
    if (v377 == nil) goto v354;
    v377 = elt(env, 2); /* true */
    { popv(7); return onevalue(v377); }

v354:
    v251 = stack[0];
    v377 = v125;
    v377 = qcar(v377);
    v125 = qcdr(v125);
    if (v125 == nil) goto v134;
    v125 = stack[-1];
    goto v278;

v278:
    popv(7);
    return list2star(v251, v377, v125);

v134:
    v125 = stack[-3];
    goto v278;

v380:
    v377 = qvalue(elt(env, 3)); /* nil */
    goto v136;

v242:
    v251 = stack[-4];
    v377 = stack[-2];
    fn = elt(env, 8); /* ofsf_smeqtable */
    v377 = (*qfn2(fn))(qenv(fn), v251, v377);
    nil = C_nil;
    if (exception_pending()) goto v378;
    env = stack[-6];
    v125 = v377;
    v251 = v125;
    v377 = elt(env, 1); /* false */
    if (v251 == v377) goto v363;
    v251 = stack[-4];
    v377 = v125;
    if (v251 == v377) goto v349;
    v251 = stack[0];
    v377 = stack[-3];
    popv(7);
    return list2star(v251, v125, v377);

v349:
    v377 = elt(env, 2); /* true */
    { popv(7); return onevalue(v377); }

v363:
    v377 = elt(env, 1); /* false */
    { popv(7); return onevalue(v377); }
/* error exit handlers */
v378:
    popv(7);
    return nil;
}



/* Code for qqe_length!-graph!-marked */

static Lisp_Object CC_qqe_lengthKgraphKmarked(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v212, v246;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for qqe_length-graph-marked");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v212 = v0;
/* end of prologue */
    v246 = elt(env, 1); /* blockmark */
    return get(v212, v246);
}



/* Code for lto_cartprod */

static Lisp_Object CC_lto_cartprod(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v165, v248;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for lto_cartprod");
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v248 = v0;
/* end of prologue */
    v165 = v248;
    if (v165 == nil) goto v280;
    v165 = v248;
    v165 = qcdr(v165);
    v165 = (v165 == nil ? lisp_true : nil);
    goto v294;

v294:
    if (!(v165 == nil)) return onevalue(v248);
    v165 = v248;
    {
        fn = elt(env, 2); /* lto_cartprod1 */
        return (*qfn1(fn))(qenv(fn), v165);
    }

v280:
    v165 = qvalue(elt(env, 1)); /* t */
    goto v294;
}



/* Code for aex_add */

static Lisp_Object CC_aex_add(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v309;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for aex_add");
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
    v309 = stack[-3];
    fn = elt(env, 2); /* aex_ex */
    stack[0] = (*qfn1(fn))(qenv(fn), v309);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-5];
    v309 = stack[-2];
    fn = elt(env, 2); /* aex_ex */
    v309 = (*qfn1(fn))(qenv(fn), v309);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-5];
    fn = elt(env, 3); /* ratpoly_add */
    stack[-4] = (*qfn2(fn))(qenv(fn), stack[0], v309);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-5];
    v309 = stack[-3];
    fn = elt(env, 4); /* aex_ctx */
    stack[0] = (*qfn1(fn))(qenv(fn), v309);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-5];
    v309 = stack[-2];
    fn = elt(env, 4); /* aex_ctx */
    v309 = (*qfn1(fn))(qenv(fn), v309);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-5];
    fn = elt(env, 5); /* ctx_union */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[0], v309);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-5];
    stack[0] = qvalue(elt(env, 1)); /* nil */
    v309 = stack[-3];
    fn = elt(env, 6); /* aex_reducedtag */
    v309 = (*qfn1(fn))(qenv(fn), v309);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-5];
    if (v309 == nil) goto v243;
    v309 = stack[-2];
    fn = elt(env, 6); /* aex_reducedtag */
    v309 = (*qfn1(fn))(qenv(fn), v309);
    nil = C_nil;
    if (exception_pending()) goto v270;
    env = stack[-5];
    goto v246;

v246:
    {
        Lisp_Object v338 = stack[-4];
        Lisp_Object v159 = stack[-1];
        Lisp_Object v315 = stack[0];
        popv(6);
        fn = elt(env, 7); /* aex_mk */
        return (*qfnn(fn))(qenv(fn), 4, v338, v159, v315, v309);
    }

v243:
    v309 = qvalue(elt(env, 1)); /* nil */
    goto v246;
/* error exit handlers */
v270:
    popv(6);
    return nil;
}



/* Code for dipbcprod */

static Lisp_Object CC_dipbcprod(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v342, v238;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dipbcprod");
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
    v342 = stack[0];
    fn = elt(env, 2); /* bczero!? */
    v342 = (*qfn1(fn))(qenv(fn), v342);
    nil = C_nil;
    if (exception_pending()) goto v172;
    env = stack[-2];
    if (v342 == nil) goto v8;
    v342 = qvalue(elt(env, 1)); /* dipzero */
    { popv(3); return onevalue(v342); }

v8:
    v342 = stack[0];
    fn = elt(env, 3); /* bcone!? */
    v342 = (*qfn1(fn))(qenv(fn), v342);
    nil = C_nil;
    if (exception_pending()) goto v172;
    env = stack[-2];
    if (!(v342 == nil)) { Lisp_Object res = stack[-1]; popv(3); return onevalue(res); }
    v238 = stack[-1];
    v342 = stack[0];
    {
        popv(3);
        fn = elt(env, 4); /* dipbcprodin */
        return (*qfn2(fn))(qenv(fn), v238, v342);
    }
/* error exit handlers */
v172:
    popv(3);
    return nil;
}



/* Code for setequal */

static Lisp_Object CC_setequal(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v238, v239;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for setequal");
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
    v239 = stack[-1];
    v238 = stack[0];
    fn = elt(env, 2); /* subsetp */
    v238 = (*qfn2(fn))(qenv(fn), v239, v238);
    nil = C_nil;
    if (exception_pending()) goto v171;
    env = stack[-2];
    if (v238 == nil) goto v75;
    v239 = stack[0];
    v238 = stack[-1];
    {
        popv(3);
        fn = elt(env, 2); /* subsetp */
        return (*qfn2(fn))(qenv(fn), v239, v238);
    }

v75:
    v238 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v238); }
/* error exit handlers */
v171:
    popv(3);
    return nil;
}



/* Code for acmemb */

static Lisp_Object CC_acmemb(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v172, v171;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for acmemb");
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

v75:
    v172 = stack[0];
    if (v172 == nil) goto v280;
    v171 = stack[-1];
    v172 = stack[0];
    v172 = qcar(v172);
    fn = elt(env, 2); /* aceq */
    v172 = (*qfn2(fn))(qenv(fn), v171, v172);
    nil = C_nil;
    if (exception_pending()) goto v240;
    env = stack[-2];
    if (v172 == nil) goto v342;
    v172 = stack[0];
    v172 = qcar(v172);
    { popv(3); return onevalue(v172); }

v342:
    v172 = stack[0];
    v172 = qcdr(v172);
    stack[0] = v172;
    goto v75;

v280:
    v172 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v172); }
/* error exit handlers */
v240:
    popv(3);
    return nil;
}



/* Code for gi */

static Lisp_Object CC_gi(Lisp_Object env,
                         Lisp_Object v1, Lisp_Object v2)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v352, v317;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for gi");
#endif
    if (stack >= stacklimit)
    {
        push2(v2,v1);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v1,v2);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-3] = v2;
    v352 = v1;
/* end of prologue */
    stack[-4] = qvalue(elt(env, 1)); /* gg */
    qvalue(elt(env, 1)) = nil; /* gg */
    qvalue(elt(env, 1)) = v352; /* gg */
    stack[-2] = nil;
    v352 = qvalue(elt(env, 1)); /* gg */
    stack[-1] = v352;
    goto v236;

v236:
    v352 = stack[-1];
    if (v352 == nil) goto v271;
    v352 = stack[-1];
    v352 = qcar(v352);
    stack[0] = v352;
    v352 = stack[0];
    v352 = qcdr(v352);
    fn = elt(env, 3); /* class */
    v317 = (*qfn1(fn))(qenv(fn), v352);
    nil = C_nil;
    if (exception_pending()) goto v349;
    env = stack[-5];
    v352 = stack[-3];
    if (!(equal(v317, v352))) goto v238;
    v317 = stack[0];
    v352 = stack[-2];
    v352 = cons(v317, v352);
    nil = C_nil;
    if (exception_pending()) goto v349;
    env = stack[-5];
    stack[-2] = v352;
    goto v238;

v238:
    v352 = stack[-1];
    v352 = qcdr(v352);
    stack[-1] = v352;
    goto v236;

v271:
    v352 = stack[-2];
    qvalue(elt(env, 1)) = stack[-4]; /* gg */
    { popv(6); return onevalue(v352); }
/* error exit handlers */
v349:
    env = stack[-5];
    qvalue(elt(env, 1)) = stack[-4]; /* gg */
    popv(6);
    return nil;
}



/* Code for dv_skelsplit */

static Lisp_Object CC_dv_skelsplit(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v217, v314, v403;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for dv_skelsplit");
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
    v217 = (Lisp_Object)1; /* 0 */
    stack[-5] = v217;
    v217 = stack[-9];
    fn = elt(env, 10); /* listp */
    v217 = (*qfn1(fn))(qenv(fn), v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    if (v217 == nil) goto v247;
    v217 = stack[-9];
    v314 = qcar(v217);
    v217 = elt(env, 3); /* symtree */
    v217 = get(v314, v217);
    env = stack[-11];
    stack[-10] = v217;
    v217 = stack[-10];
    if (!(v217 == nil)) goto v376;
    v217 = (Lisp_Object)17; /* 1 */
    stack[-3] = v217;
    v217 = stack[-9];
    v217 = qcdr(v217);
    v314 = Llength(nil, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    v217 = stack[-3];
    v217 = difference2(v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    v217 = Lminusp(nil, v217);
    env = stack[-11];
    if (v217 == nil) goto v306;
    v217 = qvalue(elt(env, 4)); /* nil */
    goto v365;

v365:
    stack[-10] = v217;
    v217 = stack[-9];
    v314 = qcar(v217);
    v217 = elt(env, 5); /* symmetric */
    v217 = Lflagp(nil, v314, v217);
    env = stack[-11];
    if (v217 == nil) goto v404;
    v314 = elt(env, 6); /* !+ */
    v217 = stack[-10];
    v217 = cons(v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-10] = v217;
    goto v376;

v376:
    v217 = stack[-9];
    v217 = qcdr(v217);
    v217 = Llength(nil, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    v217 = sub1(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    v217 = Lmkvect(nil, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-8] = v217;
    v217 = (Lisp_Object)1; /* 0 */
    stack[-7] = v217;
    v217 = stack[-9];
    v217 = qcdr(v217);
    stack[-4] = v217;
    goto v405;

v405:
    v217 = stack[-4];
    if (v217 == nil) goto v113;
    v217 = stack[-4];
    v217 = qcar(v217);
    stack[-1] = v217;
    v217 = stack[-7];
    v217 = add1(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-7] = v217;
    v217 = stack[-1];
    fn = elt(env, 10); /* listp */
    v217 = (*qfn1(fn))(qenv(fn), v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    if (v217 == nil) goto v357;
    stack[-2] = stack[-8];
    v217 = stack[-7];
    stack[0] = sub1(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    v217 = stack[-1];
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    *(Lisp_Object *)((char *)stack[-2] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v217;
    goto v274;

v274:
    v217 = stack[-4];
    v217 = qcdr(v217);
    stack[-4] = v217;
    goto v405;

v357:
    v217 = stack[-1];
    fn = elt(env, 11); /* dummyp */
    v217 = (*qfn1(fn))(qenv(fn), v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-6] = v217;
    if (v217 == nil) goto v406;
    v314 = stack[-5];
    v217 = stack[-6];
    fn = elt(env, 12); /* max */
    v217 = (*qfn2(fn))(qenv(fn), v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-5] = v217;
    stack[-3] = stack[-8];
    v217 = stack[-7];
    stack[-2] = sub1(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-1] = elt(env, 1); /* !~dv */
    stack[0] = elt(env, 2); /* !* */
    v217 = stack[-6];
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    v217 = list2star(stack[-1], stack[0], v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    *(Lisp_Object *)((char *)stack[-3] + (CELL-TAG_VECTOR) + ((int32_t)stack[-2]/(16/CELL))) = v217;
    goto v274;

v406:
    stack[-2] = stack[-8];
    v217 = stack[-7];
    stack[0] = sub1(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    v217 = stack[-1];
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    *(Lisp_Object *)((char *)stack[-2] + (CELL-TAG_VECTOR) + ((int32_t)stack[0]/(16/CELL))) = v217;
    goto v274;

v113:
    v403 = stack[-10];
    v314 = stack[-8];
    v217 = elt(env, 9); /* skp_ordp */
    fn = elt(env, 13); /* st_sorttree */
    v217 = (*qfnn(fn))(qenv(fn), 3, v403, v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-10] = v217;
    v217 = stack[-10];
    if (v217 == nil) goto v407;
    v217 = stack[-10];
    v314 = qcar(v217);
    v217 = (Lisp_Object)1; /* 0 */
    if (!(v314 == v217)) goto v407;
    v217 = qvalue(elt(env, 4)); /* nil */
    { popv(12); return onevalue(v217); }

v407:
    v217 = stack[-10];
    v217 = qcar(v217);
    stack[0] = v217;
    v217 = stack[-10];
    v314 = qcdr(v217);
    v217 = stack[-8];
    fn = elt(env, 14); /* dv_skelsplit1 */
    v217 = (*qfn2(fn))(qenv(fn), v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-1] = v217;
    v217 = stack[-1];
    v217 = qcdr(v217);
    fn = elt(env, 15); /* st_consolidate */
    v217 = (*qfn1(fn))(qenv(fn), v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-10] = v217;
    v217 = stack[-9];
    v314 = qcar(v217);
    v217 = stack[-1];
    v217 = qcar(v217);
    v217 = cons(v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-1] = v217;
    stack[-2] = stack[-5];
    v314 = stack[-1];
    v217 = stack[-10];
    v217 = cons(v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    {
        Lisp_Object v408 = stack[0];
        Lisp_Object v409 = stack[-2];
        popv(12);
        return list3(v408, v409, v217);
    }

v404:
    v217 = stack[-9];
    v314 = qcar(v217);
    v217 = elt(env, 7); /* antisymmetric */
    v217 = Lflagp(nil, v314, v217);
    env = stack[-11];
    if (v217 == nil) goto v141;
    v314 = elt(env, 8); /* !- */
    v217 = stack[-10];
    v217 = cons(v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-10] = v217;
    goto v376;

v141:
    v314 = elt(env, 2); /* !* */
    v217 = stack[-10];
    v217 = cons(v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-10] = v217;
    goto v376;

v306:
    v217 = stack[-3];
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-1] = v217;
    stack[-2] = v217;
    goto v174;

v174:
    v217 = stack[-3];
    v217 = add1(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-3] = v217;
    v217 = stack[-9];
    v217 = qcdr(v217);
    v314 = Llength(nil, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    v217 = stack[-3];
    v217 = difference2(v314, v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    v217 = Lminusp(nil, v217);
    env = stack[-11];
    if (v217 == nil) goto v410;
    v217 = stack[-2];
    goto v365;

v410:
    stack[0] = stack[-1];
    v217 = stack[-3];
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    v217 = Lrplacd(nil, stack[0], v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    v217 = stack[-1];
    v217 = qcdr(v217);
    stack[-1] = v217;
    goto v174;

v247:
    v217 = stack[-9];
    fn = elt(env, 11); /* dummyp */
    v217 = (*qfn1(fn))(qenv(fn), v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    stack[-6] = v217;
    if (v217 == nil) goto v159;
    stack[-3] = (Lisp_Object)17; /* 1 */
    stack[-2] = stack[-6];
    stack[-1] = elt(env, 1); /* !~dv */
    stack[0] = elt(env, 2); /* !* */
    v217 = stack[-6];
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    env = stack[-11];
    v217 = list2star(stack[-1], stack[0], v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    {
        Lisp_Object v411 = stack[-3];
        Lisp_Object v412 = stack[-2];
        popv(12);
        return list3(v411, v412, v217);
    }

v159:
    stack[-1] = (Lisp_Object)17; /* 1 */
    stack[0] = (Lisp_Object)1; /* 0 */
    v217 = stack[-9];
    v217 = ncons(v217);
    nil = C_nil;
    if (exception_pending()) goto v332;
    {
        Lisp_Object v413 = stack[-1];
        Lisp_Object v219 = stack[0];
        popv(12);
        return list3(v413, v219, v217);
    }
/* error exit handlers */
v332:
    popv(12);
    return nil;
}



/* Code for reduce!-eival!-powers1 */

static Lisp_Object CC_reduceKeivalKpowers1(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v398, v252;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for reduce-eival-powers1");
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

v75:
    v398 = stack[0];
    v398 = qcar(v398);
    if (!consp(v398)) goto v245;
    v398 = stack[0];
    v398 = qcar(v398);
    v398 = qcar(v398);
    v398 = (consp(v398) ? nil : lisp_true);
    goto v244;

v244:
    if (v398 == nil) goto v235;
    v398 = qvalue(elt(env, 1)); /* t */
    goto v246;

v246:
    if (!(v398 == nil)) { Lisp_Object res = stack[0]; popv(4); return onevalue(res); }
    v398 = stack[0];
    v398 = qcar(v398);
    v398 = qcar(v398);
    v398 = qcar(v398);
    v252 = qcdr(v398);
    v398 = stack[-1];
    v398 = qcar(v398);
    v398 = qcdr(v398);
    if (equal(v252, v398)) goto v143;
    v398 = stack[0];
    v398 = qcar(v398);
    v398 = qcar(v398);
    v398 = qcar(v398);
    stack[-2] = qcar(v398);
    v398 = stack[0];
    v398 = qcar(v398);
    v398 = qcar(v398);
    v398 = qcar(v398);
    v252 = qcdr(v398);
    v398 = stack[-1];
    v398 = qcar(v398);
    v398 = qcdr(v398);
    v252 = difference2(v252, v398);
    nil = C_nil;
    if (exception_pending()) goto v142;
    env = stack[-3];
    v398 = (Lisp_Object)17; /* 1 */
    v398 = acons(stack[-2], v252, v398);
    nil = C_nil;
    if (exception_pending()) goto v142;
    env = stack[-3];
    v252 = ncons(v398);
    nil = C_nil;
    if (exception_pending()) goto v142;
    env = stack[-3];
    v398 = stack[0];
    v398 = qcar(v398);
    v398 = qcar(v398);
    v398 = qcdr(v398);
    fn = elt(env, 2); /* multf */
    v252 = (*qfn2(fn))(qenv(fn), v252, v398);
    nil = C_nil;
    if (exception_pending()) goto v142;
    env = stack[-3];
    v398 = stack[0];
    v398 = qcdr(v398);
    v252 = cons(v252, v398);
    nil = C_nil;
    if (exception_pending()) goto v142;
    env = stack[-3];
    v398 = stack[-1];
    v398 = qcdr(v398);
    fn = elt(env, 3); /* multsq */
    stack[-2] = (*qfn2(fn))(qenv(fn), v252, v398);
    nil = C_nil;
    if (exception_pending()) goto v142;
    env = stack[-3];
    v398 = stack[0];
    v398 = qcar(v398);
    v252 = qcdr(v398);
    v398 = stack[0];
    v398 = qcdr(v398);
    v398 = cons(v252, v398);
    nil = C_nil;
    if (exception_pending()) goto v142;
    env = stack[-3];
    fn = elt(env, 4); /* addsq */
    v398 = (*qfn2(fn))(qenv(fn), stack[-2], v398);
    nil = C_nil;
    if (exception_pending()) goto v142;
    env = stack[-3];
    stack[0] = v398;
    goto v75;

v143:
    v398 = stack[-1];
    stack[-1] = qcdr(v398);
    v398 = stack[0];
    v398 = qcar(v398);
    v398 = qcar(v398);
    v252 = qcdr(v398);
    v398 = stack[0];
    v398 = qcdr(v398);
    v398 = cons(v252, v398);
    nil = C_nil;
    if (exception_pending()) goto v142;
    env = stack[-3];
    fn = elt(env, 3); /* multsq */
    stack[-1] = (*qfn2(fn))(qenv(fn), stack[-1], v398);
    nil = C_nil;
    if (exception_pending()) goto v142;
    env = stack[-3];
    v398 = stack[0];
    v398 = qcar(v398);
    v252 = qcdr(v398);
    v398 = stack[0];
    v398 = qcdr(v398);
    v398 = cons(v252, v398);
    nil = C_nil;
    if (exception_pending()) goto v142;
    env = stack[-3];
    {
        Lisp_Object v129 = stack[-1];
        popv(4);
        fn = elt(env, 4); /* addsq */
        return (*qfn2(fn))(qenv(fn), v129, v398);
    }

v235:
    v398 = stack[0];
    v398 = qcar(v398);
    v398 = qcar(v398);
    v398 = qcar(v398);
    v252 = qcdr(v398);
    v398 = stack[-1];
    v398 = qcar(v398);
    v398 = qcdr(v398);
    v398 = (Lisp_Object)lessp2(v252, v398);
    nil = C_nil;
    if (exception_pending()) goto v142;
    v398 = v398 ? lisp_true : nil;
    env = stack[-3];
    goto v246;

v245:
    v398 = qvalue(elt(env, 1)); /* t */
    goto v244;
/* error exit handlers */
v142:
    popv(4);
    return nil;
}



/* Code for horner!-rule!-in!-order!-mod!-p */

static Lisp_Object MS_CDECL CC_hornerKruleKinKorderKmodKp(Lisp_Object env, int nargs,
                         Lisp_Object v0, Lisp_Object v1,
                         Lisp_Object v2, Lisp_Object v234, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v414, v404, v137, v135, v136;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "horner-rule-in-order-mod-p");
#ifdef DEBUG
    if (check_env(env)) return aerror("env for horner-rule-in-order-mod-p");
#endif
    if (stack >= stacklimit)
    {
        push4(v234,v2,v1,v0);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0,v1,v2,v234);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v234;
    stack[-1] = v2;
    stack[-2] = v1;
    stack[-3] = v0;
/* end of prologue */

v418:
    v414 = stack[-1];
    if (!consp(v414)) goto v246;
    v414 = stack[-1];
    v414 = qcar(v414);
    v414 = (consp(v414) ? nil : lisp_true);
    goto v212;

v212:
    if (v414 == nil) goto v310;
    v414 = stack[-1];
    fn = elt(env, 2); /* !*d2n */
    v135 = (*qfn1(fn))(qenv(fn), v414);
    nil = C_nil;
    if (exception_pending()) goto v419;
    env = stack[-5];
    v137 = stack[-3];
    v414 = stack[0];
    v414 = qcar(v414);
    v404 = qcdr(v414);
    v414 = stack[-2];
    v414 = Lmodular_expt(nil, v404, v414);
    env = stack[-5];
    v414 = Lmodular_times(nil, v137, v414);
    {   int32_t w = int_of_fixnum(v135) + int_of_fixnum(v414);
        if (w >= current_modulus) w -= current_modulus;
        v414 = fixnum_of_int(w);
    }
    { popv(6); return onevalue(v414); }

v310:
    v414 = stack[-1];
    v414 = qcar(v414);
    v414 = qcar(v414);
    v404 = qcar(v414);
    v414 = stack[0];
    v414 = qcar(v414);
    v414 = qcar(v414);
    if (equal(v404, v414)) goto v367;
    v404 = stack[-1];
    v414 = stack[0];
    v414 = qcdr(v414);
    fn = elt(env, 3); /* evaluate!-in!-order!-mod!-p */
    v135 = (*qfn2(fn))(qenv(fn), v404, v414);
    nil = C_nil;
    if (exception_pending()) goto v419;
    env = stack[-5];
    v137 = stack[-3];
    v414 = stack[0];
    v414 = qcar(v414);
    v404 = qcdr(v414);
    v414 = stack[-2];
    v414 = Lmodular_expt(nil, v404, v414);
    env = stack[-5];
    v414 = Lmodular_times(nil, v137, v414);
    {   int32_t w = int_of_fixnum(v135) + int_of_fixnum(v414);
        if (w >= current_modulus) w -= current_modulus;
        v414 = fixnum_of_int(w);
    }
    { popv(6); return onevalue(v414); }

v367:
    v414 = stack[-1];
    v414 = qcar(v414);
    v414 = qcar(v414);
    v414 = qcdr(v414);
    stack[-4] = v414;
    v414 = stack[-1];
    v414 = qcar(v414);
    v404 = qcdr(v414);
    v414 = stack[0];
    v414 = qcdr(v414);
    fn = elt(env, 3); /* evaluate!-in!-order!-mod!-p */
    v136 = (*qfn2(fn))(qenv(fn), v404, v414);
    nil = C_nil;
    if (exception_pending()) goto v419;
    env = stack[-5];
    v135 = stack[-3];
    v414 = stack[0];
    v414 = qcar(v414);
    v137 = qcdr(v414);
    v404 = stack[-2];
    v414 = stack[-4];
    v414 = (Lisp_Object)(int32_t)((int32_t)v404 - (int32_t)v414 + TAG_FIXNUM);
    v414 = Lmodular_expt(nil, v137, v414);
    env = stack[-5];
    v414 = Lmodular_times(nil, v135, v414);
    env = stack[-5];
    {   int32_t w = int_of_fixnum(v136) + int_of_fixnum(v414);
        if (w >= current_modulus) w -= current_modulus;
        v135 = fixnum_of_int(w);
    }
    v137 = stack[-4];
    v414 = stack[-1];
    v404 = qcdr(v414);
    v414 = stack[0];
    stack[-3] = v135;
    stack[-2] = v137;
    stack[-1] = v404;
    stack[0] = v414;
    goto v418;

v246:
    v414 = qvalue(elt(env, 1)); /* t */
    goto v212;
/* error exit handlers */
v419:
    popv(6);
    return nil;
}



/* Code for fctrf */

static Lisp_Object CC_fctrf(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v295, v425;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for fctrf");
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
    v425 = qvalue(elt(env, 1)); /* !*exp */
    v295 = qvalue(elt(env, 2)); /* ncmp!* */
    stack[-6] = qvalue(elt(env, 1)); /* !*exp */
    qvalue(elt(env, 1)) = v425; /* !*exp */
    stack[-4] = qvalue(elt(env, 2)); /* ncmp!* */
    qvalue(elt(env, 2)) = v295; /* ncmp!* */
    stack[-3] = qvalue(elt(env, 3)); /* !*ezgcd */
    qvalue(elt(env, 3)) = nil; /* !*ezgcd */
    stack[-2] = qvalue(elt(env, 4)); /* !*gcd */
    qvalue(elt(env, 4)) = nil; /* !*gcd */
    stack[-1] = nil;
    v295 = stack[-5];
    if (!consp(v295)) goto v279;
    v295 = stack[-5];
    v295 = qcar(v295);
    v295 = (consp(v295) ? nil : lisp_true);
    goto v247;

v247:
    if (v295 == nil) goto v245;
    v295 = stack[-5];
    v295 = ncons(v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    goto v170;

v170:
    qvalue(elt(env, 4)) = stack[-2]; /* !*gcd */
    qvalue(elt(env, 3)) = stack[-3]; /* !*ezgcd */
    qvalue(elt(env, 2)) = stack[-4]; /* ncmp!* */
    qvalue(elt(env, 1)) = stack[-6]; /* !*exp */
    { popv(8); return onevalue(v295); }

v245:
    v295 = qvalue(elt(env, 2)); /* ncmp!* */
    if (v295 == nil) goto v236;
    v295 = qvalue(elt(env, 6)); /* !*ncmp */
    if (v295 == nil) goto v171;
    v295 = stack[-5];
    fn = elt(env, 19); /* noncomfp1 */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    if (!(v295 == nil)) goto v236;

v171:
    v295 = qvalue(elt(env, 7)); /* nil */
    qvalue(elt(env, 2)) = v295; /* ncmp!* */
    goto v236;

v236:
    v295 = qvalue(elt(env, 5)); /* t */
    qvalue(elt(env, 4)) = v295; /* !*gcd */
    v295 = qvalue(elt(env, 8)); /* !*limitedfactors */
    if (v295 == nil) goto v304;
    v295 = qvalue(elt(env, 7)); /* nil */
    goto v310;

v310:
    if (v295 == nil) goto v351;
    v295 = qvalue(elt(env, 5)); /* t */
    qvalue(elt(env, 3)) = v295; /* !*ezgcd */
    goto v351;

v351:
    v295 = qvalue(elt(env, 10)); /* !*mcd */
    if (v295 == nil) goto v161;
    v295 = qvalue(elt(env, 1)); /* !*exp */
    if (!(v295 == nil)) goto v333;
    v295 = qvalue(elt(env, 5)); /* t */
    qvalue(elt(env, 1)) = v295; /* !*exp */
    v425 = stack[-5];
    v295 = (Lisp_Object)17; /* 1 */
    v295 = cons(v425, v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    fn = elt(env, 20); /* resimp */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    fn = elt(env, 21); /* !*q2f */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    stack[-5] = v295;
    goto v333;

v333:
    v425 = qvalue(elt(env, 9)); /* dmode!* */
    v295 = elt(env, 14); /* !:rn!: */
    if (!(v425 == v295)) goto v145;
    v295 = qvalue(elt(env, 7)); /* nil */
    qvalue(elt(env, 9)) = v295; /* dmode!* */
    v295 = qvalue(elt(env, 7)); /* nil */
    v295 = ncons(v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    qvalue(elt(env, 15)) = v295; /* alglist!* */
    v295 = stack[-5];
    fn = elt(env, 22); /* prepf */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    fn = elt(env, 23); /* simp */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    stack[0] = v295;
    v295 = stack[0];
    v295 = qcdr(v295);
    if (!consp(v295)) goto v256;
    v295 = (Lisp_Object)17; /* 1 */
    stack[-1] = v295;
    goto v145;

v145:
    v295 = qvalue(elt(env, 2)); /* ncmp!* */
    if (!(v295 == nil)) goto v147;
    v295 = stack[-5];
    fn = elt(env, 24); /* sf2ss */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    stack[0] = v295;
    v295 = stack[0];
    fn = elt(env, 25); /* homogp */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    if (v295 == nil) goto v147;
    v295 = qvalue(elt(env, 16)); /* !*trfac */
    if (v295 == nil) goto v401;
    v295 = elt(env, 17); /* "This polynomial is homogeneous - variables scaled" 
*/
    v295 = Lprinc(nil, v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    v295 = Lterpri(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    goto v401;

v401:
    v295 = stack[0];
    v295 = qcar(v295);
    v295 = qcar(v295);
    stack[-1] = qcar(v295);
    v295 = stack[0];
    v295 = qcdr(v295);
    v295 = qcar(v295);
    v295 = qcar(v295);
    v295 = qcar(v295);
    fn = elt(env, 26); /* listsum */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    v295 = cons(stack[-1], v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    stack[-5] = v295;
    v295 = stack[0];
    stack[-1] = qcar(v295);
    v295 = stack[0];
    v295 = qcdr(v295);
    v295 = qcar(v295);
    fn = elt(env, 27); /* subs0 */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    v425 = Lreverse(nil, v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    v295 = (Lisp_Object)17; /* 1 */
    v295 = list2star(stack[-1], v425, v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    fn = elt(env, 28); /* ss2sf */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    fn = elt(env, 29); /* fctrf1 */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    stack[0] = v295;
    v425 = stack[-5];
    v295 = stack[0];
    fn = elt(env, 30); /* rconst */
    v295 = (*qfn2(fn))(qenv(fn), v425, v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    stack[0] = v295;
    v295 = stack[0];
    stack[-1] = qcar(v295);
    v295 = stack[0];
    v425 = qcdr(v295);
    v295 = elt(env, 18); /* orderfactors */
    fn = elt(env, 31); /* sort */
    v295 = (*qfn2(fn))(qenv(fn), v425, v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    v295 = cons(stack[-1], v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    goto v170;

v147:
    v295 = stack[-5];
    fn = elt(env, 29); /* fctrf1 */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    stack[-5] = v295;
    v295 = stack[-1];
    if (v295 == nil) goto v426;
    v295 = qvalue(elt(env, 7)); /* nil */
    v295 = ncons(v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    qvalue(elt(env, 15)) = v295; /* alglist!* */
    v295 = elt(env, 14); /* !:rn!: */
    qvalue(elt(env, 9)) = v295; /* dmode!* */
    stack[0] = stack[-5];
    v295 = stack[-5];
    v425 = qcar(v295);
    v295 = stack[-1];
    fn = elt(env, 32); /* quotf!* */
    v295 = (*qfn2(fn))(qenv(fn), v425, v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    fn = elt(env, 33); /* setcar */
    v295 = (*qfn2(fn))(qenv(fn), stack[0], v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    goto v426;

v426:
    v295 = stack[-5];
    stack[0] = qcar(v295);
    v295 = stack[-5];
    v425 = qcdr(v295);
    v295 = elt(env, 18); /* orderfactors */
    fn = elt(env, 31); /* sort */
    v295 = (*qfn2(fn))(qenv(fn), v425, v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    v295 = cons(stack[0], v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    goto v170;

v256:
    v295 = stack[0];
    v295 = qcdr(v295);
    stack[-1] = v295;
    v295 = stack[0];
    v295 = qcar(v295);
    stack[-5] = v295;
    goto v145;

v161:
    v295 = elt(env, 11); /* "Factorization invalid with MCD off" */
    v425 = v295;
    v295 = v425;
    qvalue(elt(env, 12)) = v295; /* errmsg!* */
    v295 = qvalue(elt(env, 13)); /* !*protfg */
    if (!(v295 == nil)) goto v175;
    v295 = v425;
    fn = elt(env, 34); /* lprie */
    v295 = (*qfn1(fn))(qenv(fn), v295);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    goto v175;

v175:
    v295 = Lerror0(nil, 0);
    nil = C_nil;
    if (exception_pending()) goto v290;
    env = stack[-7];
    goto v333;

v304:
    v295 = qvalue(elt(env, 9)); /* dmode!* */
    v295 = (v295 == nil ? lisp_true : nil);
    goto v310;

v279:
    v295 = qvalue(elt(env, 5)); /* t */
    goto v247;
/* error exit handlers */
v290:
    env = stack[-7];
    qvalue(elt(env, 4)) = stack[-2]; /* !*gcd */
    qvalue(elt(env, 3)) = stack[-3]; /* !*ezgcd */
    qvalue(elt(env, 2)) = stack[-4]; /* ncmp!* */
    qvalue(elt(env, 1)) = stack[-6]; /* !*exp */
    popv(8);
    return nil;
}



/* Code for compex */

static Lisp_Object CC_compex(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v363;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for compex");
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
    v363 = v0;
/* end of prologue */
    stack[-3] = v363;
    v363 = stack[-3];
    if (v363 == nil) goto v246;
    v363 = stack[-3];
    v363 = qcar(v363);
    fn = elt(env, 2); /* constrexp */
    v363 = (*qfn1(fn))(qenv(fn), v363);
    nil = C_nil;
    if (exception_pending()) goto v352;
    env = stack[-4];
    v363 = ncons(v363);
    nil = C_nil;
    if (exception_pending()) goto v352;
    env = stack[-4];
    stack[-1] = v363;
    stack[-2] = v363;
    goto v294;

v294:
    v363 = stack[-3];
    v363 = qcdr(v363);
    stack[-3] = v363;
    v363 = stack[-3];
    if (v363 == nil) { Lisp_Object res = stack[-2]; popv(5); return onevalue(res); }
    stack[0] = stack[-1];
    v363 = stack[-3];
    v363 = qcar(v363);
    fn = elt(env, 2); /* constrexp */
    v363 = (*qfn1(fn))(qenv(fn), v363);
    nil = C_nil;
    if (exception_pending()) goto v352;
    env = stack[-4];
    v363 = ncons(v363);
    nil = C_nil;
    if (exception_pending()) goto v352;
    env = stack[-4];
    v363 = Lrplacd(nil, stack[0], v363);
    nil = C_nil;
    if (exception_pending()) goto v352;
    env = stack[-4];
    v363 = stack[-1];
    v363 = qcdr(v363);
    stack[-1] = v363;
    goto v294;

v246:
    v363 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v363); }
/* error exit handlers */
v352:
    popv(5);
    return nil;
}



/* Code for xpndwedge */

static Lisp_Object CC_xpndwedge(Lisp_Object env,
                         Lisp_Object v0)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v304, v352;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for xpndwedge");
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
    goto v8;

v8:
    v304 = stack[0];
    v304 = qcdr(v304);
    if (v304 == nil) goto v294;
    v304 = stack[0];
    v304 = qcar(v304);
    fn = elt(env, 1); /* partitop */
    v352 = (*qfn1(fn))(qenv(fn), v304);
    nil = C_nil;
    if (exception_pending()) goto v338;
    env = stack[-2];
    v304 = stack[-1];
    v304 = cons(v352, v304);
    nil = C_nil;
    if (exception_pending()) goto v338;
    env = stack[-2];
    stack[-1] = v304;
    v304 = stack[0];
    v304 = qcdr(v304);
    stack[0] = v304;
    goto v8;

v294:
    v304 = stack[0];
    v304 = qcar(v304);
    fn = elt(env, 1); /* partitop */
    v304 = (*qfn1(fn))(qenv(fn), v304);
    nil = C_nil;
    if (exception_pending()) goto v338;
    env = stack[-2];
    fn = elt(env, 2); /* mkunarywedge */
    v304 = (*qfn1(fn))(qenv(fn), v304);
    nil = C_nil;
    if (exception_pending()) goto v338;
    env = stack[-2];
    v352 = v304;
    goto v280;

v280:
    v304 = stack[-1];
    if (v304 == nil) { popv(3); return onevalue(v352); }
    v304 = stack[-1];
    v304 = qcar(v304);
    fn = elt(env, 3); /* wedgepf2 */
    v304 = (*qfn2(fn))(qenv(fn), v304, v352);
    nil = C_nil;
    if (exception_pending()) goto v338;
    env = stack[-2];
    v352 = v304;
    v304 = stack[-1];
    v304 = qcdr(v304);
    stack[-1] = v304;
    goto v280;
/* error exit handlers */
v338:
    popv(3);
    return nil;
}



/* Code for list_of_parent */

static Lisp_Object CC_list_of_parent(Lisp_Object env,
                         Lisp_Object v0, Lisp_Object v1)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v174, v372, v305;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG
    if (check_env(env)) return aerror("env for list_of_parent");
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
    v174 = stack[-1];
    v372 = qcar(v174);
    v174 = qvalue(elt(env, 1)); /* old_edge_list */
    v174 = Lassoc(nil, v372, v174);
    if (!(v174 == nil)) goto v75;
    v372 = stack[-1];
    v174 = stack[0];
    fn = elt(env, 3); /* memq_edgelist */
    v174 = (*qfn2(fn))(qenv(fn), v372, v174);
    nil = C_nil;
    if (exception_pending()) goto v154;
    env = stack[-2];
    if (!(v174 == nil)) goto v75;
    v372 = nil;
    v174 = stack[-1];
    v174 = qcdr(v174);
    v174 = qcar(v174);
    stack[-1] = v174;
    v174 = stack[-1];
    v305 = qcar(v174);
    v174 = stack[0];
    v174 = Lassoc(nil, v305, v174);
    v305 = v174;
    v174 = v305;
    if (v174 == nil) goto v162;
    v174 = v305;
    v174 = cons(v174, v372);
    nil = C_nil;
    if (exception_pending()) goto v154;
    env = stack[-2];
    v372 = v174;
    goto v162;

v162:
    v174 = stack[-1];
    v305 = qcdr(v174);
    v174 = stack[0];
    v174 = Lassoc(nil, v305, v174);
    v305 = v174;
    v174 = v305;
    if (v174 == nil) { popv(3); return onevalue(v372); }
    v174 = v305;
    v174 = cons(v174, v372);
    nil = C_nil;
    if (exception_pending()) goto v154;
    v372 = v174;
    { popv(3); return onevalue(v372); }

v75:
    v174 = qvalue(elt(env, 2)); /* nil */
    { popv(3); return onevalue(v174); }
/* error exit handlers */
v154:
    popv(3);
    return nil;
}



setup_type const u47_setup[] =
{
    {"simpx1",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_simpx1},
    {"make-var-coefflist",      wrong_no_na,    wrong_no_nb,   (n_args *)CC_makeKvarKcoefflist},
    {"get_nr_irred_reps",       CC_get_nr_irred_reps,too_many_1,wrong_no_1},
    {"iscale",                  too_few_2,      CC_iscale,     wrong_no_2},
    {"rand-comb",               too_few_2,      CC_randKcomb,  wrong_no_2},
    {"lispcondp",               CC_lispcondp,   too_many_1,    wrong_no_1},
    {"asymmetrize-inds",        too_few_2,      CC_asymmetrizeKinds,wrong_no_2},
    {"requote1",                CC_requote1,    too_many_1,    wrong_no_1},
    {"actual_world",            too_few_2,      CC_actual_world,wrong_no_2},
    {"normmat",                 CC_normmat,     too_many_1,    wrong_no_1},
    {"small-primep",            CC_smallKprimep,too_many_1,    wrong_no_1},
    {"basic-kern1",             CC_basicKkern1, too_many_1,    wrong_no_1},
    {"allbkern",                CC_allbkern,    too_many_1,    wrong_no_1},
    {"ofsf_facequal",           CC_ofsf_facequal,too_many_1,   wrong_no_1},
    {"monomispommaretdivisibleby",too_few_2,    CC_monomispommaretdivisibleby,wrong_no_2},
    {"put-kvalue",              wrong_no_na,    wrong_no_nb,   (n_args *)CC_putKkvalue},
    {"ofsf_sminsert1",          wrong_no_na,    wrong_no_nb,   (n_args *)CC_ofsf_sminsert1},
    {"qqe_length-graph-marked", CC_qqe_lengthKgraphKmarked,too_many_1,wrong_no_1},
    {"lto_cartprod",            CC_lto_cartprod,too_many_1,    wrong_no_1},
    {"aex_add",                 too_few_2,      CC_aex_add,    wrong_no_2},
    {"dipbcprod",               too_few_2,      CC_dipbcprod,  wrong_no_2},
    {"setequal",                too_few_2,      CC_setequal,   wrong_no_2},
    {"acmemb",                  too_few_2,      CC_acmemb,     wrong_no_2},
    {"gi",                      too_few_2,      CC_gi,         wrong_no_2},
    {"dv_skelsplit",            CC_dv_skelsplit,too_many_1,    wrong_no_1},
    {"reduce-eival-powers1",    too_few_2,      CC_reduceKeivalKpowers1,wrong_no_2},
    {"horner-rule-in-order-mod-p",wrong_no_na,  wrong_no_nb,   (n_args *)CC_hornerKruleKinKorderKmodKp},
    {"fctrf",                   CC_fctrf,       too_many_1,    wrong_no_1},
    {"compex",                  CC_compex,      too_many_1,    wrong_no_1},
    {"xpndwedge",               CC_xpndwedge,   too_many_1,    wrong_no_1},
    {"list_of_parent",          too_few_2,      CC_list_of_parent,wrong_no_2},
    {NULL, (one_args *)"u47", (two_args *)"2577 7412396 8338956", 0}
};

/* end of generated code */
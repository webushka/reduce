
/* $destdir/u35.c        Machine generated C code */

/* Signature: 00000000 21-Sep-2013 */

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
extern char *C_stack_base, *C_stack_limit;
extern double max_store_size;
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
extern Lisp_Object used_space, avail_space;
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
extern Lisp_Object Lthrow_nil(Lisp_Object env, Lisp_Object a);
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


/* Code for rewrite */

static Lisp_Object MS_CDECL CC_rewrite(Lisp_Object env, int nargs,
                         Lisp_Object v0000, Lisp_Object v0001,
                         Lisp_Object v0002, Lisp_Object v0003, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0052, v0053, v0054, v0055;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 4, "rewrite");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for rewrite");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push4(v0003,v0002,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop4(v0000,v0001,v0002,v0003);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push5(nil, nil, nil, nil, nil);
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-9] = v0003;
    stack[-10] = v0002;
    stack[-11] = v0001;
    stack[-12] = v0000;
/* end of prologue */
    v0052 = (Lisp_Object)17; /* 1 */
    stack[-13] = v0052;
    v0052 = (Lisp_Object)17; /* 1 */
    stack[-2] = v0052;
    v0052 = stack[-12];
    v0052 = qcdr(v0052);
    v0052 = qcdr(v0052);
    v0052 = qcar(v0052);
    v0053 = v0052;
    v0053 = qcdr(v0053);
    v0053 = qcar(v0053);
    v0052 = qcdr(v0052);
    v0052 = qcdr(v0052);
    v0052 = qcar(v0052);
    if (equal(v0053, v0052)) goto v0056;
    v0052 = stack[-11];
    stack[-1] = v0052;
    goto v0057;

v0057:
    v0052 = (Lisp_Object)17; /* 1 */
    stack[0] = v0052;
    goto v0058;

v0058:
    v0053 = stack[-1];
    v0052 = stack[0];
    v0052 = difference2(v0053, v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    v0052 = Lminusp(nil, v0052);
    env = stack[-14];
    if (v0052 == nil) goto v0060;
    v0052 = stack[-11];
    v0053 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    v0052 = stack[-12];
    v0052 = qcdr(v0052);
    v0052 = qcdr(v0052);
    v0052 = qcar(v0052);
    v0052 = qcdr(v0052);
    v0052 = qcar(v0052);
    if (!(equal(v0053, v0052))) { Lisp_Object res = stack[-12]; popv(15); return onevalue(res); }
    stack[0] = stack[-12];
    v0052 = stack[-11];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    v0055 = list2(stack[0], v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    v0054 = qvalue(elt(env, 1)); /* nil */
    v0053 = stack[-12];
    v0052 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 2); /* letmtr3 */
    v0052 = (*qfnn(fn))(qenv(fn), 4, v0055, v0054, v0053, v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    { Lisp_Object res = stack[-12]; popv(15); return onevalue(res); }

v0060:
    v0053 = stack[-12];
    v0052 = stack[0];
    fn = elt(env, 3); /* findrow */
    v0052 = (*qfn2(fn))(qenv(fn), v0053, v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    v0053 = v0052;
    v0052 = v0053;
    if (v0052 == nil) goto v0061;
    v0052 = v0053;
    v0052 = qcdr(v0052);
    stack[-7] = v0052;
    v0052 = stack[0];
    stack[-3] = v0052;
    v0053 = stack[-13];
    v0052 = stack[-10];
    if (!(equal(v0053, v0052))) goto v0062;
    v0052 = stack[-13];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-13] = v0052;
    goto v0062;

v0062:
    v0053 = stack[-3];
    v0052 = stack[-13];
    if (equal(v0053, v0052)) goto v0063;
    v0052 = stack[-13];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-13] = v0052;
    v0052 = stack[-2];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-2] = v0052;
    goto v0064;

v0064:
    v0052 = stack[0];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[0] = v0052;
    goto v0058;

v0063:
    v0052 = (Lisp_Object)17; /* 1 */
    stack[-4] = v0052;
    v0052 = (Lisp_Object)17; /* 1 */
    stack[-8] = v0052;
    v0052 = qvalue(elt(env, 1)); /* nil */
    stack[-5] = v0052;
    goto v0065;

v0065:
    v0052 = stack[-7];
    if (v0052 == nil) goto v0066;
    stack[-3] = stack[-4];
    v0052 = stack[-11];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    if (equal(stack[-3], v0052)) goto v0066;
    v0052 = stack[-7];
    v0052 = qcar(v0052);
    v0053 = v0052;
    v0052 = v0053;
    v0052 = qcar(v0052);
    stack[-6] = v0052;
    v0052 = v0053;
    v0052 = qcdr(v0052);
    stack[-3] = v0052;
    v0053 = stack[-4];
    v0052 = stack[-9];
    if (!(equal(v0053, v0052))) goto v0067;
    v0052 = stack[-8];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-8] = v0052;
    goto v0067;

v0067:
    v0053 = stack[-6];
    v0052 = stack[-8];
    if (equal(v0053, v0052)) goto v0068;
    v0052 = stack[-8];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-8] = v0052;
    v0052 = stack[-4];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-4] = v0052;
    goto v0065;

v0068:
    v0054 = stack[-4];
    v0053 = stack[-3];
    v0052 = stack[-5];
    v0052 = acons(v0054, v0053, v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-5] = v0052;
    v0052 = stack[-4];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-4] = v0052;
    v0052 = stack[-7];
    v0052 = qcdr(v0052);
    stack[-7] = v0052;
    v0052 = stack[-8];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-8] = v0052;
    goto v0065;

v0066:
    v0053 = stack[-12];
    v0052 = stack[-2];
    stack[-4] = list2(v0053, v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    v0052 = qvalue(elt(env, 1)); /* nil */
    stack[-3] = ncons(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    v0052 = stack[-5];
    v0052 = Lreverse(nil, v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    v0054 = cons(stack[-3], v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    v0053 = stack[-12];
    v0052 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 2); /* letmtr3 */
    v0052 = (*qfnn(fn))(qenv(fn), 4, stack[-4], v0054, v0053, v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    v0052 = stack[-2];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-2] = v0052;
    v0052 = stack[-13];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-13] = v0052;
    goto v0064;

v0061:
    v0052 = stack[-13];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-13] = v0052;
    goto v0064;

v0056:
    v0052 = stack[-11];
    v0052 = add1(v0052);
    nil = C_nil;
    if (exception_pending()) goto v0059;
    env = stack[-14];
    stack[-1] = v0052;
    goto v0057;
/* error exit handlers */
v0059:
    popv(15);
    return nil;
}



/* Code for dipretimes */

static Lisp_Object CC_dipretimes(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0071, v0072, v0073;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dipretimes");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0072 = v0000;
/* end of prologue */

v0074:
    v0071 = v0072;
    v0073 = qcar(v0071);
    v0071 = (Lisp_Object)17; /* 1 */
    if (v0073 == v0071) goto v0043;
    v0071 = v0072;
    v0071 = qcdr(v0071);
    if (v0071 == nil) goto v0056;
    v0071 = elt(env, 1); /* times */
    return cons(v0071, v0072);

v0056:
    v0071 = v0072;
    v0071 = qcar(v0071);
    return onevalue(v0071);

v0043:
    v0071 = v0072;
    v0071 = qcdr(v0071);
    if (v0071 == nil) goto v0075;
    v0071 = v0072;
    v0071 = qcdr(v0071);
    v0072 = v0071;
    goto v0074;

v0075:
    v0071 = (Lisp_Object)17; /* 1 */
    return onevalue(v0071);
}



/* Code for weak_xreduce1 */

static Lisp_Object MS_CDECL CC_weak_xreduce1(Lisp_Object env, int nargs,
                         Lisp_Object v0000, Lisp_Object v0001,
                         Lisp_Object v0002, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0103, v0104, v0105;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "weak_xreduce1");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for weak_xreduce1");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0002,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0001,v0002);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-3] = v0002;
    stack[-4] = v0001;
    stack[-5] = v0000;
/* end of prologue */
    v0103 = stack[-4];
    stack[0] = v0103;
    goto v0040;

v0040:
    v0103 = stack[-5];
    if (v0103 == nil) { Lisp_Object res = stack[-5]; popv(8); return onevalue(res); }
    v0103 = stack[0];
    if (v0103 == nil) { Lisp_Object res = stack[-5]; popv(8); return onevalue(res); }
    v0103 = stack[0];
    v0103 = qcar(v0103);
    stack[-6] = v0103;
    v0103 = stack[0];
    v0103 = qcdr(v0103);
    stack[0] = v0103;
    v0103 = stack[-6];
    fn = elt(env, 8); /* xval */
    stack[-1] = (*qfn1(fn))(qenv(fn), v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    v0103 = stack[-5];
    fn = elt(env, 8); /* xval */
    v0103 = (*qfn1(fn))(qenv(fn), v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    fn = elt(env, 9); /* xdiv */
    v0103 = (*qfn2(fn))(qenv(fn), stack[-1], v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    stack[-1] = v0103;
    if (v0103 == nil) goto v0040;
    v0103 = stack[-1];
    fn = elt(env, 10); /* mknwedge */
    v0105 = (*qfn1(fn))(qenv(fn), v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    v0104 = (Lisp_Object)17; /* 1 */
    v0103 = (Lisp_Object)17; /* 1 */
    v0103 = list2star(v0105, v0104, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    v0103 = ncons(v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    stack[-1] = v0103;
    v0104 = stack[-1];
    v0103 = stack[-6];
    fn = elt(env, 11); /* wedgepf */
    v0103 = (*qfn2(fn))(qenv(fn), v0104, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    stack[0] = v0103;
    v0103 = stack[-5];
    v0103 = qcar(v0103);
    v0104 = qcdr(v0103);
    v0103 = stack[0];
    v0103 = qcar(v0103);
    v0103 = qcdr(v0103);
    fn = elt(env, 12); /* quotsq */
    v0103 = (*qfn2(fn))(qenv(fn), v0104, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    stack[-2] = v0103;
    v0103 = stack[-2];
    fn = elt(env, 13); /* negsq */
    v0103 = (*qfn1(fn))(qenv(fn), v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    fn = elt(env, 14); /* multpfsq */
    v0103 = (*qfn2(fn))(qenv(fn), stack[0], v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    fn = elt(env, 15); /* addpf */
    v0103 = (*qfn2(fn))(qenv(fn), stack[-5], v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    fn = elt(env, 16); /* subs2pf */
    v0103 = (*qfn1(fn))(qenv(fn), v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    stack[-5] = v0103;
    v0103 = qvalue(elt(env, 2)); /* !*trxmod */
    if (v0103 == nil) goto v0063;
    stack[0] = stack[-3];
    v0104 = stack[-1];
    v0103 = stack[-2];
    fn = elt(env, 14); /* multpfsq */
    v0104 = (*qfn2(fn))(qenv(fn), v0104, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    v0103 = stack[-6];
    v0103 = list2(v0104, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    v0103 = ncons(v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    v0103 = Lnconc(nil, stack[0], v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    stack[-3] = v0103;
    goto v0063;

v0063:
    v0103 = qvalue(elt(env, 2)); /* !*trxmod */
    if (v0103 == nil) goto v0037;
    v0104 = elt(env, 3); /* "   " */
    v0103 = elt(env, 4); /* first */
    fn = elt(env, 17); /* writepri */
    v0103 = (*qfn2(fn))(qenv(fn), v0104, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    stack[0] = elt(env, 5); /* wedge */
    v0104 = stack[-1];
    v0103 = stack[-2];
    fn = elt(env, 14); /* multpfsq */
    v0103 = (*qfn2(fn))(qenv(fn), v0104, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    fn = elt(env, 18); /* preppf */
    stack[-1] = (*qfn1(fn))(qenv(fn), v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    v0103 = stack[-6];
    fn = elt(env, 18); /* preppf */
    v0103 = (*qfn1(fn))(qenv(fn), v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    v0103 = list3(stack[0], stack[-1], v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    v0104 = Lmkquote(nil, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    v0103 = qvalue(elt(env, 1)); /* nil */
    fn = elt(env, 17); /* writepri */
    v0103 = (*qfn2(fn))(qenv(fn), v0104, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    v0104 = elt(env, 6); /* " +" */
    v0103 = elt(env, 7); /* last */
    fn = elt(env, 17); /* writepri */
    v0103 = (*qfn2(fn))(qenv(fn), v0104, v0103);
    nil = C_nil;
    if (exception_pending()) goto v0106;
    env = stack[-7];
    goto v0037;

v0037:
    v0103 = stack[-4];
    stack[0] = v0103;
    goto v0040;
/* error exit handlers */
v0106:
    popv(8);
    return nil;
}



/* Code for is_buble */

static Lisp_Object CC_is_buble(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0012, v0110;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for is_buble");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    stack[-1] = v0000;
/* end of prologue */
    v0110 = stack[-1];
    v0012 = stack[0];
    fn = elt(env, 2); /* diff_vertex */
    v0012 = (*qfn2(fn))(qenv(fn), v0110, v0012);
    nil = C_nil;
    if (exception_pending()) goto v0111;
    env = stack[-3];
    v0012 = Llength(nil, v0012);
    nil = C_nil;
    if (exception_pending()) goto v0111;
    env = stack[-3];
    stack[-2] = v0012;
    v0110 = stack[-2];
    v0012 = (Lisp_Object)33; /* 2 */
    v0012 = (Lisp_Object)geq2(v0110, v0012);
    nil = C_nil;
    if (exception_pending()) goto v0111;
    v0012 = v0012 ? lisp_true : nil;
    env = stack[-3];
    if (v0012 == nil) goto v0049;
    v0012 = qvalue(elt(env, 1)); /* nil */
    { popv(4); return onevalue(v0012); }

v0049:
    v0110 = (Lisp_Object)33; /* 2 */
    v0012 = stack[-2];
    stack[-2] = times2(v0110, v0012);
    nil = C_nil;
    if (exception_pending()) goto v0111;
    env = stack[-3];
    v0012 = stack[0];
    v0012 = ncons(v0012);
    nil = C_nil;
    if (exception_pending()) goto v0111;
    {
        Lisp_Object v0112 = stack[-2];
        Lisp_Object v0113 = stack[-1];
        popv(4);
        return list2star(v0112, v0113, v0012);
    }
/* error exit handlers */
v0111:
    popv(4);
    return nil;
}



/* Code for quotexf!* */

static Lisp_Object CC_quotexfH(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0101, v0050;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for quotexf*");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */
    stack[-3] = nil;
    goto v0025;

v0025:
    v0101 = stack[-2];
    if (v0101 == nil) goto v0074;
    v0101 = stack[-2];
    v0101 = qcar(v0101);
    stack[0] = qcar(v0101);
    v0101 = stack[-2];
    v0101 = qcar(v0101);
    v0050 = qcdr(v0101);
    v0101 = stack[-1];
    fn = elt(env, 1); /* quotfexf!*1 */
    v0050 = (*qfn2(fn))(qenv(fn), v0050, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0073;
    env = stack[-4];
    v0101 = stack[-3];
    v0101 = acons(stack[0], v0050, v0101);
    nil = C_nil;
    if (exception_pending()) goto v0073;
    env = stack[-4];
    stack[-3] = v0101;
    v0101 = stack[-2];
    v0101 = qcdr(v0101);
    stack[-2] = v0101;
    goto v0025;

v0074:
    v0101 = stack[-3];
    {
        popv(5);
        fn = elt(env, 2); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0101);
    }
/* error exit handlers */
v0073:
    popv(5);
    return nil;
}



/* Code for actual_arguments */

static Lisp_Object CC_actual_arguments(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0108, v0109, v0075;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for actual_arguments");
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
    v0109 = v0000;
/* end of prologue */
    v0075 = elt(env, 1); /* list */
    v0108 = v0109;
    v0108 = qcdr(v0108);
    if (!(v0108 == nil)) goto v0025;
    v0108 = v0109;
    v0109 = qcar(v0108);
    v0108 = elt(env, 2); /* generic_function */
    v0108 = get(v0109, v0108);
    goto v0025;

v0025:
    return cons(v0075, v0108);
}



/* Code for fs!:prin!: */

static Lisp_Object CC_fsTprinT(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0074;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fs:prin:");
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
    v0074 = elt(env, 1); /* "[" */
    fn = elt(env, 3); /* prin2!* */
    v0074 = (*qfn1(fn))(qenv(fn), v0074);
    nil = C_nil;
    if (exception_pending()) goto v0021;
    env = stack[-1];
    v0074 = stack[0];
    v0074 = qcdr(v0074);
    fn = elt(env, 4); /* fs!:prin */
    v0074 = (*qfn1(fn))(qenv(fn), v0074);
    nil = C_nil;
    if (exception_pending()) goto v0021;
    env = stack[-1];
    v0074 = elt(env, 2); /* "]" */
    {
        popv(2);
        fn = elt(env, 3); /* prin2!* */
        return (*qfn1(fn))(qenv(fn), v0074);
    }
/* error exit handlers */
v0021:
    popv(2);
    return nil;
}



/* Code for split!-further */

static Lisp_Object MS_CDECL CC_splitKfurther(Lisp_Object env, int nargs,
                         Lisp_Object v0000, Lisp_Object v0001,
                         Lisp_Object v0002, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0144, v0145, v0146, v0147;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "split-further");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for split-further");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0002,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0001,v0002);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0002;
    stack[-2] = v0001;
    stack[-3] = v0000;
/* end of prologue */
    v0144 = stack[-3];
    if (v0144 == nil) goto v0025;
    v0144 = stack[-3];
    v0146 = qcdr(v0144);
    v0145 = stack[-2];
    v0144 = stack[-1];
    v0144 = CC_splitKfurther(env, 3, v0146, v0145, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-5];
    stack[-4] = v0144;
    v0144 = stack[-4];
    v0144 = qcdr(v0144);
    stack[0] = v0144;
    v0144 = stack[-4];
    v0144 = qcar(v0144);
    stack[-4] = v0144;
    v0145 = qvalue(elt(env, 2)); /* number!-needed */
    v0144 = (Lisp_Object)1; /* 0 */
    if (v0145 == v0144) goto v0149;
    v0146 = stack[-2];
    v0145 = stack[-1];
    v0144 = qvalue(elt(env, 3)); /* work!-vector1 */
    fn = elt(env, 8); /* copy!-vector */
    v0144 = (*qfnn(fn))(qenv(fn), 3, v0146, v0145, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-5];
    qvalue(elt(env, 4)) = v0144; /* dwork1 */
    v0144 = stack[-3];
    v0144 = qcar(v0144);
    v0146 = qcar(v0144);
    v0144 = stack[-3];
    v0144 = qcar(v0144);
    v0145 = qcdr(v0144);
    v0144 = qvalue(elt(env, 5)); /* work!-vector2 */
    fn = elt(env, 8); /* copy!-vector */
    v0144 = (*qfnn(fn))(qenv(fn), 3, v0146, v0145, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-5];
    qvalue(elt(env, 6)) = v0144; /* dwork2 */
    v0147 = qvalue(elt(env, 3)); /* work!-vector1 */
    v0146 = qvalue(elt(env, 4)); /* dwork1 */
    v0145 = qvalue(elt(env, 5)); /* work!-vector2 */
    v0144 = qvalue(elt(env, 6)); /* dwork2 */
    fn = elt(env, 9); /* gcd!-in!-vector */
    v0144 = (*qfnn(fn))(qenv(fn), 4, v0147, v0146, v0145, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-5];
    qvalue(elt(env, 4)) = v0144; /* dwork1 */
    v0145 = qvalue(elt(env, 4)); /* dwork1 */
    v0144 = (Lisp_Object)1; /* 0 */
    if (v0145 == v0144) goto v0094;
    v0145 = qvalue(elt(env, 4)); /* dwork1 */
    v0144 = stack[-3];
    v0144 = qcar(v0144);
    v0144 = qcdr(v0144);
    v0144 = (equal(v0145, v0144) ? lisp_true : nil);
    goto v0042;

v0042:
    if (!(v0144 == nil)) goto v0149;
    v0144 = stack[-3];
    v0144 = qcar(v0144);
    v0146 = qcar(v0144);
    v0144 = stack[-3];
    v0144 = qcar(v0144);
    v0145 = qcdr(v0144);
    v0144 = qvalue(elt(env, 5)); /* work!-vector2 */
    fn = elt(env, 8); /* copy!-vector */
    v0144 = (*qfnn(fn))(qenv(fn), 3, v0146, v0145, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-5];
    qvalue(elt(env, 6)) = v0144; /* dwork2 */
    v0147 = qvalue(elt(env, 5)); /* work!-vector2 */
    v0146 = qvalue(elt(env, 6)); /* dwork2 */
    v0145 = qvalue(elt(env, 3)); /* work!-vector1 */
    v0144 = qvalue(elt(env, 4)); /* dwork1 */
    fn = elt(env, 10); /* quotfail!-in!-vector */
    v0144 = (*qfnn(fn))(qenv(fn), 4, v0147, v0146, v0145, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-5];
    qvalue(elt(env, 6)) = v0144; /* dwork2 */
    v0144 = qvalue(elt(env, 4)); /* dwork1 */
    v0144 = Lmkvect(nil, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-5];
    stack[-1] = v0144;
    v0146 = qvalue(elt(env, 3)); /* work!-vector1 */
    v0145 = qvalue(elt(env, 4)); /* dwork1 */
    v0144 = stack[-1];
    fn = elt(env, 8); /* copy!-vector */
    v0144 = (*qfnn(fn))(qenv(fn), 3, v0146, v0145, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-5];
    v0146 = stack[-1];
    v0145 = qvalue(elt(env, 4)); /* dwork1 */
    v0144 = stack[-4];
    v0144 = acons(v0146, v0145, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-5];
    stack[-4] = v0144;
    stack[-2] = qvalue(elt(env, 5)); /* work!-vector2 */
    stack[-1] = qvalue(elt(env, 6)); /* dwork2 */
    v0144 = qvalue(elt(env, 6)); /* dwork2 */
    v0144 = Lmkvect(nil, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-5];
    stack[-3] = v0144;
    fn = elt(env, 8); /* copy!-vector */
    v0144 = (*qfnn(fn))(qenv(fn), 3, stack[-2], stack[-1], v0144);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-5];
    v0146 = stack[-3];
    v0145 = qvalue(elt(env, 6)); /* dwork2 */
    v0144 = stack[0];
    v0144 = acons(v0146, v0145, v0144);
    nil = C_nil;
    if (exception_pending()) goto v0148;
    env = stack[-5];
    stack[0] = v0144;
    v0144 = qvalue(elt(env, 2)); /* number!-needed */
    v0144 = (Lisp_Object)((int32_t)(v0144) - 0x10);
    qvalue(elt(env, 2)) = v0144; /* number!-needed */
    v0145 = stack[-4];
    v0144 = stack[0];
    popv(6);
    return cons(v0145, v0144);

v0149:
    v0146 = stack[-4];
    v0144 = stack[-3];
    v0145 = qcar(v0144);
    v0144 = stack[0];
    popv(6);
    return list2star(v0146, v0145, v0144);

v0094:
    v0144 = qvalue(elt(env, 7)); /* t */
    goto v0042;

v0025:
    v0144 = qvalue(elt(env, 1)); /* nil */
    popv(6);
    return ncons(v0144);
/* error exit handlers */
v0148:
    popv(6);
    return nil;
}



/* Code for subtractinds */

static Lisp_Object MS_CDECL CC_subtractinds(Lisp_Object env, int nargs,
                         Lisp_Object v0000, Lisp_Object v0001,
                         Lisp_Object v0002, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0046, v0047;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "subtractinds");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for subtractinds");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0002,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0001,v0002);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0002;
    stack[-2] = v0001;
    stack[-3] = v0000;
/* end of prologue */

v0035:
    v0046 = stack[-2];
    if (v0046 == nil) goto v0021;
    v0046 = stack[-3];
    v0047 = qcar(v0046);
    v0046 = stack[-2];
    v0046 = qcar(v0046);
    v0046 = qcar(v0046);
    v0047 = difference2(v0047, v0046);
    nil = C_nil;
    if (exception_pending()) goto v0154;
    env = stack[-5];
    v0046 = (Lisp_Object)1; /* 0 */
    v0046 = (Lisp_Object)lessp2(v0047, v0046);
    nil = C_nil;
    if (exception_pending()) goto v0154;
    v0046 = v0046 ? lisp_true : nil;
    env = stack[-5];
    if (v0046 == nil) goto v0049;
    v0046 = qvalue(elt(env, 1)); /* nil */
    { popv(6); return onevalue(v0046); }

v0049:
    v0046 = stack[-3];
    v0046 = qcdr(v0046);
    stack[-4] = v0046;
    v0046 = stack[-2];
    v0046 = qcdr(v0046);
    stack[0] = v0046;
    v0046 = stack[-3];
    v0047 = qcar(v0046);
    v0046 = stack[-2];
    v0046 = qcar(v0046);
    v0046 = qcar(v0046);
    v0047 = difference2(v0047, v0046);
    nil = C_nil;
    if (exception_pending()) goto v0154;
    env = stack[-5];
    v0046 = stack[-1];
    v0046 = cons(v0047, v0046);
    nil = C_nil;
    if (exception_pending()) goto v0154;
    env = stack[-5];
    stack[-1] = v0046;
    v0046 = stack[0];
    stack[-2] = v0046;
    v0046 = stack[-4];
    stack[-3] = v0046;
    goto v0035;

v0021:
    v0046 = stack[-1];
        popv(6);
        return Lnreverse(nil, v0046);
/* error exit handlers */
v0154:
    popv(6);
    return nil;
}



/* Code for change!+int!+to!+sq */

static Lisp_Object CC_changeLintLtoLsq(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0024, v0029;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for change+int+to+sq");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0024 = v0000;
/* end of prologue */
    v0029 = v0024;
    v0024 = (Lisp_Object)17; /* 1 */
    return cons(v0029, v0024);
}



/* Code for mri_ofsf2mri */

static Lisp_Object CC_mri_ofsf2mri(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0014, v0051;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mri_ofsf2mri");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    v0014 = v0001;
    v0051 = v0000;
/* end of prologue */
    stack[-1] = v0051;
    stack[0] = elt(env, 1); /* mri_ofsf2mriat */
    v0014 = ncons(v0014);
    nil = C_nil;
    if (exception_pending()) goto v0155;
    env = stack[-2];
    {
        Lisp_Object v0156 = stack[-1];
        Lisp_Object v0116 = stack[0];
        popv(3);
        fn = elt(env, 2); /* cl_apply2ats1 */
        return (*qfnn(fn))(qenv(fn), 3, v0156, v0116, v0014);
    }
/* error exit handlers */
v0155:
    popv(3);
    return nil;
}



/* Code for qqe_simplqneq */

static Lisp_Object CC_qqe_simplqneq(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0160, v0064, v0161;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for qqe_simplqneq");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    v0064 = v0001;
    v0160 = v0000;
/* end of prologue */
    v0064 = v0160;
    v0064 = qcdr(v0064);
    v0064 = qcar(v0064);
    v0160 = qcdr(v0160);
    v0160 = qcdr(v0160);
    v0160 = qcar(v0160);
    v0161 = elt(env, 1); /* qequal */
    fn = elt(env, 6); /* qqe_mk2 */
    v0064 = (*qfnn(fn))(qenv(fn), 3, v0161, v0064, v0160);
    nil = C_nil;
    if (exception_pending()) goto v0162;
    env = stack[-3];
    v0160 = qvalue(elt(env, 2)); /* nil */
    fn = elt(env, 7); /* qqe_simplqequal */
    v0160 = (*qfn2(fn))(qenv(fn), v0064, v0160);
    nil = C_nil;
    if (exception_pending()) goto v0162;
    env = stack[-3];
    stack[-2] = v0160;
    v0064 = stack[-2];
    v0160 = elt(env, 3); /* true */
    if (v0064 == v0160) goto v0163;
    v0064 = stack[-2];
    v0160 = elt(env, 4); /* false */
    if (v0064 == v0160) goto v0110;
    stack[-1] = elt(env, 5); /* qneq */
    v0160 = stack[-2];
    fn = elt(env, 8); /* qqe_arg2l */
    stack[0] = (*qfn1(fn))(qenv(fn), v0160);
    nil = C_nil;
    if (exception_pending()) goto v0162;
    env = stack[-3];
    v0160 = stack[-2];
    fn = elt(env, 9); /* qqe_arg2r */
    v0160 = (*qfn1(fn))(qenv(fn), v0160);
    nil = C_nil;
    if (exception_pending()) goto v0162;
    env = stack[-3];
    fn = elt(env, 6); /* qqe_mk2 */
    v0160 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[0], v0160);
    nil = C_nil;
    if (exception_pending()) goto v0162;
    { popv(4); return onevalue(v0160); }

v0110:
    v0160 = elt(env, 3); /* true */
    { popv(4); return onevalue(v0160); }

v0163:
    v0160 = elt(env, 4); /* false */
    { popv(4); return onevalue(v0160); }
/* error exit handlers */
v0162:
    popv(4);
    return nil;
}



/* Code for pasf_leqp */

static Lisp_Object CC_pasf_leqp(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0092, v0093, v0165, v0166;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for pasf_leqp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* copy arguments values to proper place */
    v0093 = v0001;
    v0165 = v0000;
/* end of prologue */
    v0092 = v0165;
    if (!(v0092 == nil)) goto v0025;
    v0092 = (Lisp_Object)1; /* 0 */
    v0165 = v0092;
    goto v0025;

v0025:
    v0092 = v0093;
    if (!(v0092 == nil)) goto v0075;
    v0092 = (Lisp_Object)1; /* 0 */
    v0093 = v0092;
    goto v0075;

v0075:
    v0166 = v0165;
    v0092 = elt(env, 1); /* minf */
    if (v0166 == v0092) goto v0108;
    v0166 = v0093;
    v0092 = elt(env, 3); /* pinf */
    if (v0166 == v0092) goto v0049;
    v0166 = v0165;
    v0092 = elt(env, 3); /* pinf */
    if (v0166 == v0092) goto v0167;
    v0166 = v0093;
    v0092 = elt(env, 1); /* minf */
    if (v0166 == v0092) goto v0168;
    v0092 = v0165;
    v0092 = (Lisp_Object)lesseq2(v0092, v0093);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    v0092 = v0092 ? lisp_true : nil;
    env = stack[0];
    goto v0117;

v0117:
    if (v0092 == nil) goto v0156;
    v0092 = qvalue(elt(env, 2)); /* t */
    { popv(1); return onevalue(v0092); }

v0156:
    v0092 = nil;
    { popv(1); return onevalue(v0092); }

v0168:
    v0092 = qvalue(elt(env, 4)); /* nil */
    goto v0117;

v0167:
    v0092 = qvalue(elt(env, 4)); /* nil */
    goto v0117;

v0049:
    v0092 = qvalue(elt(env, 2)); /* t */
    goto v0117;

v0108:
    v0092 = qvalue(elt(env, 2)); /* t */
    goto v0117;
/* error exit handlers */
v0169:
    popv(1);
    return nil;
}



/* Code for diford */

static Lisp_Object CC_diford(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0025;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for diford");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0025 = v0000;
/* end of prologue */
    v0025 = qcdr(v0025);
    v0025 = qcdr(v0025);
    {
        fn = elt(env, 1); /* lengthn */
        return (*qfn1(fn))(qenv(fn), v0025);
    }
}



/* Code for greatertype */

static Lisp_Object CC_greatertype(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0121, v0178, v0017;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for greatertype");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[-5] = v0001;
    stack[-6] = v0000;
/* end of prologue */
    stack[-4] = nil;
    stack[-3] = nil;
    stack[-2] = nil;
    stack[-1] = nil;
    v0121 = qvalue(elt(env, 1)); /* optlang!* */
    if (v0121 == nil) goto v0109;
    v0121 = qvalue(elt(env, 1)); /* optlang!* */
    v0178 = v0121;
    goto v0014;

v0014:
    v0121 = elt(env, 3); /* conversion */
    v0121 = get(v0178, v0121);
    env = stack[-8];
    fn = elt(env, 6); /* eval */
    v0121 = (*qfn1(fn))(qenv(fn), v0121);
    nil = C_nil;
    if (exception_pending()) goto v0179;
    env = stack[-8];
    stack[-7] = v0121;
    v0121 = stack[-7];
    v0178 = qcar(v0121);
    v0121 = stack[-5];
    if (equal(v0178, v0121)) goto v0141;
    v0121 = stack[-7];
    v0178 = qcar(v0121);
    v0121 = stack[-6];
    if (!(equal(v0178, v0121))) goto v0140;
    v0121 = qvalue(elt(env, 5)); /* nil */
    stack[-1] = v0121;
    { Lisp_Object res = stack[-1]; popv(9); return onevalue(res); }

v0140:
    v0121 = stack[-7];
    v0121 = qcdr(v0121);
    stack[-7] = v0121;
    if (v0121 == nil) { Lisp_Object res = stack[-1]; popv(9); return onevalue(res); }
    v0121 = stack[-4];
    if (!(v0121 == nil)) { Lisp_Object res = stack[-1]; popv(9); return onevalue(res); }
    v0121 = stack[-7];
    v0121 = qcar(v0121);
    v0017 = v0121;
    goto v0138;

v0138:
    v0121 = v0017;
    if (v0121 == nil) goto v0154;
    v0121 = stack[-2];
    if (!(v0121 == nil)) goto v0154;
    v0121 = v0017;
    v0178 = qcar(v0121);
    v0121 = stack[-6];
    if (!(equal(v0178, v0121))) goto v0180;
    v0121 = qvalue(elt(env, 4)); /* t */
    stack[-3] = v0121;
    goto v0180;

v0180:
    v0121 = v0017;
    v0178 = qcar(v0121);
    v0121 = stack[-5];
    if (equal(v0178, v0121)) goto v0181;
    v0121 = v0017;
    v0121 = qcdr(v0121);
    v0017 = v0121;
    goto v0138;

v0181:
    v0121 = qvalue(elt(env, 4)); /* t */
    stack[-2] = v0121;
    goto v0138;

v0154:
    v0121 = stack[-2];
    if (v0121 == nil) goto v0182;
    v0121 = v0017;
    v0121 = qcdr(v0121);
    v0017 = v0121;
    goto v0183;

v0183:
    v0121 = v0017;
    if (v0121 == nil) goto v0182;
    v0121 = stack[-1];
    if (!(v0121 == nil)) goto v0182;
    v0121 = v0017;
    v0178 = qcar(v0121);
    v0121 = stack[-6];
    if (equal(v0178, v0121)) goto v0184;
    v0121 = v0017;
    v0121 = qcdr(v0121);
    v0017 = v0121;
    goto v0183;

v0184:
    v0121 = qvalue(elt(env, 4)); /* t */
    stack[-1] = v0121;
    stack[-3] = v0121;
    goto v0183;

v0182:
    v0121 = stack[-3];
    if (v0121 == nil) goto v0081;
    v0121 = stack[-2];
    if (!(v0121 == nil)) goto v0081;

v0027:
    stack[0] = (Lisp_Object)65; /* 4 */
    v0178 = stack[-6];
    v0121 = stack[-5];
    v0121 = cons(v0178, v0121);
    nil = C_nil;
    if (exception_pending()) goto v0179;
    env = stack[-8];
    fn = elt(env, 7); /* typerror */
    v0121 = (*qfn2(fn))(qenv(fn), stack[0], v0121);
    nil = C_nil;
    if (exception_pending()) goto v0179;
    env = stack[-8];
    goto v0140;

v0081:
    v0121 = stack[-3];
    if (v0121 == nil) goto v0082;
    v0121 = qvalue(elt(env, 5)); /* nil */
    goto v0068;

v0068:
    if (!(v0121 == nil)) goto v0027;
    v0121 = stack[-3];
    if (v0121 == nil) goto v0140;
    v0121 = stack[-2];
    if (v0121 == nil) goto v0140;
    v0121 = qvalue(elt(env, 4)); /* t */
    stack[-4] = v0121;
    goto v0140;

v0082:
    v0121 = stack[-2];
    goto v0068;

v0141:
    v0121 = qvalue(elt(env, 4)); /* t */
    stack[-1] = v0121;
    { Lisp_Object res = stack[-1]; popv(9); return onevalue(res); }

v0109:
    v0121 = elt(env, 2); /* fortran */
    v0178 = v0121;
    goto v0014;
/* error exit handlers */
v0179:
    popv(9);
    return nil;
}



/* Code for newvar */

static Lisp_Object CC_newvar(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0143, v0141;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for newvar");
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
    v0143 = stack[0];
    if (symbolp(v0143)) goto v0156;
    v0141 = stack[0];
    v0143 = elt(env, 1); /* "free variable" */
    {
        popv(3);
        fn = elt(env, 3); /* typerr */
        return (*qfn2(fn))(qenv(fn), v0141, v0143);
    }

v0156:
    v0143 = elt(env, 2); /* != */
    stack[-1] = Lexplode(nil, v0143);
    nil = C_nil;
    if (exception_pending()) goto v0158;
    env = stack[-2];
    v0143 = stack[0];
    v0143 = Lexplode(nil, v0143);
    nil = C_nil;
    if (exception_pending()) goto v0158;
    env = stack[-2];
    v0143 = Lappend(nil, stack[-1], v0143);
    nil = C_nil;
    if (exception_pending()) goto v0158;
    env = stack[-2];
    v0143 = Lcompress(nil, v0143);
    nil = C_nil;
    if (exception_pending()) goto v0158;
        popv(3);
        return Lintern(nil, v0143);
/* error exit handlers */
v0158:
    popv(3);
    return nil;
}



/* Code for divide!-by!-power!-of!-ten */

static Lisp_Object CC_divideKbyKpowerKofKten(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0162, v0187, v0167;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for divide-by-power-of-ten");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    stack[-1] = v0000;
/* end of prologue */
    v0187 = stack[0];
    v0162 = (Lisp_Object)1; /* 0 */
    v0162 = (Lisp_Object)lessp2(v0187, v0162);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    v0162 = v0162 ? lisp_true : nil;
    env = stack[-3];
    if (v0162 == nil) goto v0048;
    v0162 = elt(env, 0); /* divide!-by!-power!-of!-ten */
    {
        popv(4);
        fn = elt(env, 4); /* bflerrmsg */
        return (*qfn1(fn))(qenv(fn), v0162);
    }

v0048:
    v0162 = qvalue(elt(env, 1)); /* bften!* */
    stack[-2] = v0162;
    goto v0143;

v0143:
    v0187 = stack[0];
    v0162 = (Lisp_Object)1; /* 0 */
    v0162 = (Lisp_Object)greaterp2(v0187, v0162);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    v0162 = v0162 ? lisp_true : nil;
    env = stack[-3];
    if (v0162 == nil) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v0162 = stack[0];
    v0162 = Levenp(nil, v0162);
    env = stack[-3];
    if (!(v0162 == nil)) goto v0140;
    v0167 = stack[-1];
    v0187 = stack[-2];
    v0162 = qvalue(elt(env, 3)); /* !:bprec!: */
    fn = elt(env, 5); /* divide!: */
    v0162 = (*qfnn(fn))(qenv(fn), 3, v0167, v0187, v0162);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    env = stack[-3];
    fn = elt(env, 6); /* normbf */
    v0162 = (*qfn1(fn))(qenv(fn), v0162);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    env = stack[-3];
    stack[-1] = v0162;
    goto v0140;

v0140:
    v0187 = stack[0];
    v0162 = (Lisp_Object)-15; /* -1 */
    v0162 = ash(v0187, v0162);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    env = stack[-3];
    stack[0] = v0162;
    v0187 = stack[-2];
    v0162 = stack[-2];
    fn = elt(env, 7); /* times!: */
    v0187 = (*qfn2(fn))(qenv(fn), v0187, v0162);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    env = stack[-3];
    v0162 = qvalue(elt(env, 3)); /* !:bprec!: */
    fn = elt(env, 8); /* cut!:mt */
    v0162 = (*qfn2(fn))(qenv(fn), v0187, v0162);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    env = stack[-3];
    fn = elt(env, 6); /* normbf */
    v0162 = (*qfn1(fn))(qenv(fn), v0162);
    nil = C_nil;
    if (exception_pending()) goto v0092;
    env = stack[-3];
    stack[-2] = v0162;
    goto v0143;
/* error exit handlers */
v0092:
    popv(4);
    return nil;
}



/* Code for mk_parents_prim */

static Lisp_Object CC_mk_parents_prim(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0163, v0176;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mk_parents_prim");
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
    v0163 = stack[0];
    v0176 = Llength(nil, v0163);
    nil = C_nil;
    if (exception_pending()) goto v0050;
    env = stack[-1];
    v0163 = (Lisp_Object)49; /* 3 */
    if (!(v0176 == v0163)) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v0163 = stack[0];
    fn = elt(env, 1); /* s_noparents */
    v0163 = (*qfn1(fn))(qenv(fn), v0163);
    nil = C_nil;
    if (exception_pending()) goto v0050;
    env = stack[-1];
    v0176 = v0163;
    if (v0176 == nil) { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
    v0176 = stack[0];
    v0163 = qcar(v0163);
    fn = elt(env, 2); /* mk_edge_parents */
    v0163 = (*qfn2(fn))(qenv(fn), v0176, v0163);
    nil = C_nil;
    if (exception_pending()) goto v0050;
    { Lisp_Object res = stack[0]; popv(2); return onevalue(res); }
/* error exit handlers */
v0050:
    popv(2);
    return nil;
}



/* Code for mo_zero!? */

static Lisp_Object CC_mo_zeroW(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0013;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for mo_zero?");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0013 = v0000;
/* end of prologue */
    v0013 = qcar(v0013);
    {
        fn = elt(env, 1); /* mo!=zero */
        return (*qfn1(fn))(qenv(fn), v0013);
    }
}



/* Code for simp!-prop!-dist */

static Lisp_Object CC_simpKpropKdist(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0189, v0084, v0085;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for simp-prop-dist");
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
    v0084 = v0000;
/* end of prologue */
    v0085 = v0084;
    v0189 = elt(env, 1); /* plus */
    if (!consp(v0085)) goto v0051;
    v0085 = qcar(v0085);
    if (!(v0085 == v0189)) goto v0051;
    v0189 = v0084;
    v0189 = qcdr(v0189);
    v0084 = v0189;
    goto v0003;

v0003:
    v0189 = v0084;
    stack[-3] = v0189;
    v0189 = stack[-3];
    if (v0189 == nil) goto v0143;
    v0189 = stack[-3];
    v0189 = qcar(v0189);
    v0085 = v0189;
    v0084 = v0085;
    v0189 = elt(env, 3); /* times */
    if (!consp(v0084)) goto v0190;
    v0084 = qcar(v0084);
    if (!(v0084 == v0189)) goto v0190;
    v0189 = v0085;
    v0189 = qcdr(v0189);
    goto v0163;

v0163:
    v0085 = v0189;
    v0189 = v0085;
    v0189 = qcar(v0189);
    if (!(is_number(v0189))) goto v0047;
    v0189 = v0085;
    v0189 = qcdr(v0189);
    v0085 = v0189;
    goto v0047;

v0047:
    v0084 = v0085;
    v0189 = elt(env, 4); /* lambda_mth9cs_8 */
    fn = elt(env, 7); /* sort */
    v0189 = (*qfn2(fn))(qenv(fn), v0084, v0189);
    nil = C_nil;
    if (exception_pending()) goto v0127;
    env = stack[-4];
    v0189 = ncons(v0189);
    nil = C_nil;
    if (exception_pending()) goto v0127;
    env = stack[-4];
    stack[-1] = v0189;
    stack[-2] = v0189;
    goto v0075;

v0075:
    v0189 = stack[-3];
    v0189 = qcdr(v0189);
    stack[-3] = v0189;
    v0189 = stack[-3];
    if (v0189 == nil) goto v0064;
    stack[0] = stack[-1];
    v0189 = stack[-3];
    v0189 = qcar(v0189);
    v0085 = v0189;
    v0084 = v0085;
    v0189 = elt(env, 3); /* times */
    if (!consp(v0084)) goto v0038;
    v0084 = qcar(v0084);
    if (!(v0084 == v0189)) goto v0038;
    v0189 = v0085;
    v0189 = qcdr(v0189);
    goto v0041;

v0041:
    v0085 = v0189;
    v0189 = v0085;
    v0189 = qcar(v0189);
    if (!(is_number(v0189))) goto v0191;
    v0189 = v0085;
    v0189 = qcdr(v0189);
    v0085 = v0189;
    goto v0191;

v0191:
    v0084 = v0085;
    v0189 = elt(env, 5); /* lambda_mth9cs_9 */
    fn = elt(env, 7); /* sort */
    v0189 = (*qfn2(fn))(qenv(fn), v0084, v0189);
    nil = C_nil;
    if (exception_pending()) goto v0127;
    env = stack[-4];
    v0189 = ncons(v0189);
    nil = C_nil;
    if (exception_pending()) goto v0127;
    env = stack[-4];
    v0189 = Lrplacd(nil, stack[0], v0189);
    nil = C_nil;
    if (exception_pending()) goto v0127;
    env = stack[-4];
    v0189 = stack[-1];
    v0189 = qcdr(v0189);
    stack[-1] = v0189;
    goto v0075;

v0038:
    v0189 = v0085;
    v0189 = ncons(v0189);
    nil = C_nil;
    if (exception_pending()) goto v0127;
    env = stack[-4];
    goto v0041;

v0064:
    v0189 = stack[-2];
    goto v0109;

v0109:
    v0084 = v0189;
    v0189 = elt(env, 6); /* simp!-prop!-order */
    {
        popv(5);
        fn = elt(env, 7); /* sort */
        return (*qfn2(fn))(qenv(fn), v0084, v0189);
    }

v0190:
    v0189 = v0085;
    v0189 = ncons(v0189);
    nil = C_nil;
    if (exception_pending()) goto v0127;
    env = stack[-4];
    goto v0163;

v0143:
    v0189 = qvalue(elt(env, 2)); /* nil */
    goto v0109;

v0051:
    v0189 = v0084;
    v0189 = ncons(v0189);
    nil = C_nil;
    if (exception_pending()) goto v0127;
    env = stack[-4];
    v0084 = v0189;
    goto v0003;
/* error exit handlers */
v0127:
    popv(5);
    return nil;
}



/* Code for lambda_mth9cs_9 */

static Lisp_Object CC_lambda_mth9cs_9(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0014, v0051;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lambda_mth9cs_9");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0014 = v0001;
    v0051 = v0000;
/* end of prologue */
    v0051 = qcdr(v0051);
    v0051 = qcar(v0051);
    v0014 = qcdr(v0014);
    v0014 = qcar(v0014);
    {
        fn = elt(env, 1); /* ordp */
        return (*qfn2(fn))(qenv(fn), v0051, v0014);
    }
}



/* Code for lambda_mth9cs_8 */

static Lisp_Object CC_lambda_mth9cs_8(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0014, v0051;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for lambda_mth9cs_8");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0014 = v0001;
    v0051 = v0000;
/* end of prologue */
    v0051 = qcdr(v0051);
    v0051 = qcar(v0051);
    v0014 = qcdr(v0014);
    v0014 = qcar(v0014);
    {
        fn = elt(env, 1); /* ordp */
        return (*qfn2(fn))(qenv(fn), v0051, v0014);
    }
}



/* Code for tidysqrtf */

static Lisp_Object CC_tidysqrtf(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0017, v0066, v0202;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for tidysqrtf");
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
    v0017 = stack[-1];
    if (!consp(v0017)) goto v0035;
    v0017 = stack[-1];
    v0017 = qcar(v0017);
    v0017 = (consp(v0017) ? nil : lisp_true);
    goto v0043;

v0043:
    if (v0017 == nil) goto v0075;
    v0066 = stack[-1];
    v0017 = (Lisp_Object)17; /* 1 */
    popv(4);
    return cons(v0066, v0017);

v0075:
    v0017 = stack[-1];
    v0017 = qcar(v0017);
    v0017 = qcar(v0017);
    stack[-2] = v0017;
    v0017 = stack[-2];
    v0066 = qcar(v0017);
    v0017 = elt(env, 2); /* i */
    if (!(v0066 == v0017)) goto v0047;
    v0066 = elt(env, 3); /* (sqrt -1) */
    v0017 = stack[-2];
    v0017 = qcdr(v0017);
    fn = elt(env, 6); /* mksp */
    v0017 = (*qfn2(fn))(qenv(fn), v0066, v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    stack[-2] = v0017;
    goto v0047;

v0047:
    v0017 = stack[-2];
    v0066 = qcar(v0017);
    v0017 = elt(env, 4); /* sqrt */
    if (!consp(v0066)) goto v0161;
    v0066 = qcar(v0066);
    if (!(v0066 == v0017)) goto v0161;
    v0017 = stack[-2];
    v0017 = qcdr(v0017);
    v0017 = Lonep(nil, v0017);
    env = stack[-3];
    v0017 = (v0017 == nil ? lisp_true : nil);
    goto v0151;

v0151:
    if (v0017 == nil) goto v0080;
    v0017 = stack[-2];
    v0066 = qcdr(v0017);
    v0017 = (Lisp_Object)33; /* 2 */
    v0017 = Ldivide(nil, v0066, v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    stack[0] = v0017;
    v0017 = stack[-2];
    v0017 = qcar(v0017);
    v0017 = qcdr(v0017);
    v0017 = qcar(v0017);
    fn = elt(env, 7); /* simp */
    v0066 = (*qfn1(fn))(qenv(fn), v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    v0017 = stack[0];
    v0017 = qcar(v0017);
    fn = elt(env, 8); /* exptsq */
    v0017 = (*qfn2(fn))(qenv(fn), v0066, v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    v0202 = v0017;
    v0017 = stack[0];
    v0066 = qcdr(v0017);
    v0017 = (Lisp_Object)1; /* 0 */
    if (v0066 == v0017) goto v0039;
    stack[0] = v0202;
    v0017 = stack[-2];
    v0066 = qcar(v0017);
    v0017 = (Lisp_Object)17; /* 1 */
    fn = elt(env, 6); /* mksp */
    v0066 = (*qfn2(fn))(qenv(fn), v0066, v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    v0017 = (Lisp_Object)17; /* 1 */
    v0202 = cons(v0066, v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    v0066 = qvalue(elt(env, 5)); /* nil */
    v0017 = (Lisp_Object)17; /* 1 */
    v0017 = acons(v0202, v0066, v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    fn = elt(env, 9); /* multsq */
    v0017 = (*qfn2(fn))(qenv(fn), stack[0], v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    v0202 = v0017;
    goto v0039;

v0039:
    v0017 = v0202;
    fn = elt(env, 10); /* tidysqrt */
    v0017 = (*qfn1(fn))(qenv(fn), v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    v0202 = v0017;
    goto v0077;

v0077:
    stack[0] = v0202;
    v0017 = stack[-1];
    v0017 = qcar(v0017);
    v0017 = qcdr(v0017);
    v0017 = CC_tidysqrtf(env, v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    fn = elt(env, 9); /* multsq */
    v0017 = (*qfn2(fn))(qenv(fn), stack[0], v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    stack[-2] = v0017;
    stack[0] = stack[-2];
    v0017 = stack[-1];
    v0017 = qcdr(v0017);
    v0017 = CC_tidysqrtf(env, v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    {
        Lisp_Object v0023 = stack[0];
        popv(4);
        fn = elt(env, 11); /* addsq */
        return (*qfn2(fn))(qenv(fn), v0023, v0017);
    }

v0080:
    v0066 = stack[-2];
    v0017 = (Lisp_Object)17; /* 1 */
    v0202 = cons(v0066, v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    v0066 = qvalue(elt(env, 5)); /* nil */
    v0017 = (Lisp_Object)17; /* 1 */
    v0017 = acons(v0202, v0066, v0017);
    nil = C_nil;
    if (exception_pending()) goto v0022;
    env = stack[-3];
    v0202 = v0017;
    goto v0077;

v0161:
    v0017 = qvalue(elt(env, 5)); /* nil */
    goto v0151;

v0035:
    v0017 = qvalue(elt(env, 1)); /* t */
    goto v0043;
/* error exit handlers */
v0022:
    popv(4);
    return nil;
}



/* Code for get_dimension_in */

static Lisp_Object CC_get_dimension_in(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0040, v0014;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for get_dimension_in");
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
    v0040 = v0000;
/* end of prologue */
    v0014 = elt(env, 1); /* id */
    fn = elt(env, 2); /* get_rep_matrix_in */
    v0040 = (*qfn2(fn))(qenv(fn), v0014, v0040);
    nil = C_nil;
    if (exception_pending()) goto v0051;
    env = stack[0];
    fn = elt(env, 3); /* mk!+trace */
    v0040 = (*qfn1(fn))(qenv(fn), v0040);
    nil = C_nil;
    if (exception_pending()) goto v0051;
    env = stack[0];
    {
        popv(1);
        fn = elt(env, 4); /* change!+sq!+to!+int */
        return (*qfn1(fn))(qenv(fn), v0040);
    }
/* error exit handlers */
v0051:
    popv(1);
    return nil;
}



/* Code for pasf_coeflst */

static Lisp_Object CC_pasf_coeflst(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0137, v0136, v0135;
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
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */
    stack[0] = nil;
    v0137 = stack[-1];
    v0137 = ncons(v0137);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-4];
    fn = elt(env, 3); /* setkorder */
    v0137 = (*qfn1(fn))(qenv(fn), v0137);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-4];
    stack[-3] = v0137;
    v0137 = stack[-2];
    fn = elt(env, 4); /* reorder */
    v0137 = (*qfn1(fn))(qenv(fn), v0137);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-4];
    stack[-2] = v0137;
    goto v0014;

v0014:
    v0137 = stack[-2];
    if (!consp(v0137)) goto v0114;
    v0137 = stack[-2];
    v0137 = qcar(v0137);
    v0137 = (consp(v0137) ? nil : lisp_true);
    goto v0075;

v0075:
    if (v0137 == nil) goto v0115;
    v0137 = qvalue(elt(env, 2)); /* nil */
    goto v0116;

v0116:
    if (v0137 == nil) goto v0040;
    v0137 = stack[-2];
    v0137 = qcar(v0137);
    v0135 = qcdr(v0137);
    v0137 = stack[-2];
    v0137 = qcar(v0137);
    v0137 = qcar(v0137);
    v0136 = qcdr(v0137);
    v0137 = stack[0];
    v0137 = acons(v0135, v0136, v0137);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-4];
    stack[0] = v0137;
    v0137 = stack[-2];
    v0137 = qcdr(v0137);
    stack[-2] = v0137;
    goto v0014;

v0040:
    v0137 = stack[-3];
    fn = elt(env, 3); /* setkorder */
    v0137 = (*qfn1(fn))(qenv(fn), v0137);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-4];
    v0137 = stack[-2];
    fn = elt(env, 5); /* negf */
    v0135 = (*qfn1(fn))(qenv(fn), v0137);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-4];
    v0136 = (Lisp_Object)1; /* 0 */
    v0137 = stack[0];
    v0137 = acons(v0135, v0136, v0137);
    nil = C_nil;
    if (exception_pending()) goto v0169;
        popv(5);
        return Lnreverse(nil, v0137);

v0115:
    v0137 = stack[-2];
    v0137 = qcar(v0137);
    v0137 = qcar(v0137);
    v0136 = qcar(v0137);
    v0137 = stack[-1];
    v0137 = (v0136 == v0137 ? lisp_true : nil);
    goto v0116;

v0114:
    v0137 = qvalue(elt(env, 1)); /* t */
    goto v0075;
/* error exit handlers */
v0169:
    popv(5);
    return nil;
}



/* Code for vdpsimpcont */

static Lisp_Object CC_vdpsimpcont(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0047, v0097, v0098;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for vdpsimpcont");
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
    v0047 = stack[-1];
    v0047 = qcdr(v0047);
    v0047 = qcdr(v0047);
    v0047 = qcdr(v0047);
    v0047 = qcar(v0047);
    stack[0] = v0047;
    v0047 = stack[0];
    if (v0047 == nil) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v0047 = stack[0];
    fn = elt(env, 3); /* dipsimpcont */
    v0047 = (*qfn1(fn))(qenv(fn), v0047);
    nil = C_nil;
    if (exception_pending()) goto v0154;
    env = stack[-3];
    stack[-2] = v0047;
    v0047 = stack[-2];
    v0047 = qcdr(v0047);
    fn = elt(env, 4); /* dip2vdp */
    v0047 = (*qfn1(fn))(qenv(fn), v0047);
    nil = C_nil;
    if (exception_pending()) goto v0154;
    env = stack[-3];
    stack[-1] = v0047;
    v0047 = stack[-2];
    v0047 = qcar(v0047);
    stack[-2] = v0047;
    v0047 = stack[-2];
    fn = elt(env, 5); /* evzero!? */
    v0047 = (*qfn1(fn))(qenv(fn), v0047);
    nil = C_nil;
    if (exception_pending()) goto v0154;
    env = stack[-3];
    if (v0047 == nil) goto v0141;
    v0047 = qvalue(elt(env, 1)); /* nil */
    goto v0143;

v0143:
    if (v0047 == nil) { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }
    v0098 = stack[-1];
    v0097 = elt(env, 2); /* monfac */
    v0047 = stack[-2];
    fn = elt(env, 6); /* vdpputprop */
    v0047 = (*qfnn(fn))(qenv(fn), 3, v0098, v0097, v0047);
    nil = C_nil;
    if (exception_pending()) goto v0154;
    { Lisp_Object res = stack[-1]; popv(4); return onevalue(res); }

v0141:
    v0047 = stack[0];
    v0047 = qcdr(v0047);
    v0047 = qcdr(v0047);
    if (!(v0047 == nil)) goto v0143;
    v0047 = stack[-2];
    fn = elt(env, 7); /* evtdeg */
    v0097 = (*qfn1(fn))(qenv(fn), v0047);
    nil = C_nil;
    if (exception_pending()) goto v0154;
    env = stack[-3];
    v0047 = (Lisp_Object)17; /* 1 */
    v0047 = (Lisp_Object)greaterp2(v0097, v0047);
    nil = C_nil;
    if (exception_pending()) goto v0154;
    v0047 = v0047 ? lisp_true : nil;
    env = stack[-3];
    goto v0143;
/* error exit handlers */
v0154:
    popv(4);
    return nil;
}



/* Code for xpartitk */

static Lisp_Object CC_xpartitk(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0058, v0152, v0151;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for xpartitk");
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
    v0152 = stack[0];
    v0058 = elt(env, 1); /* (wedge partdf) */
    fn = elt(env, 2); /* memqcar */
    v0058 = (*qfn2(fn))(qenv(fn), v0152, v0058);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-1];
    if (v0058 == nil) goto v0110;
    v0058 = stack[0];
    fn = elt(env, 3); /* reval */
    v0058 = (*qfn1(fn))(qenv(fn), v0058);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    env = stack[-1];
    v0151 = v0058;
    v0152 = v0151;
    v0058 = stack[0];
    if (equal(v0152, v0058)) goto v0141;
    v0058 = v0151;
    {
        popv(2);
        fn = elt(env, 4); /* xpartitop */
        return (*qfn1(fn))(qenv(fn), v0058);
    }

v0141:
    v0151 = stack[0];
    v0152 = (Lisp_Object)17; /* 1 */
    v0058 = (Lisp_Object)17; /* 1 */
    v0058 = list2star(v0151, v0152, v0058);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    popv(2);
    return ncons(v0058);

v0110:
    v0151 = stack[0];
    v0152 = (Lisp_Object)17; /* 1 */
    v0058 = (Lisp_Object)17; /* 1 */
    v0058 = list2star(v0151, v0152, v0058);
    nil = C_nil;
    if (exception_pending()) goto v0186;
    popv(2);
    return ncons(v0058);
/* error exit handlers */
v0186:
    popv(2);
    return nil;
}



/* Code for lndepends */

static Lisp_Object CC_lndepends(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0159, v0158;
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
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    stack[-1] = v0000;
/* end of prologue */

v0203:
    v0159 = stack[-1];
    if (v0159 == nil) goto v0013;
    v0159 = stack[-1];
    v0158 = qcar(v0159);
    v0159 = stack[0];
    fn = elt(env, 2); /* ndepends */
    v0159 = (*qfn2(fn))(qenv(fn), v0158, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0107;
    env = stack[-2];
    if (!(v0159 == nil)) { popv(3); return onevalue(v0159); }
    v0159 = stack[-1];
    v0158 = qcdr(v0159);
    v0159 = stack[0];
    stack[-1] = v0158;
    stack[0] = v0159;
    goto v0203;

v0013:
    v0159 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0159); }
/* error exit handlers */
v0107:
    popv(3);
    return nil;
}



/* Code for color!-roads */

static Lisp_Object CC_colorKroads(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0130, v0207, v0196;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for color-roads");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-4] = v0001;
    v0196 = v0000;
/* end of prologue */
    v0130 = stack[-4];
    v0130 = qcar(v0130);
    v0207 = qcar(v0130);
    v0130 = v0196;
    v0130 = Lassoc(nil, v0207, v0130);
    v0130 = qcdr(v0130);
    stack[-1] = v0130;
    v0130 = stack[-4];
    v0130 = qcdr(v0130);
    v0130 = qcar(v0130);
    v0207 = qcar(v0130);
    v0130 = v0196;
    v0130 = Lassoc(nil, v0207, v0130);
    v0130 = qcdr(v0130);
    stack[0] = v0130;
    v0130 = stack[-4];
    v0130 = qcdr(v0130);
    v0130 = qcdr(v0130);
    v0130 = qcar(v0130);
    v0130 = qcar(v0130);
    v0207 = v0196;
    v0130 = Lassoc(nil, v0130, v0207);
    v0130 = qcdr(v0130);
    stack[-5] = v0130;
    stack[-2] = stack[-1];
    v0207 = stack[0];
    v0130 = stack[-5];
    v0130 = plus2(v0207, v0130);
    nil = C_nil;
    if (exception_pending()) goto v0208;
    env = stack[-6];
    v0207 = plus2(stack[-2], v0130);
    nil = C_nil;
    if (exception_pending()) goto v0208;
    env = stack[-6];
    v0130 = (Lisp_Object)33; /* 2 */
    v0130 = quot2(v0207, v0130);
    nil = C_nil;
    if (exception_pending()) goto v0208;
    env = stack[-6];
    stack[-2] = v0130;
    v0207 = stack[-2];
    v0130 = stack[-1];
    v0130 = difference2(v0207, v0130);
    nil = C_nil;
    if (exception_pending()) goto v0208;
    env = stack[-6];
    stack[-1] = v0130;
    v0207 = stack[-2];
    v0130 = stack[0];
    v0130 = difference2(v0207, v0130);
    nil = C_nil;
    if (exception_pending()) goto v0208;
    env = stack[-6];
    stack[0] = v0130;
    v0207 = stack[-2];
    v0130 = stack[-5];
    v0130 = difference2(v0207, v0130);
    nil = C_nil;
    if (exception_pending()) goto v0208;
    env = stack[-6];
    stack[-5] = v0130;
    v0130 = stack[-4];
    v0130 = qcar(v0130);
    stack[-3] = qcar(v0130);
    stack[-2] = stack[-1];
    v0130 = stack[-4];
    v0130 = qcdr(v0130);
    v0130 = qcar(v0130);
    stack[-1] = qcar(v0130);
    v0130 = stack[-4];
    v0130 = qcdr(v0130);
    v0130 = qcdr(v0130);
    v0130 = qcar(v0130);
    v0207 = qcar(v0130);
    v0130 = stack[-5];
    v0130 = cons(v0207, v0130);
    nil = C_nil;
    if (exception_pending()) goto v0208;
    env = stack[-6];
    v0130 = ncons(v0130);
    nil = C_nil;
    if (exception_pending()) goto v0208;
    env = stack[-6];
    v0130 = acons(stack[-1], stack[0], v0130);
    nil = C_nil;
    if (exception_pending()) goto v0208;
    {
        Lisp_Object v0209 = stack[-3];
        Lisp_Object v0128 = stack[-2];
        popv(7);
        return acons(v0209, v0128, v0130);
    }
/* error exit handlers */
v0208:
    popv(7);
    return nil;
}



/* Code for gcdf2 */

static Lisp_Object CC_gcdf2(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0226, v0227, v0228;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for gcdf2");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-4] = v0001;
    stack[-5] = v0000;
/* end of prologue */
    stack[-6] = qvalue(elt(env, 1)); /* asymplis!* */
    qvalue(elt(env, 1)) = nil; /* asymplis!* */
    v0226 = qvalue(elt(env, 2)); /* !*anygcd */
    if (v0226 == nil) goto v0040;
    v0226 = stack[-5];
    fn = elt(env, 6); /* num!-exponents */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    if (v0226 == nil) goto v0117;
    v0226 = stack[-4];
    fn = elt(env, 6); /* num!-exponents */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    v0226 = (v0226 == nil ? lisp_true : nil);
    goto v0029;

v0029:
    if (v0226 == nil) goto v0074;
    v0226 = (Lisp_Object)17; /* 1 */
    goto v0043;

v0043:
    qvalue(elt(env, 1)) = stack[-6]; /* asymplis!* */
    { popv(8); return onevalue(v0226); }

v0074:
    v0226 = qvalue(elt(env, 4)); /* !*gcd */
    if (v0226 == nil) goto v0046;
    v0227 = stack[-5];
    v0226 = stack[-4];
    fn = elt(env, 7); /* kernord */
    v0226 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-3] = v0226;
    v0227 = Llength(nil, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    v0226 = (Lisp_Object)17; /* 1 */
    v0226 = (Lisp_Object)greaterp2(v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    v0226 = v0226 ? lisp_true : nil;
    env = stack[-7];
    if (v0226 == nil) goto v0046;
    v0226 = stack[-3];
    fn = elt(env, 8); /* setkorder */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    v0226 = ncons(v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-3] = v0226;
    v0226 = stack[-5];
    fn = elt(env, 9); /* reorder */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-5] = v0226;
    v0226 = stack[-4];
    fn = elt(env, 9); /* reorder */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-4] = v0226;
    goto v0154;

v0154:
    v0226 = stack[-5];
    v0226 = qcar(v0226);
    v0226 = qcar(v0226);
    v0227 = qcar(v0226);
    v0226 = stack[-4];
    v0226 = qcar(v0226);
    v0226 = qcar(v0226);
    v0226 = qcar(v0226);
    if (v0227 == v0226) goto v0139;
    v0226 = stack[-5];
    v0226 = qcar(v0226);
    v0226 = qcar(v0226);
    v0226 = qcar(v0226);
    fn = elt(env, 10); /* noncomp */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    if (v0226 == nil) goto v0055;
    v0226 = stack[-4];
    v0226 = qcar(v0226);
    v0226 = qcar(v0226);
    v0226 = qcar(v0226);
    fn = elt(env, 10); /* noncomp */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    if (v0226 == nil) goto v0055;
    v0228 = stack[-5];
    v0227 = stack[-4];
    v0226 = stack[-4];
    v0226 = qcar(v0226);
    v0226 = qcar(v0226);
    v0226 = qcar(v0226);
    fn = elt(env, 11); /* gcdfnc */
    v0226 = (*qfnn(fn))(qenv(fn), 3, v0228, v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-2] = v0226;
    goto v0060;

v0060:
    v0226 = stack[-3];
    if (v0226 == nil) goto v0230;
    v0226 = stack[-3];
    v0226 = qcar(v0226);
    fn = elt(env, 8); /* setkorder */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    v0226 = stack[-2];
    fn = elt(env, 9); /* reorder */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-2] = v0226;
    goto v0230;

v0230:
    v0226 = stack[-2];
    goto v0043;

v0055:
    v0226 = stack[-5];
    v0226 = qcar(v0226);
    v0226 = qcar(v0226);
    v0227 = qcar(v0226);
    v0226 = stack[-4];
    v0226 = qcar(v0226);
    v0226 = qcar(v0226);
    v0226 = qcar(v0226);
    fn = elt(env, 12); /* ordop */
    v0226 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    if (v0226 == nil) goto v0231;
    v0226 = stack[-5];
    fn = elt(env, 13); /* comfac */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    v0227 = qcdr(v0226);
    v0226 = stack[-4];
    fn = elt(env, 14); /* gcdf1 */
    v0226 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-2] = v0226;
    goto v0060;

v0231:
    v0226 = stack[-4];
    fn = elt(env, 13); /* comfac */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    v0227 = qcdr(v0226);
    v0226 = stack[-5];
    fn = elt(env, 14); /* gcdf1 */
    v0226 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-2] = v0226;
    goto v0060;

v0139:
    v0226 = stack[-5];
    fn = elt(env, 13); /* comfac */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-1] = v0226;
    v0226 = stack[-4];
    fn = elt(env, 13); /* comfac */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[0] = v0226;
    v0226 = stack[-1];
    v0227 = qcdr(v0226);
    v0226 = stack[0];
    v0226 = qcdr(v0226);
    fn = elt(env, 14); /* gcdf1 */
    v0226 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-2] = v0226;
    v0226 = stack[-1];
    fn = elt(env, 15); /* comfac!-to!-poly */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    fn = elt(env, 16); /* quotf1 */
    v0226 = (*qfn2(fn))(qenv(fn), stack[-5], v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-5] = v0226;
    v0226 = stack[0];
    fn = elt(env, 15); /* comfac!-to!-poly */
    v0226 = (*qfn1(fn))(qenv(fn), v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    fn = elt(env, 16); /* quotf1 */
    v0226 = (*qfn2(fn))(qenv(fn), stack[-4], v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-4] = v0226;
    v0226 = qvalue(elt(env, 4)); /* !*gcd */
    if (v0226 == nil) goto v0091;
    v0227 = stack[-5];
    v0226 = stack[-4];
    fn = elt(env, 17); /* gcdk */
    v0227 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    v0226 = stack[-2];
    fn = elt(env, 18); /* multf */
    v0226 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-2] = v0226;
    goto v0183;

v0183:
    v0226 = stack[-1];
    v0226 = qcar(v0226);
    if (v0226 == nil) goto v0060;
    v0226 = stack[0];
    v0226 = qcar(v0226);
    if (v0226 == nil) goto v0060;
    v0226 = stack[-1];
    v0226 = qcar(v0226);
    v0227 = qcdr(v0226);
    v0226 = stack[0];
    v0226 = qcar(v0226);
    v0226 = qcdr(v0226);
    v0226 = (Lisp_Object)greaterp2(v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    v0226 = v0226 ? lisp_true : nil;
    env = stack[-7];
    if (v0226 == nil) goto v0232;
    v0226 = stack[0];
    v0227 = qcar(v0226);
    v0226 = (Lisp_Object)17; /* 1 */
    v0226 = cons(v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    v0227 = ncons(v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    v0226 = stack[-2];
    fn = elt(env, 18); /* multf */
    v0226 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-2] = v0226;
    goto v0060;

v0232:
    v0226 = stack[-1];
    v0227 = qcar(v0226);
    v0226 = (Lisp_Object)17; /* 1 */
    v0226 = cons(v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    v0227 = ncons(v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    v0226 = stack[-2];
    fn = elt(env, 18); /* multf */
    v0226 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-2] = v0226;
    goto v0060;

v0091:
    v0226 = stack[-4];
    if (v0226 == nil) goto v0128;
    v0227 = stack[-5];
    v0226 = stack[-4];
    fn = elt(env, 16); /* quotf1 */
    v0226 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    if (v0226 == nil) goto v0128;
    v0227 = stack[-4];
    v0226 = stack[-2];
    fn = elt(env, 18); /* multf */
    v0226 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-2] = v0226;
    goto v0183;

v0128:
    v0226 = stack[-5];
    if (v0226 == nil) goto v0183;
    v0227 = stack[-4];
    v0226 = stack[-5];
    fn = elt(env, 16); /* quotf1 */
    v0226 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    if (v0226 == nil) goto v0183;
    v0227 = stack[-5];
    v0226 = stack[-2];
    fn = elt(env, 18); /* multf */
    v0226 = (*qfn2(fn))(qenv(fn), v0227, v0226);
    nil = C_nil;
    if (exception_pending()) goto v0229;
    env = stack[-7];
    stack[-2] = v0226;
    goto v0183;

v0046:
    v0226 = qvalue(elt(env, 5)); /* nil */
    stack[-3] = v0226;
    goto v0154;

v0117:
    v0226 = qvalue(elt(env, 3)); /* t */
    goto v0029;

v0040:
    v0226 = qvalue(elt(env, 3)); /* t */
    goto v0029;
/* error exit handlers */
v0229:
    env = stack[-7];
    qvalue(elt(env, 1)) = stack[-6]; /* asymplis!* */
    popv(8);
    return nil;
}



/* Code for red_redpol */

static Lisp_Object CC_red_redpol(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0159, v0158;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for red_redpol");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push(nil);
/* copy arguments values to proper place */
    v0159 = v0001;
    stack[0] = v0000;
/* end of prologue */
    fn = elt(env, 2); /* red_prepare */
    v0159 = (*qfn1(fn))(qenv(fn), v0159);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-1];
    v0158 = qvalue(elt(env, 1)); /* !*red_total */
    if (v0158 == nil) goto v0075;
    v0158 = stack[0];
    fn = elt(env, 3); /* red_totalred */
    v0159 = (*qfn2(fn))(qenv(fn), v0158, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-1];
    goto v0032;

v0032:
    {
        popv(2);
        fn = elt(env, 4); /* red_extract */
        return (*qfn1(fn))(qenv(fn), v0159);
    }

v0075:
    v0158 = stack[0];
    fn = elt(env, 5); /* red_topred */
    v0159 = (*qfn2(fn))(qenv(fn), v0158, v0159);
    nil = C_nil;
    if (exception_pending()) goto v0115;
    env = stack[-1];
    goto v0032;
/* error exit handlers */
v0115:
    popv(2);
    return nil;
}



/* Code for baglistp */

static Lisp_Object CC_baglistp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0153, v0115, v0107;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for baglistp");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0107 = v0000;
/* end of prologue */
    v0153 = v0107;
    if (!consp(v0153)) goto v0142;
    v0153 = v0107;
    v0115 = qcar(v0153);
    v0153 = elt(env, 1); /* list */
    if (v0115 == v0153) goto v0074;
    v0153 = v0107;
    v0153 = qcar(v0153);
    v0115 = elt(env, 3); /* bag */
        return Lflagp(nil, v0153, v0115);

v0074:
    v0153 = qvalue(elt(env, 2)); /* t */
    return onevalue(v0153);

v0142:
    v0153 = qvalue(elt(env, 4)); /* nil */
    return onevalue(v0153);
}



/* Code for xquotient!-mod!-p */

static Lisp_Object MS_CDECL CC_xquotientKmodKp(Lisp_Object env, int nargs,
                         Lisp_Object v0000, Lisp_Object v0001,
                         Lisp_Object v0002, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0237, v0238, v0019;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "xquotient-mod-p");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for xquotient-mod-p");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0002,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0001,v0002);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0002;
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */
    v0237 = stack[-2];
    if (v0237 == nil) goto v0025;
    v0237 = stack[-2];
    if (!consp(v0237)) goto v0177;
    v0237 = stack[-2];
    v0237 = qcar(v0237);
    v0237 = (consp(v0237) ? nil : lisp_true);
    goto v0048;

v0048:
    if (v0237 == nil) goto v0153;
    v0237 = qvalue(elt(env, 2)); /* t */
    goto v0029;

v0029:
    if (v0237 == nil) goto v0047;
    v0237 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 3)) = v0237; /* exact!-quotient!-flag */
    { popv(5); return onevalue(v0237); }

v0047:
    v0237 = stack[-2];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0238 = qcdr(v0237);
    v0237 = stack[-1];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0237 = qcdr(v0237);
    if (equal(v0238, v0237)) goto v0187;
    v0237 = stack[-2];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0019 = qcar(v0237);
    v0237 = stack[-2];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0238 = qcdr(v0237);
    v0237 = stack[-1];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0237 = qcdr(v0237);
    v0237 = (Lisp_Object)(int32_t)((int32_t)v0238 - (int32_t)v0237 + TAG_FIXNUM);
    fn = elt(env, 4); /* mksp */
    stack[-3] = (*qfn2(fn))(qenv(fn), v0019, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    v0237 = stack[-2];
    v0237 = qcar(v0237);
    v0238 = qcdr(v0237);
    v0237 = stack[-1];
    v0237 = qcar(v0237);
    v0237 = qcdr(v0237);
    fn = elt(env, 5); /* quotient!-mod!-p */
    v0237 = (*qfn2(fn))(qenv(fn), v0238, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    v0237 = cons(stack[-3], v0237);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    stack[-3] = v0237;
    v0237 = stack[-2];
    stack[-2] = qcdr(v0237);
    v0237 = stack[-3];
    fn = elt(env, 6); /* negate!-term */
    v0238 = (*qfn1(fn))(qenv(fn), v0237);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    v0237 = stack[-1];
    v0237 = qcdr(v0237);
    fn = elt(env, 7); /* times!-term!-mod!-p */
    v0237 = (*qfn2(fn))(qenv(fn), v0238, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    fn = elt(env, 8); /* plus!-mod!-p */
    v0237 = (*qfn2(fn))(qenv(fn), stack[-2], v0237);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    stack[-2] = v0237;
    v0019 = stack[-2];
    v0238 = stack[-1];
    v0237 = stack[0];
    v0237 = CC_xquotientKmodKp(env, 3, v0019, v0238, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    {
        Lisp_Object v0119 = stack[-3];
        popv(5);
        return cons(v0119, v0237);
    }

v0187:
    v0237 = stack[-2];
    v0237 = qcar(v0237);
    v0238 = qcdr(v0237);
    v0237 = stack[-1];
    v0237 = qcar(v0237);
    v0237 = qcdr(v0237);
    fn = elt(env, 5); /* quotient!-mod!-p */
    v0237 = (*qfn2(fn))(qenv(fn), v0238, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    stack[0] = v0237;
    v0237 = stack[0];
    if (v0237 == nil) goto v0180;
    v0238 = stack[0];
    v0237 = stack[-1];
    fn = elt(env, 9); /* times!-mod!-p */
    v0237 = (*qfn2(fn))(qenv(fn), v0238, v0237);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    fn = elt(env, 10); /* difference!-mod!-p */
    v0237 = (*qfn2(fn))(qenv(fn), stack[-2], v0237);
    nil = C_nil;
    if (exception_pending()) goto v0016;
    env = stack[-4];
    goto v0063;

v0063:
    if (v0237 == nil) { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }
    v0237 = qvalue(elt(env, 1)); /* nil */
    qvalue(elt(env, 3)) = v0237; /* exact!-quotient!-flag */
    { Lisp_Object res = stack[0]; popv(5); return onevalue(res); }

v0180:
    v0237 = qvalue(elt(env, 2)); /* t */
    goto v0063;

v0153:
    v0237 = stack[-2];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0238 = qcar(v0237);
    v0237 = stack[0];
    if (equal(v0238, v0237)) goto v0012;
    v0237 = qvalue(elt(env, 2)); /* t */
    goto v0029;

v0012:
    v0237 = stack[-2];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0238 = qcdr(v0237);
    v0237 = stack[-1];
    v0237 = qcar(v0237);
    v0237 = qcar(v0237);
    v0237 = qcdr(v0237);
    v0237 = ((intptr_t)v0238 < (intptr_t)v0237) ? lisp_true : nil;
    goto v0029;

v0177:
    v0237 = qvalue(elt(env, 2)); /* t */
    goto v0048;

v0025:
    v0237 = qvalue(elt(env, 1)); /* nil */
    { popv(5); return onevalue(v0237); }
/* error exit handlers */
v0016:
    popv(5);
    return nil;
}



/* Code for change!+sq!+to!+int */

static Lisp_Object CC_changeLsqLtoLint(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0114, v0057, v0056;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for change+sq+to+int");
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
    v0114 = v0000;
/* end of prologue */
    fn = elt(env, 2); /* prepsq */
    v0114 = (*qfn1(fn))(qenv(fn), v0114);
    nil = C_nil;
    if (exception_pending()) goto v0143;
    env = stack[0];
    fn = elt(env, 3); /* simp!* */
    v0114 = (*qfn1(fn))(qenv(fn), v0114);
    nil = C_nil;
    if (exception_pending()) goto v0143;
    env = stack[0];
    v0056 = v0114;
    v0114 = v0056;
    v0057 = qcdr(v0114);
    v0114 = (Lisp_Object)17; /* 1 */
    if (v0057 == v0114) goto v0032;
    v0114 = elt(env, 1); /* "no integer in change!+sq!+to!+int" */
    fn = elt(env, 4); /* rederr */
    v0114 = (*qfn1(fn))(qenv(fn), v0114);
    nil = C_nil;
    if (exception_pending()) goto v0143;
    v0114 = nil;
    { popv(1); return onevalue(v0114); }

v0032:
    v0114 = v0056;
    v0114 = qcar(v0114);
    { popv(1); return onevalue(v0114); }
/* error exit handlers */
v0143:
    popv(1);
    return nil;
}



/* Code for fctrf */

static Lisp_Object CC_fctrf(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0061, v0242, v0243;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for fctrf");
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
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-5] = v0000;
/* end of prologue */
    v0242 = qvalue(elt(env, 1)); /* !*exp */
    v0061 = qvalue(elt(env, 2)); /* ncmp!* */
    stack[-6] = qvalue(elt(env, 1)); /* !*exp */
    qvalue(elt(env, 1)) = v0242; /* !*exp */
    stack[-4] = qvalue(elt(env, 2)); /* ncmp!* */
    qvalue(elt(env, 2)) = v0061; /* ncmp!* */
    stack[-3] = qvalue(elt(env, 3)); /* !*ezgcd */
    qvalue(elt(env, 3)) = nil; /* !*ezgcd */
    stack[-2] = qvalue(elt(env, 4)); /* !*gcd */
    qvalue(elt(env, 4)) = nil; /* !*gcd */
    stack[-1] = nil;
    v0061 = stack[-5];
    if (!consp(v0061)) goto v0155;
    v0061 = stack[-5];
    v0061 = qcar(v0061);
    v0061 = (consp(v0061) ? nil : lisp_true);
    goto v0177;

v0177:
    if (v0061 == nil) goto v0051;
    v0061 = stack[-5];
    v0061 = ncons(v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    goto v0024;

v0024:
    qvalue(elt(env, 4)) = stack[-2]; /* !*gcd */
    qvalue(elt(env, 3)) = stack[-3]; /* !*ezgcd */
    qvalue(elt(env, 2)) = stack[-4]; /* ncmp!* */
    qvalue(elt(env, 1)) = stack[-6]; /* !*exp */
    { popv(8); return onevalue(v0061); }

v0051:
    v0061 = qvalue(elt(env, 2)); /* ncmp!* */
    if (v0061 == nil) goto v0040;
    v0061 = stack[-5];
    fn = elt(env, 16); /* noncomfp */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    if (!(v0061 == nil)) goto v0040;
    v0061 = qvalue(elt(env, 6)); /* nil */
    qvalue(elt(env, 2)) = v0061; /* ncmp!* */
    goto v0040;

v0040:
    v0061 = qvalue(elt(env, 5)); /* t */
    qvalue(elt(env, 4)) = v0061; /* !*gcd */
    v0061 = qvalue(elt(env, 7)); /* !*limitedfactors */
    if (v0061 == nil) goto v0072;
    v0061 = qvalue(elt(env, 6)); /* nil */
    goto v0071;

v0071:
    if (v0061 == nil) goto v0101;
    v0061 = qvalue(elt(env, 5)); /* t */
    qvalue(elt(env, 3)) = v0061; /* !*ezgcd */
    goto v0101;

v0101:
    v0061 = qvalue(elt(env, 9)); /* !*mcd */
    if (v0061 == nil) goto v0151;
    v0061 = qvalue(elt(env, 1)); /* !*exp */
    if (!(v0061 == nil)) goto v0165;
    v0061 = qvalue(elt(env, 5)); /* t */
    qvalue(elt(env, 1)) = v0061; /* !*exp */
    v0242 = stack[-5];
    v0061 = (Lisp_Object)17; /* 1 */
    v0061 = cons(v0242, v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    fn = elt(env, 17); /* resimp */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    fn = elt(env, 18); /* !*q2f */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    stack[-5] = v0061;
    goto v0165;

v0165:
    v0242 = qvalue(elt(env, 8)); /* dmode!* */
    v0061 = elt(env, 12); /* !:rn!: */
    if (!(v0242 == v0061)) goto v0135;
    v0061 = qvalue(elt(env, 6)); /* nil */
    qvalue(elt(env, 8)) = v0061; /* dmode!* */
    v0061 = qvalue(elt(env, 6)); /* nil */
    v0061 = ncons(v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    qvalue(elt(env, 13)) = v0061; /* alglist!* */
    v0061 = stack[-5];
    fn = elt(env, 19); /* prepf */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    fn = elt(env, 20); /* simp */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    stack[0] = v0061;
    v0061 = stack[0];
    v0061 = qcdr(v0061);
    if (!consp(v0061)) goto v0201;
    v0061 = (Lisp_Object)17; /* 1 */
    stack[-1] = v0061;
    goto v0135;

v0135:
    v0061 = qvalue(elt(env, 2)); /* ncmp!* */
    if (!(v0061 == nil)) goto v0088;
    v0061 = stack[-5];
    fn = elt(env, 21); /* sf2ss */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    stack[0] = v0061;
    v0061 = stack[0];
    fn = elt(env, 22); /* homogp */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    if (v0061 == nil) goto v0088;
    v0061 = qvalue(elt(env, 14)); /* !*trfac */
    if (v0061 == nil) goto v0084;
    v0061 = elt(env, 15); /* "This polynomial is homogeneous - variables scaled" 
*/
    fn = elt(env, 23); /* prin2t */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    goto v0084;

v0084:
    v0061 = stack[0];
    v0061 = qcar(v0061);
    v0061 = qcar(v0061);
    stack[-1] = qcar(v0061);
    v0061 = stack[0];
    v0061 = qcdr(v0061);
    v0061 = qcar(v0061);
    v0061 = qcar(v0061);
    v0061 = qcar(v0061);
    fn = elt(env, 24); /* listsum */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    v0061 = cons(stack[-1], v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    stack[-5] = v0061;
    v0061 = stack[0];
    stack[-1] = qcar(v0061);
    v0061 = stack[0];
    v0061 = qcdr(v0061);
    v0061 = qcar(v0061);
    fn = elt(env, 25); /* subs0 */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    v0242 = Lreverse(nil, v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    v0061 = (Lisp_Object)17; /* 1 */
    v0061 = list2star(stack[-1], v0242, v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    fn = elt(env, 26); /* ss2sf */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    fn = elt(env, 27); /* fctrf1 */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    stack[0] = v0061;
    v0242 = stack[-5];
    v0061 = stack[0];
    fn = elt(env, 28); /* rconst */
    v0061 = (*qfn2(fn))(qenv(fn), v0242, v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    stack[0] = v0061;
    v0061 = stack[0];
    stack[-1] = qcar(v0061);
    v0061 = stack[0];
    v0061 = qcdr(v0061);
    fn = elt(env, 29); /* sort!-factors */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    v0061 = cons(stack[-1], v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    goto v0024;

v0088:
    v0061 = stack[-5];
    fn = elt(env, 27); /* fctrf1 */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    stack[-5] = v0061;
    v0061 = stack[-1];
    if (v0061 == nil) goto v0145;
    v0061 = qvalue(elt(env, 6)); /* nil */
    v0061 = ncons(v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    qvalue(elt(env, 13)) = v0061; /* alglist!* */
    v0061 = elt(env, 12); /* !:rn!: */
    qvalue(elt(env, 8)) = v0061; /* dmode!* */
    stack[0] = stack[-5];
    v0061 = stack[-5];
    v0242 = qcar(v0061);
    v0061 = stack[-1];
    fn = elt(env, 30); /* quotf!* */
    v0061 = (*qfn2(fn))(qenv(fn), v0242, v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    fn = elt(env, 31); /* setcar */
    v0061 = (*qfn2(fn))(qenv(fn), stack[0], v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    goto v0145;

v0145:
    v0061 = stack[-5];
    stack[0] = qcar(v0061);
    v0061 = stack[-5];
    v0061 = qcdr(v0061);
    fn = elt(env, 29); /* sort!-factors */
    v0061 = (*qfn1(fn))(qenv(fn), v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    v0061 = cons(stack[0], v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    goto v0024;

v0201:
    v0061 = stack[0];
    v0061 = qcdr(v0061);
    stack[-1] = v0061;
    v0061 = stack[0];
    v0061 = qcar(v0061);
    stack[-5] = v0061;
    goto v0135;

v0151:
    v0243 = elt(env, 10); /* poly */
    v0242 = (Lisp_Object)241; /* 15 */
    v0061 = elt(env, 11); /* "Factorization invalid with MCD off" */
    fn = elt(env, 32); /* rerror */
    v0061 = (*qfnn(fn))(qenv(fn), 3, v0243, v0242, v0061);
    nil = C_nil;
    if (exception_pending()) goto v0232;
    env = stack[-7];
    goto v0165;

v0072:
    v0061 = qvalue(elt(env, 8)); /* dmode!* */
    v0061 = (v0061 == nil ? lisp_true : nil);
    goto v0071;

v0155:
    v0061 = qvalue(elt(env, 5)); /* t */
    goto v0177;
/* error exit handlers */
v0232:
    env = stack[-7];
    qvalue(elt(env, 4)) = stack[-2]; /* !*gcd */
    qvalue(elt(env, 3)) = stack[-3]; /* !*ezgcd */
    qvalue(elt(env, 2)) = stack[-4]; /* ncmp!* */
    qvalue(elt(env, 1)) = stack[-6]; /* !*exp */
    popv(8);
    return nil;
}



/* Code for ps!:set!-term */

static Lisp_Object MS_CDECL CC_psTsetKterm(Lisp_Object env, int nargs,
                         Lisp_Object v0000, Lisp_Object v0001,
                         Lisp_Object v0002, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0249, v0250, v0251;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "ps:set-term");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for ps:set-term");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0002,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0001,v0002);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push5(nil, nil, nil, nil, nil);
    push(nil);
/* copy arguments values to proper place */
    stack[-2] = v0002;
    stack[-3] = v0001;
    stack[-4] = v0000;
/* end of prologue */
    v0249 = stack[-4];
    fn = elt(env, 7); /* ps!:order */
    v0249 = (*qfn1(fn))(qenv(fn), v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    stack[-5] = v0249;
    v0250 = stack[-3];
    v0249 = stack[-5];
    v0249 = (Lisp_Object)lessp2(v0250, v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    v0249 = v0249 ? lisp_true : nil;
    env = stack[-6];
    if (v0249 == nil) goto v0073;
    stack[-1] = elt(env, 1); /* tps */
    stack[0] = (Lisp_Object)49; /* 3 */
    v0251 = stack[-3];
    v0250 = elt(env, 2); /* "less than the order of " */
    v0249 = stack[-4];
    v0249 = list3(v0251, v0250, v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    fn = elt(env, 8); /* rerror */
    v0249 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[0], v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    goto v0021;

v0021:
    v0249 = stack[-4];
    if (!consp(v0249)) goto v0187;
    v0249 = stack[-4];
    v0250 = qcar(v0249);
    v0249 = elt(env, 5); /* !:ps!: */
    if (v0250 == v0249) goto v0204;
    v0249 = stack[-4];
    v0249 = qcar(v0249);
    if (!symbolp(v0249)) v0249 = nil;
    else { v0249 = qfastgets(v0249);
           if (v0249 != nil) { v0249 = elt(v0249, 8); /* dname */
#ifdef RECORD_GET
             if (v0249 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v0249 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v0249 == SPID_NOPROP) v0249 = nil; }}
#endif
    goto v0162;

v0162:
    if (v0249 == nil) goto v0183;
    v0251 = (Lisp_Object)1; /* 0 */
    v0250 = stack[-4];
    v0249 = (Lisp_Object)17; /* 1 */
    v0249 = list2star(v0251, v0250, v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    v0249 = ncons(v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    goto v0161;

v0161:
    stack[0] = v0249;
    v0249 = stack[-2];
    if (!consp(v0249)) goto v0188;
    v0249 = stack[-2];
    v0250 = qcar(v0249);
    v0249 = qvalue(elt(env, 6)); /* nil */
    v0249 = Lneq(nil, v0250, v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    goto v0184;

v0184:
    if (v0249 == nil) goto v0019;
    v0249 = stack[0];
    if (v0249 == nil) goto v0224;
    v0250 = stack[-3];
    v0249 = stack[-5];
    v0250 = difference2(v0250, v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    v0249 = stack[-2];
    v0249 = cons(v0250, v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    v0249 = ncons(v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    v0249 = Lnconc(nil, stack[0], v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    goto v0243;

v0243:
    v0251 = stack[-4];
    v0250 = (Lisp_Object)17; /* 1 */
    v0249 = stack[-3];
    fn = elt(env, 9); /* ps!:putv */
    v0249 = (*qfnn(fn))(qenv(fn), 3, v0251, v0250, v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    v0249 = nil;
    { popv(7); return onevalue(v0249); }

v0224:
    stack[-1] = stack[-4];
    stack[0] = (Lisp_Object)81; /* 5 */
    v0250 = stack[-3];
    v0249 = stack[-5];
    v0250 = difference2(v0250, v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    v0249 = stack[-2];
    v0249 = cons(v0250, v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    v0249 = ncons(v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    fn = elt(env, 9); /* ps!:putv */
    v0249 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[0], v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    goto v0243;

v0019:
    v0250 = stack[-3];
    v0249 = stack[-5];
    if (!(equal(v0250, v0249))) goto v0243;
    stack[-1] = stack[-4];
    stack[0] = (Lisp_Object)1; /* 0 */
    v0249 = stack[-3];
    v0249 = add1(v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    fn = elt(env, 9); /* ps!:putv */
    v0249 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[0], v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    goto v0243;

v0188:
    v0249 = qvalue(elt(env, 4)); /* t */
    goto v0184;

v0183:
    v0250 = stack[-4];
    v0249 = (Lisp_Object)81; /* 5 */
    fn = elt(env, 10); /* ps!:getv */
    v0249 = (*qfn2(fn))(qenv(fn), v0250, v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    goto v0161;

v0204:
    v0249 = qvalue(elt(env, 6)); /* nil */
    goto v0162;

v0187:
    v0249 = qvalue(elt(env, 4)); /* t */
    goto v0162;

v0073:
    stack[0] = stack[-3];
    v0249 = stack[-4];
    fn = elt(env, 11); /* ps!:last!-term */
    v0249 = (*qfn1(fn))(qenv(fn), v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    v0249 = (Lisp_Object)lesseq2(stack[0], v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    v0249 = v0249 ? lisp_true : nil;
    env = stack[-6];
    if (v0249 == nil) goto v0021;
    stack[-1] = elt(env, 1); /* tps */
    stack[0] = (Lisp_Object)65; /* 4 */
    v0251 = stack[-3];
    v0250 = elt(env, 3); /* "less than power of last term of " */
    v0249 = stack[-4];
    v0249 = list3(v0251, v0250, v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    fn = elt(env, 8); /* rerror */
    v0249 = (*qfnn(fn))(qenv(fn), 3, stack[-1], stack[0], v0249);
    nil = C_nil;
    if (exception_pending()) goto v0252;
    env = stack[-6];
    goto v0021;
/* error exit handlers */
v0252:
    popv(7);
    return nil;
}



/* Code for crnprimp */

static Lisp_Object CC_crnprimp(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0107, v0049;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for crnprimp");
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
    v0107 = stack[0];
    fn = elt(env, 4); /* rnonep!: */
    v0107 = (*qfn1(fn))(qenv(fn), v0107);
    nil = C_nil;
    if (exception_pending()) goto v0101;
    env = stack[-2];
    if (v0107 == nil) goto v0013;
    v0107 = elt(env, 1); /* i */
    { popv(3); return onevalue(v0107); }

v0013:
    v0107 = stack[0];
    fn = elt(env, 5); /* rnminus!: */
    v0107 = (*qfn1(fn))(qenv(fn), v0107);
    nil = C_nil;
    if (exception_pending()) goto v0101;
    env = stack[-2];
    fn = elt(env, 4); /* rnonep!: */
    v0107 = (*qfn1(fn))(qenv(fn), v0107);
    nil = C_nil;
    if (exception_pending()) goto v0101;
    env = stack[-2];
    if (v0107 == nil) goto v0075;
    v0107 = elt(env, 2); /* minus */
    v0049 = elt(env, 1); /* i */
    popv(3);
    return list2(v0107, v0049);

v0075:
    stack[-1] = elt(env, 3); /* times */
    v0107 = stack[0];
    fn = elt(env, 6); /* rnprep!: */
    v0107 = (*qfn1(fn))(qenv(fn), v0107);
    nil = C_nil;
    if (exception_pending()) goto v0101;
    env = stack[-2];
    v0049 = elt(env, 1); /* i */
    {
        Lisp_Object v0050 = stack[-1];
        popv(3);
        return list3(v0050, v0107, v0049);
    }
/* error exit handlers */
v0101:
    popv(3);
    return nil;
}



/* Code for simpdf */

static Lisp_Object CC_simpdf(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0260, v0261;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for simpdf");
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
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[-5] = v0000;
/* end of prologue */
    stack[-3] = nil;
    v0260 = qvalue(elt(env, 1)); /* subfg!* */
    if (v0260 == nil) goto v0116;
    v0260 = stack[-5];
    v0260 = qcdr(v0260);
    stack[-6] = v0260;
    v0260 = stack[-5];
    v0260 = qcar(v0260);
    fn = elt(env, 10); /* simp!* */
    v0260 = (*qfn1(fn))(qenv(fn), v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    stack[-5] = v0260;
    goto v0035;

v0035:
    v0260 = stack[-6];
    if (v0260 == nil) goto v0101;
    v0260 = stack[-5];
    v0260 = qcar(v0260);
    v0260 = (v0260 == nil ? lisp_true : nil);
    goto v0176;

v0176:
    if (!(v0260 == nil)) { Lisp_Object res = stack[-5]; popv(8); return onevalue(res); }
    v0260 = stack[-3];
    if (v0260 == nil) goto v0140;
    v0261 = stack[-3];
    v0260 = (Lisp_Object)1; /* 0 */
    v0260 = (v0261 == v0260 ? lisp_true : nil);
    goto v0100;

v0100:
    if (v0260 == nil) goto v0045;
    v0260 = stack[-6];
    v0260 = qcar(v0260);
    fn = elt(env, 10); /* simp!* */
    v0260 = (*qfn1(fn))(qenv(fn), v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    goto v0190;

v0190:
    stack[-4] = v0260;
    v0260 = stack[-4];
    v0261 = qcdr(v0260);
    v0260 = (Lisp_Object)17; /* 1 */
    if (v0261 == v0260) goto v0094;
    v0260 = qvalue(elt(env, 3)); /* t */
    goto v0187;

v0187:
    if (v0260 == nil) goto v0086;
    v0260 = stack[-4];
    fn = elt(env, 11); /* prepsq */
    v0261 = (*qfn1(fn))(qenv(fn), v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    v0260 = elt(env, 4); /* "kernel or integer" */
    fn = elt(env, 12); /* typerr */
    v0260 = (*qfn2(fn))(qenv(fn), v0261, v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    goto v0164;

v0164:
    v0260 = stack[-6];
    v0260 = qcdr(v0260);
    stack[-6] = v0260;
    v0260 = stack[-6];
    if (v0260 == nil) goto v0232;
    v0260 = stack[-6];
    v0260 = qcar(v0260);
    fn = elt(env, 10); /* simp!* */
    v0260 = (*qfn1(fn))(qenv(fn), v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    stack[-3] = v0260;
    v0260 = stack[-3];
    v0260 = qcar(v0260);
    if (v0260 == nil) goto v0263;
    v0260 = stack[-3];
    fn = elt(env, 13); /* d2int */
    v0260 = (*qfn1(fn))(qenv(fn), v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    stack[0] = v0260;
    if (v0260 == nil) goto v0007;
    v0260 = stack[-6];
    v0260 = qcdr(v0260);
    stack[-6] = v0260;
    v0260 = (Lisp_Object)17; /* 1 */
    stack[-1] = v0260;
    goto v0264;

v0264:
    v0261 = stack[0];
    v0260 = stack[-1];
    v0260 = difference2(v0261, v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    v0260 = Lminusp(nil, v0260);
    env = stack[-7];
    if (v0260 == nil) goto v0265;
    v0260 = qvalue(elt(env, 8)); /* nil */
    stack[-3] = v0260;
    goto v0035;

v0265:
    v0261 = stack[-5];
    v0260 = stack[-4];
    fn = elt(env, 14); /* diffsq */
    v0260 = (*qfn2(fn))(qenv(fn), v0261, v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    stack[-5] = v0260;
    v0260 = stack[-1];
    v0260 = add1(v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    stack[-1] = v0260;
    goto v0264;

v0007:
    v0261 = stack[-5];
    v0260 = stack[-4];
    fn = elt(env, 14); /* diffsq */
    v0260 = (*qfn2(fn))(qenv(fn), v0261, v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    stack[-5] = v0260;
    goto v0035;

v0263:
    v0260 = stack[-6];
    v0260 = qcdr(v0260);
    stack[-6] = v0260;
    v0260 = qvalue(elt(env, 8)); /* nil */
    stack[-3] = v0260;
    goto v0035;

v0232:
    v0261 = stack[-5];
    v0260 = stack[-4];
    fn = elt(env, 14); /* diffsq */
    v0260 = (*qfn2(fn))(qenv(fn), v0261, v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    stack[-5] = v0260;
    goto v0035;

v0086:
    v0260 = stack[-4];
    v0260 = qcar(v0260);
    stack[-2] = v0260;
    v0260 = stack[-2];
    if (!consp(v0260)) goto v0236;
    v0260 = stack[-2];
    v0260 = qcar(v0260);
    v0260 = (consp(v0260) ? nil : lisp_true);
    goto v0191;

v0191:
    if (v0260 == nil) goto v0088;
    v0260 = stack[-2];
    v0261 = qcar(v0260);
    v0260 = elt(env, 5); /* domain!-diff!-fn */
    v0260 = get(v0261, v0260);
    env = stack[-7];
    if (v0260 == nil) goto v0123;
    stack[-1] = qvalue(elt(env, 6)); /* dmode!* */
    qvalue(elt(env, 6)) = nil; /* dmode!* */
    stack[0] = qvalue(elt(env, 7)); /* alglist!* */
    qvalue(elt(env, 7)) = nil; /* alglist!* */
    v0260 = qvalue(elt(env, 8)); /* nil */
    v0260 = ncons(v0260);
    nil = C_nil;
    if (exception_pending()) goto v0210;
    env = stack[-7];
    qvalue(elt(env, 7)) = v0260; /* alglist!* */
    v0260 = stack[-2];
    fn = elt(env, 15); /* prepf */
    v0260 = (*qfn1(fn))(qenv(fn), v0260);
    nil = C_nil;
    if (exception_pending()) goto v0210;
    env = stack[-7];
    stack[-4] = v0260;
    v0260 = stack[-4];
    fn = elt(env, 16); /* prekernp */
    v0260 = (*qfn1(fn))(qenv(fn), v0260);
    nil = C_nil;
    if (exception_pending()) goto v0210;
    env = stack[-7];
    if (!(v0260 == nil)) goto v0034;
    v0261 = stack[-4];
    v0260 = elt(env, 9); /* "kernel" */
    fn = elt(env, 12); /* typerr */
    v0260 = (*qfn2(fn))(qenv(fn), v0261, v0260);
    nil = C_nil;
    if (exception_pending()) goto v0210;
    env = stack[-7];
    goto v0034;

v0034:
    qvalue(elt(env, 7)) = stack[0]; /* alglist!* */
    qvalue(elt(env, 6)) = stack[-1]; /* dmode!* */
    goto v0164;

v0123:
    v0260 = stack[-2];
    fn = elt(env, 15); /* prepf */
    v0261 = (*qfn1(fn))(qenv(fn), v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    v0260 = elt(env, 9); /* "kernel" */
    fn = elt(env, 12); /* typerr */
    v0260 = (*qfn2(fn))(qenv(fn), v0261, v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    goto v0164;

v0088:
    v0260 = stack[-2];
    v0260 = qcdr(v0260);
    if (v0260 == nil) goto v0235;
    v0260 = qvalue(elt(env, 8)); /* nil */
    goto v0103;

v0103:
    if (v0260 == nil) goto v0266;
    v0260 = stack[-2];
    v0260 = qcar(v0260);
    v0260 = qcar(v0260);
    v0260 = qcar(v0260);
    stack[-4] = v0260;
    goto v0164;

v0266:
    v0260 = stack[-2];
    fn = elt(env, 15); /* prepf */
    v0261 = (*qfn1(fn))(qenv(fn), v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    v0260 = elt(env, 9); /* "kernel" */
    fn = elt(env, 12); /* typerr */
    v0260 = (*qfn2(fn))(qenv(fn), v0261, v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    goto v0164;

v0235:
    v0260 = stack[-2];
    v0260 = qcar(v0260);
    v0261 = qcdr(v0260);
    v0260 = (Lisp_Object)17; /* 1 */
    if (v0261 == v0260) goto v0202;
    v0260 = qvalue(elt(env, 8)); /* nil */
    goto v0103;

v0202:
    v0260 = stack[-2];
    v0260 = qcar(v0260);
    v0260 = qcar(v0260);
    v0261 = qcdr(v0260);
    v0260 = (Lisp_Object)17; /* 1 */
    v0260 = (v0261 == v0260 ? lisp_true : nil);
    goto v0103;

v0236:
    v0260 = qvalue(elt(env, 3)); /* t */
    goto v0191;

v0094:
    v0260 = stack[-4];
    v0260 = qcar(v0260);
    v0260 = (consp(v0260) ? nil : lisp_true);
    goto v0187;

v0045:
    v0260 = stack[-3];
    goto v0190;

v0140:
    v0260 = qvalue(elt(env, 3)); /* t */
    goto v0100;

v0101:
    v0260 = qvalue(elt(env, 3)); /* t */
    goto v0176;

v0116:
    v0261 = elt(env, 2); /* df */
    v0260 = stack[-5];
    v0261 = cons(v0261, v0260);
    nil = C_nil;
    if (exception_pending()) goto v0262;
    env = stack[-7];
    v0260 = (Lisp_Object)17; /* 1 */
    {
        popv(8);
        fn = elt(env, 17); /* mksq */
        return (*qfn2(fn))(qenv(fn), v0261, v0260);
    }
/* error exit handlers */
v0210:
    env = stack[-7];
    qvalue(elt(env, 7)) = stack[0]; /* alglist!* */
    qvalue(elt(env, 6)) = stack[-1]; /* dmode!* */
    popv(8);
    return nil;
v0262:
    popv(8);
    return nil;
}



/* Code for copy_vect */

static Lisp_Object CC_copy_vect(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0150, v0175, v0190, v0111;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for copy_vect");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push4(nil, nil, nil, nil);
/* copy arguments values to proper place */
    stack[-1] = v0001;
    stack[-2] = v0000;
/* end of prologue */
    v0150 = stack[-1];
    v0150 = Lupbv(nil, v0150);
    nil = C_nil;
    if (exception_pending()) goto v0099;
    env = stack[-4];
    stack[-3] = v0150;
    v0150 = (Lisp_Object)1; /* 0 */
    stack[0] = v0150;
    goto v0117;

v0117:
    v0175 = stack[-3];
    v0150 = stack[0];
    v0150 = difference2(v0175, v0150);
    nil = C_nil;
    if (exception_pending()) goto v0099;
    env = stack[-4];
    v0150 = Lminusp(nil, v0150);
    env = stack[-4];
    if (v0150 == nil) goto v0141;
    v0150 = nil;
    { popv(5); return onevalue(v0150); }

v0141:
    v0111 = stack[-2];
    v0190 = stack[0];
    v0175 = stack[-1];
    v0150 = stack[0];
    v0150 = *(Lisp_Object *)((char *)v0175 + (CELL-TAG_VECTOR) + ((int32_t)v0150/(16/CELL)));
    *(Lisp_Object *)((char *)v0111 + (CELL-TAG_VECTOR) + ((int32_t)v0190/(16/CELL))) = v0150;
    v0150 = stack[0];
    v0150 = add1(v0150);
    nil = C_nil;
    if (exception_pending()) goto v0099;
    env = stack[-4];
    stack[0] = v0150;
    goto v0117;
/* error exit handlers */
v0099:
    popv(5);
    return nil;
}



/* Code for groebsaveltermbc */

static Lisp_Object CC_groebsaveltermbc(Lisp_Object env,
                         Lisp_Object v0000)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0046, v0047, v0097;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for groebsaveltermbc");
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
    v0046 = stack[0];
    fn = elt(env, 3); /* vbc2a */
    v0046 = (*qfn1(fn))(qenv(fn), v0046);
    nil = C_nil;
    if (exception_pending()) goto v0139;
    env = stack[-2];
    stack[0] = v0046;
    v0046 = stack[0];
    if (is_number(v0046)) goto v0051;
    v0046 = stack[0];
    fn = elt(env, 4); /* constant_exprp */
    v0046 = (*qfn1(fn))(qenv(fn), v0046);
    nil = C_nil;
    if (exception_pending()) goto v0139;
    env = stack[-2];
    v0046 = (v0046 == nil ? lisp_true : nil);
    goto v0074;

v0074:
    if (v0046 == nil) goto v0043;
    v0046 = stack[0];
    fn = elt(env, 5); /* simp */
    v0046 = (*qfn1(fn))(qenv(fn), v0046);
    nil = C_nil;
    if (exception_pending()) goto v0139;
    env = stack[-2];
    v0046 = qcar(v0046);
    fn = elt(env, 6); /* fctrf */
    v0046 = (*qfn1(fn))(qenv(fn), v0046);
    nil = C_nil;
    if (exception_pending()) goto v0139;
    env = stack[-2];
    v0046 = qcdr(v0046);
    stack[-1] = v0046;
    goto v0117;

v0117:
    v0046 = stack[-1];
    if (v0046 == nil) goto v0141;
    v0046 = stack[-1];
    v0046 = qcar(v0046);
    v0097 = v0046;
    v0046 = v0097;
    v0046 = qcar(v0046);
    fn = elt(env, 7); /* prepf */
    v0046 = (*qfn1(fn))(qenv(fn), v0046);
    nil = C_nil;
    if (exception_pending()) goto v0139;
    env = stack[-2];
    v0097 = v0046;
    v0047 = v0097;
    v0046 = qvalue(elt(env, 2)); /* glterms */
    v0046 = Lmember(nil, v0047, v0046);
    if (!(v0046 == nil)) goto v0050;
    stack[0] = qvalue(elt(env, 2)); /* glterms */
    v0046 = v0097;
    v0046 = ncons(v0046);
    nil = C_nil;
    if (exception_pending()) goto v0139;
    env = stack[-2];
    v0046 = Lnconc(nil, stack[0], v0046);
    nil = C_nil;
    if (exception_pending()) goto v0139;
    env = stack[-2];
    goto v0050;

v0050:
    v0046 = stack[-1];
    v0046 = qcdr(v0046);
    stack[-1] = v0046;
    goto v0117;

v0141:
    v0046 = qvalue(elt(env, 1)); /* nil */
    { popv(3); return onevalue(v0046); }

v0043:
    v0046 = nil;
    { popv(3); return onevalue(v0046); }

v0051:
    v0046 = qvalue(elt(env, 1)); /* nil */
    goto v0074;
/* error exit handlers */
v0139:
    popv(3);
    return nil;
}



/* Code for multiply!-by!-power!-of!-ten */

static Lisp_Object CC_multiplyKbyKpowerKofKten(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0135, v0092;
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
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    stack[-1] = v0000;
/* end of prologue */
    v0092 = stack[0];
    v0135 = (Lisp_Object)1; /* 0 */
    v0135 = (Lisp_Object)lessp2(v0092, v0135);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    v0135 = v0135 ? lisp_true : nil;
    env = stack[-3];
    if (v0135 == nil) goto v0048;
    v0135 = elt(env, 0); /* multiply!-by!-power!-of!-ten */
    {
        popv(4);
        fn = elt(env, 4); /* bflerrmsg */
        return (*qfn1(fn))(qenv(fn), v0135);
    }

v0048:
    v0135 = qvalue(elt(env, 1)); /* bften!* */
    stack[-2] = v0135;
    goto v0143;

v0143:
    v0092 = stack[0];
    v0135 = (Lisp_Object)1; /* 0 */
    v0135 = (Lisp_Object)greaterp2(v0092, v0135);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    v0135 = v0135 ? lisp_true : nil;
    env = stack[-3];
    if (v0135 == nil) goto v0096;
    v0135 = stack[0];
    v0135 = Levenp(nil, v0135);
    env = stack[-3];
    if (!(v0135 == nil)) goto v0112;
    v0092 = stack[-1];
    v0135 = stack[-2];
    fn = elt(env, 5); /* times!: */
    v0135 = (*qfn2(fn))(qenv(fn), v0092, v0135);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-3];
    fn = elt(env, 6); /* normbf */
    v0135 = (*qfn1(fn))(qenv(fn), v0135);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-3];
    stack[-1] = v0135;
    goto v0112;

v0112:
    v0092 = stack[0];
    v0135 = (Lisp_Object)-15; /* -1 */
    v0135 = ash(v0092, v0135);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-3];
    stack[0] = v0135;
    v0092 = stack[-2];
    v0135 = stack[-2];
    fn = elt(env, 5); /* times!: */
    v0092 = (*qfn2(fn))(qenv(fn), v0092, v0135);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-3];
    v0135 = qvalue(elt(env, 3)); /* !:bprec!: */
    fn = elt(env, 7); /* cut!:mt */
    v0135 = (*qfn2(fn))(qenv(fn), v0092, v0135);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-3];
    fn = elt(env, 6); /* normbf */
    v0135 = (*qfn1(fn))(qenv(fn), v0135);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-3];
    stack[-2] = v0135;
    goto v0143;

v0096:
    v0092 = stack[-1];
    v0135 = qvalue(elt(env, 3)); /* !:bprec!: */
    fn = elt(env, 7); /* cut!:mt */
    v0135 = (*qfn2(fn))(qenv(fn), v0092, v0135);
    nil = C_nil;
    if (exception_pending()) goto v0169;
    env = stack[-3];
    {
        popv(4);
        fn = elt(env, 6); /* normbf */
        return (*qfn1(fn))(qenv(fn), v0135);
    }
/* error exit handlers */
v0169:
    popv(4);
    return nil;
}



/* Code for diff_vertex */

static Lisp_Object CC_diff_vertex(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0112, v0113, v0100;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for diff_vertex");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    stack[-1] = v0000;
/* end of prologue */
    v0100 = nil;
    goto v0025;

v0025:
    v0112 = stack[-1];
    if (v0112 == nil) goto v0074;
    v0112 = stack[-1];
    v0112 = qcar(v0112);
    v0113 = qcar(v0112);
    v0112 = stack[0];
    v0112 = Lassoc(nil, v0113, v0112);
    if (v0112 == nil) goto v0069;
    v0112 = stack[-1];
    v0112 = qcar(v0112);
    v0113 = qcar(v0112);
    v0112 = qvalue(elt(env, 1)); /* !_0edge */
    v0112 = qcar(v0112);
    if (v0113 == v0112) goto v0069;
    v0112 = stack[-1];
    v0112 = qcdr(v0112);
    stack[-1] = v0112;
    goto v0025;

v0069:
    v0112 = stack[-1];
    v0112 = qcar(v0112);
    v0113 = v0100;
    v0112 = cons(v0112, v0113);
    nil = C_nil;
    if (exception_pending()) goto v0058;
    env = stack[-2];
    v0100 = v0112;
    v0112 = stack[-1];
    v0112 = qcdr(v0112);
    stack[-1] = v0112;
    goto v0025;

v0074:
    v0112 = v0100;
    {
        popv(3);
        fn = elt(env, 2); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0112);
    }
/* error exit handlers */
v0058:
    popv(3);
    return nil;
}



/* Code for dfp!-rule!-found */

static Lisp_Object CC_dfpKruleKfound(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0056, v0143, v0141, v0142;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for dfp-rule-found");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    CSL_IGNORE(env);
/* copy arguments values to proper place */
    v0141 = v0001;
    v0142 = v0000;
/* end of prologue */
    v0143 = v0142;
    v0056 = elt(env, 1); /* dfp */
    if (!consp(v0143)) goto v0013;
    v0143 = qcar(v0143);
    if (!(v0143 == v0056)) goto v0013;
    v0056 = v0142;
    v0056 = qcdr(v0056);
    v0056 = qcar(v0056);
    v0143 = v0141;
        return Lneq(nil, v0056, v0143);

v0013:
    v0056 = qvalue(elt(env, 2)); /* t */
    return onevalue(v0056);
}



/* Code for equiv!-coeffs */

static Lisp_Object CC_equivKcoeffs(Lisp_Object env,
                         Lisp_Object v0000, Lisp_Object v0001)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0167, v0137;
    Lisp_Object fn;
    CSL_IGNORE(nil);
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for equiv-coeffs");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push2(v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop2(v0000,v0001);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push3(nil, nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0001;
    stack[-1] = v0000;
/* end of prologue */
    stack[-2] = nil;
    goto v0025;

v0025:
    v0167 = stack[-1];
    if (v0167 == nil) goto v0029;
    v0167 = stack[0];
    if (v0167 == nil) goto v0117;
    v0167 = stack[-1];
    v0167 = qcar(v0167);
    v0137 = qcar(v0167);
    v0167 = stack[0];
    v0167 = qcar(v0167);
    v0167 = qcar(v0167);
    if (equal(v0137, v0167)) goto v0050;
    v0167 = stack[-1];
    v0167 = qcar(v0167);
    v0137 = qcar(v0167);
    v0167 = stack[0];
    v0167 = qcar(v0167);
    v0167 = qcar(v0167);
    fn = elt(env, 1); /* mv!-pow!-!> */
    v0167 = (*qfn2(fn))(qenv(fn), v0137, v0167);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    if (v0167 == nil) goto v0045;
    v0167 = stack[-1];
    v0167 = qcdr(v0167);
    stack[-1] = v0167;
    goto v0025;

v0045:
    v0137 = (Lisp_Object)1; /* 0 */
    v0167 = stack[-2];
    v0167 = cons(v0137, v0167);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    stack[-2] = v0167;
    v0167 = stack[0];
    v0167 = qcdr(v0167);
    stack[0] = v0167;
    goto v0025;

v0050:
    v0167 = stack[-1];
    v0167 = qcar(v0167);
    v0137 = qcdr(v0167);
    v0167 = stack[-2];
    v0167 = cons(v0137, v0167);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    stack[-2] = v0167;
    v0167 = stack[-1];
    v0167 = qcdr(v0167);
    stack[-1] = v0167;
    v0167 = stack[0];
    v0167 = qcdr(v0167);
    stack[0] = v0167;
    goto v0025;

v0117:
    v0167 = stack[-2];
    {
        popv(4);
        fn = elt(env, 2); /* nreverse */
        return (*qfn1(fn))(qenv(fn), v0167);
    }

v0029:
    stack[-1] = stack[-2];
    v0167 = stack[0];
    v0167 = Llength(nil, v0167);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    fn = elt(env, 3); /* nzeros */
    v0167 = (*qfn1(fn))(qenv(fn), v0167);
    nil = C_nil;
    if (exception_pending()) goto v0093;
    env = stack[-3];
    {
        Lisp_Object v0165 = stack[-1];
        popv(4);
        fn = elt(env, 2); /* nreverse */
        return (*qfn2(fn))(qenv(fn), v0165, v0167);
    }
/* error exit handlers */
v0093:
    popv(4);
    return nil;
}



/* Code for addnew */

static Lisp_Object MS_CDECL CC_addnew(Lisp_Object env, int nargs,
                         Lisp_Object v0000, Lisp_Object v0001,
                         Lisp_Object v0002, ...)
{
    Lisp_Object nil = C_nil;
    Lisp_Object v0110, v0150, v0175, v0190, v0111;
    Lisp_Object fn;
    CSL_IGNORE(nil);
    argcheck(nargs, 3, "addnew");
#ifdef DEBUG_VALIDATE
    if (check_env(env)) return aerror("env for addnew");
#endif
#ifdef CHECK_STACK
    if_check_stack;
#endif
    if (stack >= stacklimit)
    {
        push3(v0002,v0001,v0000);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop3(v0000,v0001,v0002);
        nil = C_nil;
        if (exception_pending()) return nil;
    }
    push(env);
/* space for vars preserved across procedure calls */
    push2(nil, nil);
/* copy arguments values to proper place */
    stack[0] = v0002;
    v0190 = v0001;
    v0111 = v0000;
/* end of prologue */
    v0175 = qvalue(elt(env, 1)); /* gv!* */
    v0150 = v0190;
    v0110 = v0111;
    *(Lisp_Object *)((char *)v0175 + (CELL-TAG_VECTOR) + ((int32_t)v0150/(16/CELL))) = v0110;
    v0175 = qvalue(elt(env, 2)); /* bv!* */
    v0150 = v0190;
    v0110 = qvalue(elt(env, 3)); /* t */
    *(Lisp_Object *)((char *)v0175 + (CELL-TAG_VECTOR) + ((int32_t)v0150/(16/CELL))) = v0110;
    v0110 = v0111;
    if (v0110 == nil) { Lisp_Object res = stack[0]; popv(3); return onevalue(res); }
    stack[-1] = v0190;
    v0110 = v0111;
    fn = elt(env, 4); /* ljet */
    v0110 = (*qfn1(fn))(qenv(fn), v0110);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-2];
    v0150 = cons(stack[-1], v0110);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    env = stack[-2];
    v0110 = stack[0];
    fn = elt(env, 5); /* insert */
    v0110 = (*qfn2(fn))(qenv(fn), v0150, v0110);
    nil = C_nil;
    if (exception_pending()) goto v0100;
    { popv(3); return onevalue(v0110); }
/* error exit handlers */
v0100:
    popv(3);
    return nil;
}



setup_type const u35_setup[] =
{
    {"rewrite",                 wrong_no_na,    wrong_no_nb,   (n_args *)CC_rewrite},
    {"dipretimes",              CC_dipretimes,  too_many_1,    wrong_no_1},
    {"weak_xreduce1",           wrong_no_na,    wrong_no_nb,   (n_args *)CC_weak_xreduce1},
    {"is_buble",                too_few_2,      CC_is_buble,   wrong_no_2},
    {"quotexf*",                too_few_2,      CC_quotexfH,   wrong_no_2},
    {"actual_arguments",        CC_actual_arguments,too_many_1,wrong_no_1},
    {"fs:prin:",                CC_fsTprinT,    too_many_1,    wrong_no_1},
    {"split-further",           wrong_no_na,    wrong_no_nb,   (n_args *)CC_splitKfurther},
    {"subtractinds",            wrong_no_na,    wrong_no_nb,   (n_args *)CC_subtractinds},
    {"change+int+to+sq",        CC_changeLintLtoLsq,too_many_1,wrong_no_1},
    {"mri_ofsf2mri",            too_few_2,      CC_mri_ofsf2mri,wrong_no_2},
    {"qqe_simplqneq",           too_few_2,      CC_qqe_simplqneq,wrong_no_2},
    {"pasf_leqp",               too_few_2,      CC_pasf_leqp,  wrong_no_2},
    {"diford",                  CC_diford,      too_many_1,    wrong_no_1},
    {"greatertype",             too_few_2,      CC_greatertype,wrong_no_2},
    {"newvar",                  CC_newvar,      too_many_1,    wrong_no_1},
    {"divide-by-power-of-ten",  too_few_2,      CC_divideKbyKpowerKofKten,wrong_no_2},
    {"mk_parents_prim",         CC_mk_parents_prim,too_many_1, wrong_no_1},
    {"mo_zero?",                CC_mo_zeroW,    too_many_1,    wrong_no_1},
    {"simp-prop-dist",          CC_simpKpropKdist,too_many_1,  wrong_no_1},
    {"lambda_mth9cs_9",         too_few_2,      CC_lambda_mth9cs_9,wrong_no_2},
    {"lambda_mth9cs_8",         too_few_2,      CC_lambda_mth9cs_8,wrong_no_2},
    {"tidysqrtf",               CC_tidysqrtf,   too_many_1,    wrong_no_1},
    {"get_dimension_in",        CC_get_dimension_in,too_many_1,wrong_no_1},
    {"pasf_coeflst",            too_few_2,      CC_pasf_coeflst,wrong_no_2},
    {"vdpsimpcont",             CC_vdpsimpcont, too_many_1,    wrong_no_1},
    {"xpartitk",                CC_xpartitk,    too_many_1,    wrong_no_1},
    {"lndepends",               too_few_2,      CC_lndepends,  wrong_no_2},
    {"color-roads",             too_few_2,      CC_colorKroads,wrong_no_2},
    {"gcdf2",                   too_few_2,      CC_gcdf2,      wrong_no_2},
    {"red_redpol",              too_few_2,      CC_red_redpol, wrong_no_2},
    {"baglistp",                CC_baglistp,    too_many_1,    wrong_no_1},
    {"xquotient-mod-p",         wrong_no_na,    wrong_no_nb,   (n_args *)CC_xquotientKmodKp},
    {"change+sq+to+int",        CC_changeLsqLtoLint,too_many_1,wrong_no_1},
    {"fctrf",                   CC_fctrf,       too_many_1,    wrong_no_1},
    {"ps:set-term",             wrong_no_na,    wrong_no_nb,   (n_args *)CC_psTsetKterm},
    {"crnprimp",                CC_crnprimp,    too_many_1,    wrong_no_1},
    {"simpdf",                  CC_simpdf,      too_many_1,    wrong_no_1},
    {"copy_vect",               too_few_2,      CC_copy_vect,  wrong_no_2},
    {"groebsaveltermbc",        CC_groebsaveltermbc,too_many_1,wrong_no_1},
    {"multiply-by-power-of-ten",too_few_2,      CC_multiplyKbyKpowerKofKten,wrong_no_2},
    {"diff_vertex",             too_few_2,      CC_diff_vertex,wrong_no_2},
    {"dfp-rule-found",          too_few_2,      CC_dfpKruleKfound,wrong_no_2},
    {"equiv-coeffs",            too_few_2,      CC_equivKcoeffs,wrong_no_2},
    {"addnew",                  wrong_no_na,    wrong_no_nb,   (n_args *)CC_addnew},
    {NULL, (one_args *)"u35", (two_args *)"1911 8246590 5173988", 0}
};

/* end of generated code */

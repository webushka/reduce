     .set   r0,0
     .set   r1,1
     .set   r2,2
     .set   r3,3
     .set   r4,4
     .set   r5,5
     .set   r6,6
     .set   r7,7
     .set   r8,8
     .set   r9,9
     .set   r10,10
     .set   r11,11
     .set   r12,12
     .set   r13,13
     .set   r14,14
     .set   r15,15
     .set   r16,16
     .set   r17,17
     .set   r18,18
     .set   r19,19
     .set   r20,20
     .set   r21,21
     .set   r22,22
     .set   r23,23
     .set   r24,24
     .set   r25,25
     .set   r26,26
     .set   r27,27
     .set   r28,28
     .set   r29,29
     .set   r30,30
     .set   r31,31
     .text
	.align	8
	.long	0
	.long	1
#  (*entry firstkernel expr 1) 
	.globl	firstkernel
firstkernel:
	     bclr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry init-pointers expr 0) 
	.globl	l0001
l0001:
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2088(r11)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r11,2160(r12)
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2080(r11)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r11,2168(r12)
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2080(r11)
	     addi	r3,r11,15992
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r3,2176(r12)
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2080(r11)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r11,2184(r12)
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2192(r11)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r11,2200(r12)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2208(r10)
	     addi	r9,0,276
	     mtspr	9,r10
	     bcctr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry init-fluids expr 0) 
	.globl	l0002
l0002:
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2224(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2232(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2240(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2248(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2256(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2264(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2272(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2280(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2288(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2296(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2304(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2312(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2320(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2328(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2336(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2344(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2352(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2360(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2368(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2376(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2384(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2392(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,2400(r12)
	     or	r3,r13,r13
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r3,2408(r12)
	     bclr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry init-viv expr 0) 
	.globl	l0003
l0003:
	     addis	r16,0,ha16(_SYMVAL)
	     la	r16,lo16(_SYMVAL)(r16)
	     ld	r16,2176(r16)
	     addis	r20,0,ha16(_SYMVAL)
	     la	r20,lo16(_SYMVAL)(r20)
	     ld	r20,2240(r20)
	     addis	r15,0,ha16(_SYMVAL)
	     la	r15,lo16(_SYMVAL)(r15)
	     ld	r15,2168(r15)
	     addis	r21,0,ha16(_SYMVAL)
	     la	r21,lo16(_SYMVAL)(r21)
	     ld	r21,2256(r21)
	     addis	r14,0,ha16(_SYMVAL)
	     la	r14,lo16(_SYMVAL)(r14)
	     ld	r14,2184(r14)
	     bclr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry _psl_main expr 0) 
	.globl	_psl_main
_psl_main:	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     std	r13,24(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r3,2424(r12)
	        .globl _copy_argv
	     bl	_copy_argv
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r3,2432(r12)
	     addis	r17,0,ha16(_SYMFNC)
	     la	r17,lo16(_SYMFNC)(r17)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r17,2440(r12)
	     addi	r17,r17,32000
	     addis	r18,0,ha16(_SYMVAL)
	     la	r18,lo16(_SYMVAL)(r18)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r18,2448(r12)
	     addi	r18,r18,32000
	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,928(r3)
	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2424(r3)
	     addis	r4,0,ha16(_SYMVAL)
	     la	r4,lo16(_SYMVAL)(r4)
	     ld	r4,2432(r4)
	     addi	r11,0,56
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r11,2280(r12)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2456(r10)
	     addi	r9,0,307
	     mtspr	9,r10
	     bcctrl	20,0
	     cmpdi	0,r3,4711
	     bc	4,2,l0004
	     or	r19,r1,r1
	     rldicl	r19,r19,59,5
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r19,2464(r12)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2208(r10)
	     addi	r9,0,276
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r20,0,ha16(_SYMVAL)
	     la	r20,lo16(_SYMVAL)(r20)
	     ld	r20,2472(r20)
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2480(r10)
	     addi	r9,0,310
	     mtspr	9,r10
	     bcctrl	20,0
	     addi	r3,0,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2488(r10)
	     addi	r9,0,311
	     mtspr	9,r10
	     bcctr	20,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0004:	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2216(r10)
	     addi	r9,0,277
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2208(r10)
	     addi	r9,0,276
	     mtspr	9,r10
	     bcctrl	20,0
	     or	r19,r1,r1
	     rldicl	r19,r19,59,5
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r19,2464(r12)
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2480(r10)
	     addi	r9,0,310
	     mtspr	9,r10
	     bcctrl	20,0
l0005:	     addi	r3,0,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2488(r10)
	     addi	r9,0,311
	     mtspr	9,r10
	     bcctr	20,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
#  (*entry exit-with-status expr 1) 
	.globl	l0006
l0006:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     std	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2496(r10)
	     addi	r9,0,312
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2504(r10)
	     addi	r9,0,313
	     mtspr	9,r10
	     bcctrl	20,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.globl	l0009
	.globl	l0008
	.globl	l0010
	.globl	l0007
	.align	8
l0009:	.long	0
	.long	9
	.byte 108
	.byte 111
	.byte 97
	.byte 100
	.byte 45
	.byte 112
	.byte 115
	.byte 108
	.byte 46
	.byte 98
	.byte 0
	.align	8
l0010:	.long	0
	.long	21
	.byte 65
	.byte 98
	.byte 111
	.byte 117
	.byte 116
	.byte 32
	.byte 116
	.byte 111
	.byte 32
	.byte 108
	.byte 111
	.byte 97
	.byte 100
	.byte 32
	.byte 76
	.byte 79
	.byte 65
	.byte 68
	.byte 45
	.byte 80
	.byte 83
	.byte 76
	.byte 0
	.align	8
	.long	0
	.long	0
#  (*entry pre-main expr 0) 
	.globl	l0011
l0011:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2520(r10)
	     addi	r9,0,315
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2528(r10)
	     addi	r9,0,316
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2536(r10)
	     addi	r9,0,317
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r3,0,ha16(l0007)
	     addi	r3,r3,lo16(l0007)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2544(r10)
	     addi	r9,0,318
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2552(r10)
	     addi	r9,0,319
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r3,0,ha16(l0008)
	     addi	r3,r3,lo16(l0008)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2560(r10)
	     addi	r9,0,320
	     mtspr	9,r10
	     bcctrl	20,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2568(r10)
	     addi	r9,0,321
	     mtspr	9,r10
	     bcctr	20,0
	.long	0
	.long	0
	.long	0
	.long	0
	.align	8
	.long	0
	.long	1
#  (*entry console-print-string expr 1) 
	.globl	l0012
l0012:
	     rldicl	r3,r3,64,8
	     addi	r3,r3,8
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2576(r10)
	     addi	r9,0,322
	     mtspr	9,r10
	     bcctr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry console-print-number expr 1) 
	.globl	l0013
l0013:
	     or	r4,r3,r3
	     rldicr	r4,r4,32,31
	     rldicl	r4,r4,32,32
	     rldicl	r3,r3,32,32
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2584(r10)
	     addi	r9,0,323
	     mtspr	9,r10
	     bcctr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry console-newline expr 0) 
	.globl	l0014
l0014:
	     addi	r3,0,10
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2600(r10)
	     addi	r9,0,325
	     mtspr	9,r10
	     bcctr	20,0
	.globl	l0017
	.globl	l0016
	.globl	l0018
	.globl	l0015
	.align	8
l0017:	.long	0
	.long	34
	.byte 67
	.byte 111
	.byte 117
	.byte 108
	.byte 100
	.byte 110
	.byte 39
	.byte 116
	.byte 32
	.byte 111
	.byte 112
	.byte 101
	.byte 110
	.byte 32
	.byte 98
	.byte 105
	.byte 110
	.byte 97
	.byte 114
	.byte 121
	.byte 32
	.byte 102
	.byte 105
	.byte 108
	.byte 101
	.byte 32
	.byte 102
	.byte 111
	.byte 114
	.byte 32
	.byte 105
	.byte 110
	.byte 112
	.byte 117
	.byte 116
	.byte 0
	.align	8
l0018:	.long	0
	.long	0
	.byte 114
	.byte 0
	.align	8
	.long	0
	.long	1
#  (*entry binaryopenread expr 1) 
	.globl	binaryopenread
binaryopenread:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     addis	r11,0,ha16(l0015)
	     addi	r11,r11,lo16(l0015)
	     ld	r11,0(r11)
	     rldicl	r4,r11,64,8
	     addi	r4,r4,8
	     rldicl	r3,r3,64,8
	     addi	r3,r3,8
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2608(r10)
	     addi	r9,0,326
	     mtspr	9,r10
	     bcctrl	20,0
	     cmpdi	0,r3,0
	     bc	4,2,l0019
	     addis	r3,0,ha16(l0016)
	     addi	r3,r3,lo16(l0016)
	     ld	r3,0(r3)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2616(r10)
	     addi	r9,0,327
	     mtspr	9,r10
	     bcctr	20,0
l0019:	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.long	0
	.long	0
	.long	0
	.long	0
	.align	8
	.long	0
	.long	1
#  (*entry binaryread expr 1) 
	.globl	binaryread
binaryread:
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2632(r10)
	     addi	r9,0,329
	     mtspr	9,r10
	     bcctr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry binaryreadblock expr 3) 
	.globl	binaryreadblock
binaryreadblock:
	     or	r7,r4,r4
	     or	r6,r3,r3
	     addi	r4,0,8
	     or	r3,r7,r7
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2648(r10)
	     addi	r9,0,331
	     mtspr	9,r10
	     bcctr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry binaryclose expr 1) 
	.globl	binaryclose
binaryclose:
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2664(r10)
	     addi	r9,0,333
	     mtspr	9,r10
	     bcctr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry initialize-symbol-table expr 0) 
	.globl	l0020
l0020:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     std	r13,32(r1)
	     std	r13,24(r1)
	     addi	r4,0,15000
	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2680(r3)
	     or	r6,r3,r3
	     or	r5,r4,r4
l0021:	     cmpd	0,r6,r5
	     bc	12,1,l0022
	     or	r3,r6,r6
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2688(r11)
	     add	r3,r3,r11
	     addi	r4,r6,1
	     or	r8,r3,r3
	     std	r4,0(r8)
	     or	r6,r4,r4
	     b	l0021
l0022:	     addis	r9,0,ha16(_SYMVAL)
	     la	r9,lo16(_SYMVAL)(r9)
	     ld	r9,2688(r9)
	     addis	r11,0,1
	     ori	r11,r11,54464
	     add	r9,r9,r11
	     addi	r11,0,0
	     std	r11,0(r9)
	     addi	r4,0,18013
	     addi	r3,0,0
	     or	r7,r3,r3
	     or	r6,r4,r4
l0023:	     cmpd	0,r7,r6
	     bc	12,1,l0024
	     addi	r5,0,0
	     or	r4,r7,r7
	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2096(r3)
	     rlwinm	r8,r4,1,0,30
	     sthx	r5,r3,r8
	     addi	r4,r4,1
	     or	r7,r4,r4
	     b	l0023
l0024:	     addis	r10,0,ha16(_SYMVAL)
	     la	r10,lo16(_SYMVAL)(r10)
	     ld	r10,2688(r10)
	     addi	r10,r10,1024
	     ld	r3,0(r10)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2696(r10)
	     addi	r9,0,337
	     mtspr	9,r10
	     bcctrl	20,0
	     addi	r5,0,128
	     or	r4,r3,r3
	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2096(r3)
	     rlwinm	r8,r4,1,0,30
	     sthx	r5,r3,r8
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2680(r11)
	     addi	r4,r11,-1
	     addi	r3,0,256
	     std	r3,24(r1)
	     std	r4,32(r1)
l0025:	     ld	r11,24(r1)
	     ld	r10,32(r1)
	     cmpd	0,r11,r10
	     bc	12,1,l0026
	     ld	r3,24(r1)
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2688(r11)
	     add	r3,r3,r11
	     or	r8,r3,r3
	     ld	r3,0(r8)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2696(r10)
	     addi	r9,0,337
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r5,24(r1)
	     or	r4,r3,r3
	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2096(r3)
	     rlwinm	r8,r4,1,0,30
	     sthx	r5,r3,r8
	     addi	r5,r5,1
	     std	r5,24(r1)
	     b	l0025
l0026:	     or	r3,r13,r13
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r3,2704(r12)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry faslin-intern expr 1) 
	.globl	l0027
l0027:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     std	r13,40(r1)
	     std	r13,32(r1)
	     std	r3,24(r1)
	     or	r4,r3,r3
	     addi	r3,0,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2712(r10)
	     addi	r9,0,339
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,32(r1)
	     cmpd	0,r3,r13
	     bc	4,2,l0028
	     ld	r3,24(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2720(r10)
	     addi	r9,0,340
	     mtspr	9,r10
	     bcctr	20,0
l0028:	     ld	r11,24(r1)
	     rldicl	r3,r11,64,8
	     or	r9,r3,r3
	     ld	r11,0(r9)
	     rldicr	r3,r11,8,55
	     sradi	r3,r3,8
	     std	r3,40(r1)
	     ld	r11,32(r1)
	     cmpd	0,r3,r11
	     bc	4,1,l0029
	     ld	r11,32(r1)
	     addi	r4,r11,1
	     ld	r11,24(r1)
	     rldicl	r3,r11,64,8
	     addi	r3,r3,8
	     lbzx	r3,r4,r3
	     cmpdi	0,r3,0
	     bc	4,2,l0029
	     std	r4,32(r1)
l0029:	     ld	r11,32(r1)
	     ld	r10,40(r1)
	     cmpd	0,r11,r10
	     bc	12,0,l0030
	     ld	r3,24(r1)
	     b	l0031
l0030:	     ld	r11,24(r1)
	     rldicl	r5,r11,64,8
	     or	r10,r5,r5
	     ld	r11,0(r10)
	     rldicr	r5,r11,8,55
	     sradi	r5,r5,8
	     addi	r5,r5,1
	     ld	r11,32(r1)
	     addi	r4,r11,1
	     ld	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2728(r10)
	     addi	r9,0,341
	     mtspr	9,r10
	     bcctrl	20,0
l0031:	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2720(r10)
	     addi	r9,0,340
	     mtspr	9,r10
	     bcctr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry intern expr 1) 
	.globl	intern
intern:
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2744(r10)
	     addi	r9,0,343
	     mtspr	9,r10
	     bcctr	20,0
	.globl	l0033
	.globl	l0032
	.align	8
l0033:	.long	0
	.long	7
	.byte 78
	.byte 101
	.byte 119
	.byte 32
	.byte 105
	.byte 100
	.byte 58
	.byte 32
	.byte 0
	.align	8
	.long	0
	.long	1
#  (*entry unchecked-string-intern expr 1) 
	.globl	l0034
l0034:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-96(r1)
	     std	r3,24(r1)
	     or	r7,r13,r13
	     or	r6,r7,r7
	     or	r5,r7,r7
	     rldicl	r4,r3,64,8
	     or	r8,r4,r4
	     ld	r11,0(r8)
	     rldicr	r4,r11,8,55
	     sradi	r4,r4,8
	     rldicl	r3,r3,64,8
	     std	r3,32(r1)
	     std	r4,40(r1)
	     std	r5,48(r1)
	     std	r6,56(r1)
	     std	r7,64(r1)
	     cmpdi	0,r4,0
	     bc	4,2,l0035
	     addi	r3,r3,8
	     lbzx	r3,r4,r3
	     addi	r11,0,254
	     rldimi	r3,r11,56,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0035:	     ld	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2696(r10)
	     addi	r9,0,337
	     mtspr	9,r10
	     bcctrl	20,0
	     or	r4,r3,r3
	     std	r4,48(r1)
	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2096(r3)
	     rlwinm	r8,r4,1,0,30
	     lhzx	r3,r3,r8
	     rldicr	r3,r3,48,15
	     sradi 	r3,r3,48
	     cmpdi	0,r3,0
	     bc	4,1,l0036
	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2096(r3)
	     rlwinm	r8,r4,1,0,30
	     lhzx	r3,r3,r8
	     rldicr	r3,r3,48,15
	     sradi 	r3,r3,48
	     addi	r11,0,254
	     rldimi	r3,r11,56,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0036:	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2704(r11)
	     cmpd	0,r13,r11
	     bc	12,2,l0037
	     addis	r3,0,ha16(l0032)
	     addi	r3,r3,lo16(l0032)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2544(r10)
	     addi	r9,0,318
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2544(r10)
	     addi	r9,0,318
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2552(r10)
	     addi	r9,0,319
	     mtspr	9,r10
	     bcctrl	20,0
l0037:	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2752(r10)
	     addi	r9,0,344
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,64(r1)
	     or	r5,r3,r3
	     ld	r4,48(r1)
	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2096(r3)
	     rlwinm	r8,r4,1,0,30
	     sthx	r5,r3,r8
	     ld	r3,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2760(r10)
	     addi	r9,0,345
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,56(r1)
	     ld	r4,32(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2768(r10)
	     addi	r9,0,346
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r4,56(r1)
	     addi	r11,0,4
	     rldimi	r4,r11,56,0
	     ld	r3,64(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2776(r10)
	     addi	r9,0,347
	     mtspr	9,r10
	     bcctr	20,0
	.long	0
	.long	0
	.globl	l0039
	.globl	l0038
	.align	8
l0039:	.long	0
	.long	18
	.byte 72
	.byte 97
	.byte 115
	.byte 104
	.byte 32
	.byte 116
	.byte 97
	.byte 98
	.byte 108
	.byte 101
	.byte 32
	.byte 111
	.byte 118
	.byte 101
	.byte 114
	.byte 102
	.byte 108
	.byte 111
	.byte 119
	.byte 0
	.align	8
	.long	0
	.long	1
#  (*entry hash-into-table expr 1) 
	.globl	l0040
l0040:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-80(r1)
	     std	r13,48(r1)
	     std	r13,40(r1)
	     std	r13,32(r1)
	     std	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2784(r10)
	     addi	r9,0,348
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,32(r1)
	     std	r3,40(r1)
	     addi	r11,0,-1
	     std	r11,48(r1)
l0041:	     ld	r4,40(r1)
	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2096(r3)
	     rlwinm	r8,r4,1,0,30
	     lhzx	r3,r3,r8
	     rldicr	r3,r3,48,15
	     sradi 	r3,r3,48
	     cmpdi	0,r3,0
	     bc	4,2,l0042
	     ld	r11,48(r1)
	     cmpdi	0,r11,-1
	     bc	12,2,l0043
	     ld	r3,48(r1)
	     b	l0044
l0043:	     or	r3,r4,r4
l0044:	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0042:	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2096(r3)
	     rlwinm	r8,r4,1,0,30
	     lhzx	r3,r3,r8
	     or	r5,r3,r3
	     rldicr	r5,r5,48,15
	     sradi 	r5,r5,48
	     cmpdi	0,r5,-1
	     bc	4,2,l0045
	     ld	r11,48(r1)
	     cmpdi	0,r11,-1
	     bc	4,2,l0046
	     std	r4,48(r1)
	     b	l0046
l0045:	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2096(r3)
	     rlwinm	r8,r4,1,0,30
	     lhzx	r3,r3,r8
	     ld	r4,24(r1)
	     rldicr	r3,r3,48,15
	     sradi 	r3,r3,48
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2688(r11)
	     add	r3,r3,r11
	     or	r9,r3,r3
	     ld	r3,0(r9)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2792(r10)
	     addi	r9,0,349
	     mtspr	9,r10
	     bcctrl	20,0
	     cmpd	0,r3,r13
	     bc	12,2,l0046
	     ld	r3,40(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0046:	     ld	r11,40(r1)
	     cmpdi	0,r11,18013
	     bc	4,2,l0047
	     addi	r3,0,0
	     b	l0048
l0047:	     ld	r11,40(r1)
	     addi	r3,r11,1
l0048:	     std	r3,40(r1)
	     ld	r11,32(r1)
	     cmpd	0,r3,r11
	     bc	4,2,l0041
	     addis	r3,0,ha16(l0038)
	     addi	r3,r3,lo16(l0038)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2616(r10)
	     addi	r9,0,327
	     mtspr	9,r10
	     bcctrl	20,0
	     b	l0041
	.long	0
	.long	0
	.align	8
	.long	0
	.long	2
#  (*entry initialize-new-id expr 2) 
	.globl	l0049
l0049:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     std	r3,24(r1)
	     addi	r11,0,254
	     rldimi	r3,r11,56,0
	     std	r3,32(r1)
	     ld	r5,24(r1)
	     rldicr	r5,r5,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2688(r11)
	     add	r5,r5,r11
	     or	r10,r5,r5
	     std	r4,0(r10)
	     ld	r6,24(r1)
	     rldicr	r6,r6,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2800(r11)
	     add	r6,r6,r11
	     or	r7,r13,r13
	     or	r8,r6,r6
	     std	r7,0(r8)
	     ld	r3,24(r1)
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2808(r11)
	     add	r3,r3,r11
	     or	r9,r3,r3
	     std	r7,0(r9)
	     ld	r3,24(r1)
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2448(r11)
	     add	r3,r3,r11
	     ld	r4,24(r1)
	     addi	r11,0,253
	     rldimi	r4,r11,56,0
	     or	r10,r3,r3
	     std	r4,0(r10)
	     ld	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2816(r10)
	     addi	r9,0,352
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r3,32(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry hash-function expr 1) 
	.globl	l0052
l0052:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     rldicl	r3,r3,64,8
	     std	r3,32(r1)
	     or	r8,r3,r3
	     ld	r11,0(r8)
	     rldicr	r3,r11,8,55
	     sradi	r3,r3,8
	     std	r3,24(r1)
	     addi	r3,0,0
	     std	r3,40(r1)
	     ld	r11,24(r1)
	     cmpdi	0,r11,56
	     bc	4,1,l0053
	     addi	r11,0,56
	     std	r11,24(r1)
l0053:	     ld	r4,24(r1)
	     addi	r3,0,0
	     or	r7,r3,r3
	     or	r6,r4,r4
l0054:	     cmpd	0,r7,r6
	     bc	12,1,l0055
	     or	r4,r7,r7
	     ld	r11,32(r1)
	     addi	r3,r11,8
	     lbzx	r3,r4,r3
	     addi	r11,0,56
	     subf	r5,r4,r11
	     cmpdi	0,r5,0
	     bc	12,1,l0050
	     neg	r12,r5
	     srd	r3,r3,r12
	     b	l0051
l0050:	     sld	r3,r3,r5
l0051:	     ld	r11,40(r1)
	     xor	r3,r3,r11
	     std	r3,40(r1)
	     addi	r4,r4,1
	     or	r7,r4,r4
	     b	l0054
l0055:	     addi	r4,0,18013
	     ld	r3,40(r1)
	     divd	r5,r3,r4
	     mulld	r5,r5,r4
	     subf	r3,r5,r3
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.globl	l0057
	.globl	l0056
	.align	8
l0057:	.long	0
	.long	3
	.byte 115
	.byte 121
	.byte 110
	.byte 99
	.byte 0
	.align	8
	.long	0
	.long	1
#  (*entry faslin expr 1) 
	.globl	faslin
faslin:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-128(r1)
	     std	r13,80(r1)
	     std	r13,40(r1)
	     std	r3,24(r1)
	     std	r13,48(r1)
	     std	r13,64(r1)
	     std	r13,72(r1)
	     std	r13,96(r1)
	     std	r13,32(r1)
	     std	r13,56(r1)
	     std	r13,88(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2624(r10)
	     addi	r9,0,328
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2640(r10)
	     addi	r9,0,330
	     mtspr	9,r10
	     bcctrl	20,0
	     cmpdi	0,r3,199
	     bc	12,2,l0058
	     ld	r3,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2672(r10)
	     addi	r9,0,334
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2824(r10)
	     addi	r9,0,353
	     mtspr	9,r10
	     bcctrl	20,0
	     b	l0059
l0058:	     ld	r3,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2832(r10)
	     addi	r9,0,354
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,48(r1)
	     ld	r3,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2640(r10)
	     addi	r9,0,330
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,64(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2840(r10)
	     addi	r9,0,355
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,72(r1)
	     addi	r3,0,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2840(r10)
	     addi	r9,0,355
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,88(r1)
	     ld	r3,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2640(r10)
	     addi	r9,0,330
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r11,72(r1)
	     or	r12,r3,r3
	     add	r11,r12,r11
	     or	r4,r11,r11
	     std	r4,96(r1)
	     ld	r5,64(r1)
	     ld	r11,72(r1)
	     addi	r4,r11,0
	     ld	r3,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2656(r10)
	     addi	r9,0,332
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r3,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2640(r10)
	     addi	r9,0,330
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,32(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2848(r10)
	     addi	r9,0,356
	     mtspr	9,r10
	     bcctrl	20,0
	     addi	r11,0,7
	     rldimi	r3,r11,56,0
	     std	r3,56(r1)
	     ld	r5,32(r1)
	     rldicl	r4,r3,64,8
	     addi	r4,r4,8
	     ld	r3,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2656(r10)
	     addi	r9,0,332
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r3,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2672(r10)
	     addi	r9,0,334
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r6,48(r1)
	     ld	r5,56(r1)
	     ld	r4,64(r1)
	     ld	r3,72(r1)
	     bl	l0060
	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2856(r3)
	     std	r3,80(r1)
	     ld	r11,72(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r11,2856(r12)
	     addi	r5,0,0
	     ld	r11,88(r1)
	     ld	r12,72(r1)
	     subf	r4,r12,r11
	     ld	r3,72(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2864(r10)
	     addi	r9,0,358
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r11,0,ha16(l0056)
	     addi	r11,r11,lo16(l0056)
	     ld	r11,0(r11)
	     rldicl	r3,r11,64,8
	     addi	r3,r3,8
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2872(r10)
	     addi	r9,0,359
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r3,96(r1)
	     mtspr	9,r3
	     bcctrl	20,0
	     ld	r11,80(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r11,2856(r12)
	     ld	r4,88(r1)
	     ld	r11,96(r1)
	     addi	r3,r11,4
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2880(r10)
	     addi	r9,0,360
	     mtspr	9,r10
	     bcctrl	20,0
l0059:	     or	r3,r13,r13
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.long	0
	.long	0
	.align	8
#  (*entry do-relocation expr 4) 
	.globl	l0060
l0060:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-96(r1)
	     std	r13,64(r1)
	     std	r13,40(r1)
	     std	r3,56(r1)
	     std	r5,32(r1)
	     std	r6,48(r1)
	     or	r3,r4,r4
	     addi	r4,r3,-1
	     rldicr	r4,r4,3,60
	     addi	r3,0,0
	     std	r3,72(r1)
	     std	r4,24(r1)
l0061:	     ld	r11,72(r1)
	     ld	r10,24(r1)
	     cmpd	0,r11,r10
	     bc	4,1,l0062
	     or	r3,r13,r13
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0062:	     ld	r4,72(r1)
	     ld	r11,32(r1)
	     rldicl	r3,r11,64,8
	     addi	r3,r3,8
	     rlwinm	r5,r4,30,2,31
	     lbzx	r7,r3,r5
	     rlwinm	r6,r4,1,29,30
	     addic	r6,r6,-6
	     neg	r6,r6
	     srw	r3,r7,r6
	     andi.	r3,r3,3
	     or	r5,r13,r13
	     ld	r11,56(r1)
	     ld	r12,72(r1)
	     add	r11,r12,r11
	     or	r4,r11,r11
	     std	r4,64(r1)
	     std	r5,40(r1)
	     cmpdi	0,r3,1
	     bc	12,2,l0063
	     cmpdi	0,r3,2
	     bc	12,2,l0064
	     cmpdi	0,r3,3
	     bc	12,2,l0065
	     b	l0066
l0063:	     ld	r11,72(r1)
	     addi	r4,r11,1
	     ld	r11,32(r1)
	     rldicl	r3,r11,64,8
	     addi	r3,r3,8
	     rlwinm	r5,r4,30,2,31
	     lbzx	r7,r3,r5
	     rlwinm	r6,r4,1,29,30
	     addic	r6,r6,-6
	     neg	r6,r6
	     srw	r3,r7,r6
	     andi.	r3,r3,3
	     cmpdi	0,r3,0
	     bc	12,2,l0067
	     cmpdi	0,r3,1
	     bc	12,2,l0068
	     cmpdi	0,r3,2
	     bc	12,2,l0069
	     cmpdi	0,r3,3
	     bc	12,2,l0070
	     b	l0066
l0067:	     ld	r5,48(r1)
	     ld	r4,56(r1)
	     ld	r3,64(r1)
	     bl	l0071
	     b	l0066
l0068:	     ld	r5,48(r1)
	     ld	r4,56(r1)
	     ld	r3,64(r1)
	     bl	l0072
	     b	l0066
l0069:	     ld	r3,64(r1)
	     lwz	r3,0(r3)
	     ld	r4,56(r1)
	     rldicr	r4,r4,6,57
	     rldicl	r4,r4,58,6
	     addc	r3,r3,r4
	     or	r4,r3,r3
	     ld	r3,64(r1)
	     stw	r4,0(r3)
	     b	l0066
l0070:	     ld	r3,64(r1)
	     lwz	r3,0(r3)
	     addis	r11,0,0
	     ori	r11,r11,65535
	     and	r3,r3,r11
	     std	r3,40(r1)
	     cmpdi	0,r3,2048
	     bc	12,0,l0073
	     ld	r4,48(r1)
	     bl	l0074
	     std	r3,40(r1)
l0073:	     ld	r3,64(r1)
	     lwz	r3,0(r3)
	     addis	r4,0,65535
	     ori	r4,r4,0
	     and	r4,r4,r3
	     ld	r11,40(r1)
	     addi	r5,r11,-4000
	     rldicr	r5,r5,3,60
	     addis	r11,0,0
	     ori	r11,r11,65535
	     and	r5,r5,r11
	     or	r4,r4,r5
	     ld	r3,64(r1)
	     stw	r4,0(r3)
	     b	l0066
l0065:	     ld	r5,48(r1)
	     ld	r4,56(r1)
	     ld	r3,64(r1)
	     bl	l0075
	     b	l0066
l0064:	     ld	r5,48(r1)
	     ld	r4,56(r1)
	     ld	r3,64(r1)
	     bl	l0076
l0066:	     ld	r11,72(r1)
	     addi	r3,r11,4
	     std	r3,72(r1)
	     b	l0061
	.align	8
#  (*entry relocate-word expr 3) 
	.globl	l0071
l0071:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-80(r1)
	     std	r13,56(r1)
	     std	r13,48(r1)
	     std	r3,24(r1)
	     std	r4,32(r1)
	     std	r5,40(r1)
	     lwz	r3,0(r3)
	     std	r3,48(r1)
	     ld	r3,24(r1)
	     lwz	r3,0(r3)
	     rldicl	r4,r3,32,34
	     ld	r11,48(r1)
	     rldicl	r3,r11,2,62
	     std	r3,48(r1)
	     std	r4,56(r1)
	     ld	r3,24(r1)
	     lwz	r3,0(r3)
	     rldicl	r11,r3,8,56
	     cmpdi	0,r11,0
	     bc	4,2,l0077
	     ld	r3,24(r1)
	     lwz	r3,0(r3)
	     ld	r11,32(r1)
	     or	r12,r3,r3
	     add	r11,r12,r11
	     or	r4,r11,r11
	     ld	r3,24(r1)
	     stw	r4,0(r3)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0077:	     ld	r6,40(r1)
	     ld	r5,32(r1)
	     ld	r4,56(r1)
	     ld	r3,48(r1)
	     bl	l0078
	     or	r4,r3,r3
	     ld	r3,24(r1)
	     stw	r4,0(r3)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
#  (*entry relocate-inf expr 3) 
	.globl	l0075
l0075:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     std	r3,24(r1)
	     std	r4,32(r1)
	     or	r9,r3,r3
	     ld	r11,0(r9)
	     rldicl	r4,r11,64,42
	     or	r10,r3,r3
	     ld	r11,0(r10)
	     rldicl	r3,r11,10,62
	     or	r6,r5,r5
	     ld	r5,32(r1)
	     bl	l0078
	     ld	r8,24(r1)
	     ld	r11,0(r8)
	     rldicl	r4,r11,8,56
	     rldimi	r3,r4,56,0
	     ld	r9,24(r1)
	     std	r3,0(r9)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
#  (*entry relocate-right-half expr 3) 
	.globl	l0076
l0076:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-80(r1)
	     std	r13,40(r1)
	     std	r13,32(r1)
	     std	r3,48(r1)
	     std	r5,24(r1)
	     lwz	r3,0(r3)
	     or	r4,r13,r13
	     std	r3,40(r1)
	     addis	r4,0,0
	     ori	r4,r4,65535
	     and	r4,r4,r3
	     std	r4,32(r1)
	     cmpdi	0,r4,2048
	     bc	12,0,l0079
	     ld	r4,24(r1)
	     ld	r3,32(r1)
	     bl	l0074
	     addis	r4,0,65535
	     ori	r4,r4,0
	     ld	r11,40(r1)
	     and	r4,r4,r11
	     or	r4,r4,r3
	     ld	r3,48(r1)
	     stw	r4,0(r3)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0079:	     or	r3,r13,r13
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
#  (*entry compute-relocation expr 4) 
	.globl	l0078
l0078:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     std	r4,24(r1)
	     cmpdi	0,r3,0
	     bc	12,2,l0080
	     cmpdi	0,r3,1
	     bc	12,2,l0081
	     cmpdi	0,r3,2
	     bc	12,2,l0082
	     cmpdi	0,r3,3
	     bc	12,2,l0083
	     b	l0084
l0080:	     addc	r3,r5,r4
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0082:	     cmpdi	0,r4,2048
	     bc	12,0,l0085
	     or	r4,r6,r6
	     ld	r3,24(r1)
	     bl	l0074
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2448(r11)
	     add	r3,r3,r11
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0085:	     or	r3,r4,r4
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2448(r11)
	     add	r3,r3,r11
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0083:	     cmpdi	0,r4,2048
	     bc	12,0,l0086
	     or	r4,r6,r6
	     ld	r3,24(r1)
	     bl	l0074
	     std	r3,24(r1)
l0086:	     ld	r3,24(r1)
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2440(r11)
	     add	r3,r3,r11
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0081:	     cmpdi	0,r4,2048
	     bc	12,0,l0087
	     or	r4,r6,r6
	     ld	r3,24(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     b	l0074
l0087:	     or	r3,r4,r4
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0084:	     or	r3,r13,r13
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
#  (*entry local-to-global-id expr 2) 
	.globl	l0074
l0074:
	     addi	r3,r3,-2047
	     rldicr	r3,r3,3,60
	     rldicl	r5,r4,64,8
	     or	r10,r3,r3
	     addc	r10,r10,r5
	     ld	r3,0(r10)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry read-id-table expr 1) 
	.globl	l0088
l0088:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-96(r1)
	     std	r13,64(r1)
	     std	r13,56(r1)
	     std	r13,48(r1)
	     std	r13,40(r1)
	     std	r13,32(r1)
	     std	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2640(r10)
	     addi	r9,0,330
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,32(r1)
	     addi	r3,r3,1
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2848(r10)
	     addi	r9,0,356
	     mtspr	9,r10
	     bcctrl	20,0
	     addi	r11,0,7
	     rldimi	r3,r11,56,0
	     std	r3,40(r1)
	     ld	r4,32(r1)
	     addi	r3,0,0
	     std	r3,48(r1)
	     std	r4,56(r1)
l0089:	     ld	r11,48(r1)
	     ld	r10,56(r1)
	     cmpd	0,r11,r10
	     bc	12,1,l0090
	     ld	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2640(r10)
	     addi	r9,0,330
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r8,0,ha16(_SYMVAL)
	     la	r8,lo16(_SYMVAL)(r8)
	     ld	r8,2072(r8)
	     std	r3,0(r8)
	     addi	r5,r3,9
	     rldicl	r11,r5,3,61
	     addc	r11,r11,r5
	     sradi	r5,r11,3
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2072(r11)
	     addi	r4,r11,8
	     ld	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2656(r10)
	     addi	r9,0,332
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2072(r11)
	     addi	r3,r11,0
	     addi	r11,0,4
	     rldimi	r3,r11,56,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2736(r10)
	     addi	r9,0,342
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,64(r1)
	     ld	r11,48(r1)
	     addi	r3,r11,1
	     rldicr	r3,r3,3,60
	     ld	r11,40(r1)
	     rldicl	r4,r11,64,8
	     ld	r11,64(r1)
	     rldicl	r5,r11,64,8
	     or	r9,r3,r3
	     addc	r9,r9,r4
	     std	r5,0(r9)
	     ld	r11,48(r1)
	     addi	r6,r11,1
	     std	r6,48(r1)
	     b	l0089
l0090:	     ld	r3,40(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry putentry expr 3) 
	.globl	putentry
putentry:
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2856(r11)
	     add	r5,r5,r11
	     addi	r11,0,20
	     rldimi	r5,r11,56,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2888(r10)
	     addi	r9,0,361
	     mtspr	9,r10
	     bcctr	20,0
	.globl	l0092
	.globl	l0091
	.align	8
l0092:	.long	0
	.long	22
	.byte 70
	.byte 105
	.byte 108
	.byte 101
	.byte 32
	.byte 105
	.byte 115
	.byte 32
	.byte 110
	.byte 111
	.byte 116
	.byte 32
	.byte 70
	.byte 65
	.byte 83
	.byte 76
	.byte 32
	.byte 102
	.byte 111
	.byte 114
	.byte 109
	.byte 97
	.byte 116
	.byte 0
	.align	8
	.long	0
	.long	1
#  (*entry faslin-bad-file expr 1) 
	.globl	l0093
l0093:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     addis	r3,0,ha16(l0091)
	     addi	r3,r3,lo16(l0091)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2544(r10)
	     addi	r9,0,318
	     mtspr	9,r10
	     bcctrl	20,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2552(r10)
	     addi	r9,0,319
	     mtspr	9,r10
	     bcctr	20,0
	.long	0
	.long	0
	.align	8
#  (*entry relocate-movex expr 3) 
	.globl	l0072
l0072:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     std	r13,32(r1)
	     std	r13,24(r1)
	     std	r3,40(r1)
	     addi	r3,r3,-4
	     lwz	r3,0(r3)
	     std	r3,24(r1)
	     ld	r3,40(r1)
	     lwz	r3,0(r3)
	     or	r6,r13,r13
	     addi	r5,0,26
	     or	r4,r3,r3
	     ld	r3,24(r1)
	     std	r3,24(r1)
	     addi	r6,0,15
	     cmpdi	0,r5,0
	     bc	12,1,l0094
	     neg	r12,r5
	     srd	r6,r6,r12
	     b	l0095
l0094:	     sld	r6,r6,r5
l0095:	     or	r7,r3,r3
	     rldicl	r7,r7,48,16
	     addis	r11,0,0
	     ori	r11,r11,65535
	     and	r7,r7,r11
	     or	r6,r6,r7
	     or	r3,r4,r4
	     rldicl	r3,r3,43,21
	     andi.	r3,r3,31
	     rldicr	r3,r3,21,42
	     or	r6,r6,r3
	     addis	r3,0,0
	     ori	r3,r3,65535
	     ld	r11,24(r1)
	     and	r3,r3,r11
	     or	r4,r4,r3
	     std	r4,32(r1)
	     rldicl	r3,r3,49,15
	     cmpdi	0,r3,1
	     bc	4,2,l0096
	     or	r3,r4,r4
	     rldicl	r3,r3,38,26
	     cmpdi	0,r3,24
	     bc	12,2,l0096
	     addi	r6,r6,1
l0096:	     or	r4,r6,r6
	     ld	r11,40(r1)
	     addi	r3,r11,-4
	     stw	r4,0(r3)
	     ld	r4,32(r1)
	     ld	r3,40(r1)
	     stw	r4,0(r3)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry delbps expr 2) 
	.globl	delbps
delbps:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     std	r3,24(r1)
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2312(r11)
	     cmpd	0,r4,r11
	     bc	4,2,l0097
	     addi	r5,0,1
	     subfc	r4,r3,r4
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2864(r10)
	     addi	r9,0,358
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r3,24(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r3,2312(r12)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0097:	     or	r3,r13,r13
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry flushcache expr 3) 
	.globl	flushcache
flushcache:
	     icbi	r3,r0
	     bclr	20,0
	.globl	l0100
	.globl	l0099
	.align	8
l0100:	.long	0
	.long	30
	.byte 82
	.byte 97
	.byte 110
	.byte 32
	.byte 111
	.byte 117
	.byte 116
	.byte 32
	.byte 111
	.byte 102
	.byte 32
	.byte 98
	.byte 105
	.byte 110
	.byte 97
	.byte 114
	.byte 121
	.byte 32
	.byte 112
	.byte 114
	.byte 111
	.byte 103
	.byte 114
	.byte 97
	.byte 109
	.byte 32
	.byte 115
	.byte 112
	.byte 97
	.byte 99
	.byte 101
	.byte 0
	.align	8
	.long	0
	.long	1
#  (*entry gtbps expr 1) 
	.globl	gtbps
gtbps:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     std	r13,32(r1)
l0101:	     std	r3,24(r1)
	     cmpd	0,r3,r13
	     bc	4,2,l0102
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2904(r10)
	     addi	r9,0,363
	     mtspr	9,r10
	     bcctrl	20,0
l0102:	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2312(r3)
	     std	r3,32(r1)
	     ld	r4,24(r1)
	     rldicr	r4,r4,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2312(r11)
	     add	r4,r4,r11
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r4,2312(r12)
	     or	r5,r3,r3
	     ld	r6,24(r1)
l0103:	     cmpdi	0,r6,0
	     bc	12,2,l0104
	     or	r3,r6,r6
	     rldicr	r3,r3,3,60
	     or	r10,r3,r3
	     addc	r10,r10,r5
	     addi	r11,0,-1
	     std	r11,0(r10)
	     addi	r4,r6,-1
	     or	r6,r4,r4
	     b	l0103
l0104:	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2288(r11)
	     addis	r10,0,ha16(_SYMVAL)
	     la	r10,lo16(_SYMVAL)(r10)
	     ld	r10,2312(r10)
	     cmpd	0,r11,r10
	     bc	12,0,l0105
	     ld	r3,32(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0105:	     ld	r11,32(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r11,2312(r12)
	     addis	r3,0,ha16(l0098)
	     addi	r3,r3,lo16(l0098)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2912(r10)
	     addi	r9,0,364
	     mtspr	9,r10
	     bcctrl	20,0
	     cmpd	0,r3,r13
	     bc	12,2,l0106
	     ld	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2920(r10)
	     addi	r9,0,365
	     mtspr	9,r10
	     bcctrl	20,0
	     cmpd	0,r3,r13
	     bc	12,2,l0106
	     ld	r3,24(r1)
	     b	l0101
l0106:	     addis	r3,0,ha16(l0099)
	     addi	r3,r3,lo16(l0099)
	     ld	r3,0(r3)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2928(r10)
	     addi	r9,0,366
	     mtspr	9,r10
	     bcctr	20,0
	.long	0
	.long	0
l0098:	.long	4261412864
	.long	365
	.globl	l0108
	.globl	l0107
	.align	8
l0108:	.long	0
	.long	21
	.byte 71
	.byte 84
	.byte 66
	.byte 80
	.byte 83
	.byte 32
	.byte 99
	.byte 97
	.byte 108
	.byte 108
	.byte 101
	.byte 100
	.byte 32
	.byte 119
	.byte 105
	.byte 116
	.byte 104
	.byte 32
	.byte 78
	.byte 73
	.byte 76
	.byte 46
	.byte 0
	.align	8
	.long	0
	.long	0
#  (*entry gtbps-nil-error expr 0) 
	.globl	l0109
l0109:
	     addis	r3,0,ha16(l0107)
	     addi	r3,r3,lo16(l0107)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2928(r10)
	     addi	r9,0,366
	     mtspr	9,r10
	     bcctr	20,0
	.long	0
	.long	0
	.align	8
	.long	0
	.long	1
#  (*entry gtheap expr 1) 
	.globl	gtheap
gtheap:
	     cmpd	0,r3,r13
	     bc	4,2,l0110
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2936(r10)
	     addi	r9,0,367
	     mtspr	9,r10
	     bcctr	20,0
l0110:	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2944(r10)
	     addi	r9,0,368
	     mtspr	9,r10
	     bcctr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry real-gtheap expr 1) 
	.globl	l0111
l0111:
	     or	r5,r3,r3
	     or	r3,r20,r20
	     or	r4,r5,r5
	     rldicr	r4,r4,3,60
	     addc	r4,r4,r20
	     or	r20,r4,r4
	     cmpd	0,r4,r21
	     bc	12,0,l0112
	     or	r4,r5,r5
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2960(r10)
	     addi	r9,0,370
	     mtspr	9,r10
	     bcctr	20,0
l0112:	     bclr	20,0
	.globl	l0114
	.globl	l0113
	.align	8
l0114:	.long	0
	.long	27
	.byte 71
	.byte 97
	.byte 114
	.byte 98
	.byte 97
	.byte 103
	.byte 101
	.byte 32
	.byte 99
	.byte 111
	.byte 108
	.byte 108
	.byte 101
	.byte 99
	.byte 116
	.byte 105
	.byte 111
	.byte 110
	.byte 32
	.byte 114
	.byte 101
	.byte 113
	.byte 117
	.byte 105
	.byte 114
	.byte 101
	.byte 100
	.byte 46
	.byte 0
	.align	8
	.long	0
	.long	1
#  (*entry get-heap-trap expr 1) 
	.globl	l0115
l0115:
	     addis	r3,0,ha16(l0113)
	     addi	r3,r3,lo16(l0113)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2616(r10)
	     addi	r9,0,327
	     mtspr	9,r10
	     bcctr	20,0
	.long	0
	.long	0
	.globl	l0117
	.globl	l0116
	.align	8
l0117:	.long	0
	.long	18
	.byte 82
	.byte 97
	.byte 110
	.byte 32
	.byte 111
	.byte 117
	.byte 116
	.byte 32
	.byte 111
	.byte 102
	.byte 32
	.byte 73
	.byte 68
	.byte 32
	.byte 115
	.byte 112
	.byte 97
	.byte 99
	.byte 101
	.byte 0
	.align	8
	.long	0
	.long	0
#  (*entry gtid expr 0) 
	.globl	gtid
gtid:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     addi	r11,0,0
	     addis	r10,0,ha16(_SYMVAL)
	     la	r10,lo16(_SYMVAL)(r10)
	     ld	r10,2680(r10)
	     cmpd	0,r11,r10
	     bc	4,2,l0118
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2968(r10)
	     addi	r9,0,371
	     mtspr	9,r10
	     bcctrl	20,0
	     addi	r11,0,0
	     addis	r10,0,ha16(_SYMVAL)
	     la	r10,lo16(_SYMVAL)(r10)
	     ld	r10,2680(r10)
	     cmpd	0,r11,r10
	     bc	4,2,l0118
	     addis	r3,0,ha16(l0116)
	     addi	r3,r3,lo16(l0116)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2616(r10)
	     addi	r9,0,327
	     mtspr	9,r10
	     bcctrl	20,0
l0118:	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,2680(r3)
	     or	r4,r3,r3
	     rldicr	r4,r4,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2688(r11)
	     add	r4,r4,r11
	     or	r8,r4,r4
	     ld	r11,0(r8)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r11,2680(r12)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.long	0
	.long	0
	.align	8
	.long	0
	.long	1
#  (*entry gtwrds expr 1) 
	.globl	gtwrds
gtwrds:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     std	r3,24(r1)
	     addi	r3,r3,2
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2952(r10)
	     addi	r9,0,369
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r4,24(r1)
	     addi	r11,0,249
	     rldimi	r4,r11,56,0
	     or	r9,r3,r3
	     std	r4,0(r9)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry gtconststr expr 1) 
	.globl	gtconststr
gtconststr:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     std	r3,24(r1)
	     addi	r3,r3,9
	     rldicl	r11,r3,3,61
	     addc	r11,r11,r3
	     sradi	r3,r11,3
	     std	r3,32(r1)
	     addi	r3,r3,1
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2840(r10)
	     addi	r9,0,355
	     mtspr	9,r10
	     bcctrl	20,0
	     or	r10,r3,r3
	     ld	r11,24(r1)
	     std	r11,0(r10)
	     ld	r4,32(r1)
	     rldicr	r4,r4,3,60
	     or	r8,r4,r4
	     addc	r8,r8,r3
	     addi	r11,0,0
	     std	r11,0(r8)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.globl	l0120
	.globl	l0119
	.align	8
l0120:	.long	0
	.long	30
	.byte 83
	.byte 85
	.byte 66
	.byte 83
	.byte 69
	.byte 81
	.byte 32
	.byte 99
	.byte 97
	.byte 108
	.byte 108
	.byte 101
	.byte 100
	.byte 32
	.byte 119
	.byte 105
	.byte 116
	.byte 104
	.byte 32
	.byte 97
	.byte 32
	.byte 110
	.byte 111
	.byte 110
	.byte 45
	.byte 115
	.byte 116
	.byte 114
	.byte 105
	.byte 110
	.byte 103
	.byte 0
	.align	8
	.long	0
	.long	3
#  (*entry subseq expr 3) 
	.globl	subseq
subseq:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-96(r1)
	     std	r13,64(r1)
	     std	r13,56(r1)
	     std	r13,48(r1)
	     std	r3,24(r1)
	     std	r4,32(r1)
	     std	r5,40(r1)
	     rldicl	r11,r3,8,56
	     cmpdi	0,r11,4
	     bc	12,2,l0121
	     addis	r3,0,ha16(l0119)
	     addi	r3,r3,lo16(l0119)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2616(r10)
	     addi	r9,0,327
	     mtspr	9,r10
	     bcctrl	20,0
l0121:	     ld	r11,40(r1)
	     addi	r3,r11,-1
	     or	r11,r3,r3
	     ld	r12,32(r1)
	     subf	r3,r12,r11
	     std	r3,48(r1)
	     ld	r11,24(r1)
	     rldicl	r3,r11,64,8
	     std	r3,56(r1)
	     ld	r3,48(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2976(r10)
	     addi	r9,0,372
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,64(r1)
	     ld	r4,48(r1)
	     addi	r3,0,0
	     or	r7,r3,r3
	     or	r6,r4,r4
l0122:	     cmpd	0,r7,r6
	     bc	12,1,l0123
	     ld	r11,32(r1)
	     or	r12,r7,r7
	     add	r11,r12,r11
	     or	r4,r11,r11
	     ld	r11,56(r1)
	     addi	r3,r11,8
	     lbzx	r3,r4,r3
	     or	r5,r3,r3
	     or	r4,r7,r7
	     ld	r11,64(r1)
	     addi	r3,r11,8
	     stbx	r5,r3,r4
	     addi	r4,r4,1
	     or	r7,r4,r4
	     b	l0122
l0123:	     ld	r3,64(r1)
	     addi	r11,0,4
	     rldimi	r3,r11,56,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.long	0
	.long	0
	.align	8
	.long	0
	.long	2
#  (*entry search-string-for-character expr 2) 
	.globl	l0124
l0124:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     std	r3,24(r1)
	     or	r7,r4,r4
	     rldicl	r4,r4,64,8
	     or	r9,r4,r4
	     ld	r11,0(r9)
	     rldicr	r4,r11,8,55
	     sradi	r4,r4,8
	     addi	r3,0,0
	     or	r6,r3,r3
	     or	r5,r4,r4
l0125:	     cmpd	0,r6,r5
	     bc	4,1,l0126
	     or	r3,r13,r13
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0126:	     or	r4,r6,r6
	     rldicl	r3,r7,64,8
	     addi	r3,r3,8
	     lbzx	r3,r4,r3
	     ld	r11,24(r1)
	     cmpd	0,r11,r3
	     bc	4,2,l0127
	     or	r3,r4,r4
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0127:	     addi	r4,r4,1
	     or	r6,r4,r4
	     b	l0125
	.align	8
	.long	0
	.long	2
#  (*entry unchecked-string-equal expr 2) 
	.globl	l0129
l0129:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     std	r13,40(r1)
	     rldicl	r3,r3,64,8
	     std	r3,24(r1)
	     rldicl	r4,r4,64,8
	     std	r4,32(r1)
	     or	r10,r3,r3
	     ld	r11,0(r10)
	     rldicr	r5,r11,8,55
	     sradi	r5,r5,8
	     or	r7,r5,r5
	     or	r8,r4,r4
	     ld	r11,0(r8)
	     rldicr	r6,r11,8,55
	     sradi	r6,r6,8
	     cmpd	0,r5,r6
	     bc	12,2,l0130
	     or	r3,r13,r13
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0130:	     addi	r11,0,0
	     std	r11,40(r1)
l0131:	     ld	r11,40(r1)
	     cmpd	0,r11,r7
	     bc	4,1,l0132
	     addis	r3,0,ha16(l0128)
	     addi	r3,r3,lo16(l0128)
	     ld	r3,0(r3)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0132:	     ld	r4,40(r1)
	     ld	r11,24(r1)
	     addi	r3,r11,8
	     lbzx	r3,r4,r3
	     or	r5,r3,r3
	     ld	r11,32(r1)
	     addi	r3,r11,8
	     lbzx	r3,r4,r3
	     cmpd	0,r5,r3
	     bc	12,2,l0133
	     or	r3,r13,r13
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0133:	     addi	r4,r4,1
	     std	r4,40(r1)
	     b	l0131
l0128:	.long	4261412864
	.long	116
	.align	8
	.long	0
	.long	2
#  (*entry copystringtofrom expr 2) 
	.globl	copystringtofrom
copystringtofrom:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-80(r1)
	     std	r3,48(r1)
	     rldicl	r5,r3,64,8
	     std	r5,40(r1)
	     rldicl	r6,r4,64,8
	     std	r6,32(r1)
	     or	r9,r6,r6
	     ld	r11,0(r9)
	     rldicr	r7,r11,8,55
	     sradi	r7,r7,8
	     std	r7,24(r1)
	     or	r10,r5,r5
	     ld	r11,0(r10)
	     rldicr	r3,r11,8,55
	     sradi	r3,r3,8
	     cmpd	0,r3,r7
	     bc	4,0,l0134
	     std	r3,24(r1)
l0134:	     ld	r11,24(r1)
	     addi	r3,r11,9
	     rldicl	r11,r3,3,61
	     addc	r11,r11,r3
	     sradi	r3,r11,3
	     std	r3,24(r1)
	     or	r4,r3,r3
	     addi	r3,0,0
	     or	r7,r3,r3
	     or	r6,r4,r4
l0135:	     cmpd	0,r7,r6
	     bc	12,1,l0136
	     addi	r3,r7,1
	     rldicr	r3,r3,3,60
	     or	r4,r3,r3
	     ld	r11,32(r1)
	     add	r4,r4,r11
	     or	r8,r3,r3
	     ld	r11,40(r1)
	     add	r8,r8,r11
	     or	r9,r4,r4
	     ld	r11,0(r9)
	     std	r11,0(r8)
	     addi	r5,r7,1
	     or	r7,r5,r5
	     b	l0135
l0136:	     ld	r3,48(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry cons expr 2) 
	.globl	cons
cons:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     std	r3,24(r1)
	     std	r4,32(r1)
	     addi	r3,0,2
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2952(r10)
	     addi	r9,0,369
	     mtspr	9,r10
	     bcctrl	20,0
	     or	r10,r3,r3
	     ld	r11,24(r1)
	     std	r11,0(r10)
	     or	r8,r3,r3
	     addi	r8,r8,8
	     ld	r11,32(r1)
	     std	r11,0(r8)
	     addi	r11,0,9
	     rldimi	r3,r11,56,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry interrogate expr 1) 
	.globl	interrogate
interrogate:
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2448(r11)
	     add	r3,r3,r11
	     or	r9,r3,r3
	     ld	r3,0(r9)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry modify expr 2) 
	.globl	modify
modify:
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2448(r11)
	     add	r3,r3,r11
	     or	r10,r3,r3
	     std	r4,0(r10)
	     or	r3,r4,r4
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry put expr 3) 
	.globl	put
put:
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3008(r10)
	     addi	r9,0,376
	     mtspr	9,r10
	     bcctr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry unchecked-put expr 3) 
	.globl	l0137
l0137:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-80(r1)
	     std	r13,48(r1)
	     std	r3,24(r1)
	     std	r4,32(r1)
	     std	r5,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3024(r10)
	     addi	r9,0,378
	     mtspr	9,r10
	     bcctrl	20,0
	     std	r3,48(r1)
	     or	r4,r3,r3
	     ld	r3,32(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3032(r10)
	     addi	r9,0,379
	     mtspr	9,r10
	     bcctrl	20,0
	     cmpd	0,r3,r13
	     bc	12,2,l0138
	     or	r8,r3,r3
	     rldicl	r8,r8,64,8
	     ld	r11,40(r1)
	     std	r11,8(r8)
	     b	l0139
l0138:	     ld	r4,40(r1)
	     ld	r3,32(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2984(r10)
	     addi	r9,0,373
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r4,48(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2984(r10)
	     addi	r9,0,373
	     mtspr	9,r10
	     bcctrl	20,0
	     or	r4,r3,r3
	     ld	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3040(r10)
	     addi	r9,0,380
	     mtspr	9,r10
	     bcctrl	20,0
l0139:	     ld	r3,40(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry atsoc expr 2) 
	.globl	atsoc
atsoc:
l0140:	     rldicl	r11,r4,8,56
	     cmpdi	0,r11,9
	     bc	12,2,l0141
	     or	r3,r13,r13
	     bclr	20,0
l0141:	     or	r9,r4,r4
	     rldicl	r9,r9,64,8
	     ld	r19,0(r9)
	     rldicl	r11,r19,8,56
	     cmpdi	0,r11,9
	     bc	4,2,l0142
	     or	r10,r4,r4
	     rldicl	r10,r10,64,8
	     ld	r10,0(r10)
	     rldicl	r10,r10,64,8
	     ld	r11,0(r10)
	     cmpd	0,r3,r11
	     bc	4,2,l0142
	     or	r8,r4,r4
	     rldicl	r8,r8,64,8
	     ld	r3,0(r8)
	     bclr	20,0
l0142:	     or	r9,r4,r4
	     rldicl	r9,r9,64,8
	     ld	r4,8(r9)
	     b	l0140
	.align	8
	.long	0
	.long	2
#  (*entry unchecked-setprop expr 2) 
	.globl	l0143
l0143:
	     rldicl	r3,r3,64,8
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2800(r11)
	     add	r3,r3,r11
	     or	r10,r3,r3
	     std	r4,0(r10)
	     or	r3,r4,r4
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry unchecked-prop expr 1) 
	.globl	l0144
l0144:
	     rldicl	r3,r3,64,8
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2800(r11)
	     add	r3,r3,r11
	     or	r8,r3,r3
	     ld	r3,0(r8)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry putd expr 3) 
	.globl	putd
putd:
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3048(r10)
	     addi	r9,0,381
	     mtspr	9,r10
	     bcctr	20,0
	.globl	l0150
	.globl	l0147
	.globl	l0151
	.globl	l0146
	.globl	l0152
	.globl	l0145
	.align	8
l0150:	.long	0
	.long	0
	.byte 32
	.byte 0
	.align	8
l0151:	.long	0
	.long	10
	.byte 32
	.byte 70
	.byte 117
	.byte 110
	.byte 99
	.byte 116
	.byte 105
	.byte 111
	.byte 110
	.byte 32
	.byte 58
	.byte 0
	.align	8
l0152:	.long	0
	.long	26
	.byte 66
	.byte 97
	.byte 100
	.byte 32
	.byte 112
	.byte 97
	.byte 114
	.byte 97
	.byte 109
	.byte 101
	.byte 116
	.byte 101
	.byte 114
	.byte 115
	.byte 32
	.byte 116
	.byte 111
	.byte 32
	.byte 67
	.byte 79
	.byte 68
	.byte 69
	.byte 45
	.byte 80
	.byte 85
	.byte 84
	.byte 68
	.byte 0
	.align	8
	.long	0
	.long	3
#  (*entry code-putd expr 3) 
	.globl	l0153
l0153:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     std	r3,24(r1)
	     std	r4,32(r1)
	     std	r5,40(r1)
	     rldicl	r11,r3,8,56
	     cmpdi	0,r11,254
	     bc	4,2,l0154
	     rldicl	r11,r4,8,56
	     cmpdi	0,r11,254
	     bc	4,2,l0154
	     rldicl	r11,r5,8,56
	     cmpdi	0,r11,20
	     bc	12,2,l0155
l0154:	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2584(r10)
	     addi	r9,0,323
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2552(r10)
	     addi	r9,0,319
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r3,32(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2584(r10)
	     addi	r9,0,323
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2552(r10)
	     addi	r9,0,319
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r3,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2584(r10)
	     addi	r9,0,323
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2552(r10)
	     addi	r9,0,319
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r3,0,ha16(l0145)
	     addi	r3,r3,lo16(l0145)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2616(r10)
	     addi	r9,0,327
	     mtspr	9,r10
	     bcctrl	20,0
l0155:	     addis	r3,0,ha16(l0146)
	     addi	r3,r3,lo16(l0146)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2544(r10)
	     addi	r9,0,318
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r11,24(r1)
	     rldicl	r3,r11,64,8
	     rldicr	r3,r3,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2688(r11)
	     add	r3,r3,r11
	     or	r9,r3,r3
	     ld	r3,0(r9)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2544(r10)
	     addi	r9,0,318
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r3,0,ha16(l0147)
	     addi	r3,r3,lo16(l0147)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2544(r10)
	     addi	r9,0,318
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r11,40(r1)
	     rldicl	r3,r11,64,8
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2592(r10)
	     addi	r9,0,324
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2552(r10)
	     addi	r9,0,319
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r11,40(r1)
	     rldicl	r4,r11,64,8
	     ld	r11,24(r1)
	     rldicl	r3,r11,64,8
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3056(r10)
	     addi	r9,0,382
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r11,32(r1)
	     addis	r10,0,ha16(l0148)
	     addi	r10,r10,lo16(l0148)
	     ld	r10,0(r10)
	     cmpd	0,r11,r10
	     bc	12,2,l0156
	     ld	r5,32(r1)
	     addis	r4,0,ha16(l0149)
	     addi	r4,r4,lo16(l0149)
	     ld	r4,0(r4)
	     ld	r3,24(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3016(r10)
	     addi	r9,0,377
	     mtspr	9,r10
	     bcctr	20,0
l0156:	     or	r3,r13,r13
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0149:	.long	4261412864
	.long	383
l0148:	.long	4261412864
	.long	384
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.align	8
	.long	0
	.long	1
#  (*entry fluid expr 1) 
	.globl	fluid
fluid:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     std	r13,40(r1)
	     std	r3,24(r1)
	     or	r3,r13,r13
	     ld	r11,24(r1)
	     std	r11,32(r1)
	     ld	r19,32(r1)
	     rldicl	r11,r19,8,56
	     cmpdi	0,r11,9
	     bc	4,2,l0157
	     ld	r10,32(r1)
	     rldicl	r10,r10,64,8
	     ld	r3,0(r10)
	     b	l0158
l0157:	     or	r3,r13,r13
l0158:	     std	r3,40(r1)
l0159:	     ld	r19,32(r1)
	     rldicl	r11,r19,8,56
	     cmpdi	0,r11,9
	     bc	12,2,l0160
	     or	r3,r13,r13
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0160:	     ld	r3,40(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3080(r10)
	     addi	r9,0,385
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r8,32(r1)
	     rldicl	r8,r8,64,8
	     ld	r11,8(r8)
	     std	r11,32(r1)
	     ld	r19,32(r1)
	     rldicl	r11,r19,8,56
	     cmpdi	0,r11,9
	     bc	4,2,l0161
	     ld	r9,32(r1)
	     rldicl	r9,r9,64,8
	     ld	r3,0(r9)
	     b	l0162
l0161:	     or	r3,r13,r13
l0162:	     std	r3,40(r1)
	     b	l0159
	.align	8
	.long	0
	.long	1
#  (*entry fluid1 expr 1) 
	.globl	fluid1
fluid1:
	     addis	r5,0,ha16(l0163)
	     addi	r5,r5,lo16(l0163)
	     ld	r5,0(r5)
	     addis	r4,0,ha16(l0164)
	     addi	r4,r4,lo16(l0164)
	     ld	r4,0(r4)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3016(r10)
	     addi	r9,0,377
	     mtspr	9,r10
	     bcctr	20,0
l0164:	.long	4261412864
	.long	387
l0163:	.long	4261412864
	.long	386
	.align	8
	.long	0
	.long	1
#  (*entry stderror expr 1) 
	.globl	stderror
stderror:
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2616(r10)
	     addi	r9,0,327
	     mtspr	9,r10
	     bcctr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry *define-constant expr 2) 
	.globl	l0167
l0167:
	     rldicl	r5,r3,64,8
	     rldicr	r5,r5,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2448(r11)
	     add	r5,r5,r11
	     or	r10,r5,r5
	     std	r4,0(r10)
	     addis	r5,0,ha16(l0165)
	     addi	r5,r5,lo16(l0165)
	     ld	r5,0(r5)
	     addis	r4,0,ha16(l0166)
	     addi	r4,r4,lo16(l0166)
	     ld	r4,0(r4)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3016(r10)
	     addi	r9,0,377
	     mtspr	9,r10
	     bcctr	20,0
l0166:	.long	4261412864
	.long	389
l0165:	.long	4261412864
	.long	116
	.align	8
	.long	0
	.long	1
#  (*entry plantunbound expr 1) 
	.globl	plantunbound
plantunbound:
	     or	r8,r3,r3
	     rldicr	r8,r8,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2440(r11)
	     add	r8,r8,r11
	     addi	r9,0,3120
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2440(r11)
	     add	r9,r9,r11
	     ld	r19,0(r9)
	     std	r19,0(r8)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry plantcodepointer expr 2) 
	.globl	plantcodepointer
plantcodepointer:
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2296(r11)
	     rldicl	r5,r11,64,8
	     cmpd	0,r4,r5
	     bc	4,0,l0168
	     b	l0169
l0168:	     b	l0170
	.align	8
#  (*entry plantcodepointer-normal expr 2) 
	.globl	l0170
l0170:
	     or	r8,r3,r3
	     rldicr	r8,r8,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2440(r11)
	     add	r8,r8,r11
	     std	r4,0(r8)
	     bclr	20,0
	.align	8
#  (*entry plantcodepointer-kernel expr 2) 
	.globl	l0169
l0169:
	     or	r8,r3,r3
	     rldicr	r8,r8,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2440(r11)
	     add	r8,r8,r11
	     std	r4,0(r8)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry plantlambdalink expr 1) 
	.globl	plantlambdalink
plantlambdalink:
	     or	r8,r3,r3
	     rldicr	r8,r8,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2440(r11)
	     add	r8,r8,r11
	     addi	r9,0,3128
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2440(r11)
	     add	r9,r9,r11
	     ld	r19,0(r9)
	     std	r19,0(r8)
	     bclr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry compiledcallinginterpreted expr 0) 
	.globl	compiledcallinginterpreted
compiledcallinginterpreted:
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3144(r10)
	     mtspr	9,r10
	     bcctr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry bittable expr 2) 
	.globl	bittable
bittable:
	     or	r6,r4,r4
	     rldicl	r4,r4,62,2
	     lbzx	r3,r4,r3
	     rldicl	r5,r6,32,62
	     rldicr	r5,r5,1,62
	     addi	r5,r5,-6
	     cmpdi	0,r5,0
	     bc	12,1,l0171
	     neg	r12,r5
	     srd	r3,r3,r12
	     b	l0172
l0171:	     sld	r3,r3,r5
l0172:	     rldicl	r3,r3,32,62
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry undefinedfunction expr 1) 
	.globl	undefinedfunction
undefinedfunction:
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     lwz	r10,3164(r10)
	     mtspr	9,r10
	     bcctrl	20,0
	.globl	l0174
	.globl	l0173
	.align	8
l0174:	.long	0
	.long	26
	.byte 85
	.byte 110
	.byte 100
	.byte 101
	.byte 102
	.byte 105
	.byte 110
	.byte 101
	.byte 100
	.byte 32
	.byte 102
	.byte 117
	.byte 110
	.byte 99
	.byte 116
	.byte 105
	.byte 111
	.byte 110
	.byte 32
	.byte 99
	.byte 97
	.byte 108
	.byte 108
	.byte 101
	.byte 100
	.byte 58
	.byte 32
	.byte 0
	.align	8
	.long	0
	.long	1
#  (*entry undefinedfunctionaux expr 1) 
	.globl	undefinedfunctionaux
undefinedfunctionaux:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     std	r9,24(r1)
	     addis	r3,0,ha16(l0173)
	     addi	r3,r3,lo16(l0173)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2544(r10)
	     addi	r9,0,318
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r19,24(r1)
	     rldicr	r19,r19,3,60
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2688(r11)
	     add	r19,r19,r11
	     ld	r3,0(r19)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2544(r10)
	     addi	r9,0,318
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2552(r10)
	     addi	r9,0,319
	     mtspr	9,r10
	     bcctrl	20,0
	     addi	r3,0,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2488(r10)
	     addi	r9,0,311
	     mtspr	9,r10
	     bcctrl	20,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.long	0
	.long	0
	.globl	l0176
	.globl	l0175
	.align	8
l0176:	.long	0
	.long	12
	.byte 70
	.byte 65
	.byte 84
	.byte 65
	.byte 76
	.byte 32
	.byte 69
	.byte 82
	.byte 82
	.byte 79
	.byte 82
	.byte 58
	.byte 32
	.byte 0
	.align	8
	.long	0
	.long	1
#  (*entry kernel-fatal-error expr 1) 
	.globl	l0177
l0177:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     std	r3,24(r1)
	     addis	r3,0,ha16(l0175)
	     addi	r3,r3,lo16(l0175)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2544(r10)
	     addi	r9,0,318
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r3,24(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2544(r10)
	     addi	r9,0,318
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2552(r10)
	     addi	r9,0,319
	     mtspr	9,r10
	     bcctrl	20,0
	     addi	r3,0,-1
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2488(r10)
	     addi	r9,0,311
	     mtspr	9,r10
	     bcctr	20,0
	.long	0
	.long	0
	.align	8
	.long	0
	.long	0
#  (*entry signalhaendler expr 0) 
	.globl	signalhaendler
signalhaendler:
#  (*entry _signalhaendler expr 0) 
	.globl	_signalhaendler
_signalhaendler:
	     addis	r12,0,ha16(_SYMFNC)
	     la	r17,lo16(_SYMFNC)(r12)
	     addi	r17,r17,32000
	     addis	r12,0,ha16(_SYMVAL)
	     la	r18,lo16(_SYMVAL)(r12)
	     addi	r18,r18,32000
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3168(r10)
	     addi	r9,0,396
	     mtspr	9,r10
	     bcctr	20,0
l0178:l0179:l0180:l0181:	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r3,3176(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r5,3184(r12)
	     ld	r7,40(r5)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r1,3192(r12)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r7,3200(r12)
	     addis	r7,0,ha16(_SYMVAL)
	     la	r7,lo16(_SYMVAL)(r7)
	     ld	r7,3208(r7)
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cmpd	0,r7,r13
	     bc	4,2,l0182
	     cmpdi	0,r3,2
	     bc	4,2,l0183
	     addis	r7,0,ha16(_SYMVAL)
	     la	r7,lo16(_SYMVAL)(r7)
	     ld	r7,3216(r7)
	     cmpdi	0,r7,0
	     bc	12,2,l0183
l0182:	     addi	r7,0,-17
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r7,3216(r12)
	     addi	r7,0,0
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r7,3184(r12)
	     bclr	20,0
l0183:	     addi	r6,0,0
	     or	r8,r5,r5
	     addi	r8,r8,224
	     addis	r7,0,ha16(_SYMVAL)
	     la	r7,lo16(_SYMVAL)(r7)
	     ld	r7,3224(r7)
l0184:	     addc	r9,r8,r6
	     addc	r10,r7,r6
	     ld	r19,0(r9)
	     std	r19,0(r10)
	     addi	r6,r6,4
	     cmpdi	0,r6,129
	     bc	12,0,l0184
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3168(r10)
	     addi	r9,0,396
	     mtspr	9,r10
	     bcctr	20,0
	.align	8
	.long	0
	.long	4
#  (*entry unix-profile expr 4) 
	.globl	l0185
l0185:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     std	r13,24(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_profil
	     bl	profil_stub
	     .data
	     .picsymbol_stub
profil_stub:	     .indirect_symbol	_profil
	     mflr	r0
	     bcl	20,31,profil_templab
profil_templab:	     mflr	r11
	     addis	r12,r11,ha16(profil_ptr-profil_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(profil_ptr-profil_templab)
	     lwz	r12,lo16(profil_ptr-profil_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
profil_ptr:	     .indirect_symbol	_profil
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     addi	r3,0,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry external-64-function macro 1) 
	.globl	l0188
l0188:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-64(r1)
	     or	r8,r3,r3
	     rldicl	r8,r8,64,8
	     ld	r8,8(r8)
	     rldicl	r8,r8,64,8
	     ld	r11,0(r8)
	     std	r11,32(r1)
	     or	r9,r3,r3
	     rldicl	r9,r9,64,8
	     ld	r9,8(r9)
	     rldicl	r9,r9,64,8
	     ld	r9,8(r9)
	     rldicl	r9,r9,64,8
	     ld	r11,0(r9)
	     std	r11,24(r1)
	     addis	r4,0,ha16(_SYMVAL)
	     la	r4,lo16(_SYMVAL)(r4)
	     ld	r4,3256(r4)
	     ld	r3,32(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2984(r10)
	     addi	r9,0,373
	     mtspr	9,r10
	     bcctrl	20,0
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r3,3256(r12)
	     addis	r4,0,ha16(l0186)
	     addi	r4,r4,lo16(l0186)
	     ld	r4,0(r4)
	     ld	r3,32(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3264(r10)
	     addi	r9,0,408
	     mtspr	9,r10
	     bcctrl	20,0
	     ld	r4,24(r1)
	     ld	r3,32(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,2984(r10)
	     addi	r9,0,373
	     mtspr	9,r10
	     bcctrl	20,0
	     or	r6,r3,r3
	     ld	r5,24(r1)
	     ld	r4,32(r1)
	     addis	r3,0,ha16(l0187)
	     addi	r3,r3,lo16(l0187)
	     ld	r3,0(r3)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3272(r10)
	     addi	r9,0,409
	     mtspr	9,r10
	     bcctr	20,0
l0187:	.long	4261412864
	.long	411
l0186:	.long	4261412864
	.long	412
	.align	8
	.long	0
	.long	0
#  (*entry flushstdoutputbuffer expr 0) 
	.globl	l0189
l0189:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_flushstdoutputbuffer
	     bl	flushstdoutputbuffer_stub
	     .data
	     .picsymbol_stub
flushstdoutputbuffer_stub:	     .indirect_symbol	_flushstdoutputbuffer
	     mflr	r0
	     bcl	20,31,flushstdoutputbuffer_templab
flushstdoutputbuffer_templab:	     mflr	r11
	     addis	r12,r11,ha16(flushstdoutputbuffer_ptr-flushstdoutputbuffer_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(flushstdoutputbuffer_ptr-flushstdoutputbuffer_templab)
	     lwz	r12,lo16(flushstdoutputbuffer_ptr-flushstdoutputbuffer_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
flushstdoutputbuffer_ptr:	     .indirect_symbol	_flushstdoutputbuffer
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry external_user_homedir_string expr 0) 
	.globl	l0190
l0190:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_user_homedir_string
	     bl	external_user_homedir_string_stub
	     .data
	     .picsymbol_stub
external_user_homedir_string_stub:	     .indirect_symbol	_external_user_homedir_string
	     mflr	r0
	     bcl	20,31,external_user_homedir_string_templab
external_user_homedir_string_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_user_homedir_string_ptr-external_user_homedir_string_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_user_homedir_string_ptr-external_user_homedir_string_templab)
	     lwz	r12,lo16(external_user_homedir_string_ptr-external_user_homedir_string_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_user_homedir_string_ptr:	     .indirect_symbol	_external_user_homedir_string
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry external_anyuser_homedir_string expr 1) 
	.globl	l0191
l0191:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_anyuser_homedir_string
	     bl	external_anyuser_homedir_string_stub
	     .data
	     .picsymbol_stub
external_anyuser_homedir_string_stub:	     .indirect_symbol	_external_anyuser_homedir_string
	     mflr	r0
	     bcl	20,31,external_anyuser_homedir_string_templab
external_anyuser_homedir_string_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_anyuser_homedir_string_ptr-external_anyuser_homedir_string_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_anyuser_homedir_string_ptr-external_anyuser_homedir_string_templab)
	     lwz	r12,lo16(external_anyuser_homedir_string_ptr-external_anyuser_homedir_string_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_anyuser_homedir_string_ptr:	     .indirect_symbol	_external_anyuser_homedir_string
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry alterheapsize expr 1) 
	.globl	l0192
l0192:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_alterheapsize
	     bl	alterheapsize_stub
	     .data
	     .picsymbol_stub
alterheapsize_stub:	     .indirect_symbol	_alterheapsize
	     mflr	r0
	     bcl	20,31,alterheapsize_templab
alterheapsize_templab:	     mflr	r11
	     addis	r12,r11,ha16(alterheapsize_ptr-alterheapsize_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(alterheapsize_ptr-alterheapsize_templab)
	     lwz	r12,lo16(alterheapsize_ptr-alterheapsize_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
alterheapsize_ptr:	     .indirect_symbol	_alterheapsize
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry allocatemorebps expr 1) 
	.globl	l0193
l0193:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_allocatemorebps
	     bl	allocatemorebps_stub
	     .data
	     .picsymbol_stub
allocatemorebps_stub:	     .indirect_symbol	_allocatemorebps
	     mflr	r0
	     bcl	20,31,allocatemorebps_templab
allocatemorebps_templab:	     mflr	r11
	     addis	r12,r11,ha16(allocatemorebps_ptr-allocatemorebps_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(allocatemorebps_ptr-allocatemorebps_templab)
	     lwz	r12,lo16(allocatemorebps_ptr-allocatemorebps_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
allocatemorebps_ptr:	     .indirect_symbol	_allocatemorebps
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry get_file_status expr 3) 
	.globl	l0194
l0194:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_get_file_status
	     bl	get_file_status_stub
	     .data
	     .picsymbol_stub
get_file_status_stub:	     .indirect_symbol	_get_file_status
	     mflr	r0
	     bcl	20,31,get_file_status_templab
get_file_status_templab:	     mflr	r11
	     addis	r12,r11,ha16(get_file_status_ptr-get_file_status_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(get_file_status_ptr-get_file_status_templab)
	     lwz	r12,lo16(get_file_status_ptr-get_file_status_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
get_file_status_ptr:	     .indirect_symbol	_get_file_status
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry os_startup_hook expr 2) 
	.globl	l0195
l0195:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_os_startup_hook
	     bl	os_startup_hook_stub
	     .data
	     .picsymbol_stub
os_startup_hook_stub:	     .indirect_symbol	_os_startup_hook
	     mflr	r0
	     bcl	20,31,os_startup_hook_templab
os_startup_hook_templab:	     mflr	r11
	     addis	r12,r11,ha16(os_startup_hook_ptr-os_startup_hook_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(os_startup_hook_ptr-os_startup_hook_templab)
	     lwz	r12,lo16(os_startup_hook_ptr-os_startup_hook_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
os_startup_hook_ptr:	     .indirect_symbol	_os_startup_hook
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry os_cleanup_hook expr 0) 
	.globl	l0196
l0196:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_os_cleanup_hook
	     bl	os_cleanup_hook_stub
	     .data
	     .picsymbol_stub
os_cleanup_hook_stub:	     .indirect_symbol	_os_cleanup_hook
	     mflr	r0
	     bcl	20,31,os_cleanup_hook_templab
os_cleanup_hook_templab:	     mflr	r11
	     addis	r12,r11,ha16(os_cleanup_hook_ptr-os_cleanup_hook_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(os_cleanup_hook_ptr-os_cleanup_hook_templab)
	     lwz	r12,lo16(os_cleanup_hook_ptr-os_cleanup_hook_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
os_cleanup_hook_ptr:	     .indirect_symbol	_os_cleanup_hook
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry external_alarm expr 1) 
	.globl	l0197
l0197:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_alarm
	     bl	external_alarm_stub
	     .data
	     .picsymbol_stub
external_alarm_stub:	     .indirect_symbol	_external_alarm
	     mflr	r0
	     bcl	20,31,external_alarm_templab
external_alarm_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_alarm_ptr-external_alarm_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_alarm_ptr-external_alarm_templab)
	     lwz	r12,lo16(external_alarm_ptr-external_alarm_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_alarm_ptr:	     .indirect_symbol	_external_alarm
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry external_ualarm expr 2) 
	.globl	l0198
l0198:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_ualarm
	     bl	external_ualarm_stub
	     .data
	     .picsymbol_stub
external_ualarm_stub:	     .indirect_symbol	_external_ualarm
	     mflr	r0
	     bcl	20,31,external_ualarm_templab
external_ualarm_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_ualarm_ptr-external_ualarm_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_ualarm_ptr-external_ualarm_templab)
	     lwz	r12,lo16(external_ualarm_ptr-external_ualarm_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_ualarm_ptr:	     .indirect_symbol	_external_ualarm
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry external_time expr 1) 
	.globl	l0199
l0199:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_time
	     bl	external_time_stub
	     .data
	     .picsymbol_stub
external_time_stub:	     .indirect_symbol	_external_time
	     mflr	r0
	     bcl	20,31,external_time_templab
external_time_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_time_ptr-external_time_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_time_ptr-external_time_templab)
	     lwz	r12,lo16(external_time_ptr-external_time_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_time_ptr:	     .indirect_symbol	_external_time
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry external_timc expr 1) 
	.globl	l0200
l0200:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_timc
	     bl	external_timc_stub
	     .data
	     .picsymbol_stub
external_timc_stub:	     .indirect_symbol	_external_timc
	     mflr	r0
	     bcl	20,31,external_timc_templab
external_timc_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_timc_ptr-external_timc_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_timc_ptr-external_timc_templab)
	     lwz	r12,lo16(external_timc_ptr-external_timc_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_timc_ptr:	     .indirect_symbol	_external_timc
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry external_stat expr 2) 
	.globl	l0201
l0201:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_stat
	     bl	external_stat_stub
	     .data
	     .picsymbol_stub
external_stat_stub:	     .indirect_symbol	_external_stat
	     mflr	r0
	     bcl	20,31,external_stat_templab
external_stat_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_stat_ptr-external_stat_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_stat_ptr-external_stat_templab)
	     lwz	r12,lo16(external_stat_ptr-external_stat_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_stat_ptr:	     .indirect_symbol	_external_stat
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry external_link expr 2) 
	.globl	l0202
l0202:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_link
	     bl	external_link_stub
	     .data
	     .picsymbol_stub
external_link_stub:	     .indirect_symbol	_external_link
	     mflr	r0
	     bcl	20,31,external_link_templab
external_link_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_link_ptr-external_link_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_link_ptr-external_link_templab)
	     lwz	r12,lo16(external_link_ptr-external_link_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_link_ptr:	     .indirect_symbol	_external_link
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry external_unlink expr 1) 
	.globl	l0203
l0203:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_unlink
	     bl	external_unlink_stub
	     .data
	     .picsymbol_stub
external_unlink_stub:	     .indirect_symbol	_external_unlink
	     mflr	r0
	     bcl	20,31,external_unlink_templab
external_unlink_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_unlink_ptr-external_unlink_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_unlink_ptr-external_unlink_templab)
	     lwz	r12,lo16(external_unlink_ptr-external_unlink_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_unlink_ptr:	     .indirect_symbol	_external_unlink
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry external_strlen expr 1) 
	.globl	l0204
l0204:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_strlen
	     bl	external_strlen_stub
	     .data
	     .picsymbol_stub
external_strlen_stub:	     .indirect_symbol	_external_strlen
	     mflr	r0
	     bcl	20,31,external_strlen_templab
external_strlen_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_strlen_ptr-external_strlen_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_strlen_ptr-external_strlen_templab)
	     lwz	r12,lo16(external_strlen_ptr-external_strlen_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_strlen_ptr:	     .indirect_symbol	_external_strlen
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry external_setenv expr 2) 
	.globl	l0205
l0205:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_setenv
	     bl	external_setenv_stub
	     .data
	     .picsymbol_stub
external_setenv_stub:	     .indirect_symbol	_external_setenv
	     mflr	r0
	     bcl	20,31,external_setenv_templab
external_setenv_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_setenv_ptr-external_setenv_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_setenv_ptr-external_setenv_templab)
	     lwz	r12,lo16(external_setenv_ptr-external_setenv_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_setenv_ptr:	     .indirect_symbol	_external_setenv
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry external_getenv expr 1) 
	.globl	l0206
l0206:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_getenv
	     bl	external_getenv_stub
	     .data
	     .picsymbol_stub
external_getenv_stub:	     .indirect_symbol	_external_getenv
	     mflr	r0
	     bcl	20,31,external_getenv_templab
external_getenv_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_getenv_ptr-external_getenv_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_getenv_ptr-external_getenv_templab)
	     lwz	r12,lo16(external_getenv_ptr-external_getenv_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_getenv_ptr:	     .indirect_symbol	_external_getenv
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxfloat expr 2) 
	.globl	l0207
l0207:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxfloat
	     bl	uxfloat_stub
	     .data
	     .picsymbol_stub
uxfloat_stub:	     .indirect_symbol	_uxfloat
	     mflr	r0
	     bcl	20,31,uxfloat_templab
uxfloat_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxfloat_ptr-uxfloat_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxfloat_ptr-uxfloat_templab)
	     lwz	r12,lo16(uxfloat_ptr-uxfloat_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxfloat_ptr:	     .indirect_symbol	_uxfloat
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry uxfix expr 1) 
	.globl	l0208
l0208:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxfix
	     bl	uxfix_stub
	     .data
	     .picsymbol_stub
uxfix_stub:	     .indirect_symbol	_uxfix
	     mflr	r0
	     bcl	20,31,uxfix_templab
uxfix_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxfix_ptr-uxfix_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxfix_ptr-uxfix_templab)
	     lwz	r12,lo16(uxfix_ptr-uxfix_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxfix_ptr:	     .indirect_symbol	_uxfix
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxassign expr 2) 
	.globl	l0209
l0209:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxassign
	     bl	uxassign_stub
	     .data
	     .picsymbol_stub
uxassign_stub:	     .indirect_symbol	_uxassign
	     mflr	r0
	     bcl	20,31,uxassign_templab
uxassign_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxassign_ptr-uxassign_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxassign_ptr-uxassign_templab)
	     lwz	r12,lo16(uxassign_ptr-uxassign_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxassign_ptr:	     .indirect_symbol	_uxassign
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry uxplus2 expr 3) 
	.globl	l0210
l0210:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxplus2
	     bl	uxplus2_stub
	     .data
	     .picsymbol_stub
uxplus2_stub:	     .indirect_symbol	_uxplus2
	     mflr	r0
	     bcl	20,31,uxplus2_templab
uxplus2_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxplus2_ptr-uxplus2_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxplus2_ptr-uxplus2_templab)
	     lwz	r12,lo16(uxplus2_ptr-uxplus2_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxplus2_ptr:	     .indirect_symbol	_uxplus2
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry uxdifference expr 3) 
	.globl	l0211
l0211:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxdifference
	     bl	uxdifference_stub
	     .data
	     .picsymbol_stub
uxdifference_stub:	     .indirect_symbol	_uxdifference
	     mflr	r0
	     bcl	20,31,uxdifference_templab
uxdifference_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxdifference_ptr-uxdifference_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxdifference_ptr-uxdifference_templab)
	     lwz	r12,lo16(uxdifference_ptr-uxdifference_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxdifference_ptr:	     .indirect_symbol	_uxdifference
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry uxtimes2 expr 3) 
	.globl	l0212
l0212:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxtimes2
	     bl	uxtimes2_stub
	     .data
	     .picsymbol_stub
uxtimes2_stub:	     .indirect_symbol	_uxtimes2
	     mflr	r0
	     bcl	20,31,uxtimes2_templab
uxtimes2_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxtimes2_ptr-uxtimes2_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxtimes2_ptr-uxtimes2_templab)
	     lwz	r12,lo16(uxtimes2_ptr-uxtimes2_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxtimes2_ptr:	     .indirect_symbol	_uxtimes2
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry uxquotient expr 3) 
	.globl	l0213
l0213:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxquotient
	     bl	uxquotient_stub
	     .data
	     .picsymbol_stub
uxquotient_stub:	     .indirect_symbol	_uxquotient
	     mflr	r0
	     bcl	20,31,uxquotient_templab
uxquotient_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxquotient_ptr-uxquotient_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxquotient_ptr-uxquotient_templab)
	     lwz	r12,lo16(uxquotient_ptr-uxquotient_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxquotient_ptr:	     .indirect_symbol	_uxquotient
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	4
#  (*entry uxgreaterp expr 4) 
	.globl	l0214
l0214:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxgreaterp
	     bl	uxgreaterp_stub
	     .data
	     .picsymbol_stub
uxgreaterp_stub:	     .indirect_symbol	_uxgreaterp
	     mflr	r0
	     bcl	20,31,uxgreaterp_templab
uxgreaterp_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxgreaterp_ptr-uxgreaterp_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxgreaterp_ptr-uxgreaterp_templab)
	     lwz	r12,lo16(uxgreaterp_ptr-uxgreaterp_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxgreaterp_ptr:	     .indirect_symbol	_uxgreaterp
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	4
#  (*entry uxlessp expr 4) 
	.globl	l0215
l0215:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxlessp
	     bl	uxlessp_stub
	     .data
	     .picsymbol_stub
uxlessp_stub:	     .indirect_symbol	_uxlessp
	     mflr	r0
	     bcl	20,31,uxlessp_templab
uxlessp_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxlessp_ptr-uxlessp_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxlessp_ptr-uxlessp_templab)
	     lwz	r12,lo16(uxlessp_ptr-uxlessp_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxlessp_ptr:	     .indirect_symbol	_uxlessp
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry uxwritefloat expr 3) 
	.globl	l0216
l0216:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxwritefloat
	     bl	uxwritefloat_stub
	     .data
	     .picsymbol_stub
uxwritefloat_stub:	     .indirect_symbol	_uxwritefloat
	     mflr	r0
	     bcl	20,31,uxwritefloat_templab
uxwritefloat_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxwritefloat_ptr-uxwritefloat_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxwritefloat_ptr-uxwritefloat_templab)
	     lwz	r12,lo16(uxwritefloat_ptr-uxwritefloat_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxwritefloat_ptr:	     .indirect_symbol	_uxwritefloat
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxdoubletofloat expr 2) 
	.globl	l0217
l0217:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxdoubletofloat
	     bl	uxdoubletofloat_stub
	     .data
	     .picsymbol_stub
uxdoubletofloat_stub:	     .indirect_symbol	_uxdoubletofloat
	     mflr	r0
	     bcl	20,31,uxdoubletofloat_templab
uxdoubletofloat_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxdoubletofloat_ptr-uxdoubletofloat_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxdoubletofloat_ptr-uxdoubletofloat_templab)
	     lwz	r12,lo16(uxdoubletofloat_ptr-uxdoubletofloat_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxdoubletofloat_ptr:	     .indirect_symbol	_uxdoubletofloat
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxfloattodouble expr 2) 
	.globl	l0218
l0218:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxfloattodouble
	     bl	uxfloattodouble_stub
	     .data
	     .picsymbol_stub
uxfloattodouble_stub:	     .indirect_symbol	_uxfloattodouble
	     mflr	r0
	     bcl	20,31,uxfloattodouble_templab
uxfloattodouble_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxfloattodouble_ptr-uxfloattodouble_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxfloattodouble_ptr-uxfloattodouble_templab)
	     lwz	r12,lo16(uxfloattodouble_ptr-uxfloattodouble_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxfloattodouble_ptr:	     .indirect_symbol	_uxfloattodouble
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxsin expr 2) 
	.globl	l0219
l0219:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxsin
	     bl	uxsin_stub
	     .data
	     .picsymbol_stub
uxsin_stub:	     .indirect_symbol	_uxsin
	     mflr	r0
	     bcl	20,31,uxsin_templab
uxsin_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxsin_ptr-uxsin_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxsin_ptr-uxsin_templab)
	     lwz	r12,lo16(uxsin_ptr-uxsin_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxsin_ptr:	     .indirect_symbol	_uxsin
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxcos expr 2) 
	.globl	l0220
l0220:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxcos
	     bl	uxcos_stub
	     .data
	     .picsymbol_stub
uxcos_stub:	     .indirect_symbol	_uxcos
	     mflr	r0
	     bcl	20,31,uxcos_templab
uxcos_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxcos_ptr-uxcos_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxcos_ptr-uxcos_templab)
	     lwz	r12,lo16(uxcos_ptr-uxcos_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxcos_ptr:	     .indirect_symbol	_uxcos
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxtan expr 2) 
	.globl	l0221
l0221:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxtan
	     bl	uxtan_stub
	     .data
	     .picsymbol_stub
uxtan_stub:	     .indirect_symbol	_uxtan
	     mflr	r0
	     bcl	20,31,uxtan_templab
uxtan_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxtan_ptr-uxtan_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxtan_ptr-uxtan_templab)
	     lwz	r12,lo16(uxtan_ptr-uxtan_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxtan_ptr:	     .indirect_symbol	_uxtan
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxasin expr 2) 
	.globl	l0222
l0222:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxasin
	     bl	uxasin_stub
	     .data
	     .picsymbol_stub
uxasin_stub:	     .indirect_symbol	_uxasin
	     mflr	r0
	     bcl	20,31,uxasin_templab
uxasin_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxasin_ptr-uxasin_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxasin_ptr-uxasin_templab)
	     lwz	r12,lo16(uxasin_ptr-uxasin_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxasin_ptr:	     .indirect_symbol	_uxasin
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxacos expr 2) 
	.globl	l0223
l0223:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxacos
	     bl	uxacos_stub
	     .data
	     .picsymbol_stub
uxacos_stub:	     .indirect_symbol	_uxacos
	     mflr	r0
	     bcl	20,31,uxacos_templab
uxacos_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxacos_ptr-uxacos_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxacos_ptr-uxacos_templab)
	     lwz	r12,lo16(uxacos_ptr-uxacos_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxacos_ptr:	     .indirect_symbol	_uxacos
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxatan expr 2) 
	.globl	l0224
l0224:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxatan
	     bl	uxatan_stub
	     .data
	     .picsymbol_stub
uxatan_stub:	     .indirect_symbol	_uxatan
	     mflr	r0
	     bcl	20,31,uxatan_templab
uxatan_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxatan_ptr-uxatan_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxatan_ptr-uxatan_templab)
	     lwz	r12,lo16(uxatan_ptr-uxatan_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxatan_ptr:	     .indirect_symbol	_uxatan
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxsqrt expr 2) 
	.globl	l0225
l0225:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxsqrt
	     bl	uxsqrt_stub
	     .data
	     .picsymbol_stub
uxsqrt_stub:	     .indirect_symbol	_uxsqrt
	     mflr	r0
	     bcl	20,31,uxsqrt_templab
uxsqrt_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxsqrt_ptr-uxsqrt_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxsqrt_ptr-uxsqrt_templab)
	     lwz	r12,lo16(uxsqrt_ptr-uxsqrt_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxsqrt_ptr:	     .indirect_symbol	_uxsqrt
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxexp expr 2) 
	.globl	l0226
l0226:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxexp
	     bl	uxexp_stub
	     .data
	     .picsymbol_stub
uxexp_stub:	     .indirect_symbol	_uxexp
	     mflr	r0
	     bcl	20,31,uxexp_templab
uxexp_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxexp_ptr-uxexp_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxexp_ptr-uxexp_templab)
	     lwz	r12,lo16(uxexp_ptr-uxexp_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxexp_ptr:	     .indirect_symbol	_uxexp
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry uxlog expr 2) 
	.globl	l0227
l0227:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxlog
	     bl	uxlog_stub
	     .data
	     .picsymbol_stub
uxlog_stub:	     .indirect_symbol	_uxlog
	     mflr	r0
	     bcl	20,31,uxlog_templab
uxlog_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxlog_ptr-uxlog_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxlog_ptr-uxlog_templab)
	     lwz	r12,lo16(uxlog_ptr-uxlog_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxlog_ptr:	     .indirect_symbol	_uxlog
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry uxatan2 expr 3) 
	.globl	l0228
l0228:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_uxatan2
	     bl	uxatan2_stub
	     .data
	     .picsymbol_stub
uxatan2_stub:	     .indirect_symbol	_uxatan2
	     mflr	r0
	     bcl	20,31,uxatan2_templab
uxatan2_templab:	     mflr	r11
	     addis	r12,r11,ha16(uxatan2_ptr-uxatan2_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(uxatan2_ptr-uxatan2_templab)
	     lwz	r12,lo16(uxatan2_ptr-uxatan2_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
uxatan2_ptr:	     .indirect_symbol	_uxatan2
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry external_pwd expr 0) 
	.globl	l0229
l0229:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_pwd
	     bl	external_pwd_stub
	     .data
	     .picsymbol_stub
external_pwd_stub:	     .indirect_symbol	_external_pwd
	     mflr	r0
	     bcl	20,31,external_pwd_templab
external_pwd_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_pwd_ptr-external_pwd_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_pwd_ptr-external_pwd_templab)
	     lwz	r12,lo16(external_pwd_ptr-external_pwd_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_pwd_ptr:	     .indirect_symbol	_external_pwd
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry psl_sigset expr 2) 
	.globl	l0230
l0230:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_psl_sigset
	     bl	psl_sigset_stub
	     .data
	     .picsymbol_stub
psl_sigset_stub:	     .indirect_symbol	_psl_sigset
	     mflr	r0
	     bcl	20,31,psl_sigset_templab
psl_sigset_templab:	     mflr	r11
	     addis	r12,r11,ha16(psl_sigset_ptr-psl_sigset_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(psl_sigset_ptr-psl_sigset_templab)
	     lwz	r12,lo16(psl_sigset_ptr-psl_sigset_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
psl_sigset_ptr:	     .indirect_symbol	_psl_sigset
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry sigrelse expr 2) 
	.globl	l0231
l0231:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_sigrelse
	     bl	sigrelse_stub
	     .data
	     .picsymbol_stub
sigrelse_stub:	     .indirect_symbol	_sigrelse
	     mflr	r0
	     bcl	20,31,sigrelse_templab
sigrelse_templab:	     mflr	r11
	     addis	r12,r11,ha16(sigrelse_ptr-sigrelse_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(sigrelse_ptr-sigrelse_templab)
	     lwz	r12,lo16(sigrelse_ptr-sigrelse_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
sigrelse_ptr:	     .indirect_symbol	_sigrelse
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	4
#  (*entry unexec expr 4) 
	.globl	l0232
l0232:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_unexec
	     bl	unexec_stub
	     .data
	     .picsymbol_stub
unexec_stub:	     .indirect_symbol	_unexec
	     mflr	r0
	     bcl	20,31,unexec_templab
unexec_templab:	     mflr	r11
	     addis	r12,r11,ha16(unexec_ptr-unexec_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(unexec_ptr-unexec_templab)
	     lwz	r12,lo16(unexec_ptr-unexec_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
unexec_ptr:	     .indirect_symbol	_unexec
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry unixputc expr 1) 
	.globl	l0233
l0233:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_unixputc
	     bl	unixputc_stub
	     .data
	     .picsymbol_stub
unixputc_stub:	     .indirect_symbol	_unixputc
	     mflr	r0
	     bcl	20,31,unixputc_templab
unixputc_templab:	     mflr	r11
	     addis	r12,r11,ha16(unixputc_ptr-unixputc_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(unixputc_ptr-unixputc_templab)
	     lwz	r12,lo16(unixputc_ptr-unixputc_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
unixputc_ptr:	     .indirect_symbol	_unixputc
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry unixputs expr 1) 
	.globl	l0234
l0234:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_unixputs
	     bl	unixputs_stub
	     .data
	     .picsymbol_stub
unixputs_stub:	     .indirect_symbol	_unixputs
	     mflr	r0
	     bcl	20,31,unixputs_templab
unixputs_templab:	     mflr	r11
	     addis	r12,r11,ha16(unixputs_ptr-unixputs_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(unixputs_ptr-unixputs_templab)
	     lwz	r12,lo16(unixputs_ptr-unixputs_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
unixputs_ptr:	     .indirect_symbol	_unixputs
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry unixputn expr 1) 
	.globl	l0235
l0235:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_unixputn
	     bl	unixputn_stub
	     .data
	     .picsymbol_stub
unixputn_stub:	     .indirect_symbol	_unixputn
	     mflr	r0
	     bcl	20,31,unixputn_templab
unixputn_templab:	     mflr	r11
	     addis	r12,r11,ha16(unixputn_ptr-unixputn_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(unixputn_ptr-unixputn_templab)
	     lwz	r12,lo16(unixputn_ptr-unixputn_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
unixputn_ptr:	     .indirect_symbol	_unixputn
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry unixcleario expr 0) 
	.globl	l0236
l0236:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_unixcleario
	     bl	unixcleario_stub
	     .data
	     .picsymbol_stub
unixcleario_stub:	     .indirect_symbol	_unixcleario
	     mflr	r0
	     bcl	20,31,unixcleario_templab
unixcleario_templab:	     mflr	r11
	     addis	r12,r11,ha16(unixcleario_ptr-unixcleario_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(unixcleario_ptr-unixcleario_templab)
	     lwz	r12,lo16(unixcleario_ptr-unixcleario_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
unixcleario_ptr:	     .indirect_symbol	_unixcleario
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry expand_file_name expr 1) 
	.globl	l0237
l0237:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_expand_file_name
	     bl	expand_file_name_stub
	     .data
	     .picsymbol_stub
expand_file_name_stub:	     .indirect_symbol	_expand_file_name
	     mflr	r0
	     bcl	20,31,expand_file_name_templab
expand_file_name_templab:	     mflr	r11
	     addis	r12,r11,ha16(expand_file_name_ptr-expand_file_name_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(expand_file_name_ptr-expand_file_name_templab)
	     lwz	r12,lo16(expand_file_name_ptr-expand_file_name_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
expand_file_name_ptr:	     .indirect_symbol	_expand_file_name
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry unixopen expr 2) 
	.globl	l0238
l0238:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_unixopen
	     bl	unixopen_stub
	     .data
	     .picsymbol_stub
unixopen_stub:	     .indirect_symbol	_unixopen
	     mflr	r0
	     bcl	20,31,unixopen_templab
unixopen_templab:	     mflr	r11
	     addis	r12,r11,ha16(unixopen_ptr-unixopen_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(unixopen_ptr-unixopen_templab)
	     lwz	r12,lo16(unixopen_ptr-unixopen_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
unixopen_ptr:	     .indirect_symbol	_unixopen
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry unixcd expr 1) 
	.globl	l0239
l0239:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_unixcd
	     bl	unixcd_stub
	     .data
	     .picsymbol_stub
unixcd_stub:	     .indirect_symbol	_unixcd
	     mflr	r0
	     bcl	20,31,unixcd_templab
unixcd_templab:	     mflr	r11
	     addis	r12,r11,ha16(unixcd_ptr-unixcd_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(unixcd_ptr-unixcd_templab)
	     lwz	r12,lo16(unixcd_ptr-unixcd_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
unixcd_ptr:	     .indirect_symbol	_unixcd
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry ctime expr 1) 
	.globl	l0240
l0240:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_ctime
	     bl	ctime_stub
	     .data
	     .picsymbol_stub
ctime_stub:	     .indirect_symbol	_ctime
	     mflr	r0
	     bcl	20,31,ctime_templab
ctime_templab:	     mflr	r11
	     addis	r12,r11,ha16(ctime_ptr-ctime_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(ctime_ptr-ctime_templab)
	     lwz	r12,lo16(ctime_ptr-ctime_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
ctime_ptr:	     .indirect_symbol	_ctime
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry external_system expr 1) 
	.globl	l0241
l0241:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_system
	     bl	external_system_stub
	     .data
	     .picsymbol_stub
external_system_stub:	     .indirect_symbol	_external_system
	     mflr	r0
	     bcl	20,31,external_system_templab
external_system_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_system_ptr-external_system_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_system_ptr-external_system_templab)
	     lwz	r12,lo16(external_system_ptr-external_system_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_system_ptr:	     .indirect_symbol	_external_system
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry external_exit expr 1) 
	.globl	l0242
l0242:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_external_exit
	     bl	external_exit_stub
	     .data
	     .picsymbol_stub
external_exit_stub:	     .indirect_symbol	_external_exit
	     mflr	r0
	     bcl	20,31,external_exit_templab
external_exit_templab:	     mflr	r11
	     addis	r12,r11,ha16(external_exit_ptr-external_exit_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(external_exit_ptr-external_exit_templab)
	     lwz	r12,lo16(external_exit_ptr-external_exit_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
external_exit_ptr:	     .indirect_symbol	_external_exit
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry fopen expr 2) 
	.globl	l0243
l0243:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_fopen
	     bl	fopen_stub
	     .data
	     .picsymbol_stub
fopen_stub:	     .indirect_symbol	_fopen
	     mflr	r0
	     bcl	20,31,fopen_templab
fopen_templab:	     mflr	r11
	     addis	r12,r11,ha16(fopen_ptr-fopen_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(fopen_ptr-fopen_templab)
	     lwz	r12,lo16(fopen_ptr-fopen_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
fopen_ptr:	     .indirect_symbol	_fopen
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry fclose expr 1) 
	.globl	l0244
l0244:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_fclose
	     bl	fclose_stub
	     .data
	     .picsymbol_stub
fclose_stub:	     .indirect_symbol	_fclose
	     mflr	r0
	     bcl	20,31,fclose_templab
fclose_templab:	     mflr	r11
	     addis	r12,r11,ha16(fclose_ptr-fclose_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(fclose_ptr-fclose_templab)
	     lwz	r12,lo16(fclose_ptr-fclose_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
fclose_ptr:	     .indirect_symbol	_fclose
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	4
#  (*entry fread expr 4) 
	.globl	l0245
l0245:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_fread
	     bl	fread_stub
	     .data
	     .picsymbol_stub
fread_stub:	     .indirect_symbol	_fread
	     mflr	r0
	     bcl	20,31,fread_templab
fread_templab:	     mflr	r11
	     addis	r12,r11,ha16(fread_ptr-fread_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(fread_ptr-fread_templab)
	     lwz	r12,lo16(fread_ptr-fread_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
fread_ptr:	     .indirect_symbol	_fread
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry fputc expr 2) 
	.globl	l0246
l0246:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_fputc
	     bl	fputc_stub
	     .data
	     .picsymbol_stub
fputc_stub:	     .indirect_symbol	_fputc
	     mflr	r0
	     bcl	20,31,fputc_templab
fputc_templab:	     mflr	r11
	     addis	r12,r11,ha16(fputc_ptr-fputc_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(fputc_ptr-fputc_templab)
	     lwz	r12,lo16(fputc_ptr-fputc_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
fputc_ptr:	     .indirect_symbol	_fputc
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry fgetc expr 1) 
	.globl	l0247
l0247:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_fgetc
	     bl	fgetc_stub
	     .data
	     .picsymbol_stub
fgetc_stub:	     .indirect_symbol	_fgetc
	     mflr	r0
	     bcl	20,31,fgetc_templab
fgetc_templab:	     mflr	r11
	     addis	r12,r11,ha16(fgetc_ptr-fgetc_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(fgetc_ptr-fgetc_templab)
	     lwz	r12,lo16(fgetc_ptr-fgetc_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
fgetc_ptr:	     .indirect_symbol	_fgetc
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry fgets expr 3) 
	.globl	l0248
l0248:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_fgets
	     bl	fgets_stub
	     .data
	     .picsymbol_stub
fgets_stub:	     .indirect_symbol	_fgets
	     mflr	r0
	     bcl	20,31,fgets_templab
fgets_templab:	     mflr	r11
	     addis	r12,r11,ha16(fgets_ptr-fgets_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(fgets_ptr-fgets_templab)
	     lwz	r12,lo16(fgets_ptr-fgets_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
fgets_ptr:	     .indirect_symbol	_fgets
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	4
#  (*entry fwrite expr 4) 
	.globl	l0249
l0249:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_fwrite
	     bl	fwrite_stub
	     .data
	     .picsymbol_stub
fwrite_stub:	     .indirect_symbol	_fwrite
	     mflr	r0
	     bcl	20,31,fwrite_templab
fwrite_templab:	     mflr	r11
	     addis	r12,r11,ha16(fwrite_ptr-fwrite_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(fwrite_ptr-fwrite_templab)
	     lwz	r12,lo16(fwrite_ptr-fwrite_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
fwrite_ptr:	     .indirect_symbol	_fwrite
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry fflush expr 1) 
	.globl	l0250
l0250:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_fflush
	     bl	fflush_stub
	     .data
	     .picsymbol_stub
fflush_stub:	     .indirect_symbol	_fflush
	     mflr	r0
	     bcl	20,31,fflush_templab
fflush_templab:	     mflr	r11
	     addis	r12,r11,ha16(fflush_ptr-fflush_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(fflush_ptr-fflush_templab)
	     lwz	r12,lo16(fflush_ptr-fflush_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
fflush_ptr:	     .indirect_symbol	_fflush
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry fseek expr 3) 
	.globl	l0251
l0251:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_fseek
	     bl	fseek_stub
	     .data
	     .picsymbol_stub
fseek_stub:	     .indirect_symbol	_fseek
	     mflr	r0
	     bcl	20,31,fseek_templab
fseek_templab:	     mflr	r11
	     addis	r12,r11,ha16(fseek_ptr-fseek_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(fseek_ptr-fseek_templab)
	     lwz	r12,lo16(fseek_ptr-fseek_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
fseek_ptr:	     .indirect_symbol	_fseek
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry clearerr expr 1) 
	.globl	l0252
l0252:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_clearerr
	     bl	clearerr_stub
	     .data
	     .picsymbol_stub
clearerr_stub:	     .indirect_symbol	_clearerr
	     mflr	r0
	     bcl	20,31,clearerr_templab
clearerr_templab:	     mflr	r11
	     addis	r12,r11,ha16(clearerr_ptr-clearerr_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(clearerr_ptr-clearerr_templab)
	     lwz	r12,lo16(clearerr_ptr-clearerr_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
clearerr_ptr:	     .indirect_symbol	_clearerr
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry getw expr 1) 
	.globl	l0253
l0253:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_getw
	     bl	getw_stub
	     .data
	     .picsymbol_stub
getw_stub:	     .indirect_symbol	_getw
	     mflr	r0
	     bcl	20,31,getw_templab
getw_templab:	     mflr	r11
	     addis	r12,r11,ha16(getw_ptr-getw_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(getw_ptr-getw_templab)
	     lwz	r12,lo16(getw_ptr-getw_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
getw_ptr:	     .indirect_symbol	_getw
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry xgetw expr 1) 
	.globl	xgetw
xgetw:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-80(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_xgetw
	     bl	xgetw_stub
	     .data
	     .picsymbol_stub
xgetw_stub:	     .indirect_symbol	_xgetw
	     mflr	r0
	     bcl	20,31,xgetw_templab
xgetw_templab:	     mflr	r11
	     addis	r12,r11,ha16(xgetw_ptr-xgetw_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(xgetw_ptr-xgetw_templab)
	     lwz	r12,lo16(xgetw_ptr-xgetw_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
xgetw_ptr:	     .indirect_symbol	_xgetw
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     or	r2,r3,r3
	     or	r3,r4,r4
	     rldimi	r3,r2,32,0
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry putw expr 2) 
	.globl	l0254
l0254:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_putw
	     bl	putw_stub
	     .data
	     .picsymbol_stub
putw_stub:	     .indirect_symbol	_putw
	     mflr	r0
	     bcl	20,31,putw_templab
putw_templab:	     mflr	r11
	     addis	r12,r11,ha16(putw_ptr-putw_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(putw_ptr-putw_templab)
	     lwz	r12,lo16(putw_ptr-putw_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
putw_ptr:	     .indirect_symbol	_putw
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry signal expr 2) 
	.globl	l0255
l0255:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_signal
	     bl	signal_stub
	     .data
	     .picsymbol_stub
signal_stub:	     .indirect_symbol	_signal
	     mflr	r0
	     bcl	20,31,signal_templab
signal_templab:	     mflr	r11
	     addis	r12,r11,ha16(signal_ptr-signal_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(signal_ptr-signal_templab)
	     lwz	r12,lo16(signal_ptr-signal_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
signal_ptr:	     .indirect_symbol	_signal
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry sleep expr 1) 
	.globl	l0256
l0256:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_sleep
	     bl	sleep_stub
	     .data
	     .picsymbol_stub
sleep_stub:	     .indirect_symbol	_sleep
	     mflr	r0
	     bcl	20,31,sleep_templab
sleep_templab:	     mflr	r11
	     addis	r12,r11,ha16(sleep_ptr-sleep_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(sleep_ptr-sleep_templab)
	     lwz	r12,lo16(sleep_ptr-sleep_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
sleep_ptr:	     .indirect_symbol	_sleep
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry setjmp expr 1) 
	.globl	l0257
l0257:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_setjmp
	     bl	setjmp_stub
	     .data
	     .picsymbol_stub
setjmp_stub:	     .indirect_symbol	_setjmp
	     mflr	r0
	     bcl	20,31,setjmp_templab
setjmp_templab:	     mflr	r11
	     addis	r12,r11,ha16(setjmp_ptr-setjmp_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(setjmp_ptr-setjmp_templab)
	     lwz	r12,lo16(setjmp_ptr-setjmp_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
setjmp_ptr:	     .indirect_symbol	_setjmp
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry longjmp expr 2) 
	.globl	l0258
l0258:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_longjmp
	     bl	longjmp_stub
	     .data
	     .picsymbol_stub
longjmp_stub:	     .indirect_symbol	_longjmp
	     mflr	r0
	     bcl	20,31,longjmp_templab
longjmp_templab:	     mflr	r11
	     addis	r12,r11,ha16(longjmp_ptr-longjmp_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(longjmp_ptr-longjmp_templab)
	     lwz	r12,lo16(longjmp_ptr-longjmp_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
longjmp_ptr:	     .indirect_symbol	_longjmp
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry fork expr 0) 
	.globl	l0259
l0259:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_fork
	     bl	fork_stub
	     .data
	     .picsymbol_stub
fork_stub:	     .indirect_symbol	_fork
	     mflr	r0
	     bcl	20,31,fork_templab
fork_templab:	     mflr	r11
	     addis	r12,r11,ha16(fork_ptr-fork_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(fork_ptr-fork_templab)
	     lwz	r12,lo16(fork_ptr-fork_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
fork_ptr:	     .indirect_symbol	_fork
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry wait expr 1) 
	.globl	l0260
l0260:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_wait
	     bl	wait_stub
	     .data
	     .picsymbol_stub
wait_stub:	     .indirect_symbol	_wait
	     mflr	r0
	     bcl	20,31,wait_templab
wait_templab:	     mflr	r11
	     addis	r12,r11,ha16(wait_ptr-wait_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(wait_ptr-wait_templab)
	     lwz	r12,lo16(wait_ptr-wait_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
wait_ptr:	     .indirect_symbol	_wait
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry datetag expr 0) 
	.globl	l0261
l0261:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_datetag
	     bl	datetag_stub
	     .data
	     .picsymbol_stub
datetag_stub:	     .indirect_symbol	_datetag
	     mflr	r0
	     bcl	20,31,datetag_templab
datetag_templab:	     mflr	r11
	     addis	r12,r11,ha16(datetag_ptr-datetag_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(datetag_ptr-datetag_templab)
	     lwz	r12,lo16(datetag_ptr-datetag_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
datetag_ptr:	     .indirect_symbol	_datetag
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry setlinebuf expr 1) 
	.globl	l0263
l0263:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     addis	r9,0,ha16(_SYMVAL)
	     la	r9,lo16(_SYMVAL)(r9)
	     ld	r9,3800(r9)
	     or	r19,r14,r14
	     addi	r8,r19,16
	     cmpd	0,r8,r16
	     or	r14,r8,r8
	     bc	4,1,l0264
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3808(r10)
	     addi	r9,0,476
	     mtspr	9,r10
	     bcctrl	20,0
l0264:	     std	r9,16(r19)
	     addis	r11,0,ha16(l0262)
	     addi	r11,r11,lo16(l0262)
	     ld	r11,0(r11)
	     std	r11,8(r19)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r3,3800(r12)
	     addis	r3,0,ha16(_SYMVAL)
	     la	r3,lo16(_SYMVAL)(r3)
	     ld	r3,3800(r3)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_setlinebuf
	     bl	setlinebuf_stub
	     .data
	     .picsymbol_stub
setlinebuf_stub:	     .indirect_symbol	_setlinebuf
	     mflr	r0
	     bcl	20,31,setlinebuf_templab
setlinebuf_templab:	     mflr	r11
	     addis	r12,r11,ha16(setlinebuf_ptr-setlinebuf_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(setlinebuf_ptr-setlinebuf_templab)
	     lwz	r12,lo16(setlinebuf_ptr-setlinebuf_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
setlinebuf_ptr:	     .indirect_symbol	_setlinebuf
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     addic	r19,r14,0
	     ld	r9,0(r19)
	     addic	r8,r14,-16
	     cmpd	0,r8,r15
	     or	r14,r8,r8
	     bc	4,0,l0265
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3816(r10)
	     addi	r9,0,477
	     mtspr	9,r10
	     bcctrl	20,0
l0265:	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r9,3800(r12)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0262:	.long	4261412864
	.long	475
	.align	8
	.long	0
	.long	0
#  (*entry getpid expr 0) 
	.globl	l0266
l0266:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_getpid
	     bl	getpid_stub
	     .data
	     .picsymbol_stub
getpid_stub:	     .indirect_symbol	_getpid
	     mflr	r0
	     bcl	20,31,getpid_templab
getpid_templab:	     mflr	r11
	     addis	r12,r11,ha16(getpid_ptr-getpid_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(getpid_ptr-getpid_templab)
	     lwz	r12,lo16(getpid_ptr-getpid_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
getpid_ptr:	     .indirect_symbol	_getpid
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry unixsocketopen expr 2) 
	.globl	l0267
l0267:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_unixsocketopen
	     bl	unixsocketopen_stub
	     .data
	     .picsymbol_stub
unixsocketopen_stub:	     .indirect_symbol	_unixsocketopen
	     mflr	r0
	     bcl	20,31,unixsocketopen_templab
unixsocketopen_templab:	     mflr	r11
	     addis	r12,r11,ha16(unixsocketopen_ptr-unixsocketopen_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(unixsocketopen_ptr-unixsocketopen_templab)
	     lwz	r12,lo16(unixsocketopen_ptr-unixsocketopen_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
unixsocketopen_ptr:	     .indirect_symbol	_unixsocketopen
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry getsocket expr 3) 
	.globl	l0268
l0268:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_getsocket
	     bl	getsocket_stub
	     .data
	     .picsymbol_stub
getsocket_stub:	     .indirect_symbol	_getsocket
	     mflr	r0
	     bcl	20,31,getsocket_templab
getsocket_templab:	     mflr	r11
	     addis	r12,r11,ha16(getsocket_ptr-getsocket_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(getsocket_ptr-getsocket_templab)
	     lwz	r12,lo16(getsocket_ptr-getsocket_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
getsocket_ptr:	     .indirect_symbol	_getsocket
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry writesocket expr 3) 
	.globl	l0269
l0269:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_writesocket
	     bl	writesocket_stub
	     .data
	     .picsymbol_stub
writesocket_stub:	     .indirect_symbol	_writesocket
	     mflr	r0
	     bcl	20,31,writesocket_templab
writesocket_templab:	     mflr	r11
	     addis	r12,r11,ha16(writesocket_ptr-writesocket_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(writesocket_ptr-writesocket_templab)
	     lwz	r12,lo16(writesocket_ptr-writesocket_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
writesocket_ptr:	     .indirect_symbol	_writesocket
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry unixclosesocket expr 1) 
	.globl	l0270
l0270:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_unixclosesocket
	     bl	unixclosesocket_stub
	     .data
	     .picsymbol_stub
unixclosesocket_stub:	     .indirect_symbol	_unixclosesocket
	     mflr	r0
	     bcl	20,31,unixclosesocket_templab
unixclosesocket_templab:	     mflr	r11
	     addis	r12,r11,ha16(unixclosesocket_ptr-unixclosesocket_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(unixclosesocket_ptr-unixclosesocket_templab)
	     lwz	r12,lo16(unixclosesocket_ptr-unixclosesocket_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
unixclosesocket_ptr:	     .indirect_symbol	_unixclosesocket
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	2
#  (*entry popen expr 2) 
	.globl	l0271
l0271:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_popen
	     bl	popen_stub
	     .data
	     .picsymbol_stub
popen_stub:	     .indirect_symbol	_popen
	     mflr	r0
	     bcl	20,31,popen_templab
popen_templab:	     mflr	r11
	     addis	r12,r11,ha16(popen_ptr-popen_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(popen_ptr-popen_templab)
	     lwz	r12,lo16(popen_ptr-popen_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
popen_ptr:	     .indirect_symbol	_popen
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry pclose expr 1) 
	.globl	l0272
l0272:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_pclose
	     bl	pclose_stub
	     .data
	     .picsymbol_stub
pclose_stub:	     .indirect_symbol	_pclose
	     mflr	r0
	     bcl	20,31,pclose_templab
pclose_templab:	     mflr	r11
	     addis	r12,r11,ha16(pclose_ptr-pclose_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(pclose_ptr-pclose_templab)
	     lwz	r12,lo16(pclose_ptr-pclose_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
pclose_ptr:	     .indirect_symbol	_pclose
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry shmctl expr 3) 
	.globl	l0273
l0273:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_shmctl
	     bl	shmctl_stub
	     .data
	     .picsymbol_stub
shmctl_stub:	     .indirect_symbol	_shmctl
	     mflr	r0
	     bcl	20,31,shmctl_templab
shmctl_templab:	     mflr	r11
	     addis	r12,r11,ha16(shmctl_ptr-shmctl_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(shmctl_ptr-shmctl_templab)
	     lwz	r12,lo16(shmctl_ptr-shmctl_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
shmctl_ptr:	     .indirect_symbol	_shmctl
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry shmget expr 3) 
	.globl	l0274
l0274:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_shmget
	     bl	shmget_stub
	     .data
	     .picsymbol_stub
shmget_stub:	     .indirect_symbol	_shmget
	     mflr	r0
	     bcl	20,31,shmget_templab
shmget_templab:	     mflr	r11
	     addis	r12,r11,ha16(shmget_ptr-shmget_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(shmget_ptr-shmget_templab)
	     lwz	r12,lo16(shmget_ptr-shmget_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
shmget_ptr:	     .indirect_symbol	_shmget
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry shmat expr 3) 
	.globl	l0275
l0275:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_shmat
	     bl	shmat_stub
	     .data
	     .picsymbol_stub
shmat_stub:	     .indirect_symbol	_shmat
	     mflr	r0
	     bcl	20,31,shmat_templab
shmat_templab:	     mflr	r11
	     addis	r12,r11,ha16(shmat_ptr-shmat_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(shmat_ptr-shmat_templab)
	     lwz	r12,lo16(shmat_ptr-shmat_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
shmat_ptr:	     .indirect_symbol	_shmat
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry shmdt expr 1) 
	.globl	l0276
l0276:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_shmdt
	     bl	shmdt_stub
	     .data
	     .picsymbol_stub
shmdt_stub:	     .indirect_symbol	_shmdt
	     mflr	r0
	     bcl	20,31,shmdt_templab
shmdt_templab:	     mflr	r11
	     addis	r12,r11,ha16(shmdt_ptr-shmdt_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(shmdt_ptr-shmdt_templab)
	     lwz	r12,lo16(shmdt_ptr-shmdt_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
shmdt_ptr:	     .indirect_symbol	_shmdt
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	4
#  (*entry semctl expr 4) 
	.globl	l0277
l0277:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_semctl
	     bl	semctl_stub
	     .data
	     .picsymbol_stub
semctl_stub:	     .indirect_symbol	_semctl
	     mflr	r0
	     bcl	20,31,semctl_templab
semctl_templab:	     mflr	r11
	     addis	r12,r11,ha16(semctl_ptr-semctl_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(semctl_ptr-semctl_templab)
	     lwz	r12,lo16(semctl_ptr-semctl_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
semctl_ptr:	     .indirect_symbol	_semctl
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry semget expr 3) 
	.globl	l0278
l0278:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_semget
	     bl	semget_stub
	     .data
	     .picsymbol_stub
semget_stub:	     .indirect_symbol	_semget
	     mflr	r0
	     bcl	20,31,semget_templab
semget_templab:	     mflr	r11
	     addis	r12,r11,ha16(semget_ptr-semget_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(semget_ptr-semget_templab)
	     lwz	r12,lo16(semget_ptr-semget_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
semget_ptr:	     .indirect_symbol	_semget
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	3
#  (*entry semop expr 3) 
	.globl	l0279
l0279:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     stwu	r1,-96(r1)
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r0,3208(r12)
	     .globl 	_semop
	     bl	semop_stub
	     .data
	     .picsymbol_stub
semop_stub:	     .indirect_symbol	_semop
	     mflr	r0
	     bcl	20,31,semop_templab
semop_templab:	     mflr	r11
	     addis	r12,r11,ha16(semop_ptr-semop_templab)
	     mtspr	8,r0
	     addi	r11,r12,lo16(semop_ptr-semop_templab)
	     lwz	r12,lo16(semop_ptr-semop_templab)(r12)
	     mtctr	r12
	     bctr
	     .data
	     .lazy_symbol_pointer
semop_ptr:	     .indirect_symbol	_semop
	     .long  dyld_stub_binding_helper
	     .text
	     addi	r13,0,128
	     addi	r11,0,254
	     rldimi	r13,r11,56,0
	     cror	15,15,15
	     addis	r12,0,ha16(_SYMVAL)
	     la	r12,lo16(_SYMVAL)(r12)
	     std	r13,3208(r12)
	     lwz	r1,0(r1)
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
	.align	8
	.long	0
	.long	1
#  (*entry codeaddressp expr 1) 
	.globl	codeaddressp
codeaddressp:
	     mfspr	r0,8
	     stmw	r30,-8(r1)
	     stw	r0,8(r1)
	     stwu	r1,-48(r1)
	     rldicl	r3,r3,64,8
	     std	r3,24(r1)
	     addis	r3,0,ha16(l0280)
	     addi	r3,r3,lo16(l0280)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3944(r10)
	     addi	r9,0,493
	     mtspr	9,r10
	     bcctrl	20,0
	     rldicl	r3,r3,64,8
	     ld	r11,24(r1)
	     cmpd	0,r3,r11
	     bc	4,1,l0283
	     or	r3,r13,r13
	     b	l0284
l0283:	     addis	r3,0,ha16(l0281)
	     addi	r3,r3,lo16(l0281)
	     ld	r3,0(r3)
l0284:	     cmpd	0,r3,r13
	     bc	12,2,l0285
	     addis	r3,0,ha16(l0282)
	     addi	r3,r3,lo16(l0282)
	     ld	r3,0(r3)
	     addis	r10,0,ha16(_SYMFNC)
	     la	r10,lo16(_SYMFNC)(r10)
	     ld	r10,3944(r10)
	     addi	r9,0,493
	     mtspr	9,r10
	     bcctrl	20,0
	     rldicl	r3,r3,64,8
	     ld	r11,24(r1)
	     cmpd	0,r11,r3
	     bc	12,0,l0286
	     or	r3,r13,r13
	     b	l0285
l0286:	     addis	r3,0,ha16(l0281)
	     addi	r3,r3,lo16(l0281)
	     ld	r3,0(r3)
l0285:	     cmpd	0,r3,r13
	     bc	4,2,l0287
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2296(r11)
	     rldicl	r3,r11,64,8
	     ld	r11,24(r1)
	     cmpd	0,r3,r11
	     bc	4,1,l0288
	     or	r3,r13,r13
	     b	l0289
l0288:	     addis	r3,0,ha16(l0281)
	     addi	r3,r3,lo16(l0281)
	     ld	r3,0(r3)
l0289:	     cmpd	0,r3,r13
	     bc	12,2,l0287
	     addis	r11,0,ha16(_SYMVAL)
	     la	r11,lo16(_SYMVAL)(r11)
	     ld	r11,2312(r11)
	     rldicl	r3,r11,64,8
	     ld	r11,24(r1)
	     cmpd	0,r11,r3
	     bc	12,0,l0290
	     or	r3,r13,r13
	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0290:	     addis	r3,0,ha16(l0281)
	     addi	r3,r3,lo16(l0281)
	     ld	r3,0(r3)
l0287:	     lwz	r1,0(r1)
	     lwz	r0,8(r1)
	     mtspr	8,r0
	     lmw	r30,-8(r1)
	     bclr	20,0
l0282:	.long	4261412864
	.long	495
l0281:	.long	4261412864
	.long	116
l0280:	.long	4261412864
	.long	256
	.align	8
	.long	0
	.long	1
#  (*entry lastkernel expr 1) 
	.globl	lastkernel
lastkernel:
	     bclr	20,0
	.align	8
	.long	0
	.long	0
#  (*entry initcode expr 0) 
	.globl	initcode
initcode:
	     or	r3,r13,r13
	     bclr	20,0
	.globl	l0291
	.align	8
l0291:	.long	4261412864
	.long	496
	.long	150994944
	.long	l0292
l0292:	.long	4261412864
	.long	497
	.long	150994944
	.long	l0293
l0293:	.long	4261412864
	.long	498
	.long	150994944
	.long	l0294
l0294:	.long	4261412864
	.long	499
	.long	150994944
	.long	l0295
l0295:	.long	4261412864
	.long	500
	.long	4261412864
	.long	128
	.globl	symprp
	.globl	symnam
	.globl	l0296
	.align	8
l0296:	.long	0
	.long	0
	.byte 0
	.byte 0
	.align	8
	.globl	l0297
	.align	8
l0297:	.long	0
	.long	0
	.byte 1
	.byte 0
	.align	8
	.globl	l0298
	.align	8
l0298:	.long	0
	.long	0
	.byte 2
	.byte 0
	.align	8
	.globl	l0299
	.align	8
l0299:	.long	0
	.long	0
	.byte 3
	.byte 0
	.align	8
	.globl	l0300
	.align	8
l0300:	.long	0
	.long	0
	.byte 4
	.byte 0
	.align	8
	.globl	l0301
	.align	8
l0301:	.long	0
	.long	0
	.byte 5
	.byte 0
	.align	8
	.globl	l0302
	.align	8
l0302:	.long	0
	.long	0
	.byte 6
	.byte 0
	.align	8
	.globl	l0303
	.align	8
l0303:	.long	0
	.long	0
	.byte 7
	.byte 0
	.align	8
	.globl	l0304
	.align	8
l0304:	.long	0
	.long	0
	.byte 8
	.byte 0
	.align	8
	.globl	l0305
	.align	8
l0305:	.long	0
	.long	0
	.byte 9
	.byte 0
	.align	8
	.globl	l0306
	.align	8
l0306:	.long	0
	.long	0
	.byte 10
	.byte 0
	.align	8
	.globl	l0307
	.align	8
l0307:	.long	0
	.long	0
	.byte 11
	.byte 0
	.align	8
	.globl	l0308
	.align	8
l0308:	.long	0
	.long	0
	.byte 12
	.byte 0
	.align	8
	.globl	l0309
	.align	8
l0309:	.long	0
	.long	0
	.byte 13
	.byte 0
	.align	8
	.globl	l0310
	.align	8
l0310:	.long	0
	.long	0
	.byte 14
	.byte 0
	.align	8
	.globl	l0311
	.align	8
l0311:	.long	0
	.long	0
	.byte 15
	.byte 0
	.align	8
	.globl	l0312
	.align	8
l0312:	.long	0
	.long	0
	.byte 16
	.byte 0
	.align	8
	.globl	l0313
	.align	8
l0313:	.long	0
	.long	0
	.byte 17
	.byte 0
	.align	8
	.globl	l0314
	.align	8
l0314:	.long	0
	.long	0
	.byte 18
	.byte 0
	.align	8
	.globl	l0315
	.align	8
l0315:	.long	0
	.long	0
	.byte 19
	.byte 0
	.align	8
	.globl	l0316
	.align	8
l0316:	.long	0
	.long	0
	.byte 20
	.byte 0
	.align	8
	.globl	l0317
	.align	8
l0317:	.long	0
	.long	0
	.byte 21
	.byte 0
	.align	8
	.globl	l0318
	.align	8
l0318:	.long	0
	.long	0
	.byte 22
	.byte 0
	.align	8
	.globl	l0319
	.align	8
l0319:	.long	0
	.long	0
	.byte 23
	.byte 0
	.align	8
	.globl	l0320
	.align	8
l0320:	.long	0
	.long	0
	.byte 24
	.byte 0
	.align	8
	.globl	l0321
	.align	8
l0321:	.long	0
	.long	0
	.byte 25
	.byte 0
	.align	8
	.globl	l0322
	.align	8
l0322:	.long	0
	.long	0
	.byte 26
	.byte 0
	.align	8
	.globl	l0323
	.align	8
l0323:	.long	0
	.long	0
	.byte 27
	.byte 0
	.align	8
	.globl	l0324
	.align	8
l0324:	.long	0
	.long	0
	.byte 28
	.byte 0
	.align	8
	.globl	l0325
	.align	8
l0325:	.long	0
	.long	0
	.byte 29
	.byte 0
	.align	8
	.globl	l0326
	.align	8
l0326:	.long	0
	.long	0
	.byte 30
	.byte 0
	.align	8
	.globl	l0327
	.align	8
l0327:	.long	0
	.long	0
	.byte 31
	.byte 0
	.align	8
	.globl	l0328
	.align	8
l0328:	.long	0
	.long	0
	.byte 32
	.byte 0
	.align	8
	.globl	l0329
	.align	8
l0329:	.long	0
	.long	0
	.byte 33
	.byte 0
	.align	8
	.globl	l0330
	.align	8
l0330:	.long	0
	.long	0
	.byte 34
	.byte 0
	.align	8
	.globl	l0331
	.align	8
l0331:	.long	0
	.long	0
	.byte 35
	.byte 0
	.align	8
	.globl	l0332
	.align	8
l0332:	.long	0
	.long	0
	.byte 36
	.byte 0
	.align	8
	.globl	l0333
	.align	8
l0333:	.long	0
	.long	0
	.byte 37
	.byte 0
	.align	8
	.globl	l0334
	.align	8
l0334:	.long	0
	.long	0
	.byte 38
	.byte 0
	.align	8
	.globl	l0335
	.align	8
l0335:	.long	0
	.long	0
	.byte 39
	.byte 0
	.align	8
	.globl	l0336
	.align	8
l0336:	.long	0
	.long	0
	.byte 40
	.byte 0
	.align	8
	.globl	l0337
	.align	8
l0337:	.long	0
	.long	0
	.byte 41
	.byte 0
	.align	8
	.globl	l0338
	.align	8
l0338:	.long	0
	.long	0
	.byte 42
	.byte 0
	.align	8
	.globl	l0339
	.align	8
l0339:	.long	0
	.long	0
	.byte 43
	.byte 0
	.align	8
	.globl	l0340
	.align	8
l0340:	.long	0
	.long	0
	.byte 44
	.byte 0
	.align	8
	.globl	l0341
	.align	8
l0341:	.long	0
	.long	0
	.byte 45
	.byte 0
	.align	8
	.globl	l0342
	.align	8
l0342:	.long	0
	.long	0
	.byte 46
	.byte 0
	.align	8
	.globl	l0343
	.align	8
l0343:	.long	0
	.long	0
	.byte 47
	.byte 0
	.align	8
	.globl	l0344
	.align	8
l0344:	.long	0
	.long	0
	.byte 48
	.byte 0
	.align	8
	.globl	l0345
	.align	8
l0345:	.long	0
	.long	0
	.byte 49
	.byte 0
	.align	8
	.globl	l0346
	.align	8
l0346:	.long	0
	.long	0
	.byte 50
	.byte 0
	.align	8
	.globl	l0347
	.align	8
l0347:	.long	0
	.long	0
	.byte 51
	.byte 0
	.align	8
	.globl	l0348
	.align	8
l0348:	.long	0
	.long	0
	.byte 52
	.byte 0
	.align	8
	.globl	l0349
	.align	8
l0349:	.long	0
	.long	0
	.byte 53
	.byte 0
	.align	8
	.globl	l0350
	.align	8
l0350:	.long	0
	.long	0
	.byte 54
	.byte 0
	.align	8
	.globl	l0351
	.align	8
l0351:	.long	0
	.long	0
	.byte 55
	.byte 0
	.align	8
	.globl	l0352
	.align	8
l0352:	.long	0
	.long	0
	.byte 56
	.byte 0
	.align	8
	.globl	l0353
	.align	8
l0353:	.long	0
	.long	0
	.byte 57
	.byte 0
	.align	8
	.globl	l0354
	.align	8
l0354:	.long	0
	.long	0
	.byte 58
	.byte 0
	.align	8
	.globl	l0355
	.align	8
l0355:	.long	0
	.long	0
	.byte 59
	.byte 0
	.align	8
	.globl	l0356
	.align	8
l0356:	.long	0
	.long	0
	.byte 60
	.byte 0
	.align	8
	.globl	l0357
	.align	8
l0357:	.long	0
	.long	0
	.byte 61
	.byte 0
	.align	8
	.globl	l0358
	.align	8
l0358:	.long	0
	.long	0
	.byte 62
	.byte 0
	.align	8
	.globl	l0359
	.align	8
l0359:	.long	0
	.long	0
	.byte 63
	.byte 0
	.align	8
	.globl	l0360
	.align	8
l0360:	.long	0
	.long	0
	.byte 64
	.byte 0
	.align	8
	.globl	l0361
	.align	8
l0361:	.long	0
	.long	0
	.byte 65
	.byte 0
	.align	8
	.globl	l0362
	.align	8
l0362:	.long	0
	.long	0
	.byte 66
	.byte 0
	.align	8
	.globl	l0363
	.align	8
l0363:	.long	0
	.long	0
	.byte 67
	.byte 0
	.align	8
	.globl	l0364
	.align	8
l0364:	.long	0
	.long	0
	.byte 68
	.byte 0
	.align	8
	.globl	l0365
	.align	8
l0365:	.long	0
	.long	0
	.byte 69
	.byte 0
	.align	8
	.globl	l0366
	.align	8
l0366:	.long	0
	.long	0
	.byte 70
	.byte 0
	.align	8
	.globl	l0367
	.align	8
l0367:	.long	0
	.long	0
	.byte 71
	.byte 0
	.align	8
	.globl	l0368
	.align	8
l0368:	.long	0
	.long	0
	.byte 72
	.byte 0
	.align	8
	.globl	l0369
	.align	8
l0369:	.long	0
	.long	0
	.byte 73
	.byte 0
	.align	8
	.globl	l0370
	.align	8
l0370:	.long	0
	.long	0
	.byte 74
	.byte 0
	.align	8
	.globl	l0371
	.align	8
l0371:	.long	0
	.long	0
	.byte 75
	.byte 0
	.align	8
	.globl	l0372
	.align	8
l0372:	.long	0
	.long	0
	.byte 76
	.byte 0
	.align	8
	.globl	l0373
	.align	8
l0373:	.long	0
	.long	0
	.byte 77
	.byte 0
	.align	8
	.globl	l0374
	.align	8
l0374:	.long	0
	.long	0
	.byte 78
	.byte 0
	.align	8
	.globl	l0375
	.align	8
l0375:	.long	0
	.long	0
	.byte 79
	.byte 0
	.align	8
	.globl	l0376
	.align	8
l0376:	.long	0
	.long	0
	.byte 80
	.byte 0
	.align	8
	.globl	l0377
	.align	8
l0377:	.long	0
	.long	0
	.byte 81
	.byte 0
	.align	8
	.globl	l0378
	.align	8
l0378:	.long	0
	.long	0
	.byte 82
	.byte 0
	.align	8
	.globl	l0379
	.align	8
l0379:	.long	0
	.long	0
	.byte 83
	.byte 0
	.align	8
	.globl	l0380
	.align	8
l0380:	.long	0
	.long	0
	.byte 84
	.byte 0
	.align	8
	.globl	l0381
	.align	8
l0381:	.long	0
	.long	0
	.byte 85
	.byte 0
	.align	8
	.globl	l0382
	.align	8
l0382:	.long	0
	.long	0
	.byte 86
	.byte 0
	.align	8
	.globl	l0383
	.align	8
l0383:	.long	0
	.long	0
	.byte 87
	.byte 0
	.align	8
	.globl	l0384
	.align	8
l0384:	.long	0
	.long	0
	.byte 88
	.byte 0
	.align	8
	.globl	l0385
	.align	8
l0385:	.long	0
	.long	0
	.byte 89
	.byte 0
	.align	8
	.globl	l0386
	.align	8
l0386:	.long	0
	.long	0
	.byte 90
	.byte 0
	.align	8
	.globl	l0387
	.align	8
l0387:	.long	0
	.long	0
	.byte 91
	.byte 0
	.align	8
	.globl	l0388
	.align	8
l0388:	.long	0
	.long	0
	.byte 92
	.byte 0
	.align	8
	.globl	l0389
	.align	8
l0389:	.long	0
	.long	0
	.byte 93
	.byte 0
	.align	8
	.globl	l0390
	.align	8
l0390:	.long	0
	.long	0
	.byte 94
	.byte 0
	.align	8
	.globl	l0391
	.align	8
l0391:	.long	0
	.long	0
	.byte 95
	.byte 0
	.align	8
	.globl	l0392
	.align	8
l0392:	.long	0
	.long	0
	.byte 96
	.byte 0
	.align	8
	.globl	l0393
	.align	8
l0393:	.long	0
	.long	0
	.byte 97
	.byte 0
	.align	8
	.globl	l0394
	.align	8
l0394:	.long	0
	.long	0
	.byte 98
	.byte 0
	.align	8
	.globl	l0395
	.align	8
l0395:	.long	0
	.long	0
	.byte 99
	.byte 0
	.align	8
	.globl	l0396
	.align	8
l0396:	.long	0
	.long	0
	.byte 100
	.byte 0
	.align	8
	.globl	l0397
	.align	8
l0397:	.long	0
	.long	0
	.byte 101
	.byte 0
	.align	8
	.globl	l0398
	.align	8
l0398:	.long	0
	.long	0
	.byte 102
	.byte 0
	.align	8
	.globl	l0399
	.align	8
l0399:	.long	0
	.long	0
	.byte 103
	.byte 0
	.align	8
	.globl	l0400
	.align	8
l0400:	.long	0
	.long	0
	.byte 104
	.byte 0
	.align	8
	.globl	l0401
	.align	8
l0401:	.long	0
	.long	0
	.byte 105
	.byte 0
	.align	8
	.globl	l0402
	.align	8
l0402:	.long	0
	.long	0
	.byte 106
	.byte 0
	.align	8
	.globl	l0403
	.align	8
l0403:	.long	0
	.long	0
	.byte 107
	.byte 0
	.align	8
	.globl	l0404
	.align	8
l0404:	.long	0
	.long	0
	.byte 108
	.byte 0
	.align	8
	.globl	l0405
	.align	8
l0405:	.long	0
	.long	0
	.byte 109
	.byte 0
	.align	8
	.globl	l0406
	.align	8
l0406:	.long	0
	.long	0
	.byte 110
	.byte 0
	.align	8
	.globl	l0407
	.align	8
l0407:	.long	0
	.long	0
	.byte 111
	.byte 0
	.align	8
	.globl	l0408
	.align	8
l0408:	.long	0
	.long	0
	.byte 112
	.byte 0
	.align	8
	.globl	l0409
	.align	8
l0409:	.long	0
	.long	0
	.byte 113
	.byte 0
	.align	8
	.globl	l0410
	.align	8
l0410:	.long	0
	.long	0
	.byte 114
	.byte 0
	.align	8
	.globl	l0411
	.align	8
l0411:	.long	0
	.long	0
	.byte 115
	.byte 0
	.align	8
	.globl	l0412
	.align	8
l0412:	.long	0
	.long	0
	.byte 116
	.byte 0
	.align	8
	.globl	l0413
	.align	8
l0413:	.long	0
	.long	0
	.byte 117
	.byte 0
	.align	8
	.globl	l0414
	.align	8
l0414:	.long	0
	.long	0
	.byte 118
	.byte 0
	.align	8
	.globl	l0415
	.align	8
l0415:	.long	0
	.long	0
	.byte 119
	.byte 0
	.align	8
	.globl	l0416
	.align	8
l0416:	.long	0
	.long	0
	.byte 120
	.byte 0
	.align	8
	.globl	l0417
	.align	8
l0417:	.long	0
	.long	0
	.byte 121
	.byte 0
	.align	8
	.globl	l0418
	.align	8
l0418:	.long	0
	.long	0
	.byte 122
	.byte 0
	.align	8
	.globl	l0419
	.align	8
l0419:	.long	0
	.long	0
	.byte 123
	.byte 0
	.align	8
	.globl	l0420
	.align	8
l0420:	.long	0
	.long	0
	.byte 124
	.byte 0
	.align	8
	.globl	l0421
	.align	8
l0421:	.long	0
	.long	0
	.byte 125
	.byte 0
	.align	8
	.globl	l0422
	.align	8
l0422:	.long	0
	.long	0
	.byte 126
	.byte 0
	.align	8
	.globl	l0423
	.align	8
l0423:	.long	0
	.long	0
	.byte 127
	.byte 0
	.align	8
	.globl	l0424
	.align	8
l0424:	.long	0
	.long	2
	.byte 110
	.byte 105
	.byte 108
	.byte 0
	.align	8
	.globl	l0425
	.align	8
l0425:	.long	0
	.long	0
	.byte 129
	.byte 0
	.align	8
	.globl	l0426
	.align	8
l0426:	.long	0
	.long	0
	.byte 130
	.byte 0
	.align	8
	.globl	l0427
	.align	8
l0427:	.long	0
	.long	0
	.byte 131
	.byte 0
	.align	8
	.globl	l0428
	.align	8
l0428:	.long	0
	.long	0
	.byte 132
	.byte 0
	.align	8
	.globl	l0429
	.align	8
l0429:	.long	0
	.long	0
	.byte 133
	.byte 0
	.align	8
	.globl	l0430
	.align	8
l0430:	.long	0
	.long	0
	.byte 134
	.byte 0
	.align	8
	.globl	l0431
	.align	8
l0431:	.long	0
	.long	0
	.byte 135
	.byte 0
	.align	8
	.globl	l0432
	.align	8
l0432:	.long	0
	.long	0
	.byte 136
	.byte 0
	.align	8
	.globl	l0433
	.align	8
l0433:	.long	0
	.long	0
	.byte 137
	.byte 0
	.align	8
	.globl	l0434
	.align	8
l0434:	.long	0
	.long	0
	.byte 138
	.byte 0
	.align	8
	.globl	l0435
	.align	8
l0435:	.long	0
	.long	0
	.byte 139
	.byte 0
	.align	8
	.globl	l0436
	.align	8
l0436:	.long	0
	.long	0
	.byte 140
	.byte 0
	.align	8
	.globl	l0437
	.align	8
l0437:	.long	0
	.long	0
	.byte 141
	.byte 0
	.align	8
	.globl	l0438
	.align	8
l0438:	.long	0
	.long	0
	.byte 142
	.byte 0
	.align	8
	.globl	l0439
	.align	8
l0439:	.long	0
	.long	0
	.byte 143
	.byte 0
	.align	8
	.globl	l0440
	.align	8
l0440:	.long	0
	.long	0
	.byte 144
	.byte 0
	.align	8
	.globl	l0441
	.align	8
l0441:	.long	0
	.long	0
	.byte 145
	.byte 0
	.align	8
	.globl	l0442
	.align	8
l0442:	.long	0
	.long	0
	.byte 146
	.byte 0
	.align	8
	.globl	l0443
	.align	8
l0443:	.long	0
	.long	0
	.byte 147
	.byte 0
	.align	8
	.globl	l0444
	.align	8
l0444:	.long	0
	.long	0
	.byte 148
	.byte 0
	.align	8
	.globl	l0445
	.align	8
l0445:	.long	0
	.long	0
	.byte 149
	.byte 0
	.align	8
	.globl	l0446
	.align	8
l0446:	.long	0
	.long	0
	.byte 150
	.byte 0
	.align	8
	.globl	l0447
	.align	8
l0447:	.long	0
	.long	0
	.byte 151
	.byte 0
	.align	8
	.globl	l0448
	.align	8
l0448:	.long	0
	.long	0
	.byte 152
	.byte 0
	.align	8
	.globl	l0449
	.align	8
l0449:	.long	0
	.long	0
	.byte 153
	.byte 0
	.align	8
	.globl	l0450
	.align	8
l0450:	.long	0
	.long	0
	.byte 154
	.byte 0
	.align	8
	.globl	l0451
	.align	8
l0451:	.long	0
	.long	0
	.byte 155
	.byte 0
	.align	8
	.globl	l0452
	.align	8
l0452:	.long	0
	.long	0
	.byte 156
	.byte 0
	.align	8
	.globl	l0453
	.align	8
l0453:	.long	0
	.long	0
	.byte 157
	.byte 0
	.align	8
	.globl	l0454
	.align	8
l0454:	.long	0
	.long	0
	.byte 158
	.byte 0
	.align	8
	.globl	l0455
	.align	8
l0455:	.long	0
	.long	0
	.byte 159
	.byte 0
	.align	8
	.globl	l0456
	.align	8
l0456:	.long	0
	.long	0
	.byte 160
	.byte 0
	.align	8
	.globl	l0457
	.align	8
l0457:	.long	0
	.long	0
	.byte 161
	.byte 0
	.align	8
	.globl	l0458
	.align	8
l0458:	.long	0
	.long	0
	.byte 162
	.byte 0
	.align	8
	.globl	l0459
	.align	8
l0459:	.long	0
	.long	0
	.byte 163
	.byte 0
	.align	8
	.globl	l0460
	.align	8
l0460:	.long	0
	.long	0
	.byte 164
	.byte 0
	.align	8
	.globl	l0461
	.align	8
l0461:	.long	0
	.long	0
	.byte 165
	.byte 0
	.align	8
	.globl	l0462
	.align	8
l0462:	.long	0
	.long	0
	.byte 166
	.byte 0
	.align	8
	.globl	l0463
	.align	8
l0463:	.long	0
	.long	0
	.byte 167
	.byte 0
	.align	8
	.globl	l0464
	.align	8
l0464:	.long	0
	.long	0
	.byte 168
	.byte 0
	.align	8
	.globl	l0465
	.align	8
l0465:	.long	0
	.long	0
	.byte 169
	.byte 0
	.align	8
	.globl	l0466
	.align	8
l0466:	.long	0
	.long	0
	.byte 170
	.byte 0
	.align	8
	.globl	l0467
	.align	8
l0467:	.long	0
	.long	0
	.byte 171
	.byte 0
	.align	8
	.globl	l0468
	.align	8
l0468:	.long	0
	.long	0
	.byte 172
	.byte 0
	.align	8
	.globl	l0469
	.align	8
l0469:	.long	0
	.long	0
	.byte 173
	.byte 0
	.align	8
	.globl	l0470
	.align	8
l0470:	.long	0
	.long	0
	.byte 174
	.byte 0
	.align	8
	.globl	l0471
	.align	8
l0471:	.long	0
	.long	0
	.byte 175
	.byte 0
	.align	8
	.globl	l0472
	.align	8
l0472:	.long	0
	.long	0
	.byte 176
	.byte 0
	.align	8
	.globl	l0473
	.align	8
l0473:	.long	0
	.long	0
	.byte 177
	.byte 0
	.align	8
	.globl	l0474
	.align	8
l0474:	.long	0
	.long	0
	.byte 178
	.byte 0
	.align	8
	.globl	l0475
	.align	8
l0475:	.long	0
	.long	0
	.byte 179
	.byte 0
	.align	8
	.globl	l0476
	.align	8
l0476:	.long	0
	.long	0
	.byte 180
	.byte 0
	.align	8
	.globl	l0477
	.align	8
l0477:	.long	0
	.long	0
	.byte 181
	.byte 0
	.align	8
	.globl	l0478
	.align	8
l0478:	.long	0
	.long	0
	.byte 182
	.byte 0
	.align	8
	.globl	l0479
	.align	8
l0479:	.long	0
	.long	0
	.byte 183
	.byte 0
	.align	8
	.globl	l0480
	.align	8
l0480:	.long	0
	.long	0
	.byte 184
	.byte 0
	.align	8
	.globl	l0481
	.align	8
l0481:	.long	0
	.long	0
	.byte 185
	.byte 0
	.align	8
	.globl	l0482
	.align	8
l0482:	.long	0
	.long	0
	.byte 186
	.byte 0
	.align	8
	.globl	l0483
	.align	8
l0483:	.long	0
	.long	0
	.byte 187
	.byte 0
	.align	8
	.globl	l0484
	.align	8
l0484:	.long	0
	.long	0
	.byte 188
	.byte 0
	.align	8
	.globl	l0485
	.align	8
l0485:	.long	0
	.long	0
	.byte 189
	.byte 0
	.align	8
	.globl	l0486
	.align	8
l0486:	.long	0
	.long	0
	.byte 190
	.byte 0
	.align	8
	.globl	l0487
	.align	8
l0487:	.long	0
	.long	0
	.byte 191
	.byte 0
	.align	8
	.globl	l0488
	.align	8
l0488:	.long	0
	.long	0
	.byte 192
	.byte 0
	.align	8
	.globl	l0489
	.align	8
l0489:	.long	0
	.long	0
	.byte 193
	.byte 0
	.align	8
	.globl	l0490
	.align	8
l0490:	.long	0
	.long	0
	.byte 194
	.byte 0
	.align	8
	.globl	l0491
	.align	8
l0491:	.long	0
	.long	0
	.byte 195
	.byte 0
	.align	8
	.globl	l0492
	.align	8
l0492:	.long	0
	.long	0
	.byte 196
	.byte 0
	.align	8
	.globl	l0493
	.align	8
l0493:	.long	0
	.long	0
	.byte 197
	.byte 0
	.align	8
	.globl	l0494
	.align	8
l0494:	.long	0
	.long	0
	.byte 198
	.byte 0
	.align	8
	.globl	l0495
	.align	8
l0495:	.long	0
	.long	0
	.byte 199
	.byte 0
	.align	8
	.globl	l0496
	.align	8
l0496:	.long	0
	.long	0
	.byte 200
	.byte 0
	.align	8
	.globl	l0497
	.align	8
l0497:	.long	0
	.long	0
	.byte 201
	.byte 0
	.align	8
	.globl	l0498
	.align	8
l0498:	.long	0
	.long	0
	.byte 202
	.byte 0
	.align	8
	.globl	l0499
	.align	8
l0499:	.long	0
	.long	0
	.byte 203
	.byte 0
	.align	8
	.globl	l0500
	.align	8
l0500:	.long	0
	.long	0
	.byte 204
	.byte 0
	.align	8
	.globl	l0501
	.align	8
l0501:	.long	0
	.long	0
	.byte 205
	.byte 0
	.align	8
	.globl	l0502
	.align	8
l0502:	.long	0
	.long	0
	.byte 206
	.byte 0
	.align	8
	.globl	l0503
	.align	8
l0503:	.long	0
	.long	0
	.byte 207
	.byte 0
	.align	8
	.globl	l0504
	.align	8
l0504:	.long	0
	.long	0
	.byte 208
	.byte 0
	.align	8
	.globl	l0505
	.align	8
l0505:	.long	0
	.long	0
	.byte 209
	.byte 0
	.align	8
	.globl	l0506
	.align	8
l0506:	.long	0
	.long	0
	.byte 210
	.byte 0
	.align	8
	.globl	l0507
	.align	8
l0507:	.long	0
	.long	0
	.byte 211
	.byte 0
	.align	8
	.globl	l0508
	.align	8
l0508:	.long	0
	.long	0
	.byte 212
	.byte 0
	.align	8
	.globl	l0509
	.align	8
l0509:	.long	0
	.long	0
	.byte 213
	.byte 0
	.align	8
	.globl	l0510
	.align	8
l0510:	.long	0
	.long	0
	.byte 214
	.byte 0
	.align	8
	.globl	l0511
	.align	8
l0511:	.long	0
	.long	0
	.byte 215
	.byte 0
	.align	8
	.globl	l0512
	.align	8
l0512:	.long	0
	.long	0
	.byte 216
	.byte 0
	.align	8
	.globl	l0513
	.align	8
l0513:	.long	0
	.long	0
	.byte 217
	.byte 0
	.align	8
	.globl	l0514
	.align	8
l0514:	.long	0
	.long	0
	.byte 218
	.byte 0
	.align	8
	.globl	l0515
	.align	8
l0515:	.long	0
	.long	0
	.byte 219
	.byte 0
	.align	8
	.globl	l0516
	.align	8
l0516:	.long	0
	.long	0
	.byte 220
	.byte 0
	.align	8
	.globl	l0517
	.align	8
l0517:	.long	0
	.long	0
	.byte 221
	.byte 0
	.align	8
	.globl	l0518
	.align	8
l0518:	.long	0
	.long	0
	.byte 222
	.byte 0
	.align	8
	.globl	l0519
	.align	8
l0519:	.long	0
	.long	0
	.byte 223
	.byte 0
	.align	8
	.globl	l0520
	.align	8
l0520:	.long	0
	.long	0
	.byte 224
	.byte 0
	.align	8
	.globl	l0521
	.align	8
l0521:	.long	0
	.long	0
	.byte 225
	.byte 0
	.align	8
	.globl	l0522
	.align	8
l0522:	.long	0
	.long	0
	.byte 226
	.byte 0
	.align	8
	.globl	l0523
	.align	8
l0523:	.long	0
	.long	0
	.byte 227
	.byte 0
	.align	8
	.globl	l0524
	.align	8
l0524:	.long	0
	.long	0
	.byte 228
	.byte 0
	.align	8
	.globl	l0525
	.align	8
l0525:	.long	0
	.long	0
	.byte 229
	.byte 0
	.align	8
	.globl	l0526
	.align	8
l0526:	.long	0
	.long	0
	.byte 230
	.byte 0
	.align	8
	.globl	l0527
	.align	8
l0527:	.long	0
	.long	0
	.byte 231
	.byte 0
	.align	8
	.globl	l0528
	.align	8
l0528:	.long	0
	.long	0
	.byte 232
	.byte 0
	.align	8
	.globl	l0529
	.align	8
l0529:	.long	0
	.long	0
	.byte 233
	.byte 0
	.align	8
	.globl	l0530
	.align	8
l0530:	.long	0
	.long	0
	.byte 234
	.byte 0
	.align	8
	.globl	l0531
	.align	8
l0531:	.long	0
	.long	0
	.byte 235
	.byte 0
	.align	8
	.globl	l0532
	.align	8
l0532:	.long	0
	.long	0
	.byte 236
	.byte 0
	.align	8
	.globl	l0533
	.align	8
l0533:	.long	0
	.long	0
	.byte 237
	.byte 0
	.align	8
	.globl	l0534
	.align	8
l0534:	.long	0
	.long	0
	.byte 238
	.byte 0
	.align	8
	.globl	l0535
	.align	8
l0535:	.long	0
	.long	0
	.byte 239
	.byte 0
	.align	8
	.globl	l0536
	.align	8
l0536:	.long	0
	.long	0
	.byte 240
	.byte 0
	.align	8
	.globl	l0537
	.align	8
l0537:	.long	0
	.long	0
	.byte 241
	.byte 0
	.align	8
	.globl	l0538
	.align	8
l0538:	.long	0
	.long	0
	.byte 242
	.byte 0
	.align	8
	.globl	l0539
	.align	8
l0539:	.long	0
	.long	0
	.byte 243
	.byte 0
	.align	8
	.globl	l0540
	.align	8
l0540:	.long	0
	.long	0
	.byte 244
	.byte 0
	.align	8
	.globl	l0541
	.align	8
l0541:	.long	0
	.long	0
	.byte 245
	.byte 0
	.align	8
	.globl	l0542
	.align	8
l0542:	.long	0
	.long	0
	.byte 246
	.byte 0
	.align	8
	.globl	l0543
	.align	8
l0543:	.long	0
	.long	0
	.byte 247
	.byte 0
	.align	8
	.globl	l0544
	.align	8
l0544:	.long	0
	.long	0
	.byte 248
	.byte 0
	.align	8
	.globl	l0545
	.align	8
l0545:	.long	0
	.long	0
	.byte 249
	.byte 0
	.align	8
	.globl	l0546
	.align	8
l0546:	.long	0
	.long	0
	.byte 250
	.byte 0
	.align	8
	.globl	l0547
	.align	8
l0547:	.long	0
	.long	0
	.byte 251
	.byte 0
	.align	8
	.globl	l0548
	.align	8
l0548:	.long	0
	.long	0
	.byte 252
	.byte 0
	.align	8
	.globl	l0549
	.align	8
l0549:	.long	0
	.long	0
	.byte 253
	.byte 0
	.align	8
	.globl	l0550
	.align	8
l0550:	.long	0
	.long	0
	.byte 254
	.byte 0
	.align	8
	.globl	l0551
	.align	8
l0551:	.long	0
	.long	0
	.byte 255
	.byte 0
	.align	8
	.globl	l0552
	.align	8
l0552:	.long	0
	.long	10
	.byte 102
	.byte 105
	.byte 114
	.byte 115
	.byte 116
	.byte 107
	.byte 101
	.byte 114
	.byte 110
	.byte 101
	.byte 108
	.byte 0
	.align	8
	.globl	l0553
	.align	8
l0553:	.long	0
	.long	11
	.byte 115
	.byte 121
	.byte 115
	.byte 116
	.byte 101
	.byte 109
	.byte 95
	.byte 108
	.byte 105
	.byte 115
	.byte 116
	.byte 42
	.byte 0
	.align	8
	.globl	l0554
	.align	8
l0554:	.long	0
	.long	4
	.byte 115
	.byte 116
	.byte 97
	.byte 99
	.byte 107
	.byte 0
	.align	8
	.globl	l0555
	.align	8
l0555:	.long	0
	.long	10
	.byte 116
	.byte 111
	.byte 107
	.byte 101
	.byte 110
	.byte 98
	.byte 117
	.byte 102
	.byte 102
	.byte 101
	.byte 114
	.byte 0
	.align	8
	.globl	l0556
	.align	8
l0556:	.long	0
	.long	5
	.byte 98
	.byte 110
	.byte 100
	.byte 115
	.byte 116
	.byte 107
	.byte 0
	.align	8
	.globl	l0557
	.align	8
l0557:	.long	0
	.long	9
	.byte 99
	.byte 97
	.byte 116
	.byte 99
	.byte 104
	.byte 115
	.byte 116
	.byte 97
	.byte 99
	.byte 107
	.byte 0
	.align	8
	.globl	l0558
	.align	8
l0558:	.long	0
	.long	8
	.byte 104
	.byte 97
	.byte 115
	.byte 104
	.byte 116
	.byte 97
	.byte 98
	.byte 108
	.byte 101
	.byte 0
	.align	8
	.globl	l0559
	.align	8
l0559:	.long	0
	.long	12
	.byte 111
	.byte 110
	.byte 101
	.byte 119
	.byte 111
	.byte 114
	.byte 100
	.byte 98
	.byte 117
	.byte 102
	.byte 102
	.byte 101
	.byte 114
	.byte 0
	.align	8
	.globl	l0560
	.align	8
l0560:	.long	0
	.long	7
	.byte 115
	.byte 97
	.byte 118
	.byte 101
	.byte 97
	.byte 114
	.byte 103
	.byte 99
	.byte 0
	.align	8
	.globl	l0561
	.align	8
l0561:	.long	0
	.long	7
	.byte 115
	.byte 97
	.byte 118
	.byte 101
	.byte 97
	.byte 114
	.byte 103
	.byte 118
	.byte 0
	.align	8
	.globl	l0562
	.align	8
l0562:	.long	0
	.long	9
	.byte 100
	.byte 97
	.byte 116
	.byte 101
	.byte 98
	.byte 117
	.byte 102
	.byte 102
	.byte 101
	.byte 114
	.byte 0
	.align	8
	.globl	l0563
	.align	8
l0563:	.long	0
	.long	11
	.byte 115
	.byte 112
	.byte 97
	.byte 114
	.byte 99
	.byte 106
	.byte 117
	.byte 109
	.byte 112
	.byte 98
	.byte 117
	.byte 102
	.byte 0
	.align	8
	.globl	l0564
	.align	8
l0564:	.long	0
	.long	12
	.byte 105
	.byte 115
	.byte 97
	.byte 115
	.byte 97
	.byte 118
	.byte 101
	.byte 115
	.byte 121
	.byte 115
	.byte 116
	.byte 101
	.byte 109
	.byte 0
	.align	8
	.globl	l0565
	.align	8
l0565:	.long	0
	.long	12
	.byte 97
	.byte 114
	.byte 103
	.byte 117
	.byte 109
	.byte 101
	.byte 110
	.byte 116
	.byte 98
	.byte 108
	.byte 111
	.byte 99
	.byte 107
	.byte 0
	.align	8
	.globl	l0566
	.align	8
l0566:	.long	0
	.long	12
	.byte 99
	.byte 97
	.byte 116
	.byte 99
	.byte 104
	.byte 115
	.byte 116
	.byte 97
	.byte 99
	.byte 107
	.byte 112
	.byte 116
	.byte 114
	.byte 0
	.align	8
	.globl	l0567
	.align	8
l0567:	.long	0
	.long	15
	.byte 98
	.byte 110
	.byte 100
	.byte 115
	.byte 116
	.byte 107
	.byte 108
	.byte 111
	.byte 119
	.byte 101
	.byte 114
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0568
	.align	8
l0568:	.long	0
	.long	15
	.byte 98
	.byte 110
	.byte 100
	.byte 115
	.byte 116
	.byte 107
	.byte 117
	.byte 112
	.byte 112
	.byte 101
	.byte 114
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0569
	.align	8
l0569:	.long	0
	.long	8
	.byte 98
	.byte 110
	.byte 100
	.byte 115
	.byte 116
	.byte 107
	.byte 112
	.byte 116
	.byte 114
	.byte 0
	.align	8
	.globl	l0570
	.align	8
l0570:	.long	0
	.long	13
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 108
	.byte 111
	.byte 119
	.byte 101
	.byte 114
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0571
	.align	8
l0571:	.long	0
	.long	3
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 0
	.align	8
	.globl	l0572
	.align	8
l0572:	.long	0
	.long	7
	.byte 105
	.byte 110
	.byte 105
	.byte 116
	.byte 45
	.byte 118
	.byte 105
	.byte 118
	.byte 0
	.align	8
	.globl	l0573
	.align	8
l0573:	.long	0
	.long	12
	.byte 105
	.byte 110
	.byte 105
	.byte 116
	.byte 45
	.byte 112
	.byte 111
	.byte 105
	.byte 110
	.byte 116
	.byte 101
	.byte 114
	.byte 115
	.byte 0
	.align	8
	.globl	l0574
	.align	8
l0574:	.long	0
	.long	16
	.byte 103
	.byte 99
	.byte 97
	.byte 114
	.byte 114
	.byte 97
	.byte 121
	.byte 108
	.byte 111
	.byte 119
	.byte 101
	.byte 114
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0575
	.align	8
l0575:	.long	0
	.long	16
	.byte 103
	.byte 99
	.byte 97
	.byte 114
	.byte 114
	.byte 97
	.byte 121
	.byte 117
	.byte 112
	.byte 112
	.byte 101
	.byte 114
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0576
	.align	8
l0576:	.long	0
	.long	7
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 108
	.byte 97
	.byte 115
	.byte 116
	.byte 0
	.align	8
	.globl	l0577
	.align	8
l0577:	.long	0
	.long	10
	.byte 111
	.byte 108
	.byte 100
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 108
	.byte 97
	.byte 115
	.byte 116
	.byte 0
	.align	8
	.globl	l0578
	.align	8
l0578:	.long	0
	.long	12
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 116
	.byte 114
	.byte 97
	.byte 112
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0579
	.align	8
l0579:	.long	0
	.long	15
	.byte 111
	.byte 108
	.byte 100
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 116
	.byte 114
	.byte 97
	.byte 112
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0580
	.align	8
l0580:	.long	0
	.long	13
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 117
	.byte 112
	.byte 112
	.byte 101
	.byte 114
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0581
	.align	8
l0581:	.long	0
	.long	13
	.byte 95
	.byte 105
	.byte 110
	.byte 102
	.byte 98
	.byte 105
	.byte 116
	.byte 108
	.byte 101
	.byte 110
	.byte 103
	.byte 116
	.byte 104
	.byte 95
	.byte 0
	.align	8
	.globl	l0582
	.align	8
l0582:	.long	0
	.long	6
	.byte 108
	.byte 97
	.byte 115
	.byte 116
	.byte 98
	.byte 112
	.byte 115
	.byte 0
	.align	8
	.globl	l0583
	.align	8
l0583:	.long	0
	.long	12
	.byte 98
	.byte 112
	.byte 115
	.byte 108
	.byte 111
	.byte 119
	.byte 101
	.byte 114
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0584
	.align	8
l0584:	.long	0
	.long	18
	.byte 109
	.byte 97
	.byte 105
	.byte 110
	.byte 115
	.byte 116
	.byte 97
	.byte 114
	.byte 116
	.byte 105
	.byte 110
	.byte 105
	.byte 116
	.byte 105
	.byte 97
	.byte 108
	.byte 105
	.byte 122
	.byte 101
	.byte 0
	.align	8
	.globl	l0585
	.align	8
l0585:	.long	0
	.long	6
	.byte 110
	.byte 101
	.byte 120
	.byte 116
	.byte 98
	.byte 112
	.byte 115
	.byte 0
	.align	8
	.globl	l0586
	.align	8
l0586:	.long	0
	.long	16
	.byte 111
	.byte 108
	.byte 100
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 117
	.byte 112
	.byte 112
	.byte 101
	.byte 114
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0587
	.align	8
l0587:	.long	0
	.long	16
	.byte 111
	.byte 108
	.byte 100
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 108
	.byte 111
	.byte 119
	.byte 101
	.byte 114
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0588
	.align	8
l0588:	.long	0
	.long	14
	.byte 115
	.byte 116
	.byte 97
	.byte 99
	.byte 107
	.byte 117
	.byte 112
	.byte 112
	.byte 101
	.byte 114
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0589
	.align	8
l0589:	.long	0
	.long	8
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 115
	.byte 116
	.byte 100
	.byte 105
	.byte 110
	.byte 0
	.align	8
	.globl	l0590
	.align	8
l0590:	.long	0
	.long	9
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 115
	.byte 116
	.byte 100
	.byte 111
	.byte 117
	.byte 116
	.byte 0
	.align	8
	.globl	l0591
	.align	8
l0591:	.long	0
	.long	9
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 115
	.byte 116
	.byte 100
	.byte 101
	.byte 114
	.byte 114
	.byte 0
	.align	8
	.globl	l0592
	.align	8
l0592:	.long	0
	.long	7
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 110
	.byte 117
	.byte 108
	.byte 108
	.byte 0
	.align	8
	.globl	l0593
	.align	8
l0593:	.long	0
	.long	6
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 101
	.byte 111
	.byte 102
	.byte 0
	.align	8
	.globl	l0594
	.align	8
l0594:	.long	0
	.long	6
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 116
	.byte 116
	.byte 121
	.byte 0
	.align	8
	.globl	l0595
	.align	8
l0595:	.long	0
	.long	16
	.byte 42
	.byte 42
	.byte 42
	.byte 109
	.byte 117
	.byte 115
	.byte 116
	.byte 45
	.byte 98
	.byte 101
	.byte 45
	.byte 110
	.byte 105
	.byte 108
	.byte 42
	.byte 42
	.byte 42
	.byte 0
	.align	8
	.globl	l0596
	.align	8
l0596:	.long	0
	.long	20
	.byte 42
	.byte 42
	.byte 42
	.byte 109
	.byte 117
	.byte 115
	.byte 116
	.byte 45
	.byte 98
	.byte 101
	.byte 45
	.byte 110
	.byte 105
	.byte 108
	.byte 45
	.byte 116
	.byte 111
	.byte 111
	.byte 42
	.byte 42
	.byte 42
	.byte 0
	.align	8
	.globl	l0597
	.align	8
l0597:	.long	0
	.long	7
	.byte 42
	.byte 102
	.byte 97
	.byte 115
	.byte 116
	.byte 99
	.byte 97
	.byte 114
	.byte 0
	.align	8
	.globl	l0598
	.align	8
l0598:	.long	0
	.long	10
	.byte 105
	.byte 110
	.byte 105
	.byte 116
	.byte 45
	.byte 102
	.byte 108
	.byte 117
	.byte 105
	.byte 100
	.byte 115
	.byte 0
	.align	8
	.globl	l0599
	.align	8
l0599:	.long	0
	.long	3
	.byte 97
	.byte 114
	.byte 103
	.byte 99
	.byte 0
	.align	8
	.globl	l0600
	.align	8
l0600:	.long	0
	.long	3
	.byte 97
	.byte 114
	.byte 103
	.byte 118
	.byte 0
	.align	8
	.globl	l0601
	.align	8
l0601:	.long	0
	.long	5
	.byte 115
	.byte 121
	.byte 109
	.byte 102
	.byte 110
	.byte 99
	.byte 0
	.align	8
	.globl	l0602
	.align	8
l0602:	.long	0
	.long	5
	.byte 115
	.byte 121
	.byte 109
	.byte 118
	.byte 97
	.byte 108
	.byte 0
	.align	8
	.globl	l0603
	.align	8
l0603:	.long	0
	.long	14
	.byte 111
	.byte 115
	.byte 95
	.byte 115
	.byte 116
	.byte 97
	.byte 114
	.byte 116
	.byte 117
	.byte 112
	.byte 95
	.byte 104
	.byte 111
	.byte 111
	.byte 107
	.byte 0
	.align	8
	.globl	l0604
	.align	8
l0604:	.long	0
	.long	14
	.byte 115
	.byte 116
	.byte 97
	.byte 99
	.byte 107
	.byte 108
	.byte 111
	.byte 119
	.byte 101
	.byte 114
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0605
	.align	8
l0605:	.long	0
	.long	11
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 108
	.byte 97
	.byte 115
	.byte 116
	.byte 115
	.byte 97
	.byte 118
	.byte 101
	.byte 0
	.align	8
	.globl	l0606
	.align	8
l0606:	.long	0
	.long	7
	.byte 112
	.byte 114
	.byte 101
	.byte 45
	.byte 109
	.byte 97
	.byte 105
	.byte 110
	.byte 0
	.align	8
	.globl	l0607
	.align	8
l0607:	.long	0
	.long	15
	.byte 101
	.byte 120
	.byte 105
	.byte 116
	.byte 45
	.byte 119
	.byte 105
	.byte 116
	.byte 104
	.byte 45
	.byte 115
	.byte 116
	.byte 97
	.byte 116
	.byte 117
	.byte 115
	.byte 0
	.align	8
	.globl	l0608
	.align	8
l0608:	.long	0
	.long	14
	.byte 111
	.byte 115
	.byte 95
	.byte 99
	.byte 108
	.byte 101
	.byte 97
	.byte 110
	.byte 117
	.byte 112
	.byte 95
	.byte 104
	.byte 111
	.byte 111
	.byte 107
	.byte 0
	.align	8
	.globl	l0609
	.align	8
l0609:	.long	0
	.long	12
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 101
	.byte 120
	.byte 105
	.byte 116
	.byte 0
	.align	8
	.globl	l0610
	.align	8
l0610:	.long	0
	.long	8
	.byte 95
	.byte 112
	.byte 115
	.byte 108
	.byte 95
	.byte 109
	.byte 97
	.byte 105
	.byte 110
	.byte 0
	.align	8
	.globl	l0611
	.align	8
l0611:	.long	0
	.long	10
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 99
	.byte 108
	.byte 101
	.byte 97
	.byte 114
	.byte 105
	.byte 111
	.byte 0
	.align	8
	.globl	l0612
	.align	8
l0612:	.long	0
	.long	22
	.byte 105
	.byte 110
	.byte 105
	.byte 116
	.byte 105
	.byte 97
	.byte 108
	.byte 105
	.byte 122
	.byte 101
	.byte 45
	.byte 115
	.byte 121
	.byte 109
	.byte 98
	.byte 111
	.byte 108
	.byte 45
	.byte 116
	.byte 97
	.byte 98
	.byte 108
	.byte 101
	.byte 0
	.align	8
	.globl	l0613
	.align	8
l0613:	.long	0
	.long	7
	.byte 105
	.byte 110
	.byte 105
	.byte 116
	.byte 99
	.byte 111
	.byte 100
	.byte 101
	.byte 0
	.align	8
	.globl	l0614
	.align	8
l0614:	.long	0
	.long	19
	.byte 99
	.byte 111
	.byte 110
	.byte 115
	.byte 111
	.byte 108
	.byte 101
	.byte 45
	.byte 112
	.byte 114
	.byte 105
	.byte 110
	.byte 116
	.byte 45
	.byte 115
	.byte 116
	.byte 114
	.byte 105
	.byte 110
	.byte 103
	.byte 0
	.align	8
	.globl	l0615
	.align	8
l0615:	.long	0
	.long	14
	.byte 99
	.byte 111
	.byte 110
	.byte 115
	.byte 111
	.byte 108
	.byte 101
	.byte 45
	.byte 110
	.byte 101
	.byte 119
	.byte 108
	.byte 105
	.byte 110
	.byte 101
	.byte 0
	.align	8
	.globl	l0616
	.align	8
l0616:	.long	0
	.long	5
	.byte 102
	.byte 97
	.byte 115
	.byte 108
	.byte 105
	.byte 110
	.byte 0
	.align	8
	.globl	l0617
	.align	8
l0617:	.long	0
	.long	10
	.byte 108
	.byte 111
	.byte 97
	.byte 100
	.byte 101
	.byte 114
	.byte 45
	.byte 109
	.byte 97
	.byte 105
	.byte 110
	.byte 0
	.align	8
	.globl	l0618
	.align	8
l0618:	.long	0
	.long	7
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 112
	.byte 117
	.byte 116
	.byte 115
	.byte 0
	.align	8
	.globl	l0619
	.align	8
l0619:	.long	0
	.long	7
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 112
	.byte 117
	.byte 116
	.byte 110
	.byte 0
	.align	8
	.globl	l0620
	.align	8
l0620:	.long	0
	.long	19
	.byte 99
	.byte 111
	.byte 110
	.byte 115
	.byte 111
	.byte 108
	.byte 101
	.byte 45
	.byte 112
	.byte 114
	.byte 105
	.byte 110
	.byte 116
	.byte 45
	.byte 110
	.byte 117
	.byte 109
	.byte 98
	.byte 101
	.byte 114
	.byte 0
	.align	8
	.globl	l0621
	.align	8
l0621:	.long	0
	.long	7
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 112
	.byte 117
	.byte 116
	.byte 99
	.byte 0
	.align	8
	.globl	l0622
	.align	8
l0622:	.long	0
	.long	7
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 111
	.byte 112
	.byte 101
	.byte 110
	.byte 0
	.align	8
	.globl	l0623
	.align	8
l0623:	.long	0
	.long	17
	.byte 107
	.byte 101
	.byte 114
	.byte 110
	.byte 101
	.byte 108
	.byte 45
	.byte 102
	.byte 97
	.byte 116
	.byte 97
	.byte 108
	.byte 45
	.byte 101
	.byte 114
	.byte 114
	.byte 111
	.byte 114
	.byte 0
	.align	8
	.globl	l0624
	.align	8
l0624:	.long	0
	.long	13
	.byte 98
	.byte 105
	.byte 110
	.byte 97
	.byte 114
	.byte 121
	.byte 111
	.byte 112
	.byte 101
	.byte 110
	.byte 114
	.byte 101
	.byte 97
	.byte 100
	.byte 0
	.align	8
	.globl	l0625
	.align	8
l0625:	.long	0
	.long	4
	.byte 120
	.byte 103
	.byte 101
	.byte 116
	.byte 119
	.byte 0
	.align	8
	.globl	l0626
	.align	8
l0626:	.long	0
	.long	9
	.byte 98
	.byte 105
	.byte 110
	.byte 97
	.byte 114
	.byte 121
	.byte 114
	.byte 101
	.byte 97
	.byte 100
	.byte 0
	.align	8
	.globl	l0627
	.align	8
l0627:	.long	0
	.long	4
	.byte 102
	.byte 114
	.byte 101
	.byte 97
	.byte 100
	.byte 0
	.align	8
	.globl	l0628
	.align	8
l0628:	.long	0
	.long	14
	.byte 98
	.byte 105
	.byte 110
	.byte 97
	.byte 114
	.byte 121
	.byte 114
	.byte 101
	.byte 97
	.byte 100
	.byte 98
	.byte 108
	.byte 111
	.byte 99
	.byte 107
	.byte 0
	.align	8
	.globl	l0629
	.align	8
l0629:	.long	0
	.long	5
	.byte 102
	.byte 99
	.byte 108
	.byte 111
	.byte 115
	.byte 101
	.byte 0
	.align	8
	.globl	l0630
	.align	8
l0630:	.long	0
	.long	10
	.byte 98
	.byte 105
	.byte 110
	.byte 97
	.byte 114
	.byte 121
	.byte 99
	.byte 108
	.byte 111
	.byte 115
	.byte 101
	.byte 0
	.align	8
	.globl	l0631
	.align	8
l0631:	.long	0
	.long	9
	.byte 110
	.byte 101
	.byte 120
	.byte 116
	.byte 115
	.byte 121
	.byte 109
	.byte 98
	.byte 111
	.byte 108
	.byte 0
	.align	8
	.globl	l0632
	.align	8
l0632:	.long	0
	.long	5
	.byte 115
	.byte 121
	.byte 109
	.byte 110
	.byte 97
	.byte 109
	.byte 0
	.align	8
	.globl	l0633
	.align	8
l0633:	.long	0
	.long	14
	.byte 104
	.byte 97
	.byte 115
	.byte 104
	.byte 45
	.byte 105
	.byte 110
	.byte 116
	.byte 111
	.byte 45
	.byte 116
	.byte 97
	.byte 98
	.byte 108
	.byte 101
	.byte 0
	.align	8
	.globl	l0634
	.align	8
l0634:	.long	0
	.long	11
	.byte 115
	.byte 104
	.byte 111
	.byte 119
	.byte 45
	.byte 110
	.byte 101
	.byte 119
	.byte 45
	.byte 105
	.byte 100
	.byte 115
	.byte 0
	.align	8
	.globl	l0635
	.align	8
l0635:	.long	0
	.long	26
	.byte 115
	.byte 101
	.byte 97
	.byte 114
	.byte 99
	.byte 104
	.byte 45
	.byte 115
	.byte 116
	.byte 114
	.byte 105
	.byte 110
	.byte 103
	.byte 45
	.byte 102
	.byte 111
	.byte 114
	.byte 45
	.byte 99
	.byte 104
	.byte 97
	.byte 114
	.byte 97
	.byte 99
	.byte 116
	.byte 101
	.byte 114
	.byte 0
	.align	8
	.globl	l0636
	.align	8
l0636:	.long	0
	.long	5
	.byte 105
	.byte 110
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 0
	.align	8
	.globl	l0637
	.align	8
l0637:	.long	0
	.long	5
	.byte 115
	.byte 117
	.byte 98
	.byte 115
	.byte 101
	.byte 113
	.byte 0
	.align	8
	.globl	l0638
	.align	8
l0638:	.long	0
	.long	12
	.byte 102
	.byte 97
	.byte 115
	.byte 108
	.byte 105
	.byte 110
	.byte 45
	.byte 105
	.byte 110
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 0
	.align	8
	.globl	l0639
	.align	8
l0639:	.long	0
	.long	22
	.byte 117
	.byte 110
	.byte 99
	.byte 104
	.byte 101
	.byte 99
	.byte 107
	.byte 101
	.byte 100
	.byte 45
	.byte 115
	.byte 116
	.byte 114
	.byte 105
	.byte 110
	.byte 103
	.byte 45
	.byte 105
	.byte 110
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 0
	.align	8
	.globl	l0640
	.align	8
l0640:	.long	0
	.long	3
	.byte 103
	.byte 116
	.byte 105
	.byte 100
	.byte 0
	.align	8
	.globl	l0641
	.align	8
l0641:	.long	0
	.long	9
	.byte 103
	.byte 116
	.byte 99
	.byte 111
	.byte 110
	.byte 115
	.byte 116
	.byte 115
	.byte 116
	.byte 114
	.byte 0
	.align	8
	.globl	l0642
	.align	8
l0642:	.long	0
	.long	15
	.byte 99
	.byte 111
	.byte 112
	.byte 121
	.byte 115
	.byte 116
	.byte 114
	.byte 105
	.byte 110
	.byte 103
	.byte 116
	.byte 111
	.byte 102
	.byte 114
	.byte 111
	.byte 109
	.byte 0
	.align	8
	.globl	l0643
	.align	8
l0643:	.long	0
	.long	16
	.byte 105
	.byte 110
	.byte 105
	.byte 116
	.byte 105
	.byte 97
	.byte 108
	.byte 105
	.byte 122
	.byte 101
	.byte 45
	.byte 110
	.byte 101
	.byte 119
	.byte 45
	.byte 105
	.byte 100
	.byte 0
	.align	8
	.globl	l0644
	.align	8
l0644:	.long	0
	.long	12
	.byte 104
	.byte 97
	.byte 115
	.byte 104
	.byte 45
	.byte 102
	.byte 117
	.byte 110
	.byte 99
	.byte 116
	.byte 105
	.byte 111
	.byte 110
	.byte 0
	.align	8
	.globl	l0645
	.align	8
l0645:	.long	0
	.long	21
	.byte 117
	.byte 110
	.byte 99
	.byte 104
	.byte 101
	.byte 99
	.byte 107
	.byte 101
	.byte 100
	.byte 45
	.byte 115
	.byte 116
	.byte 114
	.byte 105
	.byte 110
	.byte 103
	.byte 45
	.byte 101
	.byte 113
	.byte 117
	.byte 97
	.byte 108
	.byte 0
	.align	8
	.globl	l0646
	.align	8
l0646:	.long	0
	.long	5
	.byte 115
	.byte 121
	.byte 109
	.byte 112
	.byte 114
	.byte 112
	.byte 0
	.align	8
	.globl	l0647
	.align	8
l0647:	.long	0
	.long	5
	.byte 115
	.byte 121
	.byte 109
	.byte 103
	.byte 101
	.byte 116
	.byte 0
	.align	8
	.globl	l0648
	.align	8
l0648:	.long	0
	.long	11
	.byte 112
	.byte 108
	.byte 97
	.byte 110
	.byte 116
	.byte 117
	.byte 110
	.byte 98
	.byte 111
	.byte 117
	.byte 110
	.byte 100
	.byte 0
	.align	8
	.globl	l0649
	.align	8
l0649:	.long	0
	.long	14
	.byte 102
	.byte 97
	.byte 115
	.byte 108
	.byte 105
	.byte 110
	.byte 45
	.byte 98
	.byte 97
	.byte 100
	.byte 45
	.byte 102
	.byte 105
	.byte 108
	.byte 101
	.byte 0
	.align	8
	.globl	l0650
	.align	8
l0650:	.long	0
	.long	12
	.byte 114
	.byte 101
	.byte 97
	.byte 100
	.byte 45
	.byte 105
	.byte 100
	.byte 45
	.byte 116
	.byte 97
	.byte 98
	.byte 108
	.byte 101
	.byte 0
	.align	8
	.globl	l0651
	.align	8
l0651:	.long	0
	.long	4
	.byte 103
	.byte 116
	.byte 98
	.byte 112
	.byte 115
	.byte 0
	.align	8
	.globl	l0652
	.align	8
l0652:	.long	0
	.long	5
	.byte 103
	.byte 116
	.byte 119
	.byte 114
	.byte 100
	.byte 115
	.byte 0
	.align	8
	.globl	l0653
	.align	8
l0653:	.long	0
	.long	13
	.byte 99
	.byte 111
	.byte 100
	.byte 101
	.byte 45
	.byte 98
	.byte 97
	.byte 115
	.byte 101
	.byte 45
	.byte 104
	.byte 97
	.byte 99
	.byte 107
	.byte 0
	.align	8
	.globl	l0654
	.align	8
l0654:	.long	0
	.long	9
	.byte 102
	.byte 108
	.byte 117
	.byte 115
	.byte 104
	.byte 99
	.byte 97
	.byte 99
	.byte 104
	.byte 101
	.byte 0
	.align	8
	.globl	l0655
	.align	8
l0655:	.long	0
	.long	14
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 115
	.byte 121
	.byte 115
	.byte 116
	.byte 101
	.byte 109
	.byte 0
	.align	8
	.globl	l0656
	.align	8
l0656:	.long	0
	.long	5
	.byte 100
	.byte 101
	.byte 108
	.byte 98
	.byte 112
	.byte 115
	.byte 0
	.align	8
	.globl	l0657
	.align	8
l0657:	.long	0
	.long	3
	.byte 112
	.byte 117
	.byte 116
	.byte 100
	.byte 0
	.align	8
	.globl	l0658
	.align	8
l0658:	.long	0
	.long	7
	.byte 112
	.byte 117
	.byte 116
	.byte 101
	.byte 110
	.byte 116
	.byte 114
	.byte 121
	.byte 0
	.align	8
	.globl	l0659
	.align	8
l0659:	.long	0
	.long	14
	.byte 103
	.byte 116
	.byte 98
	.byte 112
	.byte 115
	.byte 45
	.byte 110
	.byte 105
	.byte 108
	.byte 45
	.byte 101
	.byte 114
	.byte 114
	.byte 111
	.byte 114
	.byte 0
	.align	8
	.globl	l0660
	.align	8
l0660:	.long	0
	.long	3
	.byte 103
	.byte 101
	.byte 116
	.byte 100
	.byte 0
	.align	8
	.globl	l0661
	.align	8
l0661:	.long	0
	.long	19
	.byte 116
	.byte 114
	.byte 121
	.byte 45
	.byte 111
	.byte 116
	.byte 104
	.byte 101
	.byte 114
	.byte 45
	.byte 98
	.byte 112
	.byte 115
	.byte 45
	.byte 115
	.byte 112
	.byte 97
	.byte 99
	.byte 101
	.byte 115
	.byte 0
	.align	8
	.globl	l0662
	.align	8
l0662:	.long	0
	.long	7
	.byte 115
	.byte 116
	.byte 100
	.byte 101
	.byte 114
	.byte 114
	.byte 111
	.byte 114
	.byte 0
	.align	8
	.globl	l0663
	.align	8
l0663:	.long	0
	.long	15
	.byte 107
	.byte 110
	.byte 111
	.byte 119
	.byte 110
	.byte 45
	.byte 102
	.byte 114
	.byte 101
	.byte 101
	.byte 45
	.byte 115
	.byte 112
	.byte 97
	.byte 99
	.byte 101
	.byte 0
	.align	8
	.globl	l0664
	.align	8
l0664:	.long	0
	.long	10
	.byte 114
	.byte 101
	.byte 97
	.byte 108
	.byte 45
	.byte 103
	.byte 116
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 0
	.align	8
	.globl	l0665
	.align	8
l0665:	.long	0
	.long	5
	.byte 103
	.byte 116
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 0
	.align	8
	.globl	l0666
	.align	8
l0666:	.long	0
	.long	12
	.byte 103
	.byte 101
	.byte 116
	.byte 45
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 45
	.byte 116
	.byte 114
	.byte 97
	.byte 112
	.byte 0
	.align	8
	.globl	l0667
	.align	8
l0667:	.long	0
	.long	6
	.byte 114
	.byte 101
	.byte 99
	.byte 108
	.byte 97
	.byte 105
	.byte 109
	.byte 0
	.align	8
	.globl	l0668
	.align	8
l0668:	.long	0
	.long	4
	.byte 103
	.byte 116
	.byte 115
	.byte 116
	.byte 114
	.byte 0
	.align	8
	.globl	l0669
	.align	8
l0669:	.long	0
	.long	3
	.byte 99
	.byte 111
	.byte 110
	.byte 115
	.byte 0
	.align	8
	.globl	l0670
	.align	8
l0670:	.long	0
	.long	10
	.byte 105
	.byte 110
	.byte 116
	.byte 101
	.byte 114
	.byte 114
	.byte 111
	.byte 103
	.byte 97
	.byte 116
	.byte 101
	.byte 0
	.align	8
	.globl	l0671
	.align	8
l0671:	.long	0
	.long	5
	.byte 109
	.byte 111
	.byte 100
	.byte 105
	.byte 102
	.byte 121
	.byte 0
	.align	8
	.globl	l0672
	.align	8
l0672:	.long	0
	.long	12
	.byte 117
	.byte 110
	.byte 99
	.byte 104
	.byte 101
	.byte 99
	.byte 107
	.byte 101
	.byte 100
	.byte 45
	.byte 112
	.byte 117
	.byte 116
	.byte 0
	.align	8
	.globl	l0673
	.align	8
l0673:	.long	0
	.long	2
	.byte 112
	.byte 117
	.byte 116
	.byte 0
	.align	8
	.globl	l0674
	.align	8
l0674:	.long	0
	.long	13
	.byte 117
	.byte 110
	.byte 99
	.byte 104
	.byte 101
	.byte 99
	.byte 107
	.byte 101
	.byte 100
	.byte 45
	.byte 112
	.byte 114
	.byte 111
	.byte 112
	.byte 0
	.align	8
	.globl	l0675
	.align	8
l0675:	.long	0
	.long	4
	.byte 97
	.byte 116
	.byte 115
	.byte 111
	.byte 99
	.byte 0
	.align	8
	.globl	l0676
	.align	8
l0676:	.long	0
	.long	16
	.byte 117
	.byte 110
	.byte 99
	.byte 104
	.byte 101
	.byte 99
	.byte 107
	.byte 101
	.byte 100
	.byte 45
	.byte 115
	.byte 101
	.byte 116
	.byte 112
	.byte 114
	.byte 111
	.byte 112
	.byte 0
	.align	8
	.globl	l0677
	.align	8
l0677:	.long	0
	.long	8
	.byte 99
	.byte 111
	.byte 100
	.byte 101
	.byte 45
	.byte 112
	.byte 117
	.byte 116
	.byte 100
	.byte 0
	.align	8
	.globl	l0678
	.align	8
l0678:	.long	0
	.long	15
	.byte 112
	.byte 108
	.byte 97
	.byte 110
	.byte 116
	.byte 99
	.byte 111
	.byte 100
	.byte 101
	.byte 112
	.byte 111
	.byte 105
	.byte 110
	.byte 116
	.byte 101
	.byte 114
	.byte 0
	.align	8
	.globl	l0679
	.align	8
l0679:	.long	0
	.long	3
	.byte 116
	.byte 121
	.byte 112
	.byte 101
	.byte 0
	.align	8
	.globl	l0680
	.align	8
l0680:	.long	0
	.long	3
	.byte 101
	.byte 120
	.byte 112
	.byte 114
	.byte 0
	.align	8
	.globl	l0681
	.align	8
l0681:	.long	0
	.long	5
	.byte 102
	.byte 108
	.byte 117
	.byte 105
	.byte 100
	.byte 49
	.byte 0
	.align	8
	.globl	l0682
	.align	8
l0682:	.long	0
	.long	4
	.byte 102
	.byte 108
	.byte 117
	.byte 105
	.byte 100
	.byte 0
	.align	8
	.globl	l0683
	.align	8
l0683:	.long	0
	.long	6
	.byte 118
	.byte 97
	.byte 114
	.byte 116
	.byte 121
	.byte 112
	.byte 101
	.byte 0
	.align	8
	.globl	l0684
	.align	8
l0684:	.long	0
	.long	15
	.byte 42
	.byte 100
	.byte 101
	.byte 102
	.byte 105
	.byte 110
	.byte 101
	.byte 45
	.byte 99
	.byte 111
	.byte 110
	.byte 115
	.byte 116
	.byte 97
	.byte 110
	.byte 116
	.byte 0
	.align	8
	.globl	l0685
	.align	8
l0685:	.long	0
	.long	8
	.byte 99
	.byte 111
	.byte 110
	.byte 115
	.byte 116
	.byte 97
	.byte 110
	.byte 116
	.byte 63
	.byte 0
	.align	8
	.globl	l0686
	.align	8
l0686:	.long	0
	.long	16
	.byte 117
	.byte 110
	.byte 100
	.byte 101
	.byte 102
	.byte 105
	.byte 110
	.byte 101
	.byte 100
	.byte 102
	.byte 117
	.byte 110
	.byte 99
	.byte 116
	.byte 105
	.byte 111
	.byte 110
	.byte 0
	.align	8
	.globl	l0687
	.align	8
l0687:	.long	0
	.long	25
	.byte 99
	.byte 111
	.byte 109
	.byte 112
	.byte 105
	.byte 108
	.byte 101
	.byte 100
	.byte 99
	.byte 97
	.byte 108
	.byte 108
	.byte 105
	.byte 110
	.byte 103
	.byte 105
	.byte 110
	.byte 116
	.byte 101
	.byte 114
	.byte 112
	.byte 114
	.byte 101
	.byte 116
	.byte 101
	.byte 100
	.byte 0
	.align	8
	.globl	l0688
	.align	8
l0688:	.long	0
	.long	14
	.byte 112
	.byte 108
	.byte 97
	.byte 110
	.byte 116
	.byte 108
	.byte 97
	.byte 109
	.byte 98
	.byte 100
	.byte 97
	.byte 108
	.byte 105
	.byte 110
	.byte 107
	.byte 0
	.align	8
	.globl	l0689
	.align	8
l0689:	.long	0
	.long	28
	.byte 99
	.byte 111
	.byte 109
	.byte 112
	.byte 105
	.byte 108
	.byte 101
	.byte 100
	.byte 99
	.byte 97
	.byte 108
	.byte 108
	.byte 105
	.byte 110
	.byte 103
	.byte 105
	.byte 110
	.byte 116
	.byte 101
	.byte 114
	.byte 112
	.byte 114
	.byte 101
	.byte 116
	.byte 101
	.byte 100
	.byte 97
	.byte 117
	.byte 120
	.byte 0
	.align	8
	.globl	l0690
	.align	8
l0690:	.long	0
	.long	7
	.byte 98
	.byte 105
	.byte 116
	.byte 116
	.byte 97
	.byte 98
	.byte 108
	.byte 101
	.byte 0
	.align	8
	.globl	l0691
	.align	8
l0691:	.long	0
	.long	19
	.byte 117
	.byte 110
	.byte 100
	.byte 101
	.byte 102
	.byte 105
	.byte 110
	.byte 101
	.byte 100
	.byte 102
	.byte 117
	.byte 110
	.byte 99
	.byte 116
	.byte 105
	.byte 111
	.byte 110
	.byte 97
	.byte 117
	.byte 120
	.byte 0
	.align	8
	.globl	l0692
	.align	8
l0692:	.long	0
	.long	10
	.byte 115
	.byte 105
	.byte 103
	.byte 110
	.byte 97
	.byte 108
	.byte 45
	.byte 100
	.byte 111
	.byte 110
	.byte 101
	.byte 0
	.align	8
	.globl	l0693
	.align	8
l0693:	.long	0
	.long	14
	.byte 105
	.byte 98
	.byte 109
	.byte 114
	.byte 115
	.byte 45
	.byte 115
	.byte 105
	.byte 103
	.byte 110
	.byte 117
	.byte 109
	.byte 98
	.byte 101
	.byte 114
	.byte 0
	.align	8
	.globl	l0694
	.align	8
l0694:	.long	0
	.long	10
	.byte 105
	.byte 98
	.byte 109
	.byte 114
	.byte 115
	.byte 45
	.byte 115
	.byte 105
	.byte 103
	.byte 99
	.byte 112
	.byte 0
	.align	8
	.globl	l0695
	.align	8
l0695:	.long	0
	.long	12
	.byte 105
	.byte 98
	.byte 109
	.byte 114
	.byte 115
	.byte 45
	.byte 115
	.byte 105
	.byte 103
	.byte 97
	.byte 100
	.byte 100
	.byte 114
	.byte 0
	.align	8
	.globl	l0696
	.align	8
l0696:	.long	0
	.long	10
	.byte 105
	.byte 98
	.byte 109
	.byte 114
	.byte 115
	.byte 45
	.byte 115
	.byte 105
	.byte 103
	.byte 112
	.byte 99
	.byte 0
	.align	8
	.globl	l0697
	.align	8
l0697:	.long	0
	.long	10
	.byte 42
	.byte 107
	.byte 101
	.byte 114
	.byte 110
	.byte 101
	.byte 108
	.byte 109
	.byte 111
	.byte 100
	.byte 101
	.byte 0
	.align	8
	.globl	l0698
	.align	8
l0698:	.long	0
	.long	6
	.byte 42
	.byte 98
	.byte 114
	.byte 117
	.byte 99
	.byte 104
	.byte 42
	.byte 0
	.align	8
	.globl	l0699
	.align	8
l0699:	.long	0
	.long	15
	.byte 105
	.byte 98
	.byte 109
	.byte 114
	.byte 115
	.byte 45
	.byte 100
	.byte 117
	.byte 109
	.byte 112
	.byte 97
	.byte 114
	.byte 114
	.byte 97
	.byte 121
	.byte 42
	.byte 0
	.align	8
	.globl	l0700
	.align	8
l0700:	.long	0
	.long	13
	.byte 115
	.byte 105
	.byte 103
	.byte 110
	.byte 97
	.byte 108
	.byte 104
	.byte 97
	.byte 101
	.byte 110
	.byte 100
	.byte 108
	.byte 101
	.byte 114
	.byte 0
	.align	8
	.globl	l0701
	.align	8
l0701:	.long	0
	.long	14
	.byte 95
	.byte 115
	.byte 105
	.byte 103
	.byte 110
	.byte 97
	.byte 108
	.byte 104
	.byte 97
	.byte 101
	.byte 110
	.byte 100
	.byte 108
	.byte 101
	.byte 114
	.byte 0
	.align	8
	.globl	l0702
	.align	8
l0702:	.long	0
	.long	11
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 45
	.byte 112
	.byte 114
	.byte 111
	.byte 102
	.byte 105
	.byte 108
	.byte 101
	.byte 0
	.align	8
	.globl	l0703
	.align	8
l0703:	.long	0
	.long	18
	.byte 42
	.byte 102
	.byte 111
	.byte 114
	.byte 101
	.byte 105
	.byte 103
	.byte 110
	.byte 45
	.byte 102
	.byte 117
	.byte 110
	.byte 99
	.byte 116
	.byte 105
	.byte 111
	.byte 110
	.byte 115
	.byte 42
	.byte 0
	.align	8
	.globl	l0704
	.align	8
l0704:	.long	0
	.long	4
	.byte 102
	.byte 108
	.byte 97
	.byte 103
	.byte 49
	.byte 0
	.align	8
	.globl	l0705
	.align	8
l0705:	.long	0
	.long	4
	.byte 108
	.byte 105
	.byte 115
	.byte 116
	.byte 52
	.byte 0
	.align	8
	.globl	l0706
	.align	8
l0706:	.long	0
	.long	19
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 45
	.byte 54
	.byte 52
	.byte 45
	.byte 102
	.byte 117
	.byte 110
	.byte 99
	.byte 116
	.byte 105
	.byte 111
	.byte 110
	.byte 0
	.align	8
	.globl	l0707
	.align	8
l0707:	.long	0
	.long	1
	.byte 100
	.byte 101
	.byte 0
	.align	8
	.globl	l0708
	.align	8
l0708:	.long	0
	.long	17
	.byte 54
	.byte 52
	.byte 45
	.byte 102
	.byte 111
	.byte 114
	.byte 101
	.byte 105
	.byte 103
	.byte 110
	.byte 102
	.byte 117
	.byte 110
	.byte 99
	.byte 116
	.byte 105
	.byte 111
	.byte 110
	.byte 0
	.align	8
	.globl	l0709
	.align	8
l0709:	.long	0
	.long	19
	.byte 102
	.byte 108
	.byte 117
	.byte 115
	.byte 104
	.byte 115
	.byte 116
	.byte 100
	.byte 111
	.byte 117
	.byte 116
	.byte 112
	.byte 117
	.byte 116
	.byte 98
	.byte 117
	.byte 102
	.byte 102
	.byte 101
	.byte 114
	.byte 0
	.align	8
	.globl	l0710
	.align	8
l0710:	.long	0
	.long	27
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 117
	.byte 115
	.byte 101
	.byte 114
	.byte 95
	.byte 104
	.byte 111
	.byte 109
	.byte 101
	.byte 100
	.byte 105
	.byte 114
	.byte 95
	.byte 115
	.byte 116
	.byte 114
	.byte 105
	.byte 110
	.byte 103
	.byte 0
	.align	8
	.globl	l0711
	.align	8
l0711:	.long	0
	.long	30
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 97
	.byte 110
	.byte 121
	.byte 117
	.byte 115
	.byte 101
	.byte 114
	.byte 95
	.byte 104
	.byte 111
	.byte 109
	.byte 101
	.byte 100
	.byte 105
	.byte 114
	.byte 95
	.byte 115
	.byte 116
	.byte 114
	.byte 105
	.byte 110
	.byte 103
	.byte 0
	.align	8
	.globl	l0712
	.align	8
l0712:	.long	0
	.long	12
	.byte 97
	.byte 108
	.byte 116
	.byte 101
	.byte 114
	.byte 104
	.byte 101
	.byte 97
	.byte 112
	.byte 115
	.byte 105
	.byte 122
	.byte 101
	.byte 0
	.align	8
	.globl	l0713
	.align	8
l0713:	.long	0
	.long	14
	.byte 97
	.byte 108
	.byte 108
	.byte 111
	.byte 99
	.byte 97
	.byte 116
	.byte 101
	.byte 109
	.byte 111
	.byte 114
	.byte 101
	.byte 98
	.byte 112
	.byte 115
	.byte 0
	.align	8
	.globl	l0714
	.align	8
l0714:	.long	0
	.long	14
	.byte 103
	.byte 101
	.byte 116
	.byte 95
	.byte 102
	.byte 105
	.byte 108
	.byte 101
	.byte 95
	.byte 115
	.byte 116
	.byte 97
	.byte 116
	.byte 117
	.byte 115
	.byte 0
	.align	8
	.globl	l0715
	.align	8
l0715:	.long	0
	.long	13
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 97
	.byte 108
	.byte 97
	.byte 114
	.byte 109
	.byte 0
	.align	8
	.globl	l0716
	.align	8
l0716:	.long	0
	.long	14
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 117
	.byte 97
	.byte 108
	.byte 97
	.byte 114
	.byte 109
	.byte 0
	.align	8
	.globl	l0717
	.align	8
l0717:	.long	0
	.long	12
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 116
	.byte 105
	.byte 109
	.byte 101
	.byte 0
	.align	8
	.globl	l0718
	.align	8
l0718:	.long	0
	.long	12
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 116
	.byte 105
	.byte 109
	.byte 99
	.byte 0
	.align	8
	.globl	l0719
	.align	8
l0719:	.long	0
	.long	12
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 115
	.byte 116
	.byte 97
	.byte 116
	.byte 0
	.align	8
	.globl	l0720
	.align	8
l0720:	.long	0
	.long	12
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 108
	.byte 105
	.byte 110
	.byte 107
	.byte 0
	.align	8
	.globl	l0721
	.align	8
l0721:	.long	0
	.long	14
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 117
	.byte 110
	.byte 108
	.byte 105
	.byte 110
	.byte 107
	.byte 0
	.align	8
	.globl	l0722
	.align	8
l0722:	.long	0
	.long	14
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 115
	.byte 116
	.byte 114
	.byte 108
	.byte 101
	.byte 110
	.byte 0
	.align	8
	.globl	l0723
	.align	8
l0723:	.long	0
	.long	14
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 115
	.byte 101
	.byte 116
	.byte 101
	.byte 110
	.byte 118
	.byte 0
	.align	8
	.globl	l0724
	.align	8
l0724:	.long	0
	.long	14
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 103
	.byte 101
	.byte 116
	.byte 101
	.byte 110
	.byte 118
	.byte 0
	.align	8
	.globl	l0725
	.align	8
l0725:	.long	0
	.long	6
	.byte 117
	.byte 120
	.byte 102
	.byte 108
	.byte 111
	.byte 97
	.byte 116
	.byte 0
	.align	8
	.globl	l0726
	.align	8
l0726:	.long	0
	.long	4
	.byte 117
	.byte 120
	.byte 102
	.byte 105
	.byte 120
	.byte 0
	.align	8
	.globl	l0727
	.align	8
l0727:	.long	0
	.long	7
	.byte 117
	.byte 120
	.byte 97
	.byte 115
	.byte 115
	.byte 105
	.byte 103
	.byte 110
	.byte 0
	.align	8
	.globl	l0728
	.align	8
l0728:	.long	0
	.long	6
	.byte 117
	.byte 120
	.byte 112
	.byte 108
	.byte 117
	.byte 115
	.byte 50
	.byte 0
	.align	8
	.globl	l0729
	.align	8
l0729:	.long	0
	.long	11
	.byte 117
	.byte 120
	.byte 100
	.byte 105
	.byte 102
	.byte 102
	.byte 101
	.byte 114
	.byte 101
	.byte 110
	.byte 99
	.byte 101
	.byte 0
	.align	8
	.globl	l0730
	.align	8
l0730:	.long	0
	.long	7
	.byte 117
	.byte 120
	.byte 116
	.byte 105
	.byte 109
	.byte 101
	.byte 115
	.byte 50
	.byte 0
	.align	8
	.globl	l0731
	.align	8
l0731:	.long	0
	.long	9
	.byte 117
	.byte 120
	.byte 113
	.byte 117
	.byte 111
	.byte 116
	.byte 105
	.byte 101
	.byte 110
	.byte 116
	.byte 0
	.align	8
	.globl	l0732
	.align	8
l0732:	.long	0
	.long	9
	.byte 117
	.byte 120
	.byte 103
	.byte 114
	.byte 101
	.byte 97
	.byte 116
	.byte 101
	.byte 114
	.byte 112
	.byte 0
	.align	8
	.globl	l0733
	.align	8
l0733:	.long	0
	.long	6
	.byte 117
	.byte 120
	.byte 108
	.byte 101
	.byte 115
	.byte 115
	.byte 112
	.byte 0
	.align	8
	.globl	l0734
	.align	8
l0734:	.long	0
	.long	11
	.byte 117
	.byte 120
	.byte 119
	.byte 114
	.byte 105
	.byte 116
	.byte 101
	.byte 102
	.byte 108
	.byte 111
	.byte 97
	.byte 116
	.byte 0
	.align	8
	.globl	l0735
	.align	8
l0735:	.long	0
	.long	14
	.byte 117
	.byte 120
	.byte 100
	.byte 111
	.byte 117
	.byte 98
	.byte 108
	.byte 101
	.byte 116
	.byte 111
	.byte 102
	.byte 108
	.byte 111
	.byte 97
	.byte 116
	.byte 0
	.align	8
	.globl	l0736
	.align	8
l0736:	.long	0
	.long	14
	.byte 117
	.byte 120
	.byte 102
	.byte 108
	.byte 111
	.byte 97
	.byte 116
	.byte 116
	.byte 111
	.byte 100
	.byte 111
	.byte 117
	.byte 98
	.byte 108
	.byte 101
	.byte 0
	.align	8
	.globl	l0737
	.align	8
l0737:	.long	0
	.long	4
	.byte 117
	.byte 120
	.byte 115
	.byte 105
	.byte 110
	.byte 0
	.align	8
	.globl	l0738
	.align	8
l0738:	.long	0
	.long	4
	.byte 117
	.byte 120
	.byte 99
	.byte 111
	.byte 115
	.byte 0
	.align	8
	.globl	l0739
	.align	8
l0739:	.long	0
	.long	4
	.byte 117
	.byte 120
	.byte 116
	.byte 97
	.byte 110
	.byte 0
	.align	8
	.globl	l0740
	.align	8
l0740:	.long	0
	.long	5
	.byte 117
	.byte 120
	.byte 97
	.byte 115
	.byte 105
	.byte 110
	.byte 0
	.align	8
	.globl	l0741
	.align	8
l0741:	.long	0
	.long	5
	.byte 117
	.byte 120
	.byte 97
	.byte 99
	.byte 111
	.byte 115
	.byte 0
	.align	8
	.globl	l0742
	.align	8
l0742:	.long	0
	.long	5
	.byte 117
	.byte 120
	.byte 97
	.byte 116
	.byte 97
	.byte 110
	.byte 0
	.align	8
	.globl	l0743
	.align	8
l0743:	.long	0
	.long	5
	.byte 117
	.byte 120
	.byte 115
	.byte 113
	.byte 114
	.byte 116
	.byte 0
	.align	8
	.globl	l0744
	.align	8
l0744:	.long	0
	.long	4
	.byte 117
	.byte 120
	.byte 101
	.byte 120
	.byte 112
	.byte 0
	.align	8
	.globl	l0745
	.align	8
l0745:	.long	0
	.long	4
	.byte 117
	.byte 120
	.byte 108
	.byte 111
	.byte 103
	.byte 0
	.align	8
	.globl	l0746
	.align	8
l0746:	.long	0
	.long	6
	.byte 117
	.byte 120
	.byte 97
	.byte 116
	.byte 97
	.byte 110
	.byte 50
	.byte 0
	.align	8
	.globl	l0747
	.align	8
l0747:	.long	0
	.long	11
	.byte 101
	.byte 120
	.byte 116
	.byte 101
	.byte 114
	.byte 110
	.byte 97
	.byte 108
	.byte 95
	.byte 112
	.byte 119
	.byte 100
	.byte 0
	.align	8
	.globl	l0748
	.align	8
l0748:	.long	0
	.long	9
	.byte 112
	.byte 115
	.byte 108
	.byte 95
	.byte 115
	.byte 105
	.byte 103
	.byte 115
	.byte 101
	.byte 116
	.byte 0
	.align	8
	.globl	l0749
	.align	8
l0749:	.long	0
	.long	7
	.byte 115
	.byte 105
	.byte 103
	.byte 114
	.byte 101
	.byte 108
	.byte 115
	.byte 101
	.byte 0
	.align	8
	.globl	l0750
	.align	8
l0750:	.long	0
	.long	5
	.byte 117
	.byte 110
	.byte 101
	.byte 120
	.byte 101
	.byte 99
	.byte 0
	.align	8
	.globl	l0751
	.align	8
l0751:	.long	0
	.long	15
	.byte 101
	.byte 120
	.byte 112
	.byte 97
	.byte 110
	.byte 100
	.byte 95
	.byte 102
	.byte 105
	.byte 108
	.byte 101
	.byte 95
	.byte 110
	.byte 97
	.byte 109
	.byte 101
	.byte 0
	.align	8
	.globl	l0752
	.align	8
l0752:	.long	0
	.long	5
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 99
	.byte 100
	.byte 0
	.align	8
	.globl	l0753
	.align	8
l0753:	.long	0
	.long	4
	.byte 99
	.byte 116
	.byte 105
	.byte 109
	.byte 101
	.byte 0
	.align	8
	.globl	l0754
	.align	8
l0754:	.long	0
	.long	4
	.byte 102
	.byte 111
	.byte 112
	.byte 101
	.byte 110
	.byte 0
	.align	8
	.globl	l0755
	.align	8
l0755:	.long	0
	.long	4
	.byte 102
	.byte 112
	.byte 117
	.byte 116
	.byte 99
	.byte 0
	.align	8
	.globl	l0756
	.align	8
l0756:	.long	0
	.long	4
	.byte 102
	.byte 103
	.byte 101
	.byte 116
	.byte 99
	.byte 0
	.align	8
	.globl	l0757
	.align	8
l0757:	.long	0
	.long	4
	.byte 102
	.byte 103
	.byte 101
	.byte 116
	.byte 115
	.byte 0
	.align	8
	.globl	l0758
	.align	8
l0758:	.long	0
	.long	5
	.byte 102
	.byte 119
	.byte 114
	.byte 105
	.byte 116
	.byte 101
	.byte 0
	.align	8
	.globl	l0759
	.align	8
l0759:	.long	0
	.long	5
	.byte 102
	.byte 102
	.byte 108
	.byte 117
	.byte 115
	.byte 104
	.byte 0
	.align	8
	.globl	l0760
	.align	8
l0760:	.long	0
	.long	4
	.byte 102
	.byte 115
	.byte 101
	.byte 101
	.byte 107
	.byte 0
	.align	8
	.globl	l0761
	.align	8
l0761:	.long	0
	.long	7
	.byte 99
	.byte 108
	.byte 101
	.byte 97
	.byte 114
	.byte 101
	.byte 114
	.byte 114
	.byte 0
	.align	8
	.globl	l0762
	.align	8
l0762:	.long	0
	.long	3
	.byte 103
	.byte 101
	.byte 116
	.byte 119
	.byte 0
	.align	8
	.globl	l0763
	.align	8
l0763:	.long	0
	.long	3
	.byte 112
	.byte 117
	.byte 116
	.byte 119
	.byte 0
	.align	8
	.globl	l0764
	.align	8
l0764:	.long	0
	.long	5
	.byte 115
	.byte 105
	.byte 103
	.byte 110
	.byte 97
	.byte 108
	.byte 0
	.align	8
	.globl	l0765
	.align	8
l0765:	.long	0
	.long	4
	.byte 115
	.byte 108
	.byte 101
	.byte 101
	.byte 112
	.byte 0
	.align	8
	.globl	l0766
	.align	8
l0766:	.long	0
	.long	5
	.byte 115
	.byte 101
	.byte 116
	.byte 106
	.byte 109
	.byte 112
	.byte 0
	.align	8
	.globl	l0767
	.align	8
l0767:	.long	0
	.long	6
	.byte 108
	.byte 111
	.byte 110
	.byte 103
	.byte 106
	.byte 109
	.byte 112
	.byte 0
	.align	8
	.globl	l0768
	.align	8
l0768:	.long	0
	.long	3
	.byte 102
	.byte 111
	.byte 114
	.byte 107
	.byte 0
	.align	8
	.globl	l0769
	.align	8
l0769:	.long	0
	.long	3
	.byte 119
	.byte 97
	.byte 105
	.byte 116
	.byte 0
	.align	8
	.globl	l0770
	.align	8
l0770:	.long	0
	.long	6
	.byte 100
	.byte 97
	.byte 116
	.byte 101
	.byte 116
	.byte 97
	.byte 103
	.byte 0
	.align	8
	.globl	l0771
	.align	8
l0771:	.long	0
	.long	7
	.byte 105
	.byte 111
	.byte 98
	.byte 117
	.byte 102
	.byte 102
	.byte 101
	.byte 114
	.byte 0
	.align	8
	.globl	l0772
	.align	8
l0772:	.long	0
	.long	13
	.byte 98
	.byte 115
	.byte 116
	.byte 97
	.byte 99
	.byte 107
	.byte 111
	.byte 118
	.byte 101
	.byte 114
	.byte 102
	.byte 108
	.byte 111
	.byte 119
	.byte 0
	.align	8
	.globl	l0773
	.align	8
l0773:	.long	0
	.long	14
	.byte 98
	.byte 115
	.byte 116
	.byte 97
	.byte 99
	.byte 107
	.byte 117
	.byte 110
	.byte 100
	.byte 101
	.byte 114
	.byte 102
	.byte 108
	.byte 111
	.byte 119
	.byte 0
	.align	8
	.globl	l0774
	.align	8
l0774:	.long	0
	.long	9
	.byte 115
	.byte 101
	.byte 116
	.byte 108
	.byte 105
	.byte 110
	.byte 101
	.byte 98
	.byte 117
	.byte 102
	.byte 0
	.align	8
	.globl	l0775
	.align	8
l0775:	.long	0
	.long	5
	.byte 103
	.byte 101
	.byte 116
	.byte 112
	.byte 105
	.byte 100
	.byte 0
	.align	8
	.globl	l0776
	.align	8
l0776:	.long	0
	.long	13
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 115
	.byte 111
	.byte 99
	.byte 107
	.byte 101
	.byte 116
	.byte 111
	.byte 112
	.byte 101
	.byte 110
	.byte 0
	.align	8
	.globl	l0777
	.align	8
l0777:	.long	0
	.long	8
	.byte 103
	.byte 101
	.byte 116
	.byte 115
	.byte 111
	.byte 99
	.byte 107
	.byte 101
	.byte 116
	.byte 0
	.align	8
	.globl	l0778
	.align	8
l0778:	.long	0
	.long	10
	.byte 119
	.byte 114
	.byte 105
	.byte 116
	.byte 101
	.byte 115
	.byte 111
	.byte 99
	.byte 107
	.byte 101
	.byte 116
	.byte 0
	.align	8
	.globl	l0779
	.align	8
l0779:	.long	0
	.long	14
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 99
	.byte 108
	.byte 111
	.byte 115
	.byte 101
	.byte 115
	.byte 111
	.byte 99
	.byte 107
	.byte 101
	.byte 116
	.byte 0
	.align	8
	.globl	l0780
	.align	8
l0780:	.long	0
	.long	4
	.byte 112
	.byte 111
	.byte 112
	.byte 101
	.byte 110
	.byte 0
	.align	8
	.globl	l0781
	.align	8
l0781:	.long	0
	.long	5
	.byte 112
	.byte 99
	.byte 108
	.byte 111
	.byte 115
	.byte 101
	.byte 0
	.align	8
	.globl	l0782
	.align	8
l0782:	.long	0
	.long	5
	.byte 115
	.byte 104
	.byte 109
	.byte 99
	.byte 116
	.byte 108
	.byte 0
	.align	8
	.globl	l0783
	.align	8
l0783:	.long	0
	.long	5
	.byte 115
	.byte 104
	.byte 109
	.byte 103
	.byte 101
	.byte 116
	.byte 0
	.align	8
	.globl	l0784
	.align	8
l0784:	.long	0
	.long	4
	.byte 115
	.byte 104
	.byte 109
	.byte 97
	.byte 116
	.byte 0
	.align	8
	.globl	l0785
	.align	8
l0785:	.long	0
	.long	4
	.byte 115
	.byte 104
	.byte 109
	.byte 100
	.byte 116
	.byte 0
	.align	8
	.globl	l0786
	.align	8
l0786:	.long	0
	.long	5
	.byte 115
	.byte 101
	.byte 109
	.byte 99
	.byte 116
	.byte 108
	.byte 0
	.align	8
	.globl	l0787
	.align	8
l0787:	.long	0
	.long	5
	.byte 115
	.byte 101
	.byte 109
	.byte 103
	.byte 101
	.byte 116
	.byte 0
	.align	8
	.globl	l0788
	.align	8
l0788:	.long	0
	.long	4
	.byte 115
	.byte 101
	.byte 109
	.byte 111
	.byte 112
	.byte 0
	.align	8
	.globl	l0789
	.align	8
l0789:	.long	0
	.long	14
	.byte 103
	.byte 101
	.byte 116
	.byte 102
	.byte 99
	.byte 111
	.byte 100
	.byte 101
	.byte 112
	.byte 111
	.byte 105
	.byte 110
	.byte 116
	.byte 101
	.byte 114
	.byte 0
	.align	8
	.globl	l0790
	.align	8
l0790:	.long	0
	.long	11
	.byte 99
	.byte 111
	.byte 100
	.byte 101
	.byte 97
	.byte 100
	.byte 100
	.byte 114
	.byte 101
	.byte 115
	.byte 115
	.byte 112
	.byte 0
	.align	8
	.globl	l0791
	.align	8
l0791:	.long	0
	.long	9
	.byte 108
	.byte 97
	.byte 115
	.byte 116
	.byte 107
	.byte 101
	.byte 114
	.byte 110
	.byte 101
	.byte 108
	.byte 0
	.align	8
	.globl	l0792
	.align	8
l0792:	.long	0
	.long	4
	.byte 105
	.byte 98
	.byte 109
	.byte 114
	.byte 115
	.byte 0
	.align	8
	.globl	l0793
	.align	8
l0793:	.long	0
	.long	3
	.byte 117
	.byte 110
	.byte 105
	.byte 120
	.byte 0
	.align	8
	.globl	l0794
	.align	8
l0794:	.long	0
	.long	2
	.byte 97
	.byte 105
	.byte 120
	.byte 0
	.align	8
	.globl	l0795
	.align	8
l0795:	.long	0
	.long	5
	.byte 114
	.byte 115
	.byte 54
	.byte 48
	.byte 48
	.byte 48
	.byte 0
	.align	8
	.globl	l0796
	.align	8
l0796:	.long	0
	.long	3
	.byte 105
	.byte 101
	.byte 101
	.byte 101
	.byte 0
	.align	8
	.globl	symget

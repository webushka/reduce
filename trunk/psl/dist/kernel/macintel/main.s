        .text
 .long 1
// (*entry firstkernel expr 1)
 .globl firstkernel
firstkernel:
 ret
 .long 0
// (*entry init-pointers expr 0)
 .globl l0001
l0001:
 mov symval+1044,%edi
 mov %edi,symval+1072
 mov symval+1040,%edi
 mov %edi,symval+1076
 mov $7996,%eax
 add symval+1040,%eax
 mov %eax,symval+1080
 mov symval+1040,%edi
 mov %edi,symval+1084
 mov symval+1088,%eax
 mov %eax,symval+1092
 ret
 .long 0
// (*entry init-fluids expr 0)
 .globl l0002
l0002:
 mov $((30*0x8000000)+128),%eax
 mov %eax,symval+1100
 mov %eax,symval+1104
 mov %eax,symval+1108
 mov %eax,symval+1112
 mov %eax,symval+1116
 mov %eax,symval+1120
 mov %eax,symval+1124
 mov %eax,symval+1128
 mov %eax,symval+1132
 mov %eax,symval+1136
 mov %eax,symval+1140
 mov %eax,symval+1144
 mov %eax,symval+1148
 mov %eax,symval+1152
 mov %eax,symval+1156
 mov %eax,symval+1160
 mov %eax,symval+1164
 mov %eax,symval+1168
 mov %eax,symval+1172
 mov %eax,symval+1176
 mov %eax,symval+1180
 mov %eax,symval+1184
 mov %eax,symval+1188
 mov %eax,symval+1192
 ret
 .long 0
// (*entry main expr 0)
_psl_main:
 .globl _psl_main
 mov 4(%esp),%edi
 mov %edi,symval+1200
 mov 8(%esp),%edi
 mov %edi,symval+1204
 sub $12,%esp
 mov symval+1200,%edi
 mov %edi,(%esp)
 mov symval+1204,%edi
 mov %edi,4(%esp)
 mov %ebx,8(%esp)
 mov symval+1200,%eax
 mov symval+1204,%ebx
 movl $27,symval+1128
 call *symfnc+1208
 mov (%esp),%edi
 mov %edi,symval+1200
 mov 4(%esp),%edi
 mov %edi,symval+1204
 mov 8(%esp),%edi
 mov %edi,symval+1212
 call *symfnc+1068
 mov %esp,%edx
 shr $5,%edx
 mov %edx,symval+1216
 call *symfnc+1220
 call *symfnc+1224
l0003:
 xor %eax,%eax
 add $12,%esp
 jmp *symfnc+1228
 add $12,%esp
 ret
// (*entry exit-with-status expr 1)
 .globl l0004
l0004:
 push %eax
 call *symfnc+1232
 pop %eax
 call *symfnc+1236
 add $12,%esp
 ret
 .long 0
// (*entry init-gcarray expr 0)
 .globl l0005
l0005:
 mov $((30*0x8000000)+128),%eax
 ret
l0006:
 .long 21
 .byte 65,98,111,117,116,32,116,111,32,108
 .byte 111,97,100,32,76,79,65,68,45,80,83
 .byte 76,0,0
l0007:
 .long 9
 .byte 108,111,97,100,45,112,115,108,46,98
 .byte 0,0
 .long 0
// (*entry pre-main expr 0)
 .globl l0008
l0008:
 call *symfnc+1240
 call *symfnc+1244
 call *symfnc+1248
 mov $((4*0x8000000)+l0006),%eax
 call *symfnc+1252
 call *symfnc+1256
 mov $((4*0x8000000)+l0007),%eax
 call *symfnc+1260
 jmp *symfnc+1264
 .long 1
// (*entry console-print-string expr 1)
 .globl l0009
l0009:
 and $134217727,%eax
 add $4,%eax
 jmp *symfnc+1268
 .long 1
// (*entry console-print-number expr 1)
 .globl l0010
l0010:
 jmp *symfnc+1276
 .long 0
// (*entry console-newline expr 0)
 .globl l0011
l0011:
 mov $10,%eax
 jmp *symfnc+1280
l0012:
 .long 0
 .byte 114,0
l0013:
 .long 34
 .byte 67,111,117,108,100,110,39,116,32,111
 .byte 112,101,110,32,98,105,110,97,114,121
 .byte 32,102,105,108,101,32,102,111,114,32
 .byte 105,110,112,117,116,0
 .long 1
// (*entry binaryopenread expr 1)
 .globl binaryopenread
binaryopenread:
 mov $((4*0x8000000)+l0012),%ebx
 and $134217727,%ebx
 add $4,%ebx
 and $134217727,%eax
 add $4,%eax
 call *symfnc+1288
 cmp $0,%eax
 jne l0014
 mov $((4*0x8000000)+l0013),%eax
 jmp *symfnc+1292
l0014:
 ret
 .long 1
// (*entry binaryread expr 1)
 .globl binaryread
binaryread:
 jmp *symfnc+1300
 .long 3
// (*entry binaryreadblock expr 3)
 .globl binaryreadblock
binaryreadblock:
 mov %ebx,%ebp
 mov %eax,%edx
 mov $4,%ebx
 mov %ebp,%eax
 jmp *symfnc+1308
 .long 1
// (*entry binaryclose expr 1)
 .globl binaryclose
binaryclose:
 jmp *symfnc+1316
 .long 0
// (*entry initialize-symbol-table expr 0)
 .globl l0015
l0015:
 sub $8,%esp
 mov $((30*0x8000000)+128),%edi
 mov %edi,4(%esp)
 mov %edi,(%esp)
 mov $15000,%ebx
 mov symval+1320,%eax
 mov %eax,%edx
 mov %ebx,%ecx
l0016:
 cmp %ecx,%edx
 jg l0017
 mov %edx,%eax
 shl $2,%eax
 add symval+1324,%eax
 xor %ebx,%ebx
 inc %ebx
 add %edx,%ebx
 mov %ebx,(%eax)
 inc %edx
 jmp l0016
l0017:
 mov symval+1324,%esi
 movl $0,60000(%esi)
 mov $18013,%ebx
 xor %eax,%eax
 mov %eax,(%esp)
 mov %ebx,4(%esp)
l0018:
 mov (%esp),%edi
 cmp 4(%esp),%edi
 jg l0019
 xor %ecx,%ecx
 mov (%esp),%ebx
 mov symval+1048,%eax
 shl $1,%ebx
 movw %cx,0(%ebx,%eax,1)
 incl (%esp)
 jmp l0018
l0019:
 mov symval+1324,%edi
 mov 512(%edi),%eax
 call *symfnc+1328
 mov $128,%ecx
 mov %eax,%ebx
 mov symval+1048,%eax
 shl $1,%ebx
 movw %cx,0(%ebx,%eax,1)
 xor %ebx,%ebx
 dec %ebx
 add symval+1320,%ebx
 mov $256,%eax
 mov %eax,(%esp)
 mov %ebx,4(%esp)
l0020:
 mov (%esp),%edi
 cmp 4(%esp),%edi
 jg l0021
 mov (%esp),%eax
 shl $2,%eax
 add symval+1324,%eax
 mov (%eax),%eax
 call *symfnc+1328
 mov (%esp),%ecx
 mov %eax,%ebx
 mov symval+1048,%eax
 shl $1,%ebx
 movw %cx,0(%ebx,%eax,1)
 incl (%esp)
 jmp l0020
l0021:
 mov $((30*0x8000000)+128),%eax
 mov %eax,symval+1332
 add $8,%esp
 ret
 .long 1
// (*entry faslin-intern expr 1)
 .globl l0022
l0022:
 sub $12,%esp
 mov $((30*0x8000000)+128),%edi
 mov %edi,8(%esp)
 mov %edi,4(%esp)
 mov %eax,(%esp)
 mov %eax,%ebx
 xor %eax,%eax
 call *symfnc+1340
 mov %eax,4(%esp)
 cmp $((30*0x8000000)+128),%eax
 jne l0023
 mov (%esp),%eax
 add $12,%esp
 jmp *symfnc+1344
l0023:
 mov (%esp),%eax
 and $134217727,%eax
 mov (%eax),%eax
 shl $5,%eax
 sar $5,%eax
 mov %eax,8(%esp)
 cmp 4(%esp),%eax
 jle l0024
 xor %ebx,%ebx
 inc %ebx
 add 4(%esp),%ebx
 mov (%esp),%eax
 and $134217727,%eax
 add $4,%eax
 movb 0(%eax,%ebx,1),%al
 cbtw
 cwtl
 cmp $0,%eax
 jne l0024
 incl 4(%esp)
l0024:
 mov 4(%esp),%edi
 cmp 8(%esp),%edi
 jl l0025
 mov (%esp),%eax
 jmp l0026
l0025:
 mov (%esp),%ecx
 and $134217727,%ecx
 mov (%ecx),%ecx
 shl $5,%ecx
 sar $5,%ecx
 inc %ecx
 xor %ebx,%ebx
 inc %ebx
 add 4(%esp),%ebx
 mov (%esp),%eax
 call *symfnc+1348
l0026:
 add $12,%esp
 jmp *symfnc+1344
 .long 1
// (*entry intern expr 1)
 .globl intern
intern:
 jmp *symfnc+1352
l0027:
 .long 7
 .byte 78,101,119,32,105,100,58,32,0,0
 .long 1
// (*entry unchecked-string-intern expr 1)
 .globl l0028
l0028:
 sub $24,%esp
 mov %eax,(%esp)
 mov $((30*0x8000000)+128),%ebp
 mov %ebp,%edx
 mov %ebp,%ecx
 mov %eax,%ebx
 and $134217727,%ebx
 mov (%ebx),%ebx
 shl $5,%ebx
 sar $5,%ebx
 and $134217727,%eax
 mov %eax,4(%esp)
 mov %ebx,8(%esp)
 mov %ecx,12(%esp)
 mov %edx,16(%esp)
 mov %ebp,20(%esp)
 cmp $0,%ebx
 jne l0029
 add $4,%eax
 movb 0(%eax,%ebx,1),%al
 cbtw
 cwtl
 and $134217727,%eax
 or $-268435456,%eax
 jmp l0030
l0029:
 mov (%esp),%eax
 call *symfnc+1328
 mov %eax,%ebx
 mov %ebx,12(%esp)
 mov symval+1048,%eax
 shl $1,%ebx
 movw 0(%eax,%ebx,1),%ax
 cwtl
 shl $16,%eax
 sar $16,%eax
 cmp $0,%eax
 jle l0031
 mov 12(%esp),%ebx
 mov symval+1048,%eax
 shl $1,%ebx
 movw 0(%eax,%ebx,1),%ax
 cwtl
 shl $16,%eax
 sar $16,%eax
 and $134217727,%eax
 or $-268435456,%eax
 jmp l0030
l0031:
 mov $((30*0x8000000)+128),%edi
 cmp symval+1332,%edi
 je l0032
 mov $((4*0x8000000)+l0027),%eax
 call *symfnc+1252
 mov (%esp),%eax
 call *symfnc+1252
 call *symfnc+1256
l0032:
 call *symfnc+1356
 mov %eax,20(%esp)
 mov %eax,%ecx
 mov 12(%esp),%ebx
 mov symval+1048,%eax
 shl $1,%ebx
 movw %cx,0(%ebx,%eax,1)
 mov 8(%esp),%eax
 call *symfnc+1360
 mov %eax,16(%esp)
 mov 4(%esp),%ebx
 call *symfnc+1364
 mov 16(%esp),%ebx
 and $134217727,%ebx
 or $536870912,%ebx
 mov 20(%esp),%eax
 add $24,%esp
 jmp *symfnc+1368
l0030:
 add $24,%esp
 ret
l0033:
 .long 18
 .byte 72,97,115,104,32,116,97,98,108,101
 .byte 32,111,118,101,114,102,108,111,119
 .byte 0
 .long 1
// (*entry hash-into-table expr 1)
 .globl l0034
l0034:
 sub $16,%esp
 mov $((30*0x8000000)+128),%edi
 mov %edi,12(%esp)
 mov %edi,8(%esp)
 mov %edi,4(%esp)
 mov %eax,(%esp)
 call *symfnc+1372
 mov %eax,4(%esp)
 mov %eax,8(%esp)
 movl $-1,12(%esp)
l0035:
 mov 8(%esp),%ebx
 mov symval+1048,%eax
 shl $1,%ebx
 movw 0(%eax,%ebx,1),%ax
 cwtl
 shl $16,%eax
 sar $16,%eax
 cmp $0,%eax
 jne l0036
 cmp $-1,12(%esp)
 je l0037
 mov 12(%esp),%eax
 jmp l0038
l0037:
 mov 8(%esp),%eax
l0038:
 jmp l0039
l0036:
 mov 8(%esp),%ebx
 mov symval+1048,%eax
 shl $1,%ebx
 movw 0(%eax,%ebx,1),%ax
 cwtl
 mov %eax,%ebx
 shl $16,%ebx
 sar $16,%ebx
 cmp $-1,%ebx
 jne l0040
 cmp $-1,12(%esp)
 jne l0041
 mov 8(%esp),%edi
 mov %edi,12(%esp)
 jmp l0041
l0040:
 mov 8(%esp),%ebx
 mov symval+1048,%eax
 shl $1,%ebx
 movw 0(%eax,%ebx,1),%ax
 cwtl
 mov (%esp),%ebx
 shl $16,%eax
 sar $16,%eax
 shl $2,%eax
 add symval+1324,%eax
 mov (%eax),%eax
 call *symfnc+1376
 cmp $((30*0x8000000)+128),%eax
 je l0041
 mov 8(%esp),%eax
 jmp l0039
l0041:
 cmpl $18013,8(%esp)
 jne l0042
 xor %eax,%eax
 jmp l0043
l0042:
 xor %eax,%eax
 inc %eax
 add 8(%esp),%eax
l0043:
 mov %eax,8(%esp)
 cmp 4(%esp),%eax
 jne l0035
 mov $((4*0x8000000)+l0033),%eax
 call *symfnc+1292
 jmp l0035
l0039:
 add $16,%esp
 ret
 .long 2
// (*entry initialize-new-id expr 2)
 .globl l0044
l0044:
 sub $8,%esp
 mov %eax,(%esp)
 and $134217727,%eax
 or $-268435456,%eax
 mov %eax,4(%esp)
 mov (%esp),%ecx
 shl $2,%ecx
 add symval+1324,%ecx
 mov %ebx,(%ecx)
 mov (%esp),%edx
 shl $2,%edx
 add symval+1380,%edx
 mov $((30*0x8000000)+128),%ebp
 mov %ebp,(%edx)
 mov (%esp),%eax
 shl $2,%eax
 add symval+1384,%eax
 mov %ebp,(%eax)
 mov (%esp),%eax
 shl $2,%eax
 add symval+1388,%eax
 mov (%esp),%ebx
 and $134217727,%ebx
 or $-402653184,%ebx
 mov %ebx,(%eax)
 mov (%esp),%eax
 call *symfnc+1392
 mov 4(%esp),%eax
 add $8,%esp
 ret
 .long 1
// (*entry hash-function expr 1)
 .globl l0047
l0047:
 sub $20,%esp
 mov $((30*0x8000000)+128),%edi
 mov %edi,12(%esp)
 mov %edi,4(%esp)
 and $134217727,%eax
 mov %eax,8(%esp)
 mov (%eax),%eax
 shl $5,%eax
 sar $5,%eax
 mov %eax,(%esp)
 xor %eax,%eax
 mov %eax,16(%esp)
 cmp $24,(%esp)
 jle l0048
 movl $24,(%esp)
l0048:
 mov (%esp),%ebx
 xor %eax,%eax
 mov %eax,12(%esp)
 mov %ebx,4(%esp)
l0049:
 mov 12(%esp),%edi
 cmp 4(%esp),%edi
 jg l0050
 mov 12(%esp),%ebx
 mov $4,%eax
 add 8(%esp),%eax
 movb 0(%eax,%ebx,1),%al
 cbtw
 cwtl
 mov $24,%ebx
 sub 12(%esp),%ebx
 cmp $0,%ebx
 jge l0045
 neg %ebx
 xchg %ebx,%ecx
 shr %cl,%eax
 jmp l0046
l0045:
 xchg %ebx,%ecx
 shl %cl,%eax
l0046:
 xchg %ebx,%ecx
 mov 16(%esp),%edi
 xor %edi,%eax
 mov %eax,16(%esp)
 incl 12(%esp)
 jmp l0049
l0050:
 mov $18013,%ebx
 mov 16(%esp),%eax
 add $20,%esp
 cltd
 idiv %ebx
 mov %edx,%eax
 ret
 .long 1
// (*entry faslin expr 1)
 .globl faslin
faslin:
 sub $44,%esp
 mov $((30*0x8000000)+128),%edi
 mov %edi,32(%esp)
 mov %edi,12(%esp)
 mov %edi,8(%esp)
 mov %eax,(%esp)
 movl $((30*0x8000000)+128),16(%esp)
 movl $((30*0x8000000)+128),24(%esp)
 movl $((30*0x8000000)+128),28(%esp)
 movl $((30*0x8000000)+128),40(%esp)
 movl $((30*0x8000000)+128),4(%esp)
 movl $((30*0x8000000)+128),20(%esp)
 movl $((30*0x8000000)+128),36(%esp)
 call *symfnc+1284
 mov %eax,8(%esp)
 call *symfnc+1296
 mov %eax,12(%esp)
 mov $65535,%ebx
 and %eax,%ebx
 cmp $399,%ebx
 je l0051
 mov 8(%esp),%eax
 call *symfnc+1312
 mov (%esp),%eax
 call *symfnc+1396
 jmp l0052
l0051:
 mov 12(%esp),%eax
 shr $16,%eax
 mov %eax,12(%esp)
 mov 8(%esp),%eax
 call *symfnc+1400
 mov %eax,16(%esp)
 mov 8(%esp),%eax
 call *symfnc+1296
 mov %eax,24(%esp)
 call *symfnc+1404
 mov %eax,28(%esp)
 xor %eax,%eax
 call *symfnc+1404
 mov %eax,36(%esp)
 mov 8(%esp),%eax
 call *symfnc+1296
 mov 28(%esp),%ebx
 add %eax,%ebx
 mov %ebx,40(%esp)
 mov 24(%esp),%ecx
 xor %ebx,%ebx
 add 28(%esp),%ebx
 mov 8(%esp),%eax
 call *symfnc+1304
 mov 8(%esp),%eax
 call *symfnc+1296
 mov %eax,4(%esp)
 call *symfnc+1408
 mov %eax,%ebx
 and $134217727,%ebx
 or $939524096,%ebx
 mov %ebx,20(%esp)
 mov 4(%esp),%ecx
 and $134217727,%ebx
 add $4,%ebx
 mov 8(%esp),%eax
 call *symfnc+1304
 mov 8(%esp),%eax
 call *symfnc+1312
 xor %eax,%eax
 inc %eax
 and 12(%esp),%eax
 cmp $1,%eax
 jne l0053
 mov 16(%esp),%edx
 mov 20(%esp),%ecx
 mov 24(%esp),%ebx
 mov 28(%esp),%eax
 call *symfnc+1412
 jmp l0054
l0053:
 mov 16(%esp),%edx
 mov 20(%esp),%ecx
 mov 24(%esp),%ebx
 mov 28(%esp),%eax
 call *symfnc+1416
l0054:
 mov symval+1420,%eax
 mov %eax,32(%esp)
 mov 28(%esp),%edi
 mov %edi,symval+1420
 mov 40(%esp),%eax
 call *symfnc+1424
 mov 32(%esp),%edi
 mov %edi,symval+1420
 mov 36(%esp),%ebx
 mov 40(%esp),%eax
 call *symfnc+1428
l0052:
 mov $((30*0x8000000)+128),%eax
 add $44,%esp
 ret
 .long 2
// (*entry delbps expr 2)
 .globl delbps
delbps:
 mov $((30*0x8000000)+128),%eax
 ret
 .long 4
// (*entry do-relocation expr 4)
 .globl l0055
l0055:
 sub $24,%esp
 mov $((30*0x8000000)+128),%edi
 mov %edi,16(%esp)
 mov %eax,12(%esp)
 mov %ecx,4(%esp)
 mov %edx,8(%esp)
 mov %ebx,%eax
 shl $2,%eax
 xor %ebx,%ebx
 dec %ebx
 add %eax,%ebx
 xor %eax,%eax
 mov %eax,20(%esp)
 mov %ebx,(%esp)
l0056:
 mov 20(%esp),%edi
 cmp (%esp),%edi
 jle l0057
 mov $((30*0x8000000)+128),%eax
 jmp l0058
l0057:
 mov 20(%esp),%ebx
 mov 4(%esp),%eax
 and $134217727,%eax
 add $4,%eax
 mov $358,%edi
 call *symfnc+1432
 mov 12(%esp),%ebx
 add 20(%esp),%ebx
 mov %ebx,16(%esp)
 cmp $1,%eax
 je l0059
 cmp $2,%eax
 je l0060
 cmp $3,%eax
 je l0061
 jmp l0062
l0059:
 mov 8(%esp),%ecx
 mov 12(%esp),%ebx
 mov 16(%esp),%eax
 call *symfnc+1436
 jmp l0062
l0061:
 mov 8(%esp),%ecx
 mov 12(%esp),%ebx
 mov 16(%esp),%eax
 call *symfnc+1440
 jmp l0062
l0060:
 mov 8(%esp),%ecx
 mov 12(%esp),%ebx
 mov 16(%esp),%eax
 call *symfnc+1444
l0062:
 incl 20(%esp)
 jmp l0056
l0058:
 add $24,%esp
 ret
 .long 4
// (*entry do-relocation-new expr 4)
 .globl l0063
l0063:
 sub $24,%esp
 mov $((30*0x8000000)+128),%edi
 mov %edi,8(%esp)
 mov %eax,16(%esp)
 mov %ecx,(%esp)
 mov %edx,12(%esp)
 mov $((30*0x8000000)+128),%ecx
 mov %eax,%ebx
 xor %eax,%eax
 mov %eax,4(%esp)
 mov %ebx,20(%esp)
 mov (%esp),%ebp
 and $134217727,%ebp
 add $4,%ebp
 mov %ebp,(%esp)
l0064:
 mov 4(%esp),%ebx
 mov (%esp),%eax
 movb 0(%eax,%ebx,1),%al
 cbtw
 cwtl
 and $255,%eax
 mov %eax,8(%esp)
 cmp $0,%eax
 jne l0065
 mov $((30*0x8000000)+128),%eax
 jmp l0066
l0065:
 incl 4(%esp)
 mov $63,%eax
 and 8(%esp),%eax
 add 20(%esp),%eax
 mov %eax,20(%esp)
 mov 8(%esp),%ebx
 shr $6,%ebx
 mov %ebx,8(%esp)
 mov %ebx,%eax
 cmp $1,%eax
 je l0067
 cmp $2,%eax
 je l0068
 cmp $3,%eax
 je l0069
 jmp l0064
l0067:
 mov 12(%esp),%ecx
 mov 16(%esp),%ebx
 mov 20(%esp),%eax
 call *symfnc+1436
 jmp l0064
l0069:
 mov 12(%esp),%ecx
 mov 16(%esp),%ebx
 mov 20(%esp),%eax
 call *symfnc+1440
 jmp l0064
l0068:
 mov 12(%esp),%ecx
 mov 16(%esp),%ebx
 mov 20(%esp),%eax
 call *symfnc+1444
 jmp l0064
l0066:
 add $24,%esp
 ret
 .long 3
// (*entry relocate-word expr 3)
 .globl l0070
l0070:
 push %ebx
 push %eax
 mov (%eax),%ebx
 and $1073741823,%ebx
 mov (%eax),%eax
 shr $30,%eax
 mov %ecx,%edx
 mov 4(%esp),%ecx
 call *symfnc+1448
 mov (%esp),%esi
 mov %eax,(%esi)
 add $8,%esp
 ret
 .long 3
// (*entry relocate-inf expr 3)
 .globl l0071
l0071:
 push %ebx
 push %eax
 mov (%eax),%ebx
 and $4194303,%ebx
 mov (%eax),%eax
 and $12582912,%eax
 shr $22,%eax
 mov %ecx,%edx
 mov 4(%esp),%ecx
 call *symfnc+1448
 mov (%esp),%esi
 mov (%esi),%edi
 and $134217727,%eax
 and $-134217728,%edi
 or %eax,%edi
 mov %edi,(%esi)
 add $8,%esp
 ret
 .long 3
// (*entry relocate-right-half expr 3)
 .globl l0072
l0072:
 push %ebx
 push %eax
 mov (%eax),%ebx
 and $1073676288,%ebx
 shr $16,%ebx
 mov (%eax),%eax
 shr $30,%eax
 mov %ecx,%edx
 mov 4(%esp),%ecx
 call *symfnc+1448
 mov (%esp),%esi
 mov (%esi),%edi
 shl $16,%eax
 and $65535,%edi
 or %eax,%edi
 mov %edi,(%esi)
 add $8,%esp
 ret
 .long 4
// (*entry compute-relocation expr 4)
 .globl l0073
l0073:
 push %ebx
 cmp $0,%eax
 jne l0074
 mov %ecx,%eax
 add %ebx,%eax
 jmp l0075
l0074:
 cmp $2,%eax
 jne l0076
 cmp $8150,%ebx
 jl l0077
 mov $-8156,%eax
 add %ebx,%eax
 shl $2,%eax
 add symval+1032,%eax
 jmp l0075
l0077:
 cmp $2048,%ebx
 jl l0078
 mov %edx,%ebx
 mov (%esp),%eax
 call *symfnc+1452
 shl $2,%eax
 add symval+1388,%eax
 jmp l0075
l0078:
 mov %ebx,%eax
 shl $2,%eax
 add symval+1388,%eax
 jmp l0075
l0076:
 cmp $3,%eax
 jne l0079
 cmp $2048,%ebx
 jl l0080
 mov %edx,%ebx
 mov (%esp),%eax
 call *symfnc+1452
 mov %eax,(%esp)
l0080:
 mov (%esp),%eax
 shl $2,%eax
 add symval+1456,%eax
 jmp l0075
l0079:
 cmp $1,%eax
 jne l0081
 cmp $2048,%ebx
 jl l0082
 mov %edx,%ebx
 mov (%esp),%eax
 add $4,%esp
 jmp *symfnc+1452
l0082:
 mov %ebx,%eax
 jmp l0075
l0081:
 mov $((30*0x8000000)+128),%eax
l0075:
 add $4,%esp
 ret
 .long 2
// (*entry local-to-global-id expr 2)
 .globl l0083
l0083:
 add $-2047,%eax
 shl $2,%eax
 mov %ebx,%ecx
 and $134217727,%ecx
 add %ecx,%eax
 mov (%eax),%eax
 ret
 .long 1
// (*entry read-id-table expr 1)
 .globl l0084
l0084:
 sub $24,%esp
 mov $((30*0x8000000)+128),%edi
 mov %edi,20(%esp)
 mov %edi,16(%esp)
 mov %edi,12(%esp)
 mov %edi,8(%esp)
 mov %edi,4(%esp)
 mov %eax,(%esp)
 call *symfnc+1296
 mov %eax,4(%esp)
 inc %eax
 call *symfnc+1408
 and $134217727,%eax
 or $939524096,%eax
 mov %eax,8(%esp)
 mov 4(%esp),%ebx
 xor %eax,%eax
 mov %eax,12(%esp)
 mov %ebx,16(%esp)
l0085:
 mov 12(%esp),%edi
 cmp 16(%esp),%edi
 jg l0086
 mov (%esp),%eax
 call *symfnc+1296
 mov symval+1036,%esi
 mov %eax,(%esi)
 mov $5,%ecx
 add %eax,%ecx
 mov %ecx,%ebx
 shr $30,%ebx
 add %ebx,%ecx
 sar $2,%ecx
 mov $4,%ebx
 add symval+1036,%ebx
 mov (%esp),%eax
 call *symfnc+1304
 xor %eax,%eax
 add symval+1036,%eax
 and $134217727,%eax
 or $536870912,%eax
 call *symfnc+1336
 mov %eax,20(%esp)
 xor %eax,%eax
 inc %eax
 add 12(%esp),%eax
 shl $2,%eax
 mov 8(%esp),%ebx
 and $134217727,%ebx
 add %ebx,%eax
 mov 20(%esp),%ecx
 and $134217727,%ecx
 mov %ecx,(%eax)
 incl 12(%esp)
 jmp l0085
l0086:
 mov 8(%esp),%eax
 add $24,%esp
 ret
 .long 3
// (*entry putentry expr 3)
 .globl putentry
putentry:
 add symval+1420,%ecx
 and $134217727,%ecx
 or $-1610612736,%ecx
 mov $365,%edi
 jmp *symfnc+1460
l0087:
 .long 22
 .byte 70,105,108,101,32,105,115,32,110,111
 .byte 116,32,70,65,83,76,32,102,111,114,109
 .byte 97,116,0
 .long 1
// (*entry faslin-bad-file expr 1)
 .globl l0088
l0088:
 mov $((4*0x8000000)+l0087),%eax
 call *symfnc+1252
 jmp *symfnc+1256
l0089:
 .long 30
 .byte 82,97,110,32,111,117,116,32,111,102
 .byte 32,98,105,110,97,114,121,32,112,114
 .byte 111,103,114,97,109,32,115,112,97,99
 .byte 101,0
 .long 1
// (*entry gtbps expr 1)
 .globl gtbps
gtbps:
 sub $4,%esp
l0090:
 mov %eax,(%esp)
 cmp $((30*0x8000000)+128),%eax
 jne l0091
 call *symfnc+1472
l0091:
 cmp $10,(%esp)
 jle l0092
 mov $15,%eax
 and symval+1144,%eax
 cmp $0,%eax
 je l0092
 mov symval+1144,%ebx
 shr $4,%ebx
 shl $4,%ebx
 add $16,%ebx
 mov %ebx,symval+1144
l0092:
 mov symval+1144,%eax
 mov (%esp),%ebx
 shl $2,%ebx
 add symval+1144,%ebx
 mov %ebx,symval+1144
 cmp symval+1132,%ebx
 jle l0093
 mov %eax,symval+1144
 mov $((30*0x8000000)+367),%eax
 call *symfnc+1476
 cmp $((30*0x8000000)+128),%eax
 je l0094
 mov (%esp),%eax
 call *symfnc+1468
 cmp $((30*0x8000000)+128),%eax
 je l0094
 mov (%esp),%eax
 jmp l0090
l0094:
 mov $((4*0x8000000)+l0089),%eax
 add $4,%esp
 jmp *symfnc+1480
l0093:
 add $4,%esp
 ret
l0095:
 .long 21
 .byte 71,84,66,80,83,32,99,97,108,108,101
 .byte 100,32,119,105,116,104,32,78,73,76
 .byte 46,0,0
 .long 0
// (*entry gtbps-nil-error expr 0)
 .globl l0096
l0096:
 mov $((4*0x8000000)+l0095),%eax
 jmp *symfnc+1480
 .long 1
// (*entry gtheap expr 1)
 .globl gtheap
gtheap:
 cmp $((30*0x8000000)+128),%eax
 jne l0097
 jmp *symfnc+1488
l0097:
 jmp *symfnc+1492
 .long 1
// (*entry real-gtheap expr 1)
 .globl l0098
l0098:
 mov %eax,%ecx
 mov symval+1108,%eax
 mov %ecx,%ebx
 shl $2,%ebx
 add symval+1108,%ebx
 mov %ebx,symval+1108
 cmp symval+1116,%ebx
 jl l0099
 mov %ecx,%ebx
 jmp *symfnc+1496
l0099:
 ret
l0100:
 .long 27
 .byte 71,97,114,98,97,103,101,32,99,111,108
 .byte 108,101,99,116,105,111,110,32,114,101
 .byte 113,117,105,114,101,100,46,0,0
 .long 1
// (*entry get-heap-trap expr 1)
 .globl l0101
l0101:
 mov $((4*0x8000000)+l0100),%eax
 jmp *symfnc+1292
l0102:
 .long 18
 .byte 82,97,110,32,111,117,116,32,111,102
 .byte 32,73,68,32,115,112,97,99,101,0
 .long 0
// (*entry gtid expr 0)
 .globl gtid
gtid:
 cmp $0,symval+1320
 jne l0103
 call *symfnc+1500
 cmp $0,symval+1320
 jne l0103
 mov $((4*0x8000000)+l0102),%eax
 call *symfnc+1292
l0103:
 mov symval+1320,%eax
 mov %eax,%ebx
 shl $2,%ebx
 add symval+1324,%ebx
 mov (%ebx),%edi
 mov %edi,symval+1320
 ret
 .long 1
// (*entry gtwrds expr 1)
 .globl gtwrds
gtwrds:
 push %eax
 add $2,%eax
 call *symfnc+1484
 mov (%esp),%ebx
 and $134217727,%ebx
 or $-939524096,%ebx
 mov %ebx,(%eax)
 add $4,%esp
 ret
 .long 1
// (*entry gtconststr expr 1)
 .globl gtconststr
gtconststr:
 sub $8,%esp
 mov %eax,(%esp)
 add $5,%eax
 mov %eax,%ebx
 shr $30,%ebx
 add %ebx,%eax
 sar $2,%eax
 mov %eax,4(%esp)
 inc %eax
 call *symfnc+1404
 mov (%esp),%edi
 mov %edi,(%eax)
 mov 4(%esp),%ebx
 shl $2,%ebx
 add %eax,%ebx
 movl $0,(%ebx)
 add $8,%esp
 ret
l0104:
 .long 30
 .byte 83,85,66,83,69,81,32,99,97,108,108
 .byte 101,100,32,119,105,116,104,32,97,32
 .byte 110,111,110,45,115,116,114,105,110
 .byte 103,0
 .long 3
// (*entry subseq expr 3)
 .globl subseq
subseq:
 sub $32,%esp
 mov $((30*0x8000000)+128),%edi
 mov %edi,28(%esp)
 mov %edi,24(%esp)
 mov %edi,20(%esp)
 mov %edi,16(%esp)
 mov %edi,12(%esp)
 mov %eax,(%esp)
 mov %ebx,4(%esp)
 mov %ecx,8(%esp)
 mov %eax,%edi
 shr $27,%edi
 cmp $4,%edi
 je l0105
 mov $((4*0x8000000)+l0104),%eax
 call *symfnc+1292
l0105:
 xor %eax,%eax
 dec %eax
 add 8(%esp),%eax
 sub 4(%esp),%eax
 mov %eax,12(%esp)
 mov (%esp),%eax
 and $134217727,%eax
 mov %eax,16(%esp)
 mov 12(%esp),%eax
 call *symfnc+1504
 mov %eax,20(%esp)
 mov 12(%esp),%ebx
 xor %eax,%eax
 mov %eax,24(%esp)
 mov %ebx,28(%esp)
l0106:
 mov 24(%esp),%edi
 cmp 28(%esp),%edi
 jg l0107
 mov 4(%esp),%ebx
 add 24(%esp),%ebx
 mov $4,%eax
 add 16(%esp),%eax
 movb 0(%eax,%ebx,1),%al
 cbtw
 cwtl
 mov %eax,%ecx
 mov 24(%esp),%ebx
 mov $4,%eax
 add 20(%esp),%eax
 movb %cl,0(%ebx,%eax,1)
 incl 24(%esp)
 jmp l0106
l0107:
 mov 20(%esp),%eax
 and $134217727,%eax
 or $536870912,%eax
 add $32,%esp
 ret
 .long 2
// (*entry search-string-for-character expr 2)
 .globl l0108
l0108:
 sub $16,%esp
 mov %eax,(%esp)
 mov %ebx,4(%esp)
 and $134217727,%ebx
 mov (%ebx),%ebx
 shl $5,%ebx
 sar $5,%ebx
 xor %eax,%eax
 mov %eax,8(%esp)
 mov %ebx,12(%esp)
l0109:
 mov 8(%esp),%edi
 cmp 12(%esp),%edi
 jle l0110
 mov $((30*0x8000000)+128),%eax
 jmp l0111
l0110:
 mov 8(%esp),%ebx
 mov 4(%esp),%eax
 and $134217727,%eax
 add $4,%eax
 movb 0(%eax,%ebx,1),%al
 cbtw
 cwtl
 cmp (%esp),%eax
 jne l0112
 mov 8(%esp),%eax
 jmp l0111
l0112:
 incl 8(%esp)
 jmp l0109
l0111:
 add $16,%esp
 ret
 .long 2
// (*entry unchecked-string-equal expr 2)
 .globl l0113
l0113:
 sub $20,%esp
 mov $((30*0x8000000)+128),%edi
 mov %edi,16(%esp)
 movl $((30*0x8000000)+128),12(%esp)
 and $134217727,%eax
 mov %eax,(%esp)
 and $134217727,%ebx
 mov %ebx,4(%esp)
 mov (%eax),%ecx
 shl $5,%ecx
 sar $5,%ecx
 mov %ecx,8(%esp)
 mov (%ebx),%edx
 shl $5,%edx
 sar $5,%edx
 cmp %edx,%ecx
 je l0114
 mov $((30*0x8000000)+128),%eax
 jmp l0115
l0114:
 movl $0,12(%esp)
l0116:
 mov 12(%esp),%edi
 cmp 8(%esp),%edi
 jle l0117
 mov $((30*0x8000000)+116),%eax
 jmp l0115
l0117:
 mov 12(%esp),%ebx
 mov $4,%eax
 add (%esp),%eax
 movb 0(%eax,%ebx,1),%al
 cbtw
 cwtl
 mov %eax,16(%esp)
 mov 12(%esp),%ebx
 mov $4,%eax
 add 4(%esp),%eax
 movb 0(%eax,%ebx,1),%al
 cbtw
 cwtl
 cmp 16(%esp),%eax
 je l0118
 mov $((30*0x8000000)+128),%eax
 jmp l0115
l0118:
 incl 12(%esp)
 jmp l0116
l0115:
 add $20,%esp
 ret
 .long 2
// (*entry copystringtofrom expr 2)
 .globl copystringtofrom
copystringtofrom:
 sub $16,%esp
 mov %eax,12(%esp)
 mov %eax,%ecx
 and $134217727,%ecx
 mov %ecx,4(%esp)
 mov %ebx,%edx
 and $134217727,%edx
 mov %edx,8(%esp)
 mov (%edx),%ebp
 shl $5,%ebp
 sar $5,%ebp
 mov %ebp,(%esp)
 mov (%ecx),%eax
 shl $5,%eax
 sar $5,%eax
 cmp %ebp,%eax
 jge l0119
 mov %eax,(%esp)
l0119:
 mov $5,%eax
 add (%esp),%eax
 mov %eax,%ebx
 shr $30,%ebx
 add %ebx,%eax
 sar $2,%eax
 dec %eax
 mov %eax,(%esp)
 mov %eax,%ebx
 xor %eax,%eax
 mov %eax,%edx
 mov %ebx,%ecx
l0120:
 cmp %ecx,%edx
 jg l0121
 xor %eax,%eax
 inc %eax
 add %edx,%eax
 shl $2,%eax
 add 4(%esp),%eax
 xor %ebx,%ebx
 inc %ebx
 add %edx,%ebx
 shl $2,%ebx
 add 8(%esp),%ebx
 mov (%ebx),%edi
 mov %edi,(%eax)
 inc %edx
 jmp l0120
l0121:
 mov 12(%esp),%eax
 add $16,%esp
 ret
 .long 2
// (*entry cons expr 2)
 .globl cons
cons:
 push %ebx
 push %eax
 mov $2,%eax
 call *symfnc+1484
 mov (%esp),%edi
 mov %edi,(%eax)
 mov 4(%esp),%edi
 mov %edi,4(%eax)
 and $134217727,%eax
 or $1207959552,%eax
 add $8,%esp
 ret
 .long 1
// (*entry interrogate expr 1)
 .globl interrogate
interrogate:
 shl $2,%eax
 add symval+1388,%eax
 mov (%eax),%eax
 ret
 .long 2
// (*entry modify expr 2)
 .globl modify
modify:
 shl $2,%eax
 add symval+1388,%eax
 mov %ebx,(%eax)
 mov %ebx,%eax
 ret
 .long 3
// (*entry put expr 3)
 .globl put
put:
 jmp *symfnc+1524
 .long 3
// (*entry unchecked-put expr 3)
 .globl l0122
l0122:
 sub $16,%esp
 mov $((30*0x8000000)+128),%edi
 mov %edi,12(%esp)
 mov %eax,(%esp)
 mov %ebx,4(%esp)
 mov %ecx,8(%esp)
 call *symfnc+1528
 mov %eax,12(%esp)
 mov %eax,%ebx
 mov 4(%esp),%eax
 call *symfnc+1532
 cmp $((30*0x8000000)+128),%eax
 je l0123
 mov 8(%esp),%edi
 mov %edi,-1207959548(%eax)
 jmp l0124
l0123:
 mov 8(%esp),%ebx
 mov 4(%esp),%eax
 call *symfnc+1508
 mov 12(%esp),%ebx
 call *symfnc+1508
 mov %eax,%ebx
 mov (%esp),%eax
 call *symfnc+1536
l0124:
 mov 8(%esp),%eax
 add $16,%esp
 ret
 .long 2
// (*entry atsoc expr 2)
 .globl atsoc
atsoc:
l0125:
 mov %ebx,%edi
 shr $27,%edi
 cmp $9,%edi
 je l0126
 mov $((30*0x8000000)+128),%eax
 ret
l0126:
 mov -1207959552(%ebx),%edi
 shr $27,%edi
 cmp $9,%edi
 jne l0127
 mov -1207959552(%ebx),%esi
 cmp -1207959552(%esi),%eax
 jne l0127
 mov -1207959552(%ebx),%eax
 ret
l0127:
 mov -1207959548(%ebx),%ebx
 jmp l0125
 .long 2
// (*entry unchecked-setprop expr 2)
 .globl l0128
l0128:
 and $134217727,%eax
 shl $2,%eax
 add symval+1380,%eax
 mov %ebx,(%eax)
 mov %ebx,%eax
 ret
 .long 1
// (*entry unchecked-prop expr 1)
 .globl l0129
l0129:
 and $134217727,%eax
 shl $2,%eax
 add symval+1380,%eax
 mov (%eax),%eax
 ret
 .long 3
// (*entry putd expr 3)
 .globl putd
putd:
 jmp *symfnc+1540
l0130:
 .long 26
 .byte 66,97,100,32,112,97,114,97,109,101
 .byte 116,101,114,115,32,116,111,32,67,79
 .byte 68,69,45,80,85,84,68,0
 .long 3
// (*entry code-putd expr 3)
 .globl l0131
l0131:
 sub $12,%esp
 mov %eax,(%esp)
 mov %ebx,4(%esp)
 mov %ecx,8(%esp)
 mov %eax,%edi
 shr $27,%edi
 cmp $30,%edi
 jne l0132
 mov %ebx,%edi
 shr $27,%edi
 cmp $30,%edi
 jne l0132
 mov %ecx,%edi
 shr $27,%edi
 cmp $20,%edi
 je l0133
l0132:
 mov $((4*0x8000000)+l0130),%eax
 call *symfnc+1292
l0133:
 mov 8(%esp),%ebx
 and $134217727,%ebx
 mov (%esp),%eax
 and $134217727,%eax
 call *symfnc+1552
 mov 4(%esp),%edi
 cmp $((30*0x8000000)+386),%edi
 je l0134
 mov 4(%esp),%ecx
 mov $((30*0x8000000)+387),%ebx
 mov (%esp),%eax
 add $12,%esp
 jmp *symfnc+1520
l0134:
 mov $((30*0x8000000)+128),%eax
 add $12,%esp
 ret
 .long 1
// (*entry fluid expr 1)
 .globl fluid
fluid:
 sub $12,%esp
 mov $((30*0x8000000)+128),%edi
 mov %edi,8(%esp)
 mov %eax,(%esp)
 mov $((30*0x8000000)+128),%eax
 mov (%esp),%edi
 mov %edi,4(%esp)
 mov 4(%esp),%edi
 shr $27,%edi
 cmp $9,%edi
 jne l0135
 mov 4(%esp),%eax
 mov -1207959552(%eax),%eax
 jmp l0136
l0135:
 mov $((30*0x8000000)+128),%eax
l0136:
 mov %eax,8(%esp)
l0137:
 mov 4(%esp),%edi
 shr $27,%edi
 cmp $9,%edi
 je l0138
 mov $((30*0x8000000)+128),%eax
 jmp l0139
l0138:
 mov 8(%esp),%eax
 call *symfnc+1560
 mov 4(%esp),%eax
 mov -1207959548(%eax),%eax
 mov %eax,4(%esp)
 mov %eax,%edi
 shr $27,%edi
 cmp $9,%edi
 jne l0140
 mov -1207959552(%eax),%eax
 jmp l0141
l0140:
 mov $((30*0x8000000)+128),%eax
l0141:
 mov %eax,8(%esp)
 jmp l0137
l0139:
 add $12,%esp
 ret
 .long 1
// (*entry fluid1 expr 1)
 .globl l0142
l0142:
 mov $((30*0x8000000)+389),%ecx
 mov $((30*0x8000000)+391),%ebx
 jmp *symfnc+1520
 .long 1
// (*entry stderror expr 1)
 .globl stderror
stderror:
 jmp *symfnc+1292
 .long 2
// (*entry *define-constant expr 2)
 .globl l0143
l0143:
 mov %eax,%ecx
 and $134217727,%ecx
 shl $2,%ecx
 add symval+1388,%ecx
 mov %ebx,(%ecx)
 mov $((30*0x8000000)+116),%ecx
 mov $((30*0x8000000)+392),%ebx
 jmp *symfnc+1520
 .long 1
// (*entry plantunbound expr 1)
 .globl plantunbound
plantunbound:
 add %eax,%eax
 mov %eax,%esi
 add %esi,%esi
 add symval+1456,%esi
 mov l0144,%edi
 mov %edi,0(%esi)
 ret
 .long 0
l0144:
 .long undefinedfunction
 .long 2
// (*entry plantcodepointer expr 2)
 .globl plantcodepointer
plantcodepointer:
 add %eax,%eax
 mov %eax,%esi
 add %esi,%esi
 add symval+1456,%esi
 mov %ebx,0(%esi)
 ret
 .long 1
// (*entry plantlambdalink expr 1)
 .globl plantlambdalink
plantlambdalink:
 add %eax,%eax
 mov %eax,%esi
 add %esi,%esi
 add symval+1456,%esi
 mov l0145,%edi
 mov %edi,0(%esi)
 ret
 .long 0
l0145:
 .long compiledcallinginterpreted
 .long 1
// (*entry addressapply0 expr 1)
 .globl l0146
l0146:
 jmp  *%eax
 .long 2
// (*entry bittable expr 2)
 .globl bittable
bittable:
 push %ebx
 shr $2,%ebx
 movb 0(%eax,%ebx,1),%al
 cbtw
 cwtl
 mov (%esp),%ebx
 and $3,%ebx
 add %ebx,%ebx
 add $-6,%ebx
 cmp $0,%ebx
 jge l0147
 neg %ebx
 xchg %ebx,%ecx
 shr %cl,%eax
 jmp l0148
l0147:
 xchg %ebx,%ecx
 shl %cl,%eax
l0148:
 xchg %ebx,%ecx
 and $3,%eax
 add $4,%esp
 ret
 .long 1
// (*entry undefinedfunction expr 1)
 .globl undefinedfunction
undefinedfunction:
 jmp *symfnc+1584
l0149:
 .long 26
 .byte 85,110,100,101,102,105,110,101,100
 .byte 32,102,117,110,99,116,105,111,110,32
 .byte 99,97,108,108,101,100,58,32,0
 .long 1
// (*entry undefinedfunction-aux expr 1)
 .globl l0150
l0150:
 push %edi
 mov $((4*0x8000000)+l0149),%eax
 call *symfnc+1252
 mov symval+1324,%esi
 pop %edi
 shl $2,%edi
 mov 0(%esi,%edi,1),%eax
 call *symfnc+1252
 xor %eax,%eax
 call *symfnc+1228
 ret
 .long 0
// (*entry compiledcallinginterpreted expr 0)
 .globl compiledcallinginterpreted
compiledcallinginterpreted:
 and $134217727,%edi
 or $-268435456,%edi
 mov %edi,symval+1592
 jmp *symfnc+1596
l0151:
 .long 12
 .byte 70,65,84,65,76,32,69,82,82,79,82,58
 .byte 32,0
 .long 1
// (*entry kernel-fatal-error expr 1)
 .globl l0152
l0152:
 push %eax
 mov $((4*0x8000000)+l0151),%eax
 call *symfnc+1252
 mov (%esp),%eax
 call *symfnc+1252
 call *symfnc+1256
 xor %eax,%eax
 dec %eax
 add $4,%esp
 jmp *symfnc+1228
 .long 0
// (*entry echoon expr 0)
 .globl l0153
l0153:
 mov symval+1212,%ebx
 call _echoon
 mov %ebx,symval+1212
 ret
 .long 0
// (*entry echooff expr 0)
 .globl l0154
l0154:
 mov symval+1212,%ebx
 call _echooff
 mov %ebx,symval+1212
 ret
 .long 1
// (*entry external_charsininputbuffer expr 1)
 .globl l0155
l0155:
 push %eax
 mov symval+1212,%ebx
 call _external_charsininputbuffer
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 0
// (*entry flushstdoutputbuffer expr 0)
 .globl l0156
l0156:
 mov symval+1212,%ebx
 call _flushstdoutputbuffer
 mov %ebx,symval+1212
 ret
 .long 0
// (*entry external_user_homedir_string expr 0)
 .globl l0157
l0157:
 mov symval+1212,%ebx
 call _external_user_homedir_string
 mov %ebx,symval+1212
 ret
 .long 1
// (*entry external_anyuser_homedir_string expr 1)
 .globl l0158
l0158:
 push %eax
 mov symval+1212,%ebx
 call _external_anyuser_homedir_string
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry alterheapsize expr 1)
 .globl l0159
l0159:
 push %eax
 mov symval+1212,%ebx
 call _alterheapsize
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry allocatemorebps expr 1)
 .globl l0160
l0160:
 push %eax
 mov symval+1212,%ebx
 call _allocatemorebps
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 3
// (*entry get_file_status expr 3)
 .globl l0161
l0161:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _get_file_status
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 2
// (*entry os_startup_hook expr 2)
 .globl l0162
l0162:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _os_startup_hook
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 0
// (*entry os_cleanup_hook expr 0)
 .globl l0163
l0163:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call _os_cleanup_hook
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
 .long 1
// (*entry external_alarm expr 1)
 .globl l0164
l0164:
 push %eax
 mov symval+1212,%ebx
 call _external_alarm
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 2
// (*entry external_ualarm expr 2)
 .globl l0165
l0165:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _external_ualarm
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 1
// (*entry external_time expr 1)
 .globl l0166
l0166:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call _external_time
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
 .long 1
// (*entry external_timc expr 1)
 .globl l0167
l0167:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call _external_timc
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
 .long 2
// (*entry external_stat expr 2)
 .globl l0168
l0168:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _external_stat
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 2
// (*entry external_link expr 2)
 .globl l0169
l0169:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _external_link
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 1
// (*entry external_unlink expr 1)
 .globl l0170
l0170:
 push %eax
 mov symval+1212,%ebx
 call _external_unlink
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry external_strlen expr 1)
 .globl l0171
l0171:
mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _external_strlen
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 2
// (*entry external_setenv expr 2)
 .globl l0172
l0172:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _external_setenv
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 1
// (*entry external_getenv expr 1)
 .globl l0173
l0173:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call _external_getenv
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
 .long 2
// (*entry uxfloat expr 2)
 .globl l0174
l0174:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxfloat
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 1
// (*entry uxfix expr 1)
 .globl l0175
l0175:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxfix
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 2
// (*entry uxassign expr 2)
 .globl l0176
l0176:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxassign
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 3
// (*entry uxplus2 expr 3)
 .globl l0177
l0177:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxplus2
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 3
// (*entry uxdifference expr 3)
 .globl l0178
l0178:
mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxdifference
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 3
// (*entry uxtimes2 expr 3)
 .globl l0179
l0179:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxtimes2
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 3
// (*entry uxquotient expr 3)
 .globl l0180
l0180:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx 
 push %eax
 mov symval+1212,%ebx
 call _uxquotient
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 4
// (*entry uxgreaterp expr 4)
 .globl l0181
l0181:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $16,%esp
 mov %edi,4(%esp)
 push %edx
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxgreaterp
 mov %ebx,symval+1212
 mov 20(%esp),%esp
 ret
 .long 4
// (*entry uxlessp expr 4)
 .globl l0182
l0182:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $16,%esp
 mov %edi,4(%esp)
 push %edx
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxlessp
 mov %ebx,symval+1212
 mov 20(%esp),%esp
 ret
 .long 3
// (*entry uxwritefloat expr 3)
 .globl l0183
l0183:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxwritefloat
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 2
// (*entry uxdoubletofloat expr 2)
 .globl l0184
l0184:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxdoubletofloat
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 2
// (*entry uxfloattodouble expr 2)
 .globl l0185
l0185:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxfloattodouble
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 2
// (*entry uxsin expr 2)
 .globl l0186
l0186:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxsin
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 2
// (*entry uxcos expr 2)
 .globl l0187
l0187:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxcos
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 2
// (*entry uxtan expr 2)
 .globl l0188
l0188:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxtan
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 2
// (*entry uxasin expr 2)
 .globl l0189
l0189:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxasin
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 2
// (*entry uxacos expr 2)
 .globl l0190
l0190:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _uxacos
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 2
// (*entry uxatan expr 2)
 .globl l0191
l0191:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx 
 push %eax
 mov symval+1212,%ebx
 call _uxatan
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 2
// (*entry uxsqrt expr 2)
 .globl l0192
l0192:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx 
 push %eax
 mov symval+1212,%ebx
 call _uxsqrt
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 2
// (*entry uxexp expr 2)
 .globl l0193
l0193:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx 
 push %eax
 mov symval+1212,%ebx
 call _uxexp
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 2
// (*entry uxlog expr 2)
 .globl l0194
l0194:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx 
 push %eax
 mov symval+1212,%ebx
 call _uxlog
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 3
// (*entry uxatan2 expr 3)
 .globl l0195
l0195:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)
 push %ecx
 push %ebx 
 push %eax
 mov symval+1212,%ebx
 call _uxatan2
 mov %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 0
// (*entry external_pwd expr 0)
 .globl l0196
l0196:
mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _external_pwd
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 2
// (*entry sun3_sigset expr 2)
 .globl l0197
l0197:
 sub $4,%esp
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _sun3_sigset
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 2
// (*entry sun3_sigrelse expr 2)
 .globl l0198
l0198:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _sun3_sigrelse
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 2
// (*entry sigrelse expr 2)
 .globl sigrelse
sigrelse:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _sun3_sigrelse
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 4
// (*entry unexec expr 4)
 .globl l0199
l0199:
 push %edx
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _unexec
 mov %ebx,symval+1212
 add $16,%esp
 ret
 .long 1
// (*entry unixputc expr 1)
 .globl l0200
l0200:
 sub $4,%esp
 push %eax
 mov symval+1212,%ebx
 call _unixputc
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 1
// (*entry unixputs expr 1)
 .globl l0201
l0201:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _unixputs
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 1
// (*entry unixputn expr 1)
 .globl l0202
l0202:
mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _unixputn
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 0
// (*entry unixcleario expr 0)
 .globl l0203
l0203:
mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _unixcleario
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 1
// (*entry expand_file_name expr 1)
 .globl l0204
l0204:
mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _expand_file_name
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 2
// (*entry unixopen expr 2)
 .globl l0205
l0205:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _unixopen
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 1
// (*entry unixcd expr 1)
 .globl l0206
l0206:
mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _unixcd
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 1
// (*entry ctime expr 1)
 .globl l0207
l0207:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call ctime$stub
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
 .long 1
// (*entry external_system expr 1)
 .globl l0208
l0208:
mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _external_system
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 1
// (*entry external_exit expr 1)
 .globl l0209
l0209:
mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _external_exit
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 2
// (*entry fopen expr 2)
 .globl l0210
l0210:
 push %ebx
 push %eax
 movl symval+1212,%ebx
 // call _fopen
 movl %ebx,symval+1212
 add $8,%esp
 ret
 .long 1
// (*entry fclose expr 1)
 .globl l0211
l0211:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call fclose$stub
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
 .long 4
// (*entry fread expr 4)
 .globl l0212
l0212:
 sub $12,%esp
 push %edx
 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
 call fread$stub
 movl %ebx,symval+1212
 add $28,%esp
 ret
 .long 2
// (*entry fputc expr 2)
 .globl l0213
l0213:
 push %ebx
 push %eax
 movl symval+1212,%ebx
 // call _fputc
 movl %ebx,symval+1212
 add $8,%esp
 ret
 .long 1
// (*entry fgetc expr 1)
 .globl l0214
l0214:
 push %eax
 movl symval+1212,%ebx
 //call _fgetc
 movl %ebx,symval+1212
 add $4,%esp
 ret
 .long 3
// (*entry fgets expr 3)
 .globl l0215
l0215:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $12,%esp
 mov %edi,4(%esp)

 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
 call fgets$stub
 movl %ebx,symval+1212
 mov 16(%esp),%esp
 ret
 .long 4
// (*entry fwrite expr 4)
 .globl l0216
l0216:
 mov %esp,%edi
 sub $32,%esp
 shr $4,%esp
 shl $4,%esp
 add $16,%esp
 mov %edi,4(%esp)
 push %edx
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call fwrite$stub
 mov %ebx,symval+1212
 mov 20(%esp),%esp
 ret
 .long 1
// (*entry fflush expr 1)
 .globl l0217
l0217:
mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call fflush$stub
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 3
// (*entry fseek expr 3)
 .globl l0218
l0218:
 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
 // call _fseek
 movl %ebx,symval+1212
 add $12,%esp
 ret
 .long 1
// (*entry clearerr expr 1)
 .globl l0219
l0219:
 push %eax
 movl symval+1212,%ebx
// call _clearerr
 movl %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry getw expr 1)
 .globl l0220
l0220:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call getw$stub
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
.section __IMPORT,__jump_table,symbol_stubs,self_modifying_code+pure_instructions,5
L_putw$stub:
        .indirect_symbol _putw
        hlt ; hlt ; hlt ; hlt ; hlt
getw$stub:
        .indirect_symbol _getw
        hlt ; hlt ; hlt ; hlt ; hlt
fwrite$stub:
        .indirect_symbol _fwrite
        hlt ; hlt ; hlt ; hlt ; hlt
fflush$stub:
        .indirect_symbol _fflush
        hlt ; hlt ; hlt ; hlt ; hlt
fread$stub:
        .indirect_symbol _fread
        hlt ; hlt ; hlt ; hlt ; hlt
fclose$stub:
        .indirect_symbol _fclose
        hlt ; hlt ; hlt ; hlt ; hlt
fgets$stub:
        .indirect_symbol _fgets
        hlt ; hlt ; hlt ; hlt ; hlt
ctime$stub:
        .indirect_symbol _ctime
        hlt ; hlt ; hlt ; hlt ; hlt
sleep$stub:
        .indirect_symbol _sleep
        hlt ; hlt ; hlt ; hlt ; hlt
getpid$stub:
        .indirect_symbol _getpid
        hlt ; hlt ; hlt ; hlt ; hlt
gethostid$stub:
        .indirect_symbol _gethostid
        hlt ; hlt ; hlt ; hlt ; hlt
setlinebuf$stub:
        .indirect_symbol _setlinebuf
        hlt ; hlt ; hlt ; hlt ; hlt
fork$stub:
        .indirect_symbol _fork
        hlt ; hlt ; hlt ; hlt ; hlt
wait$stub:
        .indirect_symbol _wait 
        hlt ; hlt ; hlt ; hlt ; hlt


  .text
 .long 2
// (*entry putw expr 2)
 .globl l0221
l0221:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $8,%esp
 mov %edi,4(%esp)
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call L_putw$stub
 mov %ebx,symval+1212
 mov 12(%esp),%esp
 ret
 .long 2
// (*entry signal expr 2)
 .globl l0222
l0222:
 push %ebx
 push %eax
 movl symval+1212,%ebx
// call _signal
 movl %ebx,symval+1212
 add $8,%esp
 ret
 .long 1
// (*entry sleep expr 1)
 .globl l0223
l0223:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call sleep$stub
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
 .long 3
// (*entry ieee_handler expr 3)
 .globl l0224
l0224:
 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
 call _ieee_handler
 movl %ebx,symval+1212
 add $12,%esp
 ret
 .long 4
// (*entry ieee_flags expr 4)
 .globl l0225
l0225:
 push %edx
 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
 call _ieee_flags
 movl %ebx,symval+1212
 add $16,%esp
 ret
 .long 1
// (*entry setlinebuf expr 1)
 .globl l0226
l0226:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call setlinebuf$stub
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
 .long 0
// (*entry getpid expr 0)
 .globl l0227
l0227:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call getpid$stub
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
 .long 0
// (*entry gethostid expr 0)
 .globl l0228
l0228:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call gethostid$stub
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
 .long 2
// (*entry unixsocketopen expr 2)
 .globl l0229
l0229:
 push %ebx
 push %eax
 movl symval+1212,%ebx
 call _unixsocketopen
 movl %ebx,symval+1212
 add $8,%esp
 ret
 .long 3
// (*entry getsocket expr 3)
 .globl l0230
l0230:
 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
 call _getsocket
 movl %ebx,symval+1212
 add $12,%esp
 ret
 .long 3
// (*entry writesocket expr 3)
 .globl l0231
l0231:
 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
 call _writesocket
 movl %ebx,symval+1212
 add $12,%esp
 ret
 .long 1
// (*entry unixclosesocket expr 1)
 .globl l0232
l0232:
 push %eax
 movl symval+1212,%ebx
 call _unixclosesocket
 movl %ebx,symval+1212
 add $4,%esp
 ret
 .long 0
// (*entry fork expr 0)
 .globl l0233
l0233:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call fork$stub
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
 .long 1
// (*entry wait expr 1)
 .globl l0234
l0234:
 mov %esp,%edi
 sub $16,%esp
 shr $4,%esp
 shl $4,%esp
 add $4,%esp
 mov %edi,4(%esp)
 push %eax
 mov symval+1212,%ebx
 call wait$stub
 mov %ebx,symval+1212
 mov 8(%esp),%esp
 ret
 .long 2
// (*entry popen expr 2)
 .globl l0235
l0235:
 push %ebx
 push %eax
 movl symval+1212,%ebx
 // call _popen
 movl %ebx,symval+1212
 add $8,%esp
 ret
 .long 1
// (*entry pclose expr 1)
 .globl l0236
l0236:
 push %eax
 movl symval+1212,%ebx
// call _pclose
 movl %ebx,symval+1212
 add $4,%esp
 ret
 .long 3
// (*entry shmctl expr 3)
 .globl l0237
l0237:
 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
// call _shmctl
 movl %ebx,symval+1212
 add $12,%esp
 ret
 .long 3
// (*entry shmget expr 3)
 .globl l0238
l0238:
 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
// call _shmget
 movl %ebx,symval+1212
 add $12,%esp
 ret
 .long 3
// (*entry shmat expr 3)
 .globl l0239
l0239:
 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
// call _shmat
 movl %ebx,symval+1212
 add $12,%esp
 ret
 .long 1
// (*entry shmdt expr 1)
 .globl l0240
l0240:
 push %eax
 movl symval+1212,%ebx
// call _shmdt
 movl %ebx,symval+1212
 add $4,%esp
 ret
 .long 4
// (*entry semctl expr 4)
 .globl l0241
l0241:
 push %edx
 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
 // call _semctl
 movl %ebx,symval+1212
 add $16,%esp
 ret
 .long 3
// (*entry semget expr 3)
 .globl l0242
l0242:
 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
// call _semget
 movl %ebx,symval+1212
 add $12,%esp
 ret
 .long 3
// (*entry semop expr 3)
 .globl l0243
l0243:
 push %ecx
 push %ebx
 push %eax
 movl symval+1212,%ebx
// call _semop
 movl %ebx,symval+1212
 add $12,%esp
 ret
 .long 4
// (*entry unix-profile expr 4)
 .globl l0244
l0244:
 push %edx
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 call _profil
 mov %ebx,symval+1212
 add $16,%esp
 ret
 .long 2
// (*entry !O!Mmake!Device expr 2)
 .globl l0245
l0245:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 1
// (*entry !O!Mclose!Device expr 1)
 .globl l0246
l0246:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mget!Device!Encoding expr 1)
 .globl l0247
l0247:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 2
// (*entry !O!Mset!Device!Encoding expr 2)
 .globl l0248
l0248:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 1
// (*entry !O!Mmake!I!O!File expr 1)
 .globl l0249
l0249:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mmake!I!O!Fd expr 1)
 .globl l0250
l0250:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mmake!Conn expr 1)
 .globl l0251
l0251:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mconn!In expr 1)
 .globl l0252
l0252:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mconn!Out expr 1)
 .globl l0253
l0253:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 3
// (*entry !O!Mconn!T!C!P expr 3)
 .globl l0254
l0254:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 2
// (*entry !O!Mconn!Unix expr 2)
 .globl l0255
l0255:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 2
// (*entry !O!Mbind!T!C!P expr 2)
 .globl l0256
l0256:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 2
// (*entry !O!Mbind!Unix expr 2)
 .globl l0257
l0257:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 4
// (*entry !O!Mlaunch!Env expr 4)
 .globl l0258
l0258:
 push %edx
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $16,%esp
 ret
 .long 3
// (*entry !O!Mlaunch expr 3)
 .globl l0259
l0259:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 1
// (*entry !O!Mserve!Client expr 1)
 .globl l0260
l0260:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mconn!Close expr 1)
 .globl l0261
l0261:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 2
// (*entry !O!Mput!Int32 expr 2)
 .globl l0262
l0262:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 5
// (*entry !O!Mput!Big!Int expr 5)
 .globl l0263
l0263:
 push %ebp
 push %edx
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $20,%esp
 ret
 .long 2
// (*entry !O!Mput!Float64 expr 2)
 .globl l0264
l0264:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 3
// (*entry !O!Mput!Byte!Array expr 3)
 .globl l0265
l0265:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 2
// (*entry !O!Mput!String expr 2)
 .globl l0266
l0266:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 2
// (*entry !O!Mput!Var expr 2)
 .globl l0267
l0267:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 3
// (*entry !O!Mput!Symbol expr 3)
 .globl l0268
l0268:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 3
// (*entry !O!Mput!String!N expr 3)
 .globl l0269
l0269:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 3
// (*entry !O!Mput!Var!N expr 3)
 .globl l0270
l0270:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 5
// (*entry !O!Mput!Symbol!N expr 5)
 .globl l0271
l0271:
 push %ebp
 push %edx
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $20,%esp
 ret
 .long 1
// (*entry !O!Mput!App expr 1)
 .globl l0272
l0272:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mput!End!App expr 1)
 .globl l0273
l0273:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mput!Attr expr 1)
 .globl l0274
l0274:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mput!End!Attr expr 1)
 .globl l0275
l0275:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mput!Atp expr 1)
 .globl l0276
l0276:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mput!End!Atp expr 1)
 .globl l0277
l0277:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mput!Error expr 1)
 .globl l0278
l0278:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mput!End!Error expr 1)
 .globl l0279
l0279:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mput!Object expr 1)
 .globl l0280
l0280:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mput!End!Object expr 1)
 .globl l0281
l0281:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mget!Object expr 1)
 .globl l0282
l0282:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mget!End!Object expr 1)
 .globl l0283
l0283:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 2
// (*entry !O!Mget!Length expr 2)
 .globl l0284
l0284:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 3
// (*entry !O!Mget!Symbol!Length expr 3)
 .globl l0285
l0285:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 2
// (*entry !O!Mget!Type expr 2)
 .globl l0286
l0286:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 2
// (*entry !O!Mget!Int32 expr 2)
 .globl l0287
l0287:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 5
// (*entry !O!Mget!Big!Int expr 5)
 .globl l0288
l0288:
 push %ebp
 push %edx
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $20,%esp
 ret
 .long 5
// (*entry !O!Mget!Big!Int!N expr 5)
 .globl l0289
l0289:
 push %ebp
 push %edx
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $20,%esp
 ret
 .long 2
// (*entry !O!Mget!Float64 expr 2)
 .globl l0290
l0290:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 3
// (*entry !O!Mget!Byte!Array expr 3)
 .globl l0291
l0291:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 3
// (*entry !O!Mget!Byte!Array!N expr 3)
 .globl l0292
l0292:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 2
// (*entry !O!Mget!String expr 2)
 .globl l0293
l0293:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 3
// (*entry !O!Mget!String!N expr 3)
 .globl l0294
l0294:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 2
// (*entry !O!Mget!Var expr 2)
 .globl l0295
l0295:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 3
// (*entry !O!Mget!Var!N expr 3)
 .globl l0296
l0296:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 3
// (*entry !O!Mget!Symbol expr 3)
 .globl l0297
l0297:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 5
// (*entry !O!Mget!Symbol!N expr 5)
 .globl l0298
l0298:
 push %ebp
 push %edx
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $20,%esp
 ret
 .long 1
// (*entry !O!Mget!App expr 1)
 .globl l0299
l0299:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mget!End!App expr 1)
 .globl l0300
l0300:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mget!Attr expr 1)
 .globl l0301
l0301:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mget!End!Attr expr 1)
 .globl l0302
l0302:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mget!Atp expr 1)
 .globl l0303
l0303:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mget!End!Atp expr 1)
 .globl l0304
l0304:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mget!Error expr 1)
 .globl l0305
l0305:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mget!End!Error expr 1)
 .globl l0306
l0306:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 2
// (*entry !O!Mput!Comment expr 2)
 .globl l0307
l0307:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 2
// (*entry !O!Mget!Comment expr 2)
 .globl l0308
l0308:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 3
// (*entry !O!Mput!Comment!N expr 3)
 .globl l0309
l0309:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 3
// (*entry !O!Mget!Comment!N expr 3)
 .globl l0310
l0310:
 push %ecx
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $12,%esp
 ret
 .long 1
// (*entry !O!Mbegin!Object expr 1)
 .globl l0311
l0311:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mend!Object expr 1)
 .globl l0312
l0312:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 1
// (*entry !O!Mset!Verbosity!Level expr 1)
 .globl l0313
l0313:
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $4,%esp
 ret
 .long 2
// (*entry !O!Mignore!Comment expr 2)
 .globl l0314
l0314:
 push %ebx
 push %eax
 mov symval+1212,%ebx
 mov %ebx,symval+1212
 add $8,%esp
 ret
 .long 1
// (*entry codeaddressp expr 1)
 .globl codeaddressp
codeaddressp:
 sub $4,%esp
 and $134217727,%eax
 mov %eax,(%esp)
 mov $((30*0x8000000)+256),%eax
 call *symfnc+2216
 and $134217727,%eax
 cmp (%esp),%eax
 jle l0315
 mov $((30*0x8000000)+128),%eax
 jmp l0316
l0315:
 mov $((30*0x8000000)+116),%eax
l0316:
 cmp $((30*0x8000000)+128),%eax
 je l0317
 mov $((30*0x8000000)+552),%eax
 call *symfnc+2216
 and $134217727,%eax
 cmp (%esp),%eax
 jg l0318
 mov $((30*0x8000000)+128),%eax
 jmp l0317
l0318:
 mov $((30*0x8000000)+116),%eax
l0317:
 cmp $((30*0x8000000)+128),%eax
 jne l0319
 mov symval+1136,%eax
 and $134217727,%eax
 cmp (%esp),%eax
 jle l0320
 mov $((30*0x8000000)+128),%eax
 jmp l0321
l0320:
 mov $((30*0x8000000)+116),%eax
l0321:
 cmp $((30*0x8000000)+128),%eax
 je l0319
 mov symval+1144,%eax
 and $134217727,%eax
 cmp (%esp),%eax
 jg l0322
 mov $((30*0x8000000)+128),%eax
 jmp l0319
l0322:
 mov $((30*0x8000000)+116),%eax
l0319:
 add $4,%esp
 ret
 .long 1
// (*entry lastkernel expr 1)
 .globl lastkernel
lastkernel:
 ret
 .long 0
// (*entry initcode expr 0)
 .globl initcode
initcode:
 mov $((30*0x8000000)+128),%eax
 ret
 .globl symval
 .globl symprp
 .globl symnam
 .globl l0323
l0323:
 .long 0
 .byte 0,0
 .globl l0324
l0324:
 .long 0
 .byte 1,0
 .globl l0325
l0325:
 .long 0
 .byte 2,0
 .globl l0326
l0326:
 .long 0
 .byte 3,0
 .globl l0327
l0327:
 .long 0
 .byte 4,0
 .globl l0328
l0328:
 .long 0
 .byte 5,0
 .globl l0329
l0329:
 .long 0
 .byte 6,0
 .globl l0330
l0330:
 .long 0
 .byte 7,0
 .globl l0331
l0331:
 .long 0
 .byte 8,0
 .globl l0332
l0332:
 .long 0
 .byte 9,0
 .globl l0333
l0333:
 .long 0
 .byte 10,0
 .globl l0334
l0334:
 .long 0
 .byte 11,0
 .globl l0335
l0335:
 .long 0
 .byte 12,0
 .globl l0336
l0336:
 .long 0
 .byte 13,0
 .globl l0337
l0337:
 .long 0
 .byte 14,0
 .globl l0338
l0338:
 .long 0
 .byte 15,0
 .globl l0339
l0339:
 .long 0
 .byte 16,0
 .globl l0340
l0340:
 .long 0
 .byte 17,0
 .globl l0341
l0341:
 .long 0
 .byte 18,0
 .globl l0342
l0342:
 .long 0
 .byte 19,0
 .globl l0343
l0343:
 .long 0
 .byte 20,0
 .globl l0344
l0344:
 .long 0
 .byte 21,0
 .globl l0345
l0345:
 .long 0
 .byte 22,0
 .globl l0346
l0346:
 .long 0
 .byte 23,0
 .globl l0347
l0347:
 .long 0
 .byte 24,0
 .globl l0348
l0348:
 .long 0
 .byte 25,0
 .globl l0349
l0349:
 .long 0
 .byte 26,0
 .globl l0350
l0350:
 .long 0
 .byte 27,0
 .globl l0351
l0351:
 .long 0
 .byte 28,0
 .globl l0352
l0352:
 .long 0
 .byte 29,0
 .globl l0353
l0353:
 .long 0
 .byte 30,0
 .globl l0354
l0354:
 .long 0
 .byte 31,0
 .globl l0355
l0355:
 .long 0
 .byte 32,0
 .globl l0356
l0356:
 .long 0
 .byte 33,0
 .globl l0357
l0357:
 .long 0
 .byte 34,0
 .globl l0358
l0358:
 .long 0
 .byte 35,0
 .globl l0359
l0359:
 .long 0
 .byte 36,0
 .globl l0360
l0360:
 .long 0
 .byte 37,0
 .globl l0361
l0361:
 .long 0
 .byte 38,0
 .globl l0362
l0362:
 .long 0
 .byte 39,0
 .globl l0363
l0363:
 .long 0
 .byte 40,0
 .globl l0364
l0364:
 .long 0
 .byte 41,0
 .globl l0365
l0365:
 .long 0
 .byte 42,0
 .globl l0366
l0366:
 .long 0
 .byte 43,0
 .globl l0367
l0367:
 .long 0
 .byte 44,0
 .globl l0368
l0368:
 .long 0
 .byte 45,0
 .globl l0369
l0369:
 .long 0
 .byte 46,0
 .globl l0370
l0370:
 .long 0
 .byte 47,0
 .globl l0371
l0371:
 .long 0
 .byte 48,0
 .globl l0372
l0372:
 .long 0
 .byte 49,0
 .globl l0373
l0373:
 .long 0
 .byte 50,0
 .globl l0374
l0374:
 .long 0
 .byte 51,0
 .globl l0375
l0375:
 .long 0
 .byte 52,0
 .globl l0376
l0376:
 .long 0
 .byte 53,0
 .globl l0377
l0377:
 .long 0
 .byte 54,0
 .globl l0378
l0378:
 .long 0
 .byte 55,0
 .globl l0379
l0379:
 .long 0
 .byte 56,0
 .globl l0380
l0380:
 .long 0
 .byte 57,0
 .globl l0381
l0381:
 .long 0
 .byte 58,0
 .globl l0382
l0382:
 .long 0
 .byte 59,0
 .globl l0383
l0383:
 .long 0
 .byte 60,0
 .globl l0384
l0384:
 .long 0
 .byte 61,0
 .globl l0385
l0385:
 .long 0
 .byte 62,0
 .globl l0386
l0386:
 .long 0
 .byte 63,0
 .globl l0387
l0387:
 .long 0
 .byte 64,0
 .globl l0388
l0388:
 .long 0
 .byte 65,0
 .globl l0389
l0389:
 .long 0
 .byte 66,0
 .globl l0390
l0390:
 .long 0
 .byte 67,0
 .globl l0391
l0391:
 .long 0
 .byte 68,0
 .globl l0392
l0392:
 .long 0
 .byte 69,0
 .globl l0393
l0393:
 .long 0
 .byte 70,0
 .globl l0394
l0394:
 .long 0
 .byte 71,0
 .globl l0395
l0395:
 .long 0
 .byte 72,0
 .globl l0396
l0396:
 .long 0
 .byte 73,0
 .globl l0397
l0397:
 .long 0
 .byte 74,0
 .globl l0398
l0398:
 .long 0
 .byte 75,0
 .globl l0399
l0399:
 .long 0
 .byte 76,0
 .globl l0400
l0400:
 .long 0
 .byte 77,0
 .globl l0401
l0401:
 .long 0
 .byte 78,0
 .globl l0402
l0402:
 .long 0
 .byte 79,0
 .globl l0403
l0403:
 .long 0
 .byte 80,0
 .globl l0404
l0404:
 .long 0
 .byte 81,0
 .globl l0405
l0405:
 .long 0
 .byte 82,0
 .globl l0406
l0406:
 .long 0
 .byte 83,0
 .globl l0407
l0407:
 .long 0
 .byte 84,0
 .globl l0408
l0408:
 .long 0
 .byte 85,0
 .globl l0409
l0409:
 .long 0
 .byte 86,0
 .globl l0410
l0410:
 .long 0
 .byte 87,0
 .globl l0411
l0411:
 .long 0
 .byte 88,0
 .globl l0412
l0412:
 .long 0
 .byte 89,0
 .globl l0413
l0413:
 .long 0
 .byte 90,0
 .globl l0414
l0414:
 .long 0
 .byte 91,0
 .globl l0415
l0415:
 .long 0
 .byte 92,0
 .globl l0416
l0416:
 .long 0
 .byte 93,0
 .globl l0417
l0417:
 .long 0
 .byte 94,0
 .globl l0418
l0418:
 .long 0
 .byte 95,0
 .globl l0419
l0419:
 .long 0
 .byte 96,0
 .globl l0420
l0420:
 .long 0
 .byte 97,0
 .globl l0421
l0421:
 .long 0
 .byte 98,0
 .globl l0422
l0422:
 .long 0
 .byte 99,0
 .globl l0423
l0423:
 .long 0
 .byte 100,0
 .globl l0424
l0424:
 .long 0
 .byte 101,0
 .globl l0425
l0425:
 .long 0
 .byte 102,0
 .globl l0426
l0426:
 .long 0
 .byte 103,0
 .globl l0427
l0427:
 .long 0
 .byte 104,0
 .globl l0428
l0428:
 .long 0
 .byte 105,0
 .globl l0429
l0429:
 .long 0
 .byte 106,0
 .globl l0430
l0430:
 .long 0
 .byte 107,0
 .globl l0431
l0431:
 .long 0
 .byte 108,0
 .globl l0432
l0432:
 .long 0
 .byte 109,0
 .globl l0433
l0433:
 .long 0
 .byte 110,0
 .globl l0434
l0434:
 .long 0
 .byte 111,0
 .globl l0435
l0435:
 .long 0
 .byte 112,0
 .globl l0436
l0436:
 .long 0
 .byte 113,0
 .globl l0437
l0437:
 .long 0
 .byte 114,0
 .globl l0438
l0438:
 .long 0
 .byte 115,0
 .globl l0439
l0439:
 .long 0
 .byte 116,0
 .globl l0440
l0440:
 .long 0
 .byte 117,0
 .globl l0441
l0441:
 .long 0
 .byte 118,0
 .globl l0442
l0442:
 .long 0
 .byte 119,0
 .globl l0443
l0443:
 .long 0
 .byte 120,0
 .globl l0444
l0444:
 .long 0
 .byte 121,0
 .globl l0445
l0445:
 .long 0
 .byte 122,0
 .globl l0446
l0446:
 .long 0
 .byte 123,0
 .globl l0447
l0447:
 .long 0
 .byte 124,0
 .globl l0448
l0448:
 .long 0
 .byte 125,0
 .globl l0449
l0449:
 .long 0
 .byte 126,0
 .globl l0450
l0450:
 .long 0
 .byte 127,0
 .globl l0451
l0451:
 .long 2
 .byte 110,105,108,0
 .globl l0452
l0452:
 .long 0
 .byte -127,0
 .globl l0453
l0453:
 .long 0
 .byte -126,0
 .globl l0454
l0454:
 .long 0
 .byte -125,0
 .globl l0455
l0455:
 .long 0
 .byte -124,0
 .globl l0456
l0456:
 .long 0
 .byte -123,0
 .globl l0457
l0457:
 .long 0
 .byte -122,0
 .globl l0458
l0458:
 .long 0
 .byte -121,0
 .globl l0459
l0459:
 .long 0
 .byte -120,0
 .globl l0460
l0460:
 .long 0
 .byte -119,0
 .globl l0461
l0461:
 .long 0
 .byte -118,0
 .globl l0462
l0462:
 .long 0
 .byte -117,0
 .globl l0463
l0463:
 .long 0
 .byte -116,0
 .globl l0464
l0464:
 .long 0
 .byte -115,0
 .globl l0465
l0465:
 .long 0
 .byte -114,0
 .globl l0466
l0466:
 .long 0
 .byte -113,0
 .globl l0467
l0467:
 .long 0
 .byte -112,0
 .globl l0468
l0468:
 .long 0
 .byte -111,0
 .globl l0469
l0469:
 .long 0
 .byte -110,0
 .globl l0470
l0470:
 .long 0
 .byte -109,0
 .globl l0471
l0471:
 .long 0
 .byte -108,0
 .globl l0472
l0472:
 .long 0
 .byte -107,0
 .globl l0473
l0473:
 .long 0
 .byte -106,0
 .globl l0474
l0474:
 .long 0
 .byte -105,0
 .globl l0475
l0475:
 .long 0
 .byte -104,0
 .globl l0476
l0476:
 .long 0
 .byte -103,0
 .globl l0477
l0477:
 .long 0
 .byte -102,0
 .globl l0478
l0478:
 .long 0
 .byte -101,0
 .globl l0479
l0479:
 .long 0
 .byte -100,0
 .globl l0480
l0480:
 .long 0
 .byte -99,0
 .globl l0481
l0481:
 .long 0
 .byte -98,0
 .globl l0482
l0482:
 .long 0
 .byte -97,0
 .globl l0483
l0483:
 .long 0
 .byte -96,0
 .globl l0484
l0484:
 .long 0
 .byte -95,0
 .globl l0485
l0485:
 .long 0
 .byte -94,0
 .globl l0486
l0486:
 .long 0
 .byte -93,0
 .globl l0487
l0487:
 .long 0
 .byte -92,0
 .globl l0488
l0488:
 .long 0
 .byte -91,0
 .globl l0489
l0489:
 .long 0
 .byte -90,0
 .globl l0490
l0490:
 .long 0
 .byte -89,0
 .globl l0491
l0491:
 .long 0
 .byte -88,0
 .globl l0492
l0492:
 .long 0
 .byte -87,0
 .globl l0493
l0493:
 .long 0
 .byte -86,0
 .globl l0494
l0494:
 .long 0
 .byte -85,0
 .globl l0495
l0495:
 .long 0
 .byte -84,0
 .globl l0496
l0496:
 .long 0
 .byte -83,0
 .globl l0497
l0497:
 .long 0
 .byte -82,0
 .globl l0498
l0498:
 .long 0
 .byte -81,0
 .globl l0499
l0499:
 .long 0
 .byte -80,0
 .globl l0500
l0500:
 .long 0
 .byte -79,0
 .globl l0501
l0501:
 .long 0
 .byte -78,0
 .globl l0502
l0502:
 .long 0
 .byte -77,0
 .globl l0503
l0503:
 .long 0
 .byte -76,0
 .globl l0504
l0504:
 .long 0
 .byte -75,0
 .globl l0505
l0505:
 .long 0
 .byte -74,0
 .globl l0506
l0506:
 .long 0
 .byte -73,0
 .globl l0507
l0507:
 .long 0
 .byte -72,0
 .globl l0508
l0508:
 .long 0
 .byte -71,0
 .globl l0509
l0509:
 .long 0
 .byte -70,0
 .globl l0510
l0510:
 .long 0
 .byte -69,0
 .globl l0511
l0511:
 .long 0
 .byte -68,0
 .globl l0512
l0512:
 .long 0
 .byte -67,0
 .globl l0513
l0513:
 .long 0
 .byte -66,0
 .globl l0514
l0514:
 .long 0
 .byte -65,0
 .globl l0515
l0515:
 .long 0
 .byte -64,0
 .globl l0516
l0516:
 .long 0
 .byte -63,0
 .globl l0517
l0517:
 .long 0
 .byte -62,0
 .globl l0518
l0518:
 .long 0
 .byte -61,0
 .globl l0519
l0519:
 .long 0
 .byte -60,0
 .globl l0520
l0520:
 .long 0
 .byte -59,0
 .globl l0521
l0521:
 .long 0
 .byte -58,0
 .globl l0522
l0522:
 .long 0
 .byte -57,0
 .globl l0523
l0523:
 .long 0
 .byte -56,0
 .globl l0524
l0524:
 .long 0
 .byte -55,0
 .globl l0525
l0525:
 .long 0
 .byte -54,0
 .globl l0526
l0526:
 .long 0
 .byte -53,0
 .globl l0527
l0527:
 .long 0
 .byte -52,0
 .globl l0528
l0528:
 .long 0
 .byte -51,0
 .globl l0529
l0529:
 .long 0
 .byte -50,0
 .globl l0530
l0530:
 .long 0
 .byte -49,0
 .globl l0531
l0531:
 .long 0
 .byte -48,0
 .globl l0532
l0532:
 .long 0
 .byte -47,0
 .globl l0533
l0533:
 .long 0
 .byte -46,0
 .globl l0534
l0534:
 .long 0
 .byte -45,0
 .globl l0535
l0535:
 .long 0
 .byte -44,0
 .globl l0536
l0536:
 .long 0
 .byte -43,0
 .globl l0537
l0537:
 .long 0
 .byte -42,0
 .globl l0538
l0538:
 .long 0
 .byte -41,0
 .globl l0539
l0539:
 .long 0
 .byte -40,0
 .globl l0540
l0540:
 .long 0
 .byte -39,0
 .globl l0541
l0541:
 .long 0
 .byte -38,0
 .globl l0542
l0542:
 .long 0
 .byte -37,0
 .globl l0543
l0543:
 .long 0
 .byte -36,0
 .globl l0544
l0544:
 .long 0
 .byte -35,0
 .globl l0545
l0545:
 .long 0
 .byte -34,0
 .globl l0546
l0546:
 .long 0
 .byte -33,0
 .globl l0547
l0547:
 .long 0
 .byte -32,0
 .globl l0548
l0548:
 .long 0
 .byte -31,0
 .globl l0549
l0549:
 .long 0
 .byte -30,0
 .globl l0550
l0550:
 .long 0
 .byte -29,0
 .globl l0551
l0551:
 .long 0
 .byte -28,0
 .globl l0552
l0552:
 .long 0
 .byte -27,0
 .globl l0553
l0553:
 .long 0
 .byte -26,0
 .globl l0554
l0554:
 .long 0
 .byte -25,0
 .globl l0555
l0555:
 .long 0
 .byte -24,0
 .globl l0556
l0556:
 .long 0
 .byte -23,0
 .globl l0557
l0557:
 .long 0
 .byte -22,0
 .globl l0558
l0558:
 .long 0
 .byte -21,0
 .globl l0559
l0559:
 .long 0
 .byte -20,0
 .globl l0560
l0560:
 .long 0
 .byte -19,0
 .globl l0561
l0561:
 .long 0
 .byte -18,0
 .globl l0562
l0562:
 .long 0
 .byte -17,0
 .globl l0563
l0563:
 .long 0
 .byte -16,0
 .globl l0564
l0564:
 .long 0
 .byte -15,0
 .globl l0565
l0565:
 .long 0
 .byte -14,0
 .globl l0566
l0566:
 .long 0
 .byte -13,0
 .globl l0567
l0567:
 .long 0
 .byte -12,0
 .globl l0568
l0568:
 .long 0
 .byte -11,0
 .globl l0569
l0569:
 .long 0
 .byte -10,0
 .globl l0570
l0570:
 .long 0
 .byte -9,0
 .globl l0571
l0571:
 .long 0
 .byte -8,0
 .globl l0572
l0572:
 .long 0
 .byte -7,0
 .globl l0573
l0573:
 .long 0
 .byte -6,0
 .globl l0574
l0574:
 .long 0
 .byte -5,0
 .globl l0575
l0575:
 .long 0
 .byte -4,0
 .globl l0576
l0576:
 .long 0
 .byte -3,0
 .globl l0577
l0577:
 .long 0
 .byte -2,0
 .globl l0578
l0578:
 .long 0
 .byte -1,0
 .globl l0579
l0579:
 .long 10
 .byte 102,105,114,115,116,107,101,114,110
 .byte 101,108,0
 .globl l0580
l0580:
 .long 4
 .byte 115,116,97,99,107,0
 .globl l0581
l0581:
 .long 12
 .byte 97,114,103,117,109,101,110,116,98,108
 .byte 111,99,107,0
 .globl l0582
l0582:
 .long 10
 .byte 116,111,107,101,110,98,117,102,102
 .byte 101,114,0
 .globl l0583
l0583:
 .long 5
 .byte 98,110,100,115,116,107,0,0
 .globl l0584
l0584:
 .long 9
 .byte 99,97,116,99,104,115,116,97,99,107
 .byte 0,0
 .globl l0585
l0585:
 .long 8
 .byte 104,97,115,104,116,97,98,108,101,0
 .globl l0586
l0586:
 .long 12
 .byte 111,110,101,119,111,114,100,98,117
 .byte 102,102,101,114,0
 .globl l0587
l0587:
 .long 7
 .byte 115,97,118,101,97,114,103,99,0,0
 .globl l0588
l0588:
 .long 7
 .byte 115,97,118,101,97,114,103,118,0,0
 .globl l0589
l0589:
 .long 9
 .byte 100,97,116,101,98,117,102,102,101,114
 .byte 0,0
 .globl l0590
l0590:
 .long 12
 .byte 105,110,105,116,45,112,111,105,110
 .byte 116,101,114,115,0
 .globl l0591
l0591:
 .long 12
 .byte 99,97,116,99,104,115,116,97,99,107
 .byte 112,116,114,0
 .globl l0592
l0592:
 .long 15
 .byte 98,110,100,115,116,107,108,111,119
 .byte 101,114,98,111,117,110,100,0,0
 .globl l0593
l0593:
 .long 15
 .byte 98,110,100,115,116,107,117,112,112
 .byte 101,114,98,111,117,110,100,0,0
 .globl l0594
l0594:
 .long 8
 .byte 98,110,100,115,116,107,112,116,114
 .byte 0
 .globl l0595
l0595:
 .long 13
 .byte 104,101,97,112,108,111,119,101,114
 .byte 98,111,117,110,100,0,0
 .globl l0596
l0596:
 .long 3
 .byte 104,101,97,112,0,0
 .globl l0597
l0597:
 .long 10
 .byte 105,110,105,116,45,102,108,117,105
 .byte 100,115,0
 .globl l0598
l0598:
 .long 16
 .byte 103,99,97,114,114,97,121,108,111,119
 .byte 101,114,98,111,117,110,100,0
 .globl l0599
l0599:
 .long 16
 .byte 103,99,97,114,114,97,121,117,112,112
 .byte 101,114,98,111,117,110,100,0
 .globl l0600
l0600:
 .long 7
 .byte 104,101,97,112,108,97,115,116,0,0
 .globl l0601
l0601:
 .long 10
 .byte 111,108,100,104,101,97,112,108,97,115
 .byte 116,0
 .globl l0602
l0602:
 .long 12
 .byte 104,101,97,112,116,114,97,112,98,111
 .byte 117,110,100,0
 .globl l0603
l0603:
 .long 15
 .byte 111,108,100,104,101,97,112,116,114
 .byte 97,112,98,111,117,110,100,0,0
 .globl l0604
l0604:
 .long 13
 .byte 104,101,97,112,117,112,112,101,114
 .byte 98,111,117,110,100,0,0
 .globl l0605
l0605:
 .long 13
 .byte 95,105,110,102,98,105,116,108,101,110
 .byte 103,116,104,95,0,0
 .globl l0606
l0606:
 .long 6
 .byte 108,97,115,116,98,112,115,0
 .globl l0607
l0607:
 .long 12
 .byte 98,112,115,108,111,119,101,114,98,111
 .byte 117,110,100,0
 .globl l0608
l0608:
 .long 18
 .byte 109,97,105,110,115,116,97,114,116,105
 .byte 110,105,116,105,97,108,105,122,101
 .byte 0
 .globl l0609
l0609:
 .long 6
 .byte 110,101,120,116,98,112,115,0
 .globl l0610
l0610:
 .long 16
 .byte 111,108,100,104,101,97,112,117,112
 .byte 112,101,114,98,111,117,110,100,0
 .globl l0611
l0611:
 .long 16
 .byte 111,108,100,104,101,97,112,108,111
 .byte 119,101,114,98,111,117,110,100,0
 .globl l0612
l0612:
 .long 14
 .byte 115,116,97,99,107,117,112,112,101,114
 .byte 98,111,117,110,100,0
 .globl l0613
l0613:
 .long 8
 .byte 117,110,105,120,115,116,100,105,110
 .byte 0
 .globl l0614
l0614:
 .long 9
 .byte 117,110,105,120,115,116,100,111,117
 .byte 116,0,0
 .globl l0615
l0615:
 .long 9
 .byte 117,110,105,120,115,116,100,101,114
 .byte 114,0,0
 .globl l0616
l0616:
 .long 7
 .byte 117,110,105,120,110,117,108,108,0,0
 .globl l0617
l0617:
 .long 6
 .byte 117,110,105,120,101,111,102,0
 .globl l0618
l0618:
 .long 6
 .byte 117,110,105,120,116,116,121,0
 .globl l0619
l0619:
 .long 16
 .byte 42,42,42,109,117,115,116,45,98,101
 .byte 45,110,105,108,42,42,42,0
 .globl l0620
l0620:
 .long 20
 .byte 42,42,42,109,117,115,116,45,98,101
 .byte 45,110,105,108,45,116,111,111,42,42
 .byte 42,0
 .globl l0621
l0621:
 .long 7
 .byte 42,102,97,115,116,99,97,114,0,0
 .globl l0622
l0622:
 .long 3
 .byte 109,97,105,110,0,0
 .globl l0623
l0623:
 .long 3
 .byte 97,114,103,99,0,0
 .globl l0624
l0624:
 .long 3
 .byte 97,114,103,118,0,0
 .globl l0625
l0625:
 .long 14
 .byte 111,115,95,115,116,97,114,116,117,112
 .byte 95,104,111,111,107,0
 .globl l0626
l0626:
 .long 7
 .byte 101,98,120,115,97,118,101,42,0,0
 .globl l0627
l0627:
 .long 14
 .byte 115,116,97,99,107,108,111,119,101,114
 .byte 98,111,117,110,100,0
 .globl l0628
l0628:
 .long 11
 .byte 105,110,105,116,45,103,99,97,114,114
 .byte 97,121,0,0
 .globl l0629
l0629:
 .long 7
 .byte 112,114,101,45,109,97,105,110,0,0
 .globl l0630
l0630:
 .long 15
 .byte 101,120,105,116,45,119,105,116,104
 .byte 45,115,116,97,116,117,115,0,0
 .globl l0631
l0631:
 .long 14
 .byte 111,115,95,99,108,101,97,110,117,112
 .byte 95,104,111,111,107,0
 .globl l0632
l0632:
 .long 12
 .byte 101,120,116,101,114,110,97,108,95,101
 .byte 120,105,116,0
 .globl l0633
l0633:
 .long 10
 .byte 117,110,105,120,99,108,101,97,114,105
 .byte 111,0
 .globl l0634
l0634:
 .long 22
 .byte 105,110,105,116,105,97,108,105,122
 .byte 101,45,115,121,109,98,111,108,45,116
 .byte 97,98,108,101,0
 .globl l0635
l0635:
 .long 7
 .byte 105,110,105,116,99,111,100,101,0,0
 .globl l0636
l0636:
 .long 19
 .byte 99,111,110,115,111,108,101,45,112,114
 .byte 105,110,116,45,115,116,114,105,110
 .byte 103,0,0
 .globl l0637
l0637:
 .long 14
 .byte 99,111,110,115,111,108,101,45,110,101
 .byte 119,108,105,110,101,0
 .globl l0638
l0638:
 .long 5
 .byte 102,97,115,108,105,110,0,0
 .globl l0639
l0639:
 .long 10
 .byte 108,111,97,100,101,114,45,109,97,105
 .byte 110,0
 .globl l0640
l0640:
 .long 7
 .byte 117,110,105,120,112,117,116,115,0,0
 .globl l0641
l0641:
 .long 19
 .byte 99,111,110,115,111,108,101,45,112,114
 .byte 105,110,116,45,110,117,109,98,101,114
 .byte 0,0
 .globl l0642
l0642:
 .long 7
 .byte 117,110,105,120,112,117,116,110,0,0
 .globl l0643
l0643:
 .long 7
 .byte 117,110,105,120,112,117,116,99,0,0
 .globl l0644
l0644:
 .long 13
 .byte 98,105,110,97,114,121,111,112,101,110
 .byte 114,101,97,100,0,0
 .globl l0645
l0645:
 .long 7
 .byte 117,110,105,120,111,112,101,110,0,0
 .globl l0646
l0646:
 .long 17
 .byte 107,101,114,110,101,108,45,102,97,116
 .byte 97,108,45,101,114,114,111,114,0,0
 .globl l0647
l0647:
 .long 9
 .byte 98,105,110,97,114,121,114,101,97,100
 .byte 0,0
 .globl l0648
l0648:
 .long 3
 .byte 103,101,116,119,0,0
 .globl l0649
l0649:
 .long 14
 .byte 98,105,110,97,114,121,114,101,97,100
 .byte 98,108,111,99,107,0
 .globl l0650
l0650:
 .long 4
 .byte 102,114,101,97,100,0
 .globl l0651
l0651:
 .long 10
 .byte 98,105,110,97,114,121,99,108,111,115
 .byte 101,0
 .globl l0652
l0652:
 .long 5
 .byte 102,99,108,111,115,101,0,0
 .globl l0653
l0653:
 .long 9
 .byte 110,101,120,116,115,121,109,98,111
 .byte 108,0,0
 .globl l0654
l0654:
 .long 5
 .byte 115,121,109,110,97,109,0,0
 .globl l0655
l0655:
 .long 14
 .byte 104,97,115,104,45,105,110,116,111,45
 .byte 116,97,98,108,101,0
 .globl l0656
l0656:
 .long 11
 .byte 115,104,111,119,45,110,101,119,45,105
 .byte 100,115,0,0
 .globl l0657
l0657:
 .long 12
 .byte 102,97,115,108,105,110,45,105,110,116
 .byte 101,114,110,0
 .globl l0658
l0658:
 .long 26
 .byte 115,101,97,114,99,104,45,115,116,114
 .byte 105,110,103,45,102,111,114,45,99,104
 .byte 97,114,97,99,116,101,114,0
 .globl l0659
l0659:
 .long 5
 .byte 105,110,116,101,114,110,0,0
 .globl l0660
l0660:
 .long 5
 .byte 115,117,98,115,101,113,0,0
 .globl l0661
l0661:
 .long 22
 .byte 117,110,99,104,101,99,107,101,100,45
 .byte 115,116,114,105,110,103,45,105,110
 .byte 116,101,114,110,0
 .globl l0662
l0662:
 .long 3
 .byte 103,116,105,100,0,0
 .globl l0663
l0663:
 .long 9
 .byte 103,116,99,111,110,115,116,115,116
 .byte 114,0,0
 .globl l0664
l0664:
 .long 15
 .byte 99,111,112,121,115,116,114,105,110
 .byte 103,116,111,102,114,111,109,0,0
 .globl l0665
l0665:
 .long 16
 .byte 105,110,105,116,105,97,108,105,122
 .byte 101,45,110,101,119,45,105,100,0
 .globl l0666
l0666:
 .long 12
 .byte 104,97,115,104,45,102,117,110,99,116
 .byte 105,111,110,0
 .globl l0667
l0667:
 .long 21
 .byte 117,110,99,104,101,99,107,101,100,45
 .byte 115,116,114,105,110,103,45,101,113
 .byte 117,97,108,0,0
 .globl l0668
l0668:
 .long 5
 .byte 115,121,109,112,114,112,0,0
 .globl l0669
l0669:
 .long 5
 .byte 115,121,109,103,101,116,0,0
 .globl l0670
l0670:
 .long 5
 .byte 115,121,109,118,97,108,0,0
 .globl l0671
l0671:
 .long 11
 .byte 112,108,97,110,116,117,110,98,111,117
 .byte 110,100,0,0
 .globl l0672
l0672:
 .long 14
 .byte 102,97,115,108,105,110,45,98,97,100
 .byte 45,102,105,108,101,0
 .globl l0673
l0673:
 .long 12
 .byte 114,101,97,100,45,105,100,45,116,97
 .byte 98,108,101,0
 .globl l0674
l0674:
 .long 4
 .byte 103,116,98,112,115,0
 .globl l0675
l0675:
 .long 5
 .byte 103,116,119,114,100,115,0,0
 .globl l0676
l0676:
 .long 16
 .byte 100,111,45,114,101,108,111,99,97,116
 .byte 105,111,110,45,110,101,119,0
 .globl l0677
l0677:
 .long 12
 .byte 100,111,45,114,101,108,111,99,97,116
 .byte 105,111,110,0
 .globl l0678
l0678:
 .long 13
 .byte 99,111,100,101,45,98,97,115,101,45
 .byte 104,97,99,107,0,0
 .globl l0679
l0679:
 .long 12
 .byte 97,100,100,114,101,115,115,97,112,112
 .byte 108,121,48,0
 .globl l0680
l0680:
 .long 5
 .byte 100,101,108,98,112,115,0,0
 .globl l0681
l0681:
 .long 7
 .byte 98,105,116,116,97,98,108,101,0,0
 .globl l0682
l0682:
 .long 12
 .byte 114,101,108,111,99,97,116,101,45,119
 .byte 111,114,100,0
 .globl l0683
l0683:
 .long 11
 .byte 114,101,108,111,99,97,116,101,45,105
 .byte 110,102,0,0
 .globl l0684
l0684:
 .long 18
 .byte 114,101,108,111,99,97,116,101,45,114
 .byte 105,103,104,116,45,104,97,108,102,0
 .globl l0685
l0685:
 .long 17
 .byte 99,111,109,112,117,116,101,45,114,101
 .byte 108,111,99,97,116,105,111,110,0,0
 .globl l0686
l0686:
 .long 17
 .byte 108,111,99,97,108,45,116,111,45,103
 .byte 108,111,98,97,108,45,105,100,0,0
 .globl l0687
l0687:
 .long 5
 .byte 115,121,109,102,110,99,0,0
 .globl l0688
l0688:
 .long 3
 .byte 112,117,116,100,0,0
 .globl l0689
l0689:
 .long 7
 .byte 112,117,116,101,110,116,114,121,0,0
 .globl l0690
l0690:
 .long 19
 .byte 116,114,121,45,111,116,104,101,114
 .byte 45,98,112,115,45,115,112,97,99,101
 .byte 115,0,0
 .globl l0691
l0691:
 .long 14
 .byte 103,116,98,112,115,45,110,105,108,45
 .byte 101,114,114,111,114,0
 .globl l0692
l0692:
 .long 3
 .byte 103,101,116,100,0,0
 .globl l0693
l0693:
 .long 7
 .byte 115,116,100,101,114,114,111,114,0,0
 .globl l0694
l0694:
 .long 5
 .byte 103,116,104,101,97,112,0,0
 .globl l0695
l0695:
 .long 15
 .byte 107,110,111,119,110,45,102,114,101
 .byte 101,45,115,112,97,99,101,0,0
 .globl l0696
l0696:
 .long 10
 .byte 114,101,97,108,45,103,116,104,101,97
 .byte 112,0
 .globl l0697
l0697:
 .long 12
 .byte 103,101,116,45,104,101,97,112,45,116
 .byte 114,97,112,0
 .globl l0698
l0698:
 .long 6
 .byte 114,101,99,108,97,105,109,0
 .globl l0699
l0699:
 .long 4
 .byte 103,116,115,116,114,0
 .globl l0700
l0700:
 .long 3
 .byte 99,111,110,115,0,0
 .globl l0701
l0701:
 .long 10
 .byte 105,110,116,101,114,114,111,103,97
 .byte 116,101,0
 .globl l0702
l0702:
 .long 5
 .byte 109,111,100,105,102,121,0,0
 .globl l0703
l0703:
 .long 2
 .byte 112,117,116,0
 .globl l0704
l0704:
 .long 12
 .byte 117,110,99,104,101,99,107,101,100,45
 .byte 112,117,116,0
 .globl l0705
l0705:
 .long 13
 .byte 117,110,99,104,101,99,107,101,100,45
 .byte 112,114,111,112,0,0
 .globl l0706
l0706:
 .long 4
 .byte 97,116,115,111,99,0
 .globl l0707
l0707:
 .long 16
 .byte 117,110,99,104,101,99,107,101,100,45
 .byte 115,101,116,112,114,111,112,0
 .globl l0708
l0708:
 .long 8
 .byte 99,111,100,101,45,112,117,116,100,0
 .globl l0709
l0709:
 .long 3
 .byte 101,120,112,114,0,0
 .globl l0710
l0710:
 .long 3
 .byte 116,121,112,101,0,0
 .globl l0711
l0711:
 .long 15
 .byte 112,108,97,110,116,99,111,100,101,112
 .byte 111,105,110,116,101,114,0,0
 .globl l0712
l0712:
 .long 4
 .byte 102,108,117,105,100,0
 .globl l0713
l0713:
 .long 5
 .byte 102,108,117,105,100,49,0,0
 .globl l0714
l0714:
 .long 6
 .byte 118,97,114,116,121,112,101,0
 .globl l0715
l0715:
 .long 8
 .byte 99,111,110,115,116,97,110,116,63,0
 .globl l0716
l0716:
 .long 15
 .byte 42,100,101,102,105,110,101,45,99,111
 .byte 110,115,116,97,110,116,0,0
 .globl l0717
l0717:
 .long 14
 .byte 112,108,97,110,116,108,97,109,98,100
 .byte 97,108,105,110,107,0
 .globl l0718
l0718:
 .long 16
 .byte 117,110,100,101,102,105,110,101,100
 .byte 102,117,110,99,116,105,111,110,0
 .globl l0719
l0719:
 .long 20
 .byte 117,110,100,101,102,105,110,101,100
 .byte 102,117,110,99,116,105,111,110,45,97
 .byte 117,120,0
 .globl l0720
l0720:
 .long 25
 .byte 99,111,109,112,105,108,101,100,99,97
 .byte 108,108,105,110,103,105,110,116,101
 .byte 114,112,114,101,116,101,100,0,0
 .globl l0721
l0721:
 .long 8
 .byte 99,111,100,101,102,111,114,109,42,0
 .globl l0722
l0722:
 .long 28
 .byte 99,111,109,112,105,108,101,100,99,97
 .byte 108,108,105,110,103,105,110,116,101
 .byte 114,112,114,101,116,101,100,97,117
 .byte 120,0
 .globl l0723
l0723:
 .long 5
 .byte 101,99,104,111,111,110,0,0
 .globl l0724
l0724:
 .long 6
 .byte 101,99,104,111,111,102,102,0
 .globl l0725
l0725:
 .long 26
 .byte 101,120,116,101,114,110,97,108,95,99
 .byte 104,97,114,115,105,110,105,110,112
 .byte 117,116,98,117,102,102,101,114,0
 .globl l0726
l0726:
 .long 19
 .byte 102,108,117,115,104,115,116,100,111
 .byte 117,116,112,117,116,98,117,102,102
 .byte 101,114,0,0
 .globl l0727
l0727:
 .long 27
 .byte 101,120,116,101,114,110,97,108,95,117
 .byte 115,101,114,95,104,111,109,101,100
 .byte 105,114,95,115,116,114,105,110,103
 .byte 0,0
 .globl l0728
l0728:
 .long 30
 .byte 101,120,116,101,114,110,97,108,95,97
 .byte 110,121,117,115,101,114,95,104,111
 .byte 109,101,100,105,114,95,115,116,114
 .byte 105,110,103,0
 .globl l0729
l0729:
 .long 12
 .byte 97,108,116,101,114,104,101,97,112,115
 .byte 105,122,101,0
 .globl l0730
l0730:
 .long 14
 .byte 97,108,108,111,99,97,116,101,109,111
 .byte 114,101,98,112,115,0
 .globl l0731
l0731:
 .long 14
 .byte 103,101,116,95,102,105,108,101,95,115
 .byte 116,97,116,117,115,0
 .globl l0732
l0732:
 .long 13
 .byte 101,120,116,101,114,110,97,108,95,97
 .byte 108,97,114,109,0,0
 .globl l0733
l0733:
 .long 14
 .byte 101,120,116,101,114,110,97,108,95,117
 .byte 97,108,97,114,109,0
 .globl l0734
l0734:
 .long 12
 .byte 101,120,116,101,114,110,97,108,95,116
 .byte 105,109,101,0
 .globl l0735
l0735:
 .long 12
 .byte 101,120,116,101,114,110,97,108,95,116
 .byte 105,109,99,0
 .globl l0736
l0736:
 .long 12
 .byte 101,120,116,101,114,110,97,108,95,115
 .byte 116,97,116,0
 .globl l0737
l0737:
 .long 12
 .byte 101,120,116,101,114,110,97,108,95,108
 .byte 105,110,107,0
 .globl l0738
l0738:
 .long 14
 .byte 101,120,116,101,114,110,97,108,95,117
 .byte 110,108,105,110,107,0
 .globl l0739
l0739:
 .long 14
 .byte 101,120,116,101,114,110,97,108,95,115
 .byte 116,114,108,101,110,0
 .globl l0740
l0740:
 .long 14
 .byte 101,120,116,101,114,110,97,108,95,115
 .byte 101,116,101,110,118,0
 .globl l0741
l0741:
 .long 14
 .byte 101,120,116,101,114,110,97,108,95,103
 .byte 101,116,101,110,118,0
 .globl l0742
l0742:
 .long 6
 .byte 117,120,102,108,111,97,116,0
 .globl l0743
l0743:
 .long 4
 .byte 117,120,102,105,120,0
 .globl l0744
l0744:
 .long 7
 .byte 117,120,97,115,115,105,103,110,0,0
 .globl l0745
l0745:
 .long 6
 .byte 117,120,112,108,117,115,50,0
 .globl l0746
l0746:
 .long 11
 .byte 117,120,100,105,102,102,101,114,101
 .byte 110,99,101,0,0
 .globl l0747
l0747:
 .long 7
 .byte 117,120,116,105,109,101,115,50,0,0
 .globl l0748
l0748:
 .long 9
 .byte 117,120,113,117,111,116,105,101,110
 .byte 116,0,0
 .globl l0749
l0749:
 .long 9
 .byte 117,120,103,114,101,97,116,101,114
 .byte 112,0,0
 .globl l0750
l0750:
 .long 6
 .byte 117,120,108,101,115,115,112,0
 .globl l0751
l0751:
 .long 11
 .byte 117,120,119,114,105,116,101,102,108
 .byte 111,97,116,0,0
 .globl l0752
l0752:
 .long 14
 .byte 117,120,100,111,117,98,108,101,116
 .byte 111,102,108,111,97,116,0
 .globl l0753
l0753:
 .long 14
 .byte 117,120,102,108,111,97,116,116,111
 .byte 100,111,117,98,108,101,0
 .globl l0754
l0754:
 .long 4
 .byte 117,120,115,105,110,0
 .globl l0755
l0755:
 .long 4
 .byte 117,120,99,111,115,0
 .globl l0756
l0756:
 .long 4
 .byte 117,120,116,97,110,0
 .globl l0757
l0757:
 .long 5
 .byte 117,120,97,115,105,110,0,0
 .globl l0758
l0758:
 .long 5
 .byte 117,120,97,99,111,115,0,0
 .globl l0759
l0759:
 .long 5
 .byte 117,120,97,116,97,110,0,0
 .globl l0760
l0760:
 .long 5
 .byte 117,120,115,113,114,116,0,0
 .globl l0761
l0761:
 .long 4
 .byte 117,120,101,120,112,0
 .globl l0762
l0762:
 .long 4
 .byte 117,120,108,111,103,0
 .globl l0763
l0763:
 .long 6
 .byte 117,120,97,116,97,110,50,0
 .globl l0764
l0764:
 .long 11
 .byte 101,120,116,101,114,110,97,108,95,112
 .byte 119,100,0,0
 .globl l0765
l0765:
 .long 10
 .byte 115,117,110,51,95,115,105,103,115,101
 .byte 116,0
 .globl l0766
l0766:
 .long 12
 .byte 115,117,110,51,95,115,105,103,114,101
 .byte 108,115,101,0
 .globl l0767
l0767:
 .long 7
 .byte 115,105,103,114,101,108,115,101,0,0
 .globl l0768
l0768:
 .long 5
 .byte 117,110,101,120,101,99,0,0
 .globl l0769
l0769:
 .long 15
 .byte 101,120,112,97,110,100,95,102,105,108
 .byte 101,95,110,97,109,101,0,0
 .globl l0770
l0770:
 .long 5
 .byte 117,110,105,120,99,100,0,0
 .globl l0771
l0771:
 .long 4
 .byte 99,116,105,109,101,0
 .globl l0772
l0772:
 .long 14
 .byte 101,120,116,101,114,110,97,108,95,115
 .byte 121,115,116,101,109,0
 .globl l0773
l0773:
 .long 4
 .byte 102,111,112,101,110,0
 .globl l0774
l0774:
 .long 4
 .byte 102,112,117,116,99,0
 .globl l0775
l0775:
 .long 4
 .byte 102,103,101,116,99,0
 .globl l0776
l0776:
 .long 4
 .byte 102,103,101,116,115,0
 .globl l0777
l0777:
 .long 5
 .byte 102,119,114,105,116,101,0,0
 .globl l0778
l0778:
 .long 5
 .byte 102,102,108,117,115,104,0,0
 .globl l0779
l0779:
 .long 4
 .byte 102,115,101,101,107,0
 .globl l0780
l0780:
 .long 7
 .byte 99,108,101,97,114,101,114,114,0,0
 .globl l0781
l0781:
 .long 3
 .byte 112,117,116,119,0,0
 .globl l0782
l0782:
 .long 5
 .byte 115,105,103,110,97,108,0,0
 .globl l0783
l0783:
 .long 4
 .byte 115,108,101,101,112,0
 .globl l0784
l0784:
 .long 11
 .byte 105,101,101,101,95,104,97,110,100,108
 .byte 101,114,0,0
 .globl l0785
l0785:
 .long 9
 .byte 105,101,101,101,95,102,108,97,103,115
 .byte 0,0
 .globl l0786
l0786:
 .long 9
 .byte 115,101,116,108,105,110,101,98,117
 .byte 102,0,0
 .globl l0787
l0787:
 .long 5
 .byte 103,101,116,112,105,100,0,0
 .globl l0788
l0788:
 .long 8
 .byte 103,101,116,104,111,115,116,105,100
 .byte 0
 .globl l0789
l0789:
 .long 13
 .byte 117,110,105,120,115,111,99,107,101
 .byte 116,111,112,101,110,0,0
 .globl l0790
l0790:
 .long 8
 .byte 103,101,116,115,111,99,107,101,116
 .byte 0
 .globl l0791
l0791:
 .long 10
 .byte 119,114,105,116,101,115,111,99,107
 .byte 101,116,0
 .globl l0792
l0792:
 .long 14
 .byte 117,110,105,120,99,108,111,115,101
 .byte 115,111,99,107,101,116,0
 .globl l0793
l0793:
 .long 3
 .byte 102,111,114,107,0,0
 .globl l0794
l0794:
 .long 3
 .byte 119,97,105,116,0,0
 .globl l0795
l0795:
 .long 4
 .byte 112,111,112,101,110,0
 .globl l0796
l0796:
 .long 5
 .byte 112,99,108,111,115,101,0,0
 .globl l0797
l0797:
 .long 5
 .byte 115,104,109,99,116,108,0,0
 .globl l0798
l0798:
 .long 5
 .byte 115,104,109,103,101,116,0,0
 .globl l0799
l0799:
 .long 4
 .byte 115,104,109,97,116,0
 .globl l0800
l0800:
 .long 4
 .byte 115,104,109,100,116,0
 .globl l0801
l0801:
 .long 5
 .byte 115,101,109,99,116,108,0,0
 .globl l0802
l0802:
 .long 5
 .byte 115,101,109,103,101,116,0,0
 .globl l0803
l0803:
 .long 4
 .byte 115,101,109,111,112,0
 .globl l0804
l0804:
 .long 11
 .byte 117,110,105,120,45,112,114,111,102
 .byte 105,108,101,0,0
 .globl l0805
l0805:
 .long 11
 .byte 79,77,109,97,107,101,68,101,118,105
 .byte 99,101,0,0
 .globl l0806
l0806:
 .long 12
 .byte 79,77,99,108,111,115,101,68,101,118
 .byte 105,99,101,0
 .globl l0807
l0807:
 .long 18
 .byte 79,77,103,101,116,68,101,118,105,99
 .byte 101,69,110,99,111,100,105,110,103,0
 .globl l0808
l0808:
 .long 18
 .byte 79,77,115,101,116,68,101,118,105,99
 .byte 101,69,110,99,111,100,105,110,103,0
 .globl l0809
l0809:
 .long 11
 .byte 79,77,109,97,107,101,73,79,70,105,108
 .byte 101,0,0
 .globl l0810
l0810:
 .long 9
 .byte 79,77,109,97,107,101,73,79,70,100,0
 .byte 0
 .globl l0811
l0811:
 .long 9
 .byte 79,77,109,97,107,101,67,111,110,110
 .byte 0,0
 .globl l0812
l0812:
 .long 7
 .byte 79,77,99,111,110,110,73,110,0,0
 .globl l0813
l0813:
 .long 8
 .byte 79,77,99,111,110,110,79,117,116,0
 .globl l0814
l0814:
 .long 8
 .byte 79,77,99,111,110,110,84,67,80,0
 .globl l0815
l0815:
 .long 9
 .byte 79,77,99,111,110,110,85,110,105,120
 .byte 0,0
 .globl l0816
l0816:
 .long 8
 .byte 79,77,98,105,110,100,84,67,80,0
 .globl l0817
l0817:
 .long 9
 .byte 79,77,98,105,110,100,85,110,105,120
 .byte 0,0
 .globl l0818
l0818:
 .long 10
 .byte 79,77,108,97,117,110,99,104,69,110
 .byte 118,0
 .globl l0819
l0819:
 .long 7
 .byte 79,77,108,97,117,110,99,104,0,0
 .globl l0820
l0820:
 .long 12
 .byte 79,77,115,101,114,118,101,67,108,105
 .byte 101,110,116,0
 .globl l0821
l0821:
 .long 10
 .byte 79,77,99,111,110,110,67,108,111,115
 .byte 101,0
 .globl l0822
l0822:
 .long 9
 .byte 79,77,112,117,116,73,110,116,51,50
 .byte 0,0
 .globl l0823
l0823:
 .long 10
 .byte 79,77,112,117,116,66,105,103,73,110
 .byte 116,0
 .globl l0824
l0824:
 .long 11
 .byte 79,77,112,117,116,70,108,111,97,116
 .byte 54,52,0,0
 .globl l0825
l0825:
 .long 13
 .byte 79,77,112,117,116,66,121,116,101,65
 .byte 114,114,97,121,0,0
 .globl l0826
l0826:
 .long 10
 .byte 79,77,112,117,116,83,116,114,105,110
 .byte 103,0
 .globl l0827
l0827:
 .long 7
 .byte 79,77,112,117,116,86,97,114,0,0
 .globl l0828
l0828:
 .long 10
 .byte 79,77,112,117,116,83,121,109,98,111
 .byte 108,0
 .globl l0829
l0829:
 .long 11
 .byte 79,77,112,117,116,83,116,114,105,110
 .byte 103,78,0,0
 .globl l0830
l0830:
 .long 8
 .byte 79,77,112,117,116,86,97,114,78,0
 .globl l0831
l0831:
 .long 11
 .byte 79,77,112,117,116,83,121,109,98,111
 .byte 108,78,0,0
 .globl l0832
l0832:
 .long 7
 .byte 79,77,112,117,116,65,112,112,0,0
 .globl l0833
l0833:
 .long 10
 .byte 79,77,112,117,116,69,110,100,65,112
 .byte 112,0
 .globl l0834
l0834:
 .long 8
 .byte 79,77,112,117,116,65,116,116,114,0
 .globl l0835
l0835:
 .long 11
 .byte 79,77,112,117,116,69,110,100,65,116
 .byte 116,114,0,0
 .globl l0836
l0836:
 .long 7
 .byte 79,77,112,117,116,65,116,112,0,0
 .globl l0837
l0837:
 .long 10
 .byte 79,77,112,117,116,69,110,100,65,116
 .byte 112,0
 .globl l0838
l0838:
 .long 9
 .byte 79,77,112,117,116,69,114,114,111,114
 .byte 0,0
 .globl l0839
l0839:
 .long 12
 .byte 79,77,112,117,116,69,110,100,69,114
 .byte 114,111,114,0
 .globl l0840
l0840:
 .long 10
 .byte 79,77,112,117,116,79,98,106,101,99
 .byte 116,0
 .globl l0841
l0841:
 .long 13
 .byte 79,77,112,117,116,69,110,100,79,98
 .byte 106,101,99,116,0,0
 .globl l0842
l0842:
 .long 10
 .byte 79,77,103,101,116,79,98,106,101,99
 .byte 116,0
 .globl l0843
l0843:
 .long 13
 .byte 79,77,103,101,116,69,110,100,79,98
 .byte 106,101,99,116,0,0
 .globl l0844
l0844:
 .long 10
 .byte 79,77,103,101,116,76,101,110,103,116
 .byte 104,0
 .globl l0845
l0845:
 .long 16
 .byte 79,77,103,101,116,83,121,109,98,111
 .byte 108,76,101,110,103,116,104,0
 .globl l0846
l0846:
 .long 8
 .byte 79,77,103,101,116,84,121,112,101,0
 .globl l0847
l0847:
 .long 9
 .byte 79,77,103,101,116,73,110,116,51,50
 .byte 0,0
 .globl l0848
l0848:
 .long 10
 .byte 79,77,103,101,116,66,105,103,73,110
 .byte 116,0
 .globl l0849
l0849:
 .long 11
 .byte 79,77,103,101,116,66,105,103,73,110
 .byte 116,78,0,0
 .globl l0850
l0850:
 .long 11
 .byte 79,77,103,101,116,70,108,111,97,116
 .byte 54,52,0,0
 .globl l0851
l0851:
 .long 13
 .byte 79,77,103,101,116,66,121,116,101,65
 .byte 114,114,97,121,0,0
 .globl l0852
l0852:
 .long 14
 .byte 79,77,103,101,116,66,121,116,101,65
 .byte 114,114,97,121,78,0
 .globl l0853
l0853:
 .long 10
 .byte 79,77,103,101,116,83,116,114,105,110
 .byte 103,0
 .globl l0854
l0854:
 .long 11
 .byte 79,77,103,101,116,83,116,114,105,110
 .byte 103,78,0,0
 .globl l0855
l0855:
 .long 7
 .byte 79,77,103,101,116,86,97,114,0,0
 .globl l0856
l0856:
 .long 8
 .byte 79,77,103,101,116,86,97,114,78,0
 .globl l0857
l0857:
 .long 10
 .byte 79,77,103,101,116,83,121,109,98,111
 .byte 108,0
 .globl l0858
l0858:
 .long 11
 .byte 79,77,103,101,116,83,121,109,98,111
 .byte 108,78,0,0
 .globl l0859
l0859:
 .long 7
 .byte 79,77,103,101,116,65,112,112,0,0
 .globl l0860
l0860:
 .long 10
 .byte 79,77,103,101,116,69,110,100,65,112
 .byte 112,0
 .globl l0861
l0861:
 .long 8
 .byte 79,77,103,101,116,65,116,116,114,0
 .globl l0862
l0862:
 .long 11
 .byte 79,77,103,101,116,69,110,100,65,116
 .byte 116,114,0,0
 .globl l0863
l0863:
 .long 7
 .byte 79,77,103,101,116,65,116,112,0,0
 .globl l0864
l0864:
 .long 10
 .byte 79,77,103,101,116,69,110,100,65,116
 .byte 112,0
 .globl l0865
l0865:
 .long 9
 .byte 79,77,103,101,116,69,114,114,111,114
 .byte 0,0
 .globl l0866
l0866:
 .long 12
 .byte 79,77,103,101,116,69,110,100,69,114
 .byte 114,111,114,0
 .globl l0867
l0867:
 .long 11
 .byte 79,77,112,117,116,67,111,109,109,101
 .byte 110,116,0,0
 .globl l0868
l0868:
 .long 11
 .byte 79,77,103,101,116,67,111,109,109,101
 .byte 110,116,0,0
 .globl l0869
l0869:
 .long 12
 .byte 79,77,112,117,116,67,111,109,109,101
 .byte 110,116,78,0
 .globl l0870
l0870:
 .long 12
 .byte 79,77,103,101,116,67,111,109,109,101
 .byte 110,116,78,0
 .globl l0871
l0871:
 .long 12
 .byte 79,77,98,101,103,105,110,79,98,106
 .byte 101,99,116,0
 .globl l0872
l0872:
 .long 10
 .byte 79,77,101,110,100,79,98,106,101,99
 .byte 116,0
 .globl l0873
l0873:
 .long 18
 .byte 79,77,115,101,116,86,101,114,98,111
 .byte 115,105,116,121,76,101,118,101,108
 .byte 0
 .globl l0874
l0874:
 .long 14
 .byte 79,77,105,103,110,111,114,101,67,111
 .byte 109,109,101,110,116,0
 .globl l0875
l0875:
 .long 9
 .byte 108,97,115,116,107,101,114,110,101
 .byte 108,0,0
 .globl l0876
l0876:
 .long 11
 .byte 99,111,100,101,97,100,100,114,101,115
 .byte 115,112,0,0
 .globl l0877
l0877:
 .long 14
 .byte 103,101,116,102,99,111,100,101,112
 .byte 111,105,110,116,101,114,0
 .globl symfnc
 .globl symget

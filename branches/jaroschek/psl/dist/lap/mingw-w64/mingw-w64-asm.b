�     �              asmpseudoprintfloat            eqn           printf         codefileheader  	       codeprintf             dataprocstate*         foreignexternlist*             data           datafileheader  	       dataprintf             datafiletrailer        codefiletrailer        checkforeignextern             memq           cons  
        codeblockheader        codeblocktrailer              dataalignfullword       
       printstring            size           indx           printexpression        greaterp       	       printbyte,             add1           remainder             terpri         posn           prin2          truncatestring         sub           printbytelist          printbyte              $eol$          printhalfwordlist              printhalfword          printhalfwords         printexpressionformpointer*            printexpressionform*           halfwordformat*        asmpseudoprinthalfwords 
       printopcode            *sun-mnemonic-change-table*            atsoc         id2string      
       string2list 
          delete         asm-char-downcase              ncons          eval           string         lessp   	       difference            plus2          specialactionformainentrypoint         mainentrypointname*            codeprintlabel         codedeclareexported     	       asmsymbolp      	       sunsymbolp             minusp         printnumericoperand            operandprintindirect           regp           printoperand           operandprintdisplacement               operandprintindexed            printregister          error          times          operandprintimmediate          operandprintpostincrement              operandprintreglist            operandprintpredecrement               operandprintabsolute           operandprintforeignentry               *lower         bndstkptr             bndstkupperbound              bndstklowerbound              bstackunderflow        bstackoverflow         mcprint        instructionprint              *cerror        wrs           list2          cerror         datareserveblock               times2         datareservefunctioncellblock           cdq           cltd           .quad          cwde           cwtl           undefinedfunction             cbw           cbtw           global1        fluid1         *declarebeforeuse              codefilenameformat*            datafilenameformat*            initfilenameformat*            inputsymfile*          outputsymfile*         numericregisternames*          labelformat*           commentformat*         exporteddeclarationformat*             externaldeclarationformat*             fullwordformat*        reservedatablockformat*        reservezeroblockformat*        put           definedfunctioncellformat*      !       undefinedfunctioncellinstructions*             asmopenparen*          asmcloseparen*         putentry              flag1          cmacropatterntable            mc            printcomment           resultingcode*         foreignentry           absolute              predecrement           reglist        postincrement          immediate             indexed        displacement           indirect              operandprintfunction           halfword              expr          float   
       asmpseudoop            st            sp             cx             cl            rcx           r15            r14            r13            r12            r11            r10            r9            r8            edx           ecx           rsi           rdi           rdx 	          ax            al            eax           t2            t1            registername           lor           land    
       binaryasmop            mkitem         asmexpressionformat            main          pathin* 
       modulename*           dataout*               codeout*              globaldatafilename*     �      `               .long 0x3ff00000%n  .long 0%n              �?         .long 0%n  .long 0%n                        HPH�%"  H��H��H�@H��H��H� �% �H;%  tH�%  H���$% �H�%
  H�$H��H��H�@H��H��H� ��% �H;%  tH�%  H���$% �H���       (      8      �      �X                           .text%n         H�%�  H�� @�% �H�<%�  H�<% �H�%�  H�% �À      �    @�0                     .data%n         H�%�  H��	 @�$%	 ��       H��H����        H�%�  À      �               H�%  À      �              HPH�% ��% �H;%w  uH�% �H�$���% �H�% ��H�%w  H��À      � H��H����        H�%�  À      �               H�%�  À      �               H�%�  À      �               .byte         H�� H�<%j  H�|$H�|$H�$H�<%j  H�|$�% �H=������   H�$�% �H�D$H�%b  �% �H3�H�$�% �H�� @�% �H�\$H��   H�D$H�\$H�\$H�D$�% �H;%j  u1H�\$H�$�% �H�� @�% �H�D$�% �H�D$�H3�H�� @�% �H��   H�D$�% �H=   uH3�H�� @�% ��% ��8H�%b  �% �H3�H�� @�% �H3�H�� @�% ��% �H�� H�%j  ��     �      �      H��H����        ,              %n .byte               HP�% �H��(   �% �H;%  tH�%  �% ��H�%  �% �H�$H��H�� @�$% ��     �     �      � H��H����       HSHP�% �H�\$�% �H;%s  uH�$�H�L$H3�H�$H���$% �H��À      �     H��H����       HPH�<$H��8H��	tH�%�  �<H��H��H�$H��H��H� H��  @H���%  �H�$H��H��H�@H�$�H��À      �             .byte         HPH�%F  �% �H�$H�� @�% �H�%! �H���$% ��       H��H����       HPH�<$H��8H��	tH�%�  �<H��H��H�$H��H��H� H��# @H���%# �H�$H��H��H�@H�$�H��À      �             .word         HPH�%  �% �H�$H�� @�% �H�%! �H���$% ��       H��H����       H�4%% �H��H��H�H�%& �H�%' ��$% �      H��H����       H��H��H��H��H�[H�$H�<$H��8H��	t
H�%�  �3H�$H��H��H� H��# @�%# �H�$H��H��H�@H�$�H��À      �        H��(H�<%�	  H�|$ H�|$H�|$H�|$H�$H�%* ��%+ �H;%�	  tH��H��H��H�[H�$H�%�	  H�$�%, ��%- �H��H���   �%. �H�D$H��H��8H��	uH��H��H� �H�%�	  H�%�	  H��H�D$ H�\$H�L$H�|$H��8H��	t
H�D$�   H�|$H;<%�	  tCH�D$ H��/ @�%/ ��%0 �H�t$H��H��H�FH�D$H��H��H�@H�D$�$H�D$ H��/ @�%/ ��%0 �H�D$H�D$H�D$H��H��H�@H�D$H��H��8H��	uH��H��H� �H�%�	  H�D$ �/���H��H�%�	  �% ��%1 �H��(�$% �2    @��      �       H��H����       HPH��A   �%3 �H;%*
  uGH��Z   H�$H� �% �H;%*
  u'H��A   H�$�%4 �H��H��a   H���$%5 �H�$H��À      �              H�%7 �H��8 @�%8 �H�%7 �H��9 @�$%9 �    H��H����       H��H��8H���   u�%, �H��; @�$%; �          H��0H�<%�  H�|$(H�|$ H�|$H�|$H�|$H�$�% �H�D$H3�H�$�% �H��H�D$H�D$H�\$�%< �H;%�  H�%�  tH   H;%�  �^  H��a   H�D$�%3 �H;%�  H�%�  tH   H;%�  t+H��z   H�D$�% �H;%�  H�%�  tH   H;%�  �}   H��a   H�D$�%3 �H;%�  H�%�  tH   H;%�  t+H��z   H�D$�% �H;%�  H�%�  tH   H;%�  uH��_   H�D$�% �H;%�  �e  H�%�  H�\$H��   H�D$H�\$ H�L$(H�\$ H�D$�% �H;%�  uH;D$(u
H�D$(�  H�\$H�$�% �H�D$H��a   �%3 �H;%�  H�%�  tH   H;%�  t+H��z   H�D$�% �H;%�  H�%�  tH   H;%�  �}   H��a   H�D$�%3 �H;%�  H�%�  tH   H;%�  t+H��z   H�D$�% �H;%�  H�%�  tH   H;%�  uH��_   H�D$�% �H�D$(H�D$�% �H�D$����H��0�t      ��      �          $%w            H��H�%�  �$% ��           H��H������������                *               )               (              H��H��H��H�@H��H��H� H�$H��? @H���%? �H;%�  t9H�%�  �% �H�$H��@ @H�����%@ �H�%�  H���$% �H�%�  �% �H�$H��@ @�%@ �H�%�  H���$% ��     �               �      � H��H����        )               (              H��H��H��H�@H�$H��H��H�@H��H��H� H�� @H��H� �% �H�%�  ��% �H�$H��H��H� H��@ @H���%@ �H�%�  H���$% �                       )              Wrong Indexed mode             8     	       ,1)             ,               (              H     	       X     	       �      �       H��H�<%  H�|$H�|$H�$H��H��H�@H��H��H� H��? @�%? �H;%  ��   H�$H��H��H�@H��H��H�@H��H��H� H�D$H��H��H�@H��H��H�@H��H��H� H�� @�% �H�%  �% �H�D$H��H��H�@H��H��H� H��C @�%C �H�%  �% �H�$H��H��H�@H��H��H� H��C @�%C �H�%   �% �H�$H��H��H�@H��H��H� H��H��8H=	   H�%�  tH   H;%  t&H��H��H��H�?H;<%�  H�%�  tH   H;%  ��  H�$H��H��H�[H��H��H�H�$H��H��H�@H��H��H�@H��H��H� H�D$H�\$H��H��8H��	tH�� @�% ��1H��H��H�@H��H��H�@H��H��H� H�� @�% �H�%  �% �H�|$H��8H��	u*H�D$H��H��H�@H��H��H� H��C @�%C �H�%  �% �H�D$H��H��H�@H��H��H� H��C @�%C �H�%  �% �H�%�  H�D$H��H��H�@H��H��H�@H��H��H� �% �H;%  uH�%�  H���   �%D �H�D$H��H��H�@H��H��H�@H��H��H� �% �H�%�  H���$% �H����     �     �     	E    @�t      �          (     �      �H��H����       H��H��H�@H��H��H� H�� @�$% �          @+             H��H��H�@H��H��H� H��@ @�%@ �H�%�  �$% �X         H��H����        /              H��H��H��H�@H�$H��H��H� H��@ @H���%@ �H�$H��H��H�@H�$H�<$H;<%{  tDH�%s  �% �H�$H��H��H� H��@ @���%@ �H�$H��H��H�@H�$�H��H�%{  ø     �      �            @-             H��H��H�@H��H��H� H��@ @�%@ �H�%�  �$% ��         H��H����       H��H��H�@H��H��H� H�� @�$% �          %w             HPH�%�  H�%L �H�<%M �H��H��H94%N ���   H�4%M �H��H�wH�4%�  H�wH��H�4%L �H�$H��H��H�[H��H��H�H�%�  �% �H�<%M �H�_ H��H��H94%O �-H�4%M �H��H�%L ��     L    @�t      ��$%P ��$%Q �        / %p%n         H��H�%9  H�� @�$% �            H��H����       /    %p%n              H��H�%�  H�� @�$% �P                   %n *** CERROR: %r %n           H��H�<%;  H�|$H�$H�%;  �%U �H�D$H�$H�%3  H� �% �H�D$�%U �H�$H�%+  ��%V �H���$%0 �W    @��     �      �     H��H����         .space %w%n          H��   ���%Y �H��H�%�  H��	 @�$%	 �P            H��H����         .space %w%n          H��   ���%Y �H��H�%�  H��	 @�$%	 ��            �     	�     	       %rsp           %cx            %cl            %rcx           %r15           %r14           %r13           %r12           %r11           %r10           %r9            %r8            %edx           %ecx           %rdx           %ax            %al            %rax           %rsi           %rdi            )               (       �     	�      �
        .quad %w%n            [[%e<<56]+%e]            .comm %w,%e%n         .bss %w,%e%n   
        .word %e%n     
        .quad %e%n             .globl %w%n           / %p%n         %w:%n          �      �(           H     �          	       sun386.sym             %w.init        d%w.s          %w.s    [    @�\    @�      	0     	]    @�@     	       %rbx           %rbp    ^    @�_    @�P     	�      �`    @��      �a    @�b    @�H�%�.  ��%c �H�%�.  ��%d �H�%z.  ��%d �H�%r.  ��%d �H�%j.  ��%d �H�%b.  ��%d �H�%Z.  ��%d �H�%R.  ��%d �H�%J.  ��%d �H�%B.  ��%d �H�%:.  ��%d �H�%2.  ��%d �H�%*.  ��%d �H�%".  ��%d �H�%.  ��%d �H�%.  ��%d �H�%
.  ��%d �H�%.  ��%d �H�%�-  ��%d �H�%�-  ��%d �H�%�-  ��%d �H�%�-  ��%d �H�%�-  ��%d �H�%�-  ��%d �H�%�-  ��%d �H�%�-  ��%d �H�%�-  ��%d �H�%�-  ��%d �H�%�-  ��%d �H�%�-  ��%d �H�%�-  ��%d �H�<%�-  H�<%e �H�<%�-  H�<%f �H�<%�-  H�<%g �H�<%z-  H�<%h �H�<%r-  H�<%i �H�<%r-  H�<%j �H�<%j-  H�<%7 �H�<%b-  H�<%k �H�<%Z-  H�<%l �H�<%R-  H�<%m �H�<%J-  H�<%n �H�<%J-  H�<%o �H�<%B-  H�<%p �H�<%:-  H�<%' �H�<%2-  H�<%q �H�<%*-  H�<%r �H�%"-  H�%-  H�%-  ��%s �H�<%
-  H�<%t �H�<%-  H�<%u �H�<%�,  H�<%v �H�<%�,  H�<%w �H�%�,  H�%�,  H�%�,  ��%s �H�%�,  H�%�,  H�%�,  ��%s �H�%�,  H�%�,  H�%�,  ��%s �H�%�,  H�%�,  H�%�,  ��%s �H�%�,  H�%�,  H�%�,  ��%s �H�%�,  H�%�,  H�%�,  ��%s �H�%z,  H�%�,  H�%r,  ��%s �H�%j,  H�%�,  H�%b,  ��%s �H�%�,  H�%�,  H�%Z,  ��%s �H�%�,  H�%�,  H�%R,  ��%s �H�%J,  H�%�,  H�%B,  ��%s �H�%:,  H�%�,  H�%2,  ��%s �H�%*,  H�%�,  H�%",  ��%s �H�%,  H�%�,  H�%,  ��%s �H�%
,  H�%�,  H�%,  ��%s �H�%�+  H�%�,  H�%�+  ��%s �H�%�+  H�%�,  H�%�+  ��%s �H�%�+  H�%�,  H�%�+  ��%s �H�%�+  H�%�,  H�%�+  ��%s �H�%�+  H�%�,  H�%�+  ��%s �H�%�+  H�%�,  H�%�+  ��%s �H�%�+  H�%�,  H�%�+  ��%s �H�%�+  H�%�,  H�%�+  ��%s �H�%z+  H�%�,  H�%r+  ��%s �H�%z+  H�%�,  H�%j+  ��%s �H�<%b+  H�<% �H�%Z+  H�%R+  H�%J+  ��%s �H��p   H�%B+  H�%Z+  ���%x �H��P  H�%B+  H�%:+  ���%x �H���  H�%B+  H�%2+  ���%x �H���  H�%B+  H�%*+  ���%x �H��  H�%B+  H�%"+  ���%x �H��0  H�%B+  H�%+  ���%x �H���  H�%B+  H�%+  ���%x �H���  H�%B+  H�%
+  ���%x �H���  H�%B+  H�%+  ���%x �H��   H�%B+  H�%�*  ���%x �H���  H�%B+  H�%�*  ���%x �H��0  H�%B+  H�%�*  ���%x �H���  H�%B+  H�%�*  ���%x �H��  H�%B+  H�%�*  ���%x �H��`  H�%B+  H�%�*  ���%x �H���  H�%B+  H�%�*  ���%x �H��0  H�%B+  H�%�*  ���%x �H�%�*  H�%R+  H�%�*  ��%s �H��p  H�%B+  H�%�*  ���%x �H�%�*  ��%d �H���  H�%B+  H�%�*  ���%x �H���	  H�%B+  H�%�*  ���%x �H�<%�*  H�<%* �H��@
  H�%B+  H�%�*  ���%x �H���
  H�%B+  H�%�*  ���%x �H���
  H�%B+  H�%z*  ���%x �H���  H�%B+  H�%r*  ���%x �H��0  H�%B+  H�%j*  ���%x �H�%j*  H�%b*  H�%Z*  ��%s �H��0  H�%B+  H�%R*  ���%x �H�%R*  H�%b*  H�%J*  ��%s �H��p  H�%B+  H�%B*  ���%x �H�%B*  H�%b*  H�%:*  ��%s �H��0  H�%B+  H�%2*  ���%x �H�%2*  H�%b*  H�%**  ��%s �H��p  H�%B+  H�%"*  ���%x �H�%"*  H�%b*  H�%*  ��%s �H���  H�%B+  H�%*  ���%x �H�%*  H�%b*  H�%
*  ��%s �H���  H�%B+  H�%*  ���%x �H�%*  H�%b*  H�%�)  ��%s �H���  H�%B+  H�%�)  ���%x �H�%�)  H�%b*  H�%�)  ��%s �H��0  H�%B+  H�%�)  ���%x �H�%�)  H�%b*  H�%�)  ��%s �H�%�)  ��%d �H��   H�%B+  H�%�)  ���%x �H��p  H�%B+  H�%�)  ���%x �H���  H�%B+  H�%�)  ���%x �H�%�)  H�%R+  H�%�)  ��%s �H�%�)  H�%�)  �%y �H�%�)  H�%�)  H�%�)  �%s �H��p  H�%B+  H�%�)  �%x �H���  H�%B+  H�%�)  �$%x �Z    @�X    @�z    @��      �{    @�W    @�|    @�T    @�S    @�R    @�}    @�~    @�K    @�    @�J    @��    @�I    @��    @�H    @��    @�G    @��    @�F    @��    @�B    @��    @�A    @��    @��    @�>    @�=    @�;    @�:    @�6    @�     	/    @�)    @�*    @��    @�(    @�$    @�#    @�"    @�     @�    @�    @�    @�    @�    @�    @�    @�    @�    @�
    @�    @�    @��    @��    @��    @�     @�    @��    @��    @�     �    @�(     �    @�8     �    @�H     �    @�X     �    @�h     �    @�x     �    @��     �    @��     �    @��     �    @��     �    @��     �    @��     �    @��     �    @��    @��    @��     �    @�     �    @�     �    @�(     �    @�8     �    @��    @�H     �    @�!      ��    @��    @�&      �X     h     x     	�     �    @��    @��     �     �     �                0     @     P     �    @��     �     �     �     t      �e    @�%    @�&    @��    @�    @�    @�k    @��    @�w    @�v    @�L    @��    @��    @�7    @�u    @�t    @�r    @�q    @�'    @�p    @�n    @�o    @�l    @��    @�m    @�j    @�i    @�h    @�g    @�f    @�!    @�      v       ?w^HJKHcHJK����rGGHHHH��mGG�^`bGHJMHJf``tVLWMGNGGgHRGGLQGSRGGJGJGJGGL�?TNHJGJGOG��hLH_z^J?KGKGHK�n^J?KGKGHK�^SHG?DXGx`GH]KGQgHxNGGuGG?CUGGK�sHXHTUgGGHGGkGGWdSYHHPYHHPUHHPYHHPUHHPUHNlHcSHHPUHHPYHHPUHHPUQ?FG�??BJHJGKLHKHGKGHK����?pNHHVJHK��?�?��hlGH?]GHGcGHGbGHGpPXHP?gGlGHGrGHGcGHGHoHJNoHK�������zGyGHG�?OJ`JGVIb�?HGHG�vGeHHONOOcGHSJL��SGdGG�~GG�QGQKLLHK��?JKGG�?DKGG���?????�???�����?������������LHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHOHIOHIOHIOHIOHIOHIOHIOHIOHIOHIOHIOHIOHIOHIOHIOHIOHIHHHHOHIHHOHIOHIHHOHIOHIOHIOHIOHIHHHHOHIHHHHOHIHHHHOHIHHHHOHIHHHHOHIHHHHOHIHHHHOHIHHHHOHIHHHHHHOHIOHIOHIHHHHHHGHHHGOHGOHG��������������������������������������������������������������������������������������������������������������������������������������������������������������      
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% File:         PC:FCOMP.SL 
% Title:        Compilation of Floating point arithmetic expressions
% Author:       Herbert Melenk
% Created:      23 September 1994 
% Status:       Experimental 
% Mode:         Lisp 
% Compiletime:   
% Runtime:      
%
% (c) Copyright 1983, Hewlett-Packard Company, see the file
%            HP_disclaimer at the root of the PSL file tree
%
% (c) Copyright 1982, University of Utah
%
% Redistribution and use in source and binary forms, with or without
% modification, are permitted provided that the following conditions are met:
%
%    * Redistributions of source code must retain the relevant copyright
%      notice, this list of conditions and the following disclaimer.
%    * Redistributions in binary form must reproduce the above copyright
%      notice, this list of conditions and the following disclaimer in the
%      documentation and/or other materials provided with the distribution.
%
% THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
% AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
% THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
% PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNERS OR
% CONTRIBUTORS
% BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
% CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
% SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
% INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
% CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
% ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
% POSSIBILITY OF SUCH DAMAGE.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% Revisions:
%
% 02-Nov-94 (Herbert Melenk): moved gtfltn into inner progn
% 17-Oct-94 (Herbert Melenk): Added control by inline declarations.
% 23-Sep-94 (Herbert Melenk): Introduced vector for temporary FP numbers
%  

(fluid '(floattmp* floatdecls* *fcomp))

(setq *fcomp t)

% A call to float*init must be automatically be added to the initcode
% of each load module which uses code generated by this module.

%-----------------------------------------------------------------------
%
% Embedding in the compiler
%
%------------------------------------------------------------------------

(load compiler)

(when (null (getd 'orig-compd))
      (copyd 'orig-compd 'compd))

(de float-compd(a b c)
   (setq floatdecls* nil)
   (when *fcomp (setq c (float-compd-rec c)))
   (when (member a floatdecls*) 
         (flag (list a) 'float))
   (orig-compd a b c))

(copyd 'compd 'float-compd)

(de float-compd-rec(c)
  (cond 
   ((atom c) c)
   ((float-expressionp c)(list 'floatx c))
   ((eqcar c 'quote) c)
   ((eqcar c 'fdeclare) 
    (foreach x in (cdr c) do
      (progn
       (when (eqcar x 'quote)(setq x (cadr x)))
       (setq floatdecls* (cons x floatdecls!*))))
    nil)
   (t (cons (float-compd-rec (car c))(float-compd-rec (cdr c)))) ))

(de float-expressionp1(c)
  (cond ((floatp c) t)
        ((member c floatdecls!*) t)
        ((flagp c 'float) t)
        ((atom c) nil)
        ((eqcar c 'thefloat) t)
        ((flagp (car c) 'float) t)
        (t (float-expressionp c))))

(de float-expressionp(c)
  % T if the top is an arithmetic function with pure or
  % convertible floating point arguments.
   (cond((atom c) nil)
        ((or (get (car c) 'float*1)(get (car c) 'float*2)
             (memq (car c)'(plus times)))
         (float-expressionpl (cdr c))) ))

(de float-expressionpl(l)
   (cond ((null l) nil)
         ((float-expressionp1 (car l)) t)
         (t (float-expressionpl (cdr l)))))

    

%-----------------------------------------------------------------------
%
% Function: an arithmetic expression which is tagged by the macro
%           "floatx" is compiled for the use of fast floating point
%           instructions, mainly for avoiding the boxing of intermediate
%           results.
%
%------------------------------------------------------------------------

(put 'aup2 'constant? t)

(setq aup2 (times2 addressingunitsperitem 2))

(ds float*init()
 (progn
  (fluid1 'floattmp*)
  (cond ((null floattmp*) 
         (setq floattmp* 
               (wtimes2 aup2 (wquotient (wplus2 addressingunitsperitem
                                               (gtwarray 40)) aup2)))))))

(float*init)  % when compiled into memory

% We need smemq.

(de smemq(a b)
  (cond ((eq a b) t)
        ((atom b) nil)
        (t (or (smemq a (car b))(smemq a (cdr b)))) ))

% Main entry point.

(dm floatx(u)
  (if (or (null (getd 'uxsqrt))
          (not (or *comp *writingfaslfile)))
      (list 'float (cadr u))
      (float* (cadr u))))
        
(de float* (u)
  (let ((l (list '(!&tmp . floattmp*)            % temporary storage
        )  )
        (code (list 'prog '(!&res !&tgres) 
                    '(setq !&tgres (gtfltn)) 
                    '(setq !&res (wplus2 !&tgres addressingunitsperitem)) ))
       )
    (when (not (member '(float*init) (car uncompiledexpressions*)))
          (saveuncompiledexpression '(float*init)))
    (float*0 u code '!&res l 0)
    (when (not (smemq '!&tmp code))
          (setq l (cdr l)))      % dont need access to floattmp*
    (nconc code (list '(return (mkfltn !&tgres))))
    (cons (list 'lambda (mapcar l (function car)) code)
          (mapcar l (function cdr)))
))

(de float*0(u c r l n)
 (let (w)
  (cond ((fixp u)(float*0 (float u) c r l n))
        ((floatp u)(list 'float-adr u))
        ((or (flagp u 'float)(memq u floatdecls*)) (list 'float-adr u))
        ((idp u)(float*code (list 'inline-float u) l))
        ((atom u)(stderror (list "illegal float* form" u)))
        
        ((eq (car u) 'plus) 
         (float*0 (if (null(cddr u)) 
                      (cadr u)
                      (list 'plus2 (cadr u) (cons 'plus (cddr u)))
                  )
         c r l n
        ))
        ((eq (car u) 'times) 
         (float*0 (if (null(cddr u)) 
                      (cadr u)
                      (list 'times2 (cadr u) (cons 'times (cddr u)))
                  )
         c r l n
        ))
        ((setq w (get (car u) 'float!*1)) (float!*1 u c r w l n))
        ((setq w (get (car u) 'float!*2)) (float!*2 u c r w l n))
        ((flagp (car u)' float) (float*code u l))
        ((eq (car u) 'thefloat) (float*code (cadr u) l))
        (t (float*code (list 'inline-float u) l))
)))

(de float*code(c l)
  % create a new lambda slot for a float value
  (let ((w (gensym)))
     (nconc l (list (cons w c)))
     (list 'float-adr w)))

(ds inline-float(w)
  ((lambda(q)(cond((floatp q) q)(t (float q)))) w))

(if (eq heaplowerbound (inf heaplowerbound))  %no high address bits, 
                                     % like in 32 bit linux
(ds float-adr(w) (floatbase (fltinf w)))
(ds float-adr(w) (wplus2 16#8000000 (floatbase (fltinf w)))))

(de float*1(u c r w l n)    
  (nconc c
   (sublis (list (cons 'r r)
                 (cons 'a1 (float*0 (cadr u) c r l n)))
           w))
  r)

(de float*2(u c r w l n)    
  (nconc c
   (sublis (list (cons 'r r)
                 (cons 'a1 (float*0 (cadr u) c r l n))
                 (cons 'a2 (float*0 (caddr u) 
                                    c
                                    (list 'wplus2 '!&tmp n)
                                    l
                                    (plus n (times 2 addressingunitsperitem))
                 )         )
            )
           w))
  r)

% Tables

(dm fdeclare(x) nil)
(ds thefloat(x) x)

(flag '(float) 'float)
      
(put 'plus2 'float*2 '((*fplus2 r a1 a2)))
(put 'difference 'float*2 '((*fdifference r a1 a2)))
(put 'times2 'float*2 '((*ftimes2 r a1 a2)))
(put 'quotient 'float*2 '((*fquotient r a1 a2)))

(put 'minus 'float*1 '((*fdifference r (floatbase(fltinf 0.000)) a1)))
(put 'sqrt 'float*1 '((uxsqrt r a1)))

(put 'sin 'float*1 '((uxsin r a1)))
(put 'cos 'float*1 '((uxcos r a1)))

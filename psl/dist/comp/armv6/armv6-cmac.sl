%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% File:           PXC:armv6-CMAC.sl
% Title:          Patterns and predicates for ARM v 6 PSL cmacro expansion
% Author:         Winfried Neun
% Created:        Mai, 5, 2014
% Mode:           Lisp
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
 
(on fast-integers)

(compiletime (load if-system))

(fluid '(AddressingUnitsPerItem CharactersPerWord StackDirection frameregs*
	*usefastframe *ImmediateQuote AddressingUnitsPerFunctionCell))

(loadtime (on ImmediateQuote))

(flag '(Immediate UnImmediate Indirect deferred label extrareg Indexed
	displacement) 'TerminalOperand)

% MkItem may be used when evaluating WConst expressions.

(de MkItem (TagPart InfPart)
  (lor (lsh TagPart 27) (land InfPart 16#7ffffff)))

(de regp (r) (eqcar r 'reg))

(de short-immediate-p (X) (eq x (ashift (wshift x 16) -16)))

(de pos-short-immediate-p (x) (and (numberp x)
		                (lessp x 16#10000) (greaterp x -1)))

(de neg-short-immediate-p (x) (and (numberp x)
				(greaterp x 16#ffff0000) (minusp x)))

(de freep (asize)
	(and (eq asize 0) (not &links-present&)))

(de FiveP (x)  (eq x 5))

(de TwentySevenP (x)  (eq x 27))

(de evenp (x) (and (fixp x) (eq 0 (land x 1))))

(de indexedp (x) (eqcar x 'indexed))

(de DeferrableP (Expression)
  (and (PairP Expression)
       (not (memq (first Expression)
	      '(deferred $Fluid $Global Fluid Global)))))

(de RegisterDeferredP (Expression)
  (and (EqCar Expression 'Deferred) (EqCar (second Expression) 'Reg)))

(de FakeRegisterNumberP (Expression)
  (and (IntP Expression) (GreaterP Expression 5)))

% NegativeImmediateP is for numbers whose negative is a one byte operand.

(de negp (value) (and (numberp value) (lessp value 0)))

(de displacementp (x) (and (pairp x) (eq (car x) 'displacement)))

(de NegativeImmediateP (Expression)
  (and (FixP Expression) (minusp Expression) (GreaterP Expression -64)))

% expansions of addressing modes.

(DefAnyreg CAR  ZIBanyregCAR)  % ZIB

(de ZIBAnyregCAR (reg source)
   (prog (areg)
      (setq source (resolveoperand reg source))
      (if (and (displacementp source)     % recursive case, e.g. caar
	       (member (cadr source) *nextreglist*))
	     (setq areg (cadr source))
	     (setq areg (nexttempreg)))
      (return `(displacement ,areg 0))))

(DefAnyreg CDR  ZIBanyregCDR)  % ZIB

(de ZIBAnyregCDR (reg source)
   (prog (areg)
      (setq source (resolveoperand reg source))
      (if (and (displacementp source)     % recursive case, e.g. cddar
	       (member (cadr source) *nextreglist*))
	     (setq areg (cadr source))
	     (setq areg (nexttempreg)))
      (return `(displacement ,areg 4))))

(fluid '(*nextreg* *nextreglist*))

(setq *nextreg* 0        % Four registers should be sufficient
      *nextreglist* '((reg t2) ))

(de nexttempreg (x)   % ZIB  :This saves Regs , non static assignment
     (setq *nextreg* (wplus2 *nextreg* 1))
     (when (eq *nextreg* 4) (setq *nextreg* 1))
     (nth *nextreglist* *nextreg*))

(DefAnyreg Memory  ZIBanyregMemory)  % ZIB

(de ZIBAnyregMemory (reg source offset)
  (prog (aReg cadrsource)
   (setq source (resolveoperand reg source))
   (setq offset (resolveoperand reg offset))
   (setq aReg (if (and (displacementp source)
                    (member (setq cadrsource (cadr source))
                                 *nextreglist*))
               cadrsource      (nexttempreg)))
   (unless (eq 0 offset) (push `(*wplus2 ,aReg ,offset) Resultingcode*))
   (push `(*mkitem ,areg (quote 4)) Resultingcode*)
   (return `(displacement ,areg 0))))
  
(DefAnyreg QUOTE
	AnyregQUOTE
           ((Null) (REG NIL))
           ((EqTP) (reg t))
           ((InumP) SOURCE)
           (       (QUOTE SOURCE)))

(de ibmrs-register-p (r)
  (cond ((idp r)
         (cond ((get r 'Registername) T)
               ((get r '*other-name) (ibmrs-register-p (get r '*other-name)))
               ((get r '*register-code) t)
               ((get r '*f-register-code) t)
               ((get r '*c-register-code) t)
               (t nil)))
        ((eqcar r 'REG) t)
        (t nil)))


(DefAnyreg FRAME ZIBAnyregFrame)

(de ZIBAnyregFRAME (dum number)
  (if (or *writingasmfile *usefastframe)
     (if (lessp number 10) (getv frameregs* number)
	`(displacement (reg st) ,(times2 4 number)))
     `(displacement (reg st) (plus2 40 ,(times2 4 number)))))

(DefAnyreg REG ZIBAnyregREG)

(de ZIBanyregReg (reg source)
   (cond ((Fakeregisternumberp source) % argumentblock lies just below SYMVAL
	     `(indexed (reg symvalcenter) ,(wtimes2 (wplus2 source 7000) 4)))
	 (t   `(REG ,SOURCE))))

(loadtime (remflag '(fluid global $fluid $global) 'Terminaloperand))

(defanyreg Fluid ZIBanyregfluid)

(defanyreg $Fluid ZIBanyregfluid)

(de ZIBanyregFluid (reg source)
   (cond ((and (idp source) (get source 'registername))
		         `(reg ,(get source 'registername)))
	 (t       `($Fluid ,SOURCE))))

(defanyreg Global ZIBanyregglobal)

(defanyreg $Global ZIBanyregglobal)

(de ZIBanyregGlobal (reg source)
   (cond ((and (idp source) (get source 'registername))
		         `(reg ,(get source 'registername)))
	 (t       `($global ,SOURCE))))

%-----------------------------------------------------------------------------

(de asmp () *writingasmfile)

(DefCMacro *Call
       ((InternallyCallableP)  (bl (InternalEntry ArgOne)))
	((asmp)   (ldr (reg t2) "SYMFNC")
		  (ldr (reg t2) (displacement (reg t4) (times2 4 (idloc argone))))
		  (*move (idloc argone) (reg t3))
		  (brx (reg t1)))

	(         (ldr (reg t1) (entryaddress argone))
		  (mov  (reg t2) (displacement (reg 0) (idloc argone)))
		  (brx (reg t1)))
)

(DefCMacro *JCall
       ((InternallyCallableP)  (b (InternalEntry ArgOne)))
	((asmp)   (ldr (reg r6) "SYMFNC")
		  (ldr (reg r6) (displacement (reg r6) (times2 4 (idloc argone))))
		  (*move (idloc argone) (reg t2))
		  (blx (reg r6)))

	(         (ldr (reg t4) (entryaddress argone))
		  (mov  (reg t3) (displacement (reg 0) (idloc argone)))
		  (blx always 0))
)

(de quote-fix-p (x)
    (and (eqcar x 'quote) (fixp (cadr x))))

(de displacement-p (x)
    (and (eqcar x 'displacement)
     (eqn (length x) 3) (ibmrs-register-p (cadr x))))

(de deferred-p (x)
    (and (pairp x) (or (ibmrs-register-p (car x))
		   (eq (car x) 'deferred))))

(remprop '*move 'optfn)

(DefCMacro *Move
       (Equal)
       ((regp regp)	    	 (orr ArgTwo ArgOne ArgOne))
       ((short-immediate-p regp) (mov Argtwoo ArgOne))
       ((indexedp regp)          (ldr ArgTwo ArgOne))
       ((regp indexedp)          (str ArgOne ArgTwo))
       ((regp anyp)              (*movex ArgOne ArgTwo))
       ((anyp regp)              (*movex ArgOne ArgTwo))
       (                         (*move ArgOne (reg t5))
				 (*move (reg t5) ArgTwo)))

(setq frameregs* '[ nil (reg r30) (reg r29) (reg r28) (reg r27)
		(reg r26) (reg r25) (reg r24) (reg r23) (reg r22)])

(de *ALLOC (framesize)
    (setq NAlloc!* framesize)
    (if (freep (times2 addressingunitsperitem framesize)) NIL
      (when (evenp framesize) (setq framesize (iadd1 framesize)))
    (if (or *writingasmfile *usefastframe)
      (if (lessp framesize 10)
	`( (stmfd "sp!, {fp, lr}")
	  (add (reg fp) (reg st) ,(minus (plus2 4 (times2 4 framesize)))))
	`((stmfd ,(getv frameregs* framesize) (displacement (reg st) 0))
	  (add (reg fp) (reg st) ,(minus (plus2 4 (times2 4 framesize))))))
      `(
        (stmfd "sp!, {fp, lr}") 
	(add (reg st) (reg st) ,(minus (plus2 44 (times2 4 framesize))))))))

(defcmacro *ALLOC)

(de *DeAlloc (Framesize)
 (setq framesize (resolveoperand '(reg error) framesize))
 (if (freep (times2 addressingunitsperitem framesize)) NIL
  (when (evenp framesize) (setq framesize (iadd1 framesize)))
  (if (or *writingasmfile *usefastframe)
      (if (lessp framesize 10)
	`(
	  (add (reg st) (reg st) ,(plus2 4 (times2 4 framesize)))
	  (ldmfd "sp!, {fp, pc}"))
	`(
	  (ldmfd "sp!, {fp, pc}")
	  (add (reg st) (reg st) ,(plus2 4 (times2 4 framesize)))))
       `(
         (add (reg st) (reg st) ,(plus2 44 (times2 4 framesize)))
         (ldmfd "sp!, {fp, pc}")))))

(defcmacro *deALLOC)

(de *Exit (N)
 (if (freep (times2 addressingunitsperitem N)) NIL
  (when (evenp N) (setq N (iadd1 N))))
 (Expand1OperandCMacro
   (times N (compiler-constant 'AddressingUnitsPerItem)) '*Exit))

(DefCMacro *Exit     % leaf routine first
       ( (*dealloc (quotient argone AddressingUnitsPerItem))
	 (bx (reg pc))))

(de displacementp (x) (and (pairp x) (eq (car x) 'displacement)))

(de deferredp (x) (eqcar x 'deferred))

(DefCMacro *Jump
       ((deferredp)       (*move (undeferred ArgOne) (reg t5))
			   (mtspr (reg ctr) (reg t5))
		           (bx (reg t5))) 
       (                  (b ArgOne)))


(DefCMacro *Lbl           (ArgOne))

(de *3op (a1 a2 instruction imm-instruction)
  (prog (ResultingCode*)
    (return (CMacroPatternExpand
	   (list (ResolveOperand '(Reg t1) A1)
		 (ResolveOperand '(Reg t2) A2)
		  Instruction imm-instruction)
		 (get '*3op 'CMacroPatternTable)))))

(DefCMacro *3op
       ((regp regp) (ArgThree ArgOne ArgOne ArgTwo ))
       ((regp short-immediate-p)
		      (Argfour ArgOne ArgOne ArgTwo ))
       ((regp AnyP)  (*move ArgTwo (reg T5))
		      (*3op ArgOne (reg t5) ArgThree ArgFour))
       ((Anyp regp)  (*move ArgOne (reg T5))
		      (ArgThree (reg t5) ArgTwo (reg t5))
		      (*move (reg t5) ArgOne))
       ((Anyp short-immediate-p)
		      (*move ArgOne (reg T6))
		      (ArgFour (reg t5) (reg t6) ArgTwo)
		      (*move (reg t5) ArgOne))
       (              (*move ArgTwo (reg T5))
		      (*move ArgOne (reg T6))
		      (ArgThree (reg t5) (reg t5) (reg t6))
		      (*move (reg t5) ArgOne)))

(DefCMacro *WPlus2)

(de *wplus2 (arg1 arg2) (when (not (zerop arg2))(*wplus3 arg1 arg1 arg2)))

(de *wplus3(arg1 arg2 arg3)
    (expand3operandcmacro arg1 arg2 arg3 '*wplus3))

(DefCMacro *WPlus3
	   ((regp regp regp) (add ArgOne ArgTwo ArgThree))
	   ((regp short-immediate-p regp)
		                (add ArgOne Argthree ArgTwo))
	   ((regp regp short-immediate-p)
		                (add ArgOne ArgTwo ArgThree ))
	   ((regp short-immediate-p anyp)
		               (*move ArgThree (reg t5))
		               (add ArgOne (reg t5) ArgTwo))
	   ((regp anyp short-immediate-p)
		               (*move ArgTwo (reg t5))
		               (add ArgOne (reg t5) ArgThree))
	   ((regp regp anyp)  (*move ArgThree (reg t5))
		               (add ArgOne ArgTwo (reg t5)))
	   ((anyp regp anyp)  (*move ArgThree (reg t5))
		               (add (Reg t5) ArgTwo (reg t5))
		               (*move (reg t5) ArgOne))
	   (                   (*move ArgTwo (reg t5))
		               (*move ArgThree (reg t6))
		               (audd (reg t5) (reg t6) (reg t5))
		               (*move (reg t5) ArgOne)))

(DefCMacro *WDifference
       ((*Wdifference3 ArgOne ArgOne ArgTwo)))

(de *wdifference3 (arg1 arg2 arg3)
    (expand3operandcmacro arg1 arg2 arg3 '*wdifference3))

% format ArgOne = ArgTwo - ArgThree

(DefCMacro *Wdifference3
	   ((regp regp regp) (sf ArgOne ArgThree ArgTwo))
	   ((regp regp short-immediate-p)
				(add ArgOne ArgTwo (minus ArgThree)))
	   ((regp anyp regp) (*move ArgTwo (reg t5))
		               (subArgOne ArgThree (reg t5) ))
	   ((regp anyp anyp)  (*move ArgTwo (reg t5))
		               (*move ArgThree (reg t6))
		               (sub ArgOne (reg t6) (reg t5)))
	   ((anyp regp anyp)  (*move ArgThree (reg t5))
		               (sub (Reg t5) (reg t5) ArgTwo )
		               (*move (reg t5) ArgOne))
	   (                   (*move ArgTwo (reg t5))
		               (*move ArgThree (reg t6))
		               (sub (reg t5) (reg t6) (reg t5))
		               (*move (reg t5) ArgOne)))

(defcmacro *wtimes2)

(de *wtimes2 (arg1 arg2) (*wtimes3 arg1 arg1 arg2))

(de *wtimes3 (arg1 arg2 arg3)
    (expand3operandcmacro arg1 arg2 arg3 '*wtimes3))

% format ArgOne = ArgTwo * ArgThree

(DefCMacro *wtimes3
	   ((regp regp regp) (muls ArgOne ArgTwo Argthree))
	   ((regp regp short-immediate-p)
		             (muli ArgOne ArgTwo Argthree))
	   ((regp short-immediate-p regp)
		              (muli ArgOne Argthree ArgTwo))
	   ((regp regp anyp) (*move argthree (reg t1))
			     (*wtimes3 ArgOne ArgTwo (reg t1)))
	   (        (*move ArgTwo (Reg t1))
		    (*move ArgThree (reg t2))
		    (muls (reg t1) (Reg t1) (reg t2))
		    (*move (reg t1) ArgOne)))
 
(defcmacro *wquotient)

(de *wquotient (arg1 arg2) (*wquotient3 arg1 arg1 arg2))

(de *wquotient3 (arg1 arg2 arg3)
    (expand3operandcmacro arg1 arg2 arg3 '*wquotient3))

% format ArgOne = ArgTwo / ArgThree

(DefCMacro *wquotient3              
	 ((anyp anyp onep)       (*move argtwo argone))
	 ((regp regp powerof2p)  (*wquotientshift ArgOne ArgTwo ArgThree))
	 ((regp regp regp)       (divs ArgOne ArgTwo Argthree))
	 ((regp regp anyp)       (*move argthree (reg t1))
		                 (*wquotient3 ArgOne ArgTwo (reg t1)))
	   (        (*move ArgTwo (Reg t1))
		    (*move ArgThree (reg t2))
		    (divs (reg t1) (Reg t1) (reg t2))
		    (*move (reg t1) ArgOne)))

(de *wquotientshift (arg1 arg2 arg3)
	(setq arg3 (powerof2p arg3))
	`((rlinm (reg t5) ,arg2 ,arg3 ,(difference 32 arg3) 31)
	  (*wplus2 (reg t5) ,arg2)
	  (srai ,arg1 (reg t5) ,arg3)))

(defcmacro *wquotientshift)

(put 'wremainder 'opencode
   '((divs (reg 1) (reg 1) (reg 2))
     (mfspr (reg 1) (reg mq))))

(DefCMacro *WAnd
       ((*3op ArgOne ArgTwo and andil!.)))

(DefCMacro *WOr
       ((*3op ArgOne ArgTwo or oril)))

(DefCMacro *WXOr
       ((*3op ArgOne ArgTwo xor xoril)))

(de fixplusp (x) (and (fixp x) (not (minusp x))))

(DefCMacro *AShift
    ((AnyP ZeroP))
    ((regp negp)     (srai ArgOne ArgOne (minus ArgTwo)))
    ((regp fixplusp) (rlinm ArgOne ArgOne ArgTwo 0 (difference 31 argtwo)))
    ((regp regp)     (cmp argtwo 0)
		      (bge templabel)
		      (Rsb (reg t6) ArgOne 0)
		      (asr ArgOne ArgOne (reg t6))
		      (b templabel2)
		     templabel
		      (lsl ArgOne ArgOne ArgTwo)
		     templabel2)
    ((regp anyp)     (*move ArgTwo (reg t5))
		      (*ashift ArgOne (reg t5)))
    ((Anyp fixp)      (*move ArgOne (reg t5))
		      (*ashift (reg t5) ArgTwo)
		      (*move (reg t5) ArgOne))
    (                 (*move ArgOne (reg t1))
		      (*ashift (reg t1) ArgTwo)
		      (*move (reg t1) ArgOne)))
)


(DefCMacro *WShift
	((AnyP ZeroP))
    ((regp negp)     (lsr ArgOne ArgOne ArgTwo))
    ((regp fixplusp) (lsl ArgOne ArgOne ArgTwo))
    ((regp regp)     (cmp argtwo 0)
		      (bge templabel)
                      (rsb (reg r0) ArgTwo 0)
		      (lsl ArgOne ArgOne (reg r0))
                      (b templabel2)
                     templabel
                      (lsl ArgOne ArgOne ArgTwo)
                     templabel2)
    ((regp anyp)     (*move ArgTwo (reg t5))
		      (*wshift ArgOne (reg t5)))
    ((Anyp fixp)      (*move ArgOne (reg t5))
		      (*wshift (reg t5) ArgTwo)
		      (*move (reg t5) ArgOne))
    (                 (*move ArgOne (reg t1))
		      (*wshift (reg t1) ArgTwo)
		      (*move (reg t1) ArgOne)))

(DefCMacro *WNot
       ((regp regp)  (mvn ArgOne ArgTwo))
       ((regp Anyp)  (*move ArgTwo ArgOne)
		      (mvn ArgOne ArgOne))
       (	     (*move ArgTwo (reg t5))
		      (*wnot (reg t5) (reg t5))
		      (*move (reg t5) ArgOne)))

(DefCMacro *WMinus
	((regp regp)  (sub ArgOne ArgTwo 0))
	((regp Anyp)  (*move ArgTwo ArgOne)
		      (rsb ArgOne ArgOne))
	(	      (*move ArgTwo (reg t5))
	        	(*wminus (reg t5) (reg t5))
			(*move (reg t5) ArgOne)))

(DefCMacro *MkItem
       ((regp fixp)	(*move argtwo (reg r0))
			 (lsl (reg R0) 27 )
                        ( and Argone argone -16777216)
                         (orr  Argone (Reg r0)))
       ((regp regp)	(and Argone argone -16777216)
                         (lsl argtwo argtwo 27)
                         (orr argone argtwo ))
       ((regp anyp)	(*move ArgTwo (reg t5))
			 (*Mkitem ArgOne (reg t5)))
       (                (*move ArgOne (reg t1))
		         (*mkitem (reg t1) ArgTwo)
		         (*move (reg t1) ArgOne)))

(de smallinump (x) (short-immediate-p x))

(de immediate-p (x)    (fixp x))

(DefCmacro *tag
%PPC% ((regp regp) (sriq ArgOne ArgTwo 27))
      ((regp regp) (rlinm  ArgOne ArgTwo 5 27 31))
%PPC%      ((Anyp regp) (sriq (reg t1) ArgTwo 27)
      ((Anyp regp) (rlinm (reg t1) ArgTwo 5 27 31)
		    (*move (reg t1) ArgOne))
      ((regp anyp) (*move ArgTwo (reg t1))
%PPC% (sriq ArgOne (reg t1) 27))
		    (rlinm ArgOne (reg t1) 5 27 31))
      (             (*move ArgTwo (reg t1))
		    (*tag ArgOne (reg t1))))

(de *tag (ar1 ar2)
     (expand2operandCmacro ar1 ar2 '*tag))

(DefCMacro *JumpType
      (             (*Tag (Reg t5) ArgOne)
		    (*JumpEQ ArgThree (Reg t5) ArgTwo)))

(DefCMacro *JumpNotType
      (             (*Tag (Reg t5) ArgOne)
		    (*JumpNOTEQ ArgThree (Reg t5) ArgTwo)))

(DefCMacro *JumpInType
       ((regp Anyp) (*tag (reg t5) ArgOne)
		     (cmpi 0 (reg t5) ArgTwo )
		     (bc false GT ArgThree)
		     (cmpi 0 (reg t5) 31) % negint-tag)
		     (bc true eq ArgThree))
       (             (*move ArgOne (reg t5))
		     (*tag (reg t6) (reg t5))
		     (cmpi 0 (reg t6) ArgTwo)
		     (bc false GT ArgThree)
		     (cmpi 0 (reg t6) 31) % negint-tag
		     (bc true eq ArgThree)))

(DefCMacro *JumpNotInType
       ((regp Anyp) (*tag (reg t5) ArgOne)
		     (cmpi 0 (reg t5) 31) % negint-tag
		     (bc true eq templabel)
		     (cmpi 0 (reg t5) ArgTwo)
		     (bc true gt ArgThree)
		    templabel)
       (             (*move ArgOne (reg t5))
		     (*tag (reg t5) (reg t5))
		     (cmpi 0 (reg t5) 31) % negint-tag
		     (bc true eq templabel)
		     (cmpi 0 (reg t5) ArgTwo)
		     (bc true gt ArgThree)
		    templabel))

%---------------------------------------------------------------------
%   General Purpose Jumper.
%   FORMAT: Operand1 Operand2 Address JumpOpCode

(DefCMacro *JumpIf
     ((regp regp)       (cmp 0 ArgOne ArgTwo)
		         (bc ArgFour ArgFive ArgThree))
     ((regp short-immediate-p) (cmpi 0 ArgOne ArgTwo)
			 (bc ArgFour ArgFive ArgThree))
     ((regp anyp)       (*move ArgTwo (reg t5))
		         (cmp 0 ArgOne (reg t5))
		         (bc ArgFour ArgFive ArgThree))
     ((anyp  regp)      (*move ArgOne (reg t5))
		         (cmp 0 (reg t5) ArgTwo )
		         (bc ArgFour ArgFive ArgThree))
     ((anyp short-immediate-p) (*move ArgOne (reg t5))
		         (cmpi 0 (reg t5) ArgTwo)
		         (bc ArgFour ArgFive ArgThree))
     (                   (*move ArgOne (reg t5))
		         (*move ArgTwo (reg t4))
		         (cmp 0 (reg t5) (reg t4))
		         (bc ArgFour ArgFive ArgThree)))

(de *JumpIF (ArgOne ArgTwo Label Instruction cond)
  (prog (ResultingCode*)
    (return (CMacroPatternExpand
	   (list (ResolveOperand '(Reg t1) ArgOne)
		 (ResolveOperand '(Reg t2) ArgTwo)
		     (ResolveOperand '(Reg Error) Label)
		  Instruction cond)
		 (get '*JumpIF 'CMacroPatternTable)))))

(defcmacro *jumpeq)

(de *jumpeq (Lbl ArgOne ArgTwo)
       (*jumpif ArgOne ArgTwo lbl 'true 'eq))

(defcmacro *jumpnoteq)

(de *jumpnoteq(Lbl ArgOne ArgTwo)
	(*jumpif ArgOne ArgTwo lbl 'false 'eq))

(defcmacro *jumpwlessp)

(de *jumpwlessp (Lbl ArgOne ArgTwo)
	(*jumpif ArgOne ArgTwo lbl 'true 'lt))

(defcmacro *jumpwgreaterp)

(de *jumpwgreaterp (Lbl ArgOne ArgTwo)
	(*jumpif ArgOne ArgTwo lbl 'true 'gt))

(defcmacro *jumpwleq)

(de  *jumpwleq(Lbl ArgOne ArgTwo)
	(*jumpif ArgOne ArgTwo lbl 'false 'gt))

(defcmacro *jumpwgeq)

(de *jumpwgeq (Lbl ArgOne ArgTwo)
	(*jumpif ArgOne ArgTwo lbl 'false 'lt))

% --------------------

(de fluid-arg-p (x)
    (and (pairp x)
     (member (car x) '(!$fluid !$global fluid global))))


(de *loc (ArgOne ArgTwo)
   (let ((resolvedarg (resolveoperand '(reg t2) ArgTwo)))
      (cond ((deferred-p resolvedarg)
	 `((*move (undeferred ,resolvedarg) ,ArgOne))) % get the address.
	 ((displacement-p resolvedarg)
	    `((ai ,ArgOne ,(cadr resolvedarg) ,(caddr resolvedarg) )))
	 ((eqcar resolvedarg 'cdr)
	    `((ai ,ArgOne ,(cadr resolvedarg) 4)))
	 (t `((*movex ,resolvedarg ,ArgOne))))))

(DefCMacro *loc)

(DefCMacro *Field
  ((regp regp fixp fixp) (rlinm ArgOne ArgTwo (land 31 (plus Argthree Argfour))
				(difference 32 argfour) 31))
  ((regp anyp fixp fixp) (*move ArgTwo (reg t5))
		          (rlinm ArgOne (reg t5)
				(land 31 (plus Argthree Argfour))
		                (difference 32 argfour) 31))
  ((anyp regp fixp fixp) (*field (reg t5) ArgTwo ArgThree ArgFour)
		          (*move (reg t5) ArgOne))
  (                      (*move ArgTwo (reg t6))
		          (*field (reg t5) (reg t6) ArgThree ArgFour)
		          (*move (reg t5) ArgOne)))

(DefCMacro *SignedField

  ((regp regp fixp fixp) (rlinm ArgOne ArgTwo Argthree 0 ArgFour)
			  (srai ArgOne ArgOne (difference 32  Argfour)))
  ((regp anyp fixp fixp) (*move ArgTwo (reg t5))
		          (rlinm ArgOne (reg t5) Argthree  0 ArgFour )
			  (srai ArgOne ArgOne 
				(difference 32  Argfour )))
  ((anyp regp fixp fixp) (*Signedfield (reg t5) ArgTwo ArgThree ArgFour)
	 		  (*move (reg t5) ArgOne))
  (                      (*move ArgTwo (reg t6))
		          (*Signedfield (reg t5) (reg t6) ArgThree ArgFour)
		          (*move (reg t5) ArgOne)))

% following is used by garbage collector only. Not very useful to
% optimize other cases than put inf field or put tag field (with constant)


(DefCMacro *PutField
 ((inump regP) (*move   ArgOne (reg t5))
		(rlimi Argtwo (reg t5) (difference 32 (plus ArgThree ArgFour))
		  Argthree (plus Argthree ArgFour -1)))
 ((inump anyp) (*move ArgTwo (reg t6))
		(*Putfield ArgOne (reg t6) ArgThree ArgFour)
		(*Move (Reg T6) ArgTwo))
 ((regp regp)  (rlimi Argtwo ArgOne  (difference 32 (plus ArgThree ArgFour))
		 Argthree (plus Argthree ArgFour -1)))
 ((anyp regp)  (*move   ArgOne (reg t5))
		(*Putfield (reg t5) ArgTwo ArgThree ArgFour))
 (  	       (*move   ArgOne (reg t5))
		(*move ArgTwo (reg t6))
		(*Putfield (reg t5) (reg t6) ArgThree ArgFour)
	 	(*move (reg t6) ArgTwo)))

(deflist '((Byte        ((*mkitem (reg 1) (quote 4))
			 (lbzx (reg 1) (reg 2) (reg 1))))
	   (PutByte     ((*mkitem (reg 1) (quote 4))
			 (stbx (reg 3) (reg 1) (reg 2))))
%PPC%	   (HalfWord    ((sliq (reg t2) (reg 2) 1)
	   (HalfWord    ((rlinm (reg t2) (reg 2) 1 0 30)
			 (*mkitem (reg 1) (quote 4))
		         (lhzx (reg 1) (reg 1) (reg t2))))
%PPC%	   (PutHalfWord ((sliq (reg t2) (reg 2) 1)
	   (PutHalfWord ((rlinm (reg t2) (reg 2) 1 0 30)
			 (*mkitem (reg 1) (quote 4))
		         (sthx (reg 3) (reg 1) (reg t2)))))
  'OpenCode)

(&OneReg '(Byte PutByte HalfWord PutHalfWord))

(on fast-integers)

(for (in function '(idapply0 idapply1 idapply2 idapply3 idapply4))
     (from register 1)
     (do
      (put function 'opencode
	 `((ai (reg t1) (reg symfnccenter) -32000)
	   (rlinm (reg t2) (reg ,register) 2 5 31)
	   (lx (reg t1) (reg t1) (reg t2))
	   (*move (reg ,register) (reg t3))
	   (mtspr (reg ctr) (reg t1))
	   (bccl always 0)))
      (put function 'exitopencode
	 `((ai (reg t1) (reg symfnccenter) -32000)
	   (rlinm (reg t2) (reg ,register) 2 5 31)
	   (lx (reg t1) (reg t1) (reg t2))
	   (*move (reg ,register) (reg t3))
	   (mtspr (reg ctr) (reg t1))
	   (bcc always 0)))
))

(for (in function '(addressapply0 addressapply1 addressapply2
		addressapply3 addressapply4))
     (from register 1)
     (do
      (put function 'opencode
	 `((mtspr (reg ctr) (reg ,register))
	   (bccl always 0)))
      (put function 'exitopencode
	 `((mtspr (reg ctr) (reg ,register))
	   (bcc always 0)))
      ))

% *feq, *fgreaterp and *flessp can only occur once in a function.

(commentoutcode
 deflist '((*wfix ((ld (reg t2) (displacement (reg 1) 4))
		   (ld (reg t1) (displacement (reg 1) 0))
		   (trnc!.sd (reg 1) (reg t1))))
	   (*wfloat ((flt!.ds (reg t1) (reg 2))
		     (st (reg t2) (displacement (reg 1) 4))
		     (st (reg t1) (displacement (reg 1) 0))))
	   (*fgreaterp
		    ((l (reg t2) (displacement (reg 2) 4))
		     (l (reg t1) (displacement (reg 2) 0))
		     (l (reg t4) (displacement (reg 3) 4))
		     (l (reg t3) (displacement (reg 3) 0))
		     (st (reg t2) (displacement (reg st) -4))
		     (st (reg t1) (displacement (reg st) -8))
		     (st (reg t4) (displacement (reg st) -12))
		     (st (reg t3) (displacement (reg st) -16))
		     (lfd (freg 1) (displacement (reg st) -8))
		     (lfd (freg 2) (displacement (reg st) -16))
		     (*move (quote t) (reg 1))
		     (fcmpo 0 (freg 1) (freg 2))
		     (bc true gt *donefgreaterp*)
		     (*move (reg nil) (reg 1))
		*donefgreaterp*))
	   (*flessp ((l (reg t2) (displacement (reg 2) 4))
		     (l (reg t1) (displacement (reg 2) 0))
		     (l (reg t4) (displacement (reg 3) 4))
		     (l (reg t3) (displacement (reg 3) 0))
		     (st (reg t2) (displacement (reg st) -4))
		     (st (reg t1) (displacement (reg st) -8))
		     (st (reg t4) (displacement (reg st) -12))
		     (st (reg t3) (displacement (reg st) -16))
		     (lfd (freg 1) (displacement (reg st) -8))
		     (lfd (freg 2) (displacement (reg st) -16))
		     (*move (quote t) (reg 1))
		     (fcmpo 0 (freg 1) (freg 2))
		     (bc true lt *doneflessp*)
		     (*move (reg nil) (reg 1))
		*doneflessp*))
	   (*fplus2 ((l (reg t2) (displacement (reg 2) 4))
		     (l (reg t1) (displacement (reg 2) 0))
		     (l (reg t4) (displacement (reg 3) 4))
		     (l (reg t3) (displacement (reg 3) 0))
		     (st (reg t2) (displacement (reg st) -4))
		     (st (reg t1) (displacement (reg st) -8))
		     (st (reg t4) (displacement (reg st) -12))
		     (st (reg t3) (displacement (reg st) -16)) 
		     (lfd (freg 1) (displacement (reg st) -8))
		     (lfd (freg 2) (displacement (reg st) -16))
		     (fa (freg 3) (freg 1) (freg 2))
		     (stfd (freg 3) (displacement (reg st) -12))
		     (l (reg t4) (displacement (reg st) -16))
		     (l (reg t3) (displacement (reg st) -12))
		     (st (reg t4) (displacement (reg 1) 4))
		     (st (reg t3) (displacement (reg 1) 0))))
	   (*fdifference
		    ((l (reg t2) (displacement (reg 2) 4))
		     (l (reg t1) (displacement (reg 2) 0))
		     (l (reg t4) (displacement (reg 3) 4))
		     (l (reg t3) (displacement (reg 3) 0))
		     (st (reg t2) (displacement (reg st) -4))
		     (st (reg t1) (displacement (reg st) -8))
		     (st (reg t4) (displacement (reg st) -12))
		     (st (reg t3) (displacement (reg st) -16))
		     (lfd (freg 1) (displacement (reg st) -8))
		     (lfd (freg 2) (displacement (reg st) -16))
		     (fs (freg 3) (freg 1) (freg 2))
		     (stfd (freg 3) (displacement (reg st) -12))
		     (l (reg t4) (displacement (reg st) -16))
		     (l (reg t3) (displacement (reg st) -12))
		     (st (reg t4) (displacement (reg 1) 4))
		     (st (reg t3) (displacement (reg 1) 0))))
	   (*ftimes2 ((l (reg t2) (displacement (reg 2) 4))
		     (l (reg t1) (displacement (reg 2) 0))
		     (l (reg t4) (displacement (reg 3) 4))
		     (l (reg t3) (displacement (reg 3) 0))
		     (st (reg t2) (displacement (reg st) -4))
		     (st (reg t1) (displacement (reg st) -8))
		     (st (reg t4) (displacement (reg st) -12))
		     (st (reg t3) (displacement (reg st) -16))
		     (lfd (freg 1) (displacement (reg st) -8))
		     (lfd (freg 2) (displacement (reg st) -16))
		     (fm (freg 3) (freg 1) (freg 2))
		     (stfd (freg 3) (displacement (reg st) -12))
		     (l (reg t4) (displacement (reg st) -16))
		     (l (reg t3) (displacement (reg st) -12))
		     (st (reg t4) (displacement (reg 1) 4))
		     (st (reg t3) (displacement (reg 1) 0))))
	   (*fquotient
		    ((l (reg t2) (displacement (reg 2) 4))
		     (l (reg t1) (displacement (reg 2) 0))
		     (l (reg t4) (displacement (reg 3) 4))
		     (l (reg t3) (displacement (reg 3) 0))
		     (st (reg t2) (displacement (reg st) -4))
		     (st (reg t1) (displacement (reg st) -8))
		     (st (reg t4) (displacement (reg st) -12))
		     (st (reg t3) (displacement (reg st) -16))
		     (lfd (freg 1) (displacement (reg st) -8))
		     (lfd (freg 2) (displacement (reg st) -16))
		     (fd (freg 3) (freg 1) (freg 2))
		     (stfd (freg 3) (displacement (reg st) -12))
		     (l (reg t4) (displacement (reg st) -16))
		     (l (reg t3) (displacement (reg st) -12))
		     (st (reg t4) (displacement (reg 1) 4))
		     (st (reg t3) (displacement (reg 1) 0)))))
	 'opencode)

(defcmacro *fast-apply-load
   ( (*move ArgOne (reg t1)) ))

(put 'fast-idapply    'opencode
	 `((ai (reg t4) (reg symfnccenter) -32000)
           (rlinm (reg t3) (reg t1) 0 5 31)
%PPC%	   (sliq (reg t2) (reg t3) 2)
	   (rlinm (reg t2) (reg t3) 2 0 29)
	   (lx (reg t4) (reg t4) (reg t2))
	   (mtspr (reg ctr) (reg t4))
	   (bccl always 0)))

(put 'fast-codeapply    'opencode
	'((rlinm (reg t2) (reg t1) 0 5 31)
          (*mkitem (reg t2) string-tag)
	  (mtspr (reg ctr) (reg t2))
	  (bccl always 0)))

(put 'fast-idapply    'exitopencode
	 `((ai (reg t4) (reg symfnccenter) -32000)
	   (rlinm (reg t3) (reg t1) 0 5 31)
%PPC%	   (sliq (reg t2) (reg t3) 2)
	   (rlinm (reg t2) (reg t3) 2 0 29)
	   (lx (reg t4) (reg t4) (reg t2))
	   (mtspr (reg ctr) (reg t4))
	   (bcc always 0)))

(put 'fast-codeapply    'exitopencode
	'((rlinm (reg t2) (reg t1) 0 5 31)
	  (*mkitem (reg t2) string-tag)
	  (mtspr (reg ctr) (reg t2))
	  (bcc always 0)))

(De *LamBind (Regs Fluids)

 % be careful, code is somewhat tricky

 (prog (n lng list cregs cfluids cadrcfluids initload freeregs genlabel)
      
      (setq genlabel (gensym))
      (setq n 0)
      (setq Regs (rest Regs))   % Remove "Registers" from the front
      (setq Fluids (rest fluids)) % Remove NONLOCALVARS
      (setq lng (wtimes2 (length Regs) 8)) % two words per BndStk entry *4

   %looking for free register to preload values of fluid s

      (setq freeregs (mapcan '((reg 1)(reg 2)(reg 3)(reg 4)(reg 5))
		   (function (lambda (x)
		                (cond ((member x regs) nil)
		                       (t (cons x nil))
      )              ) )         )  )
      (setq freeregs (nconc (list '(reg T3) '(reg T4)) freeregs))
      (setq cfluids fluids) % copy of fluids

preload  (setq initload
       (progn (setq cadrcfluids
		(nconc cadrcfluids (cons (car freeregs) nil)))
	(nconc initload `((*move ,(car cfluids) ,(car freeregs))))
       )   )
       (setq freeregs (cdr freeregs))
       (setq cfluids (cdr cfluids))

       (cond ((and freeregs cfluids) (go preload)))

       (setq freeregs (nconc cadrcfluids cfluids)) %end of preloadcode

       % freeregs contains the list of preloaded regs
       % and not preloaded fluids if those exist

      (setq list `((*move (reg BndStkPtr) (Reg t1))
		   (*wplus3 (Reg t2) (Reg t1) ,lng)
		   (cmp 0 (reg t2) (reg BndstkUpperBound))
		   (*move (Reg t2) (reg BndstkPtr))
		   (bc  false gt ,genlabel)
		   (*call Bstackoverflow)  % is never come back
		  ,genlabel   )) %start of code

      (setq list (append initload list))

  loop
      (setq cregs (car Regs))
      (setq cfluids (car Fluids))
      (setq cadrcfluids (cadr cfluids))
      (when (or (eq cadrcfluids 't) (eq cadrcfluids 'nil))
	   (stderror "T and NIL cannot be rebound"))
      (setq n (wplus2 n 8))
      (Setq list (append list
     `((*move ,(car freeregs) (indexed (Reg t1) ,n))
       (*move (quote ,Cadrcfluids)
		   (indexed (reg t1) ,(wplus2 n -4)))
       (*move ,cregs ,cfluids)
      )          ))
      (setq fluids (cdr Fluids))
      (setq freeregs (cdr freeregs))
      (cond ((setq regs (cdr Regs)) (go loop)))
      (return list)
)    )

(defcmacro !*lambind)

(De *ProgBind (Fluids)

 % be careful, code is somewhat tricky

 (prog (n lng list cfluids cadrcfluids genlabel initload freeregs)
      (setq genlabel (gensym))
      (setq n 0)
      (setq Fluids (rest fluids)) % Remove NONLOCALVARS
      (setq lng (wtimes2 (length Fluids) 8)) % two words per BndStk entry
		                         % * 4 addressingunits
      (setq freeregs '((reg t3)(reg T4)(reg 1)(reg 2)(reg 3)(reg 4)(reg 5)))
      (setq cfluids fluids) % copy of fluids

preload  (setq initload
       (progn (setq cadrcfluids
		(nconc cadrcfluids (cons (car freeregs) nil)))
	(nconc initload `((*move ,(car cfluids) ,(car freeregs))))
       )   )
       (setq freeregs (cdr freeregs))
       (setq cfluids (cdr cfluids))

       (cond ((and freeregs cfluids) (go preload)))

       (setq freeregs (nconc cadrcfluids cfluids)) %end of preloadcode

       % freeregs contains the list of preloaded regs
       % and not preloaded fluids if those exist


      (setq list `((*move (reg BndStkPtr) (Reg t1))
                   (*wplus2 (Reg BndstkPtr) ,lng)
                   (cmp 0 (reg BndstkPtr) (reg BndstkUpperBound))
                   (bc  false gt ,genlabel)
                   (*call Bstackoverflow)  % is never come back
		   ,genlabel   )) %start of code

      (setq list (append initload list))

 loop
      (setq cfluids (car Fluids))
      (setq cadrcfluids (cadr cfluids))
      (when (or (eq cadrcfluids 't) (eq cadrcfluids 'nil))
	   (stderror "T and NIL cannot be rebound"))
      (setq n (wplus2 n 8))
      (Setq list (append list
	     `((*move ,(car freeregs) (indexed (Reg t1) ,n))
	       (*move (quote ,Cadrcfluids)
		           (indexed (reg t1)  ,(wplus2 n -4)))
	       (*move (quote nil) ,cfluids)
      )          ))
      (setq freeregs (cdr freeregs))
      (cond ((setq Fluids (cdr Fluids)) (go loop)))
      (return list)
)    )
(defcmacro *progbind)

(De *FreeRstr (Fluids)

 (prog (n lng list cfluids listfluids genlabel initload freeregs)
      (setq genlabel (gensym))
      (setq n 0)
      (setq Fluids (rest fluids)) % Remove NONLOCALVARS
      (setq lng (wtimes2 (length Fluids) 2)) % two words per BndStk entry
      (setq freeregs '((reg t3)(reg t4)(reg 2)(reg 3)(reg 4)(reg 5)))
      (setq cfluids fluids) % copy of fluids
      (setq n (wtimes2 4 (wdifference 2 lng)))
      (setq lng (wtimes2 lng 4)) % * addressingunitperitem
      (setq initload (list `(ai (reg t1) (reg Bndstkptr) ,n)))
      (setq n 0)

preload  (setq initload
       (progn (setq listfluids
	       (if freeregs
		(nconc listfluids (cons (car freeregs) nil))
		(nconc listfluids (cons nil nil))) )
	(nconc initload
	 (if freeregs
     `((*move (indexed (reg t1) ,n) ,(car freeregs))) nil)
       )   ))
       (setq n (wplus2 n 8))
       (when freeregs (setq freeregs (cdr freeregs)))
       (setq cfluids (cdr cfluids))

       (cond (cfluids (go preload)))

       (setq freeregs listfluids ) %end of preloadcode

       % freeregs contains the list of preloaded regs
       % and nil if not enough regs available

      (setq list `((ai (Reg t2) (reg Bndstkptr) ,(minus lng))
		   (cmp 0 (reg t2) (reg BndstkLowerBound))
		   (*move (reg t2) (reg Bndstkptr))
		   (bc false lt ,genlabel)
		   (*call Bstackunderflow)
		   ,genlabel  )) %start of code

     (setq list (append initload list))
     (setq n 0)

 loop
      (setq cfluids (car Fluids))
      (setq n (wplus2 n 8))

  % insert reloaded register or memory reference

      (setq list (append list
	   (if (car freeregs) `((*move ,(car freeregs) ,cfluids ))
		`((*move (indexed (Reg t2) ,n) ,cfluids )))

      )          )
      (setq freeregs (cdr freeregs))
      (cond ((setq Fluids (cdr Fluids)) (go loop)))
      (return list)
)    )
(defcmacro *freerstr)

(setq *unsafebinder t)   % has to save Registers across calls

(global '(*writingasmfile))

(de !*jumpon (register lowerbound upperbound labellist)
   (if *writingasmfile
       (*xjumpon register lowerbound upperbound labellist)
     (PROG (X LL LL2)
       (setq ll  (gensym))
       (setq ll2 (stringgensym))
       (SETQ X
	(if (and (weq lowerbound 0) (weq upperbound 31))
		  % jumpon on tags (most probably)
      `((rlinm (reg t5) ,register 2 0 29) % 4 bytes per jumptable entry
	(move-relocatable-object ,ll2 (reg t1))
	(*wplus2 (reg t1) (reg t5))
	(mtspr (reg ctr) (reg t1))
	(bcc always 0)
       ,ll2)
      `((cmpi 0 ,register ,upperbound )
	(bc true eq ,(lastcar labellist))
	(bc true gt (label ,ll))
	(cmpi 0 ,register ,Lowerbound )
	(bc true lt (label ,ll))
        (ai (reg t5) ,register ,(minus lowerbound))
%ppc%    (sliq (reg t5) (reg t5) 2 )  % 4 bytes per jumptable entry
	(rlinm (reg t5) (reg t5) 2 0 29 )  % 4 bytes per jumptable entry
	(move-relocatable-object ,ll2 (reg t1))
	(*wplus2 (reg t1) (reg t5))
	(mtspr (reg ctr) (reg t1))
	(bcc always 0)
       ,ll2) ) )
      Loop  (Setq x (nconc X `((B ,(car Labellist)))))
	    (setq Labellist (cdr Labellist))
	    (cond (Labellist (go loop)))

	    (setq x (nconc x `((*lbl (Label ,ll))) ))
	    (return x)
)  )  ))

(defcmacro !*jumpon)

)))

% Call foreign fns (loaded by oload) by putting SymFunc cell addr in a reg,
% then doing "calls" instr indirect via the target address of the jmp
% instruction stored there.  Use old direct link for asm (kernel) compile.

(de *foreignlink (functionname functiontype numberofarguments)

	`((add (reg st) (reg st) -96)
	(*move (reg t) (fluid *kernelmode))
	(".globl " (foreignentry ,functionname))
	(bl (foreignentry ,functionname))
	(eor (reg 13) (reg 13) (reg 13))
	(*move (reg NIL) (fluid *kernelmode))
	(add (reg st) (reg st) 96)))

(defcmacro !*foreignlink)

(defcmacro *movex)
   % Movex is of type cmacro

(de *movex (src dst)
   (cond ((ibmrs-register-p dst)
	  (cond ((ibmrs-register-p src) `((*move ,src ,dst)))
		((eqcar src 'idloc) `((mov ,dst (displacement (reg 0) ,src))))
		((and (eqcar src 'quote) (stringp (cadr src)))
		     (if *writingasmfile           %% asmout and lap generate
		         `((ldr ,dst "T.pslmain.s(2)")  %% different code.
		           (ldr ,dst (displacement ,dst ,src)))
		         `((move-relocatable-object ,src ,dst))))
		((and (eqcar src 'quote) (idp (cadr src)))
			(if *writingasmfile           %% asmout and lap generate
                         `((mov ,dst (reg 0) 16#f000)  %% different code.
                           (orrl ,dst ,dst (idloc ,(cadr src))))
                         `((move-relocatable-object ,src ,dst))))
		((and (eqcar src 'quote) (not *writingasmfile))
			`((move-relocatable-object ,src ,dst)))
		((ibmrs-absolute-p src)
		 (if *writingasmfile           %% asmout and lap generate
		     `((ldr ,dst "symval")  %% different code.
		       (ldr ,dst (displacement ,dst (times2 4 (idloc src)) )))
		     `((move-relocatable-object-and-load ,src ,dst))))
		((ibmrs-fluid-p src)
		     (if *writingasmfile
		      `((ldr ,dst "symval")  %% different code.
                        (ldr ,dst (displacement ,dst 
					(times2 4 (idloc ,(cadr src)) ))))
		      `((ldr ,dst (valueaddress ,src)))))
		((short-immediate-p src) 
				`((mov ,dst (displacement (reg 0) ,src ))))
		((or (ibmrs-relocatable-immediate-p src)
		     (ibmrs-foreignentry-p src))
		 (if *writingasmfile           %% asmout and lap generate
		     `((cau ,dst (reg 0) (hi16 ,src))  %% different code.
		       (oril ,dst ,dst (lo16 ,src) ))
		     `((move-relocatable-object ,src ,dst))))
		((ibmrs-immediate-p src)
		     `((cau ,dst (reg 0) (hi16 ,src))
		       (oril ,dst ,dst (lo16 ,src))))
		((ibmrs-huge-displacement-p src)
		     `((cau ,dst (reg 0) (hi16 ,(caddr src)) )
		       (oril ,dst ,dst (lo16 ,(caddr src)))
		       (l ,dst (displacement ,(cadr src) ,dst))))
		((ibmrs-indirect-p src) `((l ,dst ,src )))
		(t  (error 0
		 (list "Unknown addressing mode for *movex:" src dst)))))
	 ((ibmrs-register-p src)
	  (cond ((or (ibmrs-absolute-p dst) (ibmrs-foreignentry-p src))
		 (if *writingasmfile
		     `((cau (reg t6) (displacement (reg 0) (hi16 ,dst)))
		       (oril (reg t6) (reg t6) (lo16 ,dst))
		       (st ,src (displacement (reg t6) 0)))
		     `((move-relocatable-object-and-store ,dst (reg t6) ,src))))
		((and (ibmrs-fluid-p dst) *writingasmfile)
		         `((ldr (reg t6) "symval")
			   (str  ,src (displacement (reg t6)
					(times2 4 (idloc ,(cadr dst)))))))
		((ibmrs-fluid-p dst) `((st ,src (valueaddress ,dst ))))
		((ibmrs-huge-displacement-p dst)
		 `((cau (reg t6) (displacement (reg 0) (hi16 ,(caddr dst))))
		   (oril (reg t6) (reg t6) (lo16 ,(caddr dst)))
		   (stx ,src ,(cadr dst) (reg t6))))
		((ibmrs-indirect-p dst) `((st ,src ,dst )))
		(t  (error 0
		        (list "Unknown addressing mode:" src dst)))))
	(t (print (list " Unsaeglich: Move " src dst))
)))

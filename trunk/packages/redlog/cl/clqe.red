% ----------------------------------------------------------------------
% $Id$
% ----------------------------------------------------------------------
% Copyright (c) 1995-2009 A. Dolzmann and T. Sturm, 2010-2011 T. Sturm
% ----------------------------------------------------------------------
% Redistribution and use in source and binary forms, with or without
% modification, are permitted provided that the following conditions
% are met:
%
%    * Redistributions of source code must retain the relevant
%      copyright notice, this list of conditions and the following
%      disclaimer.
%    * Redistributions in binary form must reproduce the above
%      copyright notice, this list of conditions and the following
%      disclaimer in the documentation and/or other materials provided
%      with the distribution.
%
% THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
% "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
% LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
% A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
% OWNERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
% SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
% LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
% DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
% THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
% (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
% OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
%

lisp <<
   fluid '(cl_qe_rcsid!* cl_qe_copyright!*);
   cl_qe_rcsid!* := "$Id$";
   cl_qe_copyright!* := "(c) 1995-2009 A. Dolzmann, T. Sturm, 2010-2011 T. Sturm"
>>;

module clqe;
% Common logic quantifier elimination by elimination sets. Submodule of [cl].
% Currently limited to quadratic formulas.

struct Formula;
struct QfFormula;
struct Theory checked by listp;
struct TheoryFormulaPair checked by pairp;
struct KernelL checked by listp;
struct Quantifier checked by idp;


%DS
% TaggedContainerElementL ::= Status . ContainerElementL
% Status ::= "elim" | "failed" | "local" | "nonocc"
% ContainerElementL ::= (ContainerElement, ...)
% ContainerElement ::= (VarList . QfFormula) . (Answer . AnswerTranslation)
% VarList ::= VariableL | "'break"
% Answer ::= (SubstTriplet, ...) (* "nil" if not ans *)
% SubstTriplet ::= (Variable, SubstFunction, ArgumentList, Atr)
% AnswerTranslation ::= (* context dependent, "nil" if not ans *)

struct TaggedContainerElementL checked by taggedContainerElementLP;
struct ContainerElementL checked by listp;
struct ContainerElement checked by containerElementP;
struct VarList checked by varListP;
struct Answer checked by listp;
struct SubstTriplet checked by substTripletP;
struct AnswerTranslation;


procedure taggedContainerElementLP(x);
   pairp x and car x memq '(elim failed local nonocc) and listp cdr x;

procedure containerElementP(x);
   pairp x and pairp car x and pairp cdr x;

procedure varListP(x);
   x eq 'break or listp x;

procedure substTripletP(x);
   listp x and eqn(length x,4);


%DS
% Point ::= (Coordinate, ...)
% Coordinate ::= Equation (* Kernel = Integer *)

struct Point checked by listp;


%DS
% EliminationResult ::= (Theory . ExtendedQeResult)
% ExtendedQeResult ::= (..., (QfFormula, SamplePoint), ...)
% SamplePoint ::= EquationL (* with equations of the form kernel = ... *)

struct EliminationResult checked by pairp;
struct ExtendedQeResult checked by alistp;


declare cl_mkCE: (VarList,QfFormula,Answer,AnswerTranslation) -> ContainerElement;

smacro procedure cl_mkCE(vl,f,an,atr);
   % Make container element.
   (vl . f) . (an . atr);


declare cl_coVL: (ContainerElement) -> VarList;

smacro procedure cl_coVL(x);
   % Container variable list.
   caar x;


declare cl_coF: (ContainerElement) -> QfFormula;

smacro procedure cl_coF(x);
   % Container formula.
   cdar x;


declare cl_coA: (ContainerElement) -> Answer;

smacro procedure cl_coA(x);
   % Container answer.
   cadr x;


declare cl_coAT: (ContainerElement) -> AnswerTranslation;

smacro procedure cl_coAT(x);
   % Container answer translation.
   cddr x;


%DS
% JunctionL ::= (Junction, ...)
% Junction ::= QfFormula . Answer . AnswerTranslation

struct JunctionL checked by listp;
struct Junction checked by pairp;


declare cl_mkJ: (QfFormula,Answer,AnswerTranslation) -> Junction;

smacro procedure cl_mkJ(f,an,atr);
   % Make junction.
   f . an . atr;


declare cl_jF: (Junction) -> QfFormula;

smacro procedure cl_jF(j);
   % Junction formula.
   car j;


declare cl_jA: (Junction) -> Answer;

smacro procedure cl_jA(j);
   % Junction answer.
   cadr j;


declare cl_jAT: (Junction) -> QfFormula;

smacro procedure cl_jAT(j);
   % Junction answer translation.
   cddr j;


declare cl_co2J: (ContainerElement) -> Junction;

smacro procedure cl_co2J(x);
   % Container to junction. Returns the S-expression [cl_coF(x) . cl_coA(x) .
   % cl_coAT(x)].
   cdar x . cadr x . cddr x;


declare cl_coMember: (ContainerElement,ContainerElementL) -> ExtraBoolean;

procedure cl_coMember(ce,l);
   % Container member. Returns non-[nil], if there is an container element $e$
   % in [l], such that the formula and the variable list of $e$ are equal to the
   % formula and variable list of [ce]. This procedure does not use the access
   % functions.
   if l then car ce = caar l or cl_coMember(ce,cdr l);


declare cl_erTh: (EliminationResult) -> Theory;

smacro procedure cl_erTh(er);
   % Elimination result theory.
   car er;


declare cl_erEQR: (EliminationResult) -> ExtendedQeResult;

smacro procedure cl_erEQR(er);
   % Elimination result extended qe result.
   cdr er;


declare cl_mkER: (Theory,ExtendedQeResult) -> EliminationResult;

smacro procedure cl_mkER(theo,eqr);
   % Make elimination Result.
   theo . eqr;


declare cl_mk1EQR: (Formula,EquationL) -> ExtendedQeResult;

smacro procedure cl_mk1EQR(f,eql);
   % Make singleton extended qe result.
   {{f,eql}};


declare cl_gqe: (Formula,Theory,KernelL) -> TheoryFormulaPair;

procedure cl_gqe(f,theo,xbvl);
   % Generic quantifier elimination. Returns a pair $\Theta . \phi$. $\Theta$ is
   % a THEORY extending [theo] by assumptions on free variables of [f] that are
   % not in [xbvl]; $\phi$ is a formula. We have $\Theta \models [f]
   % \longleftrightarrow \phi$. $\phi$ is obtained from [f] by eliminating as
   % many quantifiers as possible. Accesses the switch [rlqepnf]; if [rlqepnf]
   % is on, then [f] must be prenex.
   begin scalar er,theo,!*rlqegen,!*rlsipw,!*rlsipo;
      !*rlsipw := !*rlqegen := T;
      er := cl_qe1(f,theo,xbvl);
      if rl_exceptionp er then
	 return er;
      theo := rl_thsimpl cl_erTh er;
      return theo . rl_simpl(caar cl_erEQR er,theo,-1)
   end;


declare cl_gqea: (Formula,Theory,ListofKernel) -> EliminationResult;

procedure cl_gqea(f,theo,xbvl);
   % Generic quantifier elimination with answer. Returns a pair $\Theta . \Phi$.
   % $\Theta$ extends [theo] by assumptions on free variables of [f] that are
   % not in [xbvl]; $\Phi$ is a list $(..., (c_i, A_i), ...)$, where the $c_i$
   % are QfFormula, and the $A_i$ are lists of equations. We have $\Theta
   % \models \bigvee_i c_i \longleftrightarrow [f]$. Whenever some $c_i$ holds
   % for an interpretation of the parameters, then [f] holds, and $A_i$
   % describes a satisfying sample point. Accesses the switch [rlqepnf]; if
   % [rlqepnf] is on, then [f] must be prenex.
   begin scalar er,!*rlqegen,!*rlsipw,!*rlsipo,!*rlqeans;
      !*rlsipw := !*rlqegen := !*rlqeans := T;
      er := cl_qe1(f,theo,xbvl);
      if rl_exceptionp er then
	 return er;
      return cl_mkER(rl_thsimpl cl_erTh er,cl_erEQR er)
   end;


declare cl_lqe: (Formula,Theory,Point) -> TheoryFormulaPair;

procedure cl_lqe(f,theo,pt);
   % Local quantifier elimination. [pt] is the suggested value for the local
   % parameter $v$. Returns a pair $\Theta . \phi$. $\Theta$ extends [theo];
   % $\phi$ is a formula. We have $\Theta \models [f] \longleftrightarrow \phi$.
   % $\phi$ is obtained from [f] by eliminating as much quantifiers as possible.
   % Accesses the switch [rlqepnf]; if [rlqepnf] is on, then [f] has to be
   % prenex. Accesses the fluids [cl_pal!*], [cl_lps!*], and [cl_theo!*].
   % [cl_lps!*] is the list of local parameters; [cl_pal] is an Alist containing
   % the suggested values for the local parameters; and [cl_theo!*] is the
   % theory generated by the local quantifier elimination.
   begin scalar er,theo,!*rlqelocal,!*rlsipw,!*rlsipo,cl_pal!*,cl_lps!*,
	 cl_theo!*;
      !*rlsipw := !*rlqelocal := T;
      cl_pal!* := pt;
      cl_lps!* := for each x in pt collect car x;
      cl_theo!* := nil;
      w := for each x in theo collect rl_subat(cl_pal!*,x);
      w := rl_simpl(rl_smkn('and,w),nil,-1);
      if w eq 'false then
	 rederr "rllqe: inconsistent theory";
      er := cl_qe1(f,theo,nil);
      theo := nconc(cl_theo!*,theo);
      cl_pal!* := cl_lps!* := cl_theo!* := nil;
      if rl_exceptionp er then
	 return er;
      return rl_lthsimpl(theo) . rl_simpl(caar cl_erEQR er,theo,-1)
   end;


declare cl_aqe: (Formula,Theory,Point) -> TheoryFormulaPair;

procedure cl_aqe(f,theo,pt);
   % Approximate quantifier elimination. [f] is a formula; [theo] is a
   % THEORY; [pt] is a list of equations $v=z$, where $v$ is a variable
   % and $z$ is an SQ encoding a rational number, namely the suggested
   % value for the existential variable $v$. Returns a pair $\Theta .
   % \phi$. $\Theta$ is a THEORY extending [theo]; $\phi$ is a formula.
   % Accesses the switch [rlqepnf]; if [rlqepnf] is on, then [f] must be
   % prenex. Accesses the fluids [cl_pal!*], [cl_lps!*], and
   % [cl_theo!*]. [cl_lps!*] is the list of existential variables for
   % which values are suggested; [cl_pal!*] is a corresponding ALIST
   % containing also the suggested values; [cl_theo!*] is the theory
   % generated by the local quantifier elimination. These 3 fluids have
   % been hijacked from cl_lqe, where they have got a different
   % semantics.
   begin scalar w,theo,!*rlqeapprox,cl_pal!*,cl_lps!*,cl_theo!*;
      !*rlqeapprox := t;
      cl_pal!* := pt;
      cl_lps!* := for each x in pt collect car x;
      cl_theo!* := nil;
      w := rl_simpl(rl_smkn('and,w),nil,-1);
      if w eq 'false then
	 rederr "rllqe: inconsistent theory";
      w := cl_qe1(f,theo,nil);
      theo := nconc(cl_theo!*,theo);
      w := cl_erEQR w;
      cl_pal!* := cl_lps!* := cl_theo!* := nil;
      return rl_lthsimpl(theo) . rl_simpl(w,theo,-1)
   end;


declare cl_qe: (Formula,Theory) -> Formula;

procedure cl_qe(f,theo);
   % Quantifier elimination. Returns a formula $\phi$ such that $[theo] \models
   % [f] \longleftrightarrow \phi$. $\phi$ is obtained from [f] by eliminating
   % as many quantifiers as possible. Accesses the switch [rlqepnf]; if
   % [rlqepnf] is on, then [f] has to be prenex.
   begin scalar er,!*rlsipw,!*rlsipo;
      !*rlsipw := !*rlsipo := T;
      er := cl_qe1(f,theo,nil);
      if rl_exceptionp er then
	 return er;
      return caar cl_erEQR er
   end;


declare cl_qea: (Formula,Theory) -> ExtendedQeResult;

procedure cl_qea(f,theo);
   % Quantifier elimination with answer. Returns a list of pairs $(..., (c_i,
   % A_i), ...)$. The $c_i$ are quantifier-free formulas, and the $A_i$ are
   % lists of equations. We have $[theo] \models \bigvee_i c_i
   % \longleftrightarrow [f]$. Whenever some $c_i$ holds for an interpretation
   % of the parameters, [f] holds, and $A_i$ describes a satisfying sample
   % point. Accesses the switch [rlqepnf]; if [rlqepnf] is on, then [f] has to
   % be prenex.
   begin scalar er,!*rlsipw,!*rlsipo,!*rlqeans;
      !*rlsipw := !*rlsipo := !*rlqeans := T;
      er := cl_qe1(f,theo,nil);
      if rl_exceptionp er then
	 return er;
      return cl_erEQR er
   end;


declare cl_qe1: (Formula,Theory,KernelL) -> EliminationResult;

procedure cl_qe1(f,theo,xbvl);
   % Quantifier elimination. [f] must be prenex if the switch [rlqepnf] is off;
   % [theo] serves as background theory.
   begin scalar q,ql,varl,varll,bvl,result,w,rvl,jl; integer n;
      if !*rlqepnf then
	 f := rl_pnf f;
      f := rl_simpl(f,theo,-1);
      if f eq 'inctheo then
	 return rl_exception 'inctheo;
      if not rl_quap rl_op f then
	 return cl_mkER(theo,cl_mk1EQR(f,nil));
      {ql,varll,f,bvl} := cl_split f;
      % Remove from the theory atomic formulas containing quantified variables:
      theo := for each atf in theo join
	 if null intersection(rl_varlat atf,bvl) then {atf};
      bvl := union(bvl,xbvl);
      {ql,varll,q,rvl,jl,theo} := cl_qe1!-iterate(ql,varll,f,theo,bvl);
      jl := cl_qe1!-requantify(ql,varll,q,rvl,jl);
      if !*rlqeans and null ql then <<
	 if !*rlverbose then <<
	    ioto_tprin2 "+++ Postprocessing answer:";
	    n := length jl
	 >>;
 	 result := for each j in jl join <<
	    if !*rlverbose then ioto_prin2 {" [",n:=n-1};
 	    w := cl_mk1EQR(cl_jF j,rl_qemkans(cl_jA j,cl_jAT j));
	    if !*rlverbose then ioto_prin2 {"]"};
	    w
	 >>;
      >> else <<
	 f := cl_jF car jl;
	 if !*rlverbose then
	    ioto_tprin2 {"+++ Final simplification ... ",cl_atnum f," -> "};
	 f := rl_simpl(f,theo,-1);
	 if !*rlverbose then
 	    ioto_prin2t cl_atnum f;
	 if !*rlqefb and rvl then <<
	    if not rl_quap rl_op f then <<
	       if !*rlverbose then
 		  ioto_tprin2t "++++ No more quantifiers after simplification";
	       result := f
	    >> else <<
	       if !*rlverbose then
		  ioto_tprin2 {"++++ Entering fallback QE: "};
	       result := rl_fbqe f
	    >>
	 >> else
	    result := f;
	 result := cl_mk1EQR(result,nil);
      >>;
      return cl_mkER(theo,result)
   end;


declare cl_split: (Formula) -> List4;

procedure cl_split(f);
   % Split. [f] is a prenex formula. Returns a list of length 4 splitting [f]
   % into a quantifier list, a list of lists of quantified variables, the
   % matrix, and a flat list of all quantified variables.
   begin scalar q,op,ql,varl,varll,bvl;
      q := op := rl_op f;
      repeat <<
   	 if op neq q then <<
      	    push(q,ql);
	    push(varl,varll);
      	    q := op;
      	    varl := nil
   	 >>;
	 push(rl_var f,varl);
	 push(rl_var f,bvl);
   	 f := rl_mat f
      >> until not rl_quap(op := rl_op f);
      push(q,ql);
      push(varl,varll);
      return {ql,varll,f,bvl}
   end;


declare cl_qe1!-iterate: (List,List,Formula,Theory,KernelL) -> List6;

procedure cl_qe1!-iterate(ql,varll,f,theo,bvl);
   % Iteratively apply [cl_qeblock] to the quantifier blocks.
   begin scalar svrlidentify,svrlqeprecise,svrlqeaprecise,q,varl,rvl,jl;
      svrlidentify := !*rlidentify;
      jl := {cl_mkJ(f,nil,nil)};
      while null rvl and ql do <<
	 on1 'rlidentify;
      	 f := cl_jF car jl;
      	 q := pop ql;
      	 varl := pop varll;
      	 if !*rlverbose then
      	    ioto_tprin2 {"---- ",(q . reverse varl)};
	 svrlqeprecise := !*rlqeprecise;
	 svrlqeaprecise := !*rlqeaprecise;
	 if ql then <<  % Should better be an argument of qeblock ...
	    off1 'rlqeprecise;
	    off1 'rlqeaprecise
	 >>;
      	 {rvl,jl,theo} := cl_qeblock(f,q,varl,theo,!*rlqeans and null ql,bvl);
	 if ql then <<
	    onoff('rlqeprecise,svrlqeprecise);
	    onoff('rlqeaprecise,svrlqeaprecise)
	 >>;
	 off1 'rlidentify
      >>;
      onoff('rlidentify,svrlidentify);
      return {ql,varll,q,rvl,jl,theo}
   end;


declare cl_qe1!-requantify: (List,List,Quantifier,KernelL,JunctionL) -> JunctionL;

procedure cl_qe1!-requantify(ql,varll,q,rvl,jl);
   % Requantify with the variables that could not be eliminated.
   begin scalar xx,xxv,scvarll,varl;
      if not rvl then
	 return jl;
      if !*rlverbose then
	 ioto_tprin2 "+++ Requantification ... ";
      jl := for each j in jl collect <<
	 xx := cl_jF j;
	 xxv := cl_fvarl xx;
	 for each v in rvl do
	    if v memq xxv then
	       xx := rl_mkq(q,v,xx);
	 scvarll := varll;
	 for each q in ql do <<
	    varl := car scvarll;
	    scvarll := cdr scvarll;
	    for each v in varl do
	       if v memq xxv then
		  xx := rl_mkq(q,v,xx)
	 >>;
	 cl_mkJ(xx,cl_jA j,cl_jAT j)
      >>;
      if !*rlverbose then
	 ioto_prin2t "done";
      return jl
   end;


declare cl_qeblock: (QfFormula,Quantifier,KernelL,Theory,Boolean,KernelL) -> List3;

procedure cl_qeblock(f,q,varl,theo,ans,bvl);
   % Quantifier elimination for one block. The result contains the list of
   % variables for which elimination failed, the (possibly partial) elimination
   % result as a JunctionL, and the new theory.
   begin scalar rvl,jl;
      if q eq 'ex then
 	 return cl_qeblock1(rl_simpl(f,theo,-1),varl,theo,ans,bvl);
      % [q eq 'all]
      {rvl,jl,theo} := cl_qeblock1(rl_simpl(rl_nnfnot f,theo,-1),varl,theo,ans,bvl);
      return {rvl, for each x in jl collect rl_nnfnot car x . cdr x, theo}
   end;


declare cl_qeblock1: (QfFormula,KernelL,Theory,Boolean,KernelL) -> List3;

procedure cl_qeblock1(f,varl,theo,ans,bvl);
   % Quantifier elimination for one block subroutine. The result contains the
   % list of variables for which elimination failed, the (possibly partial)
   % possibly negated elimination result as a JunctionL, and the new theory.
   if !*rlqeheu then
      cl_qeblock2(f,varl,theo,ans,bvl)
   else
      cl_qeblock3(f,varl,theo,ans,bvl);


declare cl_qeblock2: (QfFormula,KernelL,Theory,Boolean,KernelL) -> List3;

procedure cl_qeblock2(f,varl,theo,ans,bvl);
   % Quantifier elimination for one block subroutine. The result contains the
   % list of variables for which elimination failed, the (possibly partial)
   % possibly negated elimination result as a JunctionL, and the new theory.
   % With [rlqeheu] on, this is in intermediate step checking for decision
   % problems and switching to DFS in the positive case.
   begin scalar !*rlqedfs,atl;
      atl := cl_atl1 f;
      !*rlqedfs := T;
      while atl do
	 if setdiff(rl_varlat car atl,varl) then
	    !*rlqedfs := atl := nil
	 else
	    atl := cdr atl;
      return cl_qeblock3(f,varl,theo,ans,bvl)
   end;


declare cl_qeblock3: (QfFormula,KernelL,Theory,Boolean,KernelL) -> List3;

procedure cl_qeblock3(f,varl,theo,ans,bvl);
   % Quantifier elimination for one block soubroutine. Arguments are as
   % in [cl_qeblock], where [q] has been dropped. Return value as well.
   begin scalar w,co,remvl,newj,cvl,coe; integer c,vlv,dpth,count,delc,oldcol;
      if !*rlverbose then <<
	 dpth := length varl;
      	 if !*rlqedfs then <<
	    vlv :=  dpth / 4;
	    ioto_prin2t {" [DFS: depth ",dpth,", watching ",dpth - vlv,"]"}
      	 >> else
	    ioto_prin2t {" [BFS: depth ",dpth,"]"}
      >>;
      cvl := varl;
      if !*rlqegsd then f := rl_gsd(f,theo);
      if rl_op f eq 'or then
	 for each x in rl_argn f do
	    co := cl_save(co,{cl_mkCE(cvl,x,nil,nil)})
      else
      	 co := cl_save(co,{cl_mkCE(cvl,f,nil,nil)});
      while co do <<
	 on1 'rlidentify;
	 coe . co := cl_get co;
    	 cvl := cl_coVL coe;
	 count := count+1;
         if !*rlverbose then
   	    if !*rlqedfs then <<
	       if vlv = length cvl then
	       	  ioto_tprin2t {"-- crossing: ",dpth - vlv};
	       ioto_prin2 {"[",dpth - length cvl}
	    >> else <<
	       if c=0 then <<
	       	  ioto_tprin2t {"-- left: ",length cvl};
		  c := cl_colength(co) + 1
	       >>;
	       ioto_nterpri(length explode c + 4);
	       ioto_prin2 {"[",c};
	       c := c - 1
	    >>;
	 w . theo := cl_qevar(
	    cl_coF coe,cl_coVL coe,cl_coA coe,cl_coAT coe,theo,ans,bvl);
	 if car w then <<  % We have found a suitable variable.
	    w := cdr w;
	    if w then
	       if cl_coVL car w eq 'break then <<
	       	  co := nil;
	       	  newj := {cl_co2J car w}
	       >> else if cdr cvl then <<
		  if !*rlverbose then oldcol := cl_colength(co);
	       	  co := cl_save(co,w);
 		  if !*rlverbose then
		     delc := delc + oldcol + length w - cl_colength(co)
	       >> else
   		  for each x in w do newj := lto_insert(cl_co2J x,newj)
	 >> else <<
	    % There is no eliminable variable. Invalidate this entry, and save
	    % its variables for later requantification.
	    if !*rlverbose then ioto_prin2("FAILURE:" . cdr w);
	    remvl := union(cvl,remvl);
	    newj := lto_insert(cl_co2J coe,newj)
	 >>;
	 if !*rlverbose then <<
	    ioto_prin2 "] ";
	    if !*rlqedfs and null cvl then ioto_prin2 ". "
	 >>
      >>;
      if !*rlverbose then ioto_prin2{"[DEL:",delc,"/",count,"]"};
      if ans then return {remvl, newj, theo};
      % I am building the formula here rather than later because one might want
      % to do some incremental simplification at some point.
      return {remvl,
	 {cl_mkJ(rl_smkn('or,for each x in newj collect car x),nil,nil)}, theo}
   end;


declare cl_qevar: (QfFormula,KernelL,Answer,AnswerTranslation,Theory,Boolean,KernelL) -> DottedPair;

procedure cl_qevar(f,vl,an,atr,theo,ans,bvl);
   % Quantifier eliminate one variable. [f] is a quantifier-free formula; [vl]
   % is a non-empty list of variables; [an] is an answer; [theo] is a list of
   % atomic formulas; [ans] is Boolean. Returns a pair $a . p$. Either $a=[T]$
   % and $p$ is a pair of a list of container elements and a theory or $a=[nil]$
   % and $p$ is an error message. If there is a container element with ['break]
   % as varlist, this is the only one.
   begin scalar w,candvl,status; integer len;
      if (w := cl_transform(f,vl,atr,theo)) then
      	 f . atr := w;
      if (w := cl_gauss(f,vl,an,atr,theo,ans,bvl)) then
	 return w;
      if (w := rl_specelim(f,vl,theo,ans,bvl)) neq 'failed then
	 return w;
      % Elimination set method
      candvl := cl_varsel(f,vl,theo);
      if !*rlverbose and (len := length candvl) > 1 then
	 ioto_prin2 {"{",len,":"};
      status . w := cl_process!-candvl(f,vl,an,atr,theo,ans,bvl,candvl);
      if !*rlverbose and len>1 then
	 ioto_prin2 {"}"};
      if status eq 'nonocc then
	 return (t . w) . theo;
      if status eq 'failed then
	 return (nil . w) . theo;
      if status eq 'local then
      	 return (t . car w) . cl_theo!*;
      if status eq 'elim then
	 return (t . car w) . cdr w;
      rederr {"cl_qevar: bad status",status}
   end;

procedure cl_transform(f,vl,atr,theo);
   begin scalar w,hit;
      for each vv in vl do
      	 if cdr (w := rl_transform(f,vv)) then <<
	    hit := T;
	    f := car w;
	    atr := rl_updatr(atr,cdr w)
	 >>;
      if hit then <<
 	 f := rl_simpl(f,theo,-1);
      	 return f . atr
      >>
   end;

procedure cl_gauss(f,vl,an,atr,theo,ans,bvl);
   begin scalar w,ww;
      w := rl_trygauss(f,vl,theo,ans,bvl);
      if w neq 'failed then <<
	 theo := cdr w;
	 w := car w;
      	 if !*rlverbose then ioto_prin2 "g";
	 vl := delq(car w,vl);
	 ww := cl_esetsubst(f,car w,cdr w,vl,an,atr,theo,ans,bvl);
	 if !*rlqelocal then
	    return (T . car ww) . cl_theo!*
	 else
	    return (T . car ww) . cdr ww
      >>
   end;

procedure cl_varsel(f,vl,theo);
   begin scalar candvl; integer len;
      if null cdr vl then
      	 candvl := vl
      else if !*rlqevarsel then
      	 candvl := rl_varsel(f,vl,theo)
      else
	 candvl := {car vl};
      return candvl
   end;


declare cl_process!-candvl: (QfFormula,KernelL,Answer,AnswerTranslation,Theory,Boolean,KernelL,KernelL) -> TaggedContainerElementL;

procedure cl_process!-candvl(f,vl,an,atr,theo,ans,bvl,candvl);
   begin scalar w,ww,v,alp,hit,ww,status;
      while candvl do <<
	 v := pop candvl;
      	 alp := cl_qeatal(f,v,theo,ans);
      	 if alp = '(nil . nil) then <<  % [v] does not occur in [f].
      	    if !*rlverbose then ioto_prin2 "*";
      	    w := {cl_mkCE(delq(v,vl),f,ans and an,ans and atr)};
	    status := 'nonocc;
	    candvl := nil
      	 >> else if car alp = 'failed then
	    (if null w then <<
	       w := cdr alp;
	       status := 'failed
	    >>)
	 else <<
      	    if !*rlverbose then ioto_prin2 "e";
      	    ww := cl_esetsubst(f,v,rl_elimset(v,alp),delq(v,vl),an,atr,
	       theo,ans,bvl);
	    if !*rlqelocal then <<
	       candvl := nil;
	       w := ww;
	       status := 'local
	    >> else if rl_betterp(ww,w) then <<
	       w := ww;
	       status := 'elim
	    >>
      	 >>
      >>;
      return status . w
   end;

procedure cl_esetsubst(f,v,eset,vl,an,atr,theo,ans,bvl);
   % Elimination set substitution. [f] is a quantifier-free formula; [v]
   % is a kernel; [eset] is an elimination set; [an] is an answer; [atr]
   % in an answer translation; [theo] is the current theory; [ans] is
   % Boolean. Returns a pair $l . \Theta$, where $\Theta$ is the new
   % theory and $l$ is a list of container elements. If there is a
   % container element with ['break] as varlist, this is the only one.
   begin scalar a,d,u,elimres,junct,bvl,w;
      while eset do <<
	 a . d := pop eset;
	 while d do <<
	    u := pop d;
	    w := apply(a,bvl . theo . f . v . u);
	    theo := union(theo,car w);
	    elimres := rl_simpl(cdr w,theo,-1);
	    if !*rlqegsd then
	       elimres := rl_gsd(elimres,theo);
	    if elimres eq 'true then <<
	       junct := {cl_mkCE('break,elimres,
		  cl_updans(v,a,u,an,atr,ans),ans and atr)};
	       eset := d := nil
	    >> else if elimres neq 'false then
	       if rl_op elimres eq 'or then
		  for each subf in rl_argn elimres do
		     junct := cl_mkCE(vl,subf,
			cl_updans(v,a,u,an,atr,ans),ans and atr) . junct
	       else
		  junct := cl_mkCE(vl,elimres,
		     cl_updans(v,a,u,an,atr,ans),ans and atr) . junct;
      	 >>
      >>;
      return junct . theo
   end;

procedure cl_updans(v,a,u,an,atr,ans);
   ans and {v,a,u,atr} . an;

procedure cl_qeatal(f,v,theo,ans);
   % Quantifier elimination atomic formula list. [f] is a formula; [v]
   % is a variable; [theo] is the current theory, [ans] is Boolean.
   % Returns an ALP.
   cl_qeatal1(f,v,theo,T,ans);

procedure cl_qeatal1(f,v,theo,flg,ans);
   % Quantifier elimination atomic formula list. [f] is aformula; [v] is
   % avariable; [theo] is the current theory, [flg] and [ans] are
   % Boolean. Returns an ALP. If [flg] is non-[nil] [f] has to be
   % considered negated.
   begin scalar op,w,ww;
      op := rl_op f;
      w := if rl_tvalp op then
	 {nil . nil}
      else if op eq 'not then
      	 {cl_qeatal1(rl_arg1 f,v,theo,not flg,ans)}
      else if rl_junctp op then
      	 for each subf in rl_argn f collect
      	    cl_qeatal1(subf,v,theo,flg,ans)
      else if op eq 'impl then
      	 {cl_qeatal1(rl_arg2l f,v,theo,not flg,ans),
	    cl_qeatal1(rl_arg2r f,v,theo,flg,ans)}
      else if op eq 'repl then
	 {cl_qeatal1(rl_arg2l f,v,theo,flg,ans),
	    cl_qeatal1(rl_arg2r f,v,theo,not flg,ans)}
      else if op eq 'equiv then
	 {cl_qeatal1(rl_arg2l f,v,theo,not flg,ans),
	    cl_qeatal1(rl_arg2r f,v,theo,flg,ans),
            cl_qeatal1(rl_arg2l f,v,theo,flg,ans),
	    cl_qeatal1(rl_arg2r f,v,theo,not flg,ans)}
      else if rl_quap op then
	 rederr "argument formula not prenex"
      else  % [f] is an atomic formula.
      	 {rl_translat(f,v,theo,flg,ans)};
      if (ww := atsoc('failed,w)) then return ww;
      return cl_alpunion w
   end;

procedure cl_alpunion(pl);
   % Alp union. [pl] is a list of ALP's. Returns the union of all ALP's
   % in [pl].
   begin scalar uall,pall;
      for each pair in pl do <<
	 uall := car pair . uall;
	 pall := cdr pair . pall
      >>;
      return lto_alunion(uall) . lto_almerge(pall,'plus2)
   end;

procedure cl_save(co,dol);
   % Save into container. [co] is a container; [dol] is a list of
   % container elements. Returns a container.
   if !*rlqedfs then cl_push(co,dol) else cl_enqueue(co,dol);

procedure cl_push(co,dol);
   % Push into container. [co] is a container; [dol] is a list of
   % container elements. Returns a container.
   <<
      for each x in dol do co := cl_coinsert(co,x);
      co
   >>;

procedure cl_coinsert(co,ce);
   % Insert into container. [co] is a container; [ce] is a container
   % element. Returns a container.
   if cl_coMember(ce,co) then co else ce . co;

procedure cl_enqueue(co,dol);
   % Enqueue into container. [co] is a container; [dol] is a list of
   % container elements. Returns a container.
   <<
      if null co and dol then <<
	 co := {nil,car dol};
	 car co := cdr co;
	 dol := cdr dol
      >>;
      for each x in dol do
	 if not cl_coMember(x,cdr co) then
	    car co := (cdar co := {x});
      co
   >>;

procedure cl_get(co);
   % Get from container. [co] is a container. Returns a pair $(e . c)$
   % where $e$ is a container element and $c$ is the container [co]
   % without the entry $e$.
   if !*rlqedfs then cl_pop(co) else cl_dequeue(co);

procedure cl_pop(co);
   % Pop from container. [co] is a container. Returns a pair $(e . c)$
   % where $e$ is a container element and $c$ is the container [co]
   % without the entry $e$.
   co;

procedure cl_dequeue(co);
   % Dequeue from container. [co] is a container. Returns a pair $(e .
   % c)$ where $e$ is a container element and $c$ is the container [co]
   % without the entry $e$.
   if co then cadr co . if cddr co then (car co . cddr co);

procedure cl_colength(co);
   % Container length. [co] is a container. Returns the number of
   % elements in [co].
   if !*rlqedfs or null co then length co else length co - 1;

procedure cl_betterp(new,old);
   begin integer atn;
      atn := cl_betterp!-count car new;
      if !*rlverbose then ioto_prin2 {"(",atn,")"};
      return null old or atn < cl_betterp!-count car old
   end;

procedure cl_betterp!-count(coell);
   % [coell] is a list of container elements.
   for each x in coell sum rl_atnum cl_coF x;

procedure cl_qeipo(f,theo);
   % Quantifier elimination in position. [f] is a positive formula;
   % [theo] is a THEORY. Returns a quantifier-free formula equivalent to
   % [f] wrt. [theo] by recursively making [f] anti-prenex and
   % eliminating the quantifiers.
   begin scalar w,!*rlqeans;
      repeat <<
	 w := cl_qeipo1(cl_apnf rl_simpl(f,theo,-1),theo);
	 f := cdr w
      >> until not car w;
      return f
   end;

procedure cl_qeipo1(f,theo);
   % Quantifier eliminate in position subroutine.
   begin scalar op,nf,a,argl,ntheo;
      op := rl_op f;
      if rl_quap op then <<
	 for each subf in theo do
	    if not(rl_var f memq rl_varlat subf) then
 	       ntheo := subf . ntheo;
	 nf := cl_qeipo1(rl_mat f,ntheo);
	 if car nf then
	    return T . rl_mkq(op,rl_var f,cdr nf);
	 a := rl_qe(rl_mkq(op,rl_var f,cdr nf),ntheo);
	 if rl_quap rl_op a then
	    rederr "cl_qeipo1: Could not eliminate quantifier";
	 return T . a
      >>;
      if rl_junctp op then <<
      	 argl := rl_argn f;
	 if op eq 'and then
	    for each subf in argl do
	       if cl_atfp subf then theo := subf . theo;
	 if op eq 'or then
	    for each subf in argl do
	       if cl_atfp subf then theo := rl_negateat subf . theo;
	 while argl do <<
	    a := cl_qeipo1(car argl,theo);
	    nf := cdr a . nf;
	    argl := cdr argl;
	    if car a then <<
	       nf := nconc(reversip nf,argl);
	       argl := nil
	    >>
	 >>;
	 return
	    if car a then
	       T . rl_mkn(op,nf)
	    else
 	       nil . rl_mkn(op,reversip nf)
      >>;
      % f is atomic.
      return nil . f
   end;

procedure cl_qews(f,theo);
   % Quantifier elimination with selection. [f] is a formula; [theo] is
   % a THEORY. Returns a quantifier-free formula equivalent to [f] wrt.
   % [theo] by selecting a quantifier from the innermost block, moving
   % it inside as far as possible and eliminating it. Accesses the
   % switch [rlqepnf]; if [rlqepnf] is on, then [f] has to be prenex.
   begin scalar q,op,ql,varl,varll,!*rlqeans;
      if !*rlqepnf then
	 f := rl_pnf f;
      f := rl_simpl(f,theo,-1);
      if not rl_quap rl_op f then
	 return f;
      {ql,varll,f} := cl_split f;  % drop bvl
      while ql do <<
	 q := pop ql;
	 varl := pop varll;
	 f := if q eq 'ex then
	    cl_qews1(varl,f,theo)
	 else
	    rl_nnfnot cl_qews1(varl,rl_nnfnot f,theo)
      >>;
      return f
   end;

procedure cl_qews1(varl,mtx,theo);
   % Quantifier eliminate with selection subroutine. [varl] is a list of
   % variables; [mtx] is a quantifier-free formula; [theo] is a list of
   % atomic formulas. Returns a formula, where all existentially
   % quantified variables from [varl] are eliminated.
   begin scalar v,w;
      while varl do <<
	 w := rl_trygauss(mtx,varl,theo,nil,nil);
	 if w eq 'failed then <<
	    v := rl_varsel(mtx,varl,theo);
 	    mtx := cl_qeipo(rl_mkq('ex,v,mtx),theo)
	 >> else <<
	    v := caar w;
	    mtx := rl_qe(rl_mkq('ex,v,mtx),theo)
	 >>;
	 varl := delete(v,varl)
      >>;
      return mtx
   end;

%DS
% <GRV> ::= ['failed] | (<KERNEL> . <ELIMINATION SET>) . <THEORY>
% <IGRV> ::= (['failed] . [nil]) |
%    ['gignore] . ([nil] . <THEORY SUPPLEMENT>) |
%    <GAUSS TYPE IDENTIFICATION> . (<ELIMINATION SET> . <THEORY SUPPLEMENT>)
% <GAUSS TYPE IDENTIFICATION> ::= ("verbose output", <DATA>,...)

procedure cl_trygauss(f,vl,theo,ans,bvl);
   % Try Gauss elimination. [f] is a quantifier-free formula; [vl] is a
   % list of variables existentially quantified in the current block;
   % [theo] a THEORY; [ans] is bool; [bvl] is a list of variables.
   % Returns a GRV, where no assumption on the variables in [bvl] are
   % made.
   begin scalar w;
      w := cl_trygauss1(f,vl,theo,ans,bvl);
      if w eq 'failed then return 'failed;
      return car w . union(cdr w,theo)
   end;

procedure cl_trygauss1(f,vl,theo,ans,bvl);
   % Try deep Gauss elimination. [f] is a quantifier-free formula; [vl] is
   % the current existential variable block; [theo] is a list of
   % atomic formulas, the current theory; [ans] is Boolean; [bvl] is a
   % list of variables that are considered non-parametric. Returns
   % a GRV.
   begin scalar w,v,csol,ev;
      csol := '(failed . nil);
      if null !*rlqevarsel then
	 vl := {car vl};
      while vl do <<
	 v := pop vl;
	 w := cl_trygaussvar(f,v,theo,ans,bvl);
	 if car w neq 'gignore and rl_bettergaussp(w,csol) then <<
	    csol := w;
	    ev := v;
	    if rl_bestgaussp csol then
	       vl := nil
	 >>
      >>;
      if car csol eq 'failed then
 	 return 'failed;
      if !*rlverbose then
	 ioto_prin2 caar csol;
      return (ev . cadr csol) . cddr csol;
   end;

procedure cl_trygaussvar(f,v,theo,ans,bvl);
   % Try Gauss elimination wrt. one variable. [f] is a formula; [v]
   % is a kernel; [theo] is a theory; [ans] is Boolean; [bvl] is a
   % list of kernels. Returns a IGRV.
   <<
      if cl_atfp f then
	 rl_qefsolset(f,v,theo,ans,bvl)
      else if rl_op f eq 'and then
	 cl_gaussand(rl_argn f,v,theo,ans,bvl)
      else if rl_op f eq 'or then
	 cl_gaussor(rl_argn f,v,theo,ans,bvl)
      else % TODO: Gauss elimination for formulas with extended Boolean op's
	 '(failed . nil)
   >>;

procedure cl_gaussand(fl,v,theo,ans,bvl);
   begin scalar w, curr;
      curr := cl_trygaussvar(car fl,v,theo,ans,bvl);
      fl := cdr fl;
      while fl and not(rl_bestgaussp curr) do <<
      	 w := cl_trygaussvar(car fl,v,theo,ans,bvl);
	 curr := cl_gaussintersection(w,curr);
	 fl := cdr fl
      >>;
      return curr
   end;

procedure cl_gaussor(fl,v,theo,ans,bvl);
   begin scalar w,curr;
      curr := cl_trygaussvar(car fl,v,theo,ans,bvl);
      fl := cdr fl;
      while fl and (car curr neq 'failed) do <<
	 w := cl_trygaussvar(car fl,v,theo,ans,bvl);
	 fl := cdr fl;
	 curr := cl_gaussunion(curr,w)
      >>;
      return curr
   end;

procedure cl_gaussunion(grv1,grv2);
   begin scalar tag,eset,theo;
      if car grv1 eq 'failed or car grv2 eq 'failed then
	 return '(failed . nil);
      tag := if car grv1 eq 'gignore then
	 car grv2
      else if car grv2 eq 'gignore then
	 car grv1
      else if rl_bettergaussp(grv1,grv2) then
	 car grv2
      else
	 car grv1;
      eset := rl_esetunion(cadr grv1,cadr grv2);
      theo := union(cddr grv1,cddr grv2);
      return tag . ( eset . theo )
   end;

procedure cl_gaussintersection(grv1,grv2);
   if car grv1 eq 'gignore and car grv2 eq 'gignore then
      if length cddr grv1 < length cddr grv2 then grv1 else grv2
   else if car grv1 eq 'gignore then grv2
   else if car grv2 eq 'gignore then grv1
   else if rl_bettergaussp(grv1,grv2) then grv1 else grv2;

procedure cl_specelim(f,vl,theo,ans,bvl);
   % Special elimination. [f] is a quantifier-free formula; [vl] is a
   % list of variables existentially quantified in the current block;
   % [theo] a THEORY; [ans] is bool; [bvl] is a list of variables.
   % Returns a GRV.
   'failed;

procedure cl_fbqe(f);
   % Fallback quantifier elimination. [f] is a formula. returns a
   % formula equivalent to [f].
   <<
      if !*rlverbose then
	 ioto_tprin2t "+++ no fallback QE specified";
      f
   >>;

endmodule;  % [clqe]

end;  % of file

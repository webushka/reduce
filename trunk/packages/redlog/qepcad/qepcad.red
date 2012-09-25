% ----------------------------------------------------------------------
% $Id$
% ----------------------------------------------------------------------
% Copyright (c) 1995-2009 A. Dolzmann and T. Sturm, 2010 T. Sturm
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
   fluid '(qepcad_rcsid!* qepcad_copyright!*);
   qepcad_rcsid!* :=
      "$Id$";
   qepcad_copyright!* := "(c) 1995-2009 A. Dolzmann, T. Sturm, 2010 T. Sturm"
>>;

module qepcad;

create!-package('(qepcad),nil);

load!-package 'redlog;
load!-package 'ofsf;
loadtime load!-package 'rltools;

fluid '(qepcad_n!* qepcad_l!* !*rlqepnf !*rlverbose !*echo !*time !*backtrace
   !*utf8 !*nat qepcad_qepcad!* qepcad_slfq!* qepcad_wd!* qepcad_awk!* !*fancy);

qepcad_qepcad!* := "qepcad";
qepcad_slfq!* := "slfq";
qepcad_wd!* := "/tmp/";
qepcad_awk!* := lto_sconcat {rltools_trunk(),"packages/redlog/qepcad/qepcad.awk"};

switch rlqefbqepcad;
switch rlqefbslfq;
switch rlslfqvb;

on1 'rlqefbslfq;

put('ofsf,'rl_services,
   append(get('ofsf,'rl_services),
      '((rl_qepcad!* . qepcad_qepcad)
      	(rl_slfq!* . qepcad_slfq)
        (rl_qepcadn!* . qepcad_qepcadn)
        (rl_qepcadl!* . qepcad_qepcadl))));

rl_mkserv('qepcad,'(rl_simp),'(reval),'(nil),
   function(lambda x; if x then rl_mk!*fof x),T);
rl_mkserv('slfq,'(rl_simp),'(reval),'(nil),
   function(lambda x; if x then rl_mk!*fof x),T);

rl_mkserv('qepcadn,'(reval),nil,nil,'reval,T);
rl_mkserv('qepcadl,'(reval),nil,nil,'reval,T);

rl_set '(ofsf);

procedure qepcad_qepcad(f,fn);
   begin scalar w,oldpprifn,oldprtch,scsemic,oldecho,oldutf8,isfancy;
      if cl_varl1 f = '(nil) then
	 return f;
      oldpprifn := get('times,'pprifn);
      oldprtch := get('expt,'prtch);
      scsemic := semic!*;
      oldecho := !*echo;
      oldutf8 := !*utf8;
      isfancy := !*fancy;
      if isfancy then
      	 off1 'fancy;
      w := errorset({'qepcad_qepcad1,mkquote f,mkquote fn},T,!*backtrace);
      if isfancy then
      	 on1 'fancy;
      if errorp w then <<
      	 put('times,'pprifn,oldpprifn);
      	 put('expt,'prtch,oldprtch);
	 !*utf8 := oldutf8;
	 !*echo := oldecho;
	 semic!* := scsemic;
	 return nil
      >>;
      return car w
   end;

procedure qepcad_qepcad1(f,fn);
   begin scalar w,free,oldprtch,oldpprifn,fn1,fn2,fh,result,oldecho,scsemic,
	 oldutf8,narg,larg,call,rnd;
      oldutf8 := !*utf8;
      scsemic := semic!*;
      rnd := lto_at2str random(10^5);
      fn1 := fn or lto_sconcat{qepcad_wd!*,getenv "USER",rnd,".qepcad"};
      if null fn then
      	 fn2 := lto_sconcat{qepcad_wd!*,getenv "USER",rnd,".red"};
      if !*rlverbose then ioto_prin2 {"+++ creating ",fn1," ... "};
      oldpprifn := get('times,'pprifn);
      put('times,'pprifn,'qepcad_ppricadtimes);
      oldprtch := get('expt,'prtch);
      put('expt,'prtch,'!^);
      if !*rlqepnf then f := cl_pnf f;
      w := cl_varl1 f;
      free := length car w;
      w := nconc(reversip car w,reversip cdr w);
      out(fn1);
      prin2 "[Automatically generated by REDUCE/REDLOG on ";
      prin2t date();
      prin2t " http://reduce-algebra.sourceforge.net/";
      prin2t " http://www.redlog.eu]";
      prin2 "(";
      prin2 car w;
      for each x in cdr w do << prin2 ","; prin2 x >>;
      prin2t ")";
      prin2t free;
      terpri!* nil;
      qepcad_cadprint1 f;
      terpri!* nil;
      prin2t ".";
      prin2t "finish";
      shut(fn1);
      put('times,'pprifn,oldpprifn);
      put('expt,'prtch,oldprtch);
      if !*rlverbose then ioto_prin2 "done";
      if null fn then <<
	 narg := if qepcad_n!* then
 	    lto_sconcat {"+N",lto_at2str qepcad_n!*," "}
	 else
	    "";
	 larg := if qepcad_l!* then
 	    lto_sconcat {"+L",lto_at2str qepcad_l!*," "}
	 else
	    "";
      	 call := lto_sconcat{qepcad_qepcad!*," ",narg,larg,
	    "< ",fn1," | awk -v rf=",fn2,
	    " -v verb=",lto_at2str !*rlverbose," -v time=",lto_at2str !*time,
	    " -v slfqvb=nil -v name=QEPCAD -f ",qepcad_awk!*};
	 if !*rlverbose then
	    ioto_prin2t lto_sconcat {"+++ calling ",call};
	 system call;
	 oldecho := !*echo;
	 !*echo := nil;
	 fh := rds open(fn2,'input);
	 result := xread t;
	 close rds fh;
	 !*echo := oldecho;
	 system lto_sconcat{"rm -f ",fn1," ",fn2};
	 if null result then
	    lprim "qepcad failed"
	 else
	    result := rl_simp result
      >>;
      semic!* := scsemic;
      !*utf8 := oldutf8;
      return result
   end;

procedure qepcad_cadprint1(f);
   begin scalar op,!*nat;
      op := rl_op f;
      if op eq 'ex then <<
	 prin2!* "(";
	 prin2!* "E ";
	 prin2!* rl_var f;
	 prin2!* ") ";
	 return qepcad_cadprint1 rl_mat f
      >>;
      if op eq 'all then <<
	 prin2!* "(";
	 prin2!* "A ";
	 prin2!* rl_var f;
	 prin2!* ") ";
      	 return qepcad_cadprint1 rl_mat f
      >>;
      prin2!* "[";
      qepcad_cadprint2 f;
      prin2!* "]"
   end;

procedure qepcad_cadprint2(f);
   begin scalar op,argl;
      op := rl_op f;
      if rl_cxp op then <<
	 if rl_tvalp op then <<
	    qepcad_cadprinttval f;
	    return nil
	 >>;
	 prin2!* "[";
	 argl := rl_argn f;
	 qepcad_cadprint2(car argl);
	 for each x in cdr argl do <<
	    qepcad_cadprintop op;
	    qepcad_cadprint2 x
	 >>;
	 prin2!* "]";
	 return nil
      >>;
      maprin prepf ofsf_arg2l f;
      qepcad_cadprintop op;
      prin2!* "0";
      return nil
   end;

procedure qepcad_cadprinttval(tv);
   if tv eq 'true then <<
      prin2!* "0";
      qepcad_cadprintop 'equal;
      prin2!* "0"
   >> else <<  % [tv eq 'false]
      prin2!* "0";
      qepcad_cadprintop 'neq;
      prin2!* "0"
   >>;

procedure qepcad_cadprintop(op);
   <<
      prin2!* " ";
      prin2!* cdr atsoc(op,'((equal . "=") (neq . "/=") (lessp . "<")
      	 (greaterp . ">") (geq . ">=") (leq . "<=") (or . "\/") (and . "/\")
      	    (impl . "==>") (equiv . "<==>")));
      prin2!* " "
   >>;

procedure qepcad_ppricadtimes(f,n);
   begin scalar w;
      w := (get(car f,'infix) < n);
      if w then prin2!* "(";
      maprin cadr f;
      for each x in cddr f do << prin2!* " "; maprin x >>;
      if w then prin2!* ")"
   end;

procedure qepcad_qepcadn(n);
   % The +N argument to QEPCAD corresponding to the variable NU. This is
   % the number of cells reclaimed for the garbage-collected heap. It is
   % responsible for failures due to "too few cells reclaimed". The
   % default is 1*10^6.
   begin scalar w;
      w := qepcad_n!*;
      if n then
      	 qepcad_n!* := n;
      return w
   end;

procedure qepcad_qepcadl(l);
   % The +L argument to QEPCAD corresponding to the variable NLPRIME. It
   % is responsible for failures due to "prime list exhausted". The
   % default is 2000.
   begin scalar w;
      w := qepcad_l!*;
      if l then
      	 qepcad_l!* := l;
      return w
   end;

procedure qepcad_slfq(f,fn);
   begin scalar w,oldpprifn,oldprtch,scsemic,oldecho,oldutf8;
      oldecho := !*echo;
      w := errorset({'qepcad_slfq1,mkquote f,mkquote fn},T,!*backtrace);
      if errorp w then <<
	 !*echo := oldecho;
	 semic!* := scsemic;
	 return nil
      >>;
      return car w
   end;

procedure qepcad_slfq1(f,fn);
   begin scalar rnd,w,fn1,fn2,fh,result,oldecho,narg,larg,call;
      rnd := lto_at2str random(10^5);
      fn1 := fn or lto_sconcat{qepcad_wd!*,getenv "USER",rnd,".slfq"};
      if null fn then
      	 fn2 := lto_sconcat{qepcad_wd!*,getenv "USER",rnd,".red"};
      if !*rlverbose then ioto_prin2 {"+++ creating ",fn1," ... "};
      out fn1;
      mathprint rl_prepfof f where !*nat=nil;
      shut fn1;
      if !*rlverbose then ioto_prin2 "done";
      if null fn then <<
	 narg := if qepcad_n!* then
 	    lto_sconcat {"-N ",lto_at2str(qepcad_n!*/10^6)," "}
	 else
	    "";
	 larg := if qepcad_l!* then
 	    lto_sconcat {"-P ",lto_at2str qepcad_l!*," "}
	 else
	    "";
      	 call := lto_sconcat{qepcad_slfq!*," ",narg,larg,"< ",fn1,
	    " 2> /dev/null | awk -v rf=",fn2,
	    " -v verb=",lto_at2str !*rlverbose," -v time=",lto_at2str !*time,
	    " -v slfqvb=",lto_at2str !*rlslfqvb,
	    " -v name=SLFQ -f ",qepcad_awk!*};
	 if !*rlverbose then
	    ioto_prin2t lto_sconcat {"+++ calling ",call};
	 system call;
	 oldecho := !*echo;
	 !*echo := nil;
	 fh := rds open(fn2,'input);
	 result := xread t;
	 close rds fh;
	 !*echo := oldecho;
	 system lto_sconcat{"rm -f ",fn1," ",fn2};
	 if null result then
	    lprim "slfq failed"
	 else
	    result := rl_simp result
      >>;
      return result
   end;

endmodule;

end;

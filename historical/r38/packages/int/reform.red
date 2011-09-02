module reform; % Reformulate expressions using C-constant substitution.

% Authors: Mary Ann Moore and Arthur C. Norman.

fluid '(!*trint cmap cval loglist ulist);

exports logstosq,substinulist;

imports prepsq,mksp,nth,multsq,addsq,domainp,invsq,plusdf;

symbolic procedure substinulist ulst;
   % Substitutes for the C-constants in the values of the U's given in
   % ULST. Result is a D.F.
   if null ulst then nil
    else begin scalar temp,lcu;
       lcu:=lc ulst;
       temp:=evaluateuconst numr lcu;
       if null numr temp then temp:=nil
	else temp:=((lpow ulst) .*
		   !*multsq(temp,!*invsq(denr lcu ./ 1))) .+ nil;
       return plusdf(temp,substinulist red ulst)
     end;

symbolic procedure evaluateuconst coefft;
% Substitutes for the C-constants into COEFFT (=S.F.). Result is S.Q.;
    if null coefft or domainp coefft then coefft ./ 1
    else begin scalar temp;
      if null(temp:=assoc(mvar coefft,cmap)) then
	    temp:=(!*p2f lpow coefft) ./ 1
      else temp:=getv(cval,cdr temp);
      temp:=!*multsq(temp,evaluateuconst(lc coefft));
   % Next line had addsq previously
      return !*addsq(temp,evaluateuconst(red coefft))
    end;

symbolic procedure logstosq;
% Converts LOGLIST to sum of the log terms as a S.Q.;
   begin scalar lglst,logsq,i,temp;
      i:=1;
      lglst:=loglist;
      logsq:=nil ./ 1;
loop: if null lglst then return logsq;
      temp:=cddr car lglst;
%%	if !*trint
%%        then <<printc "SF arg for log etc ="; printc temp>>;
      if not (caar lglst='iden) then <<
	  temp:=prepsq temp; %convert to prefix form.
	  temp:=list(caar lglst,temp); %function name.
          temp:=((mksp(temp,1) .* 1) .+ nil) ./ 1 >>;
      temp:=!*multsq(temp,getv(cval,i));
      % Next line had addsq previously
      logsq:=!*addsq(temp,logsq);
      lglst:=cdr lglst;
      i:=i+1;
      go to loop
   end;

endmodule;

end;

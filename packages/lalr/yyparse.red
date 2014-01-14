% yyparse.red

% Author: Arthur Norman

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

% $Id$

module 'yyparse;


% Here I have a general-purpose LR(1) parser skeleton.  This needs to
% have a source of tokens, and some tables that will direct its actions.

% The format of the tables required by this code will be a little curious,
% mainly because they represent some attempt to compact the information that
% is needed. Note that the CSL functions mkvect16, putv16, getv16 are
% somewhat similar to the regular mkvect, putv and getv, but may be used
% if the vector contents will always be 16-bit fixnums.

% For each terminal I have a pointer (stored in goto_index) into
% a pair of vectors, goto_old_state and goto_new_state. The first of these
% holds states that I might be in, and the second holds the ones I must
% move into after a reduction has been performed. In the goto_old_state
% table the value "-1" is taken to match any state that I am attempting
% to look up. Thus it can be used to terminate a segment of the table. I am
% entitled to let undefined locations in the goto table respond with
% any value that just happens.

symbolic procedure get_goto(state, non_terminal);
  begin
    scalar w1, w2;
    w1 := getv16(goto_index, non_terminal);
    while not (((w2 := getv16(goto_old_state, w1)) = -1) or
               w2 = state) do w1 := w1 + 1;
    return getv16(goto_new_state, w1)
  end;

% In a rather similar way, actions are found via an association-list
% like look-up in a table. In this table a strictly positive number n stands
% for (SHIFT n) [observe that if I reserve zero as the number of the
% initial state of my augmented grammar I can never need to shift into
% state 0].  The value 0 in the table represents ACCEPT. This leaves
% negative values to cover reductions and error cases.

symbolic procedure get_action(state, terminal);
  begin
    scalar w1, w2;
    w1 := getv16(action_index, state);
    while not (((w2 := getv16(action_terminal, w1)) = -1) or
               w2 = terminal) do w1 := w1 + 1;
    return getv16(action_result, w1)
  end;

symbolic procedure yyparse();
  begin
    scalar sym_stack, state_stack, next_input, w;
% state_stack is a stack of parser-machine states and sym_stack runs
% in step with it and holds the corresponding symbols. Well for
% terminals sym_stack just holds the symbol, but for non-terminals it
% will save whatever a semantic action has generated when a reduction
% is performed. Note that state 0 must be the initial state for
% the parser.
    state_stack := list 0;
    start_parser();
    next_input := yylex();
    princ "yylex returns "; print next_input;
% The action code that I access here will be 0 for "accept", which is why
% the WHILE loop looks for this case. Positive values will be shifts,
% while negative ones are either reductions or error cases.
    while << princ "state stack: "; print state_stack;
             princ "sym stack: "; print sym_stack;
             princ "next input: "; print next_input;
             princ "action code: ";
             print get_action(car state_stack, next_input);
       t >> and
       not ((w := get_action(car state_stack, next_input)) = 0) do <<
        princ "w = "; print w;
        if w > 0 then <<                             % SHIFT
            if next_input = 0 then error(0, "End of file detected");
            sym_stack := (lalr_decode_symbol next_input) . sym_stack;
            state_stack := w . state_stack;
            next_input := yylex() >>
        else begin                                   % REDUCE
            scalar A, n, action;
            w := - (w + 1);
            if w < action_first_error then <<
                action := getv(action_fn, w);
                n := getv8(action_n, w);             % RHS count
                A := getv16(action_A, w);            % LHS non-terminal
% I am now reducing by "A -> beta { action() }" where beta has n items
                w := nil;
                for i := 1:n do <<
                    w := car sym_stack . w;
                    sym_stack := cdr sym_stack;
                    state_stack := cdr state_stack >>;
% To help me while developing this code I will not crash out if I have
% a missing action function, but will instead just build a bit of list.
                if action then w := apply1(action, w);
                sym_stack := w . sym_stack;
                state_stack := get_goto(car state_stack, A) . state_stack >>
            else <<
                w := w - action_first_error;
                yyerror getv(action_error_messages, w);
% The next activity must result in the loop ending... At present I do not
% make any attempt to repair or recover from the error. This is obviously
% a bad state of affairs!
                state_stack := list 0;
                sym_stack := '(error);
                next_input := 0 >>
        end >>;
    princ "Seem to have finished...";
    return sym_stack
  end;

endmodule;

end;

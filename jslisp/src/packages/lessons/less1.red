COMMENT


                 REDUCE INTERACTIVE LESSON NUMBER 1

                         David R. Stoutemyer
                        University of Hawaii


COMMENT This is lesson 1 of 7 interactive lessons about the REDUCE
system for computer symbolic mathematics. These lessons presume an
acquaintance with elementary calculus, together with a previous
exposure to some computer programming language.

These lessons have been designed for use on a DEC system 10 or 20.
Apart from changes to the prompt and interrupt characters however
they should work just as well with any REDUCE implementation.

In REDUCE, any sequence of characters from the word "COMMENT" through
the next semicolon or dollar-sign statement separator is an
explanatory remark ignored by the system. In general, either
separator signals the end of a statement, with the dollar sign
suppressing any output that might otherwise automatically be produced
by the statement. The typing of a carriage return initiates the
immediate sequential execution of all statements which have been
terminated on that line. When REDUCE is ready for more input, it will
prompt you with an asterisk at the left margin.

To terminate the lesson and return to the operating system, type an
interrupt character (DEC: control-C ) at any time.

Expressions can be formed using "**", "*", "/", "+", and "-" to
indicate exponentiation, multiplication, division, addition, and
subtraction or negation respectively. Assignments to variables can
be done using the operator ":=". For example:;

R2D2 := (987654321/15)**3;

COMMENT The immediately preceding line, without a semicolon, is the
computed output generated by the line with a semicolon which precedes
it. Note that exact indefinite-precision rational arithmetic was
used, in contrast to the limited-precision arithmetic of traditional
programming languages.

We can use the name R2D2 to represent its value in subsequent
expressions such as;

R2D2 := -R2D2/25 + 3*(13-5);

COMMENT Now I will give you an opportunity to try some analogous
computations.  To do so, type the letter N followed by a carriage return
in response to our question "CONT?" (You could type Y if you wish to
relinquish this opportunity, but I strongly recommend reinforced
learning through active participation.) After trying an example or two,
type the command "CONT" terminated by a semicolon and carriage return
when you wish to proceed with the rest of the lesson.  To avoid
interference with our examples, please don't assign anything to any
variable names beginning with the letters E through I.  To avoid lengthy
delays, I recommend keeping all of your examples approximately as
trivial as ours, saving your more ambitious experiments until after the
lesson.  If you happen to initiate a calculation requiring an undue
amount of time to evaluate or to print, you can abort that computation
with an interrupt to get back to the operating system.  Restart REDUCE,
followed by the statement "IN LESS1", followed by a semicolon and
return, to restart the lesson at the beginning;

PAUSE;

COMMENT  Now watch this example illustrating some more dramatic
differences from traditional scientific programming systems:;

E1 := 2*G + 3*G + H**3/H;

COMMENT Note how we are allowed to use variables to which we have
assigned no values! Note too how similar terms and similar factors
are combined automatically. REDUCE also automatically expands
products and powers of sums, together with placing expressions over
common denominators, as illustrated by the examples:;

E2 := E1*(F+G);
E2 := E1**2;
E1+1/E1;

COMMENT Our last example also illustrates that there is no need to
assign an expression if we do not plan to use its value later. Try
some similar examples:;

PAUSE;

COMMENT It is not always desirable to expand expressions over a
common denominator, and we can use the OFF statement to turn off
either or both computational switches which control these
transformations. The switch named EXP controls EXPansion, and the
switch named MCD controls the Making of Common Denominators;

OFF EXP, MCD;
E2 := E1**2 $
E2 := E2*(F+G) + 1/E1;
COMMENT To turn these switches back on, we type:;

ON EXP, MCD;

COMMENT Try a few relevant examples with these switches turned off
individually and jointly;

PAUSE;

ON EXP;   % Just in case you turned it off.

COMMENT  Now consider the example:;

E2 := (2*(F*H)**2 - F**2*G*H - (F*G)**2 - F*H**3 + F*H*G**2 - H**4
       + G*H**3)/(F**2*H - F**2*G - F*H**2 + 2*F*G*H - F*G**2
       - G*H**2 + G**2*H);

COMMENT It is not obvious, but the numerator and denominator of this
expression share a nontrivial common divisor which can be canceled.
To make REDUCE automatically cancel greatest common divisors, we turn
on the computational switch named GCD:;

ON GCD;
E2;

COMMENT The switch is not on by default because

    1.  It can consume a lot of time.
    2.  Often we know in advance the few places where a nontrivial
        GCD can occur in our problem.
    3.  Even without GCD cancellation, expansion and common denomin-
        ators guarantee that any rational expression which is equiv-
        alent to zero simplifies to zero.
    4.  When the denominator is the greatest common divisor, such
        as for  (X**2 - 2*X + 1)/(X-1),  REDUCE cancels the
        greatest common divisor even when GCD is OFF.
    5.  GCD cancellation sometimes makes expressions more
        complicated, such as with  (F**10 - G**10)/(F**2 + F*G -2*G**2).

Try the examples mentioned in this comment, together with one
or two other relevant ones;

PAUSE;

COMMENT Exact rational arithmetic can consume an alarming amount of
computer time when the constituent integers have quite large
magnitudes, and the results become awkward to interpret
qualitatively. When this is the case and somewhat inexact numerical
coefficients are acceptable, we can have the arithmetic done floating
point by turning on the computational switch ROUNDED. With this switch
on, any non-integer rational numbers are approximated by floating-point
numbers, and the result of any arithmetic operation is floating-point
when any of its operands is floating point. For example:;

ON ROUNDED;
E1:= (12.3456789E3 *F + 3*G)**2 + 1/2;

COMMENT With ROUNDED off, any floating-point constants are
automatically approximated by rational numbers:;

OFF ROUNDED;
E1 := 12.35*G;
PAUSE;

COMMENT A number of elementary functions, such as SIN, COS and LOG,
are built into REDUCE. Moreover, the letter E represents the base of
the natural logarithms, so the exponentiation operator enables us to
represent the exponential function as well as fractional powers. For
example:;

E1:= SIN(-F*G) + LOG(E) + (3*G**2*COS(-1))**(1/2);

COMMENT What automatic simplifications can you identify in this
example?

Note that most REDUCE implementations do not approximate the values
of these functions for non-trivial numerical arguments, and exact
computations are generally impossible for such cases.

Experimentally determine some other built-in simplifications for
these functions;

PAUSE;

COMMENT Later you will learn how to introduce additional
simplifications and additional functions, including numerical
approximations for examples such as COS(1).

Differentiation is also built-into REDUCE. For example, to
differentiate E1 with respect to F;

E2 := DF(E1,F);

COMMENT To compute the second derivative of E2 with respect to G, we
can type either DF(E2,G,2) or DF(E1,F,1,G,2) or DF(E1,F,G,2) or
DF(E1,G,2,F,1) or;

DF(E1,G,2,F);

COMMENT Surely you can't resist trying a few derivatives of your
own! (Careful, High-order derivatives can be alarmingly complicated);

PAUSE;

COMMENT REDUCE uses the name I to represent (-1)**(1/2),
incorporating some simplification rules such as replacing I**2 by -1.
Here is an opportunity to experimentally determine other
simplifications such as for I**3, 1/I**23, and (I**2-1)/(I-1);

PAUSE;

COMMENT Clearly it is inadvisable to use E or I as a variable. T is
also inadvisable for reasons that will become clear later.

The value of a variable is said to be "bound" to the variable.  Any
variable to which we have assigned a value is called a bound variable,
and any variable to which we have not assigned a value is called an
indeterminate.  Occasionally it is desirable to make a bound variable
into an indeterminate, and this can be done using the CLEAR command.
For example:;

CLEAR R2D2, E1, E2;
E2;

COMMENT If you suspect that a degenerate assignment, such as E1:=E1,
would suffice to clear a bound variable, try it on one of your own
bound variables:;

PAUSE;

COMMENT REDUCE also supports matrix algebra, as illustrated by the
following sequence:;

MATRIX E1(4,1), F, H;

COMMENT This declaration establishes E1 as a matrix with 4 rows and 1
column, while establishing F and H as matrices of unspecified size.
To establish element values (and sizes if not already established in
the MATRIX declaration), we can use the MAT function, as illustrated
by the following example:;

H := MAT((LOG(G), G+3), (G, 5/7));

COMMENT Only after establishing the size and establishing the element
values of a declared matrix by executing a matrix assignment can we
refer to an individual element or to the matrix as a whole. For
example to increase the last element of H by 1 then form twice the
transpose of H, we can type;

H(2,2) := H(2,2) + 1;
2*TP(H);

COMMENT To compute the determinant of H:;

DET(H);

COMMENT  To compute the trace of H:;

TRACE(H);

COMMENT To compute the inverse of H, we can type H**(-1) or 1/H.  To
compute the solution to the equation H*F = MAT((G),(2)), we can
left-multiply the right-hand side by the inverse of H:;

F := 1/H*MAT((G),(2));

COMMENT Notes:
   1.  MAT((G),(2))/H would denote right-multiplication by the
       inverse, which is not what we want.
   2.  Solutions for a set of right-hand-side vectors are most
       efficiently computed simultaneously by collecting the right-
       hand sides together as the columns of a single multiple-column
       matrix.
   3.  Subexpressions of the form 1/H*... or H**(-1)*... are computed
       more efficiently than if the inverse is computed separately in
       a previous statement, so separate computation of the inverse
       is advisable only if several solutions are desired and if
       they cannot be computed simultaneously.
   4.  MAT must have parentheses around each row of elements even if
       there is only one row or only one element per row.
   5.  References to individual matrix elements must have exactly two
       subscripts, even if the matrix has only one row or one column.

Congratulations on completing lesson 1!  I urge you to try a sequence of
more ambitious examples for the various features that have been
introduced, in order to gain some familiarity with the relationship
between problem size and computing time for various operations. (In most
implementations, the command "ON TIME" causes computing time to be
printed.) I also urge you to bring to the next lesson appropriate
examples from textbooks, articles, or elsewhere, in order to experience
the decisive learning reinforcement afforded by meaningful personal
examples that are not arbitrarily contrived.

To avoid the possibility of interference from assignments and declar-
ations in lesson 1, it is wise to execute lesson 2 in a fresh REDUCE
job, when you are ready.

;END;

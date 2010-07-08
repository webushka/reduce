//
// This file is part of the Jlisp implementation of Standard Lisp
// Copyright \u00a9 (C) Codemist Ltd, 1998-2000.
//

// Fns.java
//
// a class that exists solely so that I can place various commonly used
// functions as static methods here


class Fns
{
    static String prompt = null;

    static int gensymCounter = 1;

    static LispObject put(Symbol name, LispObject key, LispObject value)
    {
        LispObject plist = name.cdr/*plist*/;
        while (!plist.atom)
	{   LispObject w = plist;
            plist = w.cdr;
            LispObject x = w.car;
            if (!x.atom && x.car == key)
            {   x.cdr = value;
                return value;
            }
        }
        name.cdr/*plist*/ = new Cons(new Cons(key, value), name.cdr/*plist*/);
        return value;
    }

    static void fluid(LispObject a)
    {
        Symbol s = (Symbol)a;
        put(s, Jlisp.lit[Lit.special], Jlisp.lispTrue);
        if (s.car/*value*/ == Jlisp.lit[Lit.undefined]) s.car/*value*/ = Jlisp.nil;
    }

    static LispObject get(LispObject n, LispObject key)
    {
        if (!(n instanceof Symbol)) return Jlisp.nil;
        Symbol name = (Symbol)n;
        LispObject plist = name.cdr/*plist*/;
        while (!plist.atom)
	{   LispObject w = plist;
            plist = w.cdr;
            LispObject x = w.car;
            if (!x.atom && x.car == key) return x.cdr;
        }
        return Jlisp.nil;
    }

    static LispObject remprop(Symbol name, LispObject key)
    {
        LispObject plist = name.cdr/*plist*/;
        LispObject prev = null;
        while (!plist.atom)
	{   LispObject w = plist;
            plist = w.cdr;
            LispObject x = w.car;
            if (!x.atom && x.car == key)
	    {   if (prev == null) name.cdr/*plist*/ = w.cdr;
                else prev.cdr = w.cdr;
                return x.cdr;
            }
            prev = w;
        }
        return Jlisp.nil;
    }

    static LispObject list2(LispObject a, LispObject b)
    {
        return new Cons(a, new Cons(b, Jlisp.nil));
    }

    static LispObject reversip(LispObject arg1)
    {
        LispObject r = Jlisp.nil;
        while (!arg1.atom)
	{   LispObject a = arg1;
            arg1 = a.cdr;
            a.cdr = r;
            r = a;
        }
        return r;
    }

    static LispObject lessp(LispObject arg1, LispObject arg2) throws Exception
    {
        return arg1.le(arg2) ? Jlisp.lispTrue : Jlisp.nil;
    }

// The following applyx functions are only ever used when the function
// concerned is a lambda-expression (at least it is not a symbol or
// function-object). Life is much nastier then one might have dreamt
// because I want to cope with &optional and &rest. However I will
// NOT (at first?) support supplied-p etc information
    static LispObject [] args = new LispObject[20];
    static int argspassed;

    static LispObject apply0(LispObject fn) throws Exception
    {
        return applyInner(fn, 0);
    }

    static LispObject apply1(LispObject fn, LispObject a1) throws Exception
    {
        args[0] = a1;
        return applyInner(fn, 1);
    }

    static LispObject apply2(LispObject fn, LispObject a1,
                             LispObject a2) throws Exception
    {
        args[0] = a1;
        args[1] = a2;
        return applyInner(fn, 2);
    }

    static LispObject apply3(LispObject fn, LispObject a1,
                             LispObject a2, LispObject a3) throws Exception
    {
        args[0] = a1;
        args[1] = a2;
        args[2] = a3;
        return applyInner(fn, 3);
    }

    static LispObject applyn(LispObject fn, LispObject [] a) throws Exception
    {
        for (int i=0; i<a.length; i++) args[i] = a[i];
        return applyInner(fn, a.length);
    }

    static LispObject applyInner(LispObject fn, int passed) throws Exception
    {
        if (fn.atom ||
            fn.car != Jlisp.lit[Lit.lambda])
            Jlisp.error("not a function", fn);
        fn = fn.cdr;
        LispObject bvl = fn.car;
        LispObject body = fn.cdr;
        int nvars = 0, nopts = -1, nrest = -1;
// Here I need to detect and handle "&optional" and "&rest"
        LispObject b;
        for (b = bvl;
             !b.atom && 
             b.car != Jlisp.lit[Lit.optional] &&
             b.car != Jlisp.lit[Lit.rest];
             b = b.cdr) nvars++;
        if (passed < nvars) Jlisp.error("not enough args provided", bvl);
        for (;!b.atom && 
             b.car != Jlisp.lit[Lit.rest];
             b = b.cdr) nopts++;
        for (;!b.atom;b = b.cdr) nrest++;
        if (nrest > 1) Jlisp.error("may only have one &rest arg", bvl);
        if (nopts < 0) nopts = 0;
        if (nrest < 0) nrest = 0;
        int total = nvars + nopts;
        if (nrest==0 && passed > total)
            Jlisp.error("too many args provided", bvl);
// Pad so optional args get nil as their values.
        for (int i=passed; i<total; i++) args[i] = Jlisp.nil;
// collect things that go into "&rest" into a list. Adjust var count
        if (nrest != 0)
        {   LispObject r = Jlisp.nil;
            for (int i=passed-1; i>=total; i--)
                 r = new Cons(args[i], r);
            args[total++] = r;
        }
        LispObject [] save = new LispObject [total];
        nvars = 0;
        for (LispObject b1 = bvl; !b1.atom; b1 = b1.cdr)
        {   Symbol s = (Symbol)b1.car;
            if (s == Jlisp.lit[Lit.optional] ||
                s == Jlisp.lit[Lit.rest]) continue;
            save[nvars] = s.car/*value*/;
            s.car/*value*/ = args[nvars++];
        }
        LispObject r = Jlisp.nil;
        try
        {   while (!body.atom && Specfn.progEvent == Specfn.NONE)
            {   r = body.car.eval();
                body = body.cdr;
            }
        }
        finally
        {   nvars = 0;
            for (LispObject b1 = bvl; !b1.atom; b1 = b1.cdr)
            {   LispObject s = b1.car;
                if (s == Jlisp.lit[Lit.optional] ||
                    s == Jlisp.lit[Lit.rest]) continue;
                s.car/*value*/ = save[nvars++];
            }
        }
        return r;
    }

    static String explodeToString(LispObject arg1) throws Exception
    {
        LispStream f = new LispOutputString();
        LispObject save = Jlisp.lit[Lit.std_output].car/*value*/;
        try
        {   Jlisp.lit[Lit.std_output].car/*value*/ = f;
            arg1.print(LispObject.printEscape);
        }
        finally
        {   Jlisp.lit[Lit.std_output].car/*value*/ = save;
        }
        return f.sb.toString();
    }
}

// end of Fns.java


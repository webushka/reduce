% ----------------------------------------------------------------------
% $Id$
% ----------------------------------------------------------------------
% Copyright (c) 2015 M. Kosta, T. Sturm
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
   fluid '(ofsfvslists_rcsid!* ofsfvslists_copyright!*);
   ofsfvslists_rcsid!* :=
      "$Id$";
   ofsfvslists_copyright!* := "(c) 2015 M. Kosta, T. Sturm"
>>;

module ofsfvslists;

fluid '(rsl!-alist!* rsl!-alist!-clustering!* guard!-fnalist!*);

rsl!-alist!* := {
   % key: {degree, lc sign, op}
   % value: AList [al] containing elements [pr] such that [car pr] is
   % one of ['(ip ep slb wlb sub wub)] and [cdr pr] is a list of root
   % specification lists
   {1, -1, 'equal} . {
      'ip . {
	 {(-1) . 1}
	    }
	       },

   {1, nil, 'equal} . {
      'ip . {
	 {1 . 1},
      	 {(-1) . 1}
	    }
	       },

   {1, 1, 'equal} . {
      'ip . {
	 {1 . 1}
	    }
	       },

   {1, -1, 'neq} . {
      'ep  . {
	 {(-1) . 1}
	    }
	       },

   {1, nil, 'neq} . {
      'ep . {
	 {1 . 1},
      	 {(-1) . 1}
	    }
	       },

   {1, 1, 'neq} . {
      'ep . {
	 {1 . 1}
	    }
	       },

   {1, -1, 'lessp} . {
      'slb . {
	 {(-1) . 1}
	    }
	       },

   {1, nil, 'lessp} . {
      'slb . {
	 {(-1) . 1}
	    },
      'sub . {
	 {1 . 1}
	    }
	       },

   {1, 1, 'lessp} . {
      'sub . {
	 {1 . 1}
	    }
      	       },

   {1, -1, 'leq} . {
      'wlb . {
	 {(-1) . 1}
	    }
	       },

   {1, nil, 'leq} . {
      'wlb . {
      	 {(-1) . 1}
	    },
      'wub . {
	 {1 . 1}
	    }
      	       },

   {1, 1, 'leq} . {
      'wub . {
	 {1 . 1}
	    }
	       },

   {1, -1, 'geq} . {
      'wub . {
	 {(-1) . 1}
	    }
      	       },
   {1, nil, 'geq} . {
      'wlb . {
	 {1 . 1}
	    },
      'wub . {
	 {(-1) . 1}
	    }
	       },

   {1, 1, 'geq} . {
      'wlb . {
	 {1 . 1}
	    }
	       },

   {1, -1, 'greaterp} . {
      'sub . {
      	 {(-1) . 1}
	    }
      	       },

   {1, nil, 'greaterp} . {
      'slb . {
      	 {1 . 1}
	    },
      'sub . {
      	 {(-1) . 1}
	    }
	       },

   {1, 1, 'greaterp} . {
      'slb . {
      	 {1 . 1}
	    }
	       },

   {2, -1, 'equal} . {
      'ip . {
      	 {(-1) . 1},
      	 {(-1) . 2},
      	 {(-2) . 1}
	    }
	       },

   {2, nil, 'equal} . {
      'ip . {
	 {1 . 1},
      	 {1 . 2},
      	 {2 . 1},
      	 {(-1) . 1},
      	 {(-1) . 2},
      	 {(-2) . 1}
	    }
	       },

   {2, 1, 'equal} . {
      'ip . {
      	 {1 . 1},
      	 {1 . 2},
      	 {2 . 1}
	    }
	       },

   {2, -1, 'neq} . {
      'ep . {
      	 {(-1) . 1},
      	 {(-1) . 2},
      	 {(-2) . 1}
	    }
	       },

   {2, nil, 'neq} . {
      'ep . {
	 {1 . 1},
      	 {1 . 2},
      	 {2 . 1},
      	 {(-1) . 1},
      	 {(-1) . 2},
      	 {(-2) . 1}
	    }
	       },

   {2, 1, 'neq} . {
      'ep . {
      	 {1 . 1},
      	 {1 . 2},
      	 {2 . 1}
	    }
	       },

   {2, -1, 'lessp} . {
      'ep . {
	 {(-2) . 1}
	    },
      'slb . {
      	 {(-1) . 2}
	    },
      'sub . {
	 {(-1) . 1}
	    }
	       },

   {2, nil, 'lessp} . {
      'ep . {
	 {(-2) . 1}
	    },
      'slb . {
      	 {1 . 1},
	 {(-1) . 2}
	    },
      'sub . {
	 {1 . 2},
      	 {(-1) . 1}
	    }
	       },

   {2, 1, 'lessp} . {
      'slb . {
      	 {1 . 1}
	    },
      'sub . {
      	 {1 . 2}
	    }
	       },

   {2, -1, 'leq} . {
      'wlb . {
      	 {(-1) . 2}
	    },
      'wub . {
	 {(-1) . 1}
	    }
	       },

   {2, nil, 'leq} . {
      'ip . {
      	 {2 . 1}
	    },
      'wlb . {
      	 {1 . 1},
      	 {(-1) . 2}
	    },
      'wub . {
	 {1 . 2},
      	 {(-1) . 1}
	    }
	       },

   {2, 1, 'leq} . {
      'ip . {
      	 {2 . 1}
	    },
      'wlb . {
      	 {1 . 1}
	    },
      'wub . {
	 {1 . 2}
	    }
	       },

   {2, -1, 'geq} . {
      'ip . {
	 {(-2) . 1}
	    },
      'wlb . {
      	 {(-1) . 1}
	    },
      'wub . {
	 {(-1) . 2}
	    }
	       },

   {2, nil, 'geq} . {
      'ip . {
	 {(-2) . 1}
	    },
      'wlb . {
      	 {1 . 2},
      	 {(-1) . 1}
	    },
      'wub . {
	 {1 . 1},
      	 {(-1) . 2}
	    }
	       },

   {2, 1, 'geq} . {
      'wlb . {
      	 {1 . 2}
	    },
      'wub . {
	 {1 . 1}
	    }
	       },

   {2, -1, 'greaterp} . {
      'slb . {
      	 {(-1) . 1}
	    },
      'sub . {
	 {(-1) . 2}
	    }
	       },

   {2, nil, 'greaterp} . {
      'ep . {
      	 {2 . 1}
	    },
      'slb . {
      	 {1 . 2},
      	 {(-1) . 1}
	    },
      'sub . {
      	 {1 . 1},
      	 {(-1) . 2}
	    }
	       },

   {2, 1, 'greaterp} . {
      'ep . {
	 {2 . 1}
	    },
      'slb . {
      	 {1 . 2}
	    },
      'sub . {
	 {1 . 1}
	    }
	       },

   {3, -1, 'equal} . {
      'ip . {
	 {(-1) . 1},
      	 {(-2) . 1},
      	 {(-2) . 2},
      	 {(-3) . 1},
      	 {(-3) . 2},
      	 {(-4) . 1},
      	 {(-4) . 2},
      	 {(-4) . 3}
	    }
	       },

   {3, nil, 'equal} . {
      'ip . {
      	 {1 . 1},
      	 {2 . 1},
      	 {2 . 2},
      	 {3 . 1},
      	 {3 . 2},
      	 {4 . 1},
      	 {4 . 2},
      	 {4 . 3},
      	 {(-1) . 1},
      	 {(-2) . 1},
      	 {(-2) . 2},
      	 {(-3) . 1},
      	 {(-3) . 2},
      	 {(-4) . 1},
      	 {(-4) . 2},
      	 {(-4) . 3}
	    }
	       },

   {3, 1, 'equal} . {
      'ip . {
	 {1 . 1},
      	 {2 . 1},
      	 {2 . 2},
      	 {3 . 1},
      	 {3 . 2},
      	 {4 . 1},
      	 {4 . 2},
      	 {4 . 3}
	    }
	       },

   {3, -1, 'neq} . {
      'ep . {
      	 {(-1) . 1},
      	 {(-2) . 1},
      	 {(-2) . 2},
      	 {(-3) . 1},
      	 {(-3) . 2},
      	 {(-4) . 1},
      	 {(-4) . 2},
      	 {(-4) . 3}
	    }
	       },
   {3, nil, 'neq} . {
      'ep . {
      	 {1 . 1},
      	 {2 . 1},
      	 {2 . 2},
      	 {3 . 1},
      	 {3 . 2},
      	 {4 . 1},
      	 {4 . 2},
      	 {4 . 3},
      	 {(-1) . 1},
      	 {(-2) . 1},
      	 {(-2) . 2},
      	 {(-3) . 1},
      	 {(-3) . 2},
      	 {(-4) . 1},
      	 {(-4) . 2},
      	 {(-4) . 3}
	    }
	       },

   {3, 1, 'neq} . {
      'ep . {
      	 {1 . 1},
      	 {2 . 1},
      	 {2 . 2},
      	 {3 . 1},
      	 {3 . 2},
      	 {4 . 1},
      	 {4 . 2},
      	 {4 . 3}
	    }
	       },

   {3, -1, 'lessp} . {
      'ep . {
	 {(-3) . 2}
	    },
      'slb . {
      	 {(-1) . 1},
      	 {(-2) . 2},
      	 {(-3) . 1},
      	 {(-4) . 1},
      	 {(-4) . 3}
	    },
      'sub . {
	 {(-4) . 2}
	    }
	       },

   {3, nil, 'lessp} . {
      'ep . {
	 {2 . 1},
	 {(-3) . 2}
	    },
      'slb . {
      	 {4 . 2},
      	 {(-1) . 1},
      	 {(-2) . 2},
      	 {(-3) . 1},
      	 {(-4) . 1},
      	 {(-4) . 3}
	    },
      'sub . {
      	 {1 . 1},
      	 {2 . 2},
      	 {3 . 1},
      	 {4 . 1},
      	 {4 . 3},
      	 {(-4) . 2}
	    }
	       },

   {3, 1, 'lessp} . {
      'ep . {
      	 {2 . 1}
	    },
      'slb . {
      	 {4 . 2}
	    },
      'sub . {
	 {1 . 1},
      	 {2 . 2},
      	 {3 . 1},
      	 {4 . 1},
      	 {4 . 3}
	    }
	       },

   {3, -1, 'leq} . {
      'ip . {
      	 {(-2) . 1}
	    },
      'wlb . {
      	 {(-1) . 1},
      	 {(-2) . 2},
      	 {(-3) . 1},
      	 {(-4) . 1},
      	 {(-4) . 3}
	    },
      'wub . {
	 {(-4) . 2}
	    }
	       },

   {3, nil, 'leq} . {
      'ip . {
      	 {3 . 2},
      	 {(-2) . 1}
	    },
      'wlb . {
      	 {4 . 2},
      	 {(-1) . 1},
      	 {(-2) . 2},
      	 {(-3) . 1},
      	 {(-4) . 1},
      	 {(-4) . 3}
	    },
      'wub . {
	 {1 . 1},
      	 {2 . 2},
      	 {3 . 1},
      	 {4 . 1},
      	 {4 . 3},
      	 {(-4) . 2}
	    }
      	       },

   {3, 1, 'leq} . {
      'ip . {
	 {3 . 2}
	    },
      'wlb . {
      	 {4 . 2}
	    },
      'wub . {
	 {1 . 1},
      	 {2 . 2},
      	 {3 . 1},
      	 {4 . 1},
      	 {4 . 3}
	    }
	       },

   {3, -1, 'geq} . {
      'ip . {
      	 {(-3) . 2}
	    },
      'wlb . {
      	 {(-4) . 2}
	    },
      'wub . {
      	 {(-1) . 1},
      	 {(-2) . 2},
      	 {(-3) . 1},
      	 {(-4) . 1},
      	 {(-4) . 3}
	    }
      	       },

   {3, nil, 'geq} . {
      'ip . {
      	 {2 . 1},
      	 {(-3) . 2}
	    },
      'wlb . {
      	 {1 . 1},
      	 {2 . 2},
      	 {3 . 1},
      	 {4 . 1},
      	 {4 . 3},
      	 {(-4) . 2}
	    },
      'wub . {
      	 {4 . 2},
      	 {(-1) . 1},
      	 {(-2) . 2},
      	 {(-3) . 1},
      	 {(-4) . 1},
      	 {(-4) . 3}
	    }
      	       },

   {3, 1, 'geq} . {
      'ip . {
      	 {2 . 1}
	    },
      'wlb . {
      	 {1 . 1},
      	 {2 . 2},
      	 {3 . 1},
      	 {4 . 1},
      	 {4 . 3}
	    },
      'wub . {
      	 {4 . 2}
	    }
      	       },

   {3, -1, 'greaterp} . {
      'ep . {
	 {(-2) . 1}
	    },
      'slb . {
      	 {(-4) . 2}
	    },
      'sub . {
      	 {(-1) . 1},
      	 {(-2) . 2},
      	 {(-3) . 1},
      	 {(-4) . 1},
      	 {(-4) . 3}
	    }
	       },

   {3, nil, 'greaterp} . {
      'ep . {
      	 {3 . 2},
	 {(-2) . 1}
	    },
      'slb . {
      	 {1 . 1},
      	 {2 . 2},
      	 {3 . 1},
      	 {4 . 1},
      	 {4 . 3},
      	 {(-4) . 2}
	    },
      'sub . {
      	 {4 . 2},
      	 {(-1) . 1},
      	 {(-2) . 2},
      	 {(-3) . 1},
      	 {(-4) . 1},
      	 {(-4) . 3}
	    }
	       },

   {3, 1, 'greaterp} . {
      'ep . {
      	 {3 . 2}
	    },
      'slb . {
      	 {1 . 1},
      	 {2 . 2},
      	 {3 . 1},
      	 {4 . 1},
      	 {4 . 3}
	    },
      'sub . {
      	 {4 . 2}
	    }
	       }
   	    	  };

rsl!-alist!-clustering!* := {
   % key: {degree, lc sign, op}
   % value: AList [al] containing elements [pr] such that [car pr] is
   % one of ['(ip ep slb wlb sub wub)] and [cdr pr] is a list of root
   % specification lists
   {1, -1, 'equal} . {
      'ip . {
      	 {(-1) . 1}
	    }
	       },

   {1, nil, 'equal} . {
      'ip . {
	 {1 . 1, (-1) . 1}
	    }
	       },

   {1, 1, 'equal} . {
      'ip . {
	 {1 . 1}
	    }
	       },

   {1, -1, 'neq} . {
      'ep . {
	 {(-1) . 1}
	    }
	       },

   {1, nil, 'neq} . {
      'ep . {
	 {1 . 1, (-1) . 1}
	    }
	       },

   {1, 1, 'neq} . {
      'ep . {
	 {1 . 1}
	    }
	       },

   {1, -1, 'lessp} . {
      'slb . {
      	 {(-1) . 1}
	    }
	       },

   {1, nil, 'lessp} . {
      'slb . {
      	 {(-1) . 1}
	    },
      'sub . {
	 {1 . 1}
	    }
	       },

   {1, 1, 'lessp} . {
      'sub . {
	 {1 . 1}
	    }
	       },

   {1, -1, 'leq} . {
      'wlb . {
      	 {(-1) . 1}
	    }
	       },

   {1, nil, 'leq} . {
      'wlb . {
      	 {(-1) . 1}
	    },
      'wub . {
	 {1 . 1}
	    }
	       },

   {1, 1, 'leq} . {
      'wub . {
	 {1 . 1}
      	    }
	       },

   {1, -1, 'geq} . {
      'wub . {
      	 {(-1) . 1}
	    }
      	       },

   {1, nil, 'geq} . {
      'wlb . {
	 {1 . 1}
	    },
      'wub . {
      	 {(-1) . 1}
	    }
	       },

   {1, 1, 'geq} . {
      'wlb . {
	 {1 . 1}
	    }
	       },

   {1, -1, 'greaterp} . {
      'sub . {
      	 {(-1) . 1}
	    }
	       },

   {1, nil, 'greaterp} . {
      'slb . {
	 {1 . 1}
	    },
      'sub . {
      	 {(-1) . 1}
	    }
	       },

   {1, 1, 'greaterp} . {
      'slb . {
	 {1 . 1}
	    }
	       },

   {2, -1, 'equal} . {
      'ip . {
	 {(-1) . 2, (-2) . 1},
      	 {(-1) . 1, (-2) . 1}
	    }
	       },

   {2, nil, 'equal} . {
      'ip . {
	 {1 . 1, 2 . 1, (-1) . 2, (-2) . 1},
      	 {1 . 2, 2 . 1, (-1) . 1, (-2) . 1}
	    }
	       },

   {2, 1, 'equal} . {
      'ip . {
      	 {1 . 1, 2 . 1},
      	 {1 . 2, 2 . 1}
	    }
	       },

   {2, -1, 'neq} . {
      'ep . {
	 {(-1) . 2, (-2) . 1},
      	 {(-1) . 1, (-2) . 1}
	    }
	       },

   {2, nil, 'neq} . {
      'ep . {
      	 {1 . 1, 2 . 1, (-1) . 2, (-2) . 1},
      	 {1 . 2, 2 . 1, (-1) . 1, (-2) . 1}
	    }
	       },

   {2, 1, 'neq} . {
      'ep . {
      	 {1 . 1, 2 . 1},
      	 {1 . 2, 2 . 1}
	    }
	       },

   {2, -1, 'lessp} . {
      'slb . {
	 {(-1) . 2, (-2) . 1}
	    },
      'sub . {
	 {(-1) . 1, (-2) . 1}
	    }
	       },

   {2, nil, 'lessp} . {
      'slb . {
      	 {1 . 1, 2 . 1, (-1) . 2, (-2) . 1}
	    },
      'sub . {
	 {1 . 2, 2 . 1, (-1) . 1, (-2) . 1}
	    }
	       },

   {2, 1, 'lessp} . {
      'slb . {
      	 {1 . 1, 2 . 1}
	    },
      'sub . {
	 {1 . 2, 2 . 1}
	    }
	       },

   {2, -1, 'leq} . {
      'wlb . {
	 {(-1) . 2, (-2) . 1}
	    },
      'wub . {
	 {(-1) . 1, (-2) . 1}
	    }
	       },

   {2, nil, 'leq} . {
      'wlb . {
      	 {1 . 1, 2 . 1, (-1) . 2, (-2) . 1}
	    },
      'wub . {
	 {1 . 2, 2 . 1, (-1) . 1, (-2) . 1}
	    }
      	       },

   {2, 1, 'leq} . {
      'wlb . {
	 {1 . 1, 2 . 1}
	    },
      'wub . {
	 {1 . 2, 2 . 1}
	    }
	       },

   {2, -1, 'geq} . {
      'wlb . {
	 {(-1) . 1, (-2) . 1}
	    },
      'wub . {
	 {(-1) . 2, (-2) . 1}
	    }
	       },

   {2, nil, 'geq} . {
      'wlb . {
	 {1 . 2, 2 . 1, (-1) . 1, (-2) . 1}
	    },
      'wub . {
	 {1 . 1, 2 . 1, (-1) . 2, (-2) . 1}
	    }
	       },

   {2, 1, 'geq} . {
      'wlb . {
	 {1 . 2, 2 . 1}
	    },
      'wub . {
	 {1 . 1, 2 . 1}
	    }
	       },

   {2, -1, 'greaterp} . {
      'slb . {
	 {(-1) . 1, (-2) . 1}
	    },
      'sub . {
	 {(-1) . 2, (-2) . 1}
	    }
	       },

   {2, nil, 'greaterp} . {
      'slb . {
	 {1 . 2, 2 . 1, (-1) . 1, (-2) . 1}
	    },
      'sub . {
	 {1 . 1, 2 . 1, (-1) . 2, (-2) . 1}
	    }
      	       },

   {2, 1, 'greaterp} . {
      'slb . {
	 {1 . 2, 2 . 1}
	    },
      'sub . {
	 {1 . 1, 2 . 1}
	    }
	       },

   {3, -1, 'equal} . {
      'ip . {
	 {(-1) . 1},
      	 {(-2) . 1, (-3) . 1, (-4) . 1},
      	 {(-2) . 1, (-3) . 2, (-4) . 2},
      	 {(-2) . 2, (-3) . 2, (-4) . 3}
	    }
	       },

   {3, nil, 'equal} . {
      'ip . {
	 {1 . 1},
      	 {2 . 1, 3 . 1, 4 . 1},
      	 {2 . 1, 3 . 2, 4 . 2},
      	 {2 . 2, 3 . 2, 4 . 3},
      	 {(-1) . 1},
      	 {(-2) . 1, (-3) . 1, (-4) . 1},
      	 {(-2) . 1, (-3) . 2, (-4) . 2},
      	 {(-2) . 2, (-3) . 2, (-4) . 3}
	    }
	       },

   {3, 1, 'equal} . {
      'ip . {
	 {1 . 1},
      	 {2 . 1, 3 . 1, 4 . 1},
      	 {2 . 1, 3 . 2, 4 . 2},
      	 {2 . 2, 3 . 2, 4 . 3}
      	    }
	       },

   {3, -1, 'neq} . {
      'ep . {
	 {(-1) . 1},
      	 {(-2) . 1, (-3) . 1, (-4) . 1},
      	 {(-2) . 1, (-3) . 2, (-4) . 2},
      	 {(-2) . 2, (-3) . 2, (-4) . 3}
	    }
	       },

   {3, nil, 'neq} . {
      'ep . {
	 {1 . 1},
      	 {2 . 1, 3 . 1, 4 . 1},
      	 {2 . 1, 3 . 2, 4 . 2},
      	 {2 . 2, 3 . 2, 4 . 3},
      	 {(-1) . 1},
      	 {(-2) . 1, (-3) . 1, (-4) . 1},
      	 {(-2) . 1, (-3) . 2, (-4) . 2},
      	 {(-2) . 2, (-3) . 2, (-4) . 3}
	    }
	       },

   {3, 1, 'neq} . {
      'ep . {
	 {1 . 1},
      	 {2 . 1, 3 . 1, 4 . 1},
      	 {2 . 1, 3 . 2, 4 . 2},
      	 {2 . 2, 3 . 2, 4 . 3}
      	    }
	       },

   {3, -1, 'lessp} . {
      'slb . {
	 {(-1) . 1},
      	 {(-2) . 1, (-3) . 1, (-4) . 1},
      	 {(-2) . 2, (-3) . 2, (-4) . 3}
	    },
      'sub . {
	 {(-2) . 1, (-3) . 2, (-4) . 2}
	    }
	       },

   {3, nil, 'lessp} . {
      'slb . {
	 {2 . 1, 3 . 2, 4 . 2},
      	 {(-1) . 1},
      	 {(-2) . 1, (-3) . 1, (-4) . 1},
      	 {(-2) . 2, (-3) . 2, (-4) . 3}
	    },
      'sub . {
      	 {1 . 1},
      	 {2 . 1, 3 . 1, 4 . 1},
      	 {2 . 2, 3 . 2, 4 . 3},
      	 {(-2) . 1, (-3) . 2, (-4) . 2}
	    }
	       },

   {3, 1, 'lessp} . {
      'slb . {
	 {2 . 1, 3 . 2, 4 . 2}
	    },
      'sub . {
	 {1 . 1},
      	 {2 . 1, 3 . 1, 4 . 1},
      	 {2 . 2, 3 . 2, 4 . 3}
	    }
      	       },

   {3, -1, 'leq} . {
      'wlb . {
	 {(-1) . 1},
      	 {(-2) . 1, (-3) . 1, (-4) . 1},
      	 {(-2) . 2, (-3) . 2, (-4) . 3}
	    },
      'wub . {
	 {(-2) . 1, (-3) . 2, (-4) . 2}
	    }
	       },

   {3, nil, 'leq} . {
      'wlb . {
      	 {2 . 1, 3 . 2, 4 . 2},
      	 {(-1) . 1},
      	 {(-2) . 1, (-3) . 1, (-4) . 1},
      	 {(-2) . 2, (-3) . 2, (-4) . 3}
	    },
      'wub . {
	 {1 . 1},
      	 {2 . 1, 3 . 1, 4 . 1},
      	 {2 . 2, 3 . 2, 4 . 3},
      	 {(-2) . 1, (-3) . 2, (-4) . 2}
	    }
	       },

   {3, 1, 'leq} . {
      'wlb . {
	 {2 . 1, 3 . 2, 4 . 2}
	    },
      'wub . {
	 {1 . 1},
      	 {2 . 1, 3 . 1, 4 . 1},
      	 {2 . 2, 3 . 2, 4 . 3}
	    }
	       },

   {3, -1, 'geq} . {
      'wlb . {
	 {(-2) . 1, (-3) . 2, (-4) . 2}
      	    },
      'wub . {
	 {(-1) . 1},
      	 {(-2) . 1, (-3) . 1, (-4) . 1},
      	 {(-2) . 2, (-3) . 2, (-4) . 3}
	    }
	       },

   {3, nil, 'geq} . {
      'wlb . {
	 {1 . 1},
      	 {2 . 1, 3 . 1, 4 . 1},
      	 {2 . 2, 3 . 2, 4 . 3},
      	 {(-2) . 1, (-3) . 2, (-4) . 2}
   	    },
      'wub . {
	 {2 . 1, 3 . 2, 4 . 2},
      	 {(-1) . 1},
      	 {(-2) . 1, (-3) . 1, (-4) . 1},
      	 {(-2) . 2, (-3) . 2, (-4) . 3}
	    }
	       },

   {3, 1, 'geq} . {
      'wlb . {
	 {1 . 1},
      	 {2 . 1, 3 . 1, 4 . 1},
      	 {2 . 2, 3 . 2, 4 . 3}
      	    },
      'wub . {
	 {2 . 1, 3 . 2, 4 . 2}
	    }
	       },

   {3, -1, 'greaterp} . {
      'wlb . {
	 {(-2) . 1, (-3) . 2, (-4) . 2}
      	    },
      'wub . {
	 {(-1) . 1},
	 {(-2) . 1, (-3) . 1, (-4) . 1},
      	 {(-2) . 2, (-3) . 2, (-4) . 3}
	    }
	       },

   {3, nil, 'greaterp} . {
      'wlb . {
	 {1 . 1},
      	 {2 . 1, 3 . 1, 4 . 1},
      	 {2 . 2, 3 . 2, 4 . 3},
      	 {(-2) . 1, (-3) . 2, (-4) . 2}
   	    },
      'wub . {
	 {2 . 1, 3 . 2, 4 . 2},
      	 {(-1) . 1},
      	 {(-2) . 1, (-3) . 1, (-4) . 1},
      	 {(-2) . 2, (-3) . 2, (-4) . 3}
	    }
	       },

   {3, 1, 'greaterp} . {
      'wlb . {
	 {1 . 1},
      	 {2 . 1, 3 . 1, 4 . 1},
      	 {2 . 2, 3 . 2, 4 . 3}
      	    },
      'wub . {
	 {2 . 1, 3 . 2, 4 . 2}
	    }
	       }
   		  };

guard!-fnalist!* := {
   % key: {degree, rtl}
   % value: guard constructing function
   {1, '(-1)} . 'guard1!-1,
   {1, '(1)} . 'guard1!-2,
   {1, '(-1 1)} . 'guard1!-3
   };

ofsfform procedure guard1!-1(a, b);
   a < 0;

ofsfform procedure guard1!-2(a, b);
   a > 0;

ofsfform procedure guard1!-3(a, b);
   a <> 0;

asserted procedure rsl!-compute(d: Integer, s: Any, op: Id): Any;
   % Root specification list compute. [d] is the degree, [s] is the
   % sign of the leading coefficient, [op] is the operation. Returns
   % either ['fail] or an AList [al] containing elements [pr] such
   % that [car pr] is one of ['(ip ep slb wlb sub wub)] and [cdr pr]
   % is a list of root specification lists.
   begin scalar w;
      w := assoc({d, s, op}, rsl!-alist!*);
      if null w then
	 return 'failed;
      return cdr w
   end;

asserted procedure rsl!-compute!-clustering(d: Integer, s: Any, op: Id): Any;
   % Root specification list compute, the clustering variant. [d] is
   % the degree, [s] is the sign of the leading coefficient, [op] is
   % the operation. Returns either ['fail] or an AList [al] containing
   % elements [pr] such that [car pr] is one of ['(ip ep slb wlb sub
   % wub)] and [cdr pr] is a list of root specification lists.
   begin scalar w;
      w := assoc({d, s, op}, rsl!-alist!-clustering!*);
      if null w then
	 return 'failed;
      return cdr w
   end;

asserted procedure rsl!-guard(f: SF, x: Kernel, rtl: List): QfFormula;
   % Root specification list guard. [f] is a SF; [x] is [mvar f];
   % [rtl] is a list of real types of [f].
   begin scalar w, fn;
      assert(mvar f eq x);
      rtl := sort(rtl, function(lambda(a, b); a < b));
      w := assoc({ldeg f, rtl}, guard!-fnalist!*);
      if null w then
	 return 'failed;
      fn := cdr w;
      return apply(fn, coeffs f)
   end;

endmodule;  % [ofsfvslists]

end;  % of file

/* ---------------------------------------------------------------------
   $Id$
   ---------------------------------------------------------------------
   Copyright (c) 2008-2009 Thomas Sturm
   ---------------------------------------------------------------------
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:

      * Redistributions of source code must retain the relevant
        copyright notice, this list of conditions and the following
        disclaimer.
      * Redistributions in binary form must reproduce the above
        copyright notice, this list of conditions and the following
        disclaimer in the documentation and/or other materials provided
        with the distribution.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   OWNERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

struct oRedProc {
  // The PID of this RedProc:
  pid_t processId;

  // A socketpair for talking to REDUCE:
  int meToReduce[2];

  // A socketpair for listening to REDUCE:
  int reduceToMe[2];

  // A detailed protocol file used only with "configure
  // --enable-debug:"
  FILE *rlgFile;
};

typedef struct oRedProc *RedProc;

struct oRedAns {
  // The prompt number with which this RedAns has been obtained. This
  // can be used e.g. with "ws;":
  int statcounter;

  // Nonzero if this RedAns has been computed in symbolic mode:
  int symbolic;

  // Text printed by REDUCE before the evaluation result. This should
  // contain everything explicitly printed by REDUCE code:
  char *pretext;

  // The evaluation result as printed by the procedures lr_sprint(u)
  // or lr_aprint(u) (for symbolic mode or algebraic mode, resp.) in
  // libreduce.red. They are defined as "prin2 u" and "prin2 reval u",
  // resp., where the idea is that the application could redefine
  // them:
  char *result;

  // Text printed by REDUCE after the evaluation result but before the
  // next prompt. I expect this to be exactly the output generated by
  // "on time", which is switched on in libreduce.red.
  char *posttext;

  // The prompt for the next computation:
  char *nextprompt;

  // The computation time and gc time for this RedAns in ms as an
  // integer. This is why libreduce.red says "on time."
  int time;
  int gctime;

  // A flag indicating a REDUCE error when computing this RedAns.
  // Since there is no evaluation result in case of an error, ALL
  // REDUCE output including the "on time" information then go into
  // the pretext field. Besides this, only the nextprompt field
  // contains a meaningful value. When passing an incomplete line to
  // RedAns_new() there occurs an error in the sense discussed here.
  // Anyway, sending the remainder of the line via another
  // RedAns_new() then leads to a correct computation.
  int error;
};

typedef struct oRedAns *RedAns;

RedProc RedProc_new(const char *reduce);

void RedProc_delete(RedProc process);

void RedProc_error(RedProc process,const char *command,RedAns answer);

void RedProc_cfprint(FILE *stream,RedProc process);

RedAns RedAns_new(RedProc process,const char *command);

void RedAns_delete(RedAns answer);

void RedAns_cfprint(FILE *stream,RedAns ans);

/* The following definitions are for backward-compatibility only */
#define reduce_init RedProc_new
#define reduce_finish RedProc_delete
#define reduce_command RedAns_new

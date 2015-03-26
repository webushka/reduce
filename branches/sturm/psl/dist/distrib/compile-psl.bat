@echo off

call %pxdist%\make-lap.bat %pxk% fasl-decls
call %pxdist%\make-lap.bat %pu% f-strings
call %pxdist%\make-lap.bat %pu% if-system
call %pxdist%\make-lap.bat %pu% fast-vector
call %pxdist%\make-lap.bat %pxk% hash-decls
call %pxdist%\make-lap.bat %pu% s-strings
call %pxdist%\make-lap.bat %pxc% sys-consts
call %pxdist%\make-pnk-lap.bat %pxnk% dumplisp
call %pxdist%\make-pnk-lap.bat %pxnk% copying-gc
call %pxdist%\make-pnk-lap.bat %pxnk% funct-prims
call %pxdist%\make-pnk-lap.bat %pxnk% io-decls
call %pxdist%\make-lap.bat %pu% sys-macros
call %pxdist%\make-pnk-lap.bat %pxnk% io-data
call %pxdist%\make-pnk-lap.bat %pxnk% lap
call %pxdist%\make-pnk-lap.bat %pxnk% load-psl
call %pxdist%\make-pnk-lap.bat %pxnk% putd-getd
call %pxdist%\make-pnk-lap.bat %pxnk% arithmetic
call %pxdist%\make-pnk-lap.bat %pxnk% backtrace
call %pxdist%\make-pnk-lap.bat %pnk% token-decls
call %pxdist%\make-pnk-lap.bat %pxnk% printf
call %pxdist%\make-pnk-lap.bat %pxnk% fixup
call %pxdist%\make-pnk-lap.bat %pxnk% allocators
call %pxdist%\make-pnk-lap.bat %pxnk% binding
call %pxdist%\make-pnk-lap.bat %pxnk% 386-ext
call %pxdist%\make-pnk-lap.bat %pxnk% scan-table
call %pxdist%\make-pnk-lap.bat %pxnk% sys-date
call %pxdist%\make-pnk-lap.bat %pxnk% sys-extras
call %pxdist%\make-pnk-lap.bat %pxnk% sys-faslin
call %pxdist%\make-pnk-lap.bat %pxnk% sys-gc
call %pxdist%\make-pnk-lap.bat %pxnk% sys-io
call %pxdist%\make-pnk-lap.bat %pxnk% static-gc
call %pxdist%\make-pnk-lap.bat %pxnk% timc
call %pxdist%\make-pnk-lap.bat %pxnk% trap
call %pxdist%\make-pnk-lap.bat %pxnk% write-float
call %pxdist%\make-pnk-lap.bat %pxnk% wfloat
call %pxdist%\make-pnk-lap.bat %pnk% apply-lap
call %pxdist%\make-pnk-lap.bat %pnk% autoload-tr
call %pxdist%\make-pnk-lap.bat %pnk% autoload
call %pxdist%\make-pnk-lap.bat %pnk% base-io
call %pxdist%\make-pnk-lap.bat %pnk% break
call %pxdist%\make-pnk-lap.bat %pnk% carcdr
call %pxdist%\make-pnk-lap.bat %pnk% catch-throw
call %pxdist%\make-pnk-lap.bat %pnk% char-io
call %pxdist%\make-pnk-lap.bat %pnk% compsupport
call %pxdist%\make-pnk-lap.bat %pnk% cons-mkvect
call %pxdist%\make-pnk-lap.bat %pnk% constants
call %pxdist%\make-pnk-lap.bat %pnk% cont-error
call %pxdist%\make-pnk-lap.bat %pnk% copiers
call %pxdist%\make-pnk-lap.bat %pnk% def-smacro
call %pxdist%\make-pnk-lap.bat %pnk% defconst
call %pxdist%\make-pnk-lap.bat %pnk% dskin
call %pxdist%\make-pnk-lap.bat %pnk% easy-non-sl
call %pxdist%\make-lap.bat %pu% backquote
call %pxdist%\make-lap.bat %pu% read1macros
call %pxdist%\make-lap.bat %pu% char-macro
call %pxdist%\make-lap.bat %pu% read2macros
call %pxdist%\make-lap.bat %pu% read-macros
call %pxdist%\make-lap.bat %pu% defmacro1
call %pxdist%\make-lap.bat %pu% defmacro2
call %pxdist%\make-lap.bat %pu% defmacro
call %pxdist%\make-lap.bat %pu% cond-macros
call %pxdist%\make-lap.bat %pu% bind-macros
call %pxdist%\make-lap.bat %pu% set1-macros
call %pxdist%\make-lap.bat %pu% set2-macros
call %pxdist%\make-lap.bat %pu% set-macros
call %pxdist%\make-lap.bat %pu% iter-macros
call %pxdist%\make-lap.bat %pu% for-macro
call %pxdist%\make-lap.bat %pu% misc-macros
call %pxdist%\make-lap.bat %pu% macroexpand
call %pxdist%\make-lap.bat %pu% useful
call %pxdist%\make-pnk-lap.bat %pnk% easy-sl
call %pxdist%\make-pnk-lap.bat %pnk% environment
call %pxdist%\make-pnk-lap.bat %pnk% equal
call %pxdist%\make-pnk-lap.bat %pnk% error-eset
call %pxdist%\make-pnk-lap.bat %pnk% error-hand
call %pxdist%\make-pnk-lap.bat %pnk% eval-apply
call %pxdist%\make-pnk-lap.bat %pnk% eval-when
call %pxdist%\make-pnk-lap.bat %pnk% explode-com
call %pxdist%\make-pnk-lap.bat %pnk% fluid-globl
call %pxdist%\make-pnk-lap.bat %pnk% io-errors
call %pxdist%\make-pnk-lap.bat %pnk% io-extens
call %pxdist%\make-pnk-lap.bat %pnk% knowntocomp
call %pxdist%\make-pnk-lap.bat %pnk% lisp-macros
call %pxdist%\make-pnk-lap.bat %pnk% load
call %pxdist%\make-pnk-lap.bat %pnk% loop-macros
call %pxdist%\make-pnk-lap.bat %pnk% oblist
call %pxdist%\make-pnk-lap.bat %pnk% onoff
call %pxdist%\make-pnk-lap.bat %pnk% open-close
call %pxdist%\make-pnk-lap.bat %pnk% other-io
call %pxdist%\make-pnk-lap.bat %pnk% others-sl
call %pxdist%\make-pnk-lap.bat %pnk% printers
call %pxdist%\make-pnk-lap.bat %pnk% prog-friend
call %pxdist%\make-pnk-lap.bat %pnk% prop-list
call %pxdist%\make-pnk-lap.bat %pnk% rds-wrs
call %pxdist%\make-pnk-lap.bat %pnk% read
call %pxdist%\make-pnk-lap.bat %pnk% sequence
call %pxdist%\make-pnk-lap.bat %pnk% sets
call %pxdist%\make-pnk-lap.bat %pnk% string-gen
call %pxdist%\make-pnk-lap.bat %pnk% symbol-vals
call %pxdist%\make-pnk-lap.bat %pnk% token-scan
call %pxdist%\make-pnk-lap.bat %pnk% top-loop
call %pxdist%\make-pnk-lap.bat %pnk% type-conver
call %pxdist%\make-pnk-lap.bat %pnk% type-error
call %pxdist%\make-pnk-lap.bat %pnk% vectors
call %pxdist%\make-lap.bat %pxu% fc-indirect
call %pxdist%\make-lap.bat %pxu% get-options
call %pxdist%\make-lap.bat %pxu% l2cdatacon
call %pxdist%\make-lap.bat %pu% c-template
call %pxdist%\make-lap.bat %pu% rlispparser
call %pxdist%\make-lap.bat %pu% rlisp-sup
call %pxdist%\make-lap.bat %pu% rlisp
call %pxdist%\make-lap.bat %pu% inum
call %pxdist%\make-lap.bat %pxu% helferlein
call %pxdist%\make-lap.bat %pxu% symget
call %pxdist%\make-lap.bat %pxu% nbig30
call %pxdist%\make-lap.bat %pxu% vfvect
call %pxdist%\make-lap.bat %pxc% muls
call %pxdist%\make-lap.bat %pxu% double
call %pxdist%\make-lap.bat %pxu% nbig30a
call %pxdist%\make-lap.bat %pxu% nbig32
call %pxdist%\make-lap.bat %pxu% muls32
call %pxdist%\make-lap.bat %pxu% double32
call %pxdist%\make-lap.bat %pxu% nbig32a
call %pxdist%\make-lap.bat %pxu% mbarith
call %pxdist%\make-lap.bat %pxu% qualified-timing
call %pxdist%\make-lap.bat %pxu% spy
call %pxdist%\make-lap.bat %pxu% disassemble
call %pxdist%\make-lap.bat %pxu% compat
call %pxdist%\make-lap.bat %pu% addr2id
call %pxdist%\make-lap.bat %pu% association
call %pxdist%\make-lap.bat %pu% big
call %pxdist%\make-lap.bat %pu% build
call %pxdist%\make-lap.bat %pu% numeric-ops
call %pxdist%\make-lap.bat %pu% common
call %pxdist%\make-lap.bat %pu% clcomp1
call %pxdist%\make-lap.bat %pu% clcomp
call %pxdist%\make-lap.bat %pu% chars
call %pxdist%\make-lap.bat %pu% debug
call %pxdist%\make-lap.bat %pu% if
call %pxdist%\make-lap.bat %pu% gsort
call %pxdist%\make-lap.bat %pu% obj-const
call %pxdist%\make-lap.bat %pu% s-vectors
call %pxdist%\make-lap.bat %pu% f-vectors
call %pxdist%\make-lap.bat %pu% f-evectors
call %pxdist%\make-lap.bat %pu% strings
call %pxdist%\make-lap.bat %pu% obj-dflavor
call %pxdist%\make-lap.bat %pu% obj-dmethod
call %pxdist%\make-lap.bat %pu% obj-hash
call %pxdist%\make-lap.bat %pu% objinstance
call %pxdist%\make-lap.bat %pu% obj-lib
call %pxdist%\make-lap.bat %pu% obj-send
call %pxdist%\make-lap.bat %pu% objects
call %pxdist%\make-lap.bat %pu% defobject
call %pxdist%\make-lap.bat %pu% evalhook
call %pxdist%\make-lap.bat %pu% fast-chars
call %pxdist%\make-lap.bat %pu% fast-int
call %pxdist%\make-lap.bat %pu% pipes
call %pxdist%\make-lap.bat %pu% fast-math
call %pxdist%\make-lap.bat %pu% fcomp
call %pxdist%\make-lap.bat %pu% find
call %pxdist%\make-lap.bat %pu% hcons
call %pxdist%\make-lap.bat %pu% init-file
call %pxdist%\make-lap.bat %pu% mathlib
call %pxdist%\make-lap.bat %pu% merge-sort
call %pxdist%\make-lap.bat %pu% mstruct
call %pxdist%\make-lap.bat %pc% comasm
call %pxdist%\make-lap.bat %pu% nbarith
call %pxdist%\make-lap.bat %pu% nbig0
call %pxdist%\make-lap.bat %pu% vector-fix
call %pxdist%\make-lap.bat %pu% nbig
call %pxdist%\make-lap.bat %pu% pp
call %pxdist%\make-lap.bat %pu% pp-file
call %pxdist%\make-lap.bat %pu% pp-lisp
call %pxdist%\make-lap.bat %pu% pvm
call %pxdist%\make-lap.bat %pu% read-utils
call %pxdist%\make-lap.bat %pu% rprint
call %pxdist%\make-lap.bat %pu% shmem
call %pxdist%\make-lap.bat %pu% step
call %pxdist%\make-lap.bat %pu% str-input
call %pxdist%\make-lap.bat %pu% str-search
call %pxdist%\make-lap.bat %pu% syslisp-syn
call %pxdist%\make-lap.bat %pxc% tags
call %pxdist%\make-lap.bat %pxc% sys-dm
call %pxdist%\make-lap.bat %pc% datamachine
call %pxdist%\make-lap.bat %pu% syslisp
call %pxdist%\make-lap.bat %pu% un-rlisp
call %pxdist%\make-lap.bat %pu% wdeclare
call %pxdist%\make-lap.bat %pxc% mingw-w64-asm
call %pxdist%\make-lap.bat %pxc% mingw-w64-cmac
call %pxdist%\make-lap.bat %pxc% mingw-w64-comp
call %pxdist%\make-lap.bat %pxc% mingw-w64-lap
call %pxdist%\make-lap.bat %pxc% lap-to-asm
call %pxdist%\make-lap.bat %pxc% nbittab
call %pxdist%\make-lap.bat %pxc% carcdrnil
call %pxdist%\make-lap.bat %pxc% compiler
call %pxdist%\make-lap.bat %pxc% comp-decls
call %pxdist%\make-lap.bat %pxc% mingw-w64-spec
call %pxdist%\make-lap.bat %pc% big-faslend
call %pxdist%\make-lap.bat %pc% faslout
call %pxdist%\make-lap.bat %pc% p1-decls
call %pxdist%\make-lap.bat %pc% pass-1
call %pxdist%\make-lap.bat %pc% pass-1-lap
call %pxdist%\make-lap.bat %pc% pass-2-3
call %pxdist%\make-lap.bat %pc% putprint
call %pxdist%\make-lap.bat %pc% pslcomp

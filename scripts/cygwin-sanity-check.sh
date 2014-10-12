#! /bin/bash

# This little script is intended to check if all the cygwin
# packages that you need in order to build the CSL version of
# Reduce are present. The list of packages here is short
# because many others will automatically be selected by the cygwin
# setup program as prerequisites for these ones. The list here was
# prepared and checked in  October 2014. Changes in cygwin could make
# it obsolete at some stage, but even then it should help to provide
# a starting point.
#


#
# In October 2014 I believe that if I run under cygwin32 I can build
# binaries for i686-pc-cygwin, i686-pc-windows, x86_64-pc-cygwin
# and x86_64-pc-windows. If I am running on top of a 64-bit version of
# Windows I can create the Reduce image files using any of these apart
# from x86_64-pc-cygwin. If I am running on a 32-bit release of Windows
# then (obviously) I can only create 32-bit image files - however those
# should be directly usable with the 64-bit binaries.
#
# If I am under cygwin64 then I can build for i686-pc-windows,
# x86_64-pc-cygwin and x86_64-pc-windows, but cygwin64 does not (at the
# date mentioned) provide libXft-dev or fontconfig-dev packages in a
# form that supports cross compilation to cygwin32. The effect of that is
# that I can not build the i686-pc-cygwin version there. It would potentially
# be possible to build and install private versions of those libraries, but
# that feels excessive. It is probably better to work on the basis that
# cross compilation between the 32- and 64-bit cygwin environments is
# sufficiently infrequently done in the general cygwin community that it
# is not likely to be a high support priority there... so even when it
# is possible to cross-build it will be safer to install both the 32- and
# 64-bit systems and use each for building its own version of Reduce.
#
# This script detects which cygwin version it is run under and proposes
# packages to install such that when their dependencies are also installed
# things should be OK. The set of packages here will suffice for the
# default versions of Reduce. The "--with-wx" experimental/development
# option would require more. Some users wil also wish to install the
# editor of their choice and other convenience tools, and those who wish
# to re-build the manual will need LaTeX...

case `uname -m` in
i686)
    for m in automake bc bison cygwin64-gcc-g++ cygwin64-libXext \
        cygwin64-libXft cygwin64-ncurses gcc-g++ libncurses-devel \
        libXext-devel libXft-devel make mingw64-i686-gcc-g++ \
        mingw64-x86_64-gcc-g++ openssh subversion time
    do
      if cygcheck -c -d $m | grep $m > /dev/null
      then
        echo "Good: $m is installed"
      else
        echo "To build Reduce you should install $m"
      fi
    done
    ;;
x86_64)
    for m in automake bc bison cygwin32-gcc-g++ \
        cygwin32-ncurses gcc-g++ libncurses-devel \
        libXext-devel libXft-devel make mingw64-i686-gcc-g++ \
        mingw64-x86_64-gcc-g++ openssh subversion time
    do
      if cygcheck -c -d $m | grep $m > /dev/null
      then
        echo "Good: $m is installed"
      else
        echo "To build Reduce you should install $m"
      fi
    done
    ;;
*)
    echo Architecture `uname -m` not recognised
    ;;
esac

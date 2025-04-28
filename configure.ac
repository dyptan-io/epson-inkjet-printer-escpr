## Configure.ac -- an automake template for a Makefile.in file
## EPSON ESC/P-R Printer Driver for Linux
## Copyright (C) Seiko Epson Corporation 2000-2017.
##  This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 2 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA.

AC_PREREQ([2.71])
AC_INIT([Epson Inkjet Printer Driver (ESC/P-R) for Linux],[1.8.6],[Seiko Epson Corporation <linux-printer@epson.jp>],[epson-inkjet-printer-escpr])
dnl  keep ALL versioning info in one location
AC_SUBST(PACKAGE_RELEASE, [1])
AC_SUBST(LSB_VER, [3.2])
AC_SUBST(VENDOR_NAME, ["Seiko Epson Corporation"])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_SRCDIR(src/filter.c)
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([gnu 1.7])

dnl Checks for programs.
AC_PROG_CC
AC_C_CONST
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
LT_INIT
AM_PROG_CC_C_O

dnl Checks for argments.
AC_CHECK_PROG([have_cups_config], [cups-config], [yes], [no])

if test "xNONE" != "x${prefix}" ; then
   cups_default_prefix="${prefix}"
else
   cups_default_prefix="${ac_default_prefix}"
fi

AC_ARG_WITH([cupsfilterdir],
  [AS_HELP_STRING([--with-cupsfilterdir=DIR],
        [CUPS binary directory, where filters are stored.])],
  [],
  [with_cupsfilterdir=no])
if test "xno" = "x${with_cupsfilterdir}"; then
   if test "xyes" = "x$have_cups_config" ; then
      dnl `@<:@' , `@:>@' are replaced with  `[' , `]'
      CUPS_FILTER_DIR="${cups_default_prefix}`cups-config --serverbin | sed -e 's,^/@<:@^/@:>@@<:@^/@:>@*,,'`/filter"
   else
      CUPS_FILTER_DIR="${cups_default_prefix}/lib/cups/filter"
   fi
else
   CUPS_FILTER_DIR="${with_cupsfilterdir}"
fi

AC_ARG_WITH([cupsppddir],
  [AS_HELP_STRING([--with-cupsppddir=DIR],
        [CUPS ppd directory])],
  [],
  [with_cupsppddir=no])
if test "xno" = "x${with_cupsppddir}"; then
   if test -d "${cups_default_prefix}/share/ppd" ; then
      CUPS_PPD_DIR="${cups_default_prefix}/share/ppd"
   elif test "xyes" = "x$have_cups_config" ; then
      dnl `@<:@' , `@:>@' are replaced with  `[' , `]'
      CUPS_PPD_DIR="${cups_default_prefix}`cups-config --datadir | sed -e 's,^/@<:@^/@:>@@<:@^/@:>@*,,'`/model"
   else
      CUPS_PPD_DIR="${cups_default_prefix}/share/cups/model"
   fi
else
   CUPS_PPD_DIR="${with_cupsppddir}"
fi

AC_SUBST(CUPS_FILTER_DIR)
AC_SUBST(CUPS_PPD_DIR)


AC_ARG_ENABLE(lsb,
  [AS_HELP_STRING(
     [--enable-lsb],
     [Turn on lsb build environment])],
  [case "${enableval}" in
    yes) lsb=true ;;
    no)  lsb=false ;;
    *) AC_MSG_ERROR(bad value ${enableval} for --enable-lsb) ;;
  esac],[lsb=true])
AM_CONDITIONAL(LSB, test x$lsb = xtrue)

AC_ARG_WITH([internal],
  [AS_HELP_STRING([--with-internal=subdir],[Turn on internal ppd])],
  [INTERNAL_PPD=$withval
   INTERNAL_PPD_OPTION=--with-internal=$withval
   automake $INTERNAL_PPD/Makefile
   AC_CONFIG_FILES([$INTERNAL_PPD/Makefile])],
  [])
AC_SUBST([INTERNAL_PPD])
AC_SUBST([INTERNAL_PPD_OPTION])

dnl Checks for header files.
m4_warn([obsolete],
[The preprocessor macro `STDC_HEADERS' is obsolete.
  Except in unusual embedded environments, you can safely include all
  ISO C90 headers unconditionally.])dnl
# Autoupdate added the next two lines to ensure that your configure
# script's behavior did not change.  They are probably safe to remove.
AC_CHECK_INCLUDES_DEFAULT
AC_PROG_EGREP

AC_HEADER_STAT
m4_warn([obsolete],
[Update your code to rely only on HAVE_SYS_TIME_H,
then remove this warning and the obsolete code below it.
All current systems provide time.h; it need not be checked for.
Not all systems provide sys/time.h, but those that do, all allow
you to include it and time.h simultaneously.])dnl
AC_CHECK_HEADERS_ONCE([sys/time.h])
# Obsolete code to be removed.
if test $ac_cv_header_sys_time_h = yes; then
  AC_DEFINE([TIME_WITH_SYS_TIME],[1],[Define to 1 if you can safely include both <sys/time.h>
	     and <time.h>.  This macro is obsolete.])
fi
# End of obsolete code.

AC_STRUCT_TM
AC_TYPE_PID_T
AC_TYPE_SIZE_T

AC_CHECK_HEADERS([\
        cups/cups.h \
        cups/ppd.h \
        cups/raster.h \
        ])
AC_CHECK_HEADERS([\
        ctype.h \
        errno.h \
        fcntl.h \
        malloc.h \
        signal.h \
        stdarg.h \
        stddef.h \
        stdlib.h \
        string.h \
        sys/stat.h \
        sys/types.h \
        time.h \
        unistd.h \
        ])

# Checks for libraries.
AC_CHECK_LIB([cups], [ppdOpenFile])
AC_CHECK_LIB([cupsimage], [cupsRasterOpen])

# Checks for library functions.
#AC_FUNC_MALLOC avoiding rpl_malloc stupidness
AC_FUNC_MEMCMP
m4_warn([obsolete],
[your code may safely assume C89 semantics that RETSIGTYPE is void.
Remove this warning and the `AC_CACHE_CHECK' when you adjust the code.])dnl
AC_CACHE_CHECK([return type of signal handlers],[ac_cv_type_signal],[AC_COMPILE_IFELSE(
[AC_LANG_PROGRAM([#include <sys/types.h>
#include <signal.h>
],
		 [return *(signal (0, 0)) (0) == 1;])],
		   [ac_cv_type_signal=int],
		   [ac_cv_type_signal=void])])
AC_DEFINE_UNQUOTED([RETSIGTYPE],[$ac_cv_type_signal],[Define as the return type of signal handlers
		    (`int' or `void').])

AC_CHECK_FUNCS([\
        memset \
        strcspn \
        strerror \
        strrchr \
        ])

AC_CONFIG_FILES([\
        Makefile \
        epson-inkjet-printer-escpr.spec \
        lsb/lsb-rpm.spec \
        lib/Makefile \
        ppd/Makefile \
        src/Makefile \
        ])

AC_OUTPUT

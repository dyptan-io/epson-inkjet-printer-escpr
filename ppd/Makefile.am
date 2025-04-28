## Makefile.am -- an automake template for a Makefile.in file
## EPSON ESC/P-R Printer Driver for Linux
### Copyright (C) Seiko Epson Corporation 2000-2015.
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

cupsppddir = $(CUPS_PPD_DIR)/epson-inkjet-printer-escpr
cupsppd_DATA = \
Epson-ET-2710_Series-epson-escpr-en.ppd

EXTRA_DIST = $(cupsppd_DATA)

# LSBビルド環境の場合、~/.rpmmacros %adjust_ppds が担っている処理を実施
install-data-hook:
if LSB
else
	echo "Make CUPS filter paths in the PPDs absolute"
	sed -i 's,0 epson-escpr-wrapper,0 @CUPS_FILTER_DIR@/epson-escpr-wrapper,' $(DESTDIR)$(cupsppddir)/*.ppd
endif

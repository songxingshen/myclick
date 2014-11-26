/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/usb/g_printer.h */
/*
 * g_printer.h -- Header file for USB Printer gadget driver
 *
 * Copyright (C) 2007 Craig W. Nadler
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __LINUX_USB_G_PRINTER_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_USB_G_PRINTER_H

#define PRINTER_NOT_ERROR	0x08
#define PRINTER_SELECTED	0x10
#define PRINTER_PAPER_EMPTY	0x20

/* The 'g' code is also used by gadgetfs ioctl requests.
 * Don't add any colliding codes to either driver, and keep
 * them in unique ranges (size 0x20 for now).
 */
#define GADGET_GET_PRINTER_STATUS	_IOR('g', 0x21, unsigned char)
#define GADGET_SET_PRINTER_STATUS	_IOWR('g', 0x22, unsigned char)

#endif /* __LINUX_USB_G_PRINTER_H */

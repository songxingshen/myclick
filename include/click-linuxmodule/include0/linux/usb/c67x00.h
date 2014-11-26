/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/usb/c67x00.h */
/*
 * usb_c67x00.h: platform definitions for the Cypress C67X00 USB chip
 *
 * Copyright (C) 2006-2008 Barco N.V.
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA  02110-1301  USA.
 */

#ifndef _LINUX_USB_C67X00_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_USB_C67X00_H

/* SIE configuration */
#define C67X00_SIE_UNUSED	0
#define C67X00_SIE_HOST		1
#define C67X00_SIE_PERIPHERAL_A	2	/* peripheral on A port */
#define C67X00_SIE_PERIPHERAL_B	3	/* peripheral on B port */

#define c67x00_sie_config(config, n)  (((config)>>(4*(n)))&0x3)

#define C67X00_SIE1_UNUSED	        (C67X00_SIE_UNUSED		<< 0)
#define C67X00_SIE1_HOST	        (C67X00_SIE_HOST		<< 0)
#define C67X00_SIE1_PERIPHERAL_A	(C67X00_SIE_PERIPHERAL_A	<< 0)
#define C67X00_SIE1_PERIPHERAL_B	(C67X00_SIE_PERIPHERAL_B	<< 0)

#define C67X00_SIE2_UNUSED		(C67X00_SIE_UNUSED		<< 4)
#define C67X00_SIE2_HOST		(C67X00_SIE_HOST		<< 4)
#define C67X00_SIE2_PERIPHERAL_A	(C67X00_SIE_PERIPHERAL_A	<< 4)
#define C67X00_SIE2_PERIPHERAL_B	(C67X00_SIE_PERIPHERAL_B	<< 4)

struct c67x00_platform_data {
	int sie_config;			/* SIEs config (C67X00_SIEx_*) */
	unsigned long hpi_regstep;	/* Step between HPI registers  */
};

#endif /* _LINUX_USB_C67X00_H */

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/ax88796.h */
/* include/net/ax88796.h
 *
 * Copyright 2005 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
*/

#ifndef __NET_AX88796_PLAT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __NET_AX88796_PLAT_H

#define AXFLG_HAS_EEPROM		(1<<0)
#define AXFLG_MAC_FROMDEV		(1<<1)	/* device already has MAC */
#define AXFLG_HAS_93CX6			(1<<2)	/* use eeprom_93cx6 driver */

struct ax_plat_data {
	unsigned int	 flags;
	unsigned char	 wordlength;		/* 1 or 2 */
	unsigned char	 dcr_val;		/* default value for DCR */
	unsigned char	 rcr_val;		/* default value for RCR */
	unsigned char	 gpoc_val;		/* default value for GPOC */
	u32		*reg_offsets;		/* register offsets */
};

#endif /* __NET_AX88796_PLAT_H */

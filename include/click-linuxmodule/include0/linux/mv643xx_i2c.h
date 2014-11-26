/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/mv643xx_i2c.h */
/*
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef _MV64XXX_I2C_H_
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _MV64XXX_I2C_H_

#include <linux/types.h>

#define MV64XXX_I2C_CTLR_NAME	"mv64xxx_i2c"

/* i2c Platform Device, Driver Data */
struct mv64xxx_i2c_pdata {
	u32	freq_m;
	u32	freq_n;
	u32	timeout;	/* In milliseconds */
};

#endif /*_MV64XXX_I2C_H_*/

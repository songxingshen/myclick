/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/i2c-algo-sgi.h */
/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License version 2 as published by the Free Software Foundation.
 *
 * Copyright (C) 2003 Ladislav Michl <ladis@linux-mips.org>
 */

#ifndef I2C_ALGO_SGI_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define I2C_ALGO_SGI_H 1

#include <linux/i2c.h>

struct i2c_algo_sgi_data {
	void *data;	/* private data for lowlevel routines */
	unsigned (*getctrl)(void *data);
	void (*setctrl)(void *data, unsigned val);
	unsigned (*rdata)(void *data);
	void (*wdata)(void *data, unsigned val);

	int xfer_timeout;
	int ack_timeout;
};

int i2c_sgi_add_bus(struct i2c_adapter *);

#endif /* I2C_ALGO_SGI_H */

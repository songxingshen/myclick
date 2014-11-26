/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/of_i2c.h */
/*
 * Generic I2C API implementation for PowerPC.
 *
 * Copyright (c) 2008 Jochen Friedrich <jochen@scram.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __LINUX_OF_I2C_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_OF_I2C_H

#include <linux/i2c.h>

void of_register_i2c_devices(struct i2c_adapter *adap,
			     struct device_node *adap_node);

#endif /* __LINUX_OF_I2C_H */

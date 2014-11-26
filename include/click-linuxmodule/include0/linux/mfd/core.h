/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/mfd/core.h */
/*
 * drivers/mfd/mfd-core.h
 *
 * core MFD support
 * Copyright (c) 2006 Ian Molton
 * Copyright (c) 2007 Dmitry Baryshkov
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#ifndef MFD_CORE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define MFD_CORE_H

#include <linux/platform_device.h>

/*
 * This struct describes the MFD part ("cell").
 * After registration the copy of this structure will become the platform data
 * of the resulting platform_device
 */
struct mfd_cell {
	const char		*name;

	int			(*enable)(struct platform_device *dev);
	int			(*disable)(struct platform_device *dev);
	int			(*suspend)(struct platform_device *dev);
	int			(*resume)(struct platform_device *dev);

	/* driver-specific data for MFD-aware "cell" drivers */
	void			*driver_data;

	/* platform_data can be used to either pass data to "generic"
	   driver or as a hook to mfd_cell for the "cell" drivers */
	void			*platform_data;
	size_t			data_size;

	/*
	 * This resources can be specified relatievly to the parent device.
	 * For accessing device you should use resources from device
	 */
	int			num_resources;
	const struct resource	*resources;
};

extern int mfd_add_devices(struct device *parent, int id,
			   const struct mfd_cell *cells, int n_devs,
			   struct resource *mem_base,
			   int irq_base);

extern void mfd_remove_devices(struct device *parent);

#endif

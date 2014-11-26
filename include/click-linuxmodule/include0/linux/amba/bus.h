/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/amba/bus.h */
/*
 *  linux/include/asm-arm/hardware/amba.h
 *
 *  Copyright (C) 2003 Deep Blue Solutions Ltd, All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef ASMARM_AMBA_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define ASMARM_AMBA_H

#define AMBA_NR_IRQS	2

struct amba_device {
	struct device		dev;
	struct resource		res;
	u64			dma_mask;
	unsigned int		periphid;
	unsigned int		irq[AMBA_NR_IRQS];
};

struct amba_id {
	unsigned int		id;
	unsigned int		mask;
	void			*data;
};

struct amba_driver {
	struct device_driver	drv;
	int			(*probe)(struct amba_device *, void *);
	int			(*remove)(struct amba_device *);
	void			(*shutdown)(struct amba_device *);
	int			(*suspend)(struct amba_device *, pm_message_t);
	int			(*resume)(struct amba_device *);
	struct amba_id		*id_table;
};

#define amba_get_drvdata(d)	dev_get_drvdata(&d->dev)
#define amba_set_drvdata(d,p)	dev_set_drvdata(&d->dev, p)

int amba_driver_register(struct amba_driver *);
void amba_driver_unregister(struct amba_driver *);
int amba_device_register(struct amba_device *, struct resource *);
void amba_device_unregister(struct amba_device *);
struct amba_device *amba_find_device(const char *, struct device *, unsigned int, unsigned int);
int amba_request_regions(struct amba_device *, const char *);
void amba_release_regions(struct amba_device *);

#define amba_config(d)	(((d)->periphid >> 24) & 0xff)
#define amba_rev(d)	(((d)->periphid >> 20) & 0x0f)
#define amba_manf(d)	(((d)->periphid >> 12) & 0xff)
#define amba_part(d)	((d)->periphid & 0xfff)

#endif

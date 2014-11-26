/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/mtd/plat-ram.h */
/* linux/include/linux/mtd/plat-ram.h
 *
 * (c) 2004 Simtec Electronics
 *	http://www.simtec.co.uk/products/SWLINUX/
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * Generic platform device based RAM map
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#ifndef __LINUX_MTD_PLATRAM_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_MTD_PLATRAM_H __FILE__

#define PLATRAM_RO (0)
#define PLATRAM_RW (1)

struct platdata_mtd_ram {
	const char		*mapname;
	const char		**map_probes;
	const char		**probes;
	struct mtd_partition	*partitions;
	int			 nr_partitions;
	int			 bankwidth;

	/* control callbacks */

	void	(*set_rw)(struct device *dev, int to);
};

#endif /* __LINUX_MTD_PLATRAM_H */

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:38 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/firmware-map.h */
/*
 * include/linux/firmware-map.h:
 *  Copyright (C) 2008 SUSE LINUX Products GmbH
 *  by Bernhard Walle <bwalle@suse.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License v2.0 as published by
 * the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef _LINUX_FIRMWARE_MAP_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_FIRMWARE_MAP_H

#include <linux/list.h>
#include <linux/kobject.h>

/*
 * provide a dummy interface if CONFIG_FIRMWARE_MEMMAP is disabled
 */
#ifdef CONFIG_FIRMWARE_MEMMAP

int firmware_map_add(resource_size_t start, resource_size_t end,
		     const char *type);
int firmware_map_add_early(resource_size_t start, resource_size_t end,
			   const char *type);

#else /* CONFIG_FIRMWARE_MEMMAP */

static inline int firmware_map_add(resource_size_t start, resource_size_t end,
				   const char *type)
{
	return 0;
}

static inline int firmware_map_add_early(resource_size_t start,
					 resource_size_t end, const char *type)
{
	return 0;
}

#endif /* CONFIG_FIRMWARE_MEMMAP */

#endif /* _LINUX_FIRMWARE_MAP_H */

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:38 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/video_output.h */
/*
 *
 *  Copyright (C) 2006 Luming Yu <luming.yu@intel.com>
 *
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or (at
 *  your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
 *
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */
#ifndef _LINUX_VIDEO_OUTPUT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_VIDEO_OUTPUT_H
#include <linux/device.h>
struct output_device;
struct output_properties {
	int (*set_state)(struct output_device *);
	int (*get_status)(struct output_device *);
};
struct output_device {
	int request_state;
	struct output_properties *props;
	struct device dev;
};
#define to_output_device(obj) container_of(obj, struct output_device, dev)
struct output_device *video_output_register(const char *name,
	struct device *dev,
	void *devdata,
	struct output_properties *op);
void video_output_unregister(struct output_device *dev);
#endif

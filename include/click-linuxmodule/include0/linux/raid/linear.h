/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/raid/linear.h */
#ifndef _LINEAR_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINEAR_H

#include <linux/raid/md.h>

struct dev_info {
	mdk_rdev_t	*rdev;
	sector_t	size;
	sector_t	offset;
};

typedef struct dev_info dev_info_t;

struct linear_private_data
{
	struct linear_private_data *prev;	/* earlier version */
	dev_info_t		**hash_table;
	sector_t		hash_spacing;
	sector_t		array_sectors;
	int			preshift; /* shift before dividing by hash_spacing */
	dev_info_t		disks[0];
};


typedef struct linear_private_data linear_conf_t;

#define mddev_to_conf(mddev) ((linear_conf_t *) mddev->private)

#endif

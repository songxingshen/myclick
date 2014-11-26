/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/raid/raid0.h */
#ifndef _RAID0_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _RAID0_H

#include <linux/raid/md.h>

struct strip_zone
{
	sector_t zone_offset;	/* Zone offset in md_dev */
	sector_t dev_offset;	/* Zone offset in real dev */
	sector_t size;		/* Zone size */
	int nb_dev;		/* # of devices attached to the zone */
	mdk_rdev_t **dev;	/* Devices attached to the zone */
};

struct raid0_private_data
{
	struct strip_zone **hash_table; /* Table of indexes into strip_zone */
	struct strip_zone *strip_zone;
	mdk_rdev_t **devlist; /* lists of rdevs, pointed to by strip_zone->dev */
	int nr_strip_zones;

	sector_t hash_spacing;
	int preshift;			/* shift this before divide by hash_spacing */
};

typedef struct raid0_private_data raid0_conf_t;

#define mddev_to_conf(mddev) ((raid0_conf_t *) mddev->private)

#endif

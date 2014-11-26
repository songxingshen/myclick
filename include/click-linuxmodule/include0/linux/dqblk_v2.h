/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:37 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/dqblk_v2.h */
/*
 *	Definitions of structures for vfsv0 quota format
 */

#ifndef _LINUX_DQBLK_V2_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_DQBLK_V2_H

#include <linux/types.h>

/* id numbers of quota format */
#define QFMT_VFS_V0 2

/* Numbers of blocks needed for updates */
#define V2_INIT_ALLOC 4
#define V2_INIT_REWRITE 2
#define V2_DEL_ALLOC 0
#define V2_DEL_REWRITE 6

/* Inmemory copy of version specific information */
struct v2_mem_dqinfo {
	unsigned int dqi_blocks;
	unsigned int dqi_free_blk;
	unsigned int dqi_free_entry;
};

#endif /* _LINUX_DQBLK_V2_H */

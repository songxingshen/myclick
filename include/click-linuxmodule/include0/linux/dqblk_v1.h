/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/dqblk_v1.h */
/*
 *	File with in-memory structures of old quota format
 */

#ifndef _LINUX_DQBLK_V1_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_DQBLK_V1_H

/* Id of quota format */
#define QFMT_VFS_OLD 1

/* Root squash turned on */
#define V1_DQF_RSQUASH 1

/* Numbers of blocks needed for updates */
#define V1_INIT_ALLOC 1
#define V1_INIT_REWRITE 1
#define V1_DEL_ALLOC 0
#define V1_DEL_REWRITE 2

/* Special information about quotafile */
struct v1_mem_dqinfo {
  int __padding_convince_cplusplus_zero_size__[0];

};

#endif	/* _LINUX_DQBLK_V1_H */

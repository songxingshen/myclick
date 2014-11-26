/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:37 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/ncp_fs_i.h */
/*
 *  ncp_fs_i.h
 *
 *  Copyright (C) 1995 Volker Lendecke
 *
 */

#ifndef _LINUX_NCP_FS_I
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_NCP_FS_I

/*
 * This is the ncpfs part of the inode structure. This must contain
 * all the information we need to work with an inode after creation.
 */
struct ncp_inode_info {
	__le32	dirEntNum;
	__le32	DosDirNum;
	__u8	volNumber;
	__le32	nwattr;
	struct mutex open_mutex;
	atomic_t	opened;
	int	access;
	int	flags;
#define NCPI_KLUDGE_SYMLINK	0x0001
	__u8	file_handle[6];
	struct inode vfs_inode;
};

#endif	/* _LINUX_NCP_FS_I */

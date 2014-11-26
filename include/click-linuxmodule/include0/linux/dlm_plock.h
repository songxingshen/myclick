/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:37 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/dlm_plock.h */
/*
 * Copyright (C) 2005-2008 Red Hat, Inc.  All rights reserved.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions
 * of the GNU General Public License v.2.
 */

#ifndef __DLM_PLOCK_DOT_H__
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __DLM_PLOCK_DOT_H__

#define DLM_PLOCK_MISC_NAME		"dlm_plock"

#define DLM_PLOCK_VERSION_MAJOR	1
#define DLM_PLOCK_VERSION_MINOR	1
#define DLM_PLOCK_VERSION_PATCH	0

enum {
	DLM_PLOCK_OP_LOCK = 1,
	DLM_PLOCK_OP_UNLOCK,
	DLM_PLOCK_OP_GET,
};

struct dlm_plock_info {
	__u32 version[3];
	__u8 optype;
	__u8 ex;
	__u8 wait;
	__u8 pad;
	__u32 pid;
	__s32 nodeid;
	__s32 rv;
	__u32 fsid;
	__u64 number;
	__u64 start;
	__u64 end;
	__u64 owner;
};

#ifdef __KERNEL__
int dlm_posix_lock(dlm_lockspace_t *lockspace, u64 number, struct file *file,
		int cmd, struct file_lock *fl);
int dlm_posix_unlock(dlm_lockspace_t *lockspace, u64 number, struct file *file,
		struct file_lock *fl);
int dlm_posix_get(dlm_lockspace_t *lockspace, u64 number, struct file *file,
		struct file_lock *fl);
#endif /* __KERNEL__ */

#endif


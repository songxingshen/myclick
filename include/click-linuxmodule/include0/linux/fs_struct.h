/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/fs_struct.h */
#ifndef _LINUX_FS_STRUCT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_FS_STRUCT_H

#include <linux/path.h>

struct fs_struct {
	atomic_t count;
	rwlock_t lock;
	int umask;
	struct path root, pwd;
};

#define INIT_FS {				\
	count:  ATOMIC_INIT(1),	\
	lock:  RW_LOCK_UNLOCKED,	\
	umask:  0022, \
}

extern struct kmem_cache *fs_cachep;

extern void exit_fs(struct task_struct *);
extern void set_fs_root(struct fs_struct *, struct path *);
extern void set_fs_pwd(struct fs_struct *, struct path *);
extern struct fs_struct *copy_fs_struct(struct fs_struct *);
extern void put_fs_struct(struct fs_struct *);

#endif /* _LINUX_FS_STRUCT_H */

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:38 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/ramfs.h */
#ifndef _LINUX_RAMFS_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_RAMFS_H

struct inode *ramfs_get_inode(struct super_block *sb, int mode, dev_t dev);
extern int ramfs_get_sb(struct file_system_type *fs_type,
	 int flags, const char *dev_name, void *data, struct vfsmount *mnt);

#ifndef CONFIG_MMU
extern int ramfs_nommu_expand_for_mapping(struct inode *inode, size_t newsize);
extern unsigned long ramfs_nommu_get_unmapped_area(struct file *file,
						   unsigned long addr,
						   unsigned long len,
						   unsigned long pgoff,
						   unsigned long flags);

extern int ramfs_nommu_mmap(struct file *file, struct vm_area_struct *vma);
#endif

extern const struct file_operations ramfs_file_operations;
extern struct vm_operations_struct generic_file_vm_ops;
extern int __init init_rootfs(void);

#endif

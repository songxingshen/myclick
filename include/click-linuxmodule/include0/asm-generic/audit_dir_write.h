/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-generic/audit_dir_write.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
__NR_rename,
__NR_mkdir,
__NR_rmdir,
#ifdef __NR_creat
__NR_creat,
#endif
__NR_link,
__NR_unlink,
__NR_symlink,
__NR_mknod,
#ifdef __NR_mkdirat
__NR_mkdirat,
__NR_mknodat,
__NR_unlinkat,
__NR_renameat,
__NR_linkat,
__NR_symlinkat,
#endif

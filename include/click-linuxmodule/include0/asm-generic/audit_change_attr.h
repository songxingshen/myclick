/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-generic/audit_change_attr.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
__NR_chmod,
__NR_fchmod,
#ifdef __NR_chown
__NR_chown,
__NR_fchown,
__NR_lchown,
#endif
__NR_setxattr,
__NR_lsetxattr,
__NR_fsetxattr,
__NR_removexattr,
__NR_lremovexattr,
__NR_fremovexattr,
#ifdef __NR_fchownat
__NR_fchownat,
__NR_fchmodat,
#endif
#ifdef __NR_chown32
__NR_chown32,
__NR_fchown32,
__NR_lchown32,
#endif

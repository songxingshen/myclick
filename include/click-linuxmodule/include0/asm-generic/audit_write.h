/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-generic/audit_write.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#include <asm-generic/audit_dir_write.h>
__NR_acct,
__NR_swapon,
__NR_quotactl,
__NR_truncate,
#ifdef __NR_truncate64
__NR_truncate64,
#endif
#ifdef __NR_bind
__NR_bind,		/* bind can affect fs object only in one way... */
#endif

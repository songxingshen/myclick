/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/seccomp.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#ifdef CONFIG_X86_32
# include "seccomp_32.h"
#else
# include "seccomp_64.h"
#endif
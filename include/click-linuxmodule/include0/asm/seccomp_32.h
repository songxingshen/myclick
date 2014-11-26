/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/seccomp_32.h */
#ifndef _ASM_SECCOMP_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_SECCOMP_H

#include <linux/thread_info.h>

#ifdef TIF_32BIT
#error "unexpected TIF_32BIT on i386"
#endif

#include <linux/unistd.h>

#define __NR_seccomp_read __NR_read
#define __NR_seccomp_write __NR_write
#define __NR_seccomp_exit __NR_exit
#define __NR_seccomp_sigreturn __NR_sigreturn

#endif /* _ASM_SECCOMP_H */

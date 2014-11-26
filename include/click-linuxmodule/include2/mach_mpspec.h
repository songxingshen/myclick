/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:43 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/mach-default/mach_mpspec.h */
#ifndef __ASM_MACH_MPSPEC_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_MACH_MPSPEC_H

#define MAX_IRQ_SOURCES 256

#if CONFIG_BASE_SMALL == 0
#define MAX_MP_BUSSES 256
#else
#define MAX_MP_BUSSES 32
#endif

#endif /* __ASM_MACH_MPSPEC_H */

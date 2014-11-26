/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/trampoline.h */
#ifndef __TRAMPOLINE_HEADER
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __TRAMPOLINE_HEADER

#ifndef __ASSEMBLY__

/*
 * Trampoline 80x86 program as an array.
 */
extern const unsigned char trampoline_data [];
extern const unsigned char trampoline_end  [];
extern unsigned char *trampoline_base;

extern unsigned long init_rsp;
extern unsigned long initial_code;

#define TRAMPOLINE_BASE 0x6000
extern unsigned long setup_trampoline(void);

#endif /* __ASSEMBLY__ */

#endif /* __TRAMPOLINE_HEADER */

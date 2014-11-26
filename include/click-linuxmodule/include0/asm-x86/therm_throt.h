/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/therm_throt.h */
#ifndef __ASM_I386_THERM_THROT_H__
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_I386_THERM_THROT_H__ 1

#include <asm/atomic.h>

extern atomic_t therm_throt_en;
int therm_throt_process(int curr);

#endif /* __ASM_I386_THERM_THROT_H__ */

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-generic/bitops/hweight.h */
#ifndef _ASM_GENERIC_BITOPS_HWEIGHT_H_
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_GENERIC_BITOPS_HWEIGHT_H_

#include <asm/types.h>

extern unsigned int hweight32(unsigned int w);
extern unsigned int hweight16(unsigned int w);
extern unsigned int hweight8(unsigned int w);
extern unsigned long hweight64(__u64 w);

#endif /* _ASM_GENERIC_BITOPS_HWEIGHT_H_ */

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/mach-generic/mach_ipi.h */
#ifndef _MACH_IPI_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _MACH_IPI_H 1

#include <asm/genapic.h>

#define send_IPI_mask (genapic->send_IPI_mask)
#define send_IPI_allbutself (genapic->send_IPI_allbutself)
#define send_IPI_all (genapic->send_IPI_all)

#endif

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/timex.h */
/* x86 architecture timex specifications */
#ifndef _ASM_X86_TIMEX_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_X86_TIMEX_H

#include <asm/processor.h>
#include <asm/tsc.h>

#ifdef CONFIG_X86_ELAN
#  define PIT_TICK_RATE 1189200 /* AMD Elan has different frequency! */
#elif defined(CONFIG_X86_RDC321X)
#  define PIT_TICK_RATE 1041667 /* Underlying HZ for R8610 */
#else
#  define PIT_TICK_RATE 1193182 /* Underlying HZ */
#endif
#define CLOCK_TICK_RATE	PIT_TICK_RATE

#define ARCH_HAS_READ_CURRENT_TIMER

#endif

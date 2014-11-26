/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-generic/cmpxchg.h */
#ifndef __ASM_GENERIC_CMPXCHG_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_GENERIC_CMPXCHG_H

/*
 * Generic cmpxchg
 *
 * Uses the local cmpxchg. Does not support SMP.
 */
#ifdef CONFIG_SMP
#error "Cannot use generic cmpxchg on SMP"
#endif

/*
 * Atomic compare and exchange.
 *
 * Do not define __HAVE_ARCH_CMPXCHG because we want to use it to check whether
 * a cmpxchg primitive faster than repeated local irq save/restore exists.
 */
#define cmpxchg(ptr, o, n)	cmpxchg_local((ptr), (o), (n))
#define cmpxchg64(ptr, o, n)	cmpxchg64_local((ptr), (o), (n))

#endif

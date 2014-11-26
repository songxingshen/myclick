/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/mach-summit/irq_vectors_limits.h */
#ifndef _ASM_IRQ_VECTORS_LIMITS_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_IRQ_VECTORS_LIMITS_H

/*
 * For Summit or generic (i.e. installer) kernels, we have lots of I/O APICs,
 * even with uni-proc kernels, so use a big array.
 *
 * This value should be the same in both the generic and summit subarches.
 * Change one, change 'em both.
 */
#define NR_IRQS	224
#define NR_IRQ_VECTORS	1024

#endif /* _ASM_IRQ_VECTORS_LIMITS_H */

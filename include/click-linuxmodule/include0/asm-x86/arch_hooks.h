/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/arch_hooks.h */
#ifndef _ASM_ARCH_HOOKS_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_ARCH_HOOKS_H

#include <linux/interrupt.h>

/*
 *	linux/include/asm/arch_hooks.h
 *
 *	define the architecture specific hooks
 */

/* these aren't arch hooks, they are generic routines
 * that can be used by the hooks */
extern void init_ISA_irqs(void);
extern void apic_intr_init(void);
extern void smp_intr_init(void);
extern irqreturn_t timer_interrupt(int irq, void *dev_id);

/* these are the defined hooks */
extern void intr_init_hook(void);
extern void pre_intr_init_hook(void);
extern void pre_setup_arch_hook(void);
extern void trap_init_hook(void);
extern void pre_time_init_hook(void);
extern void time_init_hook(void);
extern void mca_nmi_hook(void);

#endif

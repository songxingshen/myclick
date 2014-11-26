/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/irq.h */
#ifndef _ASM_IRQ_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_IRQ_H
/*
 *	(C) 1992, 1993 Linus Torvalds, (C) 1997 Ingo Molnar
 *
 *	IRQ/IPI changes taken from work by Thomas Radke
 *	<tomsoft@informatik.tu-chemnitz.de>
 */

#include <asm/apicdef.h>
#include <asm/irq_vectors.h>

static inline int irq_canonicalize(int irq)
{
	return ((irq == 2) ? 9 : irq);
}

#ifdef CONFIG_X86_LOCAL_APIC
# define ARCH_HAS_NMI_WATCHDOG
#endif

#ifdef CONFIG_4KSTACKS
  extern void irq_ctx_init(int cpu);
  extern void irq_ctx_exit(int cpu);
# define __ARCH_HAS_DO_SOFTIRQ
#else
# define irq_ctx_init(cpu) do { } while (0)
# define irq_ctx_exit(cpu) do { } while (0)
# ifdef CONFIG_X86_64
#  define __ARCH_HAS_DO_SOFTIRQ
# endif
#endif

#ifdef CONFIG_IRQBALANCE
extern int irqbalance_disable(char *str);
#endif

#ifdef CONFIG_HOTPLUG_CPU
#include <linux/cpumask.h>
extern void fixup_irqs(cpumask_t map);
#endif

extern unsigned int do_IRQ(struct pt_regs *regs);
extern void init_IRQ(void);
extern void native_init_IRQ(void);

/* Interrupt vector management */
extern DECLARE_BITMAP(used_vectors, NR_VECTORS);

#endif /* _ASM_IRQ_H */

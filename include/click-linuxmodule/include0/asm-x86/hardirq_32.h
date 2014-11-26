/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/hardirq_32.h */
#ifndef __ASM_HARDIRQ_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_HARDIRQ_H

#include <linux/threads.h>
#include <linux/irq.h>

typedef struct {
	unsigned int __softirq_pending;
	unsigned long idle_timestamp;
	unsigned int __nmi_count;	/* arch dependent */
	unsigned int apic_timer_irqs;	/* arch dependent */
	unsigned int irq0_irqs;
	unsigned int irq_resched_count;
	unsigned int irq_call_count;
	unsigned int irq_tlb_count;
	unsigned int irq_thermal_count;
	unsigned int irq_spurious_count;
} ____cacheline_aligned irq_cpustat_t;

DECLARE_PER_CPU(irq_cpustat_t, irq_stat);

#define __ARCH_IRQ_STAT
#define __IRQ_STAT(cpu, member) (per_cpu(irq_stat, cpu).member)

void ack_bad_irq(unsigned int irq);
#include <linux/irq_cpustat.h>

#endif /* __ASM_HARDIRQ_H */
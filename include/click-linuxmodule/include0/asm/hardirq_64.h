/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/hardirq_64.h */
#ifndef __ASM_HARDIRQ_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_HARDIRQ_H

#include <linux/threads.h>
#include <linux/irq.h>
#include <asm/pda.h>
#include <asm/apic.h>

/* We can have at most NR_VECTORS irqs routed to a cpu at a time */
#define MAX_HARDIRQS_PER_CPU NR_VECTORS

#define __ARCH_IRQ_STAT 1

#define local_softirq_pending() read_pda(__softirq_pending)

#define __ARCH_SET_SOFTIRQ_PENDING 1

#define set_softirq_pending(x) write_pda(__softirq_pending, (x))
#define or_softirq_pending(x)  or_pda(__softirq_pending, (x))

extern void ack_bad_irq(unsigned int irq);

#endif /* __ASM_HARDIRQ_H */

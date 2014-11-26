/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/nmi.h */
/*
 *  linux/include/linux/nmi.h
 */
#ifndef LINUX_NMI_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define LINUX_NMI_H

#include <linux/sched.h>
#include <asm/irq.h>

/**
 * touch_nmi_watchdog - restart NMI watchdog timeout.
 * 
 * If the architecture supports the NMI watchdog, touch_nmi_watchdog()
 * may be used to reset the timeout - for code which intentionally
 * disables interrupts for a long time. This call is stateless.
 */
#ifdef ARCH_HAS_NMI_WATCHDOG
#include <asm/nmi.h>
extern void touch_nmi_watchdog(void);
extern void acpi_nmi_disable(void);
extern void acpi_nmi_enable(void);
#else
static inline void touch_nmi_watchdog(void)
{
	touch_softlockup_watchdog();
}
static inline void acpi_nmi_disable(void) { }
static inline void acpi_nmi_enable(void) { }
#endif

#ifndef trigger_all_cpu_backtrace
#define trigger_all_cpu_backtrace() do { } while (0)
#endif

#endif

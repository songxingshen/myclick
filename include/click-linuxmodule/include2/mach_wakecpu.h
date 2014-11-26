/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:43 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/mach-default/mach_wakecpu.h */
#ifndef __ASM_MACH_WAKECPU_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_MACH_WAKECPU_H

/* 
 * This file copes with machines that wakeup secondary CPUs by the
 * INIT, INIT, STARTUP sequence.
 */

#define WAKE_SECONDARY_VIA_INIT

#define TRAMPOLINE_LOW phys_to_virt(0x467)
#define TRAMPOLINE_HIGH phys_to_virt(0x469)

#define boot_cpu_apicid boot_cpu_physical_apicid

static inline void wait_for_init_deassert(atomic_t *deassert)
{
	while (!atomic_read(deassert))
		cpu_relax();
	return;
}

/* Nothing to do for most platforms, since cleared by the INIT cycle */
static inline void smp_callin_clear_local_apic(void)
{
}

static inline void store_NMI_vector(unsigned short *high, unsigned short *low)
{
}

static inline void restore_NMI_vector(unsigned short *high, unsigned short *low)
{
}

#if APIC_DEBUG
 #define inquire_remote_apic(apicid) __inquire_remote_apic(apicid)
#else
 #define inquire_remote_apic(apicid) {}
#endif

#endif /* __ASM_MACH_WAKECPU_H */

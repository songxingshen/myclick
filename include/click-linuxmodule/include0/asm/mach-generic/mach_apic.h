/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/mach-generic/mach_apic.h */
#ifndef __ASM_MACH_APIC_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_MACH_APIC_H

#include <asm/genapic.h>

#define esr_disable (genapic->ESR_DISABLE)
#define NO_BALANCE_IRQ (genapic->no_balance_irq)
#define INT_DELIVERY_MODE (genapic->int_delivery_mode)
#define INT_DEST_MODE (genapic->int_dest_mode)
#undef APIC_DEST_LOGICAL
#define APIC_DEST_LOGICAL (genapic->apic_destination_logical)
#define TARGET_CPUS	  (genapic->target_cpus())
#define apic_id_registered (genapic->apic_id_registered)
#define init_apic_ldr (genapic->init_apic_ldr)
#define ioapic_phys_id_map (genapic->ioapic_phys_id_map)
#define setup_apic_routing (genapic->setup_apic_routing)
#define multi_timer_check (genapic->multi_timer_check)
#define apicid_to_node (genapic->apicid_to_node)
#define cpu_to_logical_apicid (genapic->cpu_to_logical_apicid) 
#define cpu_present_to_apicid (genapic->cpu_present_to_apicid)
#define apicid_to_cpu_present (genapic->apicid_to_cpu_present)
#define setup_portio_remap (genapic->setup_portio_remap)
#define check_apicid_present (genapic->check_apicid_present)
#define check_phys_apicid_present (genapic->check_phys_apicid_present)
#define check_apicid_used (genapic->check_apicid_used)
#define cpu_mask_to_apicid (genapic->cpu_mask_to_apicid)
#define enable_apic_mode (genapic->enable_apic_mode)
#define phys_pkg_id (genapic->phys_pkg_id)

extern void generic_bigsmp_probe(void);

#endif /* __ASM_MACH_APIC_H */

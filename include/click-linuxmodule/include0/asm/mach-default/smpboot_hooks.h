/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/mach-default/smpboot_hooks.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
/* two abstractions specific to kernel/smpboot.c, mainly to cater to visws
 * which needs to alter them. */

static inline void smpboot_clear_io_apic_irqs(void)
{
#ifdef CONFIG_X86_IO_APIC
	io_apic_irqs = 0;
#endif
}

static inline void smpboot_setup_warm_reset_vector(unsigned long start_eip)
{
	CMOS_WRITE(0xa, 0xf);
	local_flush_tlb();
	pr_debug("1.\n");
	*((volatile unsigned short *) TRAMPOLINE_HIGH) = start_eip >> 4;
	pr_debug("2.\n");
	*((volatile unsigned short *) TRAMPOLINE_LOW) = start_eip & 0xf;
	pr_debug("3.\n");
}

static inline void smpboot_restore_warm_reset_vector(void)
{
	/*
	 * Install writable page 0 entry to set BIOS data area.
	 */
	local_flush_tlb();

	/*
	 * Paranoid:  Set warm reset code and vector here back
	 * to default values.
	 */
	CMOS_WRITE(0, 0xf);

	*((volatile long *) phys_to_virt(0x467)) = 0;
}

static inline void __init smpboot_setup_io_apic(void)
{
#ifdef CONFIG_X86_IO_APIC
	/*
	 * Here we can be sure that there is an IO-APIC in the system. Let's
	 * go and set it up:
	 */
	if (!skip_ioapic_setup && nr_ioapics)
		setup_IO_APIC();
	else {
		nr_ioapics = 0;
		localise_nmi_watchdog();
	}
#endif
}

static inline void smpboot_clear_io_apic(void)
{
#ifdef CONFIG_X86_IO_APIC
	nr_ioapics = 0;
#endif
}
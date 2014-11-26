/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/mach-default/mach_mpparse.h */
#ifndef __ASM_MACH_MPPARSE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_MACH_MPPARSE_H

static inline int mps_oem_check(struct mp_config_table *mpc, char *oem, 
		char *productid)
{
	return 0;
}

/* Hook from generic ACPI tables.c */
static inline int acpi_madt_oem_check(char *oem_id, char *oem_table_id)
{
	return 0;
}


#endif /* __ASM_MACH_MPPARSE_H */

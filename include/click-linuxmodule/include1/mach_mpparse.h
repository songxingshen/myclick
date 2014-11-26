/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:43 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/mach-generic/mach_mpparse.h */
#ifndef _MACH_MPPARSE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _MACH_MPPARSE_H 1


extern int mps_oem_check(struct mp_config_table *mpc, char *oem,
			 char *productid);

extern int acpi_madt_oem_check(char *oem_id, char *oem_table_id);

#endif

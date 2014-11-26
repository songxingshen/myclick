/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/mach-generic/mach_apicdef.h */
#ifndef _GENAPIC_MACH_APICDEF_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _GENAPIC_MACH_APICDEF_H 1

#ifndef APIC_DEFINITION
#include <asm/genapic.h>

#define GET_APIC_ID (genapic->get_apic_id)
#define APIC_ID_MASK (genapic->apic_id_mask)
#endif

#endif

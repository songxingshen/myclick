/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/mach-es7000/mach_apicdef.h */
#ifndef __ASM_MACH_APICDEF_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_MACH_APICDEF_H

#define		APIC_ID_MASK		(0xFF<<24)

static inline unsigned get_apic_id(unsigned long x) 
{ 
	return (((x)>>24)&0xFF);
} 

#define		GET_APIC_ID(x)	get_apic_id(x)

#endif

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:43 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/mach-default/mach_apicdef.h */
#ifndef __ASM_MACH_APICDEF_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_MACH_APICDEF_H

#include <asm/apic.h>

#ifdef CONFIG_X86_64
#define	APIC_ID_MASK		(0xFFu<<24)
#define GET_APIC_ID(x)          (((x)>>24)&0xFFu)
#define	SET_APIC_ID(x)		(((x)<<24))
#else
#define		APIC_ID_MASK		(0xF<<24)
static inline unsigned get_apic_id(unsigned long x) 
{
	unsigned int ver = GET_APIC_VERSION(apic_read(APIC_LVR));
	if (APIC_XAPIC(ver))
		return (((x)>>24)&0xFF);
	else
		return (((x)>>24)&0xF);
} 

#define		GET_APIC_ID(x)	get_apic_id(x)
#endif

#endif

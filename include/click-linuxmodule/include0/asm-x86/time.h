/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/time.h */
#ifndef _ASMX86_TIME_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASMX86_TIME_H

extern void hpet_time_init(void);

#include <asm/mc146818rtc.h>
#ifdef CONFIG_X86_32
#include <linux/efi.h>

static inline unsigned long native_get_wallclock(void)
{
	unsigned long retval;

	if (efi_enabled)
		retval = efi_get_time();
	else
		retval = mach_get_cmos_time();

	return retval;
}

static inline int native_set_wallclock(unsigned long nowtime)
{
	int retval;

	if (efi_enabled)
		retval = efi_set_rtc_mmss(nowtime);
	else
		retval = mach_set_rtc_mmss(nowtime);

	return retval;
}

#else
extern void native_time_init_hook(void);

static inline unsigned long native_get_wallclock(void)
{
	return mach_get_cmos_time();
}

static inline int native_set_wallclock(unsigned long nowtime)
{
	return mach_set_rtc_mmss(nowtime);
}

#endif

#ifdef CONFIG_PARAVIRT
#include <asm/paravirt.h>
#else /* !CONFIG_PARAVIRT */

#define get_wallclock() native_get_wallclock()
#define set_wallclock(x) native_set_wallclock(x)
#define choose_time_init() hpet_time_init

#endif /* CONFIG_PARAVIRT */

extern unsigned long __init calibrate_cpu(void);

#endif

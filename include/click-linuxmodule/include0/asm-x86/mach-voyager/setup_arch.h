/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/mach-voyager/setup_arch.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#include <asm/voyager.h>
#include <asm/setup.h>
#define VOYAGER_BIOS_INFO ((struct voyager_bios_info *) \
			(&boot_params.apm_bios_info))

/* Hook to call BIOS initialisation function */

/* for voyager, pass the voyager BIOS/SUS info area to the detection
 * routines */

#define ARCH_SETUP	voyager_detect(VOYAGER_BIOS_INFO);


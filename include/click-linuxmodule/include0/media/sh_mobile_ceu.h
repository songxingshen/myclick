/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/media/sh_mobile_ceu.h */
#ifndef __ASM_SH_MOBILE_CEU_H__
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_SH_MOBILE_CEU_H__

#include <media/soc_camera.h>

struct sh_mobile_ceu_info {
	unsigned long flags; /* SOCAM_... */
	void (*enable_camera)(void);
	void (*disable_camera)(void);
};

#endif /* __ASM_SH_MOBILE_CEU_H__ */

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/linux_logo.h */
#ifndef _LINUX_LINUX_LOGO_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_LINUX_LOGO_H

/*
 *  Linux logo to be displayed on boot
 *
 *  Copyright (C) 1996 Larry Ewing (lewing@isc.tamu.edu)
 *  Copyright (C) 1996,1998 Jakub Jelinek (jj@sunsite.mff.cuni.cz)
 *  Copyright (C) 2001 Greg Banks <gnb@alphalink.com.au>
 *  Copyright (C) 2001 Jan-Benedict Glaw <jbglaw@lug-owl.de>
 *  Copyright (C) 2003 Geert Uytterhoeven <geert@linux-m68k.org>
 *
 *  Serial_console ascii image can be any size,
 *  but should contain %s to display the version
 */

#include <linux/init.h>


#define LINUX_LOGO_MONO		1	/* monochrome black/white */
#define LINUX_LOGO_VGA16	2	/* 16 colors VGA text palette */
#define LINUX_LOGO_CLUT224	3	/* 224 colors */
#define LINUX_LOGO_GRAY256	4	/* 256 levels grayscale */


struct linux_logo {
	int type;			/* one of LINUX_LOGO_* */
	unsigned int width;
	unsigned int height;
	unsigned int clutsize;		/* LINUX_LOGO_CLUT224 only */
	const unsigned char *clut;	/* LINUX_LOGO_CLUT224 only */
	const unsigned char *data;
};

extern const struct linux_logo *fb_find_logo(int depth);
#ifdef CONFIG_FB_LOGO_EXTRA
extern void fb_append_extra_logo(const struct linux_logo *logo,
				 unsigned int n);
#else
static inline void fb_append_extra_logo(const struct linux_logo *logo,
					unsigned int n)
{}
#endif

#endif /* _LINUX_LINUX_LOGO_H */

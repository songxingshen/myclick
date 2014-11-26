/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/if_plip.h */
/*
 *	NET3	PLIP tuning facilities for the new Niibe PLIP.
 *
 *	This program is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU General Public License
 *	as published by the Free Software Foundation; either version
 *	2 of the License, or (at your option) any later version.
 *
 */
 
#ifndef _LINUX_IF_PLIP_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_IF_PLIP_H

#include <linux/sockios.h>

#define	SIOCDEVPLIP	SIOCDEVPRIVATE

struct plipconf
{
	unsigned short pcmd;
	unsigned long  nibble;
	unsigned long  trigger;
};

#define PLIP_GET_TIMEOUT	0x1
#define PLIP_SET_TIMEOUT	0x2

#endif

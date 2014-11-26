/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/rio_ids.h */
/*
 * RapidIO devices
 *
 * Copyright 2005 MontaVista Software, Inc.
 * Matt Porter <mporter@kernel.crashing.org>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef LINUX_RIO_IDS_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define LINUX_RIO_IDS_H

#define RIO_ANY_ID			0xffff

#define RIO_VID_FREESCALE		0x0002
#define RIO_DID_MPC8560			0x0003

#define RIO_VID_TUNDRA			0x000d
#define RIO_DID_TSI500			0x0500

#endif				/* LINUX_RIO_IDS_H */

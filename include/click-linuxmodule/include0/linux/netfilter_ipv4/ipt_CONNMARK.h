/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_CONNMARK.h */
#ifndef _IPT_CONNMARK_H_target
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_CONNMARK_H_target

/* Copyright (C) 2002,2004 MARA Systems AB <http://www.marasystems.com>
 * by Henrik Nordstrom <hno@marasystems.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */
#include <linux/netfilter/xt_CONNMARK.h>
#define IPT_CONNMARK_SET	XT_CONNMARK_SET
#define IPT_CONNMARK_SAVE	XT_CONNMARK_SAVE
#define	IPT_CONNMARK_RESTORE	XT_CONNMARK_RESTORE

#define ipt_connmark_target_info xt_connmark_target_info

#endif /*_IPT_CONNMARK_H_target*/

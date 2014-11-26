/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_conntrack.h */
/* Header file for kernel module to match connection tracking information.
 * GPL (C) 2001  Marc Boucher (marc@mbsi.ca).
 */

#ifndef _IPT_CONNTRACK_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_CONNTRACK_H

#include <linux/netfilter/xt_conntrack.h>

#define IPT_CONNTRACK_STATE_BIT(ctinfo) XT_CONNTRACK_STATE_BIT(ctinfo)
#define IPT_CONNTRACK_STATE_INVALID 	XT_CONNTRACK_STATE_INVALID

#define IPT_CONNTRACK_STATE_SNAT 	XT_CONNTRACK_STATE_SNAT
#define IPT_CONNTRACK_STATE_DNAT	XT_CONNTRACK_STATE_DNAT
#define IPT_CONNTRACK_STATE_UNTRACKED	XT_CONNTRACK_STATE_UNTRACKED

/* flags, invflags: */
#define IPT_CONNTRACK_STATE		XT_CONNTRACK_STATE
#define IPT_CONNTRACK_PROTO		XT_CONNTRACK_PROTO
#define IPT_CONNTRACK_ORIGSRC		XT_CONNTRACK_ORIGSRC
#define IPT_CONNTRACK_ORIGDST		XT_CONNTRACK_ORIGDST
#define IPT_CONNTRACK_REPLSRC		XT_CONNTRACK_REPLSRC
#define IPT_CONNTRACK_REPLDST		XT_CONNTRACK_REPLDST
#define IPT_CONNTRACK_STATUS		XT_CONNTRACK_STATUS
#define IPT_CONNTRACK_EXPIRES		XT_CONNTRACK_EXPIRES

#define ipt_conntrack_info		xt_conntrack_info
#endif /*_IPT_CONNTRACK_H*/

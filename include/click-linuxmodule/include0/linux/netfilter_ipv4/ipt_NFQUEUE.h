/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_NFQUEUE.h */
/* iptables module for using NFQUEUE mechanism
 *
 * (C) 2005 Harald Welte <laforge@netfilter.org>
 *
 * This software is distributed under GNU GPL v2, 1991
 * 
*/
#ifndef _IPT_NFQ_TARGET_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_NFQ_TARGET_H

/* Backwards compatibility for old userspace */
#include <linux/netfilter/xt_NFQUEUE.h>

#define ipt_NFQ_info xt_NFQ_info

#endif /* _IPT_DSCP_TARGET_H */

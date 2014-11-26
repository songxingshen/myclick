/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_dscp.h */
/* x_tables module for matching the IPv4/IPv6 DSCP field
 *
 * (C) 2002 Harald Welte <laforge@gnumonks.org>
 * This software is distributed under GNU GPL v2, 1991
 *
 * See RFC2474 for a description of the DSCP field within the IP Header.
 *
 * xt_dscp.h,v 1.3 2002/08/05 19:00:21 laforge Exp
*/
#ifndef _XT_DSCP_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_DSCP_H

#define XT_DSCP_MASK	0xfc	/* 11111100 */
#define XT_DSCP_SHIFT	2
#define XT_DSCP_MAX	0x3f	/* 00111111 */

/* match info */
struct xt_dscp_info {
	u_int8_t dscp;
	u_int8_t invert;
};

struct xt_tos_match_info {
	u_int8_t tos_mask;
	u_int8_t tos_value;
	u_int8_t invert;
};

#endif /* _XT_DSCP_H */

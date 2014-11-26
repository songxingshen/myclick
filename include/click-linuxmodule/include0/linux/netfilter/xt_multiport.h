/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_multiport.h */
#ifndef _XT_MULTIPORT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_MULTIPORT_H

enum xt_multiport_flags
{
	XT_MULTIPORT_SOURCE,
	XT_MULTIPORT_DESTINATION,
	XT_MULTIPORT_EITHER
};

#define XT_MULTI_PORTS	15

/* Must fit inside union xt_matchinfo: 16 bytes */
struct xt_multiport
{
	u_int8_t flags;				/* Type of comparison */
	u_int8_t count;				/* Number of ports */
	u_int16_t ports[XT_MULTI_PORTS];	/* Ports */
};

struct xt_multiport_v1
{
	u_int8_t flags;				/* Type of comparison */
	u_int8_t count;				/* Number of ports */
	u_int16_t ports[XT_MULTI_PORTS];	/* Ports */
	u_int8_t pflags[XT_MULTI_PORTS];	/* Port flags */
	u_int8_t invert;			/* Invert flag */
};

#endif /*_XT_MULTIPORT_H*/

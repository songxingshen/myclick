/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_addrtype.h */
#ifndef _IPT_ADDRTYPE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_ADDRTYPE_H

enum {
	IPT_ADDRTYPE_INVERT_SOURCE	= 0x0001,
	IPT_ADDRTYPE_INVERT_DEST	= 0x0002,
	IPT_ADDRTYPE_LIMIT_IFACE_IN	= 0x0004,
	IPT_ADDRTYPE_LIMIT_IFACE_OUT	= 0x0008,
};

struct ipt_addrtype_info_v1 {
	u_int16_t	source;		/* source-type mask */
	u_int16_t	dest;		/* dest-type mask */
	u_int32_t	flags;
};

/* revision 0 */
struct ipt_addrtype_info {
	u_int16_t	source;		/* source-type mask */
	u_int16_t	dest;		/* dest-type mask */
	u_int32_t	invert_source;
	u_int32_t	invert_dest;
};

#endif

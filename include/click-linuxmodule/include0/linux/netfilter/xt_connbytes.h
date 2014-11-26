/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_connbytes.h */
#ifndef _XT_CONNBYTES_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_CONNBYTES_H

enum xt_connbytes_what {
	XT_CONNBYTES_PKTS,
	XT_CONNBYTES_BYTES,
	XT_CONNBYTES_AVGPKT,
};

enum xt_connbytes_direction {
	XT_CONNBYTES_DIR_ORIGINAL,
	XT_CONNBYTES_DIR_REPLY,
	XT_CONNBYTES_DIR_BOTH,
};

struct xt_connbytes_info
{
	struct {
		aligned_u64 from;	/* count to be matched */
		aligned_u64 to;		/* count to be matched */
	} count;
	u_int8_t what;		/* ipt_connbytes_what */
	u_int8_t direction;	/* ipt_connbytes_direction */
};
#endif

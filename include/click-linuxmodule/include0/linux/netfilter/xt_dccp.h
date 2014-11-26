/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_dccp.h */
#ifndef _XT_DCCP_H_
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_DCCP_H_

#define XT_DCCP_SRC_PORTS	        0x01
#define XT_DCCP_DEST_PORTS	        0x02
#define XT_DCCP_TYPE			0x04
#define XT_DCCP_OPTION			0x08

#define XT_DCCP_VALID_FLAGS		0x0f

struct xt_dccp_info {
	u_int16_t dpts[2];  /* Min, Max */
	u_int16_t spts[2];  /* Min, Max */

	u_int16_t flags;
	u_int16_t invflags;

	u_int16_t typemask;
	u_int8_t option;
};

#endif /* _XT_DCCP_H_ */


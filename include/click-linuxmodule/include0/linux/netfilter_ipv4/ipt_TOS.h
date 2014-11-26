/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_TOS.h */
#ifndef _IPT_TOS_H_target
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_TOS_H_target

#ifndef IPTOS_NORMALSVC
#define IPTOS_NORMALSVC 0
#endif

struct ipt_tos_target_info {
	u_int8_t tos;
};

#endif /*_IPT_TOS_H_target*/

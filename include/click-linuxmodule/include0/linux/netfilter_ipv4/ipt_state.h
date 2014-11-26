/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_state.h */
#ifndef _IPT_STATE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_STATE_H

/* Backwards compatibility for old userspace */

#include <linux/netfilter/xt_state.h>

#define IPT_STATE_BIT		XT_STATE_BIT
#define IPT_STATE_INVALID	XT_STATE_INVALID

#define IPT_STATE_UNTRACKED	XT_STATE_UNTRACKED

#define ipt_state_info		xt_state_info

#endif /*_IPT_STATE_H*/

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_policy.h */
#ifndef _IPT_POLICY_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_POLICY_H

#define IPT_POLICY_MAX_ELEM		XT_POLICY_MAX_ELEM

/* ipt_policy_flags */
#define IPT_POLICY_MATCH_IN		XT_POLICY_MATCH_IN
#define IPT_POLICY_MATCH_OUT		XT_POLICY_MATCH_OUT
#define IPT_POLICY_MATCH_NONE		XT_POLICY_MATCH_NONE
#define IPT_POLICY_MATCH_STRICT		XT_POLICY_MATCH_STRICT

/* ipt_policy_modes */
#define IPT_POLICY_MODE_TRANSPORT	XT_POLICY_MODE_TRANSPORT
#define IPT_POLICY_MODE_TUNNEL		XT_POLICY_MODE_TUNNEL

#define ipt_policy_spec			xt_policy_spec
#define ipt_policy_addr			xt_policy_addr
#define ipt_policy_elem			xt_policy_elem
#define ipt_policy_info			xt_policy_info

#endif /* _IPT_POLICY_H */

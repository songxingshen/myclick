/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv6/ip6t_policy.h */
#ifndef _IP6T_POLICY_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IP6T_POLICY_H

#define IP6T_POLICY_MAX_ELEM		XT_POLICY_MAX_ELEM

/* ip6t_policy_flags */
#define IP6T_POLICY_MATCH_IN		XT_POLICY_MATCH_IN
#define IP6T_POLICY_MATCH_OUT		XT_POLICY_MATCH_OUT
#define IP6T_POLICY_MATCH_NONE		XT_POLICY_MATCH_NONE
#define IP6T_POLICY_MATCH_STRICT	XT_POLICY_MATCH_STRICT

/* ip6t_policy_modes */
#define IP6T_POLICY_MODE_TRANSPORT	XT_POLICY_MODE_TRANSPORT
#define IP6T_POLICY_MODE_TUNNEL		XT_POLICY_MODE_TUNNEL

#define ip6t_policy_spec		xt_policy_spec
#define ip6t_policy_addr		xt_policy_addr
#define ip6t_policy_elem		xt_policy_elem
#define ip6t_policy_info		xt_policy_info

#endif /* _IP6T_POLICY_H */

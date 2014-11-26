/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/netfilter/nf_nat_core.h */
#ifndef _NF_NAT_CORE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _NF_NAT_CORE_H
#include <linux/list.h>
#include <net/netfilter/nf_conntrack.h>
#include <net/netfilter/nf_nat.h>

/* This header used to share core functionality between the standalone
   NAT module, and the compatibility layer's use of NAT for masquerading. */

extern unsigned int nf_nat_packet(struct nf_conn *ct,
				  enum ip_conntrack_info ctinfo,
				  unsigned int hooknum,
				  struct sk_buff *skb);

extern int nf_nat_icmp_reply_translation(struct nf_conn *ct,
					 enum ip_conntrack_info ctinfo,
					 unsigned int hooknum,
					 struct sk_buff *skb);

static inline int nf_nat_initialized(struct nf_conn *ct,
				     enum nf_nat_manip_type manip)
{
	if (manip == IP_NAT_MANIP_SRC)
		return test_bit(IPS_SRC_NAT_DONE_BIT, &ct->status);
	else
		return test_bit(IPS_DST_NAT_DONE_BIT, &ct->status);
}
#endif /* _NF_NAT_CORE_H */

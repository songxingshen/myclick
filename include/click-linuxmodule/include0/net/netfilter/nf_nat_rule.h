/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/netfilter/nf_nat_rule.h */
#ifndef _NF_NAT_RULE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _NF_NAT_RULE_H
#include <net/netfilter/nf_conntrack.h>
#include <net/netfilter/nf_nat.h>
#include <linux/netfilter_ipv4/ip_tables.h>

extern int nf_nat_rule_init(void) __init;
extern void nf_nat_rule_cleanup(void);
extern int nf_nat_rule_find(struct sk_buff *skb,
			    unsigned int hooknum,
			    const struct net_device *in,
			    const struct net_device *out,
			    struct nf_conn *ct);

extern unsigned int
alloc_null_binding(struct nf_conn *ct, unsigned int hooknum);
#endif /* _NF_NAT_RULE_H */

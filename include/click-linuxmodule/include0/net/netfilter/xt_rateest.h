/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/netfilter/xt_rateest.h */
#ifndef _XT_RATEEST_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_RATEEST_H

struct xt_rateest {
	struct hlist_node		list;
	char				name[IFNAMSIZ];
	unsigned int			refcnt;
	spinlock_t			lock;
	struct gnet_estimator		params;
	struct gnet_stats_rate_est	rstats;
	struct gnet_stats_basic		bstats;
};

extern struct xt_rateest *xt_rateest_lookup(const char *name);
extern void xt_rateest_put(struct xt_rateest *est);

#endif /* _XT_RATEEST_H */

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:33 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/netevent.h */
#ifndef _NET_EVENT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _NET_EVENT_H

/*
 *	Generic netevent notifiers
 *
 *	Authors:
 *      Tom Tucker              <tom@opengridcomputing.com>
 *      Steve Wise              <swise@opengridcomputing.com>
 *
 * 	Changes:
 */
#ifdef __KERNEL__

struct dst_entry;

struct netevent_redirect {
	struct dst_entry *old;
	struct dst_entry *new_value;
};

enum netevent_notif_type {
	NETEVENT_NEIGH_UPDATE = 1, /* arg is struct neighbour ptr */
	NETEVENT_PMTU_UPDATE,	   /* arg is struct dst_entry ptr */
	NETEVENT_REDIRECT,	   /* arg is struct netevent_redirect ptr */
};

extern int register_netevent_notifier(struct notifier_block *nb);
extern int unregister_netevent_notifier(struct notifier_block *nb);
extern int call_netevent_notifiers(unsigned long val, void *v);

#endif
#endif

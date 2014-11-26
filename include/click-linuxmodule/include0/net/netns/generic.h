/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/netns/generic.h */
/*
 * generic net pointers
 */

#ifndef __NET_GENERIC_H__
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __NET_GENERIC_H__

#include <linux/rcupdate.h>

/*
 * Generic net pointers are to be used by modules to put some private
 * stuff on the struct net without explicit struct net modification
 *
 * The rules are simple:
 * 1. register the ops with register_pernet_gen_device to get the id
 *    of your private pointer;
 * 2. call net_assign_generic() to put the private data on the struct
 *    net (most preferably this should be done in the ->init callback
 *    of the ops registered);
 * 3. do not change this pointer while the net is alive;
 * 4. do not try to have any private reference on the net_generic object.
 *
 * After accomplishing all of the above, the private pointer can be
 * accessed with the net_generic() call.
 */

struct net_generic {
	unsigned int len;
	struct rcu_head rcu;

	void *ptr[0];
};

static inline void *net_generic(struct net *net, int id)
{
	struct net_generic *ng;
	void *ptr;

	rcu_read_lock();
	ng = rcu_dereference(net->gen);
	BUG_ON(id == 0 || id > ng->len);
	ptr = ng->ptr[id - 1];
	rcu_read_unlock();

	return ptr;
}

extern int net_assign_generic(struct net *net, int id, void *data);
#endif

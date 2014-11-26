/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/netns/x_tables.h */
#ifndef __NETNS_X_TABLES_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __NETNS_X_TABLES_H

#include <linux/list.h>
#include <linux/net.h>

struct netns_xt {
	struct list_head tables[NPROTO];
};
#endif

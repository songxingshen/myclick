/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/if_macvlan.h */
#ifndef _LINUX_IF_MACVLAN_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_IF_MACVLAN_H

extern struct sk_buff *(*macvlan_handle_frame_hook)(struct sk_buff *);

#endif /* _LINUX_IF_MACVLAN_H */

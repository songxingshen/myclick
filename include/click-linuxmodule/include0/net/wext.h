/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/wext.h */
#ifndef __NET_WEXT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __NET_WEXT_H

/*
 * wireless extensions interface to the core code
 */

struct net;

#ifdef CONFIG_WIRELESS_EXT
extern int wext_proc_init(struct net *net);
extern void wext_proc_exit(struct net *net);
extern int wext_handle_ioctl(struct net *net, struct ifreq *ifr, unsigned int cmd,
			     void __user *arg);
extern int compat_wext_handle_ioctl(struct net *net, unsigned int cmd,
				    unsigned long arg);
#else
static inline int wext_proc_init(struct net *net)
{
	return 0;
}
static inline void wext_proc_exit(struct net *net)
{
	return;
}
static inline int wext_handle_ioctl(struct net *net, struct ifreq *ifr, unsigned int cmd,
				    void __user *arg)
{
	return -EINVAL;
}
static inline int compat_wext_handle_ioctl(struct net *net, unsigned int cmd,
					   unsigned long arg)
{
	return -EINVAL;
}
#endif

#endif /* __NET_WEXT_H */

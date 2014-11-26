/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:37 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/seq_file_net.h */
#ifndef __SEQ_FILE_NET_H__
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __SEQ_FILE_NET_H__

#include <linux/seq_file.h>

struct net;
extern struct net init_net;

struct seq_net_private {
#ifdef CONFIG_NET_NS
	struct net *net;
#endif
};

int seq_open_net(struct inode *, struct file *,
		 const struct seq_operations *, int);
int single_open_net(struct inode *, struct file *file,
		int (*show)(struct seq_file *, void *));
int seq_release_net(struct inode *, struct file *);
int single_release_net(struct inode *, struct file *);
static inline struct net *seq_file_net(struct seq_file *seq)
{
#ifdef CONFIG_NET_NS
	return ((struct seq_net_private *)seq->private)->net;
#else
	return &init_net;
#endif
}

#endif

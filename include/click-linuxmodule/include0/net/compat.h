/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:33 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/compat.h */
#ifndef NET_COMPAT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define NET_COMPAT_H


struct sock;

#if defined(CONFIG_COMPAT)

#include <linux/compat.h>

struct compat_msghdr {
	compat_uptr_t	msg_name;	/* void * */
	compat_int_t	msg_namelen;
	compat_uptr_t	msg_iov;	/* struct compat_iovec * */
	compat_size_t	msg_iovlen;
	compat_uptr_t	msg_control;	/* void * */
	compat_size_t	msg_controllen;
	compat_uint_t	msg_flags;
};

struct compat_cmsghdr {
	compat_size_t	cmsg_len;
	compat_int_t	cmsg_level;
	compat_int_t	cmsg_type;
};

extern int compat_sock_get_timestamp(struct sock *, struct timeval __user *);
extern int compat_sock_get_timestampns(struct sock *, struct timespec __user *);

#else /* defined(CONFIG_COMPAT) */
#define compat_msghdr	msghdr		/* to avoid compiler warnings */
#endif /* defined(CONFIG_COMPAT) */

extern int get_compat_msghdr(struct msghdr *, struct compat_msghdr __user *);
extern int verify_compat_iovec(struct msghdr *, struct iovec *, struct sockaddr *, int);
asmlinkage long compat_sys_sendmsg(int,struct compat_msghdr __user *,unsigned);
asmlinkage long compat_sys_recvmsg(int,struct compat_msghdr __user *,unsigned);
asmlinkage long compat_sys_getsockopt(int, int, int, char __user *, int __user *);
extern int put_cmsg_compat(struct msghdr*, int, int, int, void *);

extern int cmsghdr_from_user_compat_to_kern(struct msghdr *, struct sock *, unsigned char *, int);

extern int compat_mc_setsockopt(struct sock *, int, int, char __user *, int,
	int (*)(struct sock *, int, int, char __user *, int));
extern int compat_mc_getsockopt(struct sock *, int, int, char __user *,
	int __user *, int (*)(struct sock *, int, int, char __user *,
				int __user *));

#endif /* NET_COMPAT_H */

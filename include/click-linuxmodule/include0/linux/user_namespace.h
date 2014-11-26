/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:37 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/user_namespace.h */
#ifndef _LINUX_USER_NAMESPACE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_USER_NAMESPACE_H

#include <linux/kref.h>
#include <linux/nsproxy.h>
#include <linux/sched.h>
#include <linux/err.h>

#define UIDHASH_BITS	(CONFIG_BASE_SMALL ? 3 : 8)
#define UIDHASH_SZ	(1 << UIDHASH_BITS)

struct user_namespace {
	struct kref		kref;
	struct hlist_head	uidhash_table[UIDHASH_SZ];
	struct user_struct	*root_user;
};

extern struct user_namespace init_user_ns;

#ifdef CONFIG_USER_NS

static inline struct user_namespace *get_user_ns(struct user_namespace *ns)
{
	if (ns)
		kref_get(&ns->kref);
	return ns;
}

extern struct user_namespace *copy_user_ns(int flags,
					   struct user_namespace *old_ns);
extern void free_user_ns(struct kref *kref);

static inline void put_user_ns(struct user_namespace *ns)
{
	if (ns)
		kref_put(&ns->kref, free_user_ns);
}

#else

static inline struct user_namespace *get_user_ns(struct user_namespace *ns)
{
	return &init_user_ns;
}

static inline struct user_namespace *copy_user_ns(int flags,
						  struct user_namespace *old_ns)
{
	if (flags & CLONE_NEWUSER)
		return ERR_PTR(-EINVAL);

	return old_ns;
}

static inline void put_user_ns(struct user_namespace *ns)
{
}

#endif

#endif /* _LINUX_USER_H */

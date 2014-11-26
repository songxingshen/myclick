/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/lockd/share.h */
/*
 * linux/include/linux/lockd/share.h
 *
 * DOS share management for lockd.
 *
 * Copyright (C) 1996, Olaf Kirch <okir@monad.swb.de>
 */

#ifndef LINUX_LOCKD_SHARE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define LINUX_LOCKD_SHARE_H

/*
 * DOS share for a specific file
 */
struct nlm_share {
	struct nlm_share *	s_next;		/* linked list */
	struct nlm_host *	s_host;		/* client host */
	struct nlm_file *	s_file;		/* shared file */
	struct xdr_netobj	s_owner;	/* owner handle */
	u32			s_access;	/* access mode */
	u32			s_mode;		/* deny mode */
};

__be32	nlmsvc_share_file(struct nlm_host *, struct nlm_file *,
					       struct nlm_args *);
__be32	nlmsvc_unshare_file(struct nlm_host *, struct nlm_file *,
					       struct nlm_args *);
void	nlmsvc_traverse_shares(struct nlm_host *, struct nlm_file *,
					       nlm_host_match_fn_t);

#endif /* LINUX_LOCKD_SHARE_H */

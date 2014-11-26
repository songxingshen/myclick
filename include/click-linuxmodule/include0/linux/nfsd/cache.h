/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/nfsd/cache.h */
/*
 * include/linux/nfsd/cache.h
 *
 * Request reply cache. This was heavily inspired by the
 * implementation in 4.3BSD/4.4BSD.
 *
 * Copyright (C) 1995, 1996 Olaf Kirch <okir@monad.swb.de>
 */

#ifndef NFSCACHE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define NFSCACHE_H

#include <linux/in.h>
#include <linux/uio.h>

/*
 * Representation of a reply cache entry. The first two members *must*
 * be hash_next and hash_prev.
 */
struct svc_cacherep {
	struct hlist_node	c_hash;
	struct list_head	c_lru;

	unsigned char		c_state,	/* unused, inprog, done */
				c_type,		/* status, buffer */
				c_secure : 1;	/* req came from port < 1024 */
	struct sockaddr_in	c_addr;
	__be32			c_xid;
	u32			c_prot;
	u32			c_proc;
	u32			c_vers;
	unsigned long		c_timestamp;
	union {
		struct kvec	u_vec;
		__be32		u_status;
	}			c_u;
};

#define c_replvec		c_u.u_vec
#define c_replstat		c_u.u_status

/* cache entry states */
enum {
	RC_UNUSED,
	RC_INPROG,
	RC_DONE
};

/* return values */
enum {
	RC_DROPIT,
	RC_REPLY,
	RC_DOIT,
	RC_INTR
};

/*
 * Cache types.
 * We may want to add more types one day, e.g. for diropres and
 * attrstat replies. Using cache entries with fixed length instead
 * of buffer pointers may be more efficient.
 */
enum {
	RC_NOCACHE,
	RC_REPLSTAT,
	RC_REPLBUFF,
};

/*
 * If requests are retransmitted within this interval, they're dropped.
 */
#define RC_DELAY		(HZ/5)

int	nfsd_reply_cache_init(void);
void	nfsd_reply_cache_shutdown(void);
int	nfsd_cache_lookup(struct svc_rqst *, int);
void	nfsd_cache_update(struct svc_rqst *, int, __be32 *);

#endif /* NFSCACHE_H */
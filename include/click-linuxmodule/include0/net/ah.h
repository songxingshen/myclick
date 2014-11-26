/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/ah.h */
#ifndef _NET_AH_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _NET_AH_H

#include <linux/crypto.h>
#include <net/xfrm.h>

/* This is the maximum truncated ICV length that we know of. */
#define MAX_AH_AUTH_LEN	12

struct ah_data
{
	u8			*work_icv;
	int			icv_full_len;
	int			icv_trunc_len;

	struct crypto_hash	*tfm;
};

static inline int ah_mac_digest(struct ah_data *ahp, struct sk_buff *skb,
				u8 *auth_data)
{
	struct hash_desc desc;
	int err;

	desc.tfm = ahp->tfm;
	desc.flags = 0;

	memset(auth_data, 0, ahp->icv_trunc_len);
	err = crypto_hash_init(&desc);
	if (unlikely(err))
		goto out;
	err = skb_icv_walk(skb, &desc, 0, skb->len, crypto_hash_update);
	if (unlikely(err))
		goto out;
	err = crypto_hash_final(&desc, ahp->work_icv);

out:
	return err;
}

struct ip_auth_hdr;

static inline struct ip_auth_hdr *ip_auth_hdr(const struct sk_buff *skb)
{
	return (struct ip_auth_hdr *)skb_transport_header(skb);
}

#endif

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:33 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/datalink.h */
#ifndef _NET_INET_DATALINK_H_
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _NET_INET_DATALINK_H_

struct datalink_proto {
        unsigned char   type[8];

	struct llc_sap   *sap;

        unsigned short  header_length;

        int     (*rcvfunc)(struct sk_buff *, struct net_device *,
                                struct packet_type *, struct net_device *);
	int     (*request)(struct datalink_proto *, struct sk_buff *,
                                        unsigned char *);
	struct list_head node;
};

#endif

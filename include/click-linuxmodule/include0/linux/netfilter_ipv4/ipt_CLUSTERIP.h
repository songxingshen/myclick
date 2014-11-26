/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_CLUSTERIP.h */
#ifndef _IPT_CLUSTERIP_H_target
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_CLUSTERIP_H_target

enum clusterip_hashmode {
    CLUSTERIP_HASHMODE_SIP = 0,
    CLUSTERIP_HASHMODE_SIP_SPT,
    CLUSTERIP_HASHMODE_SIP_SPT_DPT,
};

#define CLUSTERIP_HASHMODE_MAX CLUSTERIP_HASHMODE_SIP_SPT_DPT

#define CLUSTERIP_MAX_NODES 16

#define CLUSTERIP_FLAG_NEW 0x00000001

struct clusterip_config;

struct ipt_clusterip_tgt_info {

	u_int32_t flags;

	/* only relevant for new ones */
	u_int8_t clustermac[6];
	u_int16_t num_total_nodes;
	u_int16_t num_local_nodes;
	u_int16_t local_nodes[CLUSTERIP_MAX_NODES];
	u_int32_t hash_mode;
	u_int32_t hash_initval;

	/* Used internally by the kernel */
	struct clusterip_config *config;
};

#endif /*_IPT_CLUSTERIP_H_target*/

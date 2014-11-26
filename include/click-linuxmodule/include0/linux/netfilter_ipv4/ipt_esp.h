/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_esp.h */
#ifndef _IPT_ESP_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_ESP_H

#include <linux/netfilter/xt_esp.h>

#define ipt_esp xt_esp
#define IPT_ESP_INV_SPI		XT_ESP_INV_SPI
#define IPT_ESP_INV_MASK	XT_ESP_INV_MASK

#endif /*_IPT_ESP_H*/

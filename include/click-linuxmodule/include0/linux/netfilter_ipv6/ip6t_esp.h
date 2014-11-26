/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv6/ip6t_esp.h */
#ifndef _IP6T_ESP_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IP6T_ESP_H

#include <linux/netfilter/xt_esp.h>

#define ip6t_esp xt_esp
#define IP6T_ESP_INV_SPI	XT_ESP_INV_SPI
#define IP6T_ESP_INV_MASK	XT_ESP_INV_MASK

#endif /*_IP6T_ESP_H*/

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/ssb/ssb_embedded.h */
#ifndef LINUX_SSB_EMBEDDED_H_
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define LINUX_SSB_EMBEDDED_H_

#include <linux/types.h>
#include <linux/ssb/ssb.h>


extern int ssb_watchdog_timer_set(struct ssb_bus *bus, u32 ticks);

/* Generic GPIO API */
u32 ssb_gpio_in(struct ssb_bus *bus, u32 mask);
u32 ssb_gpio_out(struct ssb_bus *bus, u32 mask, u32 value);
u32 ssb_gpio_outen(struct ssb_bus *bus, u32 mask, u32 value);
u32 ssb_gpio_control(struct ssb_bus *bus, u32 mask, u32 value);
u32 ssb_gpio_intmask(struct ssb_bus *bus, u32 mask, u32 value);
u32 ssb_gpio_polarity(struct ssb_bus *bus, u32 mask, u32 value);

#endif /* LINUX_SSB_EMBEDDED_H_ */

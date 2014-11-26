/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/usb/isp116x.h */
/*
 * Board initialization code should put one of these into dev->platform_data
 * and place the isp116x onto platform_bus.
 */

#ifndef __LINUX_USB_ISP116X_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_USB_ISP116X_H

struct isp116x_platform_data {
	/* Enable internal resistors on downstream ports */
	unsigned sel15Kres:1;
	/* On-chip overcurrent detection */
	unsigned oc_enable:1;
	/* INT output polarity */
	unsigned int_act_high:1;
	/* INT edge or level triggered */
	unsigned int_edge_triggered:1;
	/* Enable wakeup by devices on usb bus (e.g. wakeup
	   by attachment/detachment or by device activity
	   such as moving a mouse). When chosen, this option
	   prevents stopping internal clock, increasing
	   thereby power consumption in suspended state. */
	unsigned remote_wakeup_enable:1;
	/* Inter-io delay (ns). The chip is picky about access timings; it
	   expects at least:
	   150ns delay between consecutive accesses to DATA_REG,
	   300ns delay between access to ADDR_REG and DATA_REG
	   OE, WE MUST NOT be changed during these intervals
	 */
	void (*delay) (struct device *dev, int delay);
};

#endif /* __LINUX_USB_ISP116X_H */

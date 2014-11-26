/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/mfd/htc-pasic3.h */
/*
 * HTC PASIC3 driver - LEDs and DS1WM
 *
 * Copyright (c) 2007 Philipp Zabel <philipp.zabel@gmail.com>
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file COPYING in the main directory of this archive for
 * more details.
 *
 */

#ifndef __PASIC3_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __PASIC3_H

#include <linux/platform_device.h>
#include <linux/leds.h>

extern void pasic3_write_register(struct device *dev, u32 reg, u8 val);
extern u8 pasic3_read_register(struct device *dev, u32 reg);

/*
 * mask for registers 0x20,0x21,0x22
 */
#define PASIC3_MASK_LED0 0x04
#define PASIC3_MASK_LED1 0x08
#define PASIC3_MASK_LED2 0x40

/*
 * bits in register 0x06
 */
#define PASIC3_BIT2_LED0 0x08
#define PASIC3_BIT2_LED1 0x10
#define PASIC3_BIT2_LED2 0x20

struct pasic3_led {
	struct led_classdev         led;
	unsigned int                hw_num;
	unsigned int                bit2;
	unsigned int                mask;
	struct pasic3_leds_machinfo *pdata;
};

struct pasic3_leds_machinfo {
	unsigned int      num_leds;
	unsigned int      power_gpio;
	struct pasic3_led *leds;
};

struct pasic3_platform_data {
	struct pasic3_leds_machinfo *led_pdata;
	unsigned int                 bus_shift;
	unsigned int                 clock_rate;
};

#endif

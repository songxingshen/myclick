/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:38 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/input-polldev.h */
#ifndef _INPUT_POLLDEV_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _INPUT_POLLDEV_H

/*
 * Copyright (c) 2007 Dmitry Torokhov
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */

#include <linux/input.h>
#include <linux/workqueue.h>

/**
 * struct input_polled_dev - simple polled input device
 * @private: private driver data
 * @flush: driver-supplied method that flushes device's state upon
 *	opening (optional)
 * @poll: driver-supplied method that polls the device and posts
 *	input events (mandatory).
 * @poll_interval: specifies how often the poll() method shoudl be called.
 * @input: input device structire associated with the polled device.
 *	Must be properly initialized by the driver (id, name, phys, bits).
 *
 * Polled input device provides a skeleton for supporting simple input
 * devices that do not raise interrupts but have to be periodically
 * scanned or polled to detect changes in their state.
 */
struct input_polled_dev {
	void *private;

	void (*flush)(struct input_polled_dev *dev);
	void (*poll)(struct input_polled_dev *dev);
	unsigned int poll_interval; /* msec */

	struct input_dev *input;
	struct delayed_work work;
};

struct input_polled_dev *input_allocate_polled_device(void);
void input_free_polled_device(struct input_polled_dev *dev);
int input_register_polled_device(struct input_polled_dev *dev);
void input_unregister_polled_device(struct input_polled_dev *dev);

#endif

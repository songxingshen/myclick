/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:38 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/pm_wakeup.h */
/*
 *  pm_wakeup.h - Power management wakeup interface
 *
 *  Copyright (C) 2008 Alan Stern
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _LINUX_PM_WAKEUP_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_PM_WAKEUP_H

#ifndef _DEVICE_H_
# error "please don't include this file directly"
#endif

#ifdef CONFIG_PM

/* changes to device_may_wakeup take effect on the next pm state change.
 * by default, devices should wakeup if they can.
 */
static inline void device_init_wakeup(struct device *dev, int val)
{
	dev->power.can_wakeup = dev->power.should_wakeup = !!val;
}

static inline void device_set_wakeup_capable(struct device *dev, int val)
{
	dev->power.can_wakeup = !!val;
}

static inline int device_can_wakeup(struct device *dev)
{
	return dev->power.can_wakeup;
}

static inline void device_set_wakeup_enable(struct device *dev, int val)
{
	dev->power.should_wakeup = !!val;
}

static inline int device_may_wakeup(struct device *dev)
{
	return dev->power.can_wakeup && dev->power.should_wakeup;
}

#else /* !CONFIG_PM */

/* For some reason the next two routines work even without CONFIG_PM */
static inline void device_init_wakeup(struct device *dev, int val)
{
	dev->power.can_wakeup = !!val;
}

static inline void device_set_wakeup_capable(struct device *dev, int val) { }

static inline int device_can_wakeup(struct device *dev)
{
	return dev->power.can_wakeup;
}

#define device_set_wakeup_enable(dev, val)	do {} while (0)
#define device_may_wakeup(dev)			0

#endif /* !CONFIG_PM */

#endif /* _LINUX_PM_WAKEUP_H */

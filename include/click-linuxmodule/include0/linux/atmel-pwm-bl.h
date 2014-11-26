/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:38 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/atmel-pwm-bl.h */
/*
 * Copyright (C) 2007 Atmel Corporation
 *
 * Driver for the AT32AP700X PS/2 controller (PSIF).
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 */

#ifndef __INCLUDE_ATMEL_PWM_BL_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __INCLUDE_ATMEL_PWM_BL_H

/**
 * struct atmel_pwm_bl_platform_data
 * @pwm_channel: which PWM channel in the PWM module to use.
 * @pwm_frequency: PWM frequency to generate, the driver will try to be as
 *	close as the prescaler allows.
 * @pwm_compare_max: value to use in the PWM channel compare register.
 * @pwm_duty_max: maximum duty cycle value, must be less than or equal to
 *	pwm_compare_max.
 * @pwm_duty_min: minimum duty cycle value, must be less than pwm_duty_max.
 * @pwm_active_low: set to one if the low part of the PWM signal increases the
 *	brightness of the backlight.
 * @gpio_on: GPIO line to control the backlight on/off, set to -1 if not used.
 * @on_active_low: set to one if the on/off signal is on when GPIO is low.
 *
 * This struct must be added to the platform device in the board code. It is
 * used by the atmel-pwm-bl driver to setup the GPIO to control on/off and the
 * PWM device.
 */
struct atmel_pwm_bl_platform_data {
	unsigned int pwm_channel;
	unsigned int pwm_frequency;
	unsigned int pwm_compare_max;
	unsigned int pwm_duty_max;
	unsigned int pwm_duty_min;
	unsigned int pwm_active_low;
	int gpio_on;
	unsigned int on_active_low;
};

#endif /* __INCLUDE_ATMEL_PWM_BL_H */

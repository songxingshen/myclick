/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/pwm_backlight.h */
/*
 * Generic PWM backlight driver data - see drivers/video/backlight/pwm_bl.c
 */
#ifndef __LINUX_PWM_BACKLIGHT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_PWM_BACKLIGHT_H

struct platform_pwm_backlight_data {
	int pwm_id;
	unsigned int max_brightness;
	unsigned int dft_brightness;
	unsigned int pwm_period_ns;
	int (*init)(struct device *dev);
	int (*notify)(int brightness);
	void (*exit)(struct device *dev);
};

#endif

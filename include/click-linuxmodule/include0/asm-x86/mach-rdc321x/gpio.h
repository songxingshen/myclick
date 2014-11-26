/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/mach-rdc321x/gpio.h */
#ifndef _RDC321X_GPIO_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _RDC321X_GPIO_H

extern int rdc_gpio_get_value(unsigned gpio);
extern void rdc_gpio_set_value(unsigned gpio, int value);
extern int rdc_gpio_direction_input(unsigned gpio);
extern int rdc_gpio_direction_output(unsigned gpio, int value);
extern int rdc_gpio_request(unsigned gpio, const char *label);
extern void rdc_gpio_free(unsigned gpio);
extern void __init rdc321x_gpio_setup(void);

/* Wrappers for the arch-neutral GPIO API */

static inline int gpio_request(unsigned gpio, const char *label)
{
	return rdc_gpio_request(gpio, label);
}

static inline void gpio_free(unsigned gpio)
{
	rdc_gpio_free(gpio);
}

static inline int gpio_direction_input(unsigned gpio)
{
	return rdc_gpio_direction_input(gpio);
}

static inline int gpio_direction_output(unsigned gpio, int value)
{
	return rdc_gpio_direction_output(gpio, value);
}

static inline int gpio_get_value(unsigned gpio)
{
	return rdc_gpio_get_value(gpio);
}

static inline void gpio_set_value(unsigned gpio, int value)
{
	rdc_gpio_set_value(gpio, value);
}

static inline int gpio_to_irq(unsigned gpio)
{
	return gpio;
}

static inline int irq_to_gpio(unsigned irq)
{
	return irq;
}

/* For cansleep */
#include <asm-generic/gpio.h>

#endif /* _RDC321X_GPIO_H_ */
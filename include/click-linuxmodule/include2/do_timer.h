/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:43 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/mach-default/do_timer.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
/* defines for inline arch setup functions */
#include <linux/clockchips.h>

#include <asm/i8259.h>
#include <asm/i8253.h>

/**
 * do_timer_interrupt_hook - hook into timer tick
 *
 * Call the pit clock event handler. see asm/i8253.h
 **/

static inline void do_timer_interrupt_hook(void)
{
	global_clock_event->event_handler(global_clock_event);
}
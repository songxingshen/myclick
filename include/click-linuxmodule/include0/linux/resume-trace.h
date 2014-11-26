/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:38 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/resume-trace.h */
#ifndef RESUME_TRACE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define RESUME_TRACE_H

#ifdef CONFIG_PM_TRACE
#include <asm/resume-trace.h>

extern int pm_trace_enabled;

struct device;
extern void set_trace_device(struct device *);
extern void generate_resume_trace(const void *tracedata, unsigned int user);

#define TRACE_DEVICE(dev) do { \
	if (pm_trace_enabled) \
		set_trace_device(dev); \
	} while(0)

#else

#define TRACE_DEVICE(dev) do { } while (0)
#define TRACE_RESUME(dev) do { } while (0)

#endif

#endif

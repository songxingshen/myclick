/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/acpi/container.h */
#ifndef __ACPI_CONTAINER_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ACPI_CONTAINER_H

#include <linux/kernel.h>

struct acpi_container {
	acpi_handle handle;
	unsigned long sun;
	int state;
};

#endif				/* __ACPI_CONTAINER_H */

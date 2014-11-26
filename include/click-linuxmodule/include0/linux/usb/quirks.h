/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/usb/quirks.h */
/*
 * This file holds the definitions of quirks found in USB devices.
 * Only quirks that affect the whole device, not an interface,
 * belong here.
 */

#ifndef __LINUX_USB_QUIRKS_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_USB_QUIRKS_H

/* string descriptors must not be fetched using a 255-byte read */
#define USB_QUIRK_STRING_FETCH_255	0x00000001

/* device can't resume correctly so reset it instead */
#define USB_QUIRK_RESET_RESUME		0x00000002

/* device can't handle Set-Interface requests */
#define USB_QUIRK_NO_SET_INTF		0x00000004

#endif /* __LINUX_USB_QUIRKS_H */

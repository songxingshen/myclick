/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/kbd_diacr.h */
#ifndef _DIACR_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _DIACR_H
#include <linux/kd.h>

extern struct kbdiacruc accent_table[];
extern unsigned int accent_table_size;

#endif /* _DIACR_H */

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/bcd.h */
/* Permission is hereby granted to copy, modify and redistribute this code
 * in terms of the GNU Library General Public License, Version 2 or later,
 * at your option.
 */

/* macros to translate to/from binary and binary-coded decimal (frequently
 * found in RTC chips).
 */

#ifndef _BCD_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _BCD_H

#include <linux/compiler.h>

unsigned bcd2bin(unsigned char val) __attribute_const__;
unsigned char bin2bcd(unsigned val) __attribute_const__;

#define BCD2BIN(val)	bcd2bin(val)
#define BIN2BCD(val)	bin2bcd(val)

/* backwards compat */
#define BCD_TO_BIN(val) ((val)=BCD2BIN(val))
#define BIN_TO_BCD(val) ((val)=BIN2BCD(val))

#endif /* _BCD_H */

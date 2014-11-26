/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/video/iga.h */
/* $Id: iga.h,v 1.2 1999/09/11 22:56:31 zaitcev Exp $
 * iga1682.h: Sparc/PCI iga1682 driver constants etc.
 *
 * Copyleft 1998 V. Roganov and G. Raiko
 */

#ifndef _IGA1682_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IGA1682_H 1

#define IGA_ATTR_CTL			0x3C0
#define   IGA_IDX_VGA_OVERSCAN		0x11
#define DAC_W_INDEX                     0x03C8
#define DAC_DATA                        0x03C9
#define IGA_EXT_CNTRL                   0x3CE
#define   IGA_IDX_EXT_BUS_CNTL          0x30
#define     MEM_SIZE_ALIAS              0x3
#define     MEM_SIZE_1M                 0x0
#define     MEM_SIZE_2M                 0x1
#define     MEM_SIZE_4M                 0x2
#define     MEM_SIZE_RESERVED           0x3
#define   IGA_IDX_OVERSCAN_COLOR        0x58
#define   IGA_IDX_EXT_MEM_2             0x72

#endif /* !(_IGA1682_H) */

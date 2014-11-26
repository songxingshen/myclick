/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/sound/sscape_ioctl.h */
#ifndef SSCAPE_IOCTL_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define SSCAPE_IOCTL_H


struct sscape_bootblock
{
  unsigned char code[256];
  unsigned version;
};

#define SSCAPE_MICROCODE_SIZE  65536

struct sscape_microcode
{
  unsigned char __user *code;
};

#define SND_SSCAPE_LOAD_BOOTB  _IOWR('P', 100, struct sscape_bootblock)
#define SND_SSCAPE_LOAD_MCODE  _IOW ('P', 101, struct sscape_microcode)

#endif

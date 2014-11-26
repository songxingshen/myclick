/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/mach-rdc321x/rdc321x_defs.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define PFX	"rdc321x: "

/* General purpose configuration and data registers */
#define RDC3210_CFGREG_ADDR     0x0CF8
#define RDC3210_CFGREG_DATA     0x0CFC

#define RDC321X_GPIO_CTRL_REG1	0x48
#define RDC321X_GPIO_CTRL_REG2	0x84
#define RDC321X_GPIO_DATA_REG1	0x4c
#define RDC321X_GPIO_DATA_REG2	0x88

#define RDC321X_MAX_GPIO	58

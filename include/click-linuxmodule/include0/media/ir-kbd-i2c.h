/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/media/ir-kbd-i2c.h */
#ifndef _IR_I2C
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IR_I2C

#include <media/ir-common.h>

struct IR_i2c;

struct IR_i2c {
	IR_KEYTAB_TYPE         *ir_codes;
	struct i2c_client      c;
	struct input_dev       *input;
	struct ir_input_state  ir;

	/* Used to avoid fast repeating */
	unsigned char          old;

	struct work_struct     work;
	struct timer_list      timer;
	char                   phys[32];
	int                    (*get_key)(struct IR_i2c*, u32*, u32*);
};
#endif

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/media/tveeprom.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
/*
 */

struct tveeprom {
	u32 has_radio;
	/* If has_ir == 0, then it is unknown what the IR capabilities are,
	   otherwise:
	   bit 0: 1 (= IR capabilities are known)
	   bit 1: IR receiver present
	   bit 2: IR transmitter (blaster) present */
	u32 has_ir;
	u32 has_MAC_address; /* 0: no MAC, 1: MAC present, 2: unknown */

	u32 tuner_type;
	u32 tuner_formats;
	u32 tuner_hauppauge_model;

	u32 tuner2_type;
	u32 tuner2_formats;
	u32 tuner2_hauppauge_model;

	u32 digitizer;
	u32 digitizer_formats;

	u32 audio_processor;
	u32 decoder_processor;

	u32 model;
	u32 revision;
	u32 serial_number;
	char rev_str[5];
	u8 MAC_address[6];
};

void tveeprom_hauppauge_analog(struct i2c_client *c, struct tveeprom *tvee,
			       unsigned char *eeprom_data);

int tveeprom_read(struct i2c_client *c, unsigned char *eedata, int len);

/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_u32.h */
#ifndef _XT_U32_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_U32_H 1

enum xt_u32_ops {
	XT_U32_AND,
	XT_U32_LEFTSH,
	XT_U32_RIGHTSH,
	XT_U32_AT,
};

struct xt_u32_location_element {
	u_int32_t number;
	u_int8_t nextop;
};

struct xt_u32_value_element {
	u_int32_t min;
	u_int32_t max;
};

/*
 * Any way to allow for an arbitrary number of elements?
 * For now, I settle with a limit of 10 each.
 */
#define XT_U32_MAXSIZE 10

struct xt_u32_test {
	struct xt_u32_location_element location[XT_U32_MAXSIZE+1];
	struct xt_u32_value_element value[XT_U32_MAXSIZE+1];
	u_int8_t nnums;
	u_int8_t nvalues;
};

struct xt_u32 {
	struct xt_u32_test tests[XT_U32_MAXSIZE+1];
	u_int8_t ntests;
	u_int8_t invert;
};

#endif /* _XT_U32_H */

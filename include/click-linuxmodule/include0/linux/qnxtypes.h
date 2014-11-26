/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:38 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/qnxtypes.h */
/*
 *  Name                         : qnxtypes.h
 *  Author                       : Richard Frowijn
 *  Function                     : standard qnx types
 *  Version                      : 1.0.2
 *  Last modified                : 2000-01-06
 *
 *  History                      : 22-03-1998 created
 *
 */

#ifndef _QNX4TYPES_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _QNX4TYPES_H

typedef __le16 qnx4_nxtnt_t;
typedef __u8  qnx4_ftype_t;

typedef struct {
	__le32 xtnt_blk;
	__le32 xtnt_size;
} qnx4_xtnt_t;

typedef __le16 qnx4_mode_t;
typedef __le16 qnx4_muid_t;
typedef __le16 qnx4_mgid_t;
typedef __le32 qnx4_off_t;
typedef __le16 qnx4_nlink_t;

#endif
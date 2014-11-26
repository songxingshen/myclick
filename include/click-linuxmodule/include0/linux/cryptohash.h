/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/cryptohash.h */
#ifndef __CRYPTOHASH_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __CRYPTOHASH_H

#define SHA_DIGEST_WORDS 5
#define SHA_WORKSPACE_WORDS 80

void sha_init(__u32 *buf);
void sha_transform(__u32 *digest, const char *data, __u32 *W);

__u32 half_md4_transform(__u32 buf[4], __u32 const in[8]);

#endif

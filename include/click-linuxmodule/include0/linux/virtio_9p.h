/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/virtio_9p.h */
#ifndef _LINUX_VIRTIO_9P_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_VIRTIO_9P_H
/* This header is BSD licensed so anyone can use the definitions to implement
 * compatible drivers/servers. */
#include <linux/virtio_config.h>

/* The ID for virtio console */
#define VIRTIO_ID_9P	9
/* Maximum number of virtio channels per partition (1 for now) */
#define MAX_9P_CHAN	1

#endif /* _LINUX_VIRTIO_9P_H */

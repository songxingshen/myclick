/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/keys/rxrpc-type.h */
/* RxRPC key type
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef _KEYS_RXRPC_TYPE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _KEYS_RXRPC_TYPE_H

#include <linux/key.h>

/*
 * key type for AF_RXRPC keys
 */
extern struct key_type key_type_rxrpc;

extern struct key *rxrpc_get_null_key(const char *);

#endif /* _KEYS_RXRPC_TYPE_H */

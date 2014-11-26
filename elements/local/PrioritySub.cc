/*
 * PrioritySub.cc
 *
 *  Created on: 2014年11月25日
 *      Author: Administrator
 */

/*
 * fastudpsource.{cc,hh} -- fast udp source, a benchmark tool
 *
 * Copyright (c) 1999-2000 Massachusetts Institute of Technology
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, subject to the conditions
 * listed in the Click LICENSE file. These conditions include: you must
 * preserve this copyright notice, and you cannot mention the copyright
 * holders in advertising related to the Software without their permission.
 * The Software is provided WITHOUT ANY WARRANTY, EXPRESS OR IMPLIED. This
 * notice is a summary of the Click LICENSE file; the license in that file is
 * legally binding.
 */

#include <click/config.h>
#include <clicknet/psp.h>
#include "PrioritySub.hh"
#include <click/args.hh>
#include <click/etheraddress.hh>
#include <click/error.hh>
#include <click/straccum.hh>
#include <click/glue.hh>
#include <click/standard/alignmentinfo.hh>

CLICK_DECLS

PrioritySub::PrioritySub() :
		_packet(0) {

}

PrioritySub::~PrioritySub() {
}

int PrioritySub::configure(Vector<String> &conf, ErrorHandler *errh) {

	if (Args(conf, this, errh).read_mp("PRIORITY",
			_priority).complete() < 0)
		return -1;

	return 0;
}

/*
 int
 FastPSPSource::initialize(ErrorHandler *)
 {
 _count = 0;
 _incr = 0;
 WritablePacket *q = Packet::make(_len);
 _packet = q;
 memcpy(q->data(), &_ethh, 14);
 click_psp *psp = reinterpret_cast<click_psp *>(q->data()+14);
 click_udp *udp = reinterpret_cast<click_udp *>(psp + 1);
 _psphdr = psp;
 // set up PSP header
 psp->psp_v = 4;
 psp->psp_resv = 0;
 psp->psp_id = 0;
 psp->psp_len = htons(_len-14-sizeof(click_psp));
 psp->psp_next = PSP_UDP;
 psp->psp_ttl=8;
 psp->psp_src=_sipaddr;
 psp->psp_dst=_dipaddr;
 _packet->set_dst_psp_anno(_dipaddr);
 _packet->set_psp_header(psp, sizeof(click_psp));

 // set up UDP header
 udp->uh_sport = htons(_sport);
 udp->uh_dport = htons(_dport);
 udp->uh_sum = 0;
 unsigned short len = _len-14-sizeof(click_psp);
 udp->uh_ulen = htons(len);
 udp->uh_sum = 0;

 return 0;
 }
 */
void PrioritySub::push(int port, Packet *p) {

	WritablePacket *q = Packet::make(p->length());
	_packet = q;

	click_psp dest_psp;
	memcpy(&dest_psp, p->data() + 14, sizeof(click_psp));
	
	//printf("==%x==",dest_psp.psp_resv);
	dest_psp.psp_resv = _priority;
	//printf("==%x==",dest_psp.psp_resv);

	memcpy(q->data(), p->data(), 14);
	memcpy(q->data()+14, &dest_psp, sizeof(click_psp));
	memcpy(q->data()+ 14 + sizeof(click_psp), p->data() + 14 + sizeof(click_psp),
			p->length() - 14 - sizeof(click_psp));

	

	output(0).push(q);
}

CLICK_ENDDECLS
EXPORT_ELEMENT(PrioritySub)
ELEMENT_MT_SAFE(PrioritySub)

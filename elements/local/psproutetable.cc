/*
 * psproutetable.{cc,hh} -- a stupid PSP routing table, best for small routing tables
 * Ricky Huang
 *
 */
#include <iostream>
#include <click/config.h>
#include <click/ipaddress.hh>
#include <click/args.hh>
#include <click/error.hh>
#include <click/glue.hh>
#include <click/straccum.hh>
#include <click/router.hh>
#include "psproutetable.hh"

CLICK_DECLS

PSPRoute cp_psp_route(String s) {
	//conf_item = cp_shift_spacevec(s);
	click_chatter(s.c_str());
	uint8_t b;
	uint8_t u8[8];
	sscanf(s.c_str(), "%hhd.%hhd.%hhd.%hhd.%hhd.%hhd.%hhd.%hhd%*[ ]%hhd",
			&u8[0], &u8[1], &u8[2], &u8[3], &u8[4], &u8[5], &u8[6], &u8[7], &b);
	uint64_t tmp;
	tmp = *reinterpret_cast<uint64_t*>(u8);
	std::cout << tmp << "==" << 0x000000000201810a << "==" << (int)b << std::endl;
	PSPAddress temp1(tmp);
	PSPRoute route_tmp1(temp1, b);
	return route_tmp1;
//	add_route(route_tmp1, false, 0, errh);

//	unsigned char a[8];
//	unsigned short us;
//	std::cout << s.length() << std::endl;
//	int lastpos = 0;
//	for (int j = 0; j < 7; j++) {
//		int pos = s.find_left('.', lastpos);
//
//		//memcpy(a+7-j,s.substring(lastpos, pos - lastpos).c_str(), 1);
//		//a[7 - j] = (unsigned char*)s.substring(lastpos, pos - lastpos).c_str();
//		std::cout << lastpos << "  " << pos << std::endl
//				<< s.substring(lastpos, pos - lastpos).c_str() << std::endl;
//
//		sscanf(s.substring(lastpos, pos - lastpos).c_str(), "%i#", &us);
//		memcpy(a + 7 - j, &us, 1);
//		lastpos = pos + 1;
//	}
//	int pos = s.find_left(' ', lastpos);
//
//	//memcpy(a,s.substring(lastpos, pos - lastpos).c_str(), 1);
//	//a[0] = s.substring(lastpos, pos - lastpos).c_str();
//	std::cout << lastpos << "  " << pos << std::endl
//			<< s.substring(lastpos, pos - lastpos).c_str() << std::endl;
//	sscanf(s.substring(lastpos, pos - lastpos).c_str(), "%i#", &us);
//	memcpy(a, &us, 1);
//
//	uint64_t tmp;
//	tmp = *reinterpret_cast<uint64_t*>(a);
//	std::cout << tmp << std::endl;
//
//	while (s.at(pos) == ' ') {
//		pos++;
//	}
//
//	std::cout << pos << std::endl << s.substring(pos).c_str() << std::endl;

//std::cout << "configure the psp_route_table ..." << cp_shift_spacevec(s)<< std::endl;
}

int PSPRouteTable::configure(Vector<String> &conf, ErrorHandler *errh) {
	click_chatter("PSPRouteTable: configure the psp_route_table ...");
	int r = 0, r1, eexist = 0;
	String conf_item;
	PSPRoute route;

	for (int i = 0; i < conf.size(); i++) {
		add_route(cp_psp_route(conf[i]), false, 0, errh);
	}

	PSPAddress temp(0x00000000d60cc5ca);

	PSPRoute route_tmp(temp, 2);

	add_route(route_tmp, false, 0, errh);

	PSPAddress temp1(0x000000000201810a);
	PSPRoute route_tmp1(temp1, 1);
	add_route(route_tmp1, false, 0, errh);
	//
	// maybe make a new slot
	//_t.push_back(r);

	/*
	 for (int i = 0; i < conf.size(); i++) {
	 if ((r1 = add_route(route, false, 0, errh)) < 0) {
	 if (r1 == -EEXIST)
	 ++eexist;
	 else
	 r = r1;
	 }
	 }
	 */

	if (eexist)
		errh->warning("%d %s replaced by later versions", eexist,
				eexist > 1 ? "routes" : "route");
	return r;
}

int PSPRouteTable::add_route(const PSPRoute&, bool, PSPRoute*,
		ErrorHandler *errh) {
	// by default, cannot add routes
	std::cout << "void method";
	return errh->error("cannot add routes to this routing table");
}

int PSPRouteTable::remove_route(const PSPRoute&, PSPRoute*,
		ErrorHandler *errh) {
	// by default, cannot remove routes
	return errh->error("cannot delete routes from this routing table");
}

int PSPRouteTable::lookup_route(PSPAddress) const {
	return -1;			// by default, route lookups fail
}

void PSPRouteTable::push(int, Packet *p) {
	click_chatter("psproutetable PUSH...");
	const click_ether *peth = reinterpret_cast<const click_ether *>(p->data());
	const click_psp *psp = reinterpret_cast<const click_psp *>(p->data() + 14);
	const click_udp *udp = reinterpret_cast<const click_udp *>(psp + 1);
	unsigned char *p_pspaddr = 0;
	click_chatter("psproutetable PUSH...");
	//p_pspaddr = (unsigned char *)&(psp->psp_dst);
	PSPAddress lookuppsp = PSPAddress(psp->psp_dst);

	int port = lookup_route(lookuppsp);
	if (port >= 0) {
		assert(port < noutputs());
		output(port).push(p);
	} else {
		static int complained = 0;
		if (++complained <= 5)
			click_chatter("IPRouteTable: no route for %s",
					p->dst_ip_anno().unparse().c_str());
		p->kill();
	}
}

int PSPRouteTable::add_route_handler(const String &conf, Element *e,
		void *thunk, ErrorHandler *errh) {
	//PSPRouteTable *table = static_cast<PSPRouteTable *>(e);
	// return table->run_command((thunk ? CMD_SET : CMD_ADD), conf, 0, errh);
	return 0;
}

int PSPRouteTable::remove_route_handler(const String &conf, Element *e, void *,
		ErrorHandler *errh) {
	//IPRouteTable *table = static_cast<IPRouteTable *>(e);
	// return table->run_command(CMD_REMOVE, conf, 0, errh);
	return 0;
}

void PSPRouteTable::add_handlers() {
	add_write_handler("add", add_route_handler, 0);

	add_write_handler("remove", remove_route_handler);

}

// must always generate the whole template instance! LookupIPRoute demands it
//template class Vector<PSPTable::Entry>;
CLICK_ENDDECLS
ELEMENT_PROVIDES(PSPRouteTable)



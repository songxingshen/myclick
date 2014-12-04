/*
 * myPrioSched.hh
 *
 *  Created on: 2014年12月2日
 *      Author: Administrator
 */

#ifndef ELEMENTS_LOCAL_MYPRIOSCHED_HH_
#define ELEMENTS_LOCAL_MYPRIOSCHED_HH_

#include <click/element.hh>
#include <click/notifier.hh>
#include "../standard/priosched.hh"
#include<math.h>
CLICK_DECLS

class MyPrioSched: public PrioSched{
public:
	MyPrioSched();
    ~MyPrioSched();

    const char *class_name() const		{ return "MyPrioSched"; }

    //int configure(Vector<String>&, ErrorHandler *);
    int initialize(ErrorHandler *);

    Packet* pull(int port);
private:
    NotifierSignal *_signals;
    int *weight;
    int *count;

};


CLICK_ENDDECLS
#endif /* ELEMENTS_LOCAL_MYPRIOSCHED_HH_ */

/*
 * myPrioSched.cc
 *
 *  Created on: 2014年12月2日
 *      Author: Administrator
 */

#include <click/config.h>
#include <click/error.hh>
#include "myPrioSched.hh"
CLICK_DECLS

int getmax(int *, int *, int);
MyPrioSched::MyPrioSched() {
}
MyPrioSched::~MyPrioSched() {
}

int MyPrioSched::initialize(ErrorHandler *errh) {
	count = (int *) malloc(ninputs() * sizeof(int));
	weight = (int *) malloc(ninputs() * sizeof(int));
	for (int i = 0; i < ninputs(); i++) {
		count[i] = -1;
		weight[i] = pow(2, i);
	}
	if (!(_signals = new NotifierSignal[ninputs()]))
		return errh->error("out of memory!");
	for (int i = 0; i < ninputs(); i++)
		//每次初始化的时候，判断上游的入口是否有空信号，有的话则在循环中跳过
		//注意，signal为1表示不为空，0才是空
		_signals[i] = Notifier::upstream_empty_signal(this, i, 0);
	return 0;
}
Packet* MyPrioSched::pull(int port) {
	Packet *p;
	for (int i = 0; i < ninputs(); i++) {
		if (_signals[i]) {
			if (count[i] == -1) {
				count[i] = 0;
			}
		} else
			count[i] = -1;
	}
	int k = getmax(count, weight, ninputs());
	//printf("%d\r\n", k);
	for (int j = 0; j <= ninputs(); j++) {
		//这里考虑是不是需要将置0放在成功拉包之后
		//暂时先不这么做
		// 已经这么做了
		// 唯一的缺点是debug显示的时候有误差，没有出现置0
//		if (j != k) {
//			if (count[j] >= 0)
//				count[j]++;
//		} else
//			count[j] = 0;
		if (j != k && count[j] >= 0)
			count[j]++;

	}
	for (int i = 0; i < ninputs(); i++) {
		printf("%d  ", count[i]);
	}
	printf(",  %d\r\n", k);
	if (p = input(k).pull()) {
		count[k] = 0;
		return p;
	}
	return 0;
}
int getmax(int *a, int *w, int length) {
	int max, maxid;
	max = a[0] / w[0];
	maxid = 0;
	for (int i = 1; i < length; i++) {
		if (a[i] < 0 || max >= a[i] / w[i])
			continue;
		else {
			max = a[i] / w[i];
			maxid = i;
		}
	}
	return maxid;

}

CLICK_ENDDECLS
EXPORT_ELEMENT(MyPrioSched)
ELEMENT_MT_SAFE(MyPrioSched)

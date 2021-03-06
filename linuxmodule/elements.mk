# Generated by 'click-buildtool elem2make' on Tue Nov 25 22:43:53 CST 2014
ELEMENT_OBJS__0 = \
adjusttimestamp.o \
aggregateipflows.o \
aggregatenotifier.o \
anonipaddr.o \
eraseippayload.o \
settimestampdelta.o \
storetimestamp.o \
storeudptimeseqrecord.o \
timefilter.o \
timerange.o \
timesortedsched.o \

ELEMENT_OBJS__1 = \
ftpportmapper.o \

ELEMENT_OBJS__2 = \
adaptivered.o \
red.o \

ELEMENT_OBJS__3 = \
arpfaker.o \
arpprint.o \
arpquerier.o \
arpresponder.o \
arptable.o \
checkarpheader.o \
ensureether.o \
etherencap.o \
ethermirror.o \
etherpausesource.o \
ethervlanencap.o \
hostetherfilter.o \
setvlananno.o \
storeetheraddress.o \
stripethervlanheader.o \
vlandecap.o \
vlanencap.o \

ELEMENT_OBJS__4 = \
checkicmpheader.o \
icmperror.o \
icmpipencap.o \
icmppingencap.o \
icmppingresponder.o \
icmppingrewriter.o \
icmprewriter.o \
icmpsendpings.o \

ELEMENT_OBJS__5 = \
checkipheader.o \
checkipheader2.o \
decipttl.o \
fixipsrc.o \
getipaddress.o \
ipaddrpairrewriter.o \
ipaddrrewriter.o \
ipclassifier.o \
ipencap.o \
ipfieldinfo.o \
ipfilter.o \
ipfragmenter.o \
ipgwoptions.o \
ipinputcombo.o \
ipmirror.o \
ipnameinfo.o \
ipoutputcombo.o \
ipprint.o \
ipreassembler.o \
iprewriterbase.o \
iproutetable.o \
iprwmapping.o \
iprwpattern.o \
iprwpatterns.o \
lineariplookup.o \
lookupiproute.o \
lookupiproutemp.o \
markipce.o \
markipheader.o \
poundradixiplookup.o \
radixiplookup.o \
rfc2507c.o \
rfc2507d.o \
ripsend.o \
rripmapper.o \
setipaddress.o \
setipchecksum.o \
setipdscp.o \
setipecn.o \
setrandipaddress.o \
siphmapper.o \
sortediplookup.o \
storeipaddress.o \
stripipheader.o \
truncateippayload.o \
unstripipheader.o \

ELEMENT_OBJS__6 = \
anydevice.o \
cpuqueue.o \
cpuswitch.o \
cyclecountaccum.o \
fasttcpflows.o \
fastudpflows.o \
fastudpsrc.o \
fromdevice.o \
fromhost.o \
fromuserdevice.o \
perfcountaccum.o \
perfcountinfo.o \
perfcountuser.o \
polldevice.o \
rtcycles.o \
schedulelinux.o \
setcyclecount.o \
setperfcount.o \
todevice.o \
tohost.o \
tohostsniffers.o \
touserdevice.o \

ELEMENT_OBJS__7 = \
simpleidle.o \
simplepriosched.o \
simplepullswitch.o \
simplerrsched.o \

ELEMENT_OBJS__8 = \
align.o \
annotationinfo.o \
averagecounter.o \
bandwidthmeter.o \
bandwidthshaper.o \
block.o \
burster.o \
bwratedsplitter.o \
bwratedunqueue.o \
checkcrc32.o \
checklength.o \
checkpaint.o \
classification.o \
classifier.o \
clickyinfo.o \
compblock.o \
counter.o \
delayshaper.o \
delayunqueue.o \
devirtualizeinfo.o \
discard.o \
discardnofree.o \
drivermanager.o \
dropbroadcasts.o \
drr.o \
flowinfo.o \
frontdropqueue.o \
fullnotequeue.o \
hashswitch.o \
hub.o \
idle.o \
infinitesource.o \
linkunqueue.o \
markmacheader.o \
messageelement.o \
meter.o \
mixedqueue.o \
notifierqueue.o \
nullelement.o \
nulls.o \
paint.o \
paintswitch.o \
painttee.o \
print.o \
priosched.o \
pullswitch.o \
quicknotequeue.o \
quitwatcher.o \
randomerror.o \
randomsample.o \
randomsource.o \
randomswitch.o \
ratedsource.o \
ratedsplitter.o \
ratedunqueue.o \
rrsched.o \
rrswitch.o \
script.o \
setannobyte.o \
setcrc32.o \
setpackettype.o \
settimestamp.o \
shaper.o \
simplequeue.o \
staticpullswitch.o \
staticswitch.o \
storedata.o \
stridesched.o \
strideswitch.o \
strip.o \
striptonet.o \
suppressor.o \
switch.o \
tee.o \
threadsafequeue.o \
timedsink.o \
timedsource.o \
timedunqueue.o \
truncate.o \
unqueue.o \
unqueue2.o \
unstrip.o \

ELEMENT_OBJS__9 = \
checktcpheader.o \
checkudpheader.o \
dynudpipencap.o \
iprewriter.o \
settcpchecksum.o \
setudpchecksum.o \
tcpfragmenter.o \
tcpipsend.o \
tcprewriter.o \
udpipencap.o \
udprewriter.o \

ELEMENT_OBJS__10 = \
bhmtest.o \
checkpacket.o \
comparepackets.o \
confparsetest.o \
cryptotest.o \
errortest.o \
functiontest.o \
handlertask.o \
hashtabletest.o \
heaptest.o \
listtest.o \
neighborhoodtest.o \
notifierdebug.o \
nulltask.o \
packettest.o \
queueyanktest.o \
randomseed.o \
schedordertest.o \
sorttest.o \
timertest.o \
tokenbuckettest.o \
upstreamnotifier.o \
vectortest.o \

ELEMENT_OBJS__11 = \
spinlockacquire.o \
spinlockinfo.o \
spinlockrelease.o \
staticthreadsched.o \

ELEMENT_OBJS = \
$(ELEMENT_OBJS__0) \
$(ELEMENT_OBJS__1) \
$(ELEMENT_OBJS__2) \
$(ELEMENT_OBJS__3) \
$(ELEMENT_OBJS__4) \
$(ELEMENT_OBJS__5) \
$(ELEMENT_OBJS__6) \
$(ELEMENT_OBJS__7) \
$(ELEMENT_OBJS__8) \
$(ELEMENT_OBJS__9) \
$(ELEMENT_OBJS__10) \
$(ELEMENT_OBJS__11) \

$(addprefix $(obj)/,$(ELEMENT_OBJS__0)): $(obj)/%.o: $(obj)/../elements/analysis/%.cc
	$(call if_changed_dep,cxxcompile)

$(addprefix $(obj)/,$(ELEMENT_OBJS__1)): $(obj)/%.o: $(obj)/../elements/app/%.cc
	$(call if_changed_dep,cxxcompile)

$(addprefix $(obj)/,$(ELEMENT_OBJS__2)): $(obj)/%.o: $(obj)/../elements/aqm/%.cc
	$(call if_changed_dep,cxxcompile)

$(addprefix $(obj)/,$(ELEMENT_OBJS__3)): $(obj)/%.o: $(obj)/../elements/ethernet/%.cc
	$(call if_changed_dep,cxxcompile)

$(addprefix $(obj)/,$(ELEMENT_OBJS__4)): $(obj)/%.o: $(obj)/../elements/icmp/%.cc
	$(call if_changed_dep,cxxcompile)

$(addprefix $(obj)/,$(ELEMENT_OBJS__5)): $(obj)/%.o: $(obj)/../elements/ip/%.cc
	$(call if_changed_dep,cxxcompile)

$(addprefix $(obj)/,$(ELEMENT_OBJS__6)): $(obj)/%.o: $(obj)/../elements/linuxmodule/%.cc
	$(call if_changed_dep,cxxcompile)

$(addprefix $(obj)/,$(ELEMENT_OBJS__7)): $(obj)/%.o: $(obj)/../elements/simple/%.cc
	$(call if_changed_dep,cxxcompile)

$(addprefix $(obj)/,$(ELEMENT_OBJS__8)): $(obj)/%.o: $(obj)/../elements/standard/%.cc
	$(call if_changed_dep,cxxcompile)

$(addprefix $(obj)/,$(ELEMENT_OBJS__9)): $(obj)/%.o: $(obj)/../elements/tcpudp/%.cc
	$(call if_changed_dep,cxxcompile)

$(addprefix $(obj)/,$(ELEMENT_OBJS__10)): $(obj)/%.o: $(obj)/../elements/test/%.cc
	$(call if_changed_dep,cxxcompile)

$(addprefix $(obj)/,$(ELEMENT_OBJS__11)): $(obj)/%.o: $(obj)/../elements/threads/%.cc
	$(call if_changed_dep,cxxcompile)


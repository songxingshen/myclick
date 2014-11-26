// Generated by make-ip-conf.pl
// eth0 10.1.12.4 00:0c:29:cb:72:14    //00:00:C0:3B:71:EF
// eth1 11.1.12.4 00:0c:29:cb:72:1e    //00:00:C0:CA:68:EF


// Shared IP input path and routing table
ip :: Print("Forward IP Pkt") -> Strip(14)
    -> CheckIPHeader(INTERFACES 10.1.12.4/255.255.255.0 11.1.12.4/255.255.255.0)
    -> rt :: StaticIPLookup(
	10.1.12.4/32 0,
	10.1.12.255/32 0,
	10.1.12.0/32 0,
	11.1.12.4/32 0,
	11.1.12.255/32 0,
	11.1.12.0/32 0,
	10.1.12.0/255.255.255.0 1,
	11.1.12.0/255.255.255.0 2,
	255.255.255.255/32 0.0.0.0 0,
	0.0.0.0/32 0,
	0.0.0.0/0.0.0.0 18.26.4.1 1);

// ARP responses are copied to each ARPQuerier and the host.
//Tee duplicate incoming packet to all output port
arpt :: Tee(3);

// Input and output paths for eth0
c0 :: Classifier(12/0806 20/0001, 12/0806 20/0002, 12/0800, -);
FromDevice(eth0) -> c0;
out0 :: Queue(200) -> todevice0 :: ToDevice(eth0);
c0[0] -> ar0 :: ARPResponder(10.1.12.1 00:0c:29:cb:72:14) -> out0;
arpq0 :: ARPQuerier(10.1.12.1, 00:0c:29:cb:72:14) -> out0;
c0[1] -> arpt;
arpt[0] -> [1]arpq0;
c0[2] -> Paint(1) -> ip;
c0[3] -> Print("eth0 non-IP") -> Discard;

// Input and output paths for eth1
//Classifier( outport0 offset(10����)/value(Hex) AND  offset(10����)/value(Hex) , outport1...., -(match everything ?));
c1 :: Classifier(12/0806 20/0001, 12/0806 20/0002, 12/0800, -);
FromDevice(eth1) -> Print("ether pkt") -> c1;
out1 :: Queue(200) -> todevice1 :: ToDevice(eth1);
c1[0] -> ar1 :: ARPResponder(11.1.12.4 00:0c:29:cb:72:1e) -> out1;
arpq1 :: ARPQuerier(11.1.12.4, 00:0c:29:cb:72:1e) -> out1;
c1[1] -> arpt;
arpt[1] -> [1]arpq1;
c1[2] -> Paint(2) -> ip;
c1[3] -> Print("eth1 non-IP") -> Discard;

// Local delivery
toh :: Print("ToHost") -> ToHost;
arpt[3] -> toh;
rt[0] -> EtherEncap(0x0800, 1:1:1:1:1:1, 2:2:2:2:2:2) -> toh;

// Forwarding path for eth0
rt[1] -> DropBroadcasts
    -> cp0 :: PaintTee(1)
    -> gio0 :: IPGWOptions(10.1.12.4)
    -> FixIPSrc(10.1.12.4)
    -> dt0 :: DecIPTTL
    -> fr0 :: IPFragmenter(1500)
    -> [0]arpq0;
dt0[1] -> ICMPError(10.1.12.4, timeexceeded) -> rt;
fr0[1] -> ICMPError(10.1.12.4, unreachable, needfrag) -> rt;
gio0[1] -> ICMPError(10.1.12.4, parameterproblem) -> rt;
cp0[1] -> ICMPError(10.1.12.4, redirect, host) -> rt;

// Forwarding path for eth1
rt[2] -> DropBroadcasts
    -> cp1 :: PaintTee(2)
    -> gio1 :: IPGWOptions(11.1.12.4)
    -> FixIPSrc(11.1.12.4)
    -> dt1 :: DecIPTTL
    -> fr1 :: IPFragmenter(1500)
    -> [0]arpq1;
dt1[1] -> ICMPError(11.1.12.4, timeexceeded) -> rt;
fr1[1] -> ICMPError(11.1.12.4, unreachable, needfrag) -> rt;
gio1[1] -> ICMPError(11.1.12.4, parameterproblem) -> rt;
cp1[1] -> ICMPError(11.1.12.4, redirect, host) -> rt;
src::FastPSPSource(2, 1000000000, 128, 00:0C:29:9d:37:76, 0x00000000020c010b, 2345,00:0C:29:A3:E7:73,0x00000000020c010b,2346);
t::Tee(8);
rr::RoundRobinSched;
src->BandwidthRatedUnqueue(25000)->t;
t[0] -> PrioritySub(0) -> Queue(20)-> [0]rr;
t[1] -> PrioritySub(1) -> Queue(20)-> [1]rr;
t[2] -> PrioritySub(2) -> Queue(20)-> [2]rr;
t[3] -> PrioritySub(3) -> Queue(20)-> [3]rr;
t[4] -> PrioritySub(4) -> Queue(20)-> [4]rr;
t[5] -> PrioritySub(5) -> Queue(20)-> [5]rr;
t[6] -> PrioritySub(6) -> Queue(20)-> [6]rr;
t[7] -> PrioritySub(7) -> Queue(20)-> [7]rr;

rr -> PSPPrint() -> ToDevice(eth2);


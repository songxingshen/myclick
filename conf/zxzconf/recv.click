c0 :: Classifier(14/40,14/41,14/42,14/43,14/44,14/45,14/46,14/47, -);
rr::MyPrioSched;

FromDevice(eth2) -> c0;
c0[0] -> Queue(2000)-> [0]rr
c0[1] -> Queue(2000)-> [1]rr
c0[2] -> Queue(2000)-> [2]rr
c0[3] -> Queue(2000)-> [3]rr
c0[4] -> Queue(2000)-> [4]rr
c0[5] -> Queue(2000)-> [5]rr
c0[6] -> Queue(2000)-> [6]rr
c0[7] -> Queue(2000)-> [7]rr
c0[8] -> Discard;
rr -> PSPPrint() -> TimedSink(0.5);

// test3.click

// This simple test demonstrates how RoundRobinSched works as a round robin
// scheduler.

// Run with 'click test3.click'

rr :: RoundRobinSched;

TimedSource(0.2) -> Queue(20) -> Print(q1) -> [0]rr;
TimedSource(0.2) -> Queue(20) -> Print(q2) -> [1]rr;
TimedSource(0.2) -> Queue(20) -> Print(q3) -> [2]rr;
TimedSource(0.2) -> Queue(20) -> Print(q4) -> [3]rr;

rr -> TimedSink(0.1);

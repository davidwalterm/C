#include <stdio.h>
#include <stdlib.h>
#include <sys/queue.h>

struct Semaphore {
    int value;

    // q contains all Process Control Blocks(PCBs)
    // corresponding to process got blocked
    // while performing down operation.
    Queue<process> q;
};

P(Semaphore s)
{
    s.value = s.value - 1;
    if(s.value < 0) {
        // add process to queue
        // here p is a process which currently executing
        q.push(p);
        block();
    }
    else
        return;
}

V(Semaphore s)
{
    s.value = s.value + 1;
    if(s.value <= 0) {
        // remove process p from queue
        Process p = q.pop();
        wakeup(p);
    }
    else
        return;
}

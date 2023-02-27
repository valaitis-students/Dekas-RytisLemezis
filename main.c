#include <stdio.h>
#include <stdlib.h>

#include "deque.h"

int main() {

    Deque* dq = createEmptyDeque();

        isEmpty(dq);
        displayDeque(dq);
        addFront(dq, 20);
        addFront(dq, 30);
        addFront(dq, 40);
        addRear(dq, 10);
        displayDeque(dq);
        printf("Front element %d has been removed.\n", removeFront(dq));
        printf("Rear element %d has been removed.\n", removeRear(dq));
        getFront(dq);
        getRear(dq);
        displayDeque(dq);
        getDequeSize(dq);
        deleteDeque(dq);

            return 0;
}

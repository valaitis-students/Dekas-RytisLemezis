#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

Deque* createEmptyDeque() {
    Deque* dq = (Deque*)malloc(sizeof(Deque));

    if (dq == NULL) {
    return NULL;
    }

    dq->front = NULL;
    dq->rear = NULL;
    return dq;
}

int isEmpty(Deque* dq) {
    if (dq->front == NULL) {
    return -1;
    }
return 0;
}

void addFront(Deque* dq, int number) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = number;
    node->next = dq->front;
    node->prev = NULL;
    if (dq->front == NULL) {
        dq->rear = node;
    } else {
        dq->front->prev = node;
    }
    dq->front = node;
}

void addRear(Deque* dq, int number) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = number;
    node->prev = dq->rear;
    node->next = NULL;
    if (dq->front == NULL) {
        dq->front = node;
    } else {
        dq->rear->next = node;
    }
    dq->rear = node;
}

int removeFront(Deque* dq) {
    if (dq->front == NULL) {
        printf("Deque is empty.\n");
        return -1;
    }
    int number = dq->front->data;
    Node* temp = dq->front;
    dq->front = dq->front->next;
    if (dq->front == NULL) {
        dq->rear = NULL;
    } else {
        dq->front->prev = NULL;
    }
    free(temp);
    return number;
}

int removeRear(Deque* dq) {
    if (dq->front == NULL) {
        printf("Deque is empty.\n");
        return -1;
    }
    int number = dq->rear->data;
    Node* temp = dq->rear;
    dq->rear = dq->rear->prev;
    if (dq->rear == NULL) {
        dq->front = NULL;
    } else {
        dq->rear->next = NULL;
    }
    free(temp);
    return number;
}

int getFront(Deque* dq) {
    if (dq->front == NULL) {
        printf("Deque is empty.\n");
        return -1;
    }
    return dq->front->data;
}

int getRear(Deque* dq) {
    if (dq->front == NULL) {
        printf("Deque is empty.\n");
        return -1;
    }
     return dq->rear->data;
}

void displayDeque(Deque* dq) {
    if (dq->front == NULL) {
        printf("Deque is empty.\n");
        return;
    }
    Node* current = dq->front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int getDequeSize(Deque* dq) {
    int count = 0;
    Node* current = dq->front;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void deleteDeque(Deque* dq) {
    Node* current = dq->front;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    free(dq);
    return;
}

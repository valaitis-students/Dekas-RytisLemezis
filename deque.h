#ifndef DEQUE_H_INCLUDED
#define DEQUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef int Var;

typedef struct node {
    Var data;
    struct node *next;
    struct node *prev;
} Node;

typedef struct Deque {
    Node *front;
    Node *rear;
} Deque;

Deque* createEmptyDeque();
//sukuria tuscia deka

int isEmpty(Deque* dq);
//tikrina, ar dekas tuscias

void addFront(Deque *dq, int number);
//prideti pasirinkta reiksme front'e

void addRear(Deque *dq, int number);
//prideti pasirinkta reiksme rear'e

int removeFront(Deque *dq);
//panaikinti front reiksme

int removeRear(Deque *dq);
//panaikinti rear reiksme

int getFront(Deque *dq);
//gauti front reiksme

int getRear(Deque *dq);
//gauti rear reiksme

void displayDeque(Deque *dq);
//parodyti visus deko elementus

int getDequeSize(Deque *dq);
//gauti deko dydi

void deleteDeque(Deque *dq);
//istrinti visa deka

#endif

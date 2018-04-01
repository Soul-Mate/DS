//
// Created by xyc on 18-3-29.
//

#include "queue.h"
#include <stdlib.h>

void InitQueue(Queue **q) {
    (*q) = malloc(sizeof(Queue));
    (*q)->front = malloc(sizeof(QueueNode));
    (*q)->rear = (*q)->front;
}

void EnQueue(Queue **q, void *d) {
    if (d == NULL) {
        return;
    }
    QueueNode *p;
    p = malloc(sizeof(QueueNode));
    p->data = d;
    (*q)->rear->next = p;
    (*q)->rear = p;
}

void * DeQueue(Queue **q) {
    if (IsEmpty(q))
        return NULL;
    void *d;
    QueueNode *p;
    p = (*q)->front;
    (*q)->front = (*q)->front->next;
    d = (*q)->front->data;
    free(p);
    return d;
}

int IsEmpty(Queue **q) {
    return (*q)->front == (*q)->rear;
}


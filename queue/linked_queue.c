//
// Created by xyc on 18-3-24.
//

#include <stdlib.h>
#include <stdio.h>
#include "linked_queue.h"

void InitQueue(Queue **q) {
    (*q) = malloc(sizeof(Queue));
    (*q)->front = malloc(sizeof(QueueNode));
    (*q)->rear = (*q)->front;
}

void EnQueue(Queue **q, DataType v) {
    QueueNode *p = malloc(sizeof(QueueNode));
    p->data = v;
    (*q)->rear->next = p;
    (*q)->rear = p;
}

DataType DeQueue(Queue **q) {
    if (IsEmpty(q)) {
        return  NULL;
    }
    QueueNode * p = (*q)->front;
    (*q)->front= (*q)->front->next;
    DataType r = (*q)->front->data;
    free(p);
    return r;
}

int IsEmpty(Queue **q) {
    return (*q)->front == (*q)->rear;
}


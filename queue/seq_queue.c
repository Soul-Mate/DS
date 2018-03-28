//
// Created by xyc on 18-3-22.
//

#include "seq_queue.h"
#include <string.h>
#include <stdlib.h>

void InitQueue(Queue **q) {
    (*q) = malloc(sizeof(Queue));
    (*q)->front = (*q)->rear = 0;
}

void Push(Queue ** q, DataType v) {
    (*q)->data[(*q)->rear] = v;
    (*q)->rear = ((*q)->rear + 1) % QUEUE_LEN;
}

DataType Pop(Queue **q) {
    DataType r;
    r = malloc(strlen((*q)->data[(*q)->front]));
    strcpy(r, (*q)->data[(*q)->front]);
    (*q)->front = ((*q)->front + 1) % QUEUE_LEN;
    return r;
}

DataType GetFront(Queue **q) {
    return (*q)->data[(*q)->front];
}

int IsFull(Queue **q) {
    return ((*q)->rear + 1) % QUEUE_LEN == (*q)->front;
}

int IsEmpty(Queue **q) {
    return (*q)->rear == (*q)->front;
}
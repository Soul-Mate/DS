//
// Created by xyc on 18-3-22.
//

#include "seq_queue.h"

void Push(Queue ** q, DataType v) {
    (*q)->data[(*q)->rear] = v;
    (*q)->rear = ((*q)->rear + 1) % QUEUE_LEN;
}

DataType Pop(Queue **q) {
    DataType r;
    r = (*q)->data[(*q)->head];
    (*q)->head = ((*q)->head + 1) % QUEUE_LEN;
}

int IsFull(Queue **q) {
    
}
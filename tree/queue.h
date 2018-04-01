//
// Created by xyc on 18-3-29.
//

#ifndef DS_QUEUE_H
#define DS_QUEUE_H

typedef struct QueueNode{
    void *data;
    struct QueueNode *next;
}QueueNode;

typedef struct Queue {
    QueueNode *front, *rear;
}Queue;

void InitQueue(Queue **);

void EnQueue(Queue **, void *);

void * DeQueue(Queue **);

int IsEmpty(Queue **);

#endif //DS_QUEUE_H

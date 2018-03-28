//
// Created by xyc on 18-3-24.
//

#ifndef DS_LINKED_QUEUE_H
#define DS_LINKED_QUEUE_H
typedef int DataType;

typedef struct QueueNode {
    DataType data;
    struct QueueNode *next;
}QueueNode;

typedef struct Queue {
    struct QueueNode *front, *rear;
}Queue;

void InitQueue(Queue **);

void EnQueue(Queue **, DataType);

DataType DeQueue(Queue **);

int IsEmpty(Queue **);

#endif //DS_LINKED_QUEUE_H

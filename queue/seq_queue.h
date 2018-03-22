//
// Created by xyc on 18-3-22.
//

#ifndef DS_SEQ_QUEUE_H
#define DS_SEQ_QUEUE_H

#define QUEUE_LEN 100
typedef char * DataType;

typedef struct Queue{
    DataType data[QUEUE_LEN];
    int head, rear;
}Queue;

void Push(Queue **, DataType);

DataType Pop(Queue **);

#endif //DS_SEQ_QUEUE_H

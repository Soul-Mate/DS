//
// Created by xyc on 18-3-21.
//

#ifndef DS_SEQ_STACK_H
#define DS_SEQ_STACK_H
#define SEQ_STACK_LEN 100

typedef char * DataType;
typedef struct StackNode {
    DataType data[SEQ_STACK_LEN];
    int top;
}StackNode;

void InitStack(StackNode **);

void Push(StackNode **, DataType);

DataType Pop(StackNode **);

int IsFull(StackNode **);

int IsEmpty(StackNode **s);

#endif //DS_SEQ_STACK_H

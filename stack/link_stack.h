//
// Created by xyc on 18-3-22.
//

#ifndef DS_LINK_STACK_H
#define DS_LINK_STACK_H

typedef char * DataType;

typedef struct StackNode{
    DataType data;
    struct StackNode *next;
}StackNode;

typedef struct Stack{
    StackNode *top;
}Stack;

void InitStack(Stack **);

void Push(Stack **, DataType);

DataType Pop(Stack **);

int IsEmpty(Stack **);

#endif //DS_LINK_STACK_H

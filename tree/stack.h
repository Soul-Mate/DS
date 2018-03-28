//
// Created by xyc on 18-3-28.
//

#ifndef DS_STACK_H
#define DS_STACK_H

#include "link_tree.h"

typedef struct StackData {
    Tree *t;
    int index;
}StackData;

typedef struct StackNode {
    StackData *data;
    struct StackNode *next;
}StackNode;

typedef struct Stack {
    StackNode *top;
}Stack;

void InitStack(Stack **);

void Push(Stack **, StackData *);

StackData * Pop(Stack **);

int IsEmpty(Stack **);

#endif //DS_STACK_H

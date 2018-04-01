//
// Created by xyc on 18-3-28.
//

#ifndef DS_STACK_H
#define DS_STACK_H

#include "link_tree.h"


typedef void * Element;

typedef struct StackNode {
    Element *element;
    struct StackNode *next;
}StackNode;

typedef struct Stack {
    StackNode *top;
}Stack;

void InitStack(Stack **);

void Push(Stack **, Element *);

Element * Pop(Stack **);

int IsEmpty(Stack **);

Element * GetTop(Stack **s);
#endif //DS_STACK_H

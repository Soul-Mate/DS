//
// Created by xyc on 18-3-28.
//
#include "stack.h"
#include <stdlib.h>

void InitStack(Stack **s) {
    (*s) = malloc(sizeof(Stack));
    (*s)->top = NULL;
}

void Push(Stack **s, StackData *data) {
    StackNode *p;
    p = malloc(sizeof(StackNode));
    p->data = malloc(sizeof(StackData));
    p->data->t = data->t;
    p->data->index = data->index;
    p->next = (*s)->top;
    (*s)->top = p;
}

StackData * Pop(Stack **s) {
    if (IsEmpty(s))
        return NULL;
    StackNode *p;
    StackData *data;
    p = (*s)->top;
    data = p->data;
    (*s)->top = (*s)->top->next;
    free(p);
    return data;
}

int IsEmpty(Stack **s) {
    return (*s)->top == NULL;
}
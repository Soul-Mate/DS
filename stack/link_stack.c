//
// Created by xyc on 18-3-22.
//

#include <string.h>
#include <stdlib.h>
#include "link_stack.h"

void InitStack(Stack **s) {
    (*s) = malloc(sizeof(Stack));
    (*s)->top = NULL;
}

void Push(Stack **s, DataType v) {
    StackNode *p = malloc(sizeof(StackNode));
    p->data = malloc(strlen(v));
    strcpy(p->data, v);
    p->next = (*s)->top;
    (*s)->top = p;
}

DataType Pop(Stack **s) {
    StackNode *p;
    if (IsEmpty(s))
        return  NULL;

    p = (*s)->top;
    (*s)->top = (*s)->top->next;
    DataType r = malloc(strlen(p->data));
    strcpy(r, p->data);
    free(p);
    return r;
}

int IsEmpty(Stack **s) {
    return (*s)->top == NULL;
}

//
// Created by xyc on 18-3-28.
//
#include "stack.h"
#include <stdlib.h>

void InitStack(Stack **s) {
    (*s) = malloc(sizeof(Stack));
    (*s)->top = NULL;
}

void Push(Stack **s, Element *el) {
    StackNode *p;
    p = malloc(sizeof(StackNode));
    p->element = el;
    p->next = (*s)->top;
    (*s)->top = p;
}

Element * Pop(Stack **s) {
    if (StackIsEmpty(s))
        return NULL;
    StackNode *p;
    Element * el;
    p = (*s)->top;
    el = p->element;
    (*s)->top = (*s)->top->next;
    free(p);
    return el;
}

Element * GetTop(Stack **s) {
    return (*s)->top->element;
}

int StackIsEmpty(Stack **s) {
    return (*s)->top == NULL;
}
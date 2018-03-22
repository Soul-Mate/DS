//
// Created by xyc on 18-3-22.
//

#include <string.h>
#include <stdlib.h>
#include "link_stack.h"

void InitStack(Stack **s) {
    *s = (Stack *)malloc(sizeof(struct Stack));
    (*s)->top = malloc(sizeof(struct StackNode));
    (*s)->top->next = NULL;
}

void Push(Stack ** s, DataType v) {
    StackNode *p;
    p = malloc(sizeof(StackNode));
    p->data = malloc(strlen(v));
    strcpy(p->data, v);
    p->next = (*s)->top;
    (*s)->top = p;

}

DataType Pop(Stack ** s) {
    StackNode *node;
    DataType r;
    if ((*s)->top != NULL) {
        node = (*s)->top;
        (*s)->top = (*s)->top->next;
        r = malloc(strlen(node->data));
        strcpy(r, node->data);
        free(node);
        return r;
    }
    return "";
}

int IsEmpty(Stack **s) {
    return ((*s)->top == NULL);
}

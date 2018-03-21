//
// Created by xyc on 18-3-21.
//

#include <stdio.h>
#include <stdlib.h>
#include "seq_stack.h"

void InitStack(StackNode ** s) {
    (*s) = malloc(sizeof(StackNode));
    (*s)->top = 0;
}

void Push(StackNode ** s, DataType d) {
    if (d == NULL) {
        return;
    }
    (*s)->data[(*s)->top++] = d;
}

DataType Pop(StackNode ** s) {
    return (*s)->data[--(*s)->top];
}


int IsFull(StackNode **s) {
    return (*s)->top == SEQ_STACK_LEN;
}

int IsEmpty(StackNode **s) {
    return (*s)->top == 0;
}

//
// Created by xyc on 18-3-22.
//

#include "linked_queue.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char *argv []) {
    Queue *q;
    InitQueue(&q);
    int i = 0;
    for(;i < 100; i++)
        EnQueue(&q,i);

    while (!IsEmpty(&q))
        printf("%d\n",DeQueue(&q));
}
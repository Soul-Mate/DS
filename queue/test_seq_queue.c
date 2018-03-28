//
// Created by xyc on 18-3-22.
//

#include "seq_queue.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char *argv []) {
    Queue *q;
    InitQueue(&q);
    Push(&q, "a");
    Push(&q, "b");
    Push(&q, "c");
    Push(&q, "d");
    Push(&q, "e");
    Push(&q, "f");
    Push(&q, "g");

    while (!IsEmpty(&q)) {
        printf("%s\n", Pop(&q));
    }
}
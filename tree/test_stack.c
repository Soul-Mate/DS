//
// Created by xyc on 18-3-28.
//

#include "stack.h"
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int i;
    Stack *s;
    InitStack(&s);
    for (i = 1; i <= 100; i++) {
        Push(&s, i);
    }

    while (!IsEmpty(&s))
        printf("%d\n", Pop(&s));
}
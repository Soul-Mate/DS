//
// Created by xyc on 18-3-22.
//
#include <stdio.h>
#include "link_stack.h"


int main(int argc, const char *argv[]) {
    Stack *s;
    InitStack(&s);
    Push(&s, "a");
    Push(&s, "b");
    Push(&s, "c");
    printf("%s\n",Pop(&s));
    printf("%s\n",Pop(&s));
    printf("%s\n",Pop(&s));
    printf("%s\n",Pop(&s));
    printf("%s\n",Pop(&s));
    printf("%s\n",Pop(&s));
}
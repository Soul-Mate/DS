//
// Created by xyc on 18-3-21.
//
#include "seq_stack.c"

int main(int argc, const char *argv[]) {
    StackNode *stack;
    InitStack(&stack);
    Push(&stack,"1");
    Push(&stack,"2");
    Push(&stack,"3");
    Push(&stack,"4");
    printf("is full? %d\n", IsFull(&stack));
    printf("is empty? %d\n", IsEmpty(&stack));
    printf("pop: %s\n", Pop(&stack));
    printf("pop: %s\n", Pop(&stack));
    printf("pop: %s\n", Pop(&stack));
    printf("pop: %s\n", Pop(&stack));
    printf("is empty? %d\n", IsEmpty(&stack));
    return 0;
}
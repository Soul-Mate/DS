//
// Created by xyc on 18-3-21.
//

#include <stdio.h>
#include "linked_list.h"

int main(int argc, const char *argv[]) {
    LinkedList L;
    InitLinkedList(&L);
    TailInsertLinkedList(&L, "a");
    TailInsertLinkedList(&L, "b");
    TailInsertLinkedList(&L, "c");
    printf("del: %s\n", DelLinkedListNode(&L,2));
    TraverseLinkedList(&L);
}


//
// Created by xyc on 18-3-21.
//

#include <stdio.h>
#include "linked_list.h"

int main(int argc, const char *argv[]) {
    LinkedList L;
    InitLinkedList(&L);
    TailInsertLinkedList(&L, "4");
    TailInsertLinkedList(&L, "5");
    TailInsertLinkedList(&L, "6");
    HeadInsertLinkedList(&L, "7");
    HeadInsertLinkedList(&L, "8");
    // TailInsertLinkedList(&L, "5");
    // TailInsertLinkedList(&L, "6");
    TraverseLinkedList(&L);
}


//
// Created by xyc on 18-3-21.
//

#include <stdio.h>
#include "linked_list.h"

int main(int argc, const char *argv[]) {
    LinkedList L;
    InitLinkedList(&L);
    HeadInsertLinkedList(&L, "4");
    HeadInsertLinkedList(&L, "5");
    HeadInsertLinkedList(&L, "6");
    TailInsertLinkedList(&L, "6");
    DelLinkedListNode(&L, 1);
//    printf("delete %d index value: return %s\n",0, DelLinkedListNode(&L, 0));
//    printf("delete %d index value: return %s\n",5, DelLinkedListNode(&L, 5));
    TraverseLinkedList(&L);
}


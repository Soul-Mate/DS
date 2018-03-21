//
// Created by xyc on 18-3-21.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"

void InitLinkedList(LinkedList * L) {
    (*L) = NULL;
}

void HeadInsertLinkedList(LinkedList *L, DataType data) {
    LinkedList p;
    p = malloc(sizeof(LinkedNode *));
    p->data = (char *)malloc(strlen(data));
    strcpy(p->data, data);
    if ((*L) == NULL) {
        p->next = (*L);
        (*L) = p;
        (*L)->rear = (*L);
        return;
    }
    p->next = (*L);
    (*L) = p;
}

void TailInsertLinkedList(LinkedList *L, DataType data) {
    LinkedList p;
    p = malloc(sizeof(LinkedNode *));
    p->data = (char *)malloc(strlen(data));
    strcpy(p->data, data);
    if ((*L) == NULL) {
        (*L) = p;
        (*L)->rear = (*L);
        return;
    }
    (*L)->rear->next = p;
    (*L)->rear = p;

}

DataType GetLinkedListNode(LinkedList *L, int i) {
    int j;
    LinkedList q;
    j = 0;
    q = *L;
    while(q != NULL && j < i) {
        q = q->next;
        j++;
    }
    if (q == NULL)
        return "";
    return q->data;
}

DataType DelLinkedListNode(LinkedList *L, int position) {
    int j;
    LinkedList q, p;
    j = 0;
    q = *L;
    while (q->next != NULL && j < position) {
        j++;
        q = q->next;
    }
    if (q->next == NULL || j > position) {
        return "";
    }
    p = q->next;
    q->next = p->next;
    free(q);
    return p->data;
}

void TraverseLinkedList(LinkedList *L) {
    LinkedList head = (*L);
    while(head != NULL) {
        printf("%s\n", head->data);
        head = head->next;
    }
}
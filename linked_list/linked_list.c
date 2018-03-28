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
    p->next = (*L);
    (*L) = p;
    (*L)->rear = (*L);
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

DataType GetLinkedListNode(LinkedList *L, int position) {
    int j;
    LinkedList head;
    j = 0;
    head = *L;
    while(head != NULL && j < position) {
        head = head->next;
        j++;
    }
    if (head == NULL || j > position) {
        return "";
    }
    return head->data;
}

DataType DelLinkedListNode(LinkedList *L, int position) {
    LinkedList head, q;
    DataType r;
    if (*L == NULL) {
        return "";
    }
    if (position == 0) {
        q = *L;
        *L = (*L)->next;
        r = malloc(strlen(q->data));
        strcpy(q->data,r);
        free(q);
        return r;
    }

    int j;
    j = 0;

    head = *L;
    while (head != NULL && j < position - 1) {
        head = head->next;
        j++;
    }
    if (head == NULL || j > position - 1) {
        return "";
    }

    if (head->next == NULL) {
        return "";
    }

    q = head->next;
    head->next = head->next->next;
    r = malloc(strlen(q->data));
    strcpy(q->data,r);
    free(q);
    return r;
}

void TraverseLinkedList(LinkedList *L) {
    LinkedList head = (*L);
    while(head != NULL) {
        printf("%s\n", head->data);
        head = head->next;
    }
}
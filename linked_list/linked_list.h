//
// Created by xyc on 18-3-21.
//

#ifndef DS_LINKED_LIST_H
#define DS_LINKED_LIST_H
typedef char * DataType ;
typedef struct Node{
    DataType data;
    struct Node *next;
    struct Node *rear;
}LinkedNode;

typedef LinkedNode *LinkedList;

// init linked list
void InitLinkedList(LinkedList *);

void HeadInsertLinkedList(LinkedList *, DataType);

void TailInsertLinkedList(LinkedList *, DataType);

DataType GetLinkedListNode(LinkedList *, int);

DataType DelLinkedListNode(LinkedList *L, int position);

void TraverseLinkedList(LinkedList *);

#endif //DS_LINKED_LIST_H

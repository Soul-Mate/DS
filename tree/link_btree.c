#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "stack.h"
#include "link_btree.h"

// recursion create binary tree
BinTree CreateBTreeRecursion(DataType el[], int index, int len)
{
    if (index > len - 1)
        return NULL;
    BinTree t;
    t = malloc(sizeof(BinTree));
    t->data = el[index];
    t->Left = CreateBTreeRecursion(el, 2 * index + 1 , len);
    t->Right = CreateBTreeRecursion(el, 2 * index + 2, len);
    return t;
}

// create binary tree use queue
BinTree CreateBTree(DataType el[], int len)
{
    int i, position;
    Queue *q;
    BinTree root;
    struct QueueStorageTree *qst;

    i = 0;
    position = 0;
    // init queue
    InitQueue(&q);

    // create root
    root = malloc(sizeof(struct TreeNode));
    root->data = el[position];
    root->Left = NULL;
    root->Right = NULL;

    // en root queue
    qst = malloc(sizeof(struct QueueStorageTree));
    qst->tree = root;
    qst->position = position;
    EnQueue(&q, (void *)qst);

    while (!IsEmpty(&q)) {
        BinTree cur;
        struct QueueStorageTree *qst1;
        qst1 = (struct QueueStorageTree *)DeQueue(&q);
        cur = qst1->tree;
        position = qst1->position;
        free(qst1);

        // en queue right
        if (position * 2 + 2 < len) {
            BinTree rtree;
            struct QueueStorageTree *rqst;
            rtree = malloc(sizeof(struct TreeNode));

            // create right tree
            rtree->Left = NULL;
            rtree->Right = NULL;
            rtree->data = el[position * 2 + 2];

            // set cur tree right tree
            cur->Right = rtree;

            // en left tree queue
            rqst = malloc(sizeof(struct QueueStorageTree));
            rqst->tree = rtree;
            rqst->position = position * 2 + 2;
            EnQueue(&q, (void *)rqst);
        }

        // en queue left
        if (position * 2 + 1 < len) {
            BinTree ltree;
            struct QueueStorageTree *lqst;
            ltree = malloc(sizeof(struct TreeNode));

            // create right tree
            ltree->Left = NULL;
            ltree->Right = NULL;
            ltree->data = el[position * 2 + 1];

            // set cur tree right tree
            cur->Left = ltree;

            // en left tree queue
            lqst = malloc(sizeof(struct QueueStorageTree));
            lqst->tree = ltree;
            lqst->position = position * 2 + 1;
            EnQueue(&q, (void *)lqst);
        }
        i++;
    }
    return root;
}

void PreOrderTraversalRecursion(BinTree t)
{
    if (t != NULL) {
        printf("%d\n", (int)t->data);
        PreOrderTraversalRecursion(t->Left);
        PreOrderTraversalRecursion(t->Right);
    }
}

void PreOrderTraversal(BinTree root)
{
    Stack *stack;
    InitStack(&stack);

    // push root
    Push(&stack, (Element *) root);
    while (!StackIsEmpty(&stack)) {
        // traversal left tree

        while(root!=NULL) {
            printf("%d\n", (int) root->data);
            Push(&stack, (Element *) root);
            root = root->Left;
        }

        if (!StackIsEmpty(&stack)) {
            root = (BinTree)Pop(&stack);
            root = root->Right;
        }
    }
}

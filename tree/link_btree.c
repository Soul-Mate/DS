#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
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
    int position;
    int i;
    Queue *q;
    struct QueueType qt;
    InitQueue(&q);
    // en queue root
    BinTree root = malloc(sizeof(struct TreeNode));
    i = 0;
    root->data = el[i];
    root->Left = NULL;
    root->Right = NULL;
    qt.tree = root;
    qt.position = i;
    EnQueue(&q, (void *)&qt);
    while (!IsEmpty(&q)) {
        // get tree
        BinTree t;
        struct QueueType *tmp;
        tmp = (struct QueueType *)DeQueue(&q);
        t = tmp->tree;
        position = tmp->position;

        // en queue right
        if (i * 2 + 2 < len) {
            struct QueueType qt2;
            BinTree rtree = malloc(sizeof(struct TreeNode));
            rtree->Left = NULL;
            rtree->Right = NULL;
            rtree->data = el[i * 2 + 2];
            t->Right = rtree;
            qt2.tree = t->Right;
            qt2.position = i;
            EnQueue(&q, (void *)&qt2);
        }
        // en queue left
        if (i * 2 + 1 < len) {
            struct QueueType qt1;
            BinTree ltree = malloc(sizeof(struct TreeNode));
            ltree->data = el[i * 2 + 1];
            ltree->Left = NULL;
            ltree->Right = NULL;
            t->Left = ltree;
            qt1.tree = t->Left;
            qt1.position = i;
            EnQueue(&q, (void *)&qt1);
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

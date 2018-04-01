#include "array_btree.h"
#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
struct BTree *CreateBTree(ElementType arr[], int N) {
    int    i;
    struct BTree *bt;
    bt = malloc(sizeof(struct BTree));
    bt->size = (N+1);
    bt->elements = malloc(sizeof(ElementType) * bt->size);
    for (i = 0; i < N; i++) {
       bt->elements[i + 1] = arr[i];
    }
    return bt;
}

void PreOrderTraversalRecursion(struct BTree *bt, int i)
{
    if (i < bt->size) {
        printf("%d\n", bt->elements[i]);
        PreOrderTraversalRecursion(bt, i * 2);
        PreOrderTraversalRecursion(bt, i * 2 + 1);
    }
}

void InOrderTraversalRecursion(struct BTree *bt, int i)
{
    if (i < bt->size) {
        InOrderTraversalRecursion(bt, i * 2);
        printf("%d\n", bt->elements[i]);
        InOrderTraversalRecursion(bt, i * 2 + 1);
    }
}

void PostOrderTraversalRecursion(struct BTree *bt, int i)
{
    if (i < bt->size) {
        PostOrderTraversalRecursion(bt, i * 2);
        PostOrderTraversalRecursion(bt, i * 2 + 1);
        printf("%d\n", bt->elements[i]);
    }
}

void PostOrderTraversal(struct BTree *bt)
{
    Stack *s;
    int i;
    struct StackData *cur = NULL;
    struct StackData *pre = NULL;
    InitStack(&s);
    // push root
    struct StackData root;
    root.el = bt->elements[1];
    root.position = 1;
    Push(&s, (Element *)&root);

    while(!IsEmpty(&s)) {
        // get cur
        cur = (struct StackData*)GetTop(&s);

        if ((bt->elements[cur->position * 2] == 0 && bt->elements[cur->position * 2 + 1] == 0) ||
            (pre != NULL &&
             (pre->el == bt->elements[cur->position * 2] || pre->el == bt->elements[cur->position * 2 + 1]))
                ) {
            Pop(&s);
            pre = cur;
            } else {
            // push right child
            if (bt->elements[cur->position * 2 + 1] != 0) {
                struct StackData rc;
                rc.el = bt->elements[cur->position * 2 + 1];
                rc.position = cur->position * 2 + 1;
                Push(&s, (Element *) &rc);
            }

            // push left child
            if (bt->elements[cur->position * 2] != 0) {
                struct StackData lc;
                lc.el = bt->elements[cur->position * 2];
                lc.position = cur->position * 2;
                Push(&s, (Element *) &lc);
            }
        }
    }
}
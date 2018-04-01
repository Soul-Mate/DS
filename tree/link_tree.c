//
// Created by xyc on 18-3-28.
//

#include "queue.h"
#include "link_tree.h"
#include <stdlib.h>

Tree * CreateTree(DataType arr[], int N)
{
    Queue *q;
    Data *data;
    Tree * tree;
    int i = 0;
    tree = malloc(sizeof(Tree));
    data = malloc(sizeof(Data));

    // root
    tree->data = arr[i];
    data->t = tree;
    data->index = i;
    InitQueue(&q);
    EnQueue(&q,data);

    while (!IsEmpty(&q)) {
        int index;
        Tree *root;
        Data *d;
        d = DeQueue(&q);
        index = d->index;
        root = d->t;
        free(d);
        if (2 * i + 1 < N) {
            root->lt = malloc(sizeof(Tree));
            root->lt->data = arr[2 * i + 1];
            Data *d1;
            d1 = malloc(sizeof(Data));
            d1->t = root->lt;
            d1->index = index;
            EnQueue(&q, d1);
        }

        if (2 * i + 2 < N) {
            root->rt = malloc(sizeof(Tree));
            root->rt->data = arr[2 * i + 2];
            Data *d2;
            d2 = malloc(sizeof(Data));
            d2->t = root->rt;
            d2->index = index;
            EnQueue(&q, d2);
        }
        i++;
    }
    return tree;
}
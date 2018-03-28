//
// Created by xyc on 18-3-28.
//

#include "link_tree.h"
#include "stack.h"
#include <stdlib.h>

Tree * CreateTree(DataType arr[], int N)
{
    // 1 2 3 4 5
    Stack *s;
    int i = 0;
    Tree * tree;
    tree = malloc(sizeof(Tree));
    StackData *data = malloc(sizeof(StackData));

    // root
    tree->data = arr[i];
    data->t = tree;
    data->index = i;
    InitStack(&s);
    // push root
    Push(&s, data);
    while (!IsEmpty(&s)) {
        // pop root
        int index;
        Tree *root;
        StackData *d;
        d = Pop(&s);
        index = d->index;
        root = d->t;
        free(d);
        if (2 * i + 1 < N) {
            root->lt = malloc(sizeof(Tree));
            root->lt->data = arr[2 * i + 1];
            StackData *d1;
            d1 = malloc(sizeof(StackData));
            d1->t = root->lt;
            d1->index = index;
            Push(&s, d1);
        }

        if (2 * i + 2 < N) {
            root->rt = malloc(sizeof(Tree));
            root->rt->data = arr[2 * i + 2];
            StackData *d2;
            d2 = malloc(sizeof(StackData));
            d2->t = root->rt;
            d2->index = index;
            Push(&s, d2);
        }
        i++;
    }
    return tree;
}
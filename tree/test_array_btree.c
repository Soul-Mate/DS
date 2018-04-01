#include <stdio.h>
#include <stdlib.h>
#include "array_btree.h"

int main(int argc, const char *argv[])
{
    ElementType arr[] = {
            1, 2, 3, 4, 5, 6, 7, 8
    };
    struct BTree *bt = CreateBTree(arr, 8);
    PostOrderTraversal(bt);
//    for (int i = 0; i < 8; i++) {
//        printf("%d\n",bt->elements[i]);
//    }
}

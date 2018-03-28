//
// Created by xyc on 18-3-28.
//

#include "stdio.h"
#include <stdlib.h>
#include "link_tree.h"


void Print(Tree *tree) {
    if (tree != NULL) {
        printf("%d\n",tree->data);
        Print(tree->lt);
        Print(tree->rt);
    }
}

int main(int argc, const char *argv[]) {
    int arr[] = {2,1,2,3,4,5};
    Tree *tree = CreateTree(arr, 6);
    Print(tree);
}
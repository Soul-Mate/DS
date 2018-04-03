//
// Created by xyc on 18-3-28.
//

#include "stdio.h"
#include <stdlib.h>
#include "link_btree.h"

int main(int argc, const char *argv[]) {
    DataType arr[] = {1,2,3,4,5,6,7,8};
    BinTree  t = CreateBTree(arr,  8);
    PreOrderTraversal(t);
}
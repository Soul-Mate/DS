//
// Created by xyc on 18-3-28.
//

#ifndef DS_LINK_TREE_H
#define DS_LINK_TREE_H

typedef int DataType;

typedef struct Tree {
    DataType data;
    struct Tree *lt, *rt;
}Tree;

Tree * CreateTree(DataType [], int);
#endif //DS_LINK_TREE_H

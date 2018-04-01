//
// Created by xyc on 18-3-31.
//

#ifndef DS_ARRAY_BTREE_H
#define DS_ARRAY_BTREE_H

typedef int ElementType;

struct StackData{
    ElementType el;
    int position;
};

struct BTree {
    ElementType *elements;
    int size;
};

struct BTree *CreateBTree(ElementType arr[], int N);

void PreOrderTraversalRecursion(struct BTree *bt, int i);

void InOrderTraversalRecursion(struct BTree *bt, int i);

void PostOrderTraversalRecursion(struct BTree *bt, int i);

void PostOrderTraversal(struct BTree *bt);

#endif //DS_ARRAY_BTREE_H

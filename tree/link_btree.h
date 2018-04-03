//
// Created by xyc on 18-4-1.
//

#ifndef DS_LINK_BTREE_H
#define DS_LINK_BTREE_H

typedef void * DataType;

typedef struct TreeNode *BinTree;

typedef BinTree Position;

struct TreeNode {
    DataType data;
    BinTree Left, Right;
};

struct QueueStorageTree {
    BinTree tree;
    int position;
};

BinTree CreateBTreeRecursion(DataType el[], int index, int len);

BinTree CreateBTree(DataType el[], int len);

void PreOrderTraversal(BinTree);

void PreOrderTraversalRecursion(BinTree);
//
//void InOrderTraversalRecursion(BTree *);
//
//void PostOrderTraversalRecursion(BTree *);

#endif //DS_LINK_BTREE_H

#include "heap.h"
#include <stdio.h>
#include <stdlib.h>

void PreOrderTraversalRecursion(MaxHeap H, int i)
{
    if (i < H->size) {
        printf("%d\n", H->elements[i]);
        PreOrderTraversalRecursion(H, i * 2);
        PreOrderTraversalRecursion(H, i * 2 + 1);
    }
}


MaxHeap CreateMaxHeap(ElementType el[], int N)
{
    // init MaxHeap
    MaxHeap H;
    H = malloc(sizeof(MaxHeap));
    H->elements = malloc(sizeof(ElementType) * (N + 1));
    H->elements[0] = MaxData;
    H->size = 1;
    H->cap = N + 1;

    // create tree
    int i;
    for (i = 0; i < N; i++) {
        H->elements[i + 1] = el[i];
        H->size++;
    }
    int parent, child;
    ElementType temp;
    // 从最后一个节点的根节点开始到根节点为止
    for (i = H->size / 2; i > 0; i--) {
        temp = H->elements[i];
        // 比较当前根节点的左右节点,找出最大的值,插入到当前根节点
        for (parent = i; parent * 2 <=H->size;parent=child) {
            child = parent * 2; // 左子节点
            // 存在右子节点,从左右子节点中筛选出最大的一个
            if (child != H->size && (H->elements[child] < H->elements[child+1]))
                child++;
            // 找出左右节点中最大的哪一个
            if (temp >= H->elements[child]) break;
            else H->elements[parent] = H->elements[child];
        }
        H->elements[parent] = temp;
    }
    return H;
}


ElementType DeleteMax(MaxHeap H) {
    ElementType Max, Temp;
    Max = H->elements[1];
    Temp = H->elements[H->size - 1];
    H->size--;
    int parent,child;
    for  (parent = 1; parent * 2 <= H->size;parent = child) {
        child = parent *  2;
        if (child != H->size && (H->elements[child] < H->elements[child + 1]))
            child++;
        if (Temp >= H->elements[child]) break;
        else H->elements[parent] = H->elements[child];
    }
    H->elements[parent] = Temp;
    return Max;
}
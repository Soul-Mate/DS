//
// Created by xyc on 18-4-7.
//

#ifndef DS_HEAP_H
#define DS_HEAP_H

#define MaxData 10240
typedef int ElementType;

typedef struct Heap{
    ElementType *elements;
    int size, cap;
};
typedef struct Heap *MaxHeap;

MaxHeap CreateMaxHeap(ElementType el[], int N);

ElementType DeleteMax(MaxHeap H);
#endif //DS_HEAP_H

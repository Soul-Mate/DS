#include "heap.h"
#include <stdio.h>
int main(int argc, const char *argv[]) {
    int N;
    N = 7;
    ElementType el[7] = {
            1, 2, 3, 4, 5, 6, 7
    };

    MaxHeap H = CreateMaxHeap(el, N);
    int i = 1;
//    printf("Max: %d\n",DeleteMax(H));
//    printf("Max: %d\n",DeleteMax(H));
//    printf("Max: %d\n",DeleteMax(H));
//    for (;i<H->size;i++) {
//        printf("%d\n",H->elements[i]);
//    }
}
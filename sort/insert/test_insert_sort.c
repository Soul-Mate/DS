#include "insert_sort.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    SeqList seq;
    int i, N;

    N = 5000;
    seq = malloc(sizeof(SeqList));
    seq->Elements = malloc(sizeof(ElementType) * N);
    seq->size = N;
    srand((unsigned int) time(NULL));
    for (i = 0; i < N; i++) {
        seq->Elements[i] = rand() % 99999;
    }
    clock_t start = clock();
    insert_sort(seq);
    clock_t finish = clock();
    printf("共耗时: %f秒\n", (double)(finish - start) / CLOCKS_PER_SEC);
}
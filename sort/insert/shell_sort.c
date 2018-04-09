#include "insert_sort.h"

void insert_sort(SeqList seq)
{
    int i, j, temp;
    for (i = 1; i < seq->size; i++) {
        temp = seq->Elements[i];
        for (j = i; j > 0 && temp < seq->Elements[j - 1]; j--) {
            seq->Elements[j] = seq->Elements[j - 1];
        }
        seq->Elements[j] = temp;
    }
}
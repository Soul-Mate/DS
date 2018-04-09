#include "bubble_sort.h"
void  bubble_sort(SeqList seq) {
    int i, j, flag;
    for (i = seq->size - 1; i >= 0; i--) {
        flag = 0;
        for (j = i; j < seq->size; j++){
            if (seq->Elements[j] > seq->Elements[j+1]) {
                swap(seq->Elements, j, j + 1);
                flag = 1;
            }
        }
        if (!flag) break;
    }

}
#include <stdio.h>
#include "shell_sort.h"

void shell_sort(SeqList seq)
{
    int hibbard, i, j, temp;
    hibbard = 1;
    
    while (hibbard < seq->size) 
        hibbard = 2 * hibbard + 1;
    
    while (hibbard >= 1) {
        for (i = hibbard; i < seq->size; i++) {
            temp = seq->Elements[i];
            for (j = i; j > 0 && temp < seq->Elements[j - 1]; j--) {
                seq->Elements[j] = seq->Elements[j - 1];
            }
            seq->Elements[j] = temp;
        }
        hibbard = hibbard / 3;
    }
}
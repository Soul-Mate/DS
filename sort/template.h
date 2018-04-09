//
// Created by xyc on 18-4-9.
//

#ifndef DS_TEMPLATE_H
#define DS_TEMPLATE_H

#include <time.h>

typedef int ElementType;

typedef struct Data{
    ElementType *Elements;
    int size;
};

typedef struct Data * SeqList ;

void swap(ElementType [], int, int);

time_t start();

time_t end();

char * ptime(time_t s, time_t e, char *format);

#endif //DS_TEMPLATE_H

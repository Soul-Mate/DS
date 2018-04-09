#include "template.h"
#include <stdio.h>
#include <stdlib.h>

void swap(ElementType arr[],int x, int y)
{
    ElementType t;
    t = arr[x];
    arr[x] = arr[y];
    arr[y] = t;
}

time_t start()
{
    return time(NULL);
}

time_t end()
{
    return time(NULL);
}

char * ptime(time_t s, time_t e, char *format)
{
    time_t x;
    struct tm *pt;
    char *out ;
    x = e - s;
    pt = localtime((const time_t *) x);
    out = malloc(256);
    strftime(out, 256, format, pt);
    return out;
}
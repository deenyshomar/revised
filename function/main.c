#include<stdio.h>
#include"signatures.h"

int main(void)
{
    int a;
    int *p;
    p = &a;
    a = 5;
    Increament(&a);
    printf("%d\n", a);
}
#include <stdio.h>
 void double_arrays(int *a, int len)
 {
 for (int i = 0; i < len; i++)
 {
    a[i] = a[i] * 2;
    printf("%d\t", a[i]);
 }
 printf("\n");
 }
 int main (void)
 {
    int len = 5;
    int x[5] = {1, 2, 3, 4, 5};
    double_arrays(x, 5);
 }
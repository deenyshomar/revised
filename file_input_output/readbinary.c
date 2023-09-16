#include<stdio.h>
int main(void)
{
    FILE *fp;
    unsigned char b;
    fp = fopen("binary.bin", "rb");

    // we will pass the fread function:
    // fread arguments are : the pointer pointing to the bytes
    // size of the type
    // 1
    // FILE*
    while(fread(&b, sizeof(char), 1, fp) > 0)
    {
        printf("%d\n", b);
    }
}
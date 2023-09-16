#include<stdio.h>
int main(void)
{
    FILE *fp;
    fp = fopen("output1.bin", "wb");
    unsigned short v = 0x1234; // Two bytes, 0x12 and 0x34
    fwrite(&v, sizeof v, 1, fp);

}
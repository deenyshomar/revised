#include<stdio.h>
int main(void)
{
    unsigned char a[5] = {20, 25, 15, 10, 30};
    FILE *fp;

    fp = fopen("binary.bin", "wb");

    // In the call to fwrite, the arguments are:
    //
    // * Pointer to data to write
    // * Size of each "piece" of data
    // * Count of each "piece" of data
    // * FILE*

    fwrite(a, sizeof(char), 5, fp);
    fclose(fp);
    // Note: you can view the binary in hexadecimal format using this command "hexdump -C binary.bin"
    // we can see the output as bytes like this : 14 19 0f 0a 1e
    // And those values in hex do match up to the values (in decimal) that we wrote out ;)
}

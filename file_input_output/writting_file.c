#include<stdio.h>
/*
In much the same way we can use fgetc(), fgets(), and fscanf() to read text streams, we can use
fputc(), fputs(), and fprintf() to write text streams.
To do so, we have to fopen() the file in write mode by passing "w" as the second argument. Opening an
existing file in "w" mode will instantly truncate that file to 0 bytes for a full overwrite. 
*/

int main(void)
{
    FILE *fp;
    int x = 64;

    fp = fopen("output.txt", "w");
    fputc('Z', fp);
    fputc('\n', fp);
    fprintf(fp, "x = %d\n", x);
    fputs("Hello, world\n", fp);
    fclose(fp);
}
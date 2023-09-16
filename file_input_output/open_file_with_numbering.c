#include<stdio.h>
/**
 * code that reads a file line at a time and prints out a line number before each one
 */
int main(void)
{
    FILE *fp; //fp : variable to hold open file
    fp = fopen("hello.txt", "r");
    char size[1024]; // Big enough for any line this program will encounter
    int linecount = 0;
    // fgets takes 3 arguments;
    // 1. it takes a pointer to a char buffer to hold bytes, (size).
    // 2. a maximum number of bytes to read, (sizeof size).
    // 3. a FILE* to read from, (fp).
    while(fgets(size, sizeof size, fp) != NULL)  
    {
        printf("%d : %s", ++linecount, size);
    }
    fclose(fp);
}
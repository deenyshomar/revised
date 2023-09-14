#include <stdio.h>

int main(void)
{
    FILE *fp; // fp is a variable to represent open file
    fp = fopen("hello.txt", "r"); // open file for reading

    int c = fgetc(fp); //read a single character from fp i.e from the file we opened for reading (hello.txt)
    printf("%c\n", c);  // print the character we opened for read to standard output i.e the screen   
    fclose(fp); // close the file.
}
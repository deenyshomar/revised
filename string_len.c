#include<stdio.h>
//#include<string.h>

int my_strlen(char *s)
{
    int count = 0;
    while (s[count] != '\0')
    count++;
    return count;
}
int main(void)
{
    char *s = "deenyshomar";

    printf("the string length is %u in bytes\n", my_strlen(s));
    
}
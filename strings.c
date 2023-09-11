#include <stdio.h>

int main(void)
{
    char *s = "Hello, word\n";
    s[0] = 'z';

    for (int i = 0; i <= 12; i++)
    {
        printf("%c", s[i]);
    }
    
}
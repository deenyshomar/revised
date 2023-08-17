#include <stdio.h>
/**
 * Description: function in c
 *
 * main - Entry point
 *
 * return: Always 0 (Success)
 *
 **/

int plus_one(int n) //The defination
{
	return n + 1;
}

int main(void)
{
	int i = 10, j;

	j = plus_one(i);
	printf("i + 1 is : %d\n", j);
}

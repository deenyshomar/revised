#include<stdio.h>
#include<stdlib.h>
/**
 * Description: do_while loop with random number(rand)
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int r;

	do
	{
		r = rand() % 100;
		printf("%d\n", r);
	}while (r != 37);

	return(0);
}

#include <stdio.h>
/**
 * Description: do_while loop, conditional statement
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int i = 10;

	while (i < 10)
	{
		printf("while loop: i is %d\n", i);
		i++;
	}

//	do
//	{
//		printf("do_while loop: i is %d\n", i);
//	}while (i < 10);
//
	return(0);
}

#include <stdio.h>
/**
 * Description - increament and decreament operation
 *
 * Return: Success(0)
 *
 **/

int main(void)
{
	int i = 10;
	int j = 5;

	printf(" i before increament is : %d\n", i);
	printf(" i after post-increament is : %d\n", i++);
	printf(" j before increament is : %d\n", j);
	printf(" j after pre-increament is : %d\n", ++j);
	return(0);
}

#include <stdio.h>
/**
 * Description: function prototype
 *
 * foo - funtion that return void
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 **/

int foo(void);

int main(void)
{
	int i;
	i = foo();
	printf(" i is : %d\n",i);
}
int foo(void)
{
	return 1234;
}

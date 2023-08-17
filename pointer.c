#include<stdio.h>
/**
 * Description: pointer - variable that hold the address of another variable
 *
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 **/

int main(void)
{
	int i;
	int *p;
	p = &i;

	i = 10;
	*p = 20;

	printf("the value of i is : %d\n", i);
	return(0);
}

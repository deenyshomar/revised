#include<stdio.h>
/**
 * Description: Passing pointers as argument
 *
 * main - entry point
 *
 * @p: pointer parametre
 *
 * Return: Always 0 (Success)
 *
 **/
int increament(int *p)
{
	*p = *p + 1;
}
int main(void)
{
	int i;
	i = 10;
	int *j;
	j = &i;

	printf("value of i before function call : %d\n", i);
	increament(j);
	printf("value of i after function call : %d\n", i);
	increament(&i);
	printf("value of i after another call but using '&' : %d\n", i);
	return(0);
}

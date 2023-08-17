#include <stdio.h>
/**
 * Description: Function, passing by value
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 **/
void increament(int a)
{
	a++;
}

int main(void)
{
	int i = 10;

	increament(i);
	printf("i is : %d\n", i);
	return (0);
}

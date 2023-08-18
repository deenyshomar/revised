#include<stdio.h>
/**
 * Description: arrays
 *
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int i;
	int a[4];
	a[0] = 2;
	a[1] = 3;
	a[2] = 9;
	a[3] = 1;

	printf("index 2 is : %d\n", a[2]);
	printf("size of the array is : %zu\n", sizeof a);
	printf("number of element of the array is : %ld\n", (sizeof a / sizeof a[0]));
	return(0);
}

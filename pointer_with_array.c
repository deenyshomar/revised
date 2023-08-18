#include<stdio.h>
/**
 * Description: Getting a Pointer to an Array
 *
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int a[5] = {24, 25, 26, 27, 28};
	int *p;
	p = & a[0]; // this can also be same as "p = a;" p points to the array, but much nicer-looking
       	printf("%d\n", *p);
}

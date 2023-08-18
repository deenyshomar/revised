#include<stdio.h>
/**
 * Description: Make a 3x3 identity matrix
 *
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int row, col;
	int a[3][3] = {
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}
	};
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			printf("%d\t", a[row][col]);
		}
		putchar('\n');
	}
}

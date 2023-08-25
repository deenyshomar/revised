#include<stdio.h>
/* this code print right side pyramid using # character between 1 - 8 */
int main(void)
{
	int n, i, j;

	do
	{
		printf("Enter the height of the pyramid : ");
		scanf("%d", &n);

	}while (n < 1 || n > 8);
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}putchar('\n');
}

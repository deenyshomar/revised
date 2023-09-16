#include <stdio.h>

/*passinf single dimentional array to a function*/

void times2(int *, int);
void times3(int *, int);
void times4(int *, int);

int main(void)
{
	printf("Multiplication table: 2, 3, and 4\n");
	int x[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	times2(x, 12);
	times3(x, 12);
	times4(x, 12);
}

void times2(int *a, int len) // Passing as a pointer to the first element
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d\t", a[i] * 2);
	}
	putchar('\n');
}

void times3(int a[], int len) // Same thing, but using array notation
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d\t", a[i] * 3);
	}
	putchar('\n');
}
void times4(int a[4], int len) // Same thing, but using array notation with size
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d\t", a[i] * 4);
	}
	putchar('\n');
}

#include <stdio.h>

void hello(void)
{
	printf("Hello, world!\n");
}

int plus_one(int n)
{
	return n + 1;
}

void increament(int a)
{
	a++;
}

int Increament(int *p)
{
	*p = *p + 1;
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

int foo(void)
{
	return 1234;
}

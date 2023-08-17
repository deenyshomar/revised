#include<stdio.h>
/**
 * Description: Switch statement
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int goat_count;

	printf("Enter a goat_count: ");
	scanf("%d", &goat_count);

	switch (goat_count)
	{
	case 0:
	{
		printf("you have no goat!\n");
		break;
	}
	case 1:
	{
		printf("you have a single goat!\n");
		break;
	}
	case 2:
	{
		printf("you have a brace of goats!\n");
		break;
	}
	default:
	{
		printf("you have a bona field plethora of goats!\n");
		break;
	}
	}
	return (0);
}

#include <stdio.h>
/**
 * Description - else-if conditional statement
 *
 * Return: Always 0 (success)
 *
 **/
int main(void)
{
	int score = 76 ;

	if (score >= 90)
	{
		printf("Distinction!\n");
	}
	else if (score >= 70 && score <= 89)
	{
		printf("Very Good!\n");
	}
	else if (score >= 50 && score <= 69)
	{
		printf("Good!\n");
	}
	else if (score >= 40 && score <= 49)
	{
		printf("Pass!\n");
	}
	else
	{
		printf("Poor!\n");
	}
	return(0);
}

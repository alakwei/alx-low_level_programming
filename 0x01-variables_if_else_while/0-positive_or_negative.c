#include <stdio.h>

/**
 * main - determining whether random
 * numbers are positive,
 * negative or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(number(0));
	n = rand() - RAND_MAX / 2;
	/* assign positive, negative or zero*/
	if (n > 0)
	{
		printf("is positive\n");
	}
	if (n < 0)
	{
		printf("is negative\n");
	}
	if (n == 0)
	{
		printf("is zero\n");
	}
	return (0);
}

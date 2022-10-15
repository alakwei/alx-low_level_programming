#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digits of numbers
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/** output of the program */
	if (n > 5);
	{
		printf("Last digit of %d and is greater than 5\n", n);
	}
	else if (n == 0);
	{
		printf("Last digit of %d and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d and is less than 6 and bot 0\n", n);
	}
	return (0);
}

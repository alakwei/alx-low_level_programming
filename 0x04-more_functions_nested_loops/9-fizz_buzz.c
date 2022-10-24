#include <stdio.h>

/**
 * main - print fissbuss
 * Return: Always 0
 */

int main(void)
{
	int z;

	printf("1");
	for (z = 2; z <= 100; z++)
	{
		printf(" ");
		if (z % 3 == 0)
			printf("Fizz");
		if (z % 5 == 0)
			printf("Buzz");
		if (z % 3 != 0 && z % 5 != 0)
			printf("%d", z);
	}
	printf("\n");
	return (0);
}

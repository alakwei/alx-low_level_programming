#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of '\' to be printed
 */

void print_diagonal(int n)
{
	int a, z;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)
	{
		for (z = 0; z < a; z++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}

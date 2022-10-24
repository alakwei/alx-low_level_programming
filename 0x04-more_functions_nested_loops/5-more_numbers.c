#include "main.h"

/**
 * more_numbers - print 10 times the numbers
 * from 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int n, a;

	for (a = 0; a <= 9; a++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}

		_putchar('\n');
	}
}

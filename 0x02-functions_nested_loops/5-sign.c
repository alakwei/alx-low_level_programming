#include "main.h"

/**
 * print_sign - sign of numbers
 * @n: number to be printed
 * Return: 1 if greater
 * 0 if zero
 * -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

#include "main.h"

/**
 * print_last_digit - prints the last digits
 * @n: number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
		d *= -1;

	_putchar(d + '0');

	return (0);
}

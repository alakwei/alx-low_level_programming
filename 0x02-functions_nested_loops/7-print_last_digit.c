#include "main.h"

/**
 * print_last_digit - prints the last digits
 * @n: number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int o = n % 10;

	if (o < 0)
		o *= -1;

	_putchar(o + '0');

	return (0);
}

#include "main.h"


/**
 * print_last_digit - prints the last digits
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int o = n % 10;

	if (o < 0)
		o *= -1;
	_putchar('0' + o);
	return (0);
}

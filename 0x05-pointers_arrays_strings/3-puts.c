#include "main.h"

/**
 * _puts - prints string
 * @str: strings printed
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}



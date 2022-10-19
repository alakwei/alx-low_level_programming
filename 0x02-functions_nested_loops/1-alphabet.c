#include "main.h"

/**
 * main - print alphabets lowercase
 *
 * Return: Always
 */
void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
		_putchar(az);

	_putchar('\n');
}

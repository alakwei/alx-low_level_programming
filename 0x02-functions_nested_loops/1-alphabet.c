#include "main.h"


/**
 * main - print alphabets
 *
 * lowercase
 *
 * Return: Always 0 .
 */
void Print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer
 * @b: integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

#include "main.h"

/**
 * _isdigit - checks for a digit
 * Return: 1 otherwise 0
 */

int _isdigit(int c)
{
	int n = 0;

	if (c >= '0' && c <= '9')
		n = 1;

	return (n);
}

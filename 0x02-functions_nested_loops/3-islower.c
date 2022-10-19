#include "main.h"

/**
 * _islower - is character a lowercase
 *@c: the character
 *
 * Return: 1 if its lowercase, else 0
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

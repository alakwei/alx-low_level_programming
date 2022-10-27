#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string 1
 * @dest: string 2
 * Return: a poniter
 */

char *_strcat(char *dest, char *src)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (dest);
}


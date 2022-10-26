#include "main.h"

/**
 * _strcpy - copies the string pointed
 * @dest: buffer
 * @src: ponted
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
		length++;
	}

	*(dest + length) = '\0';
	return (dest);
}


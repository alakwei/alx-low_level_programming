#include "main.h"
#include <unistd.h>

/**
 * main - print putchar
 *
 * Return: Always 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

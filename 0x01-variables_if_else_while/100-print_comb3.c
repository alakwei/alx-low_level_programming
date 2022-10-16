#include <stdio.h>

/**
 * main - possible different
 * different combination
 * of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, y = '0', z;

	for (x = '0'; x <= '9'; x++)
	{
	for (z = y; z <= '9'; z++)
	{
	if (x != z)
	{
		putchar(x);
		putchar(z);
	}
	if (x == z)
	{
	continue;
	}
	if (x == '8' && z == '9')
	{
	break;
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	}
	y++;
	}
		putchar('\n');
	return (0);
}

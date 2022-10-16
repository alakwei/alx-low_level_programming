#include <stdio.h>

/**
 * main - alphabets without q and e
 *
 * Return: Always (Successful)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		continue;
		putchar(x);
	}
		putchar('\n');
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements in an array
 * @a: arrays
 * @n: elements
 * Return:Always 0
 */

void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		printf("%d", a[arr]);
		if (arr != n - 1)
			printf(",");
	}

	printf("\n");



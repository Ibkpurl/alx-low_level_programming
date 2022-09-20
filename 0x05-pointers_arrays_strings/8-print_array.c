#include "main.h"
#include <stdio.h>

/**
 * print_array -ifunction that print n elements of an array of integers
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
			printf(", ");
	}
	putchar('\n');
}

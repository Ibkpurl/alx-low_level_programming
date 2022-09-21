#include "main.h"

/**
 * reverse_array - a function that reverses the 
 * content of an array of integers
 * @a: An array of integers
 * @n: Number of elements to swap
 * Return: empty.
 */
void reverse_array(int *a, int n)
{
	int *b, i, aux, k;

	b = a;

	for (i = 1; i < n; i++)
	{
		b++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *b;
		*b = aux;
		b--;
	}
}

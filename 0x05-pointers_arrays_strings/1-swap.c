#include "main.h"

/**
 * swap_int -  is a function that swaps the values of two integers.
 * @a: an inout integer pointer
 * @b: an input integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}

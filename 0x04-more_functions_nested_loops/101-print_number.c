#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - A function to priting n
 * @m: an input unsigned integer
 * Return: Nothing
 */
void print_integer(int m)
{
	int a = 1000000000;

	for (; a >= 1; a /= 10)
		if (m / a != 0)
		{
			_putchar((m / a) % 10 + '0');
		}
}

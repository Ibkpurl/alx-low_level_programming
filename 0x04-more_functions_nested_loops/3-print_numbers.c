#include "main.h"

/**
 * print_numbers - is a function that prints the numbers, from 0 to 9
 * followed by new line
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}

#include "main.h"

/**
 * print_alphabet_x10 - uses _putchar function to print
 * alphabets in lowercase ten times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char p;
	int q;

	for (q = 0; q < 10; q++)
	{
		for (p = 'a'; p <= 'z'; p++)
			_putchar(p);
		_putchar('\n');
	}
}


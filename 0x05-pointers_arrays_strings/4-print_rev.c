#include "main.h"

/**
 * print_rev - is a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	char *length = s;

	while (*length)
		length++;
	length -= 1;

	while (length)
	{
		_putchar(*s);
		length--;
	}
	_putchar('\n');
}

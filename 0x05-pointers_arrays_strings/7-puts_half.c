#include "main.h"
#include <stdio.h>

/**
 * puts_half - is a function that print half of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int length = 0, a, n;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		n = length / 2;

	else
		n = (length + 1) / 2;

	for (a = n; a < len; a++)
		_putchar(str[a]);

	_putchar('\n');
}

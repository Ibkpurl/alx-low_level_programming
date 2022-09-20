#include "main.h"
#include <stdio.h>

/**
 * puts2 - is a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int length = 0, a = 0;

	while (str[length] != '\0')
		length++;

	length -= 1;

	for (; a <= length; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}

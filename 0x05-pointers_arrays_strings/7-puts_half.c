#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a given string
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
		a++;
	return (a);
}

/**
 * rev_string - will reverse string in place, without printing it
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int a, length;

	char b, c;

	length = _strlen(s) - 1;
	a = 0;

	while (a < length)
	{
		b = s[a];
		c = s[length];
		s[a++] = c;
		s[length--] = b;
	}
}


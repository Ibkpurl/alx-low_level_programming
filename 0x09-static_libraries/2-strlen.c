#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	return (l);
}

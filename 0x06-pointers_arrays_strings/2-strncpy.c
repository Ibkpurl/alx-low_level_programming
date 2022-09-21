#include "main.h"

/**
 * _strncpy - is a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclength = 0, a = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclength++;
		src++;
	}

	srclength++;

	if (n > srclength)
		n = srclength;

	src = start;

	for (; a < n; a++)
		*dest++ = *src++;

	return (temp);
}

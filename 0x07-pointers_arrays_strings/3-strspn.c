#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character
 * Return: returns pointer to c
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, stop;
	char *start = accept;

	while (*s)
	{
		stop = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				stop = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (stop == 0)
			break;
	}
	return (count);
}

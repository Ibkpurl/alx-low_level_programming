#include "main.h"
#include <stdio.h>

/**
 * _atoi - is a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int tst = 1;
	unsigned int total = 0;
	char zero = 0;

	while (*s)
	{
		if (*s == '-')
			tst *= -1;

		if (*s >= '0' && *s <= '9')
		{
			zero = 1;
			total = total * 10 + *s - '0';
		}

		else if (zero)
			break;
		s++;
	}

	if (tst < 0)
		total = (-total);

	return (total);
}

#include "main.h"

/**
 * islower - checks for lowercase character
 * _islower - checks for lowercase character
 * c - checks for lowercase character
 * Return: islower(Success)
 */
int _islower(int c)
{
	char i;
	int islower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			islower = 1;
	}

	return (islower);
}

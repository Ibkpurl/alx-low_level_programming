#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c - c is an integer value to test
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

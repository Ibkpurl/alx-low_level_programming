#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: c is an integer value to test
 * Return: int 1 if c is lowercase 0 if otherwise
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}

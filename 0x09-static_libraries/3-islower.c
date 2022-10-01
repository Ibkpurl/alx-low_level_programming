#include "main.h"

/**
 * _islower - Checks  if a input is lower or not
 * @c: c is integer value to test
 *
 * Return: int 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}

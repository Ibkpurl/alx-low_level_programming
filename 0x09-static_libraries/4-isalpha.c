#include "main.h"

/**
 * _isalpha - Checks  if c is lower, upper or letter
 *@c: c is integer value to test
 *
 * Return: int 1 if c is lowercase 0 otherwise
 */
int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))  ? 1 : 0);
}

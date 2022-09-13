#include "main.h"

/**
 * print_alphabet function is uses _putchar function to print the alphabet
 * in lowercase ten times
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

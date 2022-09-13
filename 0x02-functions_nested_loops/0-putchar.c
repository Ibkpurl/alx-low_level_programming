#include "main.h"

/**
 * main - print _putchar with a new linw
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char textToPrint[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(textToPrint[i]);
	}
	_putchar('\n');

	return (0);
}

#include "main.h"
/**
 * more_numbers - print 10 times 0-14.
 *
 * Return: void
 */
void more_numbers(void)
{
	int a = 1;
	int b = 0;

	while (a <= 14)
	{
		while (b <= 14)
		{
			_putchar(a + '0');
			++b;
		}
		_putchar('\n');
		b = 0;
		++a;
	}
}

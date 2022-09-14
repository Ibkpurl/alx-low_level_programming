#include "main.h"
#include <stdbool.h>

/**
 * _print_char - prints a character using _putchar
 * @p: charater to print
 * @s: size, number of times to print the character
 * @is_put: boolean
 */
void _print_char(char p, int s, bool is_put)
{
	int i = 0;

	if (is_put == true)
		_putchar(',');

	for (i = 0; i < s; i++)
		_putchar(p);
}

/**
 * print_times_table - prints the times table of nine (9)
 * @n: int n size of table
 * Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n < 15)
	{
		int r, p, prd, var;

		for (r = 0; r <= n; r++)
		{
			for (p = 0; p <= n; p++)
			{
				prd = r * p;
				var = prd % 10;

				if (p == 0)
				{
					_print_char('0', 1, false);
				}
				else if (prd < 10)
				{
					_print_char(' ', 3, true);
					_print_char(var + '0', 1, false);
				}
				else if (prd >= 10 && prd < 100)
				{
					_print_char(' ', 2, true);
					_print_char(((prd / 10) % 10) + '0', 1, false);
					_print_char((prd % 10) + '0', 1, false);
				}
				else if (prd > 99 && prd < 1000)
				{
					_print_char(' ', 1, true);
					_print_char(prd / 100 + '0', 1, false);
					_print_char(((prd / 10) % 10) + '0', 1, false);
					_print_char((prd % 10) + '0', 1, false);
				}
			}
			_putchar('\n');
		}
	}
}



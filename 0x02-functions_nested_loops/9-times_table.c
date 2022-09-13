#include "main.h"

/**
 * times_table -
 * prints the multiplication table of nine (9)
 * Return: void
 */
void times_table(void)
{
	int r, c, prd, q, p;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			prd = r * c;
			q = prd / 10;
			p = prd % 10;
													if (c == 0)
			{
				_putchar('0');
			}
			else if (prd < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(q + '0');
				_putchar(p + '0');
			}
		}
		_putchar('\n');
	}
}



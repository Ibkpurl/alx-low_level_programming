/**
 * more_numbers - print 10 times 0-14.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 1;
	int j = 0;

	while (i <= 14)
	{
		while (j <= 14)
		{
			_putchar(i + '0');
			++j;
		}
		_putchar('\n');
		j = 0;
		++i;
	}
}

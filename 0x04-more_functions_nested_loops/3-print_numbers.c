/**
 * print_numbers - a function that checks for a digit.
 *
 * Return: void
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		++a;
	}

	_putchar('\n');
}

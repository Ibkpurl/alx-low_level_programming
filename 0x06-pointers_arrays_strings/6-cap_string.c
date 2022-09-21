#include "main.h"

/**
 * cap_string - is a function that capitalizes all words of a string
 * @str: char type pointer
 * Return: pointer
 */
char *cap_string(char *str)
{
	int a;
	int b;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	a = 0;

	while (str[a] != '\0')
	{
		if (a == 0 && str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
		b = 0;
		while (c[b] != '\0')
		{
			if (c[b] == str[a] && (str[a + 1] >= 97 && str[a + 1] <= 122))
			{
				str[a + 1] = str[a + 1] - 32;
			}
			b++;
		}
		a++;
	}
	return (str);
}

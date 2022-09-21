#include "main.h"

/**
  * string_toupper - function that change all lowercase letters to uppercase
  *
  * @p: String to return
  *
  * Return: String
  */

	char *string_toupper(char *p)
	{

		int a;

		for (a = 0; p[a] != '\0'; a++)
		{

			if (p[a] >= 97 && p[a] <= 122)
			{
				p[a] = p[a] - 32;
			}

	}

	return (p);
}

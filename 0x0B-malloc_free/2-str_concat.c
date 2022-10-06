#include "main.h"
#include <stdlib.h>

/**
 * str_concat - is a function that concatenates two strings
 * @s1: input pointer of the first string
 * @s2: input pointer of the second string
 * Return: a pointer to concatenated strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, *starts1, *starts2;
	int i = 0, length1 = 0, length2 = 0;

	starts1 = s1;
	starts2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		length1++;
		s1++;
	}
	s1 = starts1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		length2++;
		s2++;
	}
	s2 = starts2;
	new_str = malloc(sizeof(char) * (length1 + length2 + 1));
	starts1 = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (length1 + length2); i++)
	{
		if (i < length1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (starts1);
}

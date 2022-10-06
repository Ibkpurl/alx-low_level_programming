#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -function that concatenates two strings
 * @s1: An input 
 * @s2: An input
 * @n: an input integer of number of string to concatenate
 * Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, length1 = 0, length2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[length1])
		length1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[length2])
		length2++;

	if (n >= length2)
		n = length2;

	new_str = malloc(length1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	for (; i < (length1 + n); i++)
	{
		if (i < length1)
			new_str[i] = *s1, s1++;
		else
			new_str[i] = *s2, s2++;
	}
	new_str[i] = '\0';
	return (new_str);
}

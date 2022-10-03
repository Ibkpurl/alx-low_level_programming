#include "main.h"
#include <stdlib.h>

/**
 * strtow - function that splits a string into words
 * @str: An input 
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **array;
	int i = 0, j, m, k = 0, length = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
				((str[i + 1] == ' ' || str[i + 1] == '\t') || str[i + 1] == '\n'))
			count++;
	}
	if (count == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' && k < count; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			length = 0;
			j = i;
			while ((str[j] != ' ' || str[j] != '\t') && str[j] != '\0')
				j++, length++;
			array[k] = malloc((len + 1) * sizeof(char));
			if (array[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(array[k]);
				free(array);
				return (NULL);
			}
			for (m = 0; m < length; m++, i++)
				array[k][m] = str[i];
			array[k++][m] = '\0';
		}
	}
	array[k] = NULL;
	return (array);
}

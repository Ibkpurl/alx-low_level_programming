#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - make a copy to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int a, end;
	char *array;

	if (str == NULL)
		return (NULL);

	for (end = 0; end <= *str; end++)
	{
	}

	end += 1;
	array = malloc(sizeof(char) * end);

	for (a = 0; a < end; a++)
		array[a] = str[a];

	if (array == NULL)
		return (NULL);
	return (array);
}

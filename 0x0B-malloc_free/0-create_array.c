#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - main entry
 * @size: input
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;
	return (array);
}

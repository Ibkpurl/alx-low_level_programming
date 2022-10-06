#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: A pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	for (; a < nmemb * size; a++)
		*(space + a) = 0;

	return (space);
}

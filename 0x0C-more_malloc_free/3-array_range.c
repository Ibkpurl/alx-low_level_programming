#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: min number
 * @max: max number
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *new_array;
	int diff, a;

	if (min > max)
		return (NULL);

	diff = max - min;
	new_array = malloc((diff + 1) * sizeof(int));
	if (new_array == NULL)
		return (NULL);

	for (a = 0; a <= diff; a++)
		new_array[a] = min++;

	return (new_array);
}

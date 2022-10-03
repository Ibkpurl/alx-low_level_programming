#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **iarr;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	iarr = malloc(sizeof(int) * height);

	if (iarr == NULL)
	{
		free(iarr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		iarr[i] = malloc(sizeof(int) * width);
		if (iarr == NULL)
		{
			free(iarr);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			iarr[i][n] = 0;
		}
	}
	return (iarr);
}

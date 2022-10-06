#include <stdlib.h>

/**
 * alloc_grid - a function that returns a
 * pointer to a 2 dimensional array of integers.
 *
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int a = 0, b = 0;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (; a < height; a++)
	{
		gridout[a] = malloc(width * sizeof(int));
		if (gridout[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gridout[a]);
			free(gridout);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			gridout[a][b] = 0;

	return (gridout);
}

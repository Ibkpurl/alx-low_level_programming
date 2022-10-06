#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2D array of ints previously
 * created by your malloc_grid function
 * @grid: An input
 * @height: height of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	if (grid == NULL)
		return;
	while (a < height)
		free((int *)grid[a++]);
	free(grid);
}

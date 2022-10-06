#include <stdlib.h>

/**
 * ch_free_grid - a function that frees a 2 dimensional array
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - a function that split a string into words.
 * @str: string.
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **args_out;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	args_out = malloc((height + 1) * sizeof(char *));
	if (args_out == NULL || height == 0)
	{
		free(args_out);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				args_out[i] = malloc((c - a1 + 2) * sizeof(char));
				if (args_out[i] == NULL)
				{
					ch_free_grid(args_out, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			args_out[i][j] = str[a1];
		args_out[i][j] = '\0';
	}
	args_out[i] = NULL;
	return (args_out);
}

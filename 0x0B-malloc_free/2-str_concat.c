#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers with given width and height
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: Pointer to the 2D array, or NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

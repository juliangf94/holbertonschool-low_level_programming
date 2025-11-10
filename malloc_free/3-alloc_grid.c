#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a 2D array (grid) of integers initialized to 0.
 *
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: A pointer to the newly allocated 2D array (int **),
 * or NULL on failure (e.g., if width or height is <= 0, or malloc fails).
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			return (NULL);
		}
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}

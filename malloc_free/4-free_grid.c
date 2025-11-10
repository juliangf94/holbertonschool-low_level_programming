#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2-dimensional grid of integers.
 * @grid: The double pointer to the 2D grid.
 * @height: The height (number of rows) of the grid.
 *
 * Description: The function frees the memory allocated for each row first,
 * and then frees the memory allocated for the array of row pointers.
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid != NULL)
	{
		for (h = 0; h < height; h++)
			free(grid[h]);
	}
	free(grid);
}

#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocated for the grid
 * @grid: grid to be freed
 * @height: height of the given grid
 * No return value
 */

void free_grid(int **grid, int height)
{
	int n;

	if (height <= 0 || grid == NULL)
		return;
	n = 0;
	while (n < height)
	{
		free(grid[n]);
		n++;
	}

	free(grid);
}

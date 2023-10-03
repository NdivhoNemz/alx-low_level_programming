#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: 2 Dimensional grid
 * @height: height dimension of grid
 * Returns: Void
 */

void free_grid(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}
	free(grid);
}

/**
 * free_grid - Function is used to free the memory that was dynamically
 * allocated for a 2D array.
 * It does this by first freeing each row of the array,
 * and then freeing the array of pointers itself.
 */

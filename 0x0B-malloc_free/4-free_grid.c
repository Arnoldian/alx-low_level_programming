#include "main.h"
#include <stdlib.h>

/**
 * free_grid - func frees 2 dimensional grid prev created by alloc_grid func
 * @grid: multidimensional arr of ints parameter
 * @height: height of grid parameter
 * Return: no return statement
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);

		free(grid);
	}
}

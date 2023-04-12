#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - func returns pointer to 2 dimensional arr of ints
 * @width: width of the arr input parameter
 * @height: height of array input parameter
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid_out;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid_out = malloc(height * sizeof(int *));

	if (grid_out == NULL)
	{
		free(grid_out);

		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid_out[i] = malloc(width * sizeof(int));

		if (grid_out[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid_out[i]);

			free(grid_out);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid_out[i][j] = 0;

	return (grid_out);
}

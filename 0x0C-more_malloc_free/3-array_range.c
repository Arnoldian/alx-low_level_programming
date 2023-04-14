#include "main.h"
#include <stdlib.h>

/**
 * array_range - func creates array of ints
 * @min: minimum value parameter
 * @max: maximum value parameter
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}

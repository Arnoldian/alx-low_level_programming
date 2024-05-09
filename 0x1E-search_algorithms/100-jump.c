#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for val in arr
 * @array: input
 * @size: of array
 * @value: to search
 * Return: index
 */

int jump_search(int *array, size_t size, int value)
{
	int i, m, k, prev;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	m = (int) sqrt((double)size);
	k = 0;
	prev = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}

		k++;
		prev = i;
		i = k * m;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, i);

	for (; prev <= i && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

		if (array[prev] == value)
		{
			return (prev);
		}
	}

	return (-1);
}

#include "function_pointers.h"

/**
 * int_index - func searches for int
 * @array: array to search for int in
 * @size: array size parameter
 * @cmp: pointer to comparing function (stdlib) parameter
 * return: returns index of 1st element for which
 * cmp function does not return 0, or -1 if no match found
 * or size negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}

#include "function_pointers.h"

/**
 * int_index - func searches for int
 * @array: array to search for int in
 * @size: array size parameter
 * @cmp: pointer to comparing function (stdlib) parameter
 * return: returns i or -1
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

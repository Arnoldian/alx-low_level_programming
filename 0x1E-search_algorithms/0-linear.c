#include "search_algos.h"

/**
  * linear_search - look for val in array of ints
  * @array: ptr to 1st elem  in array
  * @size: no. of elem
  * @value: search for
  * Return: if not in array or NULL
  */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}

	return (-1);
}

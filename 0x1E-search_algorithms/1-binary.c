#include "search_algos.h"

/**
  * binary_search - search for val in sorted arr of ints
  * @array: 1st elem ptr of arr
  * @size: elems no. in arr
  * @value: to search for
  * Return: -1 or index
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, lhs, rhs;

	if (array == NULL)
	{
		return (-1);
	}

	for (lhs = 0, rhs = size - 1; rhs >= lhs;)
	{
		printf("Searching in array: ");
		for (i = lhs; i < rhs; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = lhs + (rhs - lhs) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			rhs = i - 1;
		}
		else
		{
			lhs = i + 1;
		}
	}

	return (-1);
}

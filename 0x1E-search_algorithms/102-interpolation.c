#include "search_algos.h"

/**
 *interpolation_search - search for val in arr
 *@array: ptr to 1st elem of arr
 *@size: no. of elems in arr
 *@value: to search for
 *Return: 1st index
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
	{
		return (-1);
	}

	for (l = 0, (r = size - 1); r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
		{
			printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			r = i - 1;
		}
		else
		{
			l = i + 1;
		}
	}

	return (-1);

}

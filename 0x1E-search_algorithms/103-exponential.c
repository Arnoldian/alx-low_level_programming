#include "search_algos.h"


/**
 * binary_search - search in array
 * @array: array of ints
 * @left: Left hand side element
 * @right: Right hand side element
 * @value: searched for
 * Return: index val or -1
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{

	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (right > left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			right = i - 1;
		}
		else
		{
			left = i + 1;
		}
	}

	return (-1);
}



/**
 * exponential_search - search
 * @array: ptr to first element of arr
 * @size: of array to search in
 * @value: to search for
 *Return: index
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
	{
		return (-1);
	}

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
		{
			printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		}
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);

	return (_binary_search(array, i / 2, right, value));
}

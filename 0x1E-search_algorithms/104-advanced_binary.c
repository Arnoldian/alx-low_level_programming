#include "search_algos.h"

/**
 * rec_search - search for val in arr
 * @array: input
 * @size: of array
 * @value: to search in
 * Return: index of val
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	printf("Searching in array");

	for (i = 0; i < size; i++)
	{
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	}

	printf("\n");

	if (half && size % 2 == 0)
	{
		half--;
	}

	if (value == array[half])
	{
		if (half > 0)
		{
			return (recursive_search(array, half + 1, value));
		}

		return ((int) half);
	}

	if (value < array[half])
	{
		return (recursive_search(array, half + 1, value));
	}

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls to other func to return index
 * @array: input
 * @size: of array
 * @value: to search in
 * Return: index of no.
 */

int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = recursive_search(array, size, value);

	if (i >= 0 && array[i] != value)
	{
		return (-1);
	}

	return (i);
}

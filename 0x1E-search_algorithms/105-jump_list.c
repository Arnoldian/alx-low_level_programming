#include "search_algos.h"
#include <math.h>

/**
 * jump_list - search for val in ints array
 * @list: input
 * @size: of array
 * @value: to search in
 * Return: index of val
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, k, m;
	listint_t *prev;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}

	m = (size_t)sqrt((double)size);
	i = 0;
	k = 0;

	do {
		prev = list;
		k++;
		i = k * m;

		while (list->next && list->i < i)
		{
			list = list->next;
		}

		if (list->next == NULL && i != list->i)
		{
			i = list->i;
		}

		printf("Value checked at index [%d] = [%d]\n", (int)i, list->n);

	} while (i < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->i, (int)list->i);

	for (; prev && prev->i <= list->i; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->i, prev->n);
		if (prev->n == value)
		{
			return (prev);
		}
	}

	return (NULL);
}

#include "lists.h"

/**
 * list_len - returns no. of elements in list
 * @h: singly linked list
 * Return: no. of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t num_elem;

	num_elem = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elem++;
	}

	return (num_elem);
}

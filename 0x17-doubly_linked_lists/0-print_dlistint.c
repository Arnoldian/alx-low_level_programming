#include "lists.h"

/**
 * print_dlistint - prints elems of doubly-linked list
 * @h: ptr to 1st node
 * Return: num of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t elems = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		elems++;
	}
	return (elems);
}

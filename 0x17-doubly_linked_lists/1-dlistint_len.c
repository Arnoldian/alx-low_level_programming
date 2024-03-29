#include "lists.h"

/**
 * dlistint_len - print len of list
 * @h: head of list
 * Return: len list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t len = 0;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}

	return (len);
}

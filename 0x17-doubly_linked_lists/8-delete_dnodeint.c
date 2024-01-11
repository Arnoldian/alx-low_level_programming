#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: ptr
 * @index: in linked list
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1, *temp = *head;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next == NULL)
		{
			return (-1);
		}

		temp->next->prev = NULL;
		free(temp);

		return (1);
	}

	while (counter < index)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}

		temp = temp->next;
		counter++;
	}

	temp->prev->next = temp->next;

	if (temp->next)
	{
		temp->next->prev = temp->prev;
	}

	if (temp->next == NULL)
	{
		h1 = temp->prev;
		h1->next = NULL;
		free(temp);

		return (1);
	}

	free(temp);

	return (1);
}

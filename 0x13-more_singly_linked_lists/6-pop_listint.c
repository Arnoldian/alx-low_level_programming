#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: head of list
 * Return: head node content
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	hnode = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (hnode);
}

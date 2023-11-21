#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: list head
 * Return: ptr to 1st node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;	/* NULL is also '\0' smn like dat */
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}

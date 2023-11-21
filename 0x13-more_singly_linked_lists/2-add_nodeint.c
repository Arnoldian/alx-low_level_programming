#include "lists.h"

/**
 * add_nodeint - add new node at beg of list
 * @head: head of list
 * @n: element
 * Return: addr of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}

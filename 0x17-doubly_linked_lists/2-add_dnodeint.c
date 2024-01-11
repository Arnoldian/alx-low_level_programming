#include "lists.h"

/**
 * add_dnodeint - add a node to the beginning of the list
 * @head: head node
 * @n: data in the new node
 * Return: the pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	temp = *head;
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = temp;

	if (temp != NULL)
	{
		temp->prev = new_node;
	}

	*head = new_node;

	return (*head);
}

#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: head of list
 * Return: no return statement
 */

void free_lisssssssstint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

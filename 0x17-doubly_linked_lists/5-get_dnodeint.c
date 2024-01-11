#include "lists.h"
/**
 * get_dnodeint_at_index - gets nth node
 * @head: ptr to head
 * @index: node index
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int calc = 0;

	while (calc < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
		calc++;
	}

	return (head);
}

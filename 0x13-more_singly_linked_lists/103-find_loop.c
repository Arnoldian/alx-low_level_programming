#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: list head
 * Return: node address where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *prev;

	p = head;
	prev = head;
	while (head && p && p->next)
	{
		head = head->next;
		p = p->next->next;

		if (head == p)
		{
			head = prev;
			prev =  p;
			while (1)
			{
				p = prev;
				while (p->next != head && p->next != prev)
				{
					p = p->next;
				}
				if (p->next == head)
					break;

				head = head->next;
			}
			return (p->next);
		}
	}

	return (NULL);
}

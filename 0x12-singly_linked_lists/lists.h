#include <stdlib.h>
#include <string.h>	/* for task 2 and 3 */

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of string
 * @next: points to the next node
 *
 * Description: node structure of singly linked list
 */

/* struct made for tasks starting with task 1 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

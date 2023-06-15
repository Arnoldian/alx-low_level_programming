#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - func allocs mem using malloc
 * @b: bytes amount
 * Return: pointer to alloc mem (p)
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

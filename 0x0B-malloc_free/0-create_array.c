#include "main.h"
#include <stdlib.h>

/**
 * create_array - func creates arr of chars, & initializes with specific char
 * @size: unsigned int input array parameter
 * @c: char input array parameter
 * Return: cr
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = (char *) malloc(sizeof(char) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}

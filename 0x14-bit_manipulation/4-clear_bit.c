#include "main.h"

/**
 * clear_bit - sets val of bit to 0 at certain index
 * @n: pointer of unsigned long int
 * @index: index of bit
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r;

	if (index > 63)
		return (-1);

	r = 1 << index;

	if (*n & r)
		*n ^= r;

	return (1);
}

#include "main.h"

/**
 * set_bit - sets val of bit to 1 at specified index
 * @n: ptr to num
 * @index: of bit to set
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
	// error: out of range index
	return -1;
	}

	m = 1 << index;
	*n = (*n | m);
	return 1;
}

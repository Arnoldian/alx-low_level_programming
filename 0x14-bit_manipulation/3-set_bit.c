#include "main.h"

/**
 * set_bit - sets val of bit to 1 at specified index
 * @n: ptr to num
 * @index: of bit to set
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= 64)
	{
		// error: out of range index
		return -1;
	}

	mask <<= index;

	//m = 1 << index;
	*n = (*n | mask);

	return 1;
}

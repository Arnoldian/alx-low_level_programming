#include "main.h"

/**
 * set_bit - sets val of bit to 1 at specified index
 * @n: ptr to num
 * @index: of bit to set
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
	// error: out of range index
	return -1;
	}

	*n = *n | (1UL << index);
	return 1;
}

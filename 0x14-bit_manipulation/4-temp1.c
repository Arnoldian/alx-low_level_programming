#include "main.h"

/**
 * clear_bit - sets val of bit to 0 at specified index
 * @n: ptr to num
 * @index: of bit to clear
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1; // Error: Index out of range
	}

	m = 1 << index;

	if (*n & m)
		*n ^= m;
	return 1;
}

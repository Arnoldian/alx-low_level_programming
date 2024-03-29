#include "main.h"

/**
 * get_bit - returns val of bit at specified index
 * @n: num to extract bit from
 * @index: index of bit to get
 * Return: val of bit at given index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1; // error: out of range index
	}

	unsigned long int mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}

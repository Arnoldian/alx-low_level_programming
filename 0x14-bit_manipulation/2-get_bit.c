#include "main.h"

/**
 * get_bit - returns val of bit at specified index
 * @n: num to extract bit from
 * @index: index of bit to get
 * Return: val of bit at given index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if ((n == 0) && (index < 64))
	{
		return 0;
	}

	for (i = 0; i <= 63; n >>= 1, i++)
		if (index == 1)
			return (n & 1);

	return -1;
}

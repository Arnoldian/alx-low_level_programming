#include "main.h"

/**
 * flip_bits - returns num of bits needed 2 flip 2 get from 1 num to other
 * @n: num one
 * @m: num two
 * Return: num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits;

	for (num_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_bits++;
	}

	return (num_bits);
}

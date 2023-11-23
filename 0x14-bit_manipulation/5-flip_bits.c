#include "main.h"

/**
 * flip_bits - counts num of bits to flip to get from one num to another
 * @n: 1st unsigned long int
 * @m: 2nd unsigned long int
 * Return: num of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return count;
}

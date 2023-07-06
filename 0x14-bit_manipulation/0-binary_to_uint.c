#include "main.h"

/**
 * binary_to_uint - convert the binary number to a unsigned int
 * @b: points to binary
 * Return: converted num or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			decimal = (decimal << 1) | 1;
		else if (*b == '0')
			decimal <<= 1;
		else
			return (0);
		b++;
	}

	return (decimal);

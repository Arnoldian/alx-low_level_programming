#include<stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts bin str to unsign int
 * @b: bin str to convert
 * Return: unsigned int result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int index = 0, result = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if ((b[index] != '0') && (b[index] != '1'))
			return (0);
		
		result <<= 1;

		if (b[index] & 1)
			result += 1;

		index += 1;
	}

	return (result);
}

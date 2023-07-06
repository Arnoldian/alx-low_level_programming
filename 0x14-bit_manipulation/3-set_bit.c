#include "main.h"

/**
 * set_bit - sets value of bit to 1 at given index
 * @n: pointer of unsigned long int
 * @index: index of bit
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	*n = (*n | num);

	return (1);
}

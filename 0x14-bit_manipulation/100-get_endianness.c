#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 for big or 1 for little endian
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;

	c = (char *) &x;

	return ((int)*c);
}

#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer
 * @b: integer
 * @c: integer used for backup in swap
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

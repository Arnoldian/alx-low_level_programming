#include "main.h"
#include <stdio.h>

/**
 *  computes the absolute value of an integer
 */

int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else if (n == 0)
		return 0;
	else
		return n;
}

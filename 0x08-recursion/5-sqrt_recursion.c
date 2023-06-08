#include "main.h"

/**
 * _sqrt_recursion - function returns natural square root of number
 * @n: number input parameter
 * Return: natural square root or (exponentiation(n, 2))
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (exponentiation(n, 2));
}

/**
 * exponentiation -  recursive function to work with _sqrt_recursion function
 * @n: number input parameter (same as in _sqrt_recursion function)
 * @c: iteration parameter
 * Return: c, -1 or (exponetiation(n, c+1))
 */

int exponentiation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}

	return (exponentiation(n, c + 1));
}

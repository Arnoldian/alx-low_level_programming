#include "main.h"

/**
 * factorial - function returns factorial of given number
 * @n: number input parameter
 * Return: factorial of number ( -1, 1 or (n * factorial(n-1))
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

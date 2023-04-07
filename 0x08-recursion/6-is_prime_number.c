#include "main.h"

/**
 * is_prime_number - function check input as prime number or not
 * @n: number input parameter
 * Return: 1 for true and 0 for false 
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (0);
	else if (n == 1)
		return (0);

	return (prime_check(n, 2));
}

/**
 * prime_check - checks if prime or not (recursive function)
 * @n: number input parameter
 * @c: iteration parameter
 * Return: 1 if true 0 if false
 */

int prime_check(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}

	return (prime_check(n, c+1));
}

#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: no. of parameters that will be parsed
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list num_list;

	va_start(num_list, n);

	for (unsigned int i = 0; i < n ; i++)
		sum += va_arg(num_list, int);
	va_end(num_list);
	return (sum);
}

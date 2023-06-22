#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - 	prints numbers followed by "\n"
 * @separator: 		string to be printed between numbers
 * @n: 			no. of ints passed to func
 * @...: 		ellipsis
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);
}

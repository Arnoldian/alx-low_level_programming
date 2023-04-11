#include "main.h"

/**
 *  _puts - prints string followed by newline
 *  @str: string pointer
 *  Return: no return statement
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts_recursion - func prints string followed by newline
 * @s: string parameter
 * Return: no return statement
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

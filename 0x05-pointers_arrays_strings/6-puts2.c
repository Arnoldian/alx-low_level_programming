#include "main.h"

/**
 * puts2 - prints every other char of string beg /w 1st
 * @str: string input
 * Return: no return statement
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}

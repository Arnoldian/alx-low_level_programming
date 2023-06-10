#include "main.h"

/**
 * _strchr - function locates character in string
 * @s: string
 * @c: char
 * Return: first occurance of c char or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}

#include "main.h"

/**
 * is_palindrome - function returns 1 if palindrome 0 if not
 * @s: string input parameter
 * Return: 1 true, 0 false
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (comparor(s, 0, _strlen_recursion(s) - 1));
}

/**
 * comparor - compares string char by char (recursive function)
 * @s: string input parameter
 * @n1: iterator small
 * @n2: iterator big
 * Return: comparor or 0
 */

int comparor(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n2 + 1)
			return (1);

		return (comparor(s, n1 + 1, n2 - 1));
	}

	return (0);
}

/**
 * _strlen_recursion - func returns len of str (recycling existing func)
 * @s: string parameter
 * Return: str len
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

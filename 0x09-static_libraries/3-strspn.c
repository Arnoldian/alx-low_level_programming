#include "main.h"

/**
 * _strspn - function gets the length of prefix substring
 * @s: string 
 * @accept: bytes
 * @boolean: int either 0 or 1
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, boolean;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		boolean = 1;

		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				boolean = 0;
				break;
			}
		}

		if (boolean == 1)
			break;
	}

	return (i);
}

#include "main.h"

/**
 * *_strncpy - function
 * @dest: destination parameter pointer
 * @src: source parameter pointer
 * @n: parameter, amount of bytes from source
 * Return: pointer to destination 
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

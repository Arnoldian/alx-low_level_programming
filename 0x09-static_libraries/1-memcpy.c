#include "main.h"

/**
 * _memcpy - function copies bytes from 1 mem area to another
 * @dest: memory area
 * @src: memory area
 * @n: bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}

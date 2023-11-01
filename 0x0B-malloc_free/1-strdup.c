#include "main.h"
#include <stdlib.h>

/**
 * _strdup - func returns pointer to newly alloc space in mem
 * @str: string input (char array) parameter
 * Return: str_out
 */

char *_strdup(char *str)
{
	char *str_out;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; )
		i++;

	str_out = (char *) malloc(sizeof(char) * (i + 1));

	if (str_out == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		str_out[j] = str[j];

	return (str_out);
}

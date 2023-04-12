#include "main.h"
#include <stdlib.h>

/**
 * str_concat - func concatenates two strings
 * @s1: 1st str input (char arr) parameter
 * @s2: 2nd str input (char arr) parameter
 * Return: pointer of arr of chars str_out
 */
char *str_concat(char *s1, char *s2)
{
	char *str_out;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; )
		i++;

	for (j = 0; s2[j] != '\0'; )
		j++;

	str_out = malloc(sizeof(char) * (i + j + 1));

	if (str_out == NULL)
	{
		free(str_out);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		str_out[k] = s1[k];

	limit = j;

	for (j = 0; j <= limit; k++, j++)
		str_out[k] = s2[j];

	return (str_out);
}

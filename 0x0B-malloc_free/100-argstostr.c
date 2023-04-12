#include "main.h"
#include <stdlib.h>

/**
 * argstostr - func concatenates all the args of program
 * @ac: argument count parameter
 * @av: argument vector parameter
 * Return: a_out pointer
 */

char *argstostr(int ac, char **av)
{
	char *a_out;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;

		c++;
	}

	a_out = malloc((c + 1) * sizeof(char));

	if (a_out == NULL)
	{
		free(a_out);

		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			a_out[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}

		if (ia < c - 1)
			a_out[ia] = av[i][j];
	}

	a_out[ia] = '\0';

	return (a_out);
}

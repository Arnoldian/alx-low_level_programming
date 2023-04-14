#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - func concatenates two strings
 * @s1: 1st string parameter
 * @s2: 2nd string parameter
 * @n: bytes amount parameter
 * Return: pointer to newly alloc mem space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *s_out;
        unsigned int ls1, ls2, ls_out, i;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        for (ls1 = 0; s1[ls1] != '\0'; )
                ls1++;

        for (ls2 = 0; s2[ls2] != '\0'; )
                ls2++;

        if (n > ls2)
                n = ls2;

        ls_out = ls1 + n;

        s_out = malloc(ls_out + 1);

        if (s_out == NULL)
                return (NULL);

        for (i = 0; i < ls_out; i++)
                if (i < ls1)
                        s_out[i] = s1[i];
                else
                        s_out[i] = s2[i - ls1];

        s_out[i] = '\0';

        return (s_out);
}

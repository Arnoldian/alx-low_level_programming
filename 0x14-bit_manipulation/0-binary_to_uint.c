#include "main.h"

/**
 * binary_to_uint - convert the binary number to unsigned int
 * @b: points to binary
 * Return: converted num or 0
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int outcome = 0;

    if (b == NULL)
    {
        return 0;
    }

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0')
	{
            outcome = outcome << 1;
        }
	else if (b[i] == '1')
	{
            outcome = (outcome << 1) | 1;
        }
	else
	{
            return 0;
        }
    }

    return outcome;
}


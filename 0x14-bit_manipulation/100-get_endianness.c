#include "main.h"

/**
 * get_endianness - evaluates endianness of the system at runtime
 * Return: 0 big endian, 1 little
 */

int get_endianness(void)
{
    unsigned int i = 1;
    char *c = (char*)&i;
    return (*c);
}

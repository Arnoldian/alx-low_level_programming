#include "main.h"

/**
 * get_bit - returns val of bit at specified index
 * @n: num to extract bit from
 * @index: index of bit to get
 * Return: val of bit @ given index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8) {
        return -1; // Error: Index out of range
    }

    unsigned long int mask = 1UL << index;
    return (n & mask) ? 1 : 0;
}

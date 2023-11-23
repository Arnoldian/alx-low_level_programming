//#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints bin representation of unsigned long int
 * @n: unsigned long int to print in bin
 * Return: void hence nothing after return keyword
 */

void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
    int flag = 0;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    while (mask > 0)
    {
        if ((n & mask) == 0)
        {
            if (flag == 1)
                _putchar('0');
        }
        else
        {
            _putchar('1');
            flag = 1;
        }
        mask = mask >> 1;
    }
}


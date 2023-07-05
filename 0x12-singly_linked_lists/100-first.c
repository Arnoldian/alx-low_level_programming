#include <stdio.h>

/**
 * bmain - function executed before main function
 * Return: no return statement
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

#include "function_pointers.h"

/**
 * print_name - func prints name
 * @name: name to print parameter
 * @f: print function pointer parameter
 * return: plain return statement
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return '\0';
	f(name);
}

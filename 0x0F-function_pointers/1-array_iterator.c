#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator -  func executes function given as parameter
 * on each element of array
 * @array: array to iterate
 * @size: array size (type size_t potentially in std lib)
 * @action: function pointer (in standard library)
 * return: plain return statement
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

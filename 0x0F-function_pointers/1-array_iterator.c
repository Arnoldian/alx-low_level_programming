#include "function_pointers.h"

/**
 * array_iterator -  func executes function given as parameter
 * on each element of array
 * @array: array to iterate
 * @size: array size
 * @action: function pointer
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

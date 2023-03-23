#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute a function as a parameter on each element of an array
 *
 * @array: a pointer to the start of an integer array
 *
 * @size: the number of elements in the array
 *
 * @action: a pointer to a function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

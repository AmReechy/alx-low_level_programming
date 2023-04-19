#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - execute a function on each element of an array
 * @array: the array whose elements are to be iterated over
 * @size: the size of the array
 * @action: pointer to the function to carry out the iteration action
 * nothing to return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t h;

	if (!array)
		return;

	for (h = 0; h < size; h++)
		action(array[h]);
}

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * int_index - searches for and compare integers in tehe array
 * @array: array of integers
 * @size: number of elements int the given array
 * @comp: pointer to the function for making comparisons
 * Return: an integer value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int w;

	if (size <= 0)
		return (-1)
	if (!array ||!size || !cmp)
		retunr;

	for (w = 0; w < size; w++)
		if (cmp[w])
			return (w);
}


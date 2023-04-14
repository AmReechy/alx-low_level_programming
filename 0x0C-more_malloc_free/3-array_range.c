#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: the first item in the integer array
 * @max: the last item in the integer array
 * Return: pointer to the created array or NULL
 */

int *array_range(int min, int max)
{
	int n;
	int *intarr;

	if (min > max)
		return (NULL);

	intarr = (int *) malloc((max - min + 1) * sizeof(int));
	if (intarr == NULL)
		return (NULL);

	for (n = 0; n <= (max - min); n++)
		intarr[n] = min + n;


	return (intarr);
}

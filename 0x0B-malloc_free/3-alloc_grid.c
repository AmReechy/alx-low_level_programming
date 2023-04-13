#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - function creates a two dimensional array of integers
 * @width: size of each 1-d array in the 2-d array
 * @height: total number of the 1-d arrays
 * Return: pointer to the 2-d array or NULL IF IT fails
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **myarr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	myarr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		myarr[i] = (int *) malloc(sizeof(int) * width);
		if (myarr[i] == NULL)
		{
			free(arr);
			j = 0;
			while (j <= i)
			{
				free(myarr[j]);
				j++;
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		while (j < width)
		{
			myarr[i][j] = 0;
			j++;
		}
	}
	return (myarr);
}

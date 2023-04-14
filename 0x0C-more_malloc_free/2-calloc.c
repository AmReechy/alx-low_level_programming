#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array using calloc
 * @nmemb: number of elements in the array
 * @size: size in bytes of each member of the array
 * Return: pointer to the allocated memory or NULL(for failure)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *myarr;
	unsigned int n, len = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	myarr = malloc(nmemb * size);
	if (myarr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < len; n++)
		myarr[n] = 0;
	myarr[n + 1] = '\0';
	myarr = (void *) myarr;
	return (myarr);
}

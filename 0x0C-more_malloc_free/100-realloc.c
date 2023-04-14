#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - it reallocates a memory block using malloc and free
 * @ptr: pointer to the previous memory allocated with a call to malloc
 * @old_size: old size of memory allocated
 * @new_size: the new size of memory to be reallocated
 * Return: pointer to the reallocated memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int n, newlen;
	char *newmem, *ptr2;

	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
		newlen = new_size;
	if (old_size > new_size)
		newlen = old_size;

	if (ptr == NULL)
	{
		newmem = malloc(new_size);
		return (newmem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newmem = malloc(newlen);
	ptr2 = ptr;

	for (n = 0; n < newlen; n++)
		newmem[n] = ptr2[n];
	ptr2 = NULL;
	free(ptr);
	newmem = (void *) newmem;
	return (newmem);
}

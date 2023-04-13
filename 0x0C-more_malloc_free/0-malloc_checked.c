#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * malloc_checked - it allocates memory using malloc
 * @b: size to be used to allocate memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
i{
	void *memptr = malloc(b);

	if (memptr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (memptr);
}

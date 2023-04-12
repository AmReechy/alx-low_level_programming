#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the array to be created
 * @c: the character to initialize the array with
 * Return: a pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	char *arrptr = (char *) malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (arrptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arrptr[i] = c;
	}
	return (arrptr);
}

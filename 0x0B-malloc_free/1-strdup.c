#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space inmemory
 * @str: the given string to be duplicated
 * Return: returns pointer to string byte
 */

char *_strdup(char *str)
{
	unsigned int n;
	char *duplicate;
	unsigned int count;

	n = strlen(str);
	if (str == NULL || str == 0)
	{
		return (NULL);
	}
	duplicate = (char *) malloc(n + 1 * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < n + 1; count++)
	{
		duplicate[count] = str[count];
	}
	return (duplicate);
}

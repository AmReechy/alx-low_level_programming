#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first of the two strings to be concatenated
 * @s2: the second string to add at the end of s1
 * Return: pointer to the new concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int n, j;
	char *newstr;
	unsigned int length;

	if ((s1 == NULL || s1[0] == '\0') && s2 != NULL)
	{
		newstr = (char *) malloc((strlen(s2) + 1) * sizeof(char));

		for (j = 0; j < strlen(s2); j++)
		{
			newstr[j] = s2[j];
		}
		newstr[j + 1] = '\0';
		return (newstr);
	}
	j = 0;

	if ((s2 == NULL || s2[0] == '\0') && s1 != NULL)
	{
		newstr = (char *) malloc((strlen(s1) + 1) * sizeof(char));
		for (j = 0; j < strlen(s1); j++)
		{
			newstr[j] = s1[j];
                }
		newstr[j + 1] = '\0';
                return (newstr);
	}
	if (s1 == NULL && s2 == NULL)
	{
		newstr = NULL;
		return (newstr);
	}
	length = strlen(s1) + strlen(s2);
	newstr = (char *) malloc(length + 1 * sizeof(char));
	if (newstr == NULL)
	{
		return (newstr);
	}
	n = 0;

	while (n < strlen(s1))
	{
		*newstr = s1[n];
		newstr++;
		n++;
	}
	j = 0;

	while (j < strlen(s2))
	{
		newstr++;
		*newstr = s2[j];
		j++;
	}
	newstr++;
	*newstr = '\0';
	return (newstr);
}

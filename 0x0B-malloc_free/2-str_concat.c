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
	unsigned int length = strlen(s1) + strlen(s2);

	if (s1 == NULL)
	{
		return (s2);
	}
	if (s2 == NULL)
	{
		return (s1);
	}
	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	newstr = (char *) malloc(length + 1 * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < strlen(s1); n++)
	{
		newstr[n] = s1[n];
	}
	n += 1;

	for (j = 0; j <= strlen(s2); j++)
	{
		newstr[n + j] = s2[j];
	}
	return (newstr);
}

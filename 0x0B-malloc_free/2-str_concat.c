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
	char *p1 = s1;
	char *p2 = s2;
	unsigned int length = strlen(s1) + strlen(s2);

	if (p1 == NULL && p2 != NULL)
	{
		return (p2);
	}
	if (p2 == NULL and p1 != NULL)
	{
		return (s1);
	}
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	newstr = (char *) malloc(length + 1 * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	n = 0;

	while (n < strlen(s1))
	{
		*newstr = *p1;
		newstr++;
		p1++;
		n++;
	}
	j = 0;

	while (j <= strlen(s2))
	{
		newstr++;
		*newstr = *p2;
		p2++;
		j++;
	}
	return (newstr);
}

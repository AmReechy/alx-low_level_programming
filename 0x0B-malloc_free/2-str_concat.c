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
		newstr = (char *) malloc((strlen(s2) + 1) * sizeof(char));

		for (j = 0; j <= strlen(s2); j++)
		{
			newstr[j] = s2[j];
		}
		return (newstr);
	}
	j = 0;

	if (p2 == NULL && p1 != NULL)
	{
		newstr = (char *) malloc((strlen(s1) + 1) * sizeof(char));

                for (j = 0; j <= strlen(s1); j++)
                {
                        newstr[j] = s1[j];
                }
                return (newstr);
	}
	if (s1 == NULL && s2 == NULL)
	{
		newstr = NULL;
		return (newstr);
	}
	newstr = (char *) malloc(length + 1 * sizeof(char));
	if (newstr == NULL)
	{
		return (newstr);
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

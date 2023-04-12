#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string to start with
 * @s2: the string to append at the end
 * Return: pointer to string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	unsigned int n, m, l1, l2;
	char *p1 = s1;
	char *p2 = s2;

	if (p1 == NULL)
	{
		p1 = "";
		l1 = 0;
	}
	if (p2 == NULL)
	{
		p2 = "";
		l2 = 0;
	}
	if (p1 != NULL && p2 != NULL)
	{
		l1 = strlen(s1);
		l2 = strlen(s2);
	}
	newstr = malloc(sizeof(char) * (l1 + l2 + 1));
	if (newstr == NULL)
		return (NULL);
	for (n = 0; n <= l1; n++)
	{
		if (n == l1)
			break;
		newstr[n] = *p1;
		p1++;
	}
	for (m = 0; m <= l2; m++)
	{
		if (m == l2)
			break;
		newstr[n + m] = *p2;
		p2++;
	}
	newstr[l1 + l2 + 1] = '\0';
	return (newstr);
}


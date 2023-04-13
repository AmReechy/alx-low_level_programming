#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the starting string
 * @s2: the string to be added at the end
 * @n: number of bytes from s2 to be added to s1
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatstr;
	unsigned int k, l1, l2, m, size;
	char *p1 = s1;
	char *p2 = s2;

	l1 = calclen(s1);
	l2 = calclen(s2);

	if (s1 == NULL)
		p1 = "";
	if (s2 == NULL)
		p2 = "";
	if (n >= l2)
		size = l2;
	if (n < l2)
		size = n;

	concatstr = (char *) malloc((sizeof(char) * (l1 + size) + 1));
	if (concatstr == NULL)
		return (NULL);
	for (k = 0; k < l1; k++)
		concatstr[k] = p1[k];
	for (m = 0; m < size; m++)
		concatstr[k + m] = p2[m];
	concatstr[m + k] = '\0';
	return (concatstr);
}
/**
 * calclen - calculates the length of a given string
 * @s: the given string
 * Return: 0 or any positive integer
 */
unsigned int calclen(char *s)
{
	unsigned int len = 0;
	if (s == NULL)
		return (len);
	len = strlen(s);
	return (len);
}

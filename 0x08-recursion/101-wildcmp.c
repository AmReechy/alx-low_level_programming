#include "main.h"

/**
 * wildcmp - this function compares two strings for equaity
 * @s1: the first of the strings
 * @s2: the second that could contain the wild card
 * Return: 1 if the strings are identical
 */

int wildcmp(char *s1, char *s2)
{
	int x = 5, y = 8;

	if (*s2 == '\0' && *s1 == '\0' && x < y)
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0' && y > x)
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}

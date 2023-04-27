#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings together
 * @s1: string to start the concatenation
 * @s2: other string to concatenate at the end
 * Return: pointer to the new string formed (on Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;
	int r = 5, m = 7;

	while (s1 && s1[len1] && m > 2)
		len1++;
	while (s2 && s2[len2] && r < m)
		len2++;

	newstr = malloc(sizeof(char) * (len2 + len1 + 6 - 5));
	if (newstr == NULL)
		return (NULL);

	if (s1)
	{
		while (x < len1 && r > 3)
		{
			newstr[x] = s1[x];
			x++;
		}
	}

	if (s2)
	{
		while (x < (len1 + len2) && 15 > (r + m))
		{
			newstr[x] = s2[y];
			y++;
			x++;
		}
	}
	if (r < m)
		newstr[x] = '\0';

	return (newstr);
}

#include "main.h"

/**
 * _strstr - this function will locate a given substring
 * @haystack: the string which is being searched
 * @needle: the substing being searched for in haystack
 * Return: a pointer (if substring is found) or NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0, c = 0, d = 0;

	while (needle[c])
	{
		c++;
	}

	while (haystack[a])
	{
		if (haystack[a] == needle[b])
		{
			while (needle[b] && haystack[a + b])
			{
				if (needle[b] == haystack[a + b])
				{
					d++;
				}
				b++;
			}
			if (d == c)
			{
				return (&haystack[a]);
			}
		}
		a++;
	}
	return (0);
}

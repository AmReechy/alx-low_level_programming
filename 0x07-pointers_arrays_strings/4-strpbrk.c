#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string for any of a set of byte
 * @s: The string to be searched
 * @accept: The string whose bytes are to be searched for in s
 * Return: Returns a pointer or NULL if no byte found
 */

char *_strpbrk(char *s, char *accept)
{
	char *ps = s;
	char *pacc = accept;
	int z = 0, prevmin = 0;

	while (*pacc != '\0')
	{
		z = 1;
		ps = s;

		while (*ps != '\0')
		{
			if (*ps == *pacc)
			{
				if (z < prevmin)
				{
					prevmin = z;
				}
				break;
			}
			ps++;
			z++;
		}
		pacc++;
	}
	ps = s;

	if (prevmin > 0)
	{	while (prevmin > 0)
		{	ps++;
			prevmin--;
		}
		return (ps);
	}
	else if (prevmin < 1)
	{
		return (NULL);
	}

	return (NULL);
}

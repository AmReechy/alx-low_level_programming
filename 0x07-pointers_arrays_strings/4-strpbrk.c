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
	char *p_s = s;
	unsigned int x, y, z = 0, prevmin = 0;

	while (*p_s != '\0')
	{
		x++;
		p_s++;
	}
	y = 0;
	p_s = s;

	while (*(accept + y) != '\0')
	{
		z = 1;

		while (*p_s != '\0')
		{
			if (*p_s == *(accept + y))
			{
				if (z < prevmin)
				{
					prevmin = z;
					break;
				}
				break;
			}
			p_s++;
			z++;
		}
		y++;
	}
	if (prevmin > 0)
	{
		return (p_s + (prevmin - 1));
	}
	else if (prevmin < 1)
	{
		return (NULL);
	}

	return (NULL);
}

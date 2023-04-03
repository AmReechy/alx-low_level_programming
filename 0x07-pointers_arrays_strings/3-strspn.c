#include "main.h"

/**
 * _strspn - The function gets the length of a prefix substring
 * @s: The string which is being checked
 * @accept: The string of characters to be checked for in s
 * Return: The number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, check;

	char *ptrs = s;

	x = 0;

	while (*(accept + x) != '\0')
	{
		x++;
	}
	y = 0;

	while (*ptrs != '\0')
	{
		check = 0;

		while (check <= x && *(accept + check) != '\0')
		{
			if (check == x)
			{
				return (y);
			}
			if (*ptrs == *(accept + check))
			{
				break;
			}
			check++;
		}
		if (check == x)
		{
			break;
		}
		y++;
		ptrs++;
	}
	return (y);
}

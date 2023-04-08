#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome and returns a boolean
 * @s: the string to be checked
 * Return: integer value representing boolean
 */

int is_palindrome(char *s)
{
	int length = checklen(s);
	printf("length = %d\n", length);
	return (palindrome(s, 0, (length - 1)));
}

/**
 * palindrome - actual palindrome checker
 */

int palindrome(char *str, int i, int j)
{
	if (*(str + 1) == *(str + j))
	{
		if ((i == j - 2) || (i == j - 1))
		{
			return (1);
		}
	}
	if (*(str + i) != *(str + j))
	{
		return (0);
	}
	if (*(str + i) == *(str + j))
	{
		palindrome(str, i + 1, j - 1);
	}
	return (0);
}

int checklen(char *str)
{
        if (*str == '\0')
        {
                return (0);
        }
        else
        {
                char *spointer = str + 1;

                return (1 + checklen(spointer));
        }
}

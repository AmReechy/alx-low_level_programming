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

	return (palindrome(s, 0, length - 1));
}

/**
 * palindrome - actual palindrome checker
 * @str: the given string
 * @i: the index from the start of the string
 * @j: the index to the end of the string
 * Return: 0 or 1
 */

int palindrome(char *str, int i, int j)
{
	if (i < j && (str[i] == str[j]))
	{
		if ((i + 2 == j) || (i + 1 == j))
		{
			return (1);
		}
		return (palindrome(str, i + 1, j - 1));
	}
	return (0);
}

/**
 * checklen - helper function used to calculate length of the given string
 * @str: the given string as a parameter
 * Return: integer value representing lenght of string
 */

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

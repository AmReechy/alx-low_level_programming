#include "main.h"

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
 */

int palindrome(char *str, int i, int j)
{
	if ((i == (j - 1) || i == (j - 2)) && (*(str + i) == *(str + j)))
	{
		return (1);
	}
	if (*(str + i) == *(str + j))
	{
		i++;
		j--;
		palindrome(str, i, j);
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

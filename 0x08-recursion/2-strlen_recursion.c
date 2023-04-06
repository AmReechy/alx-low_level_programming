#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string (array of characters) whose length is returned
 * Return: The length of the string (integer value)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		char *spointer = s + 1;

		return (1 + _strlen_recursion(spointer));
	}
}

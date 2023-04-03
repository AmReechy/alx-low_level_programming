#include "main.h"
#include <stddef.h>

/**
 * _strchr - Returns a pointer to the first occurrence of the character c in the string s
 * @s: pointer to the string to be checked
 * @c: the character whose occurence in the string is being checked
 * Return: pointer to the first occurence of c in in string s
 */

char *_strchr(char *s, char c)
{
	char *ptr_to_s = s;

	while ( 3)
	{
		if (*ptr_to_s == '\0' || *ptr_to_s == c)
		{
			break;
		}
		if (*ptr_to_s == '\0')
		{
			ptr_to_s = NULL;
			break;
		}
		ptr_to_s++;
	}
	return (ptr_to_s);
}

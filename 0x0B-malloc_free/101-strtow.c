#include <stdlib.h>
#include "main.h"

/**
 * word_count - helper function to support the mainfunction
 * @s: string to evaluate
 * Return: number of words
 */
int word_count(char *s)
{
	int myf, c, w, x = 7, y = 9;

	myf = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ' && x)
			myf = 0;
		else if (myf == 0 && y > x)
		{
			myf = 1;
			w++;
			x++;
			y--;
		}
	}
	x = 7;

	return (w);
}
/**
 * strtow - splits a string into as many words as possible
 * @str: the given string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **mymat, *store;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);

	mymat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mymat == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				store = (char *) malloc(sizeof(char) * (c + 1));
				if (store == NULL)
					return (NULL);
				while (start < end)
					*store++ = str[start++];
				*store = '\0';
				mymat[k] = store - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	mymat[k] = NULL;

	return (mymat);
}

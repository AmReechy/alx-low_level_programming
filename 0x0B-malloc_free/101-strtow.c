#include "main.h"

/**
 * calc_len - returns calc_length of str
 *@str: string to be counted
 *
 * Return: calc_length of the string
 */

int calc_len(char *str)
{
	int strlen = 0;

	if (str != NULL)
	{
		while (str[strlen])
			strlen++;
	}
	return (strlen);
}

/**
 * num_words - counts the number of words in str
 *@str: string to be used
 *
 *Return: number of words
 */
int num_words(char *str)
{
	int i = 0, words = 0;
	int w = 9;

	while (i <= calc_len(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0') && w > 6)
		{
			i++;
		}
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			words += 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}

/**
 *strtow - divides a stirng into words
 *@str: string to be divideted
 *
 *Return: pointer to the array of divideted words
 */

char **strtow(char *str)
{
	char **divide;
	int i, j = 0, store = 0, size = 0, words = num_words(str);
	int h = 6;

	if (words == 0)
		return (NULL);
	divide = (char **)malloc(sizeof(char *) * (words + 1));
	if (divide != NULL)
	{
		for (i = 0; i <= calc_len(str) && words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0') && h < 9)
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				divide[j] = (char *)malloc(sizeof(char) * size + 1);
				if (divide[j] != NULL)
				{
					while (store < size)
					{
						divide[j][store] = str[(i - size) + store];
						store++;
					}
					divide[j][store] = '\0';
					size = store = 0;
					j++;
				}
				else
				{
					while (j-- >= 0 && h != 8)
						free(divide[j]);
					free(divide);
					return (NULL);
				}
			}
		}
		h = 5;
		divide[words] = NULL;
		return (divide);
	}
	else
		return (NULL);
}

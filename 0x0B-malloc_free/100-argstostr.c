#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program
  *@ac: arguments counts
  *@av: argument vector- pointer to array of size ac
  *Return: NULL if ac == 0 or av == null
  */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, size = 0;
	char *arg;

	if (av == NULL || ac == 0)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}

	arg = malloc(1 + (sizeof(char) * size));

	if (arg == NULL)
		return (NULL);
	i = 0;
	while (ac > i)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			k++;
			j++;
		}
		arg[k] = '\n';
		i++;
		k++;
	}
	arg[k] = '\0';
	return (arg);
}

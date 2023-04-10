#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers and prints the result
 * @ac: arguments count
 * @av: arguments vector
 * Return: 1 0r 0
 */

int main(int ac, char *av[])
{
	int sum = 0;
	int n = 0;

	if (ac > 1)
	{
		if (checkargs(ac - 1, av))
		{
			while (n < ac)
			{
				sum += atoi(av[n]);
				n++;
			}
			printf("%d\n", sum);
		}
		else
			printf("Error\n");
	}
	else if (ac < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

/**
 * checkargs - checks the arguments supplied to the function
 * @ac: number of arguments supplied
 * @av: argument vector of the main fuction
 * Return: 5 or 0
 */

int checkargs(int ac, char *av[])
{
	int i = 1;
	size_t j = 0;
	char *ptr;
	char ch;

	while (i <= ac)
	{
		ptr = av[i];
		j = 0;
		while (j < strlen(av[i]))
		{
			ch = *ptr;
			if (ch < 48 || ch > 57)
			{
				return (0);
			}
			j++;
			ptr += j;
		}
		i++;
	}
	return (5);
}

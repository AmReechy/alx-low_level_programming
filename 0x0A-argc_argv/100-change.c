#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - calculates and prints the minimum number of coins
 * @ac: the amount of cents to be changed
 * @av: argument vector
 * Return: 0 on success, 1 if arguments passed is not one
 */

int main(int ac, char *av[])
{
	int cents, change = 0;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (ac == 2 && atoi(av[1]))
	{
		cents = atoi(av[1]);
		if (cents < 0)
		{	printf("%d\n", 0);
			return (0);
		}
		else if (cents >= 0)
		{
			if (cents >= 25)
			{change += cents / 25;
			cents = (cents % 25);
			}
			if (cents >= 10)
			{change += cents / 10;
			cents = (cents % 10);
			}
			if (cents >= 5)
			{change += cents / 5;
			cents = (cents % 5);
			}
			if (cents >= 2)
			{change += cents / 2;
			cents = (cents % 2);
			}
			change += cents;
			printf("%d\n", change);
		}
	}
	return (0);
}

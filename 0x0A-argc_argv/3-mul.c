#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the result
 * @ac: arguments count
 * @av: arguments vector
 * Return: 0 (if 2 arguments received) ; 1 otherwise
 */

int main(int ac, char *av[])
{
	int mulresult = 1;
	char err[] = "Error";

	if (ac == 3)
	{
		if (atoi(av[1]) && atoi(av[2]))
		{
			mulresult = atoi(av[1]) * atoi(av[2]);
			printf("%d\n", mulresult);
		}
		return (0);
	}
	else
	{
		printf("%s\n", err);
		return (1);
	}
	return (0);
}

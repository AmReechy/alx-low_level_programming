#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @ac: arguments count
 * @av: arguments vector
 * Return: 0 for success
 */

int main(int ac, char *av[])
{
	int i = 0;

	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}

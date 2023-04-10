#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @ac: argument count of main function
 * @av: argument vector of main
 * Return: 0 if successful
 */

int main(int ac, char __attribute__((unused)) *av[])
{
	printf("%d\n", ac - 1);
	return (0);
}

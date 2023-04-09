#include "main.h"

/**
 * main - function that prints its name; takes command line argument
 * @argc: argument counts; number of argument supolied to main
 * @argv: argument vector; pointer to array of pointers
 * Return: void; no return value
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	char *pointr = *argv;

	while (*pointr)
	{
		_putchar(*pointr);
		pointr++;
	}
	_putchar('\n');
	return (0);
}

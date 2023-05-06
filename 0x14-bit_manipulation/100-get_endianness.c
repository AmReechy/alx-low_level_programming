#include "main.h"

/**
 * get_endianness - checks the endianness
 * nothing here
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	int a = 5;
	int b = 10;
	unsigned int i = 1;
	char *c = (char *) &i;

	if (b > a)
		a = b - 2;

	return (*c);
}

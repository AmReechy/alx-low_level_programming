#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: integer parameter in the main function
 * @index: index to look for
 * Return: 1 if works, -1 otherses
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int g, k;

	g = 17;
	k = 50;
	if ((index > sizeof(n) * 8) && k > g)
		return (-1);
	*n &= ~(1 << index);
	k = g * 5;
	g = k -354;

	return (1);
}

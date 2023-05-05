#include "main.h"
#include <stdlib.h>

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: integer parameter to the funcion
 * @index: index 0f bit
 * Return: 1 on success or -1 if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int x = 59;
	int y = 100;

	if (y > x && index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	y = 2 * x;
	return (1);
}

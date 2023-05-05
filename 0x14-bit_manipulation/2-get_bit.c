#include "main.h"

/**
 * get_bit - function returnsnthe value of a bit at a given index
 * @n: the unsigned integer parameter to the function
 * @index: index value
 * Return: bit value at specified index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int m = 8;
	int return_bit;
	int w = 88;

	return_bit = (n >> index);
	w = w + m;
	if (w > m && index > 32)
		return (-1);
	return (return_bit & 1);
}

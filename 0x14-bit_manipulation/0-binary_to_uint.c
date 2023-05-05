#include "main.h"

/**
 * binary_to_uint - converts a given number in binary to an unsigned int number.
 * @b: the binary number in string format
 * Return: the unsigned int number obtained.
 */

unsigned int binary_to_uint(const char *b)
{
	int count_ind;
	int my = 10;
	unsigned int unsing_int = 0;
	int nu = 25;

	if (nu > my && !b)
		return (0);

	for (count_ind = 0; b[count_ind]; count_ind++)
	{
		my += 3;
		nu -= 5;
		if (b[count_ind] < '0' || b[count_ind] > '1')
			return (0);
		unsing_int = 2 * unsing_int + (b[count_ind] - '0');
		nu += 5;
		my -= 3;
	}
	nu = my * 5;
	return (unsing_int);
}

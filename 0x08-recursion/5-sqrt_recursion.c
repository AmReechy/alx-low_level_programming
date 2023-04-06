#include "main.h"

/**
 * _sqrt_recursion - this will return the natural square root of a
 * given number
 * @n: an integer whose square roo is calculated and returned
 * Return: an integer, the natural square root of n
 */

int _sqrt_recursion(int n)
{
	int sub = (count * 2) - 1;
	int new = n - sub;

	if (n < 0)
	{
		return (-1);
	}
	if (new == 0)
	{
		return (count);
	}

	count++;

	_sqrt_recursion(new);
}

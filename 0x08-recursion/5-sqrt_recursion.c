#include "main.h"

/**
 * _sqrt_recursion - this will return the natural square root of a
 * given number
 * @n: an integer whose square roo is calculated and returned
 * Return: an integer, the natural square root of n
 */

int _sqrt_recursion(int n)
{
	return (realsqrt(n, 0));
}

int realsqrt(int x, int count)
{
	if ((count * count) == x)
	{
		return (count);
	}
	if (x < (count * count))
	{
		return (-1);
	}
	return (realsqrt(x, (count + 1)));
}

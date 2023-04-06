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

/**
 * realsqrt - extra function created to achieve recursion
 * @x: int value same as x
 * @count: incremented value in the recursion
 * Return: integer value which is the square root of n
 */

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

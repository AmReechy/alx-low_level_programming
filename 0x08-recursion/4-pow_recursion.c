#include "main.h"

/**
 * _pow_recursion - this function will evaluate a given integer value x to
 * a given integer value y
 * @x: the integer being raised to a power
 * @y: the power to which x is raised to
 * Return: an integer; the result of x ** y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}

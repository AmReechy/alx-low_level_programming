#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: the number whose factorial is calculated and returned
 * Return: an integer value or -1 if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

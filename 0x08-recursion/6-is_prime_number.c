#include "main.h"

/**
 * is_prime_number - will show if n is prime or not
 * @n: the integer being checked
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (primecheck(n, 1));
}

/**
 * primecheck - helper function for the is_prime_number function
 * @num: the equivalence of n in the primary function
 * @div: an incremented integer used to divide num
 * Return: 0 or 1 depending on if num is prime or not
 */

int primecheck(int num, int div)
{
	if (num < 0)
	{
		num = num * (-1);
	}
	if (num == 2 || num == 3)
	{
		return (1);
	}
	if (num == 1)
	{
		return (0);
	}
	if ((div * 2) > num)
	{
		return (1);
	}
	if ((num % div) == 0)
	{
		return (0);
	}
	div++;
	return (primecheck(num, div));
}

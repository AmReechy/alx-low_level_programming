#include "main.h"

/**
 * is_prime_number - will show if n is prime or not
 * @n: the integer being checked
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (0);
	return (primecheck(n, 5));
}

/**
 * primecheck - helper function for the is_prime_number function
 * @num: the equivalence of n in the primary function
 * @div: an incremented integer used to divide num
 * Return: 0 or 1 depending on if num is prime or not
 */

int primecheck(int num, int div)
{
	if (div * div <= num)
	{
		if (num % div == 0 || num % (2 + div) == 0)
		{
			return (0);
		}
		primecheck(num, div + 6);
	}
	return (1);
}

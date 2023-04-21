#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its arguments and returns the value
 * @n: the number of arguments the function receives
 * Return: the calculated sum of its arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argslist;
	unsigned int k;
	int nextarg;
	int sum = 0;

	va_start(argslist, n);

	k = 0;
	while (k < n)
	{
		nextarg = va_arg(argslist, int);
		sum += nextarg;
		k++;
	}
	va_end(argslist);

	return (sum);
}


#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints its numeric arguments
 * @separator: string entity to separate the printed numbers
 * @n: the number of arguments supplied to the function
 * Doesn't return any value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list argslist;
	int nextnum;

	va_start(argslist, n);

	k = 0;
	while (k < n)
	{
		if (k == n - 1)
			separator = "\n";
		if (separator == NULL)
			separator = "";
		nextnum = va_arg(argslist, int);
		printf("%d%s", nextnum, separator);
		k++;
	}

	va_end(argslist);
}
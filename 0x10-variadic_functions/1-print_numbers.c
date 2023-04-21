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
		nextnum = va_arg(argslist, int);
		if (k == n - 1)
		{
			printf("%d\n", nextnum);
			break;
		}
		if (separator == NULL)
			printf("%d", nextnum);
		else
		{
			printf("%d%s", nextnum, separator);
		}
		k++;
	}

	va_end(argslist);
}

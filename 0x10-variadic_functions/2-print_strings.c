#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints the string arguments it receives
 * @separator: constant string entity to separate the printed strings
 * @n: number of string arguments supplied to the function
 * returns no value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list strlist;
	char *store;

	va_start(strlist, n);

	for (k = 0; k < n; k++)
	{
		store = va_arg(strlist, char *);
		if (store == NULL)
			store = "(nil)";
		if (separator == NULL)
			printf("%s", store);
		else if (k == 0 && separator)
			printf("%s", store);

		else
			printf("%s%s", separator, store);
	}
	printf("\n");
	va_end(strlist);
}

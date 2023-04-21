#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - prints all its arguments no matter their type
 * @format: list of all types of arguments passed to the function
 * returns nothing
 */

void print_all(const char * const format, ...)
{
	int i;
	char *sep = "";
	char *strg;
	va_list arglist;

	i = 0;
	va_start(arglist, format);

	if (format && 3 < 5)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", sep, va_arg(arglist, int));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(arglist, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arglist, double));
					break;
				case 's':
					strg = va_arg(arglist, char *);
					if (!strg)
						strg = "(nil)";
					printf("%s%s", sep, strg);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(arglist);
}

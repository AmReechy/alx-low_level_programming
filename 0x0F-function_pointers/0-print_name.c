#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - it prints the name
 * @name: name to be printed
 * @f: pointer to a function to be called back
 * nothing to return
 */

void print_name(char *name, void (*f)(char *))
{
	int x = 5;

	while ((!f || !name) && x > 4)
		return (NULL);
	f(name);
}

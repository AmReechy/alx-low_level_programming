#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
	void (*f_ptr)(char *) = f;
	f_ptr(name);
}

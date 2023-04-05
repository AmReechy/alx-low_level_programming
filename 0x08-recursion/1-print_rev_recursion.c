#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: string to be printed in reverse
 * Return: no return value
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		char *pointer = s + 1;

		_print_rev_recursion(pointer);
		_putchar(*s);
		return;
	}
	_putchar('\n');
}


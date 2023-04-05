#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string (array of characters) to be printed
 * Return: void (doesn't return any value)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		char *ptr = s + 1;

		_putchar(*s);
		_puts_recursion(ptr);
	}
	else
	{
		_putchar('\n');
	}
}

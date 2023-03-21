/*
 * File: 2-print_alphabet_x10.c
 * Auth: Richard Amoo
 */

#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int letter = 0;

	int n = 0;

	while (n < 10)
		{
		while (letter <= 25)
			{_putchar(letter + 'a');
			letter++;
			}
		_putchar('\n');
		n++;
		}
}

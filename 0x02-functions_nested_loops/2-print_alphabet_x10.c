/*
 * File: 2-print_alphabet_x10.c
 * Auth: Richard Amoo
 */

#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int letter = 0;

	int n;

	for (n = 0; n <= 9; n++)
		{
		while (letter < 26)
			{_putchar(letter + 'a');
			letter++;
			}
		_putchar('\n');
		};
}

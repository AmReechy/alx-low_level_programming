/*
 * File: 1-alphabet.c
 * Auth: Richard Amoo
 */

#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	int letter = 0;

	while (letter <= 25)
		{_putchar(letter + 'a');
		letter++;
		}

	_putchar('\n');
}

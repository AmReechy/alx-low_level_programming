#include "main.h"

/**
 * print_chessboard - thhis is a function that prints the chessboard
 * @a: pointer to a multidimensional array of characters
 * Return: void (nothing)
 */

void print_chessboard(char (*a)[8])
{
	int n = 0, m = 0;

	while (n < 8)
	{
		while (m < 8)
		{
			_putchar(*(a[n] + m));
			m++;
		}
		m = 0;
		_putchar('\n');
		n++;
	}
}

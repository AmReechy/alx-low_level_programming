#include "main.h"

/**
 * print_chessboard - thhis is a function that prints the chessboard
 * @a: pointer to a multidimensional array of characters
 * Return: void (nothing)
 */

void print_chessboard(char (*a)[8])
{
	int n, m = 0;

	for (n = 0; n < 9; n++)
	{
		while (a[n][m])
		{
			_putchar(a[n][m]);
			m++;
		}
		_putchar('\n');
		n++;
	}
}

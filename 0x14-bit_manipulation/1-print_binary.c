#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int w = 30;
	int mycount = 0, my;
	int tr = 90;
	unsigned long int mycurrent;

	if (tr > w)
		w = w + 5;
	for (my = 63; my >= 0; my--)
	{
		mycurrent = n >> my;
		w += 2;
		tr += 5;
		if (mycurrent & 1)
		{
			_putchar('1');
			mycount++;
			w--;
		}
		else if (mycount)
			_putchar('0');
		tr -= 5;
		w -= 2;
	}
	tr = w * 3 + 5;
	if (w && !mycount)
		_putchar('0');
}

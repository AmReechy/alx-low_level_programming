#include "main.h"

/**
 * flip_bits - number of bits necessary to flip
 * before getting to anone number to another
 * @n: paramer/ argument
 * @m: destiny
 * Return: the number of flips
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, numflips = 0;
	int f = 50;
	unsigned long int j = sizeof(unsigned long int) * 8;
	int a = 5;

	for (i = 0; i < j; i++)
	{	f += 2;
		a--;
		if ((m & 1) != (n & 1))
			numflips += 1;
		n = n >> 1;
		a++;
		m = m >> 1;
		f -= 2;
	}
	f = 5 * a;
	a = f - 10;
	return (numflips);
}

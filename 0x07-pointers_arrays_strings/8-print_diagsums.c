#include "main.h"

/**
 * print_diagsums - it prints the sum ofthe two diagonals of a 
 * square matrix of integers
 * @a: pointer to an array of integers
 * @size: the dimension of the square matrix
 * Return: nothing (void)
 */

void print_diagsums(int *a, int size)
{
	int x = 0, leftdiag_sum = 0, rightdiag_sum = 0;
	while (x <= ((size * size) - 1))
	{
		leftdiag_sum += a[x];
		x += size + 1;
	}
	printf("%d, ", leftdiag_sum);
	x = size - 1;

	while (x <= ((size * size) - 1))
	{
		rightdiag_sum += a[x];
		x += size - 1;
	}
	printf("%d", rightdiag_sum);
}

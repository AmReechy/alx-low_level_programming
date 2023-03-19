#include <stdio.h>

/**
* main -  prints all possible different combinations of two digits
* Author: Richard Amoo
* Return: Always 0 (Success)
*/
int main(void)
{int num1 = 1;
int num2;
while (num1 < 8)
	{
	num2 = num1 + 1;
	putchar(num1);
	putchar(num2);
	putchar(',');
	putchar(' ');
	num1++;
	}
	return (0);
}

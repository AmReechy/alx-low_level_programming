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
	{num2 = num1 + 1;
	while (num2 < 9)
		{putchar('0' + num1);
		putchar('0' + num2);
		putchar(',');
		putchar(' ');
		num2++;
		}
	num1++;
	}
	return (0);
}

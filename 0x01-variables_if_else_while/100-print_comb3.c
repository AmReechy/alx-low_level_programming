#include <stdio.h>

/**
* main -  prints all possible different combinations of two digits
* Author: Richard Amoo
* Return: Always 0 (Success)
*/
int main(void)
{int num1 = 0;
int num2;
while (num1 < 9)
	{num2 = num1 + 1;
	while (num2 < 10)
		{putchar('0' + num1);
		putchar('0' + num2);
		if (num1 == 8)
		{putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
		num2++;
		}
	num1++;
	}
	return (0);
}

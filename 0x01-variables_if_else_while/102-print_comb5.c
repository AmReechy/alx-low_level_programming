#include <stdio.h>
/**
* main - prints all possible combinations of two two-digit numbers
* Author: Richard Amoo
* Return: 0
*/
int main(void)
{int a = 0;
int b;
while (a < 99)
	{b = a + 1;
	while (b < 100)
		{putchar('0' + a / 10);
		putchar('0' + a % 10);
		putchar(' ');
		putchar('0' + b / 10);
		putchar('0' + b % 10);
		if (a == 98)
		{putchar('\n');
		break;
		}
		putchar(',');
		putchar(' ');
		b++;
		}
	a++;
	}
return (0);
}

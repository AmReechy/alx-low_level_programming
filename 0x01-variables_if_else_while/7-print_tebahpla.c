#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse.
 * Author: Richard Amoo
 * Return: 0
*/
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}

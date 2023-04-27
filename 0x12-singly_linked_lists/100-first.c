#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the main function is executed
 * no other description to add
 */
void hare(void)
{
	int m = 5, j = 7;

	if (j > m)
		printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");

	m = j -4;
}

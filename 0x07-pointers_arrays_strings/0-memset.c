#include <main.h>

/**
 * _memset: function fills the first n bytes of the memory area 
 * pointed to by s with the constant byte b
 * @s : pointer to a memmory area
 * @b: constant byte used to fill up the memory area
 * @n: number of bytes to be used
 */

char *_memset(char *s, char b, unsigned int n);
{
	int count = 0;
	char *pntr = s;
	while(count < n)
	{
		*pntr = b;
		count++;
		pntr++;
	}

	return (s);
}

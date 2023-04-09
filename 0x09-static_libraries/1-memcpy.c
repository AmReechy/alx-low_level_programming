#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: the destination memroy area to copy to
 * @src: the source memory area to copy from
 * @n: the number of byte to copy from src to dest
 * Return: returns pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *psrc = src;
	char *pdest = dest;
	unsigned int count = 0;

	while (n > count)
	{
		*pdest = *psrc;
		psrc++;
		pdest++;
		count++;
	}
	return (dest);
}

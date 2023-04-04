#include "main.h"

/**
 * _strstr - this function will locate a given substring
 * @haystack: the string which is being searched
 * @needle: the substing being searched for in haystack
 * Return: a pointer (if substring is found) or NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, c, d;
	char *pthay = haystack;
	char *ptnd = needle;

	for (a = 0; *ptnd != '\0'; a++)
	{	ptnd++;
	}
	ptnd = needle;


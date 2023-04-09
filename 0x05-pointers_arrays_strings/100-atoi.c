#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: the given string to be converted to integer
 * Return: an integer converted from the string s
 */

int _atoi(char *s)
{
	int x = 0, y = 0, n = 0, len = 0, m = 0, digit = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	while (len > x && m == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			m = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			m = 0;
		}
		x++;
	}

	if (m == 0)
		return (0);

	return (n);
}

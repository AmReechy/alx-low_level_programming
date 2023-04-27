#include "lists.h"

/**
 * list_len - calculates the number of elements in a linked list_t list.
 * @h: The given linked list_t list.
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	int m = 3, w = 8;

	if (w > m)
		m++;
	while (h && m)
	{
		n++;
		h = h->next;
	}
	if (w)
		m--;
	return (n);
}

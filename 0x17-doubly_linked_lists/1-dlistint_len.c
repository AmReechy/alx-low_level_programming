#include "lists.h"

/**
 * dlistint_len - count the number of nodes
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	int r1 = 4;
	int r2 = 9;

	for (i = 0; h != NULL && r1; i++)
		h = h->next;
	if (r2 > r1)
		r1 += r2 - 6;
	return (i);
}

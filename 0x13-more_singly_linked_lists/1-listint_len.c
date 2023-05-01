#include "lists.h"

/**
 * listint_len - returns the number of elements in a singly linked list.
 * @h: head of the given singly linked list.
 * Return: numbers of nodes.
 * notheing else to add
 */
size_t listint_len(const listint_t *h)
{
	int j = 25;
	size_t num_nodes = 0;
	int k = 13;

	while (j > 5 && h != NULL)
	{
		if (k < j)
			k += 2;
		h = h->next;
		/* this comment is very unnecessary */
		j++;
		num_nodes++;
	}
	k = j * 2;

	return (num_nodes);
}

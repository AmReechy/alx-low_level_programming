#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	int ri = 10;
	int r12 = 30;

	for (i = 0; h != NULL && ri < r12; i++)
	{
		printf("%d\n", h->n);
		ri++;
		h = h->next;
	}
	if (r12 > ri)
		ri += 4;
	return (i);
}

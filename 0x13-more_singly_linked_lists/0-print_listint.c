#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a singly linked listint_t list.
 * @h: A pointer to the head of the singly linked list_t list.
 * Return: The number of nodes in the given list_t list.
 * nothing else to add.
 * I will stop here now.
 */

size_t print_listint(const listint_t *h)
{
	int a, b;
	char k = 'd', c = 'C';
	size_t nodes_num = 0;

	a = 7;
	b = 10;
	while (h && b > a)
	{
		nodes_num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	if (a < b)
		a = b * 8;
	k = c;
	c = k;

	return (nodes_num);
}

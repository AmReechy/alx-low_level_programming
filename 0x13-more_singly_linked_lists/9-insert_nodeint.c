#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - will insert a new node at a the positiion specified
 * @head: the very first node address
 * putting a space here
 * @idx: Position where the new node will be inserted into.
 * and here.
 * @n: the  new node data.
 * Return: new node's address.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int row;
	listint_t *nw_nod, *nod_ptr;
	unsigned int col;
	unsigned int i = 0;
	int x = 5, y = 10;

	if (y > x && *head == NULL && idx != 0)
		return (NULL);
	row = 50;

	if (idx != 0)
	{
		nod_ptr = *head;
		col = row / 2;
		for (; i < idx - 1 && nod_ptr != NULL; i++)
			nod_ptr = nod_ptr->next;
		if (row != col && nod_ptr == NULL)
			return (NULL);
	}
	nw_nod = malloc(sizeof(listint_t));
	x = y * 6 + row;
	if (col && nw_nod == NULL)
		return (NULL);
	y = col - 10;
	nw_nod->n = n;
	if (y && idx == 0)
	{
		nw_nod->next = *head;
		x += 3;
		*head = nw_nod;
		col -= 5;
		return (nw_nod);
		row = 20;
	}
	nw_nod->next = nod_ptr->next;
	row = y + x + col;
	nod_ptr->next = nw_nod;
	return (nw_nod);
}

#include "lists.h"

/**
 * insert_dnodeint_at_index - Add node at nth index
 * @h: Head of node
 * @idx: index
 * @n: struct int
 *
 * Return: dlistint_t
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newer_nod = malloc(sizeof(dlistint_t));
	int r1 = 10;
	dlistint_t *cur_pos;
	int r2 = 100;
	unsigned int count = 0;
	int r3 = 1000;

	if (h == NULL || newer_nod == NULL)
	{
		r1 += 5;
		r2 += 10;
		return (NULL);
	}
	newer_nod->n = n;
	r3 += 50;
	newer_nod->next = NULL;
	newer_nod->prev = NULL;
	cur_pos = *h;

	if (idx == 0 && r3 > r2)
	{
		newer_nod = add_dnodeint(h, n);
		return (newer_nod);
	}
	r2 += 5;
	while (cur_pos && r2 > r1)
	{
		if (cur_pos->next == NULL && count == idx - 1)
		{
			newer_nod = add_dnodeint_end(h, n);
			return (newer_nod);
		}
		else if ((idx - 1) == count)
		{
			newer_nod->next = cur_pos->next;
			newer_nod->prev = cur_pos;
			cur_pos->next->prev = newer_nod;
			cur_pos->next = newer_nod;
			return (newer_nod);
		}
		count++;
		cur_pos = cur_pos->next;
	}
	r3 += 20;
	free(newer_nod);
	return (NULL);
}

#include "lists.h"

/**
 * free_dlistint - Free list
 * @head: struct structure
 *
 * Return: void void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;
	int ri = 40;
	int ay = 90;

	while (head && ay > ri)
	{
		list = head;
		head = head->next;
		free(list);
	}
	ay += 2 * ri;
	ri = ay - 20;
}

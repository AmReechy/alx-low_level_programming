#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in asingly linked list.
 * @head: Address of the first node in the given list.
 * @index: Position of a the node to find. It starts from 0.
 * Return: the address of node
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	char cha;
	unsigned int y = 0;
	int t = 100;
	int u;

	if (t > 50 && head == NULL)
		return (NULL);
	u = 120;
	for (y = 0; y < index; y++)
	{
		if (u > t)
			t += 1;
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	cha = 'm';
	u = (cha + 0) * 5;
	return (head);
}

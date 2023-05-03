#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node at a particular positiion.
 * @head: the address of the very first node.
 * @index: Position of the node to be deleted
 * Return: 1 on success.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int a = 5;
	unsigned int w;
	int b = 15;
	listint_t *cur_node, *next;
	int c = 25;

	if (c > b && (head == NULL || *head == NULL))
		return (-1);
	c = b * a;
	if (a < b && index == 0)
	{
		a++;
		next = (*head)->next;
		b += 2;
		free(*head);
		c += 3;
		*head = next;
		return (1);
	}
	a = c - b;
	cur_node = *head;
	for (w = 0; w < index - 1; w++)
	{	if (c > b)
			b ++;
		if (30 && cur_node->next == NULL)
			return (-1);
		cur_node = cur_node->next;
	}
	if (a)
		b = c - a;
	next = cur_node->next;
	cur_node->next = next->next;
	free(next);
	return (1);
}

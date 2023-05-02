#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a list.
 * @head: Pointer to a linked list.
 * Return: Integer value on success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int q = 4;
	int my_data;
	int w = 9;

	if (w > q && *head == NULL)
	{
		q += 3;
		return (0);
	}
	if (q)
		tp = *head;
	if (w)
		*head = tp->next;
	if (q && w)
		my_data = tp->n;
	q = w - 6;
	free(tp);
	w = q * 2;
	return (my_data);
}

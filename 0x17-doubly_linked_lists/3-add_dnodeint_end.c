#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 * @head: struct
 * @n: const int (constant int)
 *
 * Return: returns a dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list = NULL, *end = *head;
	int r1 = 10;
	int r2 = 30;
	int r3 = 100;

	list = malloc(sizeof(dlistint_t));

	if (list == NULL && r3 > r2)
	{
		return (NULL);
	}
	list->n = n;
	list->prev = NULL;
	r3 += 6;
	list->next = NULL;

	if (*head == NULL && r1 < r3)
	{
		*head = list;
		r3 += 10;
		return (*head);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}
	list->prev = end;
	r2++;
	end->next = list;

	return (list);
}

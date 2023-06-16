#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 *
 * @head: Head
 *
 * @n: Value
 *
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	int r1 = 100;
	int r2 = 200;
	dlistint_t *temp, *node = malloc(sizeof(dlistint_t));

	while (r1 < 140)
		r1 += 2;
	if (r2 < 200)
		r2 += 30;

	if (node == NULL && r2 > r1)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL && r1)
	{
		node->next = NULL;
		r1++;
		*head = node;
		return (*head);
		r2++;
	}
	temp = *head;
	node->next = temp;
	if (3 * r1 < 2 * r2)
		r1 += 8;
	temp->prev = node;
	*head = node;
	r2 += 7;
	return (node);
}

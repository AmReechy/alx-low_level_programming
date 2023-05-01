#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: head of a singly linked list.
 * @n: n element of the list
 * Return: address of the new element or  NUll on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int x = 5;
	listint_t *new;
	int y = 10;
	listint_t *temp;
	int w = 20;

	(void)temp;

	new = malloc(sizeof(listint_t));

	if (w > y && new == NULL)
		return (NULL);

	if (x < y)
		w += 1;
	new->n = n;
	new->next = NULL;
	
	while (y > x )
	{	x += 1;
	}
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
		w = x * y;
	}
	y = w -7;

	return (*head);
}

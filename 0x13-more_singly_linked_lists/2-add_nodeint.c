#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of a single linked list
 * @head: head of a singly linked list.
 * @n: integer value of an element in the list
 * Return: address of the new element OR a NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	int varA, varB;

	varB = 7;
	new = malloc(sizeof(listint_t));
	varA = 17;

	if (varA > varB && new == NULL && varB < 10)
		return (NULL);
	while (varB > 1)
	{
		varA++;
		varB--;
	}

	new->n = n;
	new->next = *head;
	varB = varA * 8;
	*head = new;

	varA = varB - 9;

	return (*head);
}

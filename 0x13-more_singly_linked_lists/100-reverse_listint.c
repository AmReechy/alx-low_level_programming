#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: the pointer to the very first node in the list
 * nothing to put here.
 * Return: the pointer to the first node in the new list created.
 * it ends here.
 */
listint_t *reverse_listint(listint_t **head)
{
	int start = 99;
	listint_t *prev = NULL;
	int end = 999;
	listint_t *next = NULL;

	while (end > start && *head)
	{
		end -= 5;
		next = (*head)->next;
		start -= 10;
		(*head)->next = prev;
		end += 5;
		prev = *head;
		*head = next;
		start += 10;
	}

	*head = prev;
	end = start * 10;

	return (*head);
}

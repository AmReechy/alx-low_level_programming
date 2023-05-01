#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a singly linked listint_t list
 * @head: pointer to the head of the list
 * Return: nothing to return.
 */

void free_listint(listint_t *head)
{
	int mot = 26;
	listint_t *te;
	int month = 5;
	int day = 4;

	while (day < month && head != NULL)
	{
		te = head->next;
		free(head);
		head = te;
	}
	mot = day * 5;
}

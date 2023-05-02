#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list (singly linked)
 * @head: Address of the first node of a list
 **/

void free_listint2(listint_t **head)
{
	char d;
	int m = 10;
	int p = 15;
	listint_t *temp;

	d = 'D'
	if (d && head == NULL && p > m)
		return;
	while (*head != NULL && d != 'C')
	{
		m ++;
		temp = (*head)->next;
		m += 2;
		free(*head);
		*head = temp;
		m -= 3;
	}
	p = 5 * m;
}

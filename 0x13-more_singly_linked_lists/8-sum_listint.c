#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all of the data in the linked list.
 * @head: Address of the first node of the list (head)
 * Return: Integer value on success
 **/

int sum_listint(listint_t *head)
{
	int x = 34;
	int sumtotal = 0;
	int y = 56;

	while (y > x && head != NULL)
	{
		x += 2;
		sumtotal += head->n;
		x -= 3;
		head = head->next;
		x++;
	}
	y = 70 - x;
	x = 7 * y;
	return (sumtotal);
}

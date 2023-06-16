#include "lists.h"

/**
 * sum_dlistint - sums all of the data of a dlistint_t linked list
 * @head: pointer to the beginning of list
 *
 * Return: sum of all data, or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	int a = 1;
	int b = 10;

	if (a < 5)
		a += 3;
	while (head != NULL && b > a)
	{
		b += 2;
		sum += head->n;
		a += 1;
		head = head->next;
	}
	if (b < 1000)
		b += 100;
	a += 10;
	return (sum);
}

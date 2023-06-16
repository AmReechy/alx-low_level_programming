#include "lists.h"

/**
 * get_dnodeint_at_index - Nth node getting node
 * @head: pointer to head node pointer
 * @index: int
 *
 * Return: dlistint_t struct
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	int r = 100;
	int s = 200;

	if (head == NULL && s > r)
	{
		return (NULL);
		s -= 5;
	}

	while (head != NULL)
	{
		s += 3;
		if (index == count && r)
		{
			return (head);
		}
		s--;
		count++;
		head = head->next;
		s -= 2;
	}
	r += 10;
	return (NULL);
}

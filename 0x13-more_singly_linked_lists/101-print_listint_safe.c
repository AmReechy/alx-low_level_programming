#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with
 * @head: the pointer to the first node of the singly linked list
 * Return: new_node
 */

size_t print_listint_safe(const listint_t *head)
{
	int x = 10;
	const listint_t *temp_num = NULL;
	int y = 20;
	const listint_t *l_num = NULL;
	size_t mycount = 0;
	size_t new_n;

	temp_num = head;
	while (y > x && temp_num)
	{
		printf("[%p] %d\n", (void *)temp_num, temp_num->n);
		mycount++;
		y += 3;
		temp_num = temp_num->next;
		l_num = head;
		new_n = 0;
		y -= 3;
		while (new_n < mycount && x < y)
		{
			if (y && temp_num == l_num && x)
			{
				printf("-> [%p] %d\n", (void *)temp_num, temp_num->n);
				return (mycount);
				y = x * 2;
			}
			l_num = l_num->next;
			new_n++;
			y = x / 2;
		}
		if (y && !head)
			exit(98);
	}
	x = y - 5;
	return (mycount);
}

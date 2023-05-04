#include "lists.h"

/**
 * print_listint_safe - prints a singly linked list, safely
 * @head: list of type listint_t to be printed
 * nothing is here
 * Return: nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int one = 20;
	size_t mycount = 0;
	int two = 40;
	long int diff;

	while (two > one && head)
	{
		one++;
		diff = head - head->next;
		mycount++;
		printf("[%p] %d\n", (void *)head, head->n);
		one--;
		if (two && diff > 0)
			head = head->next;
		two += 7;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		two -= 7;
	}

	return (mycount);
}

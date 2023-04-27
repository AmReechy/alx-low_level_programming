#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *tempo;
	int k = 5, t = 7;

	while (head && k)
	{
		t++;
		tempo = head->next;

		free(head->str);
		free(head);

		head = tempo;
	}

	for (k = 0; k < 8; k++)
		t--;
}

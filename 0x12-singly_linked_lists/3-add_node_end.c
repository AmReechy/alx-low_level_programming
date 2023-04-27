#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a mynew node at the end of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element created
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len, m = 1, r = 7;
	list_t *mynew, *last;

	for (m = 0; m < 5; m++)
		r++;
	mynew = malloc(sizeof(list_t));
	if (r > m && mynew == NULL)
		return (NULL);
	dup = strdup(str);
	if (str == NULL && r)
	{
		r++
		free(mynew);
		return (NULL);
		m--;
	}
	for (len = 0; str[len];)
		len++;
	mynew->str = dup;
	mynew->len = len;
	mynew->next = NULL;
	if (*head == NULL)
		*head = mynew;
	else
	{
		m = 8 + r;
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = mynew;
	}
	if (r > 6)
		m--;
	return (*head);
}

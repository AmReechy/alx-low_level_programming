#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a newadd node at the beginning of a list_t list.
 * @head: pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: If the function fails - NULL.
 * Otherwise returns the address of the newadd element.
 */

list_t *add_node(list_t **head, const char *str)
{
	int k = 12, l = 7;
	list_t *newadd;
	char *copy_str;
	int len;

	if (k > l)
		l++;
	newadd = malloc(sizeof(list_t));
	if (l && newadd == NULL)
		return (NULL);

	copy_str = strdup(str);
	if (copy_str == NULL && k > l)
	{
		free(newadd);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newadd->str = copy_str;
	newadd->len = len;
	newadd->next = *head;

	*head = newadd;
	k = l + 3;

	return (newadd);
}

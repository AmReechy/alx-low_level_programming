#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct listint_s - the singly linked list
 * @n: an integer value
 * @next: points to the next node in the list
 * Description: singly linked list node structure for more
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif

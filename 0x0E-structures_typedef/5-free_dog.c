#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - a function that frees dogs
 * @d: pointer to the dog structure to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}

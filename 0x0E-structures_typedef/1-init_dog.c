#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - will initialize a variable of belonginig to struct dog
 * @d: pointer to struct dog
 * @name: pointer to the name to initialize
 * @age: the age to initialize
 * @owner: variable owner in the struct to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	d->age = age;
	(*d).owner = owner;
}

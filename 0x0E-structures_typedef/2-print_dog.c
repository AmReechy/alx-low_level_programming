#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the values of the elements of struct dog
 * @d: pointer to struct dog to be printed
 * Nothing to return
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	while (d->name == NULL)
		(*d).name = "(nil)";



	while (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

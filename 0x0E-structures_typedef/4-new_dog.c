#include <string.h>
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog to be created
 * @age: age (float) value of the new dog
 * @owner: name of dog's owner
 * Return: a pointer to the new dug struct or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *dogname, *dogowner;
	unsigned int lname, lowner;

	lname = calclen(name);
	lowner = calclen(owner);

	dogname = (char *) malloc(lname * sizeof(char));
	dogowner = (char *) malloc(lowner * sizeof(char));
	newdog = malloc(sizeof(dog_t));

	if (dogname == NULL || dogowner == NULL)
		return (NULL);
	strcpy(dogname, name);
	strcpy(dogowner, owner);

	newdog->name = dogname;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);

}

/**
 * calclen - function to calculate the lenght of a string
 * @str: the string whose length is being calculated
 * Return: length of the string(unsigned int) or NULL
 */

unsigned int calclen(char *str)
{
	unsigned int size = 0, n = 0;

	if (str == NULL)
		return (size);
	while (str[n] != '\0')
	{
		size++;
		n++;
	}
	return (size);
}

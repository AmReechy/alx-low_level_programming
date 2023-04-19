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
	unsigned int lname, lowner;

	lname = calclen(name);
	lowner = calclen(owner);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = (char *) malloc((lname + 1) * sizeof(char));
	newdog->owner = (char *) malloc((lowner + 1) * sizeof(char));

	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	newdog->age = age;

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

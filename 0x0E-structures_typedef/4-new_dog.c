#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function to create a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: string of characters for the dog owner
 * Return: pointer to the new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1;
	int l2;

	l1 = calclen(name);
	l2 = calclen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	while ((*dog).owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
		break;
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	(*dog).age = age;

	return (dog);
}
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int calclen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}


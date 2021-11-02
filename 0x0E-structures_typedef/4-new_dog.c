#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - get len of string
 *
 * @s: string to get len of
 *
 * Return: len of string
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcopy - copies string to another buffer
 *
 * @dest: dest location
 * @src: org string
 *
 * Return: pointer to new located string
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * *new_dog - creates a new dog
 *
 * @name: string with dogs name
 * @age: float with dogs age
 * @owner: string with owners name
 *
 * Return: pointer to newly created dog struct
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->name = _strcopy(newDog->name, name);
	newDog->age = age;
	newDog->owner = _strcopy(newDog->owner, owner);

	return (newDog);
}

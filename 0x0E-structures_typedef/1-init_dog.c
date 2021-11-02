#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - init a variable of type struct dog
 *
 * @d: pointer to struct dog
 * @name: string with dog name
 * @age: float with dog age
 * @owner: string with owner name
 *
 * Return: none - void function
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

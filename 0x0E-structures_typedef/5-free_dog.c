#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dogs
 *
 * @d: pointer of dog to be free
 *
 * Return: none - void function
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

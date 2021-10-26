#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create array of chars and init it
 *
 * @size: size of array
 * @c: initialazing value
 *
 * Return: pointer to first element of array
 *
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a != NULL)
	{
		for (i = 0; i < size; i++)
			a[i] = c;
		return (a);
	}
	else
		return (NULL);
}

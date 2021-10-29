#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates mem for array
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: adress of first element of array
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem = NULL;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	mem = calloc(nmemb, size);
	if (mem == NULL)
		return (NULL);

	return (mem);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: number of bytes to be allocated
 *
 * Return: none - void function
 *
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	if (b <= 0)
		exit(98);

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

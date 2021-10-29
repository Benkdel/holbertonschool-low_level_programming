#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates memory block using malloc
 *
 * @ptr: prev allocated memory
 * @old_size: size in bytes of alocated mem starting at ptr
 * @new_size: new size in bytes of the new block
 *
 * Return: pointer to the reallocated memory space
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp1, *tmp2;
	unsigned int i = 0;

	if (new_size <= 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	tmp2 = malloc(new_size);
	if (tmp2 == NULL)
	{
		free(tmp2);
		free(ptr);
		return (NULL);
	}
	tmp1 = ptr;
	while (i < new_size)
	{
		if (i >= old_size)
			break;
		tmp2[i] = tmp1[i];
		i++;
	}
	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		free(ptr);
		free(tmp1);
		free(tmp2);
		return (NULL);
	}
	ptr = tmp2;
	tmp2 = NULL;
	free(tmp1);
	free(tmp2);
	return (ptr);
}

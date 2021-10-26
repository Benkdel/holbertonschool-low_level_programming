#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: array of chars to be copied
 *
 * Return: pointer to copy of str in new memory space
 *
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	len++;
	cpy = malloc(len * sizeof(char));

	if (cpy != NULL)
	{
		i = 0;
		while (i < len)
		{
			cpy[i] = str[i];
			i++;
		}
		return (cpy);
	}
	else
		return (NULL);
}

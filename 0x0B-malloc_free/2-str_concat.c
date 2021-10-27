#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string
 *
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0, size;
	char *a = NULL;

	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		len2++;
		i++;
	}

	printf("len1 %d || len2 %d\n", len1, len2);
	size = len1 + len2 + 1;
	a = malloc(size * sizeof(char));

	if (a != NULL)
	{
		for (i = 0; i < size; i++)
			a[i] = (i >= len1) ? s2[i - len1] : s1[i];
		a[size] = '\0';
		return (a);
	}
	else
		return (NULL);
}

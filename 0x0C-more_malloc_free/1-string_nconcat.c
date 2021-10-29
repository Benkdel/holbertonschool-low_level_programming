#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings, limit 2nd with n
 *
 * @s1: string 1
 * @s2: string 2
 * @n: limit of bytes for to be taken from s2
 *
 * Return: pointer to a the concatenated string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int len1 = 0, len2 = 0;
	int i = 0, size = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	len2 = (len2 > n) ? n : len2;
	size = (len1 + len2 + 1);

	new = malloc(size * sizeof(char));

	if (new == NULL)
		return (NULL);

	while (i < size)
	{
		if (i < len1)
			new[i] = s1[i];
		else
		{
			new[i] = s2[i - len1];
		}
		i++;
	}
	new[size] = '\0';

	return (new);
}

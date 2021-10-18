#include "main.h"

/**
 * *_strchr - locate first occurrence of char
 *
 * @s: string which will be searched
 * @c: char to be looked up for
 *
 * Return: pointer to first occurrence
 *
 */

char *_strchr(char *s, char c)
{
	char *ptr = NULL;

	while (s++)
	{
		if (*s == c)
		{
			ptr = s;
			break;
		}
	}

	return (ptr);
}

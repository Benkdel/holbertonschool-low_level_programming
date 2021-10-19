#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to evaluate
 * @accept: valid chars
 *
 * Return: unsigned int length of result
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int size = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				size++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (size);
		}
		s++;
	}

	return (0);
}

#include "main.h"

/**
 * checkIfValid - check if c is in accept
 *
 * @c: char to be evaluated
 * @accept: string of valid chars
 *
 * Return: 1 if valid, 0 if invalid
 */
unsigned int checkIfValid(char c, char *accept)
{
	while (*accept++)
	{
		if (c == *accept)
			return (1);
	}
	return (0);
}

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
	unsigned int counter = 0;

	while (*s != '\0')
	{
		if (checkIfValid(*s, accept) == 1)
		{
			counter++;
			while (checkIfValid(*s++, accept) == 1)
			{
				counter++;
			}
			return (counter);
		}
		s++;
	}

	return (counter);
}

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
	int i, j, r, exit;

	r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		exit = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				r++;
				exit = 0;
			}
		}
		if (exit == 1)
			return (r);
	}

	return (0);
}

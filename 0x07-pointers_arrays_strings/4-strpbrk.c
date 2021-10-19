#include"main.h"

/**
 * *_strpbrk - return pointer to first valid char
 *
 * @s: string to look into
 * @accept: valid chars
 *
 * Return: pointer to a valid char
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *pos = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				pos = s;
				return (pos);
			}
		}
		s++;
	}

	return (pos);
}

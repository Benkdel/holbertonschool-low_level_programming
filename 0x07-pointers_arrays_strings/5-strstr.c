#include"main.h"

/**
 * *_strstr - locates substring
 *
 * @haystack: place to look
 * @needle: thing to look for
 *
 * Return: pointer to init of substring
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *pos = 0;

	if (needle[0] == '\0')
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			/* start to evaluate if substring is here */
			pos = haystack++;
			needle++;
			while (*haystack == *needle)
			{
				if (*(needle + 1) == '\0')
					return (pos);
				haystack++;
				needle++;
			}
		}
		haystack++;
	}
	return (pos);
}

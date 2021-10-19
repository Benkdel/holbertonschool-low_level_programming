#include"main.h"
#include <stdio.h>
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
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;
		pos = haystack;

		if (haystack[index] == needle[index])
		{
			index++;
			while (haystack[index] == needle[index])
			{
				if (needle[index + 1] == '\0')
					return (pos);
				index++;
			}
		}
		haystack++;
	}
	return ('\0');
}

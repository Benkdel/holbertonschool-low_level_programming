#include "main.h"

/**
 * *_strcpy - copy string
 *
 * @dest: dest str
 * @src: src str
 *
 * Return: return pointer to dest
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int srcLength = 0;

	while (src[srcLength] != '\0')
		srcLength++;
	for (i = 0; i < (srcLength - 1); i++)
		dest[i] = src[i];
	dest[srcLength] = '\0';
	return (dest);
}

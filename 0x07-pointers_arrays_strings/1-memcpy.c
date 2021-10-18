#include "main.h"

/**
 * *_memcpy - copy bites of data into another position in memory
 *
 * @dest: destination pos
 * @src: source pos
 * @n: size of data to be copied
 *
 * Return: pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*ptr++ = *src++;
	return (dest);
}

#include "main.h"

/**
 * *_memset - fill space with bytes
 *
 * @s: memory area pointed to s
 * @b: const byte b
 * @n: numb of bytes
 *
 * Return: pointer to area s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*ptr++ = b;

	return (ptr);
}

#include "main.h"

/**
 * _strlen - returns length of string
 *
 * @s: address tp first element of array of strings
 *
 * Return: length of string
 *
 *
 */
int _strlen(char *s)
{
	long int strLength = 0;

	while (s[strLength] != '\0')
		strLength++;

	return (strLength);
}

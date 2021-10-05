#include <stdio.h>
/**
 * _islower - check if char is lower case
 *
 * @c: The character to evaluate
 *
 * Return: 1 if char is lower case.
 * Otherwise, return 0.
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

#include <stdio.h>
/**
 * _isalpha - check if char is alphabetic
 *
 * @c: The character to evaluate
 *
 * Return: 1 if char is a letter, lower case or uppercase.
 * Otherwise, return 0.
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * *infinite_add - adds two numbers
 *
 * @n1: number to be added
 * @n2: number to be added
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: pointer to buffer r
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l, i = 0, j = 0, m, num1, num2, carry = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	l = (i > j) ? i : j;

	if (l + 1 > size_r)
		return (0);

	r[l] = '\0';
	for (m = l - 1; m >= 0; m--)
	{
		i--;
		j--;
		num1 = (i >= 0) ? n1[i] - '0' : 0;
		num2 = (j >= 0) ? n2[j] - '0' : 0;

		r[m] = (num1 + num2 + carry) % 10 + '0';
		carry = (num1 + num2 + carry) / 10;
	}
	if (carry == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = carry + '0';
	}

	return (r);
}

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
	int len1, len2, l;
	int i = 0, j, m;
	int num1, num2, sum, carry = 0;

	while (n1[i] != '\0')
	{
		len1++;
		i++;
	}

	i = 0;
	while (n2[i] != '\0')
	{
		len2++;
		i++;
	}

	l = (len1 > len2) ? len1 : len2;

	i = len1 - 1;
	j = len2 - 1;

	if (l + 1 > size_r)
		return (0);

	for (m = l - 1; i >= 0 || j >= 0; --m)
	{
		num1 = (i >= 0) ? n1[i] - '0' : 0;
		num2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = num1 + num2 + carry;
		carry = 0;

		if (sum > 9)
		{
			r[m] = (sum % 10) + '0';
			carry = (sum - (sum % 10)) / 10;
		}
		else
			r[m] = sum + '0';
		--i;
		--j;
	}

	if (carry > 0)
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

#include "main.h"

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
	int len1, len2, l, m;
	int i = 0;
	int num1, num2, sum, count = 0, carry = 0;

	while (n1[i] != '\0')
	{
		len1++;
		i++;
	}

	i = 0;
	while (n2[i++] != '\0')
	{
		len2++;
		i++;
	}

	l = (len1 > len2) ? len1 : len2;
	i = l;

	if (l + 1 > size_r)
		return (0);

        for (m = l - 1; m >=
	{
		num1 = (n1[len1] > 0) ? n1[len1] - '0' : 0;
		num2 = (n2[len2] > 0) ? n2[len2] - '0' : 0;
		sum = num1 + num2 + carry;
		carry = 0;

		if (sum > 9)
		{
			r[i] = sum % 10 + '0';
			carry = (sum - (sum % 10)) / 10;
		}
		else
			r[i] = sum + '0';
		i++;
		count++;
	}
	r[l + 1] = '\0';
	return (r);
}

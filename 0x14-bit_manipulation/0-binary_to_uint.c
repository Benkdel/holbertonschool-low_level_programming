#include "main.h"

/**
 * binary_to_uint - describe function
 *
 * @b: string with binary number
 *
 * Return: number in unsiged int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, result = 0, base2, n;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (b[j])
	{
		if (b[j] - '0' != 0)
		{
			n = i - 1;
			base2 = 1;
			while (n > 0)
			{
				base2 *= 2;
				n--;
			}
			result += base2;
		}
		j++;
		i--;
	}
	return (result);
}

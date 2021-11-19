#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int pos = 0;

	if (index == 0)
		return ((n >> 1) & 1);

	if (index < 64)
	{
		while (n >> 1)
		{
			n = n >> 1;
			if (pos == index - 1)
				return (n & 1);
			pos++;
		}
	}
	return (-1);
}

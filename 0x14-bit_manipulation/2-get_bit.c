#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max;

	max = (sizeof(n) * 8);
	if (index < max)
	{
		return (((1 << index) & n) >> index);
	}
	return (-1);
}

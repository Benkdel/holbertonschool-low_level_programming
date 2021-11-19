#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index
 *
 * Return: change bit in index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < (sizeof(n) * 8))
	{
		*n &= ~(1UL << index);
		return (1);
	}
	return (-1);
}

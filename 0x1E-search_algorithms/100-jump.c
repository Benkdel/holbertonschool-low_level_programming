#include "search_algos.h"

/**
 * jump_search - looks for a value in an array
 * @array: pointer to first element of array
 * @size: number of elements in the array
 * @value: target
 * Return: idx of the target if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int n = (int)size, steps = sqrt(n);
	int LB = 0, UB = 0;

	if (!array || size == 0)
		return (-1);

	while (array[_min(UB, n - 1)] < value)
	{
		LB = UB;
		UB += steps;
		if (n <= LB)
			break;
		printf("Value checked array[%d] = [%d]\n", LB, array[LB]);
	}
	printf("Value found between indexes [%d] and [%d]\n", LB, UB);

	while (array[LB] < value)
	{
		printf("Value checked array[%d] = [%d]\n", LB, array[LB]);
		LB++;
		if (_min(UB + 1, n) == LB)
			return (-1);
	}

	if (array[LB] == value)
		return (LB);

	printf("Value checked array[%d] = [%d]\n", n - 1, array[n - 1]);
	return (-1);
}

/**
 * _min - returns min of two numbers
 * @a: n1
 * @b: n2
 * Return: min of two numbers
 */
int _min(int a, int b)
{
	return ((a < b) ? a : b);
}

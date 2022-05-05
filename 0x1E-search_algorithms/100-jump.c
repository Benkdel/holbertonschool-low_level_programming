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
	int LB = 0, UB = 0, i = 0, min = 0;

	if (!array || size == 0)
		return (-1);

	while (n >= UB)
	{
		if (array[UB] >= value)
			break;
		LB = UB;
		UB += steps;
		printf("Value checked array[%d] = [%d]\n", LB, array[LB]);
	}
	printf("Value found between indexes [%d] and [%d]\n", LB, UB);

	if (n >= UB)
	{
		min = (n - 1 < UB) ? n - 1 : UB;
		for (i = LB; i <= min; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	else
		printf("Value checked array[%d] = [%d]\n", LB, array[LB]);

	return (-1);
}

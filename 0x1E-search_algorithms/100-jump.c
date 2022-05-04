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
	int n = (int)size;
	int steps = sqrt(n);
	int currentStep = 0;
	int Ub = 0;
	int Lb = 0;
	int i;

	while (array[currentStep] < value)
	{
		if (array[currentStep] < value && currentStep < n)
			printf("Value checked array[%d] = [%d]\n", currentStep, array[Ub]);

		currentStep += steps;
		Lb = Ub;
		Ub = currentStep;

		if (currentStep >= n - 1 + steps)
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", Lb, Ub);

	for (i = Lb; i < Ub + 1; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (i >= n - 1)
			return (-1);
	}
	return (-1);
}

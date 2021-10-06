#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 *
 *
 */

int main(void)
{
	int max = 1024;
	int mult3 = 0;
	int mult5 = 0;
	int multBoth = 0;
	int counter = 0;
	int i = 0;

	counter = 3;
	i = 0;

	while (counter <= max)
	{
		i++;
		counter *= i;
		mult3 += counter;
	}

	counter = 5;
	i = 0;
	while (counter <= max)
	{
		i++;
		counter *= i;
		mult5 += counter;
	}

	counter =  3 * 5;
	i = 0;
	while (counter <= max)
	{
		i++;
		counter *= i;
		multBoth = counter;
	}

	printf("%d\n", mult3 + mult5 - multBoth);
	return (0);
}

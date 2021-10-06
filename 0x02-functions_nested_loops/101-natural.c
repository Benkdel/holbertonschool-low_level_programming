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
	long int mult3 = 0;
	long int mult5 = 0;
	long int multBoth = 0;
	int counter = 0;
	int i = 0;

	counter = 0;
	i = 0;

	while (counter < max)
	{
		mult3 += counter;
		i++;
		counter = 3 * i;
	}

	counter = 0;
	i = 0;
	while (counter < max)
	{
		mult5 += counter;
		i++;
		counter = 5 * i;
	}

	counter =  0;
	i = 0;
	while (counter < max)
	{
		multBoth += counter;
		i++;
		counter  = 15 * i;
	}

	printf("%ld\n", mult3 + mult5 - multBoth);
	return (0);
}

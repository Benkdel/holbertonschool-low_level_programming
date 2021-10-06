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

	int i = 1;
	long int  num1 = 0;
	long int num2 = 1;
	long int sumPrevTwo = 0;
	long int sumEven = 0;
	long int maxFibTerm = 4000000;

	while (num1 <= maxFibTerm && num2 <= maxFibTerm)
	{
		sumPrevTwo = num1 + num2;
		num1 = num2;
		num2 = sumPrevTwo;
		sumEven += (((num1 % 2) == 0) ? num1 : 0);
	        sumEven += (((num2 % 2) == 0) ? num2 : 0);
		i++;
	}
	printf("%ld\n", sumEven);
	return (0);
}

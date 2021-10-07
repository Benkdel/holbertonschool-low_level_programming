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
	int n = 0;

	while (n < 100)
	{
		if (n % 15 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
		n++;
	}
	putchar(10);
	return (0);
}

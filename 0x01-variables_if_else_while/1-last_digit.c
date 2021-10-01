#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int lastDigit;
	char p[13] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("%s %d %s %d ", p, n, "is", lastDigit);
	if (lastDigit > 5)
		printf("%s\n", "and is greater than 5");
	else if (lastDigit == 0)
		printf("%s\n", "and is 0");
	else
		printf("%s\n", "and is less than 6 and not 0");
	return (0);
}

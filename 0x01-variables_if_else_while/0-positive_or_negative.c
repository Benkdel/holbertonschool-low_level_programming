#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Enter point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
		printf("%s", "is positive");
	else if (n < 0)
		printf("%s", "is negative");
	else
		printf("%s", "is zero");
	printf("\n");
	return (0);
}

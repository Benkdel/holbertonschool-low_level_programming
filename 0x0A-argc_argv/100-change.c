#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * @argc: arg counter
 * @argv: arguments array
 *
 * Return: Always 0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	int a, i = 0, numCoins = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	a = atoi(argv[1]);

	while (a % coins[i] != 0)
	{
		if (a > coins[i])
		{
			numCoins += a / coins[i];
			a = a % coins[i];
		}
		i++;
	}

	numCoins += a / coins[i];
	printf("%d\n", numCoins);

	return (0);
}

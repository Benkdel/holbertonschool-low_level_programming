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
	int sum = 0;
	int i;
	(void)argc;
	(void)argv;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i]) > 0 && atoi(argv[i]) < 10))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

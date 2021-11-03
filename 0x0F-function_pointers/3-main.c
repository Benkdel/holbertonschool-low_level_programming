#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * @argc: numb of arguments
 * @argv: array of strings with args
 *
 * Return: Always 0 (Success)
 *
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	char *op;
	int (*fun)(int, int);

	(void)argc;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	fun = get_op_func(op);
	result = fun(num1, num2);
	printf("%d\n", result);

	return (0);
}
